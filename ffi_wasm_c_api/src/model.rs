use regex::Regex;
use std::str::FromStr;
use strum_macros::{Display, EnumString};

use crate::{
    spec::{self},
    str::{snake_to_camel_preserve_caps, snake_to_pascal_preserve_caps, to_singular},
};

pub struct SpecModel {
    pub enums: Vec<EnumModel>,
    pub objects: Vec<ObjectModel>,
    pub structs_chained: Vec<StructModel>,
    pub structs_spec: Vec<StructModel>,
}

impl SpecModel {
    pub fn from_spec(spec: &spec::Spec) -> Self {
        Self {
            enums: spec
                .enums
                .iter()
                .map(|e| EnumModel::from_spec(spec, e))
                .collect(),
            objects: spec
                .objects
                .iter()
                .map(|o| ObjectModel::from_spec(spec, o))
                .collect(),
            structs_chained: vec![get_chained_struct(false), get_chained_struct(true)],
            structs_spec: spec
                .structs
                .iter()
                .map(|s| StructModel::from_spec(spec, s))
                .collect(),
        }
    }

    pub fn object_by_name(&self, name: &str) -> Option<&ObjectModel> {
        self.objects.iter().find(|o| o.name_orig == name)
    }

    pub fn structs_all(&self) -> Vec<StructModel> {
        let mut structs = self.structs_chained.clone();
        structs.extend(self.structs_spec.clone());
        structs
    }

    pub fn struct_by_name(&self, name: &str) -> Option<&StructModel> {
        self.structs_chained
            .iter()
            .chain(self.structs_spec.iter())
            .find(|s| s.name_orig == name)
    }

    pub fn enum_by_name(&self, name: &str) -> Option<&EnumModel> {
        self.enums.iter().find(|e| e.name_orig == name)
    }
}

pub struct EnumModel {
    pub o: spec::Enum,
    pub name_orig: String,
    pub name_wgpu_type: String,
    pub entries: Vec<EnumEntryModel>,
}

impl EnumModel {
    pub fn from_spec(_spec: &spec::Spec, enum_: &spec::Enum) -> Self {
        println!("E {}", enum_.name);

        Self {
            o: enum_.clone(),
            name_orig: enum_.name.clone(),
            name_wgpu_type: to_wgpu_type(&enum_.name),
            entries: enum_
                .entries
                .iter()
                .map(|e| EnumEntryModel::from_spec(_spec, enum_, e))
                .collect(),
        }
    }
}

pub struct EnumEntryModel {
    pub o: spec::EnumEntry,
    pub name_orig: String,
    pub name_wgpu_value: String,
}

impl EnumEntryModel {
    pub fn from_spec(_spec: &spec::Spec, enum_: &spec::Enum, entry: &spec::EnumEntry) -> Self {
        Self {
            o: entry.clone(),
            name_orig: entry.name.clone(),
            name_wgpu_value: to_wgpu_enum_value(&enum_.name, &entry.name),
        }
    }
}

pub struct ObjectModel {
    pub o: Option<spec::Object>,
    pub name_orig: String,
    pub name_wgpu_type: String,
    pub name_member_plural: String,
    pub methods: Vec<MethodModel>,
}

impl ObjectModel {
    pub fn from_spec(_spec: &spec::Spec, object: &spec::Object) -> Self {
        println!("O {}", object.name);

        Self {
            o: Some(object.clone()),
            name_orig: object.name.clone(),
            name_wgpu_type: to_wgpu_type(&object.name),
            name_member_plural: to_member_plural(&object.name),
            methods: object
                .methods
                .iter()
                .map(|m| MethodModel::from_spec(_spec, object, m))
                .collect(),
        }
    }
}

pub struct MethodModel {
    pub o: Option<spec::Method>,
    pub name_orig: String,
    pub name_wgpu_fn: String,
    pub arg_groups: Vec<MethodArgGroupModel>,
    pub returns: Option<TypeModel>,
    pub returns_async: Option<CallbackModel>,
}

