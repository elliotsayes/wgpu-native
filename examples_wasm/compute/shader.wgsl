@group(0)
@binding(0)
var<storage, read_write> v_indices: array<u32>;

@compute
@workgroup_size(1, 1, 1)
fn main(
    @builtin(global_invocation_id) global_id: vec3<u32>,
    @builtin(num_workgroups) gridDim : vec3<u32>,
) {
    if (gridDim.y != 1 || gridDim.z != 1) { return ; }
    v_indices[global_id.x] = v_indices[global_id.x] * 2u;
}