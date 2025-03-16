#ifndef WGPU_DET_H
#define WGPU_DET_H

typedef void (*WGPUExtDetMessageCallback)(char const * message);

typedef enum {
    WGPUExtDetSchedulingStrategy_BeginImmediateCompleteImmediate,
    WGPUExtDetSchedulingStrategy_BeginImmediateCompleteOnPollAll,
} WGPUExtDetSchedulingStrategy;

#ifdef __cplusplus
extern "C" {
#endif

void wgpuExtensionDeterminismConfigureErrorCallbacks(
    WGPUExtDetMessageCallback non_determinism_error_callback,
    WGPUExtDetMessageCallback underqualified_device_failure_callback
);

void wgpuExtensionDeterminismConfigureVirtualDevice(
    WGPUExtDetSchedulingStrategy scheduling_strategy
);

int wgpuExtensionDeterminismValidateVirtualDevice();

void wgpuExtensionDeterminismReset();

#ifdef __cplusplus
}
#endif

#endif // WGPU_DET_H
