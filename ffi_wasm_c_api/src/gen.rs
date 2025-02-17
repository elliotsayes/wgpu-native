use std::io::Write;

use crate::model::{TypeInfo, TypeModel, RefMode, MethodModel, SpecModel, StructModel};
use crate::src::{CodeGenerator, GeneratedLine};
use crate::{a, i, n, o, o2, oi};
use crate::{c, spec};

pub fn write_wasm_c_api(
    spec: &spec::Spec,
    mut inc_writer: impl Write,
    mut impl_writer: impl Write,
) -> Result<(), Box<dyn std::error::Error>> {
    let mut spec_model = SpecModel::from_spec(spec);

    order_all(&mut spec_model);

    write_all_lines(inc_writer, gen_all_inc(&spec_model))?;
    write_all_lines(impl_writer, gen_all_impl(&spec_model))?;

    Ok(())
}

fn write_all_lines(mut writer: impl Write, lines: Vec<Option<GeneratedLine>>) -> Result<(), Box<dyn std::error::Error>> {
    Ok(for line in lines {
        match line {
            Some(line) => {
                let indent_text = "    ".repeat(line.indent);
                writer.write_all(indent_text.as_bytes())?;
                writer.write_all(line.text.as_bytes())?;
                writer.write_all(b"\n")?
            }
            None => writer.write_all(b"\n")?,
        }
    })
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
        // Standalone, then Base*, then Extension*
        if a.type_field < b.type_field {
            return std::cmp::Ordering::Less;
        } else if a.type_field > b.type_field {
            return std::cmp::Ordering::Greater;
        }
        // Some special cases that are referenced early
        if PRIORITY_NAMES.contains(&a.name_orig.as_str()) {
            return std::cmp::Ordering::Less;
        } else if PRIORITY_NAMES.contains(&b.name_orig.as_str()) {
            return std::cmp::Ordering::Greater;
        }
        std::cmp::Ordering::Equal
    });
}

fn gen_all_inc(model: &SpecModel) -> Vec<Option<GeneratedLine>> {
    let mut gen = CodeGenerator::new();
    let header_guard: &str = "WASM_C_API_WEBGPU_H_";

    gen_inc_headers(&mut gen, header_guard);
    n!(gen);

    gen_defines(&mut gen);
    n!(gen);

    gen_registry(&mut gen, model);
    n!(gen);

    gen_footer(&mut gen, header_guard);

    gen.into_lines()
}

fn gen_all_impl(model: &SpecModel) -> Vec<Option<GeneratedLine>> {
    let mut gen = CodeGenerator::new();
    let header_guard: &str = "WASM_C_API_WEBGPU_IMPL_H_";

    gen_impl_headers(&mut gen, header_guard);
    n!(gen);

    // Declarations
    gen_all_struct_declarations(&mut gen, model);
    n!(gen);
    gen_all_extract_fn_declarations(&mut gen, model);
    n!(gen);
    gen_all_free_fn_declarations(&mut gen, model);
    n!(gen);
    gen_all_wasm_import_fn_declarations(&mut gen, model);
    n!(gen);

    // Definitions
    gen_all_struct_definitions(&mut gen, model);
    n!(gen);
    gen_all_extract_fn_definitions(&mut gen, model);
    n!(gen);
    gen_all_free_fn_definitions(&mut gen, model);
    n!(gen);
    gen_all_wasm_import_fn_definitions(&mut gen, model);
    n!(gen);

    gen_footer(&mut gen, header_guard);

    gen.into_lines()
}

fn gen_inc_headers(gen: &mut CodeGenerator, header_guard: &str) {
    a!(gen, "#ifndef {header_guard}");
    a!(gen, "#define {header_guard}");
    n!(gen);
    a!(gen, "#include <stdlib.h>");
    n!(gen);
    a!(gen, "#include <webgpu.h>");
    a!(gen, "#include <wasm_c_api.h>");
    a!(gen, "#include \"wasm_helpers_inc.h\"");
}

