use serde_derive::Deserialize;
use serde_derive::Serialize;
use serde_yml::Value;

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Spec {
    pub copyright: String,
    pub name: String,
    #[serde(rename = "enum_prefix")]
    pub enum_prefix: String,
    pub constants: Vec<Constant>,
    pub typedefs: Vec<Value>,
    pub enums: Vec<Enum>,
    pub bitflags: Vec<Bitflag>,
    #[serde(rename = "function_types")]
    pub function_types: Vec<FunctionType>,
    pub structs: Vec<Struct>,
    pub functions: Vec<Function>,
    pub objects: Vec<Object>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Constant {
    pub name: String,
    pub value: String,
    pub doc: String,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Enum {
    pub name: String,
    pub doc: String,
    pub entries: Vec<EnumEntry>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct EnumEntry {
    pub name: String,
    pub doc: String,
    pub value: Option<i64>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Bitflag {
    pub name: String,
    pub doc: String,
    pub entries: Vec<BitflagEntry>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct BitflagEntry {
    pub name: String,
    pub doc: String,
    #[serde(rename = "value_combination")]
    pub value_combination: Option<Vec<String>>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct FunctionType {
    pub name: String,
    pub doc: String,
    pub args: Vec<FunctionTypeArg>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct FunctionTypeArg {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: Option<String>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Struct {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    #[serde(default)]
    pub members: Vec<Member>,
    #[serde(rename = "free_members")]
    pub free_members: Option<bool>,
    #[serde(default)]
    pub extends: Vec<String>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Member {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: Option<String>,
    pub optional: Option<bool>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Function {
    pub name: String,
    pub doc: String,
    pub returns: FunctionReturns,
    pub args: Vec<FuntionArg>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct FunctionReturns {
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct FuntionArg {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: String,
    pub optional: bool,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Object {
    pub name: String,
    pub doc: String,
    pub methods: Vec<Method>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Method {
    pub name: String,
    pub doc: String,
    #[serde(default)]
    pub args: Vec<MethodArg>,
    pub returns: Option<MethodReturns>,
    #[serde(rename = "returns_async")]
    #[serde(default)]
    pub returns_async: Vec<ReturnsAsync>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct MethodArg {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: Option<String>,
    pub optional: Option<bool>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct MethodReturns {
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: Option<String>,
}

#[derive(Default, Debug, Clone, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct ReturnsAsync {
    pub name: String,
    pub doc: String,
    #[serde(rename = "type")]
    pub type_field: String,
    pub pointer: Option<String>,
}
