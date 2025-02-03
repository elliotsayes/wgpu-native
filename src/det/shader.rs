use wgsl_to_json::wgsl_to_json;

use super::faial::faial_drf_check_all_kernels_drf;

pub fn validate_shader_source_wgsl(source: &str) -> Result<(), String> {
    match wgsl_to_json(source) {
        Ok(wgsl_json_str) => match faial_drf_check_all_kernels_drf(wgsl_json_str) {
            Ok(_) => Ok(()),
            Err(err) => Err(format!("Failed to validate wgsl: {}", err)),
        },
        Err(err) => Err(format!("Failed to parse wgsl: {}", err)),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    // TODO: The library errors when running multiple tests with `cargo test`
    // However, sequential calls pose no problem

    #[test]
    fn test_validate_all() {
        // #[test]
        // fn test_validate_drf() {
        let shader_drf = r#"
        @group(0) @binding(0) var<storage, read_write> data: array<f32>;

        @compute @workgroup_size(256, 1, 1) fn computeSomething(
        @builtin(workgroup_id) blockIdx : vec3<u32>,
        @builtin(num_workgroups) gridDim : vec3<u32>,
        @builtin(local_invocation_id) threadIdx : vec3<u32>
        ) {
        if (gridDim.y != 1 || gridDim.z != 1) { return ; }
        let i = blockIdx.x*256 + threadIdx.x;
        data[i] = data[i] * 2.0;
        }
        "#;
        assert!(validate_shader_source_wgsl(shader_drf).is_ok());
        // }

        // #[test]
        // fn test_validate_racy() {
        let shader_racy = r#"
        // specify a global of floats array called `data`
        @group(0) @binding(0) var<storage, read_write> data: array<f32>;

        @compute @workgroup_size(32) fn computeSomething(
        @builtin(global_invocation_id) id: vec3<u32>
        ) {
        let i = id.x;
        data[i + 1] = data[i] * 2.0;
        }
        "#;
        assert!(validate_shader_source_wgsl(shader_racy).is_err());
        // }

        // #[test]
        // fn test_validate_invalid() {
        let shader_invalid = r#"
        iM nOt A vAlId ShAdEr
        "#;
        assert!(validate_shader_source_wgsl(shader_invalid).is_err());
    }
}
