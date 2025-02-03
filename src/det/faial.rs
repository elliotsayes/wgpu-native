use faial_sys::faial_drf_call_wgsl_rust;
use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct FaialResult {
    kernels: Vec<FaialKernel>,
    argv: Vec<String>,
    executable_name: String,
    z3_version: String,
}

#[derive(Serialize, Deserialize)]
pub struct FaialKernel {
    kernel_name: String,
    status: String,
    unknowns: Vec<Option<serde_json::Value>>,
    logics: Vec<String>,
    errors: Vec<Option<serde_json::Value>>,
}

pub fn faial_drf_check_all_kernels_drf(wgsl_json_string: String) -> Result<(), String> {
    let result = faial_drf_call_wgsl_rust(wgsl_json_string);
    match result {
        Ok(result) => {
            let faial_result = serde_json::from_str::<FaialResult>(&result);
            match faial_result {
                Ok(faial_result) => {
                    if faial_result.kernels.iter().all(|x| x.status == "drf") {
                        Ok(())
                    } else {
                        let racy_kernels = faial_result
                            .kernels
                            .iter()
                            .filter(|x| x.status != "drf")
                            .map(|x| x.kernel_name.clone())
                            .collect::<Vec<String>>();
                        Err(format!(
                            "Faial found racy kernel(s): {}",
                            racy_kernels.join(", ")
                        ))
                    }
                }
                Err(faial_result) => {
                    Err(format!("Failed to parse faial_result: {:#?}", faial_result))
                }
            }
        }
        Err(result) => Err(result),
    }
}
