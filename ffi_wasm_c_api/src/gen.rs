use std::io::Write;

use crate::model::{MemberCategory, MemberModel, MemberTypeMode, SpecModel, StructModel};
use crate::src::{CodeGenerator, GeneratedLine};
use crate::{a, i, n, o};
use crate::{c, spec};

pub fn write_wasm_c_api(
    spec: &spec::Spec,
    mut writer: impl Write,
) -> Result<(), Box<dyn std::error::Error>> {
    let mut spec_model = SpecModel::from_spec(spec);

    order_all(&mut spec_model);

    for line in gen_all(&spec_model) {
        match line {
            Some(line) => {
                let indent_text = "    ".repeat(line.indent);
                writer.write_all(indent_text.as_bytes())?;
                writer.write_all(line.text.as_bytes())?;
                writer.write_all(b"\n")?
            }
            None => writer.write_all(b"\n")?,
        }
    }

    Ok(())
}

const PRIORITY_NAMES: &[&str] = &[
    "limits",
    "queue_descriptor",
    "programmable_stage_descriptor",
    "texture_data_layout",
    "uncaptured_error_callback_info",
];

fn order_all(model: &mut SpecModel) -> () {
    model.structs_spec.sort_by(|a, b| {
        if a.type_field < b.type_field {
            return std::cmp::Ordering::Less;
        } else if a.type_field > b.type_field {
            return std::cmp::Ordering::Greater;
        }
        if PRIORITY_NAMES.contains(&a.name_orig.as_str()) {
            return std::cmp::Ordering::Less;
        } else if PRIORITY_NAMES.contains(&b.name_orig.as_str()) {
            return std::cmp::Ordering::Greater;
        }
        std::cmp::Ordering::Equal
    });
}

fn gen_all(model: &SpecModel) -> Vec<Option<GeneratedLine>> {
    let mut gen = CodeGenerator::new();

    gen_headers(&mut gen);
    n!(gen);

    // gen_defines(&mut gen);
    // ln!(gen);

    gen_registry(&mut gen, model);
    n!(gen);

    gen_all_struct_declarations(&mut gen, model);
    n!(gen);

    gen_all_struct_definitions(&mut gen, model);
    n!(gen);

    gen_all_extract_fn_declarations(&mut gen, model);
    n!(gen);

    gen_all_extract_fn_definitions(&mut gen, model);
    n!(gen);

    gen_footer(&mut gen);

    gen.into_lines()
}

const HEADER_GUARD: &str = "WASM_C_API_WEBGPU_H_";
fn gen_headers(gen: &mut CodeGenerator) {
    a!(gen, "#ifndef {HEADER_GUARD}");
    a!(gen, "#define {HEADER_GUARD}");
    n!(gen);
    a!(gen, "#include <stdlib.h>");
    n!(gen);
    a!(gen, "#include <webgpu.h>");
    a!(gen, "#include <wasm_c_api.h>");
    a!(gen, "#include \"wasm_helpers.h\"");
}

fn gen_footer(gen: &mut CodeGenerator) {
    a!(gen, "#endif // {HEADER_GUARD}",);
}

// const C_TYPES: &[&str] = &[
//     "WASM_INT_C_TYPE",
//     "WASM_SIZE_C_TYPE",
//     "WASM_ENUM_C_TYPE",
//     "WASM_BITFLAG_C_TYPE",
//     "WASM_POINTER_VOID_C_TYPE",
//     "WASM_POINTER_UINT32_C_TYPE",
//     "WASM_POINTER_OBJECT_C_TYPE",
//     "WASM_POINTER_STRING_C_TYPE",
//     "WASM_POINTER_ARRAY_C_TYPE",
//     "WASM_POINTER_STRUCT_C_TYPE",
//     "WASM_POINTER_FUNCTION_C_TYPE",
// ];
// fn gen_defines(gen: &mut CodeGenerator) {
//     a!(gen, "/* Define native WASM types */");
//     a!(gen, "#define WASM_C_TYPE uint32_t");

//     for name in C_TYPES {
//         a!(gen, "#define {name} uint32_t");
//     }
// }

fn gen_registry(gen: &mut CodeGenerator, model: &SpecModel) {
    a!(gen, "/* Object Registries Definition */");

    a!(gen, "typedef struct BindWGPUObjectMappingRegistry {{");
    i!(gen);
    for object in &model.objects {
        a!(
            gen,
            "BindWGPUObjectMappingRegistryItem {};",
            object.name_member_plural
        );
    }
    o!(gen);
    a!(gen, "}} BindWGPUObjectMappingRegistry;");
}