impl MethodModel {
    pub fn from_spec(spec: &spec::Spec, object: &spec::Object, method: &spec::Method) -> Self {
        let base_arg_groups: Vec<MethodArgGroupModel> = method
            .args
            .iter()
            .map(|a| MethodArgGroupModel::from_spec(spec, object, method, a))
            .collect();

        let returns: Option<TypeModel> = match &method.returns {
            Some(r) => Some(TypeModel {
                name_orig: "returns".to_string(),
                name_member: "returns".to_string(),
                ref_mode: RefMode::from_pointer(r.pointer.clone()),
                type_info: TypeInfo::from_type(&r.type_field),
            }),
            None => None,
        };

        let returns_async = match method.returns_async.len() {
            0 => None,
            _ => Some(CallbackModel::from_spec(
                spec,
                object,
                method,
                method.returns_async.clone(),
            )),
        };

        let callback_arg_group = match returns_async {
            Some(_) => Some({
                MethodArgGroupModel {
                    o: None,
                    name_orig: "returns_async".to_owned(),
                    name_variable: "returns_async".to_owned(),
                    group_mode: DataGroupMode::CallbackAndUserdata,
                    args: vec![
                        TypeModel {
                            name_orig: "callback".to_owned(),
                            name_member: "callback".to_owned(),
                            ref_mode: RefMode::Pointer(false),
                            type_info: TypeInfo::MethodCallback(
                                object.name.clone(),
                                method.name.clone(),
                            ),
                        },
                        TypeModel {
                            name_orig: "userdata".to_owned(),
                            name_member: "userdata".to_owned(),
                            ref_mode: RefMode::Pointer(false),
                            type_info: TypeInfo::Userdata(object.name.clone(), method.name.clone()),
                        },
                    ],
                }
            }),
            None => None,
        };
        let arg_groups = base_arg_groups
            .into_iter()
            .chain(callback_arg_group.into_iter())
            .collect();

        Self {
            o: Some(method.clone()),
            name_orig: method.name.clone(),
            name_wgpu_fn: to_wgpu_fn(&object.name, &method.name),
            arg_groups,
            returns,
            returns_async,
        }
    }
}

pub struct MethodArgGroupModel {
    pub o: Option<spec::MethodArg>,
    pub name_orig: String,
    pub name_variable: String,
    pub group_mode: DataGroupMode,
    pub args: Vec<TypeModel>,
}

impl MethodArgGroupModel {
    pub fn from_spec(
        _spec: &spec::Spec,
        _object: &spec::Object,
        _method: &spec::Method,
        arg: &spec::MethodArg,
    ) -> Self {
        let (group_type, args) = get_type_info(&arg.name, &arg.type_field, arg.pointer.as_deref());

        Self {
            o: Some(arg.clone()),
            name_orig: arg.name.clone(),
            name_variable: arg.name.clone(),
            group_mode: group_type,
            args,
        }
    }
}

pub struct CallbackModel {
    pub args: Vec<TypeModel>,
}

impl CallbackModel {
    pub fn from_spec(
        _spec: &spec::Spec,
        object: &spec::Object,
        method: &spec::Method,
        args: Vec<spec::ReturnsAsync>,
    ) -> Self {
        Self {
            args: args
                .iter()
                .map(|a| {
                    let name = a.name.clone();
                    TypeModel {
                        name_orig: name.clone(),
                        name_member: to_member(&name),
                        ref_mode: RefMode::from_pointer(a.pointer.clone()),
                        type_info: TypeInfo::from_type(&a.type_field),
                    }
                })
                .chain(vec![TypeModel {
                    name_orig: String::from("userdata"),
                    name_member: String::from("userdata"),
                    ref_mode: RefMode::Pointer(false),
                    type_info: TypeInfo::Userdata(object.name.to_string(), method.name.to_string()),
                }])
                .collect(),
        }
    }
}