fn gen_impl_headers(gen: &mut CodeGenerator, header_guard: &str) {
    a!(gen, "#ifndef {header_guard}");
    a!(gen, "#define {header_guard}");
    n!(gen);
    a!(gen, "#include \"wasm_webgpu_c_api_inc.h\"");
    a!(gen, "#include \"wasm_helpers.h\"");
}

fn gen_footer(gen: &mut CodeGenerator, header_guard: &str) {
    a!(gen, "#endif // {header_guard}",);
}

// These are copied to `wasm_helpers.h`
#[allow(unused)]
const C_TYPES: &[&str] = &[
    "WASM_INT_C_TYPE",
    "WASM_SIZE_C_TYPE",
    "WASM_ENUM_C_TYPE",
    "WASM_BITFLAG_C_TYPE",
    "WASM_POINTER_VOID_C_TYPE",
    "WASM_POINTER_UINT32_C_TYPE",
    "WASM_POINTER_OBJECT_C_TYPE",
    "WASM_POINTER_STRING_C_TYPE",
    "WASM_POINTER_ARRAY_C_TYPE",
    "WASM_POINTER_STRUCT_C_TYPE",
    "WASM_POINTER_FUNCTION_C_TYPE",
];
#[allow(unused)]
fn gen_defines(gen: &mut CodeGenerator) {
    c!(gen, "Define native WASM types");
    a!(gen, "#define WASM_C_TYPE uint32_t");
    for name in C_TYPES {
        a!(gen, "#define {name} uint32_t");
    }
}

fn gen_registry(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Object Registries Definition");

    i!(gen, "typedef struct BindWGPUObjectMappingRegistry {{");
    for object in &model.objects {
        a!(
            gen,
            "BindWGPUObjectMappingRegistryItem {};",
            object.name_member_plural
        );
    }
    o!(gen, "}} BindWGPUObjectMappingRegistry;");
}

fn gen_all_struct_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Struct Declarations");

    for struct_ in &model.structs_all() {
        a!(gen, "struct {0};", struct_.name_wasm_type);
    }
}

fn gen_all_struct_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Struct Definitions");
    n!(gen);

    for struct_ in &model.structs_all() {
        i!(gen, "typedef struct {0} {{", struct_.name_wasm_type);
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
        o!(gen, "}} {0};", struct_.name_wasm_type);
        n!(gen);
    }
}

fn gen_all_extract_fn_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Extract Struct Function Declarations");

    for struct_ in &model.structs_all() {
        let fn_name: String = format!("extract_{}", struct_.name_orig);
        // let wasm_type = &struct_.name_wasm_type;
        let wgpu_type = &struct_.name_wgpu_type;

        i!(gen, "int {fn_name}(");
        a!(gen, "BindWGPUObjectMappingRegistry *registry,");
        a!(gen, "wasm_memory_t *memory,");
        a!(gen, "byte_t *wa_wasm_struct_offset,");
        a!(gen, "{wgpu_type} **out_ha_host_struct_ptr");
        o!(gen, ");");
    }
}

fn gen_all_extract_fn_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Extract Struct Function Definitions");
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

    i!(gen, "int {fn_name}(");
    a!(gen, "BindWGPUObjectMappingRegistry *registry,");
    a!(gen, "wasm_memory_t *memory,");
    a!(gen, "byte_t *wa_wasm_struct_offset,");
    a!(gen, "{wgpu_type} **out_ha_host_struct_ptr");
    oi!(gen, ") {{");
    c!(gen, "Log input parameters");
    a!(gen, "LOG_TRACE(\"{fn_name}: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)\", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);");
    n!(gen);

    c!(gen, "Verify out_ha_host_struct_ptr is not NULL");
    i!(gen, "if (out_ha_host_struct_ptr == NULL) {{");
    a!(gen, "FATAL(\"{fn_name}: [*HMAS.WWST] is NULL\");");
    a!(gen, "return 0;");
    o!(gen, "}}");
    n!(gen);

    c!(gen, "Verify wasm-address is not NULL");
    i!(gen, "if (wa_wasm_struct_offset == NULL) {{");
    // a!(gen, "FATAL(\"{fn_name}: [WMAS.WWST] is NULL\");");
    a!(gen, "LOG_WARN(\"{fn_name}: [WMAS.WWST] is NULL\");");
    a!(gen, "*out_ha_host_struct_ptr = NULL;");
    a!(gen, "return 0;");
    o!(gen, "}}");
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
    o!(gen, "}}");
}

fn gen_extract_chained_struct_inner(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    // let cs_wasm_type = &struct_.name_wasm_type;
    // let cs_wgpu_type = &struct_.name_wgpu_type;

    let s_types = model.enum_by_name("s_type").unwrap();
    let s_types_wgpu_type = &s_types.name_wgpu_type;

    c!(gen, "Resolve SType");
    a!(
        gen,
        "{s_types_wgpu_type} sType = ha_wasm_struct_ptr->sType;"
    );
    a!(gen, "LOG_DEBUG(\"{fn_name}: sType value: %d\", sType);");
    n!(gen);

    i!(gen, "switch (sType) {{");
    for s_type in s_types.entries.iter() {
        let s_type_entry_name = &s_type.name_wgpu_value;
        match s_type.name_orig.as_str() {
            "invalid" => {
                i!(gen, "case {s_type_entry_name}:");
                a!(gen, "FATAL(\"{fn_name}: Bad sType: WGPUSType_Invalid\");");
            }
            _ => {
                let struct_ = model.struct_by_name(&s_type.name_orig).unwrap();
                let struct_wgpu_type = &struct_.name_wgpu_type;
                let struct_extract_fn = format!("extract_{}", struct_.name_orig);
                oi!(gen, "case {s_type_entry_name}:");
                a!(gen, "LOG_TRACE(\"{fn_name}: sType: {s_type_entry_name}\");");
                a!(gen, "{struct_extract_fn}(registry, memory, wa_wasm_struct_offset, ({struct_wgpu_type} **)out_ha_host_struct_ptr);");
            }
        }
        a!(gen, "break;");
    }

    oi!(gen, "default:");
    a!(gen, "FATAL(\"{fn_name}: Unknown sType value: %d\", sType);");
    a!(gen, "break;");
    o2!(gen, "}}");
    n!(gen);

    a!(
        gen,
        "LOG_DEBUG(\"{fn_name}: Setting output sType value: %d\", sType);"
    );
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
    i!(gen, "if (ha_host_struct_ptr == NULL) {{");
    a!(gen, "LOG_DEBUG(\"{fn_name}: allocating [*HMAS.HWST] (%p) as {wgpu_type}\", (void *)out_ha_host_struct_ptr);");
    a!(
        gen,
        "*out_ha_host_struct_ptr = calloc(1, sizeof({wgpu_type}));"
    );
    i!(gen, "if (*out_ha_host_struct_ptr == NULL) {{");
    a!(
        gen,
        "FATAL(\"{fn_name}: failed to allocate [*HMAS.HWST] (%p)\", (void *)out_ha_host_struct_ptr);"
    );
    a!(gen, "return 0;");
    o!(gen, "}}");
    a!(gen, "ha_host_struct_ptr = *out_ha_host_struct_ptr;");
    oi!(gen, "}} else {{");
    a!(gen, "LOG_DEBUG(\"{fn_name}: [*HMAS.HWST] is not NULL\");");
    // a!(gen, "FATAL(\"{fn_name}: [*HMAS.HWST] is not NULL\");");
    // a!(gen, "return 0;");
    o!(gen, "}}");
    n!(gen);

    c!(
        gen,
        "Extract host-address wasm-struct members to host-address host-struct members"
    );
    a!(gen, "LOG_TRACE(\"{fn_name}: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)\", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);");
    n!(gen);

    for member in struct_.members() {
        let member_name = &member.name_member;
        let ref_mode = &member.ref_mode;
        let cat_str = &member.type_info;
        a!(gen, "LOG_TRACE(\"{fn_name}: extracting [{ref_mode}<{cat_str}>] {member_name}: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)\", (void *)&ha_wasm_struct_ptr->{member_name}, (void *)&ha_host_struct_ptr->{member_name});");
        match ref_mode {
            RefMode::Embedded => {
                if member.name_orig == "chain" {
                    gen_extract_chain(gen, model, struct_, &member)
                } else {
                    gen_extract_embedded(gen, model, struct_, &member);
                }
            }
            RefMode::Pointer(_) => gen_extract_pointer(gen, model, struct_, &member),
            RefMode::Array => gen_extract_array(gen, model, struct_, &member),
        }
        n!(gen);
    }
}