fn gen_all_struct_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    a!(gen, "/* Struct Declarations */");

    for struct_ in &model.structs_all() {
        a!(gen, "struct {0};", struct_.name_wasm_type);
    }
}

fn gen_all_struct_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    a!(gen, "/* Struct Definitions */");

    for struct_ in &model.structs_all() {
        a!(gen, "typedef struct {0} {{", struct_.name_wasm_type);
        i!(gen);
        for member_group in &struct_.member_groups {
            for member in &member_group.members {
                let c_type = member.wasm_c_type();
                match member.original_info_str() {
                    Some(original) => a!(
                        gen,
                        "{0} /* {1} */ {2};",
                        c_type,
                        original,
                        member.name_member
                    ),
                    None => a!(gen, "{0} {1};", c_type, member.name_member),
                }
            }
            // ln!(gen);
        }
        o!(gen);
        a!(gen, "}} {0};", struct_.name_wasm_type);
        n!(gen);
    }
}

fn gen_all_extract_fn_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    a!(gen, "/* Struct Extract Function */");
    n!(gen);

    for struct_ in &model.structs_all() {
        let fn_name: String = format!("extract_{}", struct_.name_orig);
        // let wasm_type = &struct_.name_wasm_type;
        let wgpu_type = &struct_.name_wgpu_type;

        a!(gen, "int {fn_name}(");
        i!(gen);
        a!(gen, "BindWGPUObjectMappingRegistry *registry,");
        a!(gen, "wasm_memory_t *memory,");
        a!(gen, "byte_t *wa_wasm_struct_offset,");
        a!(gen, "{wgpu_type} **out_ha_host_struct_ptr");
        o!(gen);
        a!(gen, ");");
    }
}

fn gen_all_extract_fn_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    a!(gen, "/* Struct Extract Function */");
    n!(gen);

    gen_extract_fn_definition_template(
        gen,
        model,
        &model.structs_chained.first().unwrap(),
        gen_extract_chained_struct_inner,
    );
    n!(gen);

    for struct_ in &model.structs_spec {
        gen_extract_fn_definition_template(gen, model, struct_, gen_extract_struct_inner);
        n!(gen);
    }
}

fn gen_extract_fn_definition_template(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    inner_fn: fn(&mut CodeGenerator, &SpecModel, &StructModel) -> (),
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let wasm_type = &struct_.name_wasm_type;
    let wgpu_type: &String = &struct_.name_wgpu_type;

    a!(gen, "int {fn_name}(");
    i!(gen);
    a!(gen, "BindWGPUObjectMappingRegistry *registry,");
    a!(gen, "wasm_memory_t *memory,");
    a!(gen, "byte_t *wa_wasm_struct_offset,");
    a!(gen, "{wgpu_type} **out_ha_host_struct_ptr");
    o!(gen);
    a!(gen, ") {{");
    i!(gen);
    c!(gen, "Log input parameters");
    a!(gen, "LOG_TRACE(\"{fn_name}: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)\", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);");
    n!(gen);

    c!(gen, "Verify out_ha_host_struct_ptr is not NULL");
    a!(gen, "if (out_ha_host_struct_ptr == NULL) {{");
    i!(gen);
    a!(gen, "FATAL(\"{fn_name}: [*HMAS.WWST] is NULL\");");
    a!(gen, "return 0;");
    o!(gen);
    a!(gen, "}}");
    n!(gen);

    c!(gen, "Verify wasm-address is not NULL");
    a!(gen, "if (wa_wasm_struct_offset == NULL) {{");
    i!(gen);
    // a!(gen, "FATAL(\"{fn_name}: [WMAS.WWST] is NULL\");");
    a!(gen, "LOG_WARN(\"{fn_name}: [WMAS.WWST] is NULL\");");
    a!(gen, "*out_ha_host_struct_ptr = NULL;");
    a!(gen, "return 0;");
    o!(gen);
    a!(gen, "}}");
    n!(gen);

    c!(gen, "Trace wasm-address wasm-struct member pointers");
    for member in struct_.members() {
        let member_name = &member.name_member;
        a!(gen, "LOG_TRACE(\"{fn_name}: [WMAS.WWST]{member_name}: (%p)\", wa_wasm_struct_offset + offsetof({wasm_type}, {member_name}));");
    }
    n!(gen);

    a!(gen, "byte_t *mem_base = wasm_memory_data(memory);");
    // a!(gen, "size_t mem_size = wasm_memory_data_size(memory);");
    n!(gen);

    c!(
        gen,
        "Create host-address wasm-struct pointer from wasm-address wasm-struct pointer"
    );
    a!(gen, "{wasm_type} *ha_wasm_struct_ptr = ({wasm_type} *)(mem_base + (uintptr_t)wa_wasm_struct_offset);");
    a!(gen, "LOG_TRACE(\"{fn_name}: mapping mem_base (%p) + [WMAS.WWST]{wasm_type} (%p) = [HMAS.WWST]{wasm_type}: (%p)\", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);");
    n!(gen);

    c!(gen, "Trace host-address wasm-struct member pointers");
    for member in struct_.members() {
        let member_name = &member.name_member;
        a!(gen, "LOG_TRACE(\"{fn_name}: [HMAS.WWST]{member_name}: (%p)\", (void *)&ha_wasm_struct_ptr->{member_name});");
    }
    n!(gen);

    // call inner fn
    inner_fn(gen, model, struct_);

    a!(gen, "return 0;");
    o!(gen);
    a!(gen, "}}");
}

fn gen_extract_chained_struct_inner(
    gen: &mut CodeGenerator,
    _model: &SpecModel,
    struct_: &StructModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    // let cs_wasm_type = &struct_.name_wasm_type;
    // let cs_wgpu_type = &struct_.name_wgpu_type;

    c!(gen, "Resolve SType");
    a!(gen, "WGPUSType sType = ha_wasm_struct_ptr->sType;");
    a!(gen, "LOG_DEBUG(\"{fn_name}: sType value: %d\", sType);");
    a!(gen, "switch (sType) {{");
    i!(gen);

    a!(gen, "case WGPUSType_Invalid:");
    i!(gen);
    a!(gen, "FATAL(\"{fn_name}: sType: WGPUSType_Invalid\");");
    a!(gen, "break;");
    o!(gen);
    n!(gen);

    a!(gen, "case WGPUSType_ShaderModuleWGSLDescriptor:");
    i!(gen);
    a!(
        gen,
        "LOG_DEBUG(\"{fn_name}: sType: WGPUSType_ShaderModuleWGSLDescriptor\");"
    );
    // a!(gen, "LOG_DEBUG(\"{fn_name}: allocating [*HMAS.HS] (%p) as WGPUShaderModuleWGSLDescriptor\", (void *)out_ha_host_struct_ptr);");
    // a!(gen, "*out_ha_host_struct_ptr = calloc(1, sizeof(WGPUShaderModuleWGSLDescriptor));");
    a!(
        gen,
        "LOG_DEBUG(\"{fn_name}: running: extract_shader_module_WGSL_descriptor\");"
    );
    a!(gen, "extract_shader_module_WGSL_descriptor(registry, memory, wa_wasm_struct_offset, out_ha_host_struct_ptr);");
    a!(gen, "break;");
    o!(gen);
    a!(gen, "default:");
    i!(gen);
    a!(gen, "FATAL(\"Unsupported sType: %d\", sType);");
    a!(gen, "break;");
    o!(gen);
    o!(gen);
    a!(gen, "}}");
    n!(gen);
    a!(gen, "(*out_ha_host_struct_ptr)->sType = sType;");
    n!(gen);
}

fn gen_extract_struct_inner(gen: &mut CodeGenerator, model: &SpecModel, struct_: &StructModel) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let wgpu_type = &struct_.name_wgpu_type;

    c!(gen, "Dereference out_ha_host_struct_ptr");
    a!(
        gen,
        "{wgpu_type} *ha_host_struct_ptr = *out_ha_host_struct_ptr;"
    );
    n!(gen);

    c!(gen, "Allocate ha_host_struct_ptr if it is NULL");
    a!(gen, "if (ha_host_struct_ptr == NULL) {{");
    i!(gen);
    a!(gen, "LOG_DEBUG(\"{fn_name}: allocating [*HMAS.HS] (%p) as {wgpu_type}\", (void *)out_ha_host_struct_ptr);");
    a!(
        gen,
        "*out_ha_host_struct_ptr = calloc(1, sizeof({wgpu_type}));"
    );
    a!(gen, "if (*out_ha_host_struct_ptr == NULL) {{");
    i!(gen);
    a!(
        gen,
        "FATAL(\"{fn_name}: failed to allocate [*HMAS.HS] (%p)\", (void *)out_ha_host_struct_ptr);"
    );
    a!(gen, "return 0;");
    o!(gen);
    a!(gen, "}}");
    a!(gen, "ha_host_struct_ptr = *out_ha_host_struct_ptr;");
    o!(gen);
    a!(gen, "}} else {{");
    i!(gen);
    a!(gen, "LOG_DEBUG(\"{fn_name}: [*HMAS.HS] is not NULL\");");
    // a!(gen, "FATAL(\"{fn_name}: [*HMAS.HS] is not NULL\");");
    // a!(gen, "return 0;");
    o!(gen);
    a!(gen, "}}");
    n!(gen);

    c!(
        gen,
        "Extract host-address wasm-struct members to host-address host-struct members"
    );
    a!(gen, "LOG_TRACE(\"{fn_name}: extracting [HMAS.WWST] (%p) -> [HMAS.HS] (%p)\", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);");
    n!(gen);

    for member in struct_.members() {
        let member_name = &member.name_member;
        let ref_mode = &member.ref_mode;
        let cat_str = &member.category;
        a!(gen, "LOG_TRACE(\"{fn_name}: extracting [{ref_mode}<{cat_str}>] {member_name}: [HMAS.WWST] (%p) -> [HMAS.HS] (%p)\", (void *)&ha_wasm_struct_ptr->{member_name}, (void *)&ha_host_struct_ptr->{member_name});");
        match ref_mode {
            MemberTypeMode::Embedded => {
                if member.name_orig == "chain" {
                    gen_extract_chain(gen, model, struct_, &member)
                } else {
                    gen_extract_embedded(gen, model, struct_, &member);
                }
            }
            MemberTypeMode::Pointer(_) => gen_extract_pointer(gen, model, struct_, &member),
            MemberTypeMode::Array => gen_extract_array(gen, model, struct_, &member),
        }
        n!(gen);
    }
}

fn gen_extract_chain(
    gen: &mut CodeGenerator,
    _model: &SpecModel,
    struct_: &StructModel,
    member: &MemberModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;
    let wgpu_type = "WGPUChainedStruct";
    let wasm_type = "WasmWGPUChainedStruct";

    a!(gen, "if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->{m_member_name}.next, &ha_host_struct_ptr->{m_member_name}.next)) {{");
    i!(gen);
    a!(
        gen,
        "LOG_WARN(\"{fn_name}: extract_chained_struct failed\");"
    );
    o!(gen);
    a!(gen, "}}");
}

fn gen_extract_embedded(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &MemberModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    let wasm_type = &struct_.name_wasm_type;
    let wgpu_type = &struct_.name_wgpu_type;

    match &member.category {
        MemberCategory::Uint16
        | MemberCategory::Uint32
        | MemberCategory::Uint64
        | MemberCategory::Int32
        | MemberCategory::Float32
        | MemberCategory::Float64
        | MemberCategory::Bool
        | MemberCategory::Enum(_)
        | MemberCategory::Bitflag(_)
        | MemberCategory::Count => {
            a!(
                gen,
                "ha_host_struct_ptr->{m_member_name} = ha_wasm_struct_ptr->{m_member_name};"
            )
        }
        crate::model::MemberCategory::String => {
            a!(gen, "if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->{m_member_name}, &ha_host_struct_ptr->{m_member_name}, 65534)) {{");
            i!(gen);
            a!(gen, "LOG_WARN(\"{fn_name}: wasm_safe_copy_string_null_terminated failed for {m_name}\");");
            o!(gen);
            a!(gen, "}}");
        }
        crate::model::MemberCategory::Object(o_name) => {
            let obj = model.object_by_name(&o_name).unwrap();
            let obj_registry = &obj.name_member_plural;
            let obj_type = &obj.name_wgpu_type;
            a!(gen, "ha_host_struct_ptr->{m_member_name} = ({obj_type})registry_item_get_mapping(&registry->{obj_registry}, ha_wasm_struct_ptr->{m_member_name});");
        }
        crate::model::MemberCategory::Struct(s_name) => {
            let s = model.struct_by_name(&s_name).unwrap();
            let s_wasm_type = &s.name_wasm_type;
            let s_wgpu_type = &s.name_wgpu_type;
            a!(
                gen,
                "{s_wgpu_type} *{m_name}_ptr = &ha_host_struct_ptr->{m_member_name};"
            );
            a!(gen, "if (extract_{s_name}(registry, memory, wa_wasm_struct_offset + offsetof({wasm_type}, {m_member_name}), &{m_name}_ptr)) {{");
            i!(gen);
            a!(gen, "LOG_WARN(\"{fn_name}: extract_{s_name} failed\");");
            o!(gen);
            a!(gen, "}}");
        }
        crate::model::MemberCategory::FunctionType(_) => {
            c!(gen, "TODO: Create native callback function");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = NULL;");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.category,
            member.name_orig,
            struct_.name_orig
        ),
    }
}