#[derive(EnumString, PartialEq, PartialOrd, Debug, Clone)]
#[strum(serialize_all = "snake_case")]
pub enum StructType {
    Standalone,
    BaseIn,
    BaseOut,
    ExtensionIn,
    ExtensionOut,
}

#[derive(Clone, Debug)]
pub struct StructModel {
    pub o: Option<spec::Struct>,
    pub name_orig: String,
    pub name_wgpu_type: String,
    pub name_wasm_type: String,
    pub type_field: StructType,
    pub extends: Option<String>,
    pub member_groups: Vec<MemberGroupModel>,
    pub free_members: bool,
}

impl StructModel {
    pub fn from_spec(spec: &spec::Spec, struct_: &spec::Struct) -> Self {
        let type_field = StructType::from_str(&struct_.type_field).unwrap();
        let declared_member_groups: Vec<MemberGroupModel> = struct_
            .members
            .iter()
            .map(|m| MemberGroupModel::from_spec(spec, m))
            .collect();

        let member_groups = match type_field {
            StructType::Standalone => declared_member_groups,
            _ => {
                let is_mutable =
                    [StructType::BaseIn, StructType::ExtensionIn].contains(&type_field);
                let prefixed_group = match type_field {
                    StructType::BaseIn | StructType::BaseOut => MemberGroupModel {
                        o: None,
                        name_orig: "chain".to_string(),
                        group_mode: DataGroupMode::Individual,
                        members: vec![TypeModel {
                            name_orig: "next_in_chain".to_string(),
                            name_member: "nextInChain".to_string(),
                            type_info: TypeInfo::Struct("chained_struct".to_string()),
                            ref_mode: RefMode::Pointer(is_mutable),
                        }],
                    },
                    StructType::ExtensionIn | StructType::ExtensionOut => MemberGroupModel {
                        o: None,
                        name_orig: "chain".to_string(),
                        group_mode: DataGroupMode::Individual,
                        members: vec![TypeModel {
                            name_orig: "chain".to_string(),
                            name_member: "chain".to_string(),
                            type_info: TypeInfo::Struct("chained_struct".to_string()),
                            ref_mode: RefMode::Embedded,
                        }],
                    },
                    _ => unreachable!(),
                };
                let mut result = vec![prefixed_group];
                result.extend(declared_member_groups);
                result
            }
        };

        println!("S {} ({})", struct_.name, struct_.type_field);
        for member in struct_.members.iter() {
            let p = match &member.pointer {
                Some(m) => {
                    if m == "mutable" {
                        "mut"
                    } else {
                        "imm"
                    }
                }
                None => "emb",
            };
            println!("· {}: {}, {}", member.name, p, member.type_field);
        }

        Self {
            o: Some(struct_.clone()),
            name_orig: struct_.name.clone(),
            name_wgpu_type: to_wgpu_type(&struct_.name),
            name_wasm_type: to_wasm_type(&struct_.name),
            type_field,
            extends: struct_.extends.first().map(|x| x.to_string()),
            member_groups,
            free_members: struct_.free_members.is_some_and(|x| x),
        }
    }

    pub fn members(&self) -> Vec<TypeModel> {
        let mut all_members = Vec::<TypeModel>::new();
        for member_group in &self.member_groups {
            all_members.extend(member_group.members.clone());
        }
        all_members
    }

    pub fn find_group(&self, name: &str) -> Option<&MemberGroupModel> {
        self.member_groups.iter().find(|g| g.name_orig == name)
    }
}