fn gen_extract_chain(
    gen: &mut CodeGenerator,
    _model: &SpecModel,
    struct_: &StructModel,
    member: &TypeModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;
    let wgpu_type = "WGPUChainedStruct";
    let wasm_type = "WasmWGPUChainedStruct";

    i!(gen, "if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->{m_member_name}.next, &ha_host_struct_ptr->{m_member_name}.next)) {{");
    a!(
        gen,
        "LOG_WARN(\"{fn_name}: extract_chained_struct failed\");"
    );
    o!(gen, "}}");
}

fn gen_extract_embedded(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &TypeModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    let wasm_type = &struct_.name_wasm_type;
    let wgpu_type = &struct_.name_wgpu_type;

    match &member.type_info {
        TypeInfo::Uint16
        | TypeInfo::Uint32
        | TypeInfo::Uint64
        | TypeInfo::Int32
        | TypeInfo::Float32
        | TypeInfo::Float64
        | TypeInfo::Bool
        | TypeInfo::Enum(_)
        | TypeInfo::Bitflag(_)
        | TypeInfo::Count => {
            a!(
                gen,
                "ha_host_struct_ptr->{m_member_name} = ha_wasm_struct_ptr->{m_member_name};"
            )
        }
        crate::model::TypeInfo::String => {
            i!(gen, "if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->{m_member_name}, &ha_host_struct_ptr->{m_member_name}, 65534)) {{");
            a!(gen, "LOG_WARN(\"{fn_name}: wasm_safe_copy_string_null_terminated failed for {m_name}\");");
            o!(gen, "}}");
        }
        crate::model::TypeInfo::Object(o_name) => {
            let obj = model.object_by_name(&o_name).unwrap();
            let obj_registry = &obj.name_member_plural;
            let obj_type = &obj.name_wgpu_type;
            a!(gen, "ha_host_struct_ptr->{m_member_name} = ({obj_type})registry_item_get_mapping(&registry->{obj_registry}, ha_wasm_struct_ptr->{m_member_name});");
        }
        crate::model::TypeInfo::Struct(s_name) => {
            let s = model.struct_by_name(&s_name).unwrap();
            let s_wasm_type = &s.name_wasm_type;
            let s_wgpu_type = &s.name_wgpu_type;
            a!(
                gen,
                "{s_wgpu_type} *{m_name}_ptr = &ha_host_struct_ptr->{m_member_name};"
            );
            i!(gen, "if (extract_{s_name}(registry, memory, wa_wasm_struct_offset + offsetof({wasm_type}, {m_member_name}), &{m_name}_ptr)) {{");
            a!(gen, "LOG_WARN(\"{fn_name}: extract_{s_name} failed\");");
            o!(gen, "}}");
        }
        crate::model::TypeInfo::FunctionType(_) => {
            c!(gen, "TODO: Create native callback function");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = NULL;");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.type_info,
            member.name_orig,
            struct_.name_orig
        ),
    }
}

fn gen_extract_pointer(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &TypeModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    match &member.type_info {
        TypeInfo::Uint32 => {
            println!("TODO: Implement Uint32 pointer extraction");
            c!(gen, "TODO: Implement Uint32 pointer extraction")
        }
        TypeInfo::Struct(s_name) => {
            let ref_s = model.struct_by_name(&s_name).unwrap();
            let wgpu_type = &ref_s.name_wgpu_type;
            let wasm_type = &ref_s.name_wasm_type;

            i!(gen, "if (extract_{s_name}(registry, memory, (byte_t *)ha_wasm_struct_ptr->{m_member_name}, &ha_host_struct_ptr->{m_member_name})) {{");
            a!(gen, "LOG_WARN(\"{fn_name}: extract_{s_name} failed\");");
            o!(gen, "}}");
        }
        TypeInfo::CVoid => {
            println!("TODO: Confirm c_void pointer copy is safe");
            c!(gen, "TODO: Is this safe?");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = (void *)ha_wasm_struct_ptr->{m_member_name};");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.type_info,
            member.name_orig,
            struct_.name_orig
        ),
    }
}