fn gen_extract_pointer(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &MemberModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    match &member.category {
        MemberCategory::Uint32 => {
            println!("TODO: Implement Uint32 pointer extraction");
            c!(gen, "TODO: Implement Uint32 pointer extraction")
        }
        MemberCategory::Struct(s_name) => {
            let ref_s = model.struct_by_name(&s_name).unwrap();
            let wgpu_type = &ref_s.name_wgpu_type;
            let wasm_type = &ref_s.name_wasm_type;

            a!(gen, "if (extract_{s_name}(registry, memory, (byte_t *)ha_wasm_struct_ptr->{m_member_name}, &ha_host_struct_ptr->{m_member_name})) {{");
            i!(gen);
            a!(gen, "LOG_WARN(\"{fn_name}: extract_{s_name} failed\");");
            o!(gen);
            a!(gen, "}}");
        }
        MemberCategory::CVoid => {
            println!("TODO: Confirm c_void pointer copy is safe");
            c!(gen, "TODO: Is this safe?");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = (void *)ha_wasm_struct_ptr->{m_member_name};");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.category,
            member.name_orig,
            struct_.name_orig
        ),
    }
}

fn gen_extract_array(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &MemberModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let s_type_wasm = &struct_.name_wasm_type;

    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    let m_group = struct_.find_group(m_name).unwrap();
    let a_count = m_group.members.first().unwrap();
    let a_count_member = &a_count.name_member;

    c!(gen, "TODO: Implement SAFE pointer extraction");
    match &member.category {
        MemberCategory::Enum(e_name) => {
            let proto_name = format!("{}_array_proto", e_name);
            let wgpu_type = crate::model::to_wgpu_type(&e_name);
            a!(gen, "{wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof(int *));");
            a!(gen, "if ({proto_name} == NULL) {{");
            i!(gen);
            a!(gen, "LOG_ERROR(\"{fn_name}: malloc failed\");");
            o!(gen);
            a!(gen, "}}");
            a!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            i!(gen);
            a!(gen, "byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof(WASM_POINTER_ENUM_C_TYPE);");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying data at %p into {proto_name}[%d]\", ha_wasm_ptr_i, i);");
            a!(gen, "{proto_name}[i] = (int)*ha_wasm_ptr_i;");
            o!(gen);
            a!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        MemberCategory::Object(o_name) => {
            let proto_name = format!("{}_array_proto", o_name);
            let ref_o = model.object_by_name(&o_name).unwrap();
            let obj_wgpu_type = &ref_o.name_wgpu_type;
            let obj_registry = &ref_o.name_member_plural;
            a!(gen, "{obj_wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof({obj_wgpu_type} *));");
            a!(gen, "if ({proto_name} == NULL) {{");
            i!(gen);
            a!(gen, "LOG_ERROR(\"{fn_name}: malloc failed\");");
            o!(gen);
            a!(gen, "}}");
            a!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            i!(gen);
            a!(gen, "WASM_POINTER_OBJECT_C_TYPE *ha_wasm_ptr_i = (WASM_POINTER_OBJECT_C_TYPE *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof(WASM_POINTER_OBJECT_C_TYPE);");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying data at %p into {proto_name}[%d]\", ha_wasm_ptr_i, i);");
            a!(gen, "{proto_name}[i] = ({obj_wgpu_type})registry_item_get_mapping(&registry->{obj_registry}, *ha_wasm_ptr_i);");
            o!(gen);
            a!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        MemberCategory::Struct(s_name) => {
            let proto_name = format!("{}_array_proto", s_name);
            let ref_s = model.struct_by_name(&s_name).unwrap();
            let wasm_type = &ref_s.name_wasm_type;
            let wgpu_type = &ref_s.name_wgpu_type;

            a!(gen, "{wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof({wgpu_type}));");
            a!(gen, "if ({proto_name} == NULL) {{");
            i!(gen);
            a!(gen, "LOG_ERROR(\"{fn_name}: malloc failed\");");
            o!(gen);
            a!(gen, "}}");
            a!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            i!(gen);
            a!(gen, "byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof({wasm_type});");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying struct at wasm-address %p into {proto_name}[%d]\", wa_wasm_offset_i, i);");
            a!(gen, "{wgpu_type} *proto_i_ptr = &{proto_name}[i];");
            a!(
                gen,
                "if (extract_{s_name}(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {{"
            );
            i!(gen);
            a!(
                gen,
                "LOG_WARN(\"{fn_name}: extract_{s_name} at index %d failed\", i);"
            );
            o!(gen);
            a!(gen, "}}");
            o!(gen);
            a!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.category,
            member.name_orig,
            struct_.name_orig
        ),
    }
}