fn get_chained_struct(mutable: bool) -> StructModel {
    let name = format!("chained_struct{}", if mutable { "_out" } else { "" });
    let name_wgpu_type = format!("WGPUChainedStruct{}", if mutable { "Out" } else { "" });
    let name_wasm_type = format!("WasmWGPUChainedStruct{}", if mutable { "Out" } else { "" });

    let members = vec![
        TypeModel {
            name_orig: "next".to_string(),
            name_member: "next".to_string(),
            ref_mode: RefMode::Pointer(mutable),
            type_info: TypeInfo::Struct(name.clone()),
        },
        TypeModel {
            name_orig: "stype".to_string(),
            name_member: "sType".to_string(),
            ref_mode: RefMode::Embedded,
            type_info: TypeInfo::Enum("stype".to_string()),
        },
    ];
    StructModel {
        o: None,
        name_orig: name.clone(),
        name_wgpu_type: name_wgpu_type.clone(),
        name_wasm_type: name_wasm_type.clone(),
        type_field: StructType::Standalone,
        extends: None,
        member_groups: vec![MemberGroupModel {
            o: None,
            name_orig: name.clone(),
            group_mode: DataGroupMode::Individual,
            members,
        }],
        free_members: false,
    }
}

#[derive(Debug, Clone)]
pub enum DataGroupMode {
    Individual,
    CountAndArray,
    CallbackAndUserdata,
}

#[derive(Debug, Clone)]
pub struct MemberGroupModel {
    pub o: Option<spec::Member>,
    pub name_orig: String,
    pub group_mode: DataGroupMode,
    pub members: Vec<TypeModel>,
}

pub fn to_count_member(name: &str) -> String {
    format!("{}Count", snake_to_camel_preserve_caps(&to_singular(name)))
}

fn get_type_info(
    name: &str,
    type_field: &str,
    pointer: Option<&str>,
) -> (DataGroupMode, Vec<TypeModel>) {
    let find_arr = Regex::new(r"array<([\w\.]+)>")
        .unwrap()
        .captures(type_field);
    match find_arr {
        Some(caps) => {
            let tf_inner = caps.get(1).unwrap().as_str();
            let count = TypeModel {
                name_orig: name.to_string(),
                type_info: TypeInfo::Count,
                name_member: to_count_member(name),
                ref_mode: RefMode::Embedded,
            };
            let array = TypeModel {
                name_orig: name.to_string(),
                name_member: to_member(name),
                type_info: TypeInfo::from_type(tf_inner),
                ref_mode: RefMode::Array,
            };
            (DataGroupMode::CountAndArray, vec![count, array])
        }
        None => {
            let ref_mode = RefMode::from_pointer(match pointer {
                Some(s) => Some(s.to_string()),
                None => None,
            });
            (
                DataGroupMode::Individual,
                vec![TypeModel {
                    name_orig: name.to_string(),
                    name_member: to_member(name),
                    ref_mode,
                    type_info: TypeInfo::from_type(type_field),
                }],
            )
        }
    }
}

impl MemberGroupModel {
    pub fn from_spec(_spec: &spec::Spec, member: &spec::Member) -> Self {
        let (group_type, members) =
            get_type_info(&member.name, &member.type_field, member.pointer.as_deref());
        Self {
            o: Some(member.clone()),
            name_orig: member.name.clone(),
            group_mode: group_type,
            members,
        }
    }
}

#[derive(EnumString, Debug, Clone, Display)]
#[strum(serialize_all = "snake_case")]
pub enum TypeInfo {
    Uint16,
    Uint32,
    Uint64,
    Int32,
    Float32,
    Float64,
    Bool,
    String,
    Enum(String),
    Bitflag(String),
    Object(String),
    Struct(String),
    FunctionType(String),
    CVoid,
    Count,
    Usize,
    MethodCallback(String, String),
    Userdata(String, String),
}

impl TypeInfo {
    pub fn from_type(type_field: &str) -> Self {
        let mut parts = type_field.split(".");
        let mut category = parts.next().unwrap();
        let specific = parts.next().unwrap_or_default();

        // I'm not sure why this is listed as `function_type`...?
        if category == "function_type" && specific == "uncaptured_error_callback_info" {
            category = "struct";
        }

        let info = TypeInfo::from_str(category).unwrap();
        // Set the specific type
        match info {
            TypeInfo::Enum(_) => TypeInfo::Enum(specific.to_string()),
            TypeInfo::Bitflag(_) => TypeInfo::Bitflag(specific.to_string()),
            TypeInfo::Object(_) => TypeInfo::Object(specific.to_string()),
            TypeInfo::Struct(_) => TypeInfo::Struct(specific.to_string()),
            TypeInfo::FunctionType(_) => TypeInfo::FunctionType(specific.to_string()),
            _ => info,
        }
    }
}

