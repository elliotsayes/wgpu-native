#ifndef WGPU_DET_H
#define WGPU_DET_H

typedef void (*WGPUExtDetMessageCallback)(char const * message);

#ifdef __cplusplus
extern "C" {
#endif

void wgpuExtensionDeterminismConfigure(
    WGPUExtDetMessageCallback non_determinism_error_callback,
    WGPUExtDetMessageCallback underqualified_device_failure_callback
);

#ifdef __cplusplus
}
#endif

#endif // WGPU_DET_H
