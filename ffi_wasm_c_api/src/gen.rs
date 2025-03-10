use std::io::Write;

use crate::model::{
    CallbackModel, MethodModel, ObjectModel, RefMode, SpecModel, StructModel, TypeInfo, TypeModel,
};
use crate::spec;
use crate::src::{CodeGenerator, GeneratedLine};
use crate::{a, c, i, n, o, o2, oi};

pub fn write_wasm_c_api(
    spec: &spec::Spec,
    inc_writer: impl Write,
    impl_writer: impl Write,
) -> Result<(), Box<dyn std::error::Error>> {
    let mut spec_model = SpecModel::from_spec(spec);

    order_all(&mut spec_model);

    write_all_lines(inc_writer, gen_all_inc(&spec_model))?;
    write_all_lines(impl_writer, gen_all_impl(&spec_model))?;

    Ok(())
}

fn write_all_lines(
    mut writer: impl Write,
    lines: Vec<Option<GeneratedLine>>,
) -> Result<(), Box<dyn std::error::Error>> {
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
    gen_all_wasm_callback_fn_declarations(&mut gen, model);
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
    gen_all_wasm_callback_fn_definitions(&mut gen, model);
    n!(gen);
    gen_all_wasm_import_fn_definitions(&mut gen, model);
    n!(gen);

    // Fn Lookup Map
    gen_import_fn_lookup(&mut gen, model);
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
    n!(gen);
    a!(gen, "#ifndef HB_CORE_H");
    a!(gen, "#include \"hb_stub.h\"");
    a!(gen, "#endif");
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
    a!(gen, "LOG_DEBUG(\"{fn_name}: [WMAS.WWST] is NULL\");");
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
        "{s_types_wgpu_type} sType = ({s_types_wgpu_type})ha_wasm_struct_ptr->sType;"
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
        "*out_ha_host_struct_ptr = ({wgpu_type} *)calloc(1, sizeof({wgpu_type}));"
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
        let type_info = &member.type_info;
        a!(gen, "LOG_TRACE(\"{fn_name}: extracting [{ref_mode}<{type_info}>] {member_name}: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)\", (void *)&ha_wasm_struct_ptr->{member_name}, (void *)&ha_host_struct_ptr->{member_name});");
        match ref_mode {
            RefMode::Embedded => {
                if member.name_orig == "chain" {
                    gen_extract_chain(gen, model, struct_, &member)
                } else {
                    gen_extract_embedded(gen, model, struct_, &member)
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
    let m_member_name = &member.name_member;

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
            i!(gen, "if (wasm_safe_extract_string_null_terminated(memory, ha_wasm_struct_ptr->{m_member_name}, &ha_host_struct_ptr->{m_member_name}, 65534)) {{");
            a!(gen, "LOG_WARN(\"{fn_name}: wasm_safe_extract_string_null_terminated failed for {m_name}\");");
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
    _model: &SpecModel,
    struct_: &StructModel,
    member: &TypeModel,
) {
    let fn_name = format!("extract_{}", struct_.name_orig);
    let m_member_name = &member.name_member;

    match &member.type_info {
        TypeInfo::Uint32 => {
            println!("TODO: Implement Uint32 pointer extraction");
            c!(gen, "TODO: Implement Uint32 pointer extraction")
        }
        TypeInfo::Struct(s_name) => {
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

fn gen_all_wasm_callback_fn_declarations(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Wasm Callback Function Declarations");

    for object in &model.objects {
        for method in &object.methods {
            match &method.returns_async {
                Some(ra) => {
                    let wgpu_fn_name = &method.name_wgpu_fn;
                    let callback_fn_name = format!("host_callback_{}", wgpu_fn_name);
                    let args = &ra.args;
                    i!(gen, "void {callback_fn_name}(");
                    gen_wasm_callback_fn_args(gen, model, args);
                    o!(gen, ");");
                }
                None => continue,
            }
        }
    }
}

fn gen_all_wasm_callback_fn_definitions(gen: &mut CodeGenerator, model: &SpecModel) {
    c!(gen, "Wasm Callback Function Definitions");

    for object in &model.objects {
        for method in &object.methods {
            match &method.returns_async {
                Some(ra) => {
                    let wgpu_fn_name = &method.name_wgpu_fn;
                    let callback_fn_name = format!("host_callback_{}", wgpu_fn_name);
                    let args = &ra.args;
                    i!(gen, "void {callback_fn_name}(");
                    gen_wasm_callback_fn_args(gen, model, args);
                    oi!(gen, ") {{");
                    a!(gen, "LOG_TRACE(\"{callback_fn_name}\");");
                    a!(gen, "WasmCallbackUserdataWrapper *userdata_wrapper = (WasmCallbackUserdataWrapper *)userdata;");
                    a!(gen, "Proc *proc = userdata_wrapper->proc;");
                    a!(
                        gen,
                        "BindWGPUObjectMappingRegistry *registry = &proc->registry;"
                    );

                    n!(gen);
                    a!(gen, "WASM_INT_C_TYPE wasm_callback_index = userdata_wrapper->wasm_callback_index;");
                    a!(gen, "WASM_POINTER_VOID_C_TYPE wa_wasm_userdata = userdata_wrapper->wa_wasm_userdata;");
                    n!(gen);

                    a!(gen, "LOG_TRACE(\"Creating args\");");
                    a!(gen, "wasm_val_vec_t args;");
                    a!(
                        gen,
                        "wasm_val_vec_new_uninitialized(&args, {});",
                        args.len()
                    );
                    a!(gen, "args.num_elems = {};", args.len());
                    a!(gen, "args.size = (4 * args.num_elems);");
                    for (i, arg) in args.iter().enumerate() {
                        let arg_name = &arg.name_orig;
                        a!(gen, "args.data[{}].kind = WASM_INT_KIND;", i);
                        if i == args.len() - 1 {
                            a!(gen, "args.data[{}].of.WASM_VAL_INT_PROP = (WASM_INT_C_TYPE)(uintptr_t)wa_wasm_userdata;", i);
                        } else {
                            gen_insert_result(gen, model, object, method, ra, i, arg);
                        }
                    }
                    n!(gen);

                    a!(gen, "LOG_TRACE(\"Getting __indirect_function_table\");");
                    a!(
                        gen,
                        "wasm_table_t *indirect_functions_table = proc->indirect_func_table;"
                    );
                    a!(
                        gen,
                        "LOG_TRACE(\"Looking up function index: %d\", wasm_callback_index);"
                    );
                    a!(gen, "wasm_ref_t *wasm_callback_ref = wasm_table_get(indirect_functions_table, wasm_callback_index);");
                    a!(gen, "LOG_TRACE(\"Callback ref: %p\", wasm_callback_ref);");
                    a!(
                        gen,
                        "wasm_func_t *wasm_callback = wasm_ref_as_func(wasm_callback_ref);"
                    );
                    a!(gen, "LOG_TRACE(\"Callback: %p\", wasm_callback);");
                    n!(gen);

                    a!(gen, "wasm_val_vec_t results;");
                    a!(gen, "wasm_val_vec_new_uninitialized(&results, 1);");

                    a!(
                        gen,
                        "LOG_DEBUG(\"Calling WASM callback for {wgpu_fn_name}\");"
                    );
                    a!(
                        gen,
                        "wasm_trap_t *trap = wasm_func_call(wasm_callback, &args, &results);"
                    );
                    a!(gen, "if (trap != NULL) {{");
                    a!(gen, "    wasm_message_t msg;");
                    a!(gen, "    wasm_trap_message(trap, &msg);");
                    a!(gen, "    FATAL(\"Error calling WASM callback for {wgpu_fn_name}: %.*s\", msg.size, msg.data);");
                    a!(gen, "}}");
                    a!(
                        gen,
                        "LOG_DEBUG(\"Successfully called WASM callback for {wgpu_fn_name}\");"
                    );
                    n!(gen);

                    a!(gen, "free(userdata);");
                    o!(gen, "}}");
                    n!(gen);
                }
                None => continue,
            }
        }
    }
}

fn gen_insert_result(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    object: &ObjectModel,
    method: &MethodModel,
    callback: &CallbackModel,
    index: usize,
    arg: &TypeModel,
) {
    let wgpu_fn_name = &method.name_wgpu_fn;
    let callback_fn_name = format!("host_callback_{}", wgpu_fn_name);
    let ref_mode = &arg.ref_mode;
    let type_info = &arg.type_info;
    let var_name = &arg.name_orig;

    a!(
        gen,
        "LOG_TRACE(\"{callback_fn_name}: inserting [{ref_mode}<{type_info}>] {var_name}\");"
    );
    match ref_mode {
        RefMode::Embedded => match type_info {
            TypeInfo::Enum(_) => {
                a!(
                    gen,
                    "args.data[{index}].of.WASM_VAL_INT_PROP = (WASM_ENUM_C_TYPE){var_name};"
                );
            }
            TypeInfo::Object(o_name) => {
                let object = model.object_by_name(o_name).unwrap();
                // let object_wgpu_type = object.name_wgpu_type.clone();
                let object_member = object.name_member_plural.clone();
                let mapping_index_var_name = format!("{}_mapping_index", var_name);
                a!(gen, "size_t {mapping_index_var_name} = registry_item_add_mapping(&registry->{object_member}, {var_name});");
                a!(gen, "args.data[{index}].of.WASM_VAL_INT_PROP = (WASM_INT_C_TYPE)(uintptr_t){mapping_index_var_name};");
            }
            _ => {
                println!(
                    "RefMode::{:?}, TypeInfo::{:?} not implemented yet",
                    ref_mode, type_info
                );
                a!(gen, "args.data[{index}].of.WASM_VAL_INT_PROP = (WASM_INT_C_TYPE)(uintptr_t){var_name};");
            }
        },
        RefMode::Pointer(_) => match type_info {
            _ => {
                println!(
                    "RefMode::{:?}, TypeInfo::{:?} not implemented yet",
                    ref_mode, type_info
                );
                a!(gen, "args.data[{index}].of.WASM_VAL_INT_PROP = (WASM_INT_C_TYPE)(uintptr_t){var_name};");
            }
        },
        _ => unimplemented!("RefMode::{:?} not implemented yet", ref_mode),
    }
    n!(gen);
}

fn gen_wasm_callback_fn_args(gen: &mut CodeGenerator, model: &SpecModel, args: &[TypeModel]) {
    for (i, arg) in args.iter().enumerate() {
        let arg_name = &arg.name_orig;
        let arg_type = arg.host_c_type(model);
        let prepended_keywords = match arg.type_info {
            TypeInfo::Struct(_) => match arg.ref_mode {
                RefMode::Pointer(is_mut) => match is_mut {
                    true => "struct ".to_string(),
                    false => "const struct ".to_string(),
                },
                _ => unreachable!(),
            },
            TypeInfo::String => "const ".to_string(),
            _ => "".to_string(),
        };
        let sep = if i != args.len() - 1 { "," } else { "" };
        a!(gen, "{prepended_keywords}{arg_type} {arg_name}{sep}");
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

            a!(gen, "ImportHook *import_hook = (ImportHook *)env;");
            a!(gen, "Proc *proc = import_hook->proc;");
            a!(gen, "wasm_store_t *store = proc->store;");
            a!(gen, "wasm_memory_t *memory = get_memory(proc);");
            a!(gen, "byte_t *base_ptr = wasm_memory_data(memory);");
            a!(
                gen,
                "BindWGPUObjectMappingRegistry *registry = &proc->registry;"
            );
            n!(gen);

            c!(gen, "Extract args");
            let mut index = 0;

            // First arg is the object in question
            let obj_method_arg = TypeModel {
                name_orig: object.name_orig.clone(),
                name_member: object.name_member_plural.clone(),
                ref_mode: RefMode::Embedded,
                type_info: TypeInfo::Object(object.name_orig.clone()),
            };
            index += gen_arg(gen, model, method, &obj_method_arg, index);
            n!(gen);

            for arg_group in &method.arg_groups {
                for arg in &arg_group.args {
                    index += gen_arg(gen, model, method, arg, index);
                    n!(gen);
                }
            }
            n!(gen);

            let returns = gen_call_method_fn(gen, model, object, method);
            n!(gen);

            match returns {
                Some(r) => gen_assign_method_result(gen, model, object, method, &r),
                None => {
                    c!(gen, "Nothing returned");
                }
            }
            n!(gen);

            c!(gen, "TODO: Freeing");

            a!(gen, "return NULL;");
            o!(gen, "}}");
            n!(gen);
        }
    }
}

// Returns the number of args consumed
fn gen_arg(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    method: &MethodModel,
    arg: &TypeModel,
    index: usize,
) -> usize {
    let ref_mode = &arg.ref_mode;

    match ref_mode {
        RefMode::Embedded => gen_arg_embedded(gen, model, method, arg, index),
        RefMode::Pointer(_) => gen_arg_pointer(gen, model, method, arg, index),
        RefMode::Array => gen_arg_array(gen, model, method, arg, index),
    }
}

fn gen_arg_embedded(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    _method: &MethodModel,
    arg: &TypeModel,
    index: usize,
) -> usize {
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);
    let type_info = &arg.type_info;

    match type_info {
        TypeInfo::Uint64 => {
            let low_var_name = format!("{var_name}_low");
            let high_var_name = format!("{var_name}_high");
            a!(
                gen,
                "uint64_t {low_var_name} = wasm_val_to_native_int(args->data[{index}]);"
            );
            a!(
                gen,
                "uint64_t {high_var_name} = wasm_val_to_native_int(args->data[{index} + 1]);"
            );
            a!(
                gen,
                "{host_type} {var_name} = {high_var_name} << 32 | {low_var_name};"
            );
            2
        }
        TypeInfo::Float32 => {
            let var_name = &arg.name_orig;
            a!(
                gen,
                "{host_type} {var_name} = wasm_val_to_native_float(args->data[{index}]);"
            );
            1
        }
        TypeInfo::String => {
            let ptr_var_name = format!("{var_name}_wa_string_ptr");
            a!(gen, "WASM_POINTER_STRING_C_TYPE {ptr_var_name} = wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "{host_type} {var_name} = NULL;");
            a!(
                gen,
                "wasm_safe_extract_string_null_terminated(memory, {ptr_var_name}, &{var_name}, 1024);"
            );
            1
        }
        TypeInfo::Uint16
        | TypeInfo::Uint32
        | TypeInfo::Int32
        | TypeInfo::Usize
        | TypeInfo::Enum(_)
        | TypeInfo::Bitflag(_) => {
            a!(
                gen,
                "{host_type} {var_name} = wasm_val_to_native_int(args->data[{index}]);"
            );
            1
        }
        TypeInfo::Count => {
            let count_var_name = format!("{var_name}_count");
            a!(
                gen,
                "{host_type} {count_var_name} = wasm_val_to_native_int(args->data[{index}]);"
            );
            1
        }
        TypeInfo::FunctionType(_) => {
            a!(gen, "{host_type} {var_name} = ({host_type})wasm_val_to_native_int(args->data[{index}]);");
            1
        }
        TypeInfo::Object(object_name) => {
            let object = model.object_by_name(&object_name).unwrap();
            let registry_member = &object.name_member_plural;
            let mapping_index_var_name = format!("mapping_index_{var_name}");
            a!(
                gen,
                "uint32_t {mapping_index_var_name} = wasm_val_to_native_int(args->data[{index}]);"
            );
            a!(gen, "{host_type} {var_name} = ({host_type})registry_item_get_mapping(&registry->{registry_member}, {mapping_index_var_name});");
            1
        }
        _ => unimplemented!("gen_arg: embedded {type_info} {host_type} {var_name}"),
    }
}

fn gen_arg_pointer(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    _method: &MethodModel,
    arg: &TypeModel,
    index: usize,
) -> usize {
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);
    let type_info = &arg.type_info;

    match type_info {
        TypeInfo::Enum(_) => {
            a!(gen, "{host_type} {var_name} = ({host_type})wasm_val_to_native_int(args->data[{index}]);");
        }
        TypeInfo::Struct(s_name) => {
            let struct_ = model.struct_by_name(&s_name).unwrap();
            let wasm_ptr_var_name = format!("{var_name}_wa_struct_ptr");
            let host_native_type = struct_.name_wgpu_type.clone();
            let extract_fn_name = format!("extract_{}", s_name);
            a!(gen, "WASM_POINTER_STRUCT_C_TYPE {wasm_ptr_var_name} = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "{host_native_type} *{var_name} = NULL;");
            a!(
                gen,
                "{extract_fn_name}(registry, memory, (byte_t *){wasm_ptr_var_name}, &{var_name});"
            );
        }
        TypeInfo::CVoid => {
            a!(gen, "WASM_POINTER_VOID_C_TYPE wa_{var_name} = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "{host_type} {var_name} = NULL;");
            a!(
                gen,
                "wasm_safe_extract_pointer(memory, wa_{var_name}, &{var_name}, 0);"
            );
        }
        TypeInfo::MethodCallback(_, _) => {
            a!(gen, "WASM_POINTER_FUNCTION_C_TYPE {var_name}_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
        }
        TypeInfo::Userdata(_, _) => {
            a!(gen, "WASM_POINTER_VOID_C_TYPE {var_name}_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
            a!(gen, "WasmCallbackUserdataWrapper *{var_name} = malloc(sizeof(WasmCallbackUserdataWrapper));");
            a!(gen, "{var_name}->proc = proc;");
            a!(gen, "{var_name}->wasm_callback_index = callback_wasm;");
            a!(gen, "{var_name}->wa_wasm_userdata = {var_name}_wasm;");
        }
        _ => unimplemented!("gen_arg: {type_info} {host_type} {var_name}"),
    };

    1
}

fn gen_arg_array(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    _method: &MethodModel,
    arg: &TypeModel,
    index: usize,
) -> usize {
    let var_name = &arg.name_orig;
    let host_type = arg.host_c_type(model);
    let type_info = &arg.type_info;

    let wasm_array_ptr_name = format!("{var_name}_wa_array_ptr");
    let count_var_name = format!("{var_name}_count");
    let array_var_name = format!("{var_name}_array");
    let iter_var_name = format!("{var_name}_iter");

    match type_info {
        TypeInfo::Uint32 => {
            a!(gen, "WASM_POINTER_ARRAY_C_TYPE {wasm_array_ptr_name} = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
            a!(
                gen,
                "uint32_t *{array_var_name} = calloc({count_var_name}, sizeof(uint32_t));"
            );
            i!(gen, "for (size_t {iter_var_name} = 0; {iter_var_name} < {count_var_name}; {iter_var_name}++) {{");
            // TODO: call wasm_safe_copy_uint32?
            a!(gen, "wasm_safe_extract_int(memory, {wasm_array_ptr_name} + {iter_var_name}, &({array_var_name}[{iter_var_name}]));");
            o!(gen, "}}");
        }
        TypeInfo::Object(object_name) => {
            // TODO: review this
            let object = model.object_by_name(&object_name).unwrap();
            let object_type = &object.name_wgpu_type;
            let mapping_index_var_name = format!("mapping_index_{var_name}");
            let registry_member = &object.name_member_plural;
            a!(gen, "WASM_POINTER_ARRAY_C_TYPE {wasm_array_ptr_name} = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[{index}]);");
            a!(
                gen,
                "{object_type} *{array_var_name} = calloc({count_var_name}, sizeof({object_type}));"
            );
            a!(gen, "int {mapping_index_var_name} = 0;");
            i!(gen, "for (size_t {iter_var_name} = 0; {iter_var_name} < {count_var_name}; {iter_var_name}++) {{");
            // TODO: call wasm_safe_copy_uint32?
            a!(gen, "wasm_safe_extract_int(memory, {wasm_array_ptr_name} + {iter_var_name}, &{mapping_index_var_name});");
            a!(gen, "{array_var_name}[{iter_var_name}] = ({object_type})registry_item_get_mapping(&registry->{registry_member}, {mapping_index_var_name});");
            o!(gen, "}}");
        }
        _ => unimplemented!("gen_arg: {type_info} {host_type} {var_name}"),
    }

    1
}

fn gen_call_method_fn(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    object: &ObjectModel,
    method: &MethodModel,
) -> Option<TypeModel> {
    let wgpu_fn_name = &method.name_wgpu_fn;
    let mut var_names: Vec<String> = vec![];

    var_names.push(object.name_orig.clone());

    for arg_group in &method.arg_groups {
        for arg in &arg_group.args {
            var_names.push(arg.func_var_name());
        }
    }

    let var_args = var_names.join(", ");
    let func_call = format!("{wgpu_fn_name}({var_args});");

    match &method.returns {
        Some(t) => {
            let result_type = t.host_c_type(model);
            a!(gen, "{result_type} result = {func_call}");
        }
        None => {
            a!(gen, "{func_call}");
        }
    };

    method.returns.clone()
}

fn gen_assign_method_result(
    gen: &mut CodeGenerator,
    model: &SpecModel,
    object: &ObjectModel,
    method: &MethodModel,
    returns: &TypeModel,
) {
    a!(gen, "results->size = 1;");
    a!(gen, "results->data[0].kind = WASM_INT_KIND;");

    match &returns.type_info {
        TypeInfo::Bool
        | TypeInfo::Usize
        | TypeInfo::Enum(_)
        | TypeInfo::Bitflag(_)
        | TypeInfo::Uint32 => a!(gen, "results->data[0].of.WASM_VAL_INT_PROP = result;"),
        TypeInfo::Object(o_name) => {
            let object = model.object_by_name(&o_name).unwrap();
            // let object_wgpu_type = object.name_wgpu_type.clone();
            let object_member_plural = object.name_member_plural.clone();
            a!(gen, "size_t result_index = registry_item_add_mapping(&registry->{object_member_plural}, result);");
            a!(gen, "results->data[0].of.WASM_VAL_INT_PROP = result_index;");
        }
        // TypeInfo::Uint64 => todo!(),
        TypeInfo::CVoid => {
            // There should always be a `size` variable
            a!(gen, "WASM_POINTER_VOID_C_TYPE wa_wasm_malloc_res = 0;");
            a!(gen, "void *ha_wasm_malloc_res = NULL;");
            i!(gen, "if (wasm_safe_malloc(proc, size, &wa_wasm_malloc_res, &ha_wasm_malloc_res) != 0) {{");
            a!(gen, "FATAL(\"wasm_safe_malloc failed\");");
            o!(gen, "}}");
            a!(gen, "memcpy(ha_wasm_malloc_res, result, size);");
            a!(gen, "results->data[0].of.WASM_VAL_INT_PROP = wa_wasm_malloc_res;");
        }
        _ => {
            println!("unimplemented return type: {:?}", returns.type_info);
            // unimplemented!("Unhandled returns type: {:?}", returns.type_info)
        }
    }
}

fn gen_import_fn_lookup(gen: &mut CodeGenerator, model: &SpecModel) {
    i!(gen, "static const struct {{");
    a!(gen, "const char* name;");
    a!(gen, "wasm_func_callback_with_env_t func;");
    oi!(gen, "}} webgpu_import_funcs[] = {{");

    for object in &model.objects {
        for method in &object.methods {
            let fn_name = &method.name_wgpu_fn;
            let import_fn_prefix = "wasm_import_";
            let import_fn_name = format!("{}{}", import_fn_prefix, fn_name);

            i!(gen, "{{");
            a!(
                gen,
                ".name = {}\"{fn_name}\",",
                " ".repeat(import_fn_prefix.len() - 1)
            );
            a!(gen, ".func = {import_fn_name}");
            o!(gen, "}},");
        }
    }

    o!(gen, "}};");
}