#[derive(Debug, Clone, Display)]
pub enum RefMode {
    Embedded,
    Pointer(bool), // bool is true if the pointer is mutable
    Array,
}

impl RefMode {
    pub fn from_pointer(pointer: Option<String>) -> Self {
        match pointer.as_deref() {
            None => Self::Embedded,
            Some("immutable") => Self::Pointer(false),
            Some("mutable") => Self::Pointer(true),
            _ => unreachable!(),
        }
    }
}

#[derive(Debug, Clone)]
pub struct TypeModel {
    pub name_orig: String,
    pub name_member: String,
    pub ref_mode: RefMode,
    pub type_info: TypeInfo,
}

impl TypeModel {
    pub fn host_c_type(&self, model: &SpecModel) -> String {
        match self.ref_mode {
            RefMode::Embedded => match &self.type_info {
                TypeInfo::Uint16 => "uint16_t".to_string(),
                TypeInfo::Uint32 => "uint32_t".to_string(),
                TypeInfo::Uint64 => "uint64_t".to_string(),
                TypeInfo::Int32 => "int32_t".to_string(),
                TypeInfo::Float32 => "float".to_string(),
                TypeInfo::Float64 => "double".to_string(),
                TypeInfo::Bool => "uint32_t".to_string(),
                TypeInfo::Count => "int".to_string(),
                TypeInfo::Enum(enum_name) => to_wgpu_type(enum_name),
                TypeInfo::Bitflag(bitflag_name) => to_wgpu_type(&bitflag_name),
                TypeInfo::String => "char *".to_string(),
                TypeInfo::Object(object_name) => {
                    let object = model.object_by_name(object_name).unwrap();
                    object.name_wgpu_type.clone()
                }
                TypeInfo::Struct(name) => to_wgpu_type(&name),
                TypeInfo::FunctionType(_) => "void *".to_string(),
                TypeInfo::Usize => "size_t".to_string(),
                _ => panic!(
                    "{:?}: unknown category: {:?}",
                    self.ref_mode, self.type_info
                ),
            },
            RefMode::Pointer(_) => match &self.type_info {
                TypeInfo::Uint32 => "uint32_t *".to_string(),
                TypeInfo::Struct(struct_name) => {
                    let struct_ = model.struct_by_name(&struct_name).unwrap();
                    format!("{} *", struct_.name_wgpu_type)
                }
                TypeInfo::CVoid | TypeInfo::Userdata(_, _) => "void *".to_string(),
                TypeInfo::Enum(enum_name) => {
                    let enum_ = model.enum_by_name(&enum_name).unwrap();
                    format!("{} *", enum_.name_wgpu_type)
                }
                // TypeInfo::MethodCallback(_, _) => "WASM_POINTER_FUNCTION_C_TYPE".to_string(),
                TypeInfo::MethodCallback(object_name, method_name) => {
                    format!(
                        "{}{}Callback",
                        to_wgpu_type(object_name),
                        snake_to_pascal_preserve_caps(method_name)
                    )
                }
                _ => panic!(
                    "{:?}: unknown category: {:?}",
                    self.ref_mode, self.type_info
                ),
            },
            RefMode::Array => "WASM_POINTER_ARRAY_C_TYPE".to_string(),
        }
    }