fn gen_extract_array(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    struct_: &StructModel,
    member: &TypeModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let s_type_wasm = &struct_.name_wasm_type;

    let m_name = &member.name_orig;
    let m_member_name = &member.name_member;

    let m_group = struct_.find_group(m_name).unwrap();
    let a_count = m_group.members.first().unwrap();
    let a_count_member = &a_count.name_member;

    c!(gen, "TODO: Implement SAFE pointer extraction");
    match &member.type_info {
        TypeInfo::Enum(e_name) => {
            let proto_name = format!("{}_array_proto", e_name);
            let enum_ = model.enum_by_name(&e_name).unwrap();
            let e_wgpu_type = &enum_.name_wgpu_type;
            a!(gen, "{e_wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof(int));");
            i!(gen, "if ({proto_name} == NULL) {{");
            a!(gen, "FATAL(\"{fn_name}: calloc failed\");");
            o!(gen, "}}");
            i!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            a!(gen, "byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof(WASM_ENUM_C_TYPE);");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying data at %p into {proto_name}[%d]\", ha_wasm_ptr_i, i);");
            a!(gen, "{proto_name}[i] = (int)*ha_wasm_ptr_i;");
            o!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        TypeInfo::Object(o_name) => {
            let proto_name = format!("{}_array_proto", o_name);
            let ref_o = model.object_by_name(&o_name).unwrap();
            let obj_wgpu_type = &ref_o.name_wgpu_type;
            let obj_registry = &ref_o.name_member_plural;
            a!(gen, "{obj_wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof({obj_wgpu_type}));");
            i!(gen, "if ({proto_name} == NULL) {{");
            a!(gen, "FATAL(\"{fn_name}: calloc failed\");");
            o!(gen, "}}");
            i!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            a!(gen, "WASM_POINTER_OBJECT_C_TYPE *ha_wasm_ptr_i = (WASM_POINTER_OBJECT_C_TYPE *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof(WASM_POINTER_OBJECT_C_TYPE);");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying data at %p into {proto_name}[%d]\", ha_wasm_ptr_i, i);");
            a!(gen, "{proto_name}[i] = ({obj_wgpu_type})registry_item_get_mapping(&registry->{obj_registry}, *ha_wasm_ptr_i);");
            o!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        TypeInfo::Struct(s_name) => {
            let proto_name = format!("{}_array_proto", s_name);
            let ref_s = model.struct_by_name(&s_name).unwrap();
            let wasm_type = &ref_s.name_wasm_type;
            let wgpu_type = &ref_s.name_wgpu_type;

            a!(gen, "{wgpu_type} *{proto_name} = calloc(ha_host_struct_ptr->{a_count_member}, sizeof({wgpu_type}));");
            i!(gen, "if ({proto_name} == NULL) {{");
            a!(gen, "FATAL(\"{fn_name}: calloc failed\");");
            o!(gen, "}}");
            i!(
                gen,
                "for (int i = 0; i < ha_host_struct_ptr->{a_count_member}; i++) {{"
            );
            a!(gen, "byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->{m_member_name} + i * sizeof({wasm_type});");
            a!(gen, "LOG_TRACE(\"{fn_name}: copying struct at wasm-address %p into {proto_name}[%d]\", wa_wasm_offset_i, i);");
            a!(gen, "{wgpu_type} *proto_i_ptr = &{proto_name}[i];");
            i!(
                gen,
                "if (extract_{s_name}(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {{"
            );
            a!(
                gen,
                "LOG_WARN(\"{fn_name}: extract_{s_name} at index %d failed\", i);"
            );
            o!(gen, "}}");
            o!(gen, "}}");
            a!(gen, "ha_host_struct_ptr->{m_member_name} = {proto_name};");
        }
        _ => unimplemented!(
            "Unhandled member of type {:?}: {:?} in {:?}",
            member.type_info,
            member.name_orig,
            struct_.name_orig
        ),
    }
}

fn gen_all_free_fn_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Free Struct Function Declarations");

    for struct_ in &model.structs_all() {
        let fn_name: String = format!("free_{}", struct_.name_orig);
        let wgpu_type = &struct_.name_wgpu_type;

        a!(gen, "int {fn_name}({wgpu_type} *struct_ptr);");
    }
}

fn gen_all_free_fn_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Free Struct Function Definitions");
    n!(gen);

    for struct_ in &model.structs_all() {
        let fn_name: String = format!("free_{}", struct_.name_orig);
        let wgpu_type = &struct_.name_wgpu_type;

        i!(gen, "int {fn_name}({wgpu_type} *struct_ptr) {{");
        a!(gen, "LOG_WARN(\"{fn_name}: TODO\");");
        a!(gen, "return 0;");
        o!(gen, "}}");
        n!(gen);
    }
}

fn gen_all_wasm_import_fn_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Wasm Import Function Declarations");

    for object in &model.objects {
        for method in &object.methods {
            let wgpu_fn_name = &method.name_wgpu_fn;
            let import_fn_name = format!("wasm_import_{}", wgpu_fn_name);
            a!(gen, "wasm_trap_t *{import_fn_name}(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);");
        }
    }
}

fn gen_all_wasm_import_fn_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Wasm Import Function Definitions");

    for object in &model.objects {
        for method in &object.methods {
            let wgpu_fn_name = &method.name_wgpu_fn;
            let import_fn_name = format!("wasm_import_{}", wgpu_fn_name);
            i!(gen, "wasm_trap_t *{import_fn_name}(");
            a!(gen, "void *env,");
            a!(gen, "const wasm_val_vec_t *args,");
            a!(gen, "wasm_val_vec_t *results");
            oi!(gen, ") {{");
            a!(gen, "LOG_TRACE(\"{import_fn_name}: params: env (%p), args (%p), results (%p)\", env, args, results);");
            n!(gen);

            a!(gen, "ImportHook *import_hook = (ImportHook *)env;");
            a!(gen, "Proc *proc = import_hook->proc;");
            a!(gen, "wasm_store_t *store = proc->store;");
            a!(gen, "wasm_memory_t *memory = get_memory(proc);");
            a!(gen, "byte_t *base_ptr = wasm_memory_data(memory);");
            a!(gen, "BindWGPUObjectMappingRegistry registry = proc->registry;");
            n!(gen);

            c!(gen, "Extract args");
            let mut index = 0;
            for arg_group in &method.arg_groups {
                for arg in &arg_group.args {
                    index += gen_arg(gen, model, method, arg, index);
                }
            }
            n!(gen);

            a!(gen, "return NULL;");
            o!(gen, "}}");
            n!(gen);
        }
    }
}

// Returns the number of args consumed
fn gen_arg(gen: &mut CodeGenerator, model: &SpecModel, method: &MethodModel, arg: &TypeModel, index: usize) -> usize {
    let fn_name = format!("wasm_import_{}", method.name_wgpu_fn);
    let var_name = &arg.name_orig;
    let ref_mode = &arg.ref_mode;
    let host_type = arg.host_c_type(model);

    match ref_mode {
        RefMode::Embedded => gen_arg_embedded(gen, model, method, arg, index),
        RefMode::Pointer(_) => gen_arg_pointer(gen, model, method, arg, index),
        RefMode::Array => gen_arg_array(gen, model, method, arg, index),
    }
}

