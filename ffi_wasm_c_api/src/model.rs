use regex::Regex;
use std::str::FromStr;
use strum_macros::{Display, EnumString};

use crate::{
    spec::{self},
    str::{snake_to_camel_preserve_caps, snake_to_pascal_preserve_caps, to_singular},
};

pub struct SpecModel {
    pub objects: Vec<ObjectModel>,
    pub structs_chained: Vec<StructModel>,
    pub structs_spec: Vec<StructModel>,
}

impl SpecModel {
    pub fn from_spec(spec: &spec::Spec) -> Self {
        Self {
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
}

pub fn to_wgpu_type(name: &str) -> String {
    format!("WGPU{}", snake_to_pascal_preserve_caps(name))
}

fn to_wasm_type(name: &str) -> String {
    format!("WasmWGPU{}", snake_to_pascal_preserve_caps(name))
}

fn to_member(name: &str) -> String {
    snake_to_camel_preserve_caps(name)
}

fn to_member_plural(name: &str) -> String {
    format!("{}s", to_member(name))
}

pub struct ObjectModel {
    pub o: Option<spec::Object>,
    pub name_orig: String,
    pub name_wgpu_type: String,
    pub name_member_plural: String,
}

impl ObjectModel {
    pub fn from_spec(_spec: &spec::Spec, object: &spec::Object) -> Self {
        println!("O {}", object.name);

        Self {
            o: Some(object.clone()),
            name_orig: object.name.clone(),
            name_wgpu_type: to_wgpu_type(&object.name),
            name_member_plural: to_member_plural(&object.name),
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
                        cat: MemberGroupCategory::Individual,
                        members: vec![MemberModel {
                            name_orig: "next_in_chain".to_string(),
                            name_member: "nextInChain".to_string(),
                            category: MemberCategory::Struct("chained_struct".to_string()),
                            ref_mode: MemberTypeMode::Pointer(is_mutable),
                        }],
                    },
                    StructType::ExtensionIn | StructType::ExtensionOut => MemberGroupModel {
                        o: None,
                        name_orig: "chain".to_string(),
                        cat: MemberGroupCategory::Individual,
                        members: vec![MemberModel {
                            name_orig: "chain".to_string(),
                            name_member: "chain".to_string(),
                            category: MemberCategory::Struct("chained_struct".to_string()),
                            ref_mode: MemberTypeMode::Embedded,
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

    pub fn members(&self) -> Vec<MemberModel> {
        let mut all_members = Vec::<MemberModel>::new();
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
        MemberModel {
            name_orig: "next".to_string(),
            name_member: "next".to_string(),
            category: MemberCategory::Struct(name.clone()),
            ref_mode: MemberTypeMode::Pointer(mutable),
        },
        MemberModel {
            name_orig: "stype".to_string(),
            name_member: "sType".to_string(),
            category: MemberCategory::Enum("stype".to_string()),
            ref_mode: MemberTypeMode::Embedded,
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
            cat: MemberGroupCategory::Individual,
            members,
        }],
        free_members: false,
    }
}

#[derive(Debug, Clone)]
pub enum MemberGroupCategory {
    Individual,
    CountAndArray,
}

#[derive(Debug, Clone)]
pub struct MemberGroupModel {
    pub o: Option<spec::Member>,
    pub name_orig: String,
    pub cat: MemberGroupCategory,
    pub members: Vec<MemberModel>,
}

pub fn to_count_member(name: &str) -> String {
    format!("{}Count", snake_to_camel_preserve_caps(&to_singular(name)))
}

impl MemberGroupModel {
    pub fn from_spec(_spec: &spec::Spec, member: &spec::Member) -> Self {
        let find_arr = Regex::new(r"array<([\w\.]+)>")
            .unwrap()
            .captures(&member.type_field);
        let (cat, children) = match find_arr {
            Some(caps) => {
                let tf_inner = caps.get(1).unwrap().as_str();
                let count = MemberModel {
                    name_orig: member.name.clone(),
                    category: MemberCategory::Count,
                    name_member: to_count_member(&member.name),
                    ref_mode: MemberTypeMode::Embedded,
                };
                let array = MemberModel {
                    name_orig: member.name.clone(),
                    name_member: to_member(&member.name),
                    category: MemberCategory::from_type(tf_inner),
                    ref_mode: MemberTypeMode::Array,
                };
                (MemberGroupCategory::CountAndArray, vec![count, array])
            }
            None => {
                let ref_mode = match &member.pointer {
                    Some(mutability) => MemberTypeMode::Pointer(mutability == "mutable"),
                    None => MemberTypeMode::Embedded,
                };
                (
                    MemberGroupCategory::Individual,
                    vec![MemberModel {
                        name_orig: member.name.clone(),
                        name_member: to_member(&member.name),
                        category: MemberCategory::from_type(&member.type_field),
                        ref_mode,
                    }],
                )
            }
        };
        Self {
            o: Some(member.clone()),
            name_orig: member.name.clone(),
            cat,
            members: children,
        }
    }
}

#[derive(EnumString, Debug, Clone, Display)]
#[strum(serialize_all = "snake_case")]
pub enum MemberCategory {
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
}

impl MemberCategory {
    pub fn from_type(type_field: &str) -> Self {
        let mut parts = type_field.split(".");
        let mut category = parts.next().unwrap();
        let specific = parts.next().unwrap_or_default();

        // I'm not sure why this is listed as `function_type`...?
        if category == "function_type" && specific == "uncaptured_error_callback_info" {
            category = "struct";
        }

        let info = MemberCategory::from_str(category).unwrap();
        // Set the specific type
        match info {
            MemberCategory::Enum(_) => MemberCategory::Enum(specific.to_string()),
            MemberCategory::Bitflag(_) => MemberCategory::Bitflag(specific.to_string()),
            MemberCategory::Object(_) => MemberCategory::Object(specific.to_string()),
            MemberCategory::Struct(_) => MemberCategory::Struct(specific.to_string()),
            MemberCategory::FunctionType(_) => MemberCategory::FunctionType(specific.to_string()),
            _ => info,
        }
    }
}

#[derive(Debug, Clone, Display)]
pub enum MemberTypeMode {
    Embedded,
    Pointer(bool), // bool is true if the pointer is mutable
    Array,
}

#[derive(Debug, Clone)]
pub struct MemberModel {
    pub name_orig: String,
    pub name_member: String,
    pub category: MemberCategory,
    pub ref_mode: MemberTypeMode,
}

impl MemberModel {
    pub fn is_primitive(&self) -> bool {
        matches!(
            self.category,
            MemberCategory::Uint16
                | MemberCategory::Uint32
                | MemberCategory::Uint64
                | MemberCategory::Int32
                | MemberCategory::Float32
                | MemberCategory::Float64
                | MemberCategory::Bool
                | MemberCategory::Enum(_)
                | MemberCategory::Bitflag(_)
        )
    }

    pub fn wasm_c_type(&self) -> String {
        match self.ref_mode {
            MemberTypeMode::Embedded => match &self.category {
                MemberCategory::Uint16 => "uint16_t".to_string(),
                MemberCategory::Uint32 => "uint32_t".to_string(),
                MemberCategory::Uint64 => "uint64_t".to_string(),
                MemberCategory::Int32 => "int32_t".to_string(),
                MemberCategory::Float32 => "float".to_string(),
                MemberCategory::Float64 => "double".to_string(),
                MemberCategory::Bool => "uint32_t".to_string(),
                MemberCategory::Count => "WASM_SIZE_C_TYPE".to_string(),
                MemberCategory::Enum(_) => "WASM_ENUM_C_TYPE".to_string(),
                MemberCategory::Bitflag(_) => "WASM_INT_C_TYPE".to_string(),
                MemberCategory::String => "WASM_POINTER_STRING_C_TYPE".to_string(),
                MemberCategory::Object(_) => "WASM_POINTER_OBJECT_C_TYPE".to_string(),
                MemberCategory::Struct(name) => to_wasm_type(&name),
                MemberCategory::FunctionType(_) => "WASM_POINTER_FUNCTION_C_TYPE".to_string(),
                _ => panic!("{:?}: unknown category: {:?}", self.ref_mode, self.category),
            },
            MemberTypeMode::Pointer(_) => match self.category {
                MemberCategory::Uint32 => "WASM_POINTER_UINT32_C_TYPE".to_string(),
                MemberCategory::Struct(_) => "WASM_POINTER_STRUCT_C_TYPE".to_string(),
                MemberCategory::CVoid => "WASM_POINTER_VOID_C_TYPE".to_string(),
                _ => panic!("{:?}: unknown category: {:?}", self.ref_mode, self.category),
            },
            MemberTypeMode::Array => "WASM_POINTER_ARRAY_C_TYPE".to_string(),
        }
    }

    pub fn original_info_str(&self) -> Option<String> {
        let inner = match &self.category {
            MemberCategory::Enum(name) => Some(to_wgpu_type(&name)),
            MemberCategory::Bitflag(name) => Some(to_wgpu_type(&name)),
            MemberCategory::Object(name) => Some(to_wgpu_type(&name)),
            MemberCategory::Struct(name) => Some(to_wasm_type(&name)),
            MemberCategory::FunctionType(name) => Some(to_wgpu_type(&name)),
            _ => return None,
        }
        .unwrap();

        match self.ref_mode {
            MemberTypeMode::Array => Some(format!("{}[]", inner)),
            _ => Some(inner),
        }
    }
}