    pub fn wasm_c_type(&self) -> String {
        match self.ref_mode {
            RefMode::Embedded => match &self.type_info {
                TypeInfo::Uint16 => "uint16_t".to_string(),
                TypeInfo::Uint32 => "uint32_t".to_string(),
                TypeInfo::Uint64 => "uint64_t".to_string(),
                TypeInfo::Int32 => "int32_t".to_string(),
                TypeInfo::Float32 => "float".to_string(),
                TypeInfo::Float64 => "double".to_string(),
                TypeInfo::Bool => "uint32_t".to_string(),
                TypeInfo::Count => "WASM_SIZE_C_TYPE".to_string(),
                TypeInfo::Enum(_) => "WASM_ENUM_C_TYPE".to_string(),
                TypeInfo::Bitflag(_) => "WASM_INT_C_TYPE".to_string(),
                TypeInfo::String => "WASM_POINTER_STRING_C_TYPE".to_string(),
                TypeInfo::Object(_) => "WASM_POINTER_OBJECT_C_TYPE".to_string(),
                TypeInfo::Struct(name) => to_wasm_type(&name),
                TypeInfo::FunctionType(_) => "WASM_POINTER_FUNCTION_C_TYPE".to_string(),
                _ => panic!(
                    "{:?}: unknown category: {:?}",
                    self.ref_mode, self.type_info
                ),
            },
            RefMode::Pointer(_) => match self.type_info {
                TypeInfo::Uint32 => "WASM_POINTER_UINT32_C_TYPE".to_string(),
                TypeInfo::Struct(_) => "WASM_POINTER_STRUCT_C_TYPE".to_string(),
                TypeInfo::CVoid | TypeInfo::Userdata(_, _) => {
                    "WASM_POINTER_VOID_C_TYPE".to_string()
                }
                TypeInfo::MethodCallback(_, _) => "WASM_POINTER_FUNCTION_C_TYPE".to_string(),
                _ => panic!(
                    "{:?}: unknown category: {:?}",
                    self.ref_mode, self.type_info
                ),
            },
            RefMode::Array => "WASM_POINTER_ARRAY_C_TYPE".to_string(),
        }
    }

    pub fn original_info_str(&self) -> Option<String> {
        let inner = match &self.type_info {
            TypeInfo::Enum(name) => Some(to_wgpu_type(&name)),
            TypeInfo::Bitflag(name) => Some(to_wgpu_type(&name)),
            TypeInfo::Object(name) => Some(to_wgpu_type(&name)),
            TypeInfo::Struct(name) => Some(to_wasm_type(&name)),
            TypeInfo::FunctionType(name) => Some(to_wgpu_type(&name)),
            _ => return None,
        }
        .unwrap();

        match self.ref_mode {
            RefMode::Array => Some(format!("{}[]", inner)),
            _ => Some(inner),
        }
    }

    pub fn func_var_name(&self) -> String {
        match self.ref_mode {
            RefMode::Embedded => match &self.type_info {
                TypeInfo::Count => format!("{}_count", self.name_orig),
                _ => self.name_orig.clone(),
            },
            RefMode::Pointer(_) => match &self.type_info {
                TypeInfo::MethodCallback(object_name, method_name) => {
                    to_host_callback_fn(object_name, method_name)
                },
                _ => self.name_orig.clone(),
            },
            RefMode::Array => format!("{}_array", self.name_orig),
        }
    }
}

fn to_wgpu_type(name: &str) -> String {
    format!("WGPU{}", snake_to_pascal_preserve_caps(name))
}

fn to_wasm_type(name: &str) -> String {
    format!("WasmWGPU{}", snake_to_pascal_preserve_caps(name))
}

fn to_wgpu_enum_value(enum_name: &str, entry_name: &str) -> String {
    format!(
        "{}_{}",
        to_wgpu_type(enum_name),
        snake_to_pascal_preserve_caps(entry_name)
    )
}

fn to_member(name: &str) -> String {
    snake_to_camel_preserve_caps(name)
}

fn to_member_plural(name: &str) -> String {
    format!("{}s", to_member(name))
}

fn to_wgpu_fn(object: &str, method: &str) -> String {
    format!(
        "wgpu{}{}",
        snake_to_pascal_preserve_caps(object),
        snake_to_pascal_preserve_caps(method)
    )
}

fn to_host_callback_fn(object: &str, method: &str) -> String {
    format!("host_callback_{}", to_wgpu_fn(object, method))
}