fn gen_arg_embedded(gen: &mut CodeGenerator, model: &SpecModel, method: &MethodModel, arg: &TypeModel, index: usize) -> usize {
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);
    let category = &arg.type_info;

    match category {
        // MemberCategory::Uint64 => todo!(),
        // MemberCategory::Float32 => todo!(),
        // MemberCategory::Float64 => todo!(),
        // MemberCategory::Bool => todo!(),
        TypeInfo::String => {
            println!("FOUND");
            let ptr_var_name = format!("{var_name}_wa_string_ptr");
            a!(gen, "WASM_POINTER_STRING_C_TYPE {ptr_var_name} = wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "{host_type} {var_name} = NULL;");
            a!(gen, "wasm_safe_copy_string_null_terminated(memory, {ptr_var_name}, &{var_name}, 1024);");
            1
        },
        TypeInfo::Uint16 |
        TypeInfo::Uint32 |
        TypeInfo::Int32 |
        TypeInfo::Usize |
        TypeInfo::Enum(_) |
        TypeInfo::Bitflag(_) |
        TypeInfo::Count=> {
            println!("FOUND");
            a!(gen, "{host_type} {var_name} = wasm_val_to_native_int(args->data[{index}]);");
            1
        },
        TypeInfo::Object(object_name) => {
            println!("FOUND");
            let object = model.object_by_name(&object_name).unwrap();
            let registry_member = &object.name_member_plural;
            let mapping_index_var_name = format!("mapping_index_{var_name}");
            a!(gen, "uint32_t {mapping_index_var_name} = wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "{host_type} {var_name} = ({host_type})registry_item_get_mapping(&registry.{registry_member}, {mapping_index_var_name});");
            1
        },
        // MemberCategory::Struct(_) => todo!(),
        // MemberCategory::FunctionType(_) => todo!(),
        // MemberCategory::CVoid => todo!(),
        _ => {
            println!("TODO: gen_arg: embedded {category} {host_type} {var_name}");
            1
        },
    }
}

fn gen_arg_pointer(gen: &mut CodeGenerator, model: &SpecModel, method: &MethodModel, arg: &TypeModel, index: usize) -> usize {
    let fn_name = format!("wasm_import_{}", method.name_wgpu_fn);
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);

    match arg.type_info {
        // MemberCategory::Uint16 => todo!(),
        // MemberCategory::Uint32 => todo!(),
        // MemberCategory::Uint64 => todo!(),
        // MemberCategory::Int32 => todo!(),
        // MemberCategory::Float32 => todo!(),
        // MemberCategory::Float64 => todo!(),
        // MemberCategory::Bool => todo!(),
        // MemberCategory::String => todo!(),
        // MemberCategory::Enum(_) => todo!(),
        // MemberCategory::Bitflag(_) => todo!(),
        // MemberCategory::Object(_) => todo!(),
        // MemberCategory::Struct(_) => todo!(),
        // MemberCategory::FunctionType(_) => todo!(),
        // MemberCategory::CVoid => todo!(),
        // MemberCategory::Count => todo!(),
        // MemberCategory::Usize => todo!(),
        _ => 0,//println!("TODO: gen_arg: pointer {host_type} {var_name}"),
    }
}

fn gen_arg_array(gen: &mut CodeGenerator, model: &SpecModel, method: &MethodModel, arg: &TypeModel, index: usize) -> usize {
    let fn_name = format!("wasm_import_{}", method.name_wgpu_fn);
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);

    match arg.type_info {
        // MemberCategory::Uint16 => todo!(),
        // MemberCategory::Uint32 => todo!(),
        // MemberCategory::Uint64 => todo!(),
        // MemberCategory::Int32 => todo!(),
        // MemberCategory::Float32 => todo!(),
        // MemberCategory::Float64 => todo!(),
        // MemberCategory::Bool => todo!(),
        // MemberCategory::String => todo!(),
        // MemberCategory::Enum(_) => todo!(),
        // MemberCategory::Bitflag(_) => todo!(),
        // MemberCategory::Object(_) => todo!(),
        // MemberCategory::Struct(_) => todo!(),
        // MemberCategory::FunctionType(_) => todo!(),
        // MemberCategory::CVoid => todo!(),
        // MemberCategory::Count => todo!(),
        // MemberCategory::Usize => todo!(),
        _ => 0,//println!("TODO: gen_arg: array {host_type} {var_name}"),
    }
}
