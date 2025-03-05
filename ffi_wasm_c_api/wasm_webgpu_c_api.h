#ifndef WASM_C_API_WEBGPU_IMPL_H_
#define WASM_C_API_WEBGPU_IMPL_H_

#include "wasm_webgpu_c_api_inc.h"
#include "wasm_helpers.h"

/* Struct Declarations */
struct WasmWGPUChainedStruct;
struct WasmWGPUChainedStructOut;
struct WasmWGPULimits;
struct WasmWGPUBlendComponent;
struct WasmWGPUColor;
struct WasmWGPUComputePassTimestampWrites;
struct WasmWGPUExtent3D;
struct WasmWGPUVertexAttribute;
struct WasmWGPUVertexBufferLayout;
struct WasmWGPUOrigin3D;
struct WasmWGPURenderPassDepthStencilAttachment;
struct WasmWGPURenderPassTimestampWrites;
struct WasmWGPUBlendState;
struct WasmWGPUStencilFaceState;
struct WasmWGPUSurfaceTexture;
struct WasmWGPUUncapturedErrorCallbackInfo;
struct WasmWGPUTextureDataLayout;
struct WasmWGPUQueueDescriptor;
struct WasmWGPUProgrammableStageDescriptor;
struct WasmWGPURequestAdapterOptions;
struct WasmWGPUDeviceDescriptor;
struct WasmWGPUBindGroupEntry;
struct WasmWGPUBindGroupDescriptor;
struct WasmWGPUBufferBindingLayout;
struct WasmWGPUSamplerBindingLayout;
struct WasmWGPUTextureBindingLayout;
struct WasmWGPUSurfaceConfiguration;
struct WasmWGPUStorageTextureBindingLayout;
struct WasmWGPUBindGroupLayoutEntry;
struct WasmWGPUBindGroupLayoutDescriptor;
struct WasmWGPUBufferDescriptor;
struct WasmWGPUConstantEntry;
struct WasmWGPUCommandBufferDescriptor;
struct WasmWGPUCommandEncoderDescriptor;
struct WasmWGPUCompilationInfo;
struct WasmWGPUCompilationMessage;
struct WasmWGPUComputePassDescriptor;
struct WasmWGPUComputePipelineDescriptor;
struct WasmWGPURequiredLimits;
struct WasmWGPUImageCopyBuffer;
struct WasmWGPUImageCopyTexture;
struct WasmWGPUInstanceDescriptor;
struct WasmWGPUPipelineLayoutDescriptor;
struct WasmWGPUQuerySetDescriptor;
struct WasmWGPURenderBundleDescriptor;
struct WasmWGPURenderBundleEncoderDescriptor;
struct WasmWGPURenderPassColorAttachment;
struct WasmWGPURenderPassDescriptor;
struct WasmWGPUVertexState;
struct WasmWGPUPrimitiveState;
struct WasmWGPUDepthStencilState;
struct WasmWGPUMultisampleState;
struct WasmWGPUFragmentState;
struct WasmWGPUColorTargetState;
struct WasmWGPURenderPipelineDescriptor;
struct WasmWGPUSamplerDescriptor;
struct WasmWGPUShaderModuleDescriptor;
struct WasmWGPUShaderModuleCompilationHint;
struct WasmWGPUSurfaceDescriptor;
struct WasmWGPUTextureDescriptor;
struct WasmWGPUTextureViewDescriptor;
struct WasmWGPUAdapterInfo;
struct WasmWGPUSurfaceCapabilities;
struct WasmWGPUSupportedLimits;
struct WasmWGPURenderPassDescriptorMaxDrawCount;
struct WasmWGPUPrimitiveDepthClipControl;
struct WasmWGPUShaderModuleSPIRVDescriptor;
struct WasmWGPUShaderModuleWGSLDescriptor;
struct WasmWGPUSurfaceDescriptorFromAndroidNativeWindow;
struct WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector;
struct WasmWGPUSurfaceDescriptorFromMetalLayer;
struct WasmWGPUSurfaceDescriptorFromWindowsHWND;
struct WasmWGPUSurfaceDescriptorFromXcbWindow;
struct WasmWGPUSurfaceDescriptorFromXlibWindow;
struct WasmWGPUSurfaceDescriptorFromWaylandSurface;

/* Extract Struct Function Declarations */
int extract_chained_struct(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUChainedStruct **out_ha_host_struct_ptr
);
int extract_chained_struct_out(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUChainedStructOut **out_ha_host_struct_ptr
);
int extract_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPULimits **out_ha_host_struct_ptr
);
int extract_blend_component(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBlendComponent **out_ha_host_struct_ptr
);
int extract_color(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUColor **out_ha_host_struct_ptr
);
int extract_compute_pass_timestamp_writes(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePassTimestampWrites **out_ha_host_struct_ptr
);
int extract_extent_3D(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUExtent3D **out_ha_host_struct_ptr
);
int extract_vertex_attribute(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexAttribute **out_ha_host_struct_ptr
);
int extract_vertex_buffer_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexBufferLayout **out_ha_host_struct_ptr
);
int extract_origin_3D(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUOrigin3D **out_ha_host_struct_ptr
);
int extract_render_pass_depth_stencil_attachment(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDepthStencilAttachment **out_ha_host_struct_ptr
);
int extract_render_pass_timestamp_writes(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassTimestampWrites **out_ha_host_struct_ptr
);
int extract_blend_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBlendState **out_ha_host_struct_ptr
);
int extract_stencil_face_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUStencilFaceState **out_ha_host_struct_ptr
);
int extract_surface_texture(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceTexture **out_ha_host_struct_ptr
);
int extract_uncaptured_error_callback_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUUncapturedErrorCallbackInfo **out_ha_host_struct_ptr
);
int extract_texture_data_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureDataLayout **out_ha_host_struct_ptr
);
int extract_queue_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUQueueDescriptor **out_ha_host_struct_ptr
);
int extract_programmable_stage_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUProgrammableStageDescriptor **out_ha_host_struct_ptr
);
int extract_request_adapter_options(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURequestAdapterOptions **out_ha_host_struct_ptr
);
int extract_device_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUDeviceDescriptor **out_ha_host_struct_ptr
);
int extract_bind_group_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupEntry **out_ha_host_struct_ptr
);
int extract_bind_group_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupDescriptor **out_ha_host_struct_ptr
);
int extract_buffer_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBufferBindingLayout **out_ha_host_struct_ptr
);
int extract_sampler_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSamplerBindingLayout **out_ha_host_struct_ptr
);
int extract_texture_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureBindingLayout **out_ha_host_struct_ptr
);
int extract_surface_configuration(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceConfiguration **out_ha_host_struct_ptr
);
int extract_storage_texture_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUStorageTextureBindingLayout **out_ha_host_struct_ptr
);
int extract_bind_group_layout_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupLayoutEntry **out_ha_host_struct_ptr
);
int extract_bind_group_layout_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupLayoutDescriptor **out_ha_host_struct_ptr
);
int extract_buffer_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBufferDescriptor **out_ha_host_struct_ptr
);
int extract_constant_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUConstantEntry **out_ha_host_struct_ptr
);
int extract_command_buffer_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCommandBufferDescriptor **out_ha_host_struct_ptr
);
int extract_command_encoder_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCommandEncoderDescriptor **out_ha_host_struct_ptr
);
int extract_compilation_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCompilationInfo **out_ha_host_struct_ptr
);
int extract_compilation_message(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCompilationMessage **out_ha_host_struct_ptr
);
int extract_compute_pass_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePassDescriptor **out_ha_host_struct_ptr
);
int extract_compute_pipeline_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePipelineDescriptor **out_ha_host_struct_ptr
);
int extract_required_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURequiredLimits **out_ha_host_struct_ptr
);
int extract_image_copy_buffer(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUImageCopyBuffer **out_ha_host_struct_ptr
);
int extract_image_copy_texture(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUImageCopyTexture **out_ha_host_struct_ptr
);
int extract_instance_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUInstanceDescriptor **out_ha_host_struct_ptr
);
int extract_pipeline_layout_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPipelineLayoutDescriptor **out_ha_host_struct_ptr
);
int extract_query_set_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUQuerySetDescriptor **out_ha_host_struct_ptr
);
int extract_render_bundle_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderBundleDescriptor **out_ha_host_struct_ptr
);
int extract_render_bundle_encoder_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderBundleEncoderDescriptor **out_ha_host_struct_ptr
);
int extract_render_pass_color_attachment(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassColorAttachment **out_ha_host_struct_ptr
);
int extract_render_pass_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDescriptor **out_ha_host_struct_ptr
);
int extract_vertex_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexState **out_ha_host_struct_ptr
);
int extract_primitive_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPrimitiveState **out_ha_host_struct_ptr
);
int extract_depth_stencil_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUDepthStencilState **out_ha_host_struct_ptr
);
int extract_multisample_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUMultisampleState **out_ha_host_struct_ptr
);
int extract_fragment_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUFragmentState **out_ha_host_struct_ptr
);
int extract_color_target_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUColorTargetState **out_ha_host_struct_ptr
);
int extract_render_pipeline_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPipelineDescriptor **out_ha_host_struct_ptr
);
int extract_sampler_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSamplerDescriptor **out_ha_host_struct_ptr
);
int extract_shader_module_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleDescriptor **out_ha_host_struct_ptr
);
int extract_shader_module_compilation_hint(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleCompilationHint **out_ha_host_struct_ptr
);
int extract_surface_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptor **out_ha_host_struct_ptr
);
int extract_texture_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureDescriptor **out_ha_host_struct_ptr
);
int extract_texture_view_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureViewDescriptor **out_ha_host_struct_ptr
);
int extract_adapter_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUAdapterInfo **out_ha_host_struct_ptr
);
int extract_surface_capabilities(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceCapabilities **out_ha_host_struct_ptr
);
int extract_supported_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSupportedLimits **out_ha_host_struct_ptr
);
int extract_render_pass_descriptor_max_draw_count(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDescriptorMaxDrawCount **out_ha_host_struct_ptr
);
int extract_primitive_depth_clip_control(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPrimitiveDepthClipControl **out_ha_host_struct_ptr
);
int extract_shader_module_SPIRV_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleSPIRVDescriptor **out_ha_host_struct_ptr
);
int extract_shader_module_WGSL_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleWGSLDescriptor **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_android_native_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromAndroidNativeWindow **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_canvas_HTML_selector(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromCanvasHTMLSelector **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_metal_layer(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromMetalLayer **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_windows_HWND(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromWindowsHWND **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_xcb_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromXcbWindow **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_xlib_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromXlibWindow **out_ha_host_struct_ptr
);
int extract_surface_descriptor_from_wayland_surface(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromWaylandSurface **out_ha_host_struct_ptr
);

/* Free Struct Function Declarations */
int free_chained_struct(WGPUChainedStruct *struct_ptr);
int free_chained_struct_out(WGPUChainedStructOut *struct_ptr);
int free_limits(WGPULimits *struct_ptr);
int free_blend_component(WGPUBlendComponent *struct_ptr);
int free_color(WGPUColor *struct_ptr);
int free_compute_pass_timestamp_writes(WGPUComputePassTimestampWrites *struct_ptr);
int free_extent_3D(WGPUExtent3D *struct_ptr);
int free_vertex_attribute(WGPUVertexAttribute *struct_ptr);
int free_vertex_buffer_layout(WGPUVertexBufferLayout *struct_ptr);
int free_origin_3D(WGPUOrigin3D *struct_ptr);
int free_render_pass_depth_stencil_attachment(WGPURenderPassDepthStencilAttachment *struct_ptr);
int free_render_pass_timestamp_writes(WGPURenderPassTimestampWrites *struct_ptr);
int free_blend_state(WGPUBlendState *struct_ptr);
int free_stencil_face_state(WGPUStencilFaceState *struct_ptr);
int free_surface_texture(WGPUSurfaceTexture *struct_ptr);
int free_uncaptured_error_callback_info(WGPUUncapturedErrorCallbackInfo *struct_ptr);
int free_texture_data_layout(WGPUTextureDataLayout *struct_ptr);
int free_queue_descriptor(WGPUQueueDescriptor *struct_ptr);
int free_programmable_stage_descriptor(WGPUProgrammableStageDescriptor *struct_ptr);
int free_request_adapter_options(WGPURequestAdapterOptions *struct_ptr);
int free_device_descriptor(WGPUDeviceDescriptor *struct_ptr);
int free_bind_group_entry(WGPUBindGroupEntry *struct_ptr);
int free_bind_group_descriptor(WGPUBindGroupDescriptor *struct_ptr);
int free_buffer_binding_layout(WGPUBufferBindingLayout *struct_ptr);
int free_sampler_binding_layout(WGPUSamplerBindingLayout *struct_ptr);
int free_texture_binding_layout(WGPUTextureBindingLayout *struct_ptr);
int free_surface_configuration(WGPUSurfaceConfiguration *struct_ptr);
int free_storage_texture_binding_layout(WGPUStorageTextureBindingLayout *struct_ptr);
int free_bind_group_layout_entry(WGPUBindGroupLayoutEntry *struct_ptr);
int free_bind_group_layout_descriptor(WGPUBindGroupLayoutDescriptor *struct_ptr);
int free_buffer_descriptor(WGPUBufferDescriptor *struct_ptr);
int free_constant_entry(WGPUConstantEntry *struct_ptr);
int free_command_buffer_descriptor(WGPUCommandBufferDescriptor *struct_ptr);
int free_command_encoder_descriptor(WGPUCommandEncoderDescriptor *struct_ptr);
int free_compilation_info(WGPUCompilationInfo *struct_ptr);
int free_compilation_message(WGPUCompilationMessage *struct_ptr);
int free_compute_pass_descriptor(WGPUComputePassDescriptor *struct_ptr);
int free_compute_pipeline_descriptor(WGPUComputePipelineDescriptor *struct_ptr);
int free_required_limits(WGPURequiredLimits *struct_ptr);
int free_image_copy_buffer(WGPUImageCopyBuffer *struct_ptr);
int free_image_copy_texture(WGPUImageCopyTexture *struct_ptr);
int free_instance_descriptor(WGPUInstanceDescriptor *struct_ptr);
int free_pipeline_layout_descriptor(WGPUPipelineLayoutDescriptor *struct_ptr);
int free_query_set_descriptor(WGPUQuerySetDescriptor *struct_ptr);
int free_render_bundle_descriptor(WGPURenderBundleDescriptor *struct_ptr);
int free_render_bundle_encoder_descriptor(WGPURenderBundleEncoderDescriptor *struct_ptr);
int free_render_pass_color_attachment(WGPURenderPassColorAttachment *struct_ptr);
int free_render_pass_descriptor(WGPURenderPassDescriptor *struct_ptr);
int free_vertex_state(WGPUVertexState *struct_ptr);
int free_primitive_state(WGPUPrimitiveState *struct_ptr);
int free_depth_stencil_state(WGPUDepthStencilState *struct_ptr);
int free_multisample_state(WGPUMultisampleState *struct_ptr);
int free_fragment_state(WGPUFragmentState *struct_ptr);
int free_color_target_state(WGPUColorTargetState *struct_ptr);
int free_render_pipeline_descriptor(WGPURenderPipelineDescriptor *struct_ptr);
int free_sampler_descriptor(WGPUSamplerDescriptor *struct_ptr);
int free_shader_module_descriptor(WGPUShaderModuleDescriptor *struct_ptr);
int free_shader_module_compilation_hint(WGPUShaderModuleCompilationHint *struct_ptr);
int free_surface_descriptor(WGPUSurfaceDescriptor *struct_ptr);
int free_texture_descriptor(WGPUTextureDescriptor *struct_ptr);
int free_texture_view_descriptor(WGPUTextureViewDescriptor *struct_ptr);
int free_adapter_info(WGPUAdapterInfo *struct_ptr);
int free_surface_capabilities(WGPUSurfaceCapabilities *struct_ptr);
int free_supported_limits(WGPUSupportedLimits *struct_ptr);
int free_render_pass_descriptor_max_draw_count(WGPURenderPassDescriptorMaxDrawCount *struct_ptr);
int free_primitive_depth_clip_control(WGPUPrimitiveDepthClipControl *struct_ptr);
int free_shader_module_SPIRV_descriptor(WGPUShaderModuleSPIRVDescriptor *struct_ptr);
int free_shader_module_WGSL_descriptor(WGPUShaderModuleWGSLDescriptor *struct_ptr);
int free_surface_descriptor_from_android_native_window(WGPUSurfaceDescriptorFromAndroidNativeWindow *struct_ptr);
int free_surface_descriptor_from_canvas_HTML_selector(WGPUSurfaceDescriptorFromCanvasHTMLSelector *struct_ptr);
int free_surface_descriptor_from_metal_layer(WGPUSurfaceDescriptorFromMetalLayer *struct_ptr);
int free_surface_descriptor_from_windows_HWND(WGPUSurfaceDescriptorFromWindowsHWND *struct_ptr);
int free_surface_descriptor_from_xcb_window(WGPUSurfaceDescriptorFromXcbWindow *struct_ptr);
int free_surface_descriptor_from_xlib_window(WGPUSurfaceDescriptorFromXlibWindow *struct_ptr);
int free_surface_descriptor_from_wayland_surface(WGPUSurfaceDescriptorFromWaylandSurface *struct_ptr);

/* Wasm Callback Function Declarations */
void host_callback_wgpuAdapterRequestDevice(
    WGPURequestDeviceStatus status,
    WGPUDevice device,
    const char * message,
    void * userdata
);
void host_callback_wgpuBufferMapAsync(
    WGPUBufferMapAsyncStatus status,
    void * userdata
);
void host_callback_wgpuDeviceCreateComputePipelineAsync(
    WGPUCreatePipelineAsyncStatus status,
    WGPUComputePipeline pipeline,
    const char * message,
    void * userdata
);
void host_callback_wgpuDeviceCreateRenderPipelineAsync(
    WGPUCreatePipelineAsyncStatus status,
    WGPURenderPipeline pipeline,
    const char * message,
    void * userdata
);
void host_callback_wgpuInstanceRequestAdapter(
    WGPURequestAdapterStatus status,
    WGPUAdapter adapter,
    const char * message,
    void * userdata
);
void host_callback_wgpuQueueOnSubmittedWorkDone(
    WGPUQueueWorkDoneStatus status,
    void * userdata
);
void host_callback_wgpuShaderModuleGetCompilationInfo(
    WGPUCompilationInfoRequestStatus status,
    const struct WGPUCompilationInfo * compilation_info,
    void * userdata
);

/* Wasm Import Function Declarations */
wasm_trap_t *wasm_import_wgpuAdapterGetLimits(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuAdapterHasFeature(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuAdapterEnumerateFeatures(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuAdapterGetInfo(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuAdapterRequestDevice(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBindGroupSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBindGroupLayoutSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferMapAsync(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferGetMappedRange(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferGetConstMappedRange(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferGetUsage(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferGetSize(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferGetMapState(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferUnmap(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuBufferDestroy(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandBufferSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderFinish(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderBeginComputePass(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderBeginRenderPass(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderCopyBufferToBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderCopyBufferToTexture(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderCopyTextureToBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderCopyTextureToTexture(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderClearBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderInsertDebugMarker(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderPopDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderPushDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderResolveQuerySet(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderWriteTimestamp(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuCommandEncoderSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderInsertDebugMarker(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderPopDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderPushDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderSetPipeline(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderSetBindGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderDispatchWorkgroups(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderDispatchWorkgroupsIndirect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderEnd(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePassEncoderSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePipelineGetBindGroupLayout(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuComputePipelineSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateBindGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateBindGroupLayout(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateCommandEncoder(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateComputePipeline(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateComputePipelineAsync(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreatePipelineLayout(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateQuerySet(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateRenderPipelineAsync(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateRenderBundleEncoder(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateRenderPipeline(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateSampler(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateShaderModule(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceCreateTexture(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceDestroy(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceGetLimits(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceHasFeature(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceEnumerateFeatures(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceGetQueue(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDevicePushErrorScope(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDevicePopErrorScope(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuDeviceSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuInstanceCreateSurface(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuInstanceHasWGSLLanguageFeature(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuInstanceProcessEvents(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuInstanceRequestAdapter(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuPipelineLayoutSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQuerySetSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQuerySetGetType(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQuerySetGetCount(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQuerySetDestroy(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQueueSubmit(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQueueOnSubmittedWorkDone(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQueueWriteBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQueueWriteTexture(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuQueueSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetPipeline(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetBindGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDraw(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndexed(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndirect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndexedIndirect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderInsertDebugMarker(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderPopDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderPushDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetVertexBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetIndexBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderFinish(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetPipeline(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetBindGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderDraw(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndexed(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndirect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndexedIndirect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderExecuteBundles(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderInsertDebugMarker(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderPopDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderPushDebugGroup(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetStencilReference(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetBlendConstant(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetViewport(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetScissorRect(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetVertexBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetIndexBuffer(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderBeginOcclusionQuery(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderEndOcclusionQuery(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderEnd(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPipelineGetBindGroupLayout(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuRenderPipelineSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSamplerSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuShaderModuleGetCompilationInfo(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuShaderModuleSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfaceConfigure(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfaceGetCapabilities(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfaceGetCurrentTexture(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfacePresent(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfaceUnconfigure(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuSurfaceSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureCreateView(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetWidth(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetHeight(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetDepthOrArrayLayers(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetMipLevelCount(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetSampleCount(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetDimension(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetFormat(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureGetUsage(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureDestroy(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);
wasm_trap_t *wasm_import_wgpuTextureViewSetLabel(void *env, const wasm_val_vec_t *args, wasm_val_vec_t *results);

/* Struct Definitions */

typedef struct WasmWGPUChainedStruct {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ next;
    WASM_ENUM_C_TYPE /* WGPUStype */ sType;
} WasmWGPUChainedStruct;

typedef struct WasmWGPUChainedStructOut {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStructOut */ next;
    WASM_ENUM_C_TYPE /* WGPUStype */ sType;
} WasmWGPUChainedStructOut;

typedef struct WasmWGPULimits {
    uint32_t maxTextureDimension1D;
    uint32_t maxTextureDimension2D;
    uint32_t maxTextureDimension3D;
    uint32_t maxTextureArrayLayers;
    uint32_t maxBindGroups;
    uint32_t maxBindGroupsPlusVertexBuffers;
    uint32_t maxBindingsPerBindGroup;
    uint32_t maxDynamicUniformBuffersPerPipelineLayout;
    uint32_t maxDynamicStorageBuffersPerPipelineLayout;
    uint32_t maxSampledTexturesPerShaderStage;
    uint32_t maxSamplersPerShaderStage;
    uint32_t maxStorageBuffersPerShaderStage;
    uint32_t maxStorageTexturesPerShaderStage;
    uint32_t maxUniformBuffersPerShaderStage;
    uint64_t maxUniformBufferBindingSize;
    uint64_t maxStorageBufferBindingSize;
    uint32_t minUniformBufferOffsetAlignment;
    uint32_t minStorageBufferOffsetAlignment;
    uint32_t maxVertexBuffers;
    uint64_t maxBufferSize;
    uint32_t maxVertexAttributes;
    uint32_t maxVertexBufferArrayStride;
    uint32_t maxInterStageShaderComponents;
    uint32_t maxInterStageShaderVariables;
    uint32_t maxColorAttachments;
    uint32_t maxColorAttachmentBytesPerSample;
    uint32_t maxComputeWorkgroupStorageSize;
    uint32_t maxComputeInvocationsPerWorkgroup;
    uint32_t maxComputeWorkgroupSizeX;
    uint32_t maxComputeWorkgroupSizeY;
    uint32_t maxComputeWorkgroupSizeZ;
    uint32_t maxComputeWorkgroupsPerDimension;
} WasmWGPULimits;

typedef struct WasmWGPUBlendComponent {
    WASM_ENUM_C_TYPE /* WGPUBlendOperation */ operation;
    WASM_ENUM_C_TYPE /* WGPUBlendFactor */ srcFactor;
    WASM_ENUM_C_TYPE /* WGPUBlendFactor */ dstFactor;
} WasmWGPUBlendComponent;

typedef struct WasmWGPUColor {
    double r;
    double g;
    double b;
    double a;
} WasmWGPUColor;

typedef struct WasmWGPUComputePassTimestampWrites {
    WASM_POINTER_OBJECT_C_TYPE /* WGPUQuerySet */ querySet;
    uint32_t beginningOfPassWriteIndex;
    uint32_t endOfPassWriteIndex;
} WasmWGPUComputePassTimestampWrites;

typedef struct WasmWGPUExtent3D {
    uint32_t width;
    uint32_t height;
    uint32_t depthOrArrayLayers;
} WasmWGPUExtent3D;

typedef struct WasmWGPUVertexAttribute {
    WASM_ENUM_C_TYPE /* WGPUVertexFormat */ format;
    uint64_t offset;
    uint32_t shaderLocation;
} WasmWGPUVertexAttribute;

typedef struct WasmWGPUVertexBufferLayout {
    uint64_t arrayStride;
    WASM_ENUM_C_TYPE /* WGPUVertexStepMode */ stepMode;
    WASM_SIZE_C_TYPE attributeCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUVertexAttribute[] */ attributes;
} WasmWGPUVertexBufferLayout;

typedef struct WasmWGPUOrigin3D {
    uint32_t x;
    uint32_t y;
    uint32_t z;
} WasmWGPUOrigin3D;

typedef struct WasmWGPURenderPassDepthStencilAttachment {
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTextureView */ view;
    WASM_ENUM_C_TYPE /* WGPULoadOp */ depthLoadOp;
    WASM_ENUM_C_TYPE /* WGPUStoreOp */ depthStoreOp;
    float depthClearValue;
    uint32_t depthReadOnly;
    WASM_ENUM_C_TYPE /* WGPULoadOp */ stencilLoadOp;
    WASM_ENUM_C_TYPE /* WGPUStoreOp */ stencilStoreOp;
    uint32_t stencilClearValue;
    uint32_t stencilReadOnly;
} WasmWGPURenderPassDepthStencilAttachment;

typedef struct WasmWGPURenderPassTimestampWrites {
    WASM_POINTER_OBJECT_C_TYPE /* WGPUQuerySet */ querySet;
    uint32_t beginningOfPassWriteIndex;
    uint32_t endOfPassWriteIndex;
} WasmWGPURenderPassTimestampWrites;

typedef struct WasmWGPUBlendState {
    WasmWGPUBlendComponent /* WasmWGPUBlendComponent */ color;
    WasmWGPUBlendComponent /* WasmWGPUBlendComponent */ alpha;
} WasmWGPUBlendState;

typedef struct WasmWGPUStencilFaceState {
    WASM_ENUM_C_TYPE /* WGPUCompareFunction */ compare;
    WASM_ENUM_C_TYPE /* WGPUStencilOperation */ failOp;
    WASM_ENUM_C_TYPE /* WGPUStencilOperation */ depthFailOp;
    WASM_ENUM_C_TYPE /* WGPUStencilOperation */ passOp;
} WasmWGPUStencilFaceState;

typedef struct WasmWGPUSurfaceTexture {
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTexture */ texture;
    uint32_t suboptimal;
    WASM_ENUM_C_TYPE /* WGPUSurfaceGetCurrentTextureStatus */ status;
} WasmWGPUSurfaceTexture;

typedef struct WasmWGPUUncapturedErrorCallbackInfo {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_FUNCTION_C_TYPE /* WGPUErrorCallback */ callback;
    WASM_POINTER_VOID_C_TYPE userdata;
} WasmWGPUUncapturedErrorCallbackInfo;

typedef struct WasmWGPUTextureDataLayout {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    uint64_t offset;
    uint32_t bytesPerRow;
    uint32_t rowsPerImage;
} WasmWGPUTextureDataLayout;

typedef struct WasmWGPUQueueDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
} WasmWGPUQueueDescriptor;

typedef struct WasmWGPUProgrammableStageDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUShaderModule */ module;
    WASM_POINTER_STRING_C_TYPE entryPoint;
    WASM_SIZE_C_TYPE constantCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUConstantEntry[] */ constants;
} WasmWGPUProgrammableStageDescriptor;

typedef struct WasmWGPURequestAdapterOptions {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUSurface */ compatibleSurface;
    WASM_ENUM_C_TYPE /* WGPUPowerPreference */ powerPreference;
    WASM_ENUM_C_TYPE /* WGPUBackendType */ backendType;
    uint32_t forceFallbackAdapter;
} WasmWGPURequestAdapterOptions;

typedef struct WasmWGPUDeviceDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE requiredFeatureCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUFeatureName[] */ requiredFeatures;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPURequiredLimits */ requiredLimits;
    WasmWGPUQueueDescriptor /* WasmWGPUQueueDescriptor */ defaultQueue;
    WASM_POINTER_FUNCTION_C_TYPE /* WGPUDeviceLostCallback */ deviceLostCallback;
    WASM_POINTER_VOID_C_TYPE deviceLostUserdata;
    WasmWGPUUncapturedErrorCallbackInfo /* WasmWGPUUncapturedErrorCallbackInfo */ uncapturedErrorCallbackInfo;
} WasmWGPUDeviceDescriptor;

typedef struct WasmWGPUBindGroupEntry {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    uint32_t binding;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUBuffer */ buffer;
    uint64_t offset;
    uint64_t size;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUSampler */ sampler;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTextureView */ textureView;
} WasmWGPUBindGroupEntry;

typedef struct WasmWGPUBindGroupDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUBindGroupLayout */ layout;
    WASM_SIZE_C_TYPE entryCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUBindGroupEntry[] */ entries;
} WasmWGPUBindGroupDescriptor;

typedef struct WasmWGPUBufferBindingLayout {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUBufferBindingType */ type;
    uint32_t hasDynamicOffset;
    uint64_t minBindingSize;
} WasmWGPUBufferBindingLayout;

typedef struct WasmWGPUSamplerBindingLayout {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUSamplerBindingType */ type;
} WasmWGPUSamplerBindingLayout;

typedef struct WasmWGPUTextureBindingLayout {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUTextureSampleType */ sampleType;
    WASM_ENUM_C_TYPE /* WGPUTextureViewDimension */ viewDimension;
    uint32_t multisampled;
} WasmWGPUTextureBindingLayout;

typedef struct WasmWGPUSurfaceConfiguration {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUDevice */ device;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    WASM_INT_C_TYPE /* WGPUTextureUsage */ usage;
    WASM_SIZE_C_TYPE viewFormatCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUTextureFormat[] */ viewFormats;
    WASM_ENUM_C_TYPE /* WGPUCompositeAlphaMode */ alphaMode;
    uint32_t width;
    uint32_t height;
    WASM_ENUM_C_TYPE /* WGPUPresentMode */ presentMode;
} WasmWGPUSurfaceConfiguration;

typedef struct WasmWGPUStorageTextureBindingLayout {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUStorageTextureAccess */ access;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    WASM_ENUM_C_TYPE /* WGPUTextureViewDimension */ viewDimension;
} WasmWGPUStorageTextureBindingLayout;

typedef struct WasmWGPUBindGroupLayoutEntry {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    uint32_t binding;
    WASM_INT_C_TYPE /* WGPUShaderStage */ visibility;
    WasmWGPUBufferBindingLayout /* WasmWGPUBufferBindingLayout */ buffer;
    WasmWGPUSamplerBindingLayout /* WasmWGPUSamplerBindingLayout */ sampler;
    WasmWGPUTextureBindingLayout /* WasmWGPUTextureBindingLayout */ texture;
    WasmWGPUStorageTextureBindingLayout /* WasmWGPUStorageTextureBindingLayout */ storageTexture;
} WasmWGPUBindGroupLayoutEntry;

typedef struct WasmWGPUBindGroupLayoutDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE entryCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUBindGroupLayoutEntry[] */ entries;
} WasmWGPUBindGroupLayoutDescriptor;

typedef struct WasmWGPUBufferDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_INT_C_TYPE /* WGPUBufferUsage */ usage;
    uint64_t size;
    uint32_t mappedAtCreation;
} WasmWGPUBufferDescriptor;

typedef struct WasmWGPUConstantEntry {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE key;
    double value;
} WasmWGPUConstantEntry;

typedef struct WasmWGPUCommandBufferDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
} WasmWGPUCommandBufferDescriptor;

typedef struct WasmWGPUCommandEncoderDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
} WasmWGPUCommandEncoderDescriptor;

typedef struct WasmWGPUCompilationInfo {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_SIZE_C_TYPE messageCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUCompilationMessage[] */ messages;
} WasmWGPUCompilationInfo;

typedef struct WasmWGPUCompilationMessage {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE message;
    WASM_ENUM_C_TYPE /* WGPUCompilationMessageType */ type;
    uint64_t lineNum;
    uint64_t linePos;
    uint64_t offset;
    uint64_t length;
    uint64_t utf16LinePos;
    uint64_t utf16Offset;
    uint64_t utf16Length;
} WasmWGPUCompilationMessage;

typedef struct WasmWGPUComputePassDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUComputePassTimestampWrites */ timestampWrites;
} WasmWGPUComputePassDescriptor;

typedef struct WasmWGPUComputePipelineDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUPipelineLayout */ layout;
    WasmWGPUProgrammableStageDescriptor /* WasmWGPUProgrammableStageDescriptor */ compute;
} WasmWGPUComputePipelineDescriptor;

typedef struct WasmWGPURequiredLimits {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WasmWGPULimits /* WasmWGPULimits */ limits;
} WasmWGPURequiredLimits;

typedef struct WasmWGPUImageCopyBuffer {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WasmWGPUTextureDataLayout /* WasmWGPUTextureDataLayout */ layout;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUBuffer */ buffer;
} WasmWGPUImageCopyBuffer;

typedef struct WasmWGPUImageCopyTexture {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTexture */ texture;
    uint32_t mipLevel;
    WasmWGPUOrigin3D /* WasmWGPUOrigin3D */ origin;
    WASM_ENUM_C_TYPE /* WGPUTextureAspect */ aspect;
} WasmWGPUImageCopyTexture;

typedef struct WasmWGPUInstanceDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
} WasmWGPUInstanceDescriptor;

typedef struct WasmWGPUPipelineLayoutDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE bindGroupLayoutCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUBindGroupLayout[] */ bindGroupLayouts;
} WasmWGPUPipelineLayoutDescriptor;

typedef struct WasmWGPUQuerySetDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_ENUM_C_TYPE /* WGPUQueryType */ type;
    uint32_t count;
} WasmWGPUQuerySetDescriptor;

typedef struct WasmWGPURenderBundleDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
} WasmWGPURenderBundleDescriptor;

typedef struct WasmWGPURenderBundleEncoderDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE colorFormatCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUTextureFormat[] */ colorFormats;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ depthStencilFormat;
    uint32_t sampleCount;
    uint32_t depthReadOnly;
    uint32_t stencilReadOnly;
} WasmWGPURenderBundleEncoderDescriptor;

typedef struct WasmWGPURenderPassColorAttachment {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTextureView */ view;
    uint32_t depthSlice;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUTextureView */ resolveTarget;
    WASM_ENUM_C_TYPE /* WGPULoadOp */ loadOp;
    WASM_ENUM_C_TYPE /* WGPUStoreOp */ storeOp;
    WasmWGPUColor /* WasmWGPUColor */ clearValue;
} WasmWGPURenderPassColorAttachment;

typedef struct WasmWGPURenderPassDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE colorAttachmentCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPURenderPassColorAttachment[] */ colorAttachments;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPURenderPassDepthStencilAttachment */ depthStencilAttachment;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUQuerySet */ occlusionQuerySet;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPURenderPassTimestampWrites */ timestampWrites;
} WasmWGPURenderPassDescriptor;

typedef struct WasmWGPUVertexState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUShaderModule */ module;
    WASM_POINTER_STRING_C_TYPE entryPoint;
    WASM_SIZE_C_TYPE constantCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUConstantEntry[] */ constants;
    WASM_SIZE_C_TYPE bufferCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUVertexBufferLayout[] */ buffers;
} WasmWGPUVertexState;

typedef struct WasmWGPUPrimitiveState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUPrimitiveTopology */ topology;
    WASM_ENUM_C_TYPE /* WGPUIndexFormat */ stripIndexFormat;
    WASM_ENUM_C_TYPE /* WGPUFrontFace */ frontFace;
    WASM_ENUM_C_TYPE /* WGPUCullMode */ cullMode;
} WasmWGPUPrimitiveState;

typedef struct WasmWGPUDepthStencilState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    uint32_t depthWriteEnabled;
    WASM_ENUM_C_TYPE /* WGPUCompareFunction */ depthCompare;
    WasmWGPUStencilFaceState /* WasmWGPUStencilFaceState */ stencilFront;
    WasmWGPUStencilFaceState /* WasmWGPUStencilFaceState */ stencilBack;
    uint32_t stencilReadMask;
    uint32_t stencilWriteMask;
    int32_t depthBias;
    float depthBiasSlopeScale;
    float depthBiasClamp;
} WasmWGPUDepthStencilState;

typedef struct WasmWGPUMultisampleState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    uint32_t count;
    uint32_t mask;
    uint32_t alphaToCoverageEnabled;
} WasmWGPUMultisampleState;

typedef struct WasmWGPUFragmentState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUShaderModule */ module;
    WASM_POINTER_STRING_C_TYPE entryPoint;
    WASM_SIZE_C_TYPE constantCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUConstantEntry[] */ constants;
    WASM_SIZE_C_TYPE targetCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUColorTargetState[] */ targets;
} WasmWGPUFragmentState;

typedef struct WasmWGPUColorTargetState {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUBlendState */ blend;
    WASM_INT_C_TYPE /* WGPUColorWriteMask */ writeMask;
} WasmWGPUColorTargetState;

typedef struct WasmWGPURenderPipelineDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUPipelineLayout */ layout;
    WasmWGPUVertexState /* WasmWGPUVertexState */ vertex;
    WasmWGPUPrimitiveState /* WasmWGPUPrimitiveState */ primitive;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUDepthStencilState */ depthStencil;
    WasmWGPUMultisampleState /* WasmWGPUMultisampleState */ multisample;
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUFragmentState */ fragment;
} WasmWGPURenderPipelineDescriptor;

typedef struct WasmWGPUSamplerDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_ENUM_C_TYPE /* WGPUAddressMode */ addressModeU;
    WASM_ENUM_C_TYPE /* WGPUAddressMode */ addressModeV;
    WASM_ENUM_C_TYPE /* WGPUAddressMode */ addressModeW;
    WASM_ENUM_C_TYPE /* WGPUFilterMode */ magFilter;
    WASM_ENUM_C_TYPE /* WGPUFilterMode */ minFilter;
    WASM_ENUM_C_TYPE /* WGPUMipmapFilterMode */ mipmapFilter;
    float lodMinClamp;
    float lodMaxClamp;
    WASM_ENUM_C_TYPE /* WGPUCompareFunction */ compare;
    uint16_t maxAnisotropy;
} WasmWGPUSamplerDescriptor;

typedef struct WasmWGPUShaderModuleDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_SIZE_C_TYPE hintCount;
    WASM_POINTER_ARRAY_C_TYPE /* WasmWGPUShaderModuleCompilationHint[] */ hints;
} WasmWGPUShaderModuleDescriptor;

typedef struct WasmWGPUShaderModuleCompilationHint {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE entryPoint;
    WASM_POINTER_OBJECT_C_TYPE /* WGPUPipelineLayout */ layout;
} WasmWGPUShaderModuleCompilationHint;

typedef struct WasmWGPUSurfaceDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
} WasmWGPUSurfaceDescriptor;

typedef struct WasmWGPUTextureDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_INT_C_TYPE /* WGPUTextureUsage */ usage;
    WASM_ENUM_C_TYPE /* WGPUTextureDimension */ dimension;
    WasmWGPUExtent3D /* WasmWGPUExtent3D */ size;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    uint32_t mipLevelCount;
    uint32_t sampleCount;
    WASM_SIZE_C_TYPE viewFormatCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUTextureFormat[] */ viewFormats;
} WasmWGPUTextureDescriptor;

typedef struct WasmWGPUTextureViewDescriptor {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE label;
    WASM_ENUM_C_TYPE /* WGPUTextureFormat */ format;
    WASM_ENUM_C_TYPE /* WGPUTextureViewDimension */ dimension;
    uint32_t baseMipLevel;
    uint32_t mipLevelCount;
    uint32_t baseArrayLayer;
    uint32_t arrayLayerCount;
    WASM_ENUM_C_TYPE /* WGPUTextureAspect */ aspect;
} WasmWGPUTextureViewDescriptor;

typedef struct WasmWGPUAdapterInfo {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_POINTER_STRING_C_TYPE vendor;
    WASM_POINTER_STRING_C_TYPE architecture;
    WASM_POINTER_STRING_C_TYPE device;
    WASM_POINTER_STRING_C_TYPE description;
    WASM_ENUM_C_TYPE /* WGPUBackendType */ backendType;
    WASM_ENUM_C_TYPE /* WGPUAdapterType */ adapterType;
    uint32_t vendorID;
    uint32_t deviceID;
} WasmWGPUAdapterInfo;

typedef struct WasmWGPUSurfaceCapabilities {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WASM_INT_C_TYPE /* WGPUTextureUsage */ usages;
    WASM_SIZE_C_TYPE formatCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUTextureFormat[] */ formats;
    WASM_SIZE_C_TYPE presentModeCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUPresentMode[] */ presentModes;
    WASM_SIZE_C_TYPE alphaModeCount;
    WASM_POINTER_ARRAY_C_TYPE /* WGPUCompositeAlphaMode[] */ alphaModes;
} WasmWGPUSurfaceCapabilities;

typedef struct WasmWGPUSupportedLimits {
    WASM_POINTER_STRUCT_C_TYPE /* WasmWGPUChainedStruct */ nextInChain;
    WasmWGPULimits /* WasmWGPULimits */ limits;
} WasmWGPUSupportedLimits;

typedef struct WasmWGPURenderPassDescriptorMaxDrawCount {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    uint64_t maxDrawCount;
} WasmWGPURenderPassDescriptorMaxDrawCount;

typedef struct WasmWGPUPrimitiveDepthClipControl {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    uint32_t unclippedDepth;
} WasmWGPUPrimitiveDepthClipControl;

typedef struct WasmWGPUShaderModuleSPIRVDescriptor {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    uint32_t codeSize;
    WASM_POINTER_UINT32_C_TYPE code;
} WasmWGPUShaderModuleSPIRVDescriptor;

typedef struct WasmWGPUShaderModuleWGSLDescriptor {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_STRING_C_TYPE code;
} WasmWGPUShaderModuleWGSLDescriptor;

typedef struct WasmWGPUSurfaceDescriptorFromAndroidNativeWindow {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE window;
} WasmWGPUSurfaceDescriptorFromAndroidNativeWindow;

typedef struct WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_STRING_C_TYPE selector;
} WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector;

typedef struct WasmWGPUSurfaceDescriptorFromMetalLayer {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE layer;
} WasmWGPUSurfaceDescriptorFromMetalLayer;

typedef struct WasmWGPUSurfaceDescriptorFromWindowsHWND {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE hinstance;
    WASM_POINTER_VOID_C_TYPE hwnd;
} WasmWGPUSurfaceDescriptorFromWindowsHWND;

typedef struct WasmWGPUSurfaceDescriptorFromXcbWindow {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE connection;
    uint32_t window;
} WasmWGPUSurfaceDescriptorFromXcbWindow;

typedef struct WasmWGPUSurfaceDescriptorFromXlibWindow {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE display;
    uint64_t window;
} WasmWGPUSurfaceDescriptorFromXlibWindow;

typedef struct WasmWGPUSurfaceDescriptorFromWaylandSurface {
    WasmWGPUChainedStruct /* WasmWGPUChainedStruct */ chain;
    WASM_POINTER_VOID_C_TYPE display;
    WASM_POINTER_VOID_C_TYPE surface;
} WasmWGPUSurfaceDescriptorFromWaylandSurface;


/* Extract Struct Function Definitions */

int extract_chained_struct(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUChainedStruct **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_chained_struct: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_chained_struct: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_chained_struct: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_chained_struct: [WMAS.WWST]next: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUChainedStruct, next));
    LOG_TRACE("extract_chained_struct: [WMAS.WWST]sType: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUChainedStruct, sType));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUChainedStruct *ha_wasm_struct_ptr = (WasmWGPUChainedStruct *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_chained_struct: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUChainedStruct (%p) = [HMAS.WWST]WasmWGPUChainedStruct: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_chained_struct: [HMAS.WWST]next: (%p)", (void *)&ha_wasm_struct_ptr->next);
    LOG_TRACE("extract_chained_struct: [HMAS.WWST]sType: (%p)", (void *)&ha_wasm_struct_ptr->sType);

    /* Resolve SType */
    WGPUSType sType = ha_wasm_struct_ptr->sType;
    LOG_DEBUG("extract_chained_struct: sType value: %d", sType);

    switch (sType) {
        case WGPUSType_Invalid:
            FATAL("extract_chained_struct: Bad sType: WGPUSType_Invalid");
            break;
        case WGPUSType_SurfaceDescriptorFromMetalLayer:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromMetalLayer");
            extract_surface_descriptor_from_metal_layer(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromMetalLayer **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromWindowsHWND:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromWindowsHWND");
            extract_surface_descriptor_from_windows_HWND(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromWindowsHWND **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromXlibWindow:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromXlibWindow");
            extract_surface_descriptor_from_xlib_window(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromXlibWindow **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromCanvasHTMLSelector:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromCanvasHTMLSelector");
            extract_surface_descriptor_from_canvas_HTML_selector(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromCanvasHTMLSelector **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_ShaderModuleSPIRVDescriptor:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_ShaderModuleSPIRVDescriptor");
            extract_shader_module_SPIRV_descriptor(registry, memory, wa_wasm_struct_offset, (WGPUShaderModuleSPIRVDescriptor **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_ShaderModuleWGSLDescriptor:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_ShaderModuleWGSLDescriptor");
            extract_shader_module_WGSL_descriptor(registry, memory, wa_wasm_struct_offset, (WGPUShaderModuleWGSLDescriptor **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_PrimitiveDepthClipControl:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_PrimitiveDepthClipControl");
            extract_primitive_depth_clip_control(registry, memory, wa_wasm_struct_offset, (WGPUPrimitiveDepthClipControl **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromWaylandSurface:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromWaylandSurface");
            extract_surface_descriptor_from_wayland_surface(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromWaylandSurface **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromAndroidNativeWindow:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromAndroidNativeWindow");
            extract_surface_descriptor_from_android_native_window(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromAndroidNativeWindow **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_SurfaceDescriptorFromXcbWindow:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_SurfaceDescriptorFromXcbWindow");
            extract_surface_descriptor_from_xcb_window(registry, memory, wa_wasm_struct_offset, (WGPUSurfaceDescriptorFromXcbWindow **)out_ha_host_struct_ptr);
            break;
        case WGPUSType_RenderPassDescriptorMaxDrawCount:
            LOG_TRACE("extract_chained_struct: sType: WGPUSType_RenderPassDescriptorMaxDrawCount");
            extract_render_pass_descriptor_max_draw_count(registry, memory, wa_wasm_struct_offset, (WGPURenderPassDescriptorMaxDrawCount **)out_ha_host_struct_ptr);
            break;
        default:
            FATAL("extract_chained_struct: Unknown sType value: %d", sType);
            break;
    }

    LOG_DEBUG("extract_chained_struct: Setting output sType value: %d", sType);
    (*out_ha_host_struct_ptr)->sType = sType;

    return 0;
}

int extract_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPULimits **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_limits: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_limits: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_limits: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_limits: [WMAS.WWST]maxTextureDimension1D: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxTextureDimension1D));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxTextureDimension2D: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxTextureDimension2D));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxTextureDimension3D: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxTextureDimension3D));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxTextureArrayLayers: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxTextureArrayLayers));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxBindGroups: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxBindGroups));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxBindGroupsPlusVertexBuffers: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxBindGroupsPlusVertexBuffers));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxBindingsPerBindGroup: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxBindingsPerBindGroup));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxDynamicUniformBuffersPerPipelineLayout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxDynamicUniformBuffersPerPipelineLayout));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxDynamicStorageBuffersPerPipelineLayout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxDynamicStorageBuffersPerPipelineLayout));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxSampledTexturesPerShaderStage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxSampledTexturesPerShaderStage));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxSamplersPerShaderStage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxSamplersPerShaderStage));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxStorageBuffersPerShaderStage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxStorageBuffersPerShaderStage));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxStorageTexturesPerShaderStage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxStorageTexturesPerShaderStage));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxUniformBuffersPerShaderStage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxUniformBuffersPerShaderStage));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxUniformBufferBindingSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxUniformBufferBindingSize));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxStorageBufferBindingSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxStorageBufferBindingSize));
    LOG_TRACE("extract_limits: [WMAS.WWST]minUniformBufferOffsetAlignment: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, minUniformBufferOffsetAlignment));
    LOG_TRACE("extract_limits: [WMAS.WWST]minStorageBufferOffsetAlignment: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, minStorageBufferOffsetAlignment));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxVertexBuffers: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxVertexBuffers));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxBufferSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxBufferSize));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxVertexAttributes: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxVertexAttributes));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxVertexBufferArrayStride: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxVertexBufferArrayStride));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxInterStageShaderComponents: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxInterStageShaderComponents));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxInterStageShaderVariables: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxInterStageShaderVariables));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxColorAttachments: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxColorAttachments));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxColorAttachmentBytesPerSample: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxColorAttachmentBytesPerSample));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeWorkgroupStorageSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeWorkgroupStorageSize));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeInvocationsPerWorkgroup: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeInvocationsPerWorkgroup));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeWorkgroupSizeX: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeWorkgroupSizeX));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeWorkgroupSizeY: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeWorkgroupSizeY));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeWorkgroupSizeZ: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeWorkgroupSizeZ));
    LOG_TRACE("extract_limits: [WMAS.WWST]maxComputeWorkgroupsPerDimension: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPULimits, maxComputeWorkgroupsPerDimension));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPULimits *ha_wasm_struct_ptr = (WasmWGPULimits *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_limits: mapping mem_base (%p) + [WMAS.WWST]WasmWGPULimits (%p) = [HMAS.WWST]WasmWGPULimits: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_limits: [HMAS.WWST]maxTextureDimension1D: (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension1D);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxTextureDimension2D: (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension2D);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxTextureDimension3D: (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension3D);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxTextureArrayLayers: (%p)", (void *)&ha_wasm_struct_ptr->maxTextureArrayLayers);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxBindGroups: (%p)", (void *)&ha_wasm_struct_ptr->maxBindGroups);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxBindGroupsPlusVertexBuffers: (%p)", (void *)&ha_wasm_struct_ptr->maxBindGroupsPlusVertexBuffers);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxBindingsPerBindGroup: (%p)", (void *)&ha_wasm_struct_ptr->maxBindingsPerBindGroup);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxDynamicUniformBuffersPerPipelineLayout: (%p)", (void *)&ha_wasm_struct_ptr->maxDynamicUniformBuffersPerPipelineLayout);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxDynamicStorageBuffersPerPipelineLayout: (%p)", (void *)&ha_wasm_struct_ptr->maxDynamicStorageBuffersPerPipelineLayout);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxSampledTexturesPerShaderStage: (%p)", (void *)&ha_wasm_struct_ptr->maxSampledTexturesPerShaderStage);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxSamplersPerShaderStage: (%p)", (void *)&ha_wasm_struct_ptr->maxSamplersPerShaderStage);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxStorageBuffersPerShaderStage: (%p)", (void *)&ha_wasm_struct_ptr->maxStorageBuffersPerShaderStage);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxStorageTexturesPerShaderStage: (%p)", (void *)&ha_wasm_struct_ptr->maxStorageTexturesPerShaderStage);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxUniformBuffersPerShaderStage: (%p)", (void *)&ha_wasm_struct_ptr->maxUniformBuffersPerShaderStage);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxUniformBufferBindingSize: (%p)", (void *)&ha_wasm_struct_ptr->maxUniformBufferBindingSize);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxStorageBufferBindingSize: (%p)", (void *)&ha_wasm_struct_ptr->maxStorageBufferBindingSize);
    LOG_TRACE("extract_limits: [HMAS.WWST]minUniformBufferOffsetAlignment: (%p)", (void *)&ha_wasm_struct_ptr->minUniformBufferOffsetAlignment);
    LOG_TRACE("extract_limits: [HMAS.WWST]minStorageBufferOffsetAlignment: (%p)", (void *)&ha_wasm_struct_ptr->minStorageBufferOffsetAlignment);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxVertexBuffers: (%p)", (void *)&ha_wasm_struct_ptr->maxVertexBuffers);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxBufferSize: (%p)", (void *)&ha_wasm_struct_ptr->maxBufferSize);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxVertexAttributes: (%p)", (void *)&ha_wasm_struct_ptr->maxVertexAttributes);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxVertexBufferArrayStride: (%p)", (void *)&ha_wasm_struct_ptr->maxVertexBufferArrayStride);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxInterStageShaderComponents: (%p)", (void *)&ha_wasm_struct_ptr->maxInterStageShaderComponents);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxInterStageShaderVariables: (%p)", (void *)&ha_wasm_struct_ptr->maxInterStageShaderVariables);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxColorAttachments: (%p)", (void *)&ha_wasm_struct_ptr->maxColorAttachments);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxColorAttachmentBytesPerSample: (%p)", (void *)&ha_wasm_struct_ptr->maxColorAttachmentBytesPerSample);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeWorkgroupStorageSize: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupStorageSize);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeInvocationsPerWorkgroup: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeInvocationsPerWorkgroup);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeWorkgroupSizeX: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeX);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeWorkgroupSizeY: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeY);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeWorkgroupSizeZ: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeZ);
    LOG_TRACE("extract_limits: [HMAS.WWST]maxComputeWorkgroupsPerDimension: (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupsPerDimension);

    /* Dereference out_ha_host_struct_ptr */
    WGPULimits *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_limits: allocating [*HMAS.HWST] (%p) as WGPULimits", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPULimits));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_limits: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_limits: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_limits: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxTextureDimension1D: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension1D, (void *)&ha_host_struct_ptr->maxTextureDimension1D);
    ha_host_struct_ptr->maxTextureDimension1D = ha_wasm_struct_ptr->maxTextureDimension1D;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxTextureDimension2D: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension2D, (void *)&ha_host_struct_ptr->maxTextureDimension2D);
    ha_host_struct_ptr->maxTextureDimension2D = ha_wasm_struct_ptr->maxTextureDimension2D;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxTextureDimension3D: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxTextureDimension3D, (void *)&ha_host_struct_ptr->maxTextureDimension3D);
    ha_host_struct_ptr->maxTextureDimension3D = ha_wasm_struct_ptr->maxTextureDimension3D;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxTextureArrayLayers: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxTextureArrayLayers, (void *)&ha_host_struct_ptr->maxTextureArrayLayers);
    ha_host_struct_ptr->maxTextureArrayLayers = ha_wasm_struct_ptr->maxTextureArrayLayers;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxBindGroups: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxBindGroups, (void *)&ha_host_struct_ptr->maxBindGroups);
    ha_host_struct_ptr->maxBindGroups = ha_wasm_struct_ptr->maxBindGroups;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxBindGroupsPlusVertexBuffers: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxBindGroupsPlusVertexBuffers, (void *)&ha_host_struct_ptr->maxBindGroupsPlusVertexBuffers);
    ha_host_struct_ptr->maxBindGroupsPlusVertexBuffers = ha_wasm_struct_ptr->maxBindGroupsPlusVertexBuffers;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxBindingsPerBindGroup: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxBindingsPerBindGroup, (void *)&ha_host_struct_ptr->maxBindingsPerBindGroup);
    ha_host_struct_ptr->maxBindingsPerBindGroup = ha_wasm_struct_ptr->maxBindingsPerBindGroup;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxDynamicUniformBuffersPerPipelineLayout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxDynamicUniformBuffersPerPipelineLayout, (void *)&ha_host_struct_ptr->maxDynamicUniformBuffersPerPipelineLayout);
    ha_host_struct_ptr->maxDynamicUniformBuffersPerPipelineLayout = ha_wasm_struct_ptr->maxDynamicUniformBuffersPerPipelineLayout;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxDynamicStorageBuffersPerPipelineLayout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxDynamicStorageBuffersPerPipelineLayout, (void *)&ha_host_struct_ptr->maxDynamicStorageBuffersPerPipelineLayout);
    ha_host_struct_ptr->maxDynamicStorageBuffersPerPipelineLayout = ha_wasm_struct_ptr->maxDynamicStorageBuffersPerPipelineLayout;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxSampledTexturesPerShaderStage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxSampledTexturesPerShaderStage, (void *)&ha_host_struct_ptr->maxSampledTexturesPerShaderStage);
    ha_host_struct_ptr->maxSampledTexturesPerShaderStage = ha_wasm_struct_ptr->maxSampledTexturesPerShaderStage;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxSamplersPerShaderStage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxSamplersPerShaderStage, (void *)&ha_host_struct_ptr->maxSamplersPerShaderStage);
    ha_host_struct_ptr->maxSamplersPerShaderStage = ha_wasm_struct_ptr->maxSamplersPerShaderStage;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxStorageBuffersPerShaderStage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxStorageBuffersPerShaderStage, (void *)&ha_host_struct_ptr->maxStorageBuffersPerShaderStage);
    ha_host_struct_ptr->maxStorageBuffersPerShaderStage = ha_wasm_struct_ptr->maxStorageBuffersPerShaderStage;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxStorageTexturesPerShaderStage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxStorageTexturesPerShaderStage, (void *)&ha_host_struct_ptr->maxStorageTexturesPerShaderStage);
    ha_host_struct_ptr->maxStorageTexturesPerShaderStage = ha_wasm_struct_ptr->maxStorageTexturesPerShaderStage;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxUniformBuffersPerShaderStage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxUniformBuffersPerShaderStage, (void *)&ha_host_struct_ptr->maxUniformBuffersPerShaderStage);
    ha_host_struct_ptr->maxUniformBuffersPerShaderStage = ha_wasm_struct_ptr->maxUniformBuffersPerShaderStage;

    LOG_TRACE("extract_limits: extracting [Embedded<uint64>] maxUniformBufferBindingSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxUniformBufferBindingSize, (void *)&ha_host_struct_ptr->maxUniformBufferBindingSize);
    ha_host_struct_ptr->maxUniformBufferBindingSize = ha_wasm_struct_ptr->maxUniformBufferBindingSize;

    LOG_TRACE("extract_limits: extracting [Embedded<uint64>] maxStorageBufferBindingSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxStorageBufferBindingSize, (void *)&ha_host_struct_ptr->maxStorageBufferBindingSize);
    ha_host_struct_ptr->maxStorageBufferBindingSize = ha_wasm_struct_ptr->maxStorageBufferBindingSize;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] minUniformBufferOffsetAlignment: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->minUniformBufferOffsetAlignment, (void *)&ha_host_struct_ptr->minUniformBufferOffsetAlignment);
    ha_host_struct_ptr->minUniformBufferOffsetAlignment = ha_wasm_struct_ptr->minUniformBufferOffsetAlignment;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] minStorageBufferOffsetAlignment: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->minStorageBufferOffsetAlignment, (void *)&ha_host_struct_ptr->minStorageBufferOffsetAlignment);
    ha_host_struct_ptr->minStorageBufferOffsetAlignment = ha_wasm_struct_ptr->minStorageBufferOffsetAlignment;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxVertexBuffers: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxVertexBuffers, (void *)&ha_host_struct_ptr->maxVertexBuffers);
    ha_host_struct_ptr->maxVertexBuffers = ha_wasm_struct_ptr->maxVertexBuffers;

    LOG_TRACE("extract_limits: extracting [Embedded<uint64>] maxBufferSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxBufferSize, (void *)&ha_host_struct_ptr->maxBufferSize);
    ha_host_struct_ptr->maxBufferSize = ha_wasm_struct_ptr->maxBufferSize;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxVertexAttributes: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxVertexAttributes, (void *)&ha_host_struct_ptr->maxVertexAttributes);
    ha_host_struct_ptr->maxVertexAttributes = ha_wasm_struct_ptr->maxVertexAttributes;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxVertexBufferArrayStride: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxVertexBufferArrayStride, (void *)&ha_host_struct_ptr->maxVertexBufferArrayStride);
    ha_host_struct_ptr->maxVertexBufferArrayStride = ha_wasm_struct_ptr->maxVertexBufferArrayStride;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxInterStageShaderComponents: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxInterStageShaderComponents, (void *)&ha_host_struct_ptr->maxInterStageShaderComponents);
    ha_host_struct_ptr->maxInterStageShaderComponents = ha_wasm_struct_ptr->maxInterStageShaderComponents;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxInterStageShaderVariables: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxInterStageShaderVariables, (void *)&ha_host_struct_ptr->maxInterStageShaderVariables);
    ha_host_struct_ptr->maxInterStageShaderVariables = ha_wasm_struct_ptr->maxInterStageShaderVariables;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxColorAttachments: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxColorAttachments, (void *)&ha_host_struct_ptr->maxColorAttachments);
    ha_host_struct_ptr->maxColorAttachments = ha_wasm_struct_ptr->maxColorAttachments;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxColorAttachmentBytesPerSample: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxColorAttachmentBytesPerSample, (void *)&ha_host_struct_ptr->maxColorAttachmentBytesPerSample);
    ha_host_struct_ptr->maxColorAttachmentBytesPerSample = ha_wasm_struct_ptr->maxColorAttachmentBytesPerSample;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeWorkgroupStorageSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupStorageSize, (void *)&ha_host_struct_ptr->maxComputeWorkgroupStorageSize);
    ha_host_struct_ptr->maxComputeWorkgroupStorageSize = ha_wasm_struct_ptr->maxComputeWorkgroupStorageSize;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeInvocationsPerWorkgroup: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeInvocationsPerWorkgroup, (void *)&ha_host_struct_ptr->maxComputeInvocationsPerWorkgroup);
    ha_host_struct_ptr->maxComputeInvocationsPerWorkgroup = ha_wasm_struct_ptr->maxComputeInvocationsPerWorkgroup;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeWorkgroupSizeX: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeX, (void *)&ha_host_struct_ptr->maxComputeWorkgroupSizeX);
    ha_host_struct_ptr->maxComputeWorkgroupSizeX = ha_wasm_struct_ptr->maxComputeWorkgroupSizeX;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeWorkgroupSizeY: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeY, (void *)&ha_host_struct_ptr->maxComputeWorkgroupSizeY);
    ha_host_struct_ptr->maxComputeWorkgroupSizeY = ha_wasm_struct_ptr->maxComputeWorkgroupSizeY;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeWorkgroupSizeZ: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupSizeZ, (void *)&ha_host_struct_ptr->maxComputeWorkgroupSizeZ);
    ha_host_struct_ptr->maxComputeWorkgroupSizeZ = ha_wasm_struct_ptr->maxComputeWorkgroupSizeZ;

    LOG_TRACE("extract_limits: extracting [Embedded<uint32>] maxComputeWorkgroupsPerDimension: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxComputeWorkgroupsPerDimension, (void *)&ha_host_struct_ptr->maxComputeWorkgroupsPerDimension);
    ha_host_struct_ptr->maxComputeWorkgroupsPerDimension = ha_wasm_struct_ptr->maxComputeWorkgroupsPerDimension;

    return 0;
}

int extract_blend_component(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBlendComponent **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_blend_component: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_blend_component: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_blend_component: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_blend_component: [WMAS.WWST]operation: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBlendComponent, operation));
    LOG_TRACE("extract_blend_component: [WMAS.WWST]srcFactor: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBlendComponent, srcFactor));
    LOG_TRACE("extract_blend_component: [WMAS.WWST]dstFactor: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBlendComponent, dstFactor));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBlendComponent *ha_wasm_struct_ptr = (WasmWGPUBlendComponent *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_blend_component: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBlendComponent (%p) = [HMAS.WWST]WasmWGPUBlendComponent: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_blend_component: [HMAS.WWST]operation: (%p)", (void *)&ha_wasm_struct_ptr->operation);
    LOG_TRACE("extract_blend_component: [HMAS.WWST]srcFactor: (%p)", (void *)&ha_wasm_struct_ptr->srcFactor);
    LOG_TRACE("extract_blend_component: [HMAS.WWST]dstFactor: (%p)", (void *)&ha_wasm_struct_ptr->dstFactor);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBlendComponent *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_blend_component: allocating [*HMAS.HWST] (%p) as WGPUBlendComponent", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBlendComponent));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_blend_component: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_blend_component: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_blend_component: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_blend_component: extracting [Embedded<enum>] operation: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->operation, (void *)&ha_host_struct_ptr->operation);
    ha_host_struct_ptr->operation = ha_wasm_struct_ptr->operation;

    LOG_TRACE("extract_blend_component: extracting [Embedded<enum>] srcFactor: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->srcFactor, (void *)&ha_host_struct_ptr->srcFactor);
    ha_host_struct_ptr->srcFactor = ha_wasm_struct_ptr->srcFactor;

    LOG_TRACE("extract_blend_component: extracting [Embedded<enum>] dstFactor: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->dstFactor, (void *)&ha_host_struct_ptr->dstFactor);
    ha_host_struct_ptr->dstFactor = ha_wasm_struct_ptr->dstFactor;

    return 0;
}

int extract_color(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUColor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_color: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_color: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_color: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_color: [WMAS.WWST]r: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColor, r));
    LOG_TRACE("extract_color: [WMAS.WWST]g: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColor, g));
    LOG_TRACE("extract_color: [WMAS.WWST]b: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColor, b));
    LOG_TRACE("extract_color: [WMAS.WWST]a: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColor, a));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUColor *ha_wasm_struct_ptr = (WasmWGPUColor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_color: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUColor (%p) = [HMAS.WWST]WasmWGPUColor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_color: [HMAS.WWST]r: (%p)", (void *)&ha_wasm_struct_ptr->r);
    LOG_TRACE("extract_color: [HMAS.WWST]g: (%p)", (void *)&ha_wasm_struct_ptr->g);
    LOG_TRACE("extract_color: [HMAS.WWST]b: (%p)", (void *)&ha_wasm_struct_ptr->b);
    LOG_TRACE("extract_color: [HMAS.WWST]a: (%p)", (void *)&ha_wasm_struct_ptr->a);

    /* Dereference out_ha_host_struct_ptr */
    WGPUColor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_color: allocating [*HMAS.HWST] (%p) as WGPUColor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUColor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_color: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_color: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_color: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_color: extracting [Embedded<float64>] r: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->r, (void *)&ha_host_struct_ptr->r);
    ha_host_struct_ptr->r = ha_wasm_struct_ptr->r;

    LOG_TRACE("extract_color: extracting [Embedded<float64>] g: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->g, (void *)&ha_host_struct_ptr->g);
    ha_host_struct_ptr->g = ha_wasm_struct_ptr->g;

    LOG_TRACE("extract_color: extracting [Embedded<float64>] b: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->b, (void *)&ha_host_struct_ptr->b);
    ha_host_struct_ptr->b = ha_wasm_struct_ptr->b;

    LOG_TRACE("extract_color: extracting [Embedded<float64>] a: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->a, (void *)&ha_host_struct_ptr->a);
    ha_host_struct_ptr->a = ha_wasm_struct_ptr->a;

    return 0;
}

int extract_compute_pass_timestamp_writes(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePassTimestampWrites **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_compute_pass_timestamp_writes: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_compute_pass_timestamp_writes: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_compute_pass_timestamp_writes: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pass_timestamp_writes: [WMAS.WWST]querySet: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassTimestampWrites, querySet));
    LOG_TRACE("extract_compute_pass_timestamp_writes: [WMAS.WWST]beginningOfPassWriteIndex: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassTimestampWrites, beginningOfPassWriteIndex));
    LOG_TRACE("extract_compute_pass_timestamp_writes: [WMAS.WWST]endOfPassWriteIndex: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassTimestampWrites, endOfPassWriteIndex));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUComputePassTimestampWrites *ha_wasm_struct_ptr = (WasmWGPUComputePassTimestampWrites *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_compute_pass_timestamp_writes: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUComputePassTimestampWrites (%p) = [HMAS.WWST]WasmWGPUComputePassTimestampWrites: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pass_timestamp_writes: [HMAS.WWST]querySet: (%p)", (void *)&ha_wasm_struct_ptr->querySet);
    LOG_TRACE("extract_compute_pass_timestamp_writes: [HMAS.WWST]beginningOfPassWriteIndex: (%p)", (void *)&ha_wasm_struct_ptr->beginningOfPassWriteIndex);
    LOG_TRACE("extract_compute_pass_timestamp_writes: [HMAS.WWST]endOfPassWriteIndex: (%p)", (void *)&ha_wasm_struct_ptr->endOfPassWriteIndex);

    /* Dereference out_ha_host_struct_ptr */
    WGPUComputePassTimestampWrites *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_compute_pass_timestamp_writes: allocating [*HMAS.HWST] (%p) as WGPUComputePassTimestampWrites", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUComputePassTimestampWrites));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_compute_pass_timestamp_writes: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_compute_pass_timestamp_writes: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_compute_pass_timestamp_writes: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_compute_pass_timestamp_writes: extracting [Embedded<object>] querySet: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->querySet, (void *)&ha_host_struct_ptr->querySet);
    ha_host_struct_ptr->querySet = (WGPUQuerySet)registry_item_get_mapping(&registry->querySets, ha_wasm_struct_ptr->querySet);

    LOG_TRACE("extract_compute_pass_timestamp_writes: extracting [Embedded<uint32>] beginningOfPassWriteIndex: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->beginningOfPassWriteIndex, (void *)&ha_host_struct_ptr->beginningOfPassWriteIndex);
    ha_host_struct_ptr->beginningOfPassWriteIndex = ha_wasm_struct_ptr->beginningOfPassWriteIndex;

    LOG_TRACE("extract_compute_pass_timestamp_writes: extracting [Embedded<uint32>] endOfPassWriteIndex: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->endOfPassWriteIndex, (void *)&ha_host_struct_ptr->endOfPassWriteIndex);
    ha_host_struct_ptr->endOfPassWriteIndex = ha_wasm_struct_ptr->endOfPassWriteIndex;

    return 0;
}

int extract_extent_3D(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUExtent3D **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_extent_3D: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_extent_3D: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_extent_3D: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_extent_3D: [WMAS.WWST]width: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUExtent3D, width));
    LOG_TRACE("extract_extent_3D: [WMAS.WWST]height: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUExtent3D, height));
    LOG_TRACE("extract_extent_3D: [WMAS.WWST]depthOrArrayLayers: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUExtent3D, depthOrArrayLayers));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUExtent3D *ha_wasm_struct_ptr = (WasmWGPUExtent3D *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_extent_3D: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUExtent3D (%p) = [HMAS.WWST]WasmWGPUExtent3D: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_extent_3D: [HMAS.WWST]width: (%p)", (void *)&ha_wasm_struct_ptr->width);
    LOG_TRACE("extract_extent_3D: [HMAS.WWST]height: (%p)", (void *)&ha_wasm_struct_ptr->height);
    LOG_TRACE("extract_extent_3D: [HMAS.WWST]depthOrArrayLayers: (%p)", (void *)&ha_wasm_struct_ptr->depthOrArrayLayers);

    /* Dereference out_ha_host_struct_ptr */
    WGPUExtent3D *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_extent_3D: allocating [*HMAS.HWST] (%p) as WGPUExtent3D", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUExtent3D));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_extent_3D: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_extent_3D: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_extent_3D: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_extent_3D: extracting [Embedded<uint32>] width: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->width, (void *)&ha_host_struct_ptr->width);
    ha_host_struct_ptr->width = ha_wasm_struct_ptr->width;

    LOG_TRACE("extract_extent_3D: extracting [Embedded<uint32>] height: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->height, (void *)&ha_host_struct_ptr->height);
    ha_host_struct_ptr->height = ha_wasm_struct_ptr->height;

    LOG_TRACE("extract_extent_3D: extracting [Embedded<uint32>] depthOrArrayLayers: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthOrArrayLayers, (void *)&ha_host_struct_ptr->depthOrArrayLayers);
    ha_host_struct_ptr->depthOrArrayLayers = ha_wasm_struct_ptr->depthOrArrayLayers;

    return 0;
}

int extract_vertex_attribute(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexAttribute **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_vertex_attribute: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_vertex_attribute: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_vertex_attribute: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_attribute: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexAttribute, format));
    LOG_TRACE("extract_vertex_attribute: [WMAS.WWST]offset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexAttribute, offset));
    LOG_TRACE("extract_vertex_attribute: [WMAS.WWST]shaderLocation: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexAttribute, shaderLocation));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUVertexAttribute *ha_wasm_struct_ptr = (WasmWGPUVertexAttribute *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_vertex_attribute: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUVertexAttribute (%p) = [HMAS.WWST]WasmWGPUVertexAttribute: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_attribute: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_vertex_attribute: [HMAS.WWST]offset: (%p)", (void *)&ha_wasm_struct_ptr->offset);
    LOG_TRACE("extract_vertex_attribute: [HMAS.WWST]shaderLocation: (%p)", (void *)&ha_wasm_struct_ptr->shaderLocation);

    /* Dereference out_ha_host_struct_ptr */
    WGPUVertexAttribute *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_vertex_attribute: allocating [*HMAS.HWST] (%p) as WGPUVertexAttribute", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUVertexAttribute));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_vertex_attribute: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_vertex_attribute: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_vertex_attribute: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_vertex_attribute: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_vertex_attribute: extracting [Embedded<uint64>] offset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->offset, (void *)&ha_host_struct_ptr->offset);
    ha_host_struct_ptr->offset = ha_wasm_struct_ptr->offset;

    LOG_TRACE("extract_vertex_attribute: extracting [Embedded<uint32>] shaderLocation: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->shaderLocation, (void *)&ha_host_struct_ptr->shaderLocation);
    ha_host_struct_ptr->shaderLocation = ha_wasm_struct_ptr->shaderLocation;

    return 0;
}

int extract_vertex_buffer_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexBufferLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_vertex_buffer_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_vertex_buffer_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_vertex_buffer_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_buffer_layout: [WMAS.WWST]arrayStride: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexBufferLayout, arrayStride));
    LOG_TRACE("extract_vertex_buffer_layout: [WMAS.WWST]stepMode: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexBufferLayout, stepMode));
    LOG_TRACE("extract_vertex_buffer_layout: [WMAS.WWST]attributeCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexBufferLayout, attributeCount));
    LOG_TRACE("extract_vertex_buffer_layout: [WMAS.WWST]attributes: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexBufferLayout, attributes));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUVertexBufferLayout *ha_wasm_struct_ptr = (WasmWGPUVertexBufferLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_vertex_buffer_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUVertexBufferLayout (%p) = [HMAS.WWST]WasmWGPUVertexBufferLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_buffer_layout: [HMAS.WWST]arrayStride: (%p)", (void *)&ha_wasm_struct_ptr->arrayStride);
    LOG_TRACE("extract_vertex_buffer_layout: [HMAS.WWST]stepMode: (%p)", (void *)&ha_wasm_struct_ptr->stepMode);
    LOG_TRACE("extract_vertex_buffer_layout: [HMAS.WWST]attributeCount: (%p)", (void *)&ha_wasm_struct_ptr->attributeCount);
    LOG_TRACE("extract_vertex_buffer_layout: [HMAS.WWST]attributes: (%p)", (void *)&ha_wasm_struct_ptr->attributes);

    /* Dereference out_ha_host_struct_ptr */
    WGPUVertexBufferLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_vertex_buffer_layout: allocating [*HMAS.HWST] (%p) as WGPUVertexBufferLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUVertexBufferLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_vertex_buffer_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_vertex_buffer_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_vertex_buffer_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_vertex_buffer_layout: extracting [Embedded<uint64>] arrayStride: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->arrayStride, (void *)&ha_host_struct_ptr->arrayStride);
    ha_host_struct_ptr->arrayStride = ha_wasm_struct_ptr->arrayStride;

    LOG_TRACE("extract_vertex_buffer_layout: extracting [Embedded<enum>] stepMode: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stepMode, (void *)&ha_host_struct_ptr->stepMode);
    ha_host_struct_ptr->stepMode = ha_wasm_struct_ptr->stepMode;

    LOG_TRACE("extract_vertex_buffer_layout: extracting [Embedded<count>] attributeCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->attributeCount, (void *)&ha_host_struct_ptr->attributeCount);
    ha_host_struct_ptr->attributeCount = ha_wasm_struct_ptr->attributeCount;

    LOG_TRACE("extract_vertex_buffer_layout: extracting [Array<struct>] attributes: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->attributes, (void *)&ha_host_struct_ptr->attributes);
    /* TODO: Implement SAFE pointer extraction */
    WGPUVertexAttribute *vertex_attribute_array_proto = calloc(ha_host_struct_ptr->attributeCount, sizeof(WGPUVertexAttribute));
    if (vertex_attribute_array_proto == NULL) {
        FATAL("extract_vertex_buffer_layout: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->attributeCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->attributes + i * sizeof(WasmWGPUVertexAttribute);
        LOG_TRACE("extract_vertex_buffer_layout: copying struct at wasm-address %p into vertex_attribute_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUVertexAttribute *proto_i_ptr = &vertex_attribute_array_proto[i];
        if (extract_vertex_attribute(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_vertex_buffer_layout: extract_vertex_attribute at index %d failed", i);
        }
    }
    ha_host_struct_ptr->attributes = vertex_attribute_array_proto;

    return 0;
}

int extract_origin_3D(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUOrigin3D **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_origin_3D: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_origin_3D: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_origin_3D: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_origin_3D: [WMAS.WWST]x: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUOrigin3D, x));
    LOG_TRACE("extract_origin_3D: [WMAS.WWST]y: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUOrigin3D, y));
    LOG_TRACE("extract_origin_3D: [WMAS.WWST]z: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUOrigin3D, z));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUOrigin3D *ha_wasm_struct_ptr = (WasmWGPUOrigin3D *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_origin_3D: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUOrigin3D (%p) = [HMAS.WWST]WasmWGPUOrigin3D: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_origin_3D: [HMAS.WWST]x: (%p)", (void *)&ha_wasm_struct_ptr->x);
    LOG_TRACE("extract_origin_3D: [HMAS.WWST]y: (%p)", (void *)&ha_wasm_struct_ptr->y);
    LOG_TRACE("extract_origin_3D: [HMAS.WWST]z: (%p)", (void *)&ha_wasm_struct_ptr->z);

    /* Dereference out_ha_host_struct_ptr */
    WGPUOrigin3D *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_origin_3D: allocating [*HMAS.HWST] (%p) as WGPUOrigin3D", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUOrigin3D));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_origin_3D: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_origin_3D: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_origin_3D: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_origin_3D: extracting [Embedded<uint32>] x: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->x, (void *)&ha_host_struct_ptr->x);
    ha_host_struct_ptr->x = ha_wasm_struct_ptr->x;

    LOG_TRACE("extract_origin_3D: extracting [Embedded<uint32>] y: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->y, (void *)&ha_host_struct_ptr->y);
    ha_host_struct_ptr->y = ha_wasm_struct_ptr->y;

    LOG_TRACE("extract_origin_3D: extracting [Embedded<uint32>] z: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->z, (void *)&ha_host_struct_ptr->z);
    ha_host_struct_ptr->z = ha_wasm_struct_ptr->z;

    return 0;
}

int extract_render_pass_depth_stencil_attachment(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDepthStencilAttachment **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pass_depth_stencil_attachment: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pass_depth_stencil_attachment: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]view: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, view));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]depthLoadOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, depthLoadOp));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]depthStoreOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, depthStoreOp));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]depthClearValue: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, depthClearValue));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]depthReadOnly: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, depthReadOnly));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]stencilLoadOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, stencilLoadOp));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]stencilStoreOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, stencilStoreOp));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]stencilClearValue: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, stencilClearValue));
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [WMAS.WWST]stencilReadOnly: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDepthStencilAttachment, stencilReadOnly));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPassDepthStencilAttachment *ha_wasm_struct_ptr = (WasmWGPURenderPassDepthStencilAttachment *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPassDepthStencilAttachment (%p) = [HMAS.WWST]WasmWGPURenderPassDepthStencilAttachment: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]view: (%p)", (void *)&ha_wasm_struct_ptr->view);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]depthLoadOp: (%p)", (void *)&ha_wasm_struct_ptr->depthLoadOp);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]depthStoreOp: (%p)", (void *)&ha_wasm_struct_ptr->depthStoreOp);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]depthClearValue: (%p)", (void *)&ha_wasm_struct_ptr->depthClearValue);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]depthReadOnly: (%p)", (void *)&ha_wasm_struct_ptr->depthReadOnly);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]stencilLoadOp: (%p)", (void *)&ha_wasm_struct_ptr->stencilLoadOp);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]stencilStoreOp: (%p)", (void *)&ha_wasm_struct_ptr->stencilStoreOp);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]stencilClearValue: (%p)", (void *)&ha_wasm_struct_ptr->stencilClearValue);
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: [HMAS.WWST]stencilReadOnly: (%p)", (void *)&ha_wasm_struct_ptr->stencilReadOnly);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPassDepthStencilAttachment *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pass_depth_stencil_attachment: allocating [*HMAS.HWST] (%p) as WGPURenderPassDepthStencilAttachment", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPassDepthStencilAttachment));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pass_depth_stencil_attachment: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pass_depth_stencil_attachment: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<object>] view: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->view, (void *)&ha_host_struct_ptr->view);
    ha_host_struct_ptr->view = (WGPUTextureView)registry_item_get_mapping(&registry->textureViews, ha_wasm_struct_ptr->view);

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<enum>] depthLoadOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthLoadOp, (void *)&ha_host_struct_ptr->depthLoadOp);
    ha_host_struct_ptr->depthLoadOp = ha_wasm_struct_ptr->depthLoadOp;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<enum>] depthStoreOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthStoreOp, (void *)&ha_host_struct_ptr->depthStoreOp);
    ha_host_struct_ptr->depthStoreOp = ha_wasm_struct_ptr->depthStoreOp;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<float32>] depthClearValue: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthClearValue, (void *)&ha_host_struct_ptr->depthClearValue);
    ha_host_struct_ptr->depthClearValue = ha_wasm_struct_ptr->depthClearValue;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<bool>] depthReadOnly: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthReadOnly, (void *)&ha_host_struct_ptr->depthReadOnly);
    ha_host_struct_ptr->depthReadOnly = ha_wasm_struct_ptr->depthReadOnly;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<enum>] stencilLoadOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilLoadOp, (void *)&ha_host_struct_ptr->stencilLoadOp);
    ha_host_struct_ptr->stencilLoadOp = ha_wasm_struct_ptr->stencilLoadOp;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<enum>] stencilStoreOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilStoreOp, (void *)&ha_host_struct_ptr->stencilStoreOp);
    ha_host_struct_ptr->stencilStoreOp = ha_wasm_struct_ptr->stencilStoreOp;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<uint32>] stencilClearValue: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilClearValue, (void *)&ha_host_struct_ptr->stencilClearValue);
    ha_host_struct_ptr->stencilClearValue = ha_wasm_struct_ptr->stencilClearValue;

    LOG_TRACE("extract_render_pass_depth_stencil_attachment: extracting [Embedded<bool>] stencilReadOnly: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilReadOnly, (void *)&ha_host_struct_ptr->stencilReadOnly);
    ha_host_struct_ptr->stencilReadOnly = ha_wasm_struct_ptr->stencilReadOnly;

    return 0;
}

int extract_render_pass_timestamp_writes(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassTimestampWrites **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pass_timestamp_writes: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pass_timestamp_writes: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pass_timestamp_writes: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_timestamp_writes: [WMAS.WWST]querySet: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassTimestampWrites, querySet));
    LOG_TRACE("extract_render_pass_timestamp_writes: [WMAS.WWST]beginningOfPassWriteIndex: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassTimestampWrites, beginningOfPassWriteIndex));
    LOG_TRACE("extract_render_pass_timestamp_writes: [WMAS.WWST]endOfPassWriteIndex: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassTimestampWrites, endOfPassWriteIndex));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPassTimestampWrites *ha_wasm_struct_ptr = (WasmWGPURenderPassTimestampWrites *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pass_timestamp_writes: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPassTimestampWrites (%p) = [HMAS.WWST]WasmWGPURenderPassTimestampWrites: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_timestamp_writes: [HMAS.WWST]querySet: (%p)", (void *)&ha_wasm_struct_ptr->querySet);
    LOG_TRACE("extract_render_pass_timestamp_writes: [HMAS.WWST]beginningOfPassWriteIndex: (%p)", (void *)&ha_wasm_struct_ptr->beginningOfPassWriteIndex);
    LOG_TRACE("extract_render_pass_timestamp_writes: [HMAS.WWST]endOfPassWriteIndex: (%p)", (void *)&ha_wasm_struct_ptr->endOfPassWriteIndex);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPassTimestampWrites *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pass_timestamp_writes: allocating [*HMAS.HWST] (%p) as WGPURenderPassTimestampWrites", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPassTimestampWrites));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pass_timestamp_writes: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pass_timestamp_writes: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pass_timestamp_writes: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pass_timestamp_writes: extracting [Embedded<object>] querySet: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->querySet, (void *)&ha_host_struct_ptr->querySet);
    ha_host_struct_ptr->querySet = (WGPUQuerySet)registry_item_get_mapping(&registry->querySets, ha_wasm_struct_ptr->querySet);

    LOG_TRACE("extract_render_pass_timestamp_writes: extracting [Embedded<uint32>] beginningOfPassWriteIndex: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->beginningOfPassWriteIndex, (void *)&ha_host_struct_ptr->beginningOfPassWriteIndex);
    ha_host_struct_ptr->beginningOfPassWriteIndex = ha_wasm_struct_ptr->beginningOfPassWriteIndex;

    LOG_TRACE("extract_render_pass_timestamp_writes: extracting [Embedded<uint32>] endOfPassWriteIndex: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->endOfPassWriteIndex, (void *)&ha_host_struct_ptr->endOfPassWriteIndex);
    ha_host_struct_ptr->endOfPassWriteIndex = ha_wasm_struct_ptr->endOfPassWriteIndex;

    return 0;
}

int extract_blend_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBlendState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_blend_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_blend_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_blend_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_blend_state: [WMAS.WWST]color: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBlendState, color));
    LOG_TRACE("extract_blend_state: [WMAS.WWST]alpha: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBlendState, alpha));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBlendState *ha_wasm_struct_ptr = (WasmWGPUBlendState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_blend_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBlendState (%p) = [HMAS.WWST]WasmWGPUBlendState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_blend_state: [HMAS.WWST]color: (%p)", (void *)&ha_wasm_struct_ptr->color);
    LOG_TRACE("extract_blend_state: [HMAS.WWST]alpha: (%p)", (void *)&ha_wasm_struct_ptr->alpha);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBlendState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_blend_state: allocating [*HMAS.HWST] (%p) as WGPUBlendState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBlendState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_blend_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_blend_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_blend_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_blend_state: extracting [Embedded<struct>] color: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->color, (void *)&ha_host_struct_ptr->color);
    WGPUBlendComponent *color_ptr = &ha_host_struct_ptr->color;
    if (extract_blend_component(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBlendState, color), &color_ptr)) {
        LOG_WARN("extract_blend_state: extract_blend_component failed");
    }

    LOG_TRACE("extract_blend_state: extracting [Embedded<struct>] alpha: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->alpha, (void *)&ha_host_struct_ptr->alpha);
    WGPUBlendComponent *alpha_ptr = &ha_host_struct_ptr->alpha;
    if (extract_blend_component(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBlendState, alpha), &alpha_ptr)) {
        LOG_WARN("extract_blend_state: extract_blend_component failed");
    }

    return 0;
}

int extract_stencil_face_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUStencilFaceState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_stencil_face_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_stencil_face_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_stencil_face_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_stencil_face_state: [WMAS.WWST]compare: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStencilFaceState, compare));
    LOG_TRACE("extract_stencil_face_state: [WMAS.WWST]failOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStencilFaceState, failOp));
    LOG_TRACE("extract_stencil_face_state: [WMAS.WWST]depthFailOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStencilFaceState, depthFailOp));
    LOG_TRACE("extract_stencil_face_state: [WMAS.WWST]passOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStencilFaceState, passOp));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUStencilFaceState *ha_wasm_struct_ptr = (WasmWGPUStencilFaceState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_stencil_face_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUStencilFaceState (%p) = [HMAS.WWST]WasmWGPUStencilFaceState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_stencil_face_state: [HMAS.WWST]compare: (%p)", (void *)&ha_wasm_struct_ptr->compare);
    LOG_TRACE("extract_stencil_face_state: [HMAS.WWST]failOp: (%p)", (void *)&ha_wasm_struct_ptr->failOp);
    LOG_TRACE("extract_stencil_face_state: [HMAS.WWST]depthFailOp: (%p)", (void *)&ha_wasm_struct_ptr->depthFailOp);
    LOG_TRACE("extract_stencil_face_state: [HMAS.WWST]passOp: (%p)", (void *)&ha_wasm_struct_ptr->passOp);

    /* Dereference out_ha_host_struct_ptr */
    WGPUStencilFaceState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_stencil_face_state: allocating [*HMAS.HWST] (%p) as WGPUStencilFaceState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUStencilFaceState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_stencil_face_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_stencil_face_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_stencil_face_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_stencil_face_state: extracting [Embedded<enum>] compare: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->compare, (void *)&ha_host_struct_ptr->compare);
    ha_host_struct_ptr->compare = ha_wasm_struct_ptr->compare;

    LOG_TRACE("extract_stencil_face_state: extracting [Embedded<enum>] failOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->failOp, (void *)&ha_host_struct_ptr->failOp);
    ha_host_struct_ptr->failOp = ha_wasm_struct_ptr->failOp;

    LOG_TRACE("extract_stencil_face_state: extracting [Embedded<enum>] depthFailOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthFailOp, (void *)&ha_host_struct_ptr->depthFailOp);
    ha_host_struct_ptr->depthFailOp = ha_wasm_struct_ptr->depthFailOp;

    LOG_TRACE("extract_stencil_face_state: extracting [Embedded<enum>] passOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->passOp, (void *)&ha_host_struct_ptr->passOp);
    ha_host_struct_ptr->passOp = ha_wasm_struct_ptr->passOp;

    return 0;
}

int extract_surface_texture(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceTexture **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_texture: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_texture: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_texture: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_texture: [WMAS.WWST]texture: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceTexture, texture));
    LOG_TRACE("extract_surface_texture: [WMAS.WWST]suboptimal: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceTexture, suboptimal));
    LOG_TRACE("extract_surface_texture: [WMAS.WWST]status: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceTexture, status));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceTexture *ha_wasm_struct_ptr = (WasmWGPUSurfaceTexture *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_texture: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceTexture (%p) = [HMAS.WWST]WasmWGPUSurfaceTexture: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_texture: [HMAS.WWST]texture: (%p)", (void *)&ha_wasm_struct_ptr->texture);
    LOG_TRACE("extract_surface_texture: [HMAS.WWST]suboptimal: (%p)", (void *)&ha_wasm_struct_ptr->suboptimal);
    LOG_TRACE("extract_surface_texture: [HMAS.WWST]status: (%p)", (void *)&ha_wasm_struct_ptr->status);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceTexture *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_texture: allocating [*HMAS.HWST] (%p) as WGPUSurfaceTexture", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceTexture));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_texture: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_texture: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_texture: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_texture: extracting [Embedded<object>] texture: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->texture, (void *)&ha_host_struct_ptr->texture);
    ha_host_struct_ptr->texture = (WGPUTexture)registry_item_get_mapping(&registry->textures, ha_wasm_struct_ptr->texture);

    LOG_TRACE("extract_surface_texture: extracting [Embedded<bool>] suboptimal: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->suboptimal, (void *)&ha_host_struct_ptr->suboptimal);
    ha_host_struct_ptr->suboptimal = ha_wasm_struct_ptr->suboptimal;

    LOG_TRACE("extract_surface_texture: extracting [Embedded<enum>] status: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->status, (void *)&ha_host_struct_ptr->status);
    ha_host_struct_ptr->status = ha_wasm_struct_ptr->status;

    return 0;
}

int extract_uncaptured_error_callback_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUUncapturedErrorCallbackInfo **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_uncaptured_error_callback_info: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_uncaptured_error_callback_info: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_uncaptured_error_callback_info: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_uncaptured_error_callback_info: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUUncapturedErrorCallbackInfo, nextInChain));
    LOG_TRACE("extract_uncaptured_error_callback_info: [WMAS.WWST]callback: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUUncapturedErrorCallbackInfo, callback));
    LOG_TRACE("extract_uncaptured_error_callback_info: [WMAS.WWST]userdata: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUUncapturedErrorCallbackInfo, userdata));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUUncapturedErrorCallbackInfo *ha_wasm_struct_ptr = (WasmWGPUUncapturedErrorCallbackInfo *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_uncaptured_error_callback_info: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUUncapturedErrorCallbackInfo (%p) = [HMAS.WWST]WasmWGPUUncapturedErrorCallbackInfo: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_uncaptured_error_callback_info: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_uncaptured_error_callback_info: [HMAS.WWST]callback: (%p)", (void *)&ha_wasm_struct_ptr->callback);
    LOG_TRACE("extract_uncaptured_error_callback_info: [HMAS.WWST]userdata: (%p)", (void *)&ha_wasm_struct_ptr->userdata);

    /* Dereference out_ha_host_struct_ptr */
    WGPUUncapturedErrorCallbackInfo *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_uncaptured_error_callback_info: allocating [*HMAS.HWST] (%p) as WGPUUncapturedErrorCallbackInfo", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUUncapturedErrorCallbackInfo));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_uncaptured_error_callback_info: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_uncaptured_error_callback_info: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_uncaptured_error_callback_info: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_uncaptured_error_callback_info: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_uncaptured_error_callback_info: extract_chained_struct failed");
    }

    LOG_TRACE("extract_uncaptured_error_callback_info: extracting [Embedded<function_type>] callback: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->callback, (void *)&ha_host_struct_ptr->callback);
    /* TODO: Create native callback function */
    ha_host_struct_ptr->callback = NULL;

    LOG_TRACE("extract_uncaptured_error_callback_info: extracting [Pointer<c_void>] userdata: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->userdata, (void *)&ha_host_struct_ptr->userdata);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->userdata = (void *)ha_wasm_struct_ptr->userdata;

    return 0;
}

int extract_texture_data_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureDataLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_texture_data_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_texture_data_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_texture_data_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_data_layout: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDataLayout, nextInChain));
    LOG_TRACE("extract_texture_data_layout: [WMAS.WWST]offset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDataLayout, offset));
    LOG_TRACE("extract_texture_data_layout: [WMAS.WWST]bytesPerRow: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDataLayout, bytesPerRow));
    LOG_TRACE("extract_texture_data_layout: [WMAS.WWST]rowsPerImage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDataLayout, rowsPerImage));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUTextureDataLayout *ha_wasm_struct_ptr = (WasmWGPUTextureDataLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_texture_data_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUTextureDataLayout (%p) = [HMAS.WWST]WasmWGPUTextureDataLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_data_layout: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_texture_data_layout: [HMAS.WWST]offset: (%p)", (void *)&ha_wasm_struct_ptr->offset);
    LOG_TRACE("extract_texture_data_layout: [HMAS.WWST]bytesPerRow: (%p)", (void *)&ha_wasm_struct_ptr->bytesPerRow);
    LOG_TRACE("extract_texture_data_layout: [HMAS.WWST]rowsPerImage: (%p)", (void *)&ha_wasm_struct_ptr->rowsPerImage);

    /* Dereference out_ha_host_struct_ptr */
    WGPUTextureDataLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_texture_data_layout: allocating [*HMAS.HWST] (%p) as WGPUTextureDataLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUTextureDataLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_texture_data_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_texture_data_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_texture_data_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_texture_data_layout: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_texture_data_layout: extract_chained_struct failed");
    }

    LOG_TRACE("extract_texture_data_layout: extracting [Embedded<uint64>] offset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->offset, (void *)&ha_host_struct_ptr->offset);
    ha_host_struct_ptr->offset = ha_wasm_struct_ptr->offset;

    LOG_TRACE("extract_texture_data_layout: extracting [Embedded<uint32>] bytesPerRow: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->bytesPerRow, (void *)&ha_host_struct_ptr->bytesPerRow);
    ha_host_struct_ptr->bytesPerRow = ha_wasm_struct_ptr->bytesPerRow;

    LOG_TRACE("extract_texture_data_layout: extracting [Embedded<uint32>] rowsPerImage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->rowsPerImage, (void *)&ha_host_struct_ptr->rowsPerImage);
    ha_host_struct_ptr->rowsPerImage = ha_wasm_struct_ptr->rowsPerImage;

    return 0;
}

int extract_queue_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUQueueDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_queue_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_queue_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_queue_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_queue_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQueueDescriptor, nextInChain));
    LOG_TRACE("extract_queue_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQueueDescriptor, label));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUQueueDescriptor *ha_wasm_struct_ptr = (WasmWGPUQueueDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_queue_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUQueueDescriptor (%p) = [HMAS.WWST]WasmWGPUQueueDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_queue_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_queue_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);

    /* Dereference out_ha_host_struct_ptr */
    WGPUQueueDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_queue_descriptor: allocating [*HMAS.HWST] (%p) as WGPUQueueDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUQueueDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_queue_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_queue_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_queue_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_queue_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_queue_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_queue_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_queue_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    return 0;
}

int extract_programmable_stage_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUProgrammableStageDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_programmable_stage_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_programmable_stage_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_programmable_stage_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_programmable_stage_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUProgrammableStageDescriptor, nextInChain));
    LOG_TRACE("extract_programmable_stage_descriptor: [WMAS.WWST]module: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUProgrammableStageDescriptor, module));
    LOG_TRACE("extract_programmable_stage_descriptor: [WMAS.WWST]entryPoint: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUProgrammableStageDescriptor, entryPoint));
    LOG_TRACE("extract_programmable_stage_descriptor: [WMAS.WWST]constantCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUProgrammableStageDescriptor, constantCount));
    LOG_TRACE("extract_programmable_stage_descriptor: [WMAS.WWST]constants: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUProgrammableStageDescriptor, constants));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUProgrammableStageDescriptor *ha_wasm_struct_ptr = (WasmWGPUProgrammableStageDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_programmable_stage_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUProgrammableStageDescriptor (%p) = [HMAS.WWST]WasmWGPUProgrammableStageDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_programmable_stage_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_programmable_stage_descriptor: [HMAS.WWST]module: (%p)", (void *)&ha_wasm_struct_ptr->module);
    LOG_TRACE("extract_programmable_stage_descriptor: [HMAS.WWST]entryPoint: (%p)", (void *)&ha_wasm_struct_ptr->entryPoint);
    LOG_TRACE("extract_programmable_stage_descriptor: [HMAS.WWST]constantCount: (%p)", (void *)&ha_wasm_struct_ptr->constantCount);
    LOG_TRACE("extract_programmable_stage_descriptor: [HMAS.WWST]constants: (%p)", (void *)&ha_wasm_struct_ptr->constants);

    /* Dereference out_ha_host_struct_ptr */
    WGPUProgrammableStageDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_programmable_stage_descriptor: allocating [*HMAS.HWST] (%p) as WGPUProgrammableStageDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUProgrammableStageDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_programmable_stage_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_programmable_stage_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_programmable_stage_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_programmable_stage_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_programmable_stage_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_programmable_stage_descriptor: extracting [Embedded<object>] module: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->module, (void *)&ha_host_struct_ptr->module);
    ha_host_struct_ptr->module = (WGPUShaderModule)registry_item_get_mapping(&registry->shaderModules, ha_wasm_struct_ptr->module);

    LOG_TRACE("extract_programmable_stage_descriptor: extracting [Embedded<string>] entryPoint: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryPoint, (void *)&ha_host_struct_ptr->entryPoint);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->entryPoint, &ha_host_struct_ptr->entryPoint, 65534)) {
        LOG_WARN("extract_programmable_stage_descriptor: wasm_safe_copy_string_null_terminated failed for entry_point");
    }

    LOG_TRACE("extract_programmable_stage_descriptor: extracting [Embedded<count>] constantCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constantCount, (void *)&ha_host_struct_ptr->constantCount);
    ha_host_struct_ptr->constantCount = ha_wasm_struct_ptr->constantCount;

    LOG_TRACE("extract_programmable_stage_descriptor: extracting [Array<struct>] constants: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constants, (void *)&ha_host_struct_ptr->constants);
    /* TODO: Implement SAFE pointer extraction */
    WGPUConstantEntry *constant_entry_array_proto = calloc(ha_host_struct_ptr->constantCount, sizeof(WGPUConstantEntry));
    if (constant_entry_array_proto == NULL) {
        FATAL("extract_programmable_stage_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->constantCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->constants + i * sizeof(WasmWGPUConstantEntry);
        LOG_TRACE("extract_programmable_stage_descriptor: copying struct at wasm-address %p into constant_entry_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUConstantEntry *proto_i_ptr = &constant_entry_array_proto[i];
        if (extract_constant_entry(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_programmable_stage_descriptor: extract_constant_entry at index %d failed", i);
        }
    }
    ha_host_struct_ptr->constants = constant_entry_array_proto;

    return 0;
}

int extract_request_adapter_options(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURequestAdapterOptions **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_request_adapter_options: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_request_adapter_options: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_request_adapter_options: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_request_adapter_options: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequestAdapterOptions, nextInChain));
    LOG_TRACE("extract_request_adapter_options: [WMAS.WWST]compatibleSurface: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequestAdapterOptions, compatibleSurface));
    LOG_TRACE("extract_request_adapter_options: [WMAS.WWST]powerPreference: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequestAdapterOptions, powerPreference));
    LOG_TRACE("extract_request_adapter_options: [WMAS.WWST]backendType: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequestAdapterOptions, backendType));
    LOG_TRACE("extract_request_adapter_options: [WMAS.WWST]forceFallbackAdapter: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequestAdapterOptions, forceFallbackAdapter));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURequestAdapterOptions *ha_wasm_struct_ptr = (WasmWGPURequestAdapterOptions *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_request_adapter_options: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURequestAdapterOptions (%p) = [HMAS.WWST]WasmWGPURequestAdapterOptions: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_request_adapter_options: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_request_adapter_options: [HMAS.WWST]compatibleSurface: (%p)", (void *)&ha_wasm_struct_ptr->compatibleSurface);
    LOG_TRACE("extract_request_adapter_options: [HMAS.WWST]powerPreference: (%p)", (void *)&ha_wasm_struct_ptr->powerPreference);
    LOG_TRACE("extract_request_adapter_options: [HMAS.WWST]backendType: (%p)", (void *)&ha_wasm_struct_ptr->backendType);
    LOG_TRACE("extract_request_adapter_options: [HMAS.WWST]forceFallbackAdapter: (%p)", (void *)&ha_wasm_struct_ptr->forceFallbackAdapter);

    /* Dereference out_ha_host_struct_ptr */
    WGPURequestAdapterOptions *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_request_adapter_options: allocating [*HMAS.HWST] (%p) as WGPURequestAdapterOptions", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURequestAdapterOptions));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_request_adapter_options: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_request_adapter_options: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_request_adapter_options: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_request_adapter_options: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_request_adapter_options: extract_chained_struct failed");
    }

    LOG_TRACE("extract_request_adapter_options: extracting [Embedded<object>] compatibleSurface: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->compatibleSurface, (void *)&ha_host_struct_ptr->compatibleSurface);
    ha_host_struct_ptr->compatibleSurface = (WGPUSurface)registry_item_get_mapping(&registry->surfaces, ha_wasm_struct_ptr->compatibleSurface);

    LOG_TRACE("extract_request_adapter_options: extracting [Embedded<enum>] powerPreference: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->powerPreference, (void *)&ha_host_struct_ptr->powerPreference);
    ha_host_struct_ptr->powerPreference = ha_wasm_struct_ptr->powerPreference;

    LOG_TRACE("extract_request_adapter_options: extracting [Embedded<enum>] backendType: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->backendType, (void *)&ha_host_struct_ptr->backendType);
    ha_host_struct_ptr->backendType = ha_wasm_struct_ptr->backendType;

    LOG_TRACE("extract_request_adapter_options: extracting [Embedded<bool>] forceFallbackAdapter: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->forceFallbackAdapter, (void *)&ha_host_struct_ptr->forceFallbackAdapter);
    ha_host_struct_ptr->forceFallbackAdapter = ha_wasm_struct_ptr->forceFallbackAdapter;

    return 0;
}

int extract_device_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUDeviceDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_device_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_device_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_device_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, nextInChain));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, label));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]requiredFeatureCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, requiredFeatureCount));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]requiredFeatures: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, requiredFeatures));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]requiredLimits: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, requiredLimits));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]defaultQueue: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, defaultQueue));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]deviceLostCallback: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, deviceLostCallback));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]deviceLostUserdata: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, deviceLostUserdata));
    LOG_TRACE("extract_device_descriptor: [WMAS.WWST]uncapturedErrorCallbackInfo: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, uncapturedErrorCallbackInfo));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUDeviceDescriptor *ha_wasm_struct_ptr = (WasmWGPUDeviceDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_device_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUDeviceDescriptor (%p) = [HMAS.WWST]WasmWGPUDeviceDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]requiredFeatureCount: (%p)", (void *)&ha_wasm_struct_ptr->requiredFeatureCount);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]requiredFeatures: (%p)", (void *)&ha_wasm_struct_ptr->requiredFeatures);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]requiredLimits: (%p)", (void *)&ha_wasm_struct_ptr->requiredLimits);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]defaultQueue: (%p)", (void *)&ha_wasm_struct_ptr->defaultQueue);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]deviceLostCallback: (%p)", (void *)&ha_wasm_struct_ptr->deviceLostCallback);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]deviceLostUserdata: (%p)", (void *)&ha_wasm_struct_ptr->deviceLostUserdata);
    LOG_TRACE("extract_device_descriptor: [HMAS.WWST]uncapturedErrorCallbackInfo: (%p)", (void *)&ha_wasm_struct_ptr->uncapturedErrorCallbackInfo);

    /* Dereference out_ha_host_struct_ptr */
    WGPUDeviceDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_device_descriptor: allocating [*HMAS.HWST] (%p) as WGPUDeviceDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUDeviceDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_device_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_device_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_device_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_device_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_device_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_device_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_device_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_device_descriptor: extracting [Embedded<count>] requiredFeatureCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->requiredFeatureCount, (void *)&ha_host_struct_ptr->requiredFeatureCount);
    ha_host_struct_ptr->requiredFeatureCount = ha_wasm_struct_ptr->requiredFeatureCount;

    LOG_TRACE("extract_device_descriptor: extracting [Array<enum>] requiredFeatures: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->requiredFeatures, (void *)&ha_host_struct_ptr->requiredFeatures);
    /* TODO: Implement SAFE pointer extraction */
    WGPUFeatureName *feature_name_array_proto = calloc(ha_host_struct_ptr->requiredFeatureCount, sizeof(int));
    if (feature_name_array_proto == NULL) {
        FATAL("extract_device_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->requiredFeatureCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->requiredFeatures + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_device_descriptor: copying data at %p into feature_name_array_proto[%d]", ha_wasm_ptr_i, i);
        feature_name_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->requiredFeatures = feature_name_array_proto;

    LOG_TRACE("extract_device_descriptor: extracting [Pointer<struct>] requiredLimits: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->requiredLimits, (void *)&ha_host_struct_ptr->requiredLimits);
    if (extract_required_limits(registry, memory, (byte_t *)ha_wasm_struct_ptr->requiredLimits, &ha_host_struct_ptr->requiredLimits)) {
        LOG_WARN("extract_device_descriptor: extract_required_limits failed");
    }

    LOG_TRACE("extract_device_descriptor: extracting [Embedded<struct>] defaultQueue: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->defaultQueue, (void *)&ha_host_struct_ptr->defaultQueue);
    WGPUQueueDescriptor *default_queue_ptr = &ha_host_struct_ptr->defaultQueue;
    if (extract_queue_descriptor(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, defaultQueue), &default_queue_ptr)) {
        LOG_WARN("extract_device_descriptor: extract_queue_descriptor failed");
    }

    LOG_TRACE("extract_device_descriptor: extracting [Embedded<function_type>] deviceLostCallback: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->deviceLostCallback, (void *)&ha_host_struct_ptr->deviceLostCallback);
    /* TODO: Create native callback function */
    ha_host_struct_ptr->deviceLostCallback = NULL;

    LOG_TRACE("extract_device_descriptor: extracting [Pointer<c_void>] deviceLostUserdata: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->deviceLostUserdata, (void *)&ha_host_struct_ptr->deviceLostUserdata);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->deviceLostUserdata = (void *)ha_wasm_struct_ptr->deviceLostUserdata;

    LOG_TRACE("extract_device_descriptor: extracting [Embedded<struct>] uncapturedErrorCallbackInfo: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->uncapturedErrorCallbackInfo, (void *)&ha_host_struct_ptr->uncapturedErrorCallbackInfo);
    WGPUUncapturedErrorCallbackInfo *uncaptured_error_callback_info_ptr = &ha_host_struct_ptr->uncapturedErrorCallbackInfo;
    if (extract_uncaptured_error_callback_info(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUDeviceDescriptor, uncapturedErrorCallbackInfo), &uncaptured_error_callback_info_ptr)) {
        LOG_WARN("extract_device_descriptor: extract_uncaptured_error_callback_info failed");
    }

    return 0;
}

int extract_bind_group_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupEntry **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_bind_group_entry: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_bind_group_entry: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_bind_group_entry: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, nextInChain));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]binding: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, binding));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]buffer: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, buffer));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]offset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, offset));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]size: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, size));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]sampler: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, sampler));
    LOG_TRACE("extract_bind_group_entry: [WMAS.WWST]textureView: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupEntry, textureView));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBindGroupEntry *ha_wasm_struct_ptr = (WasmWGPUBindGroupEntry *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_bind_group_entry: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBindGroupEntry (%p) = [HMAS.WWST]WasmWGPUBindGroupEntry: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]binding: (%p)", (void *)&ha_wasm_struct_ptr->binding);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]buffer: (%p)", (void *)&ha_wasm_struct_ptr->buffer);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]offset: (%p)", (void *)&ha_wasm_struct_ptr->offset);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]size: (%p)", (void *)&ha_wasm_struct_ptr->size);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]sampler: (%p)", (void *)&ha_wasm_struct_ptr->sampler);
    LOG_TRACE("extract_bind_group_entry: [HMAS.WWST]textureView: (%p)", (void *)&ha_wasm_struct_ptr->textureView);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBindGroupEntry *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_bind_group_entry: allocating [*HMAS.HWST] (%p) as WGPUBindGroupEntry", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBindGroupEntry));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_bind_group_entry: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_bind_group_entry: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_bind_group_entry: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_bind_group_entry: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_bind_group_entry: extract_chained_struct failed");
    }

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<uint32>] binding: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->binding, (void *)&ha_host_struct_ptr->binding);
    ha_host_struct_ptr->binding = ha_wasm_struct_ptr->binding;

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<object>] buffer: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->buffer, (void *)&ha_host_struct_ptr->buffer);
    ha_host_struct_ptr->buffer = (WGPUBuffer)registry_item_get_mapping(&registry->buffers, ha_wasm_struct_ptr->buffer);

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<uint64>] offset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->offset, (void *)&ha_host_struct_ptr->offset);
    ha_host_struct_ptr->offset = ha_wasm_struct_ptr->offset;

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<uint64>] size: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->size, (void *)&ha_host_struct_ptr->size);
    ha_host_struct_ptr->size = ha_wasm_struct_ptr->size;

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<object>] sampler: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->sampler, (void *)&ha_host_struct_ptr->sampler);
    ha_host_struct_ptr->sampler = (WGPUSampler)registry_item_get_mapping(&registry->samplers, ha_wasm_struct_ptr->sampler);

    LOG_TRACE("extract_bind_group_entry: extracting [Embedded<object>] textureView: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->textureView, (void *)&ha_host_struct_ptr->textureView);
    ha_host_struct_ptr->textureView = (WGPUTextureView)registry_item_get_mapping(&registry->textureViews, ha_wasm_struct_ptr->textureView);

    return 0;
}

int extract_bind_group_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_bind_group_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_bind_group_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_bind_group_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupDescriptor, nextInChain));
    LOG_TRACE("extract_bind_group_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupDescriptor, label));
    LOG_TRACE("extract_bind_group_descriptor: [WMAS.WWST]layout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupDescriptor, layout));
    LOG_TRACE("extract_bind_group_descriptor: [WMAS.WWST]entryCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupDescriptor, entryCount));
    LOG_TRACE("extract_bind_group_descriptor: [WMAS.WWST]entries: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupDescriptor, entries));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBindGroupDescriptor *ha_wasm_struct_ptr = (WasmWGPUBindGroupDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_bind_group_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBindGroupDescriptor (%p) = [HMAS.WWST]WasmWGPUBindGroupDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_bind_group_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_bind_group_descriptor: [HMAS.WWST]layout: (%p)", (void *)&ha_wasm_struct_ptr->layout);
    LOG_TRACE("extract_bind_group_descriptor: [HMAS.WWST]entryCount: (%p)", (void *)&ha_wasm_struct_ptr->entryCount);
    LOG_TRACE("extract_bind_group_descriptor: [HMAS.WWST]entries: (%p)", (void *)&ha_wasm_struct_ptr->entries);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBindGroupDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_bind_group_descriptor: allocating [*HMAS.HWST] (%p) as WGPUBindGroupDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBindGroupDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_bind_group_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_bind_group_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_bind_group_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_bind_group_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_bind_group_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_bind_group_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_bind_group_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_bind_group_descriptor: extracting [Embedded<object>] layout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layout, (void *)&ha_host_struct_ptr->layout);
    ha_host_struct_ptr->layout = (WGPUBindGroupLayout)registry_item_get_mapping(&registry->bindGroupLayouts, ha_wasm_struct_ptr->layout);

    LOG_TRACE("extract_bind_group_descriptor: extracting [Embedded<count>] entryCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryCount, (void *)&ha_host_struct_ptr->entryCount);
    ha_host_struct_ptr->entryCount = ha_wasm_struct_ptr->entryCount;

    LOG_TRACE("extract_bind_group_descriptor: extracting [Array<struct>] entries: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entries, (void *)&ha_host_struct_ptr->entries);
    /* TODO: Implement SAFE pointer extraction */
    WGPUBindGroupEntry *bind_group_entry_array_proto = calloc(ha_host_struct_ptr->entryCount, sizeof(WGPUBindGroupEntry));
    if (bind_group_entry_array_proto == NULL) {
        FATAL("extract_bind_group_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->entryCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->entries + i * sizeof(WasmWGPUBindGroupEntry);
        LOG_TRACE("extract_bind_group_descriptor: copying struct at wasm-address %p into bind_group_entry_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUBindGroupEntry *proto_i_ptr = &bind_group_entry_array_proto[i];
        if (extract_bind_group_entry(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_bind_group_descriptor: extract_bind_group_entry at index %d failed", i);
        }
    }
    ha_host_struct_ptr->entries = bind_group_entry_array_proto;

    return 0;
}

int extract_buffer_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBufferBindingLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_buffer_binding_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_buffer_binding_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_buffer_binding_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_buffer_binding_layout: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferBindingLayout, nextInChain));
    LOG_TRACE("extract_buffer_binding_layout: [WMAS.WWST]type: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferBindingLayout, type));
    LOG_TRACE("extract_buffer_binding_layout: [WMAS.WWST]hasDynamicOffset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferBindingLayout, hasDynamicOffset));
    LOG_TRACE("extract_buffer_binding_layout: [WMAS.WWST]minBindingSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferBindingLayout, minBindingSize));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBufferBindingLayout *ha_wasm_struct_ptr = (WasmWGPUBufferBindingLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_buffer_binding_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBufferBindingLayout (%p) = [HMAS.WWST]WasmWGPUBufferBindingLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_buffer_binding_layout: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_buffer_binding_layout: [HMAS.WWST]type: (%p)", (void *)&ha_wasm_struct_ptr->type);
    LOG_TRACE("extract_buffer_binding_layout: [HMAS.WWST]hasDynamicOffset: (%p)", (void *)&ha_wasm_struct_ptr->hasDynamicOffset);
    LOG_TRACE("extract_buffer_binding_layout: [HMAS.WWST]minBindingSize: (%p)", (void *)&ha_wasm_struct_ptr->minBindingSize);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBufferBindingLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_buffer_binding_layout: allocating [*HMAS.HWST] (%p) as WGPUBufferBindingLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBufferBindingLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_buffer_binding_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_buffer_binding_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_buffer_binding_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_buffer_binding_layout: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_buffer_binding_layout: extract_chained_struct failed");
    }

    LOG_TRACE("extract_buffer_binding_layout: extracting [Embedded<enum>] type: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->type, (void *)&ha_host_struct_ptr->type);
    ha_host_struct_ptr->type = ha_wasm_struct_ptr->type;

    LOG_TRACE("extract_buffer_binding_layout: extracting [Embedded<bool>] hasDynamicOffset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->hasDynamicOffset, (void *)&ha_host_struct_ptr->hasDynamicOffset);
    ha_host_struct_ptr->hasDynamicOffset = ha_wasm_struct_ptr->hasDynamicOffset;

    LOG_TRACE("extract_buffer_binding_layout: extracting [Embedded<uint64>] minBindingSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->minBindingSize, (void *)&ha_host_struct_ptr->minBindingSize);
    ha_host_struct_ptr->minBindingSize = ha_wasm_struct_ptr->minBindingSize;

    return 0;
}

int extract_sampler_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSamplerBindingLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_sampler_binding_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_sampler_binding_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_sampler_binding_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_sampler_binding_layout: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerBindingLayout, nextInChain));
    LOG_TRACE("extract_sampler_binding_layout: [WMAS.WWST]type: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerBindingLayout, type));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSamplerBindingLayout *ha_wasm_struct_ptr = (WasmWGPUSamplerBindingLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_sampler_binding_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSamplerBindingLayout (%p) = [HMAS.WWST]WasmWGPUSamplerBindingLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_sampler_binding_layout: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_sampler_binding_layout: [HMAS.WWST]type: (%p)", (void *)&ha_wasm_struct_ptr->type);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSamplerBindingLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_sampler_binding_layout: allocating [*HMAS.HWST] (%p) as WGPUSamplerBindingLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSamplerBindingLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_sampler_binding_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_sampler_binding_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_sampler_binding_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_sampler_binding_layout: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_sampler_binding_layout: extract_chained_struct failed");
    }

    LOG_TRACE("extract_sampler_binding_layout: extracting [Embedded<enum>] type: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->type, (void *)&ha_host_struct_ptr->type);
    ha_host_struct_ptr->type = ha_wasm_struct_ptr->type;

    return 0;
}

int extract_texture_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureBindingLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_texture_binding_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_texture_binding_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_texture_binding_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_binding_layout: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureBindingLayout, nextInChain));
    LOG_TRACE("extract_texture_binding_layout: [WMAS.WWST]sampleType: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureBindingLayout, sampleType));
    LOG_TRACE("extract_texture_binding_layout: [WMAS.WWST]viewDimension: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureBindingLayout, viewDimension));
    LOG_TRACE("extract_texture_binding_layout: [WMAS.WWST]multisampled: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureBindingLayout, multisampled));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUTextureBindingLayout *ha_wasm_struct_ptr = (WasmWGPUTextureBindingLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_texture_binding_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUTextureBindingLayout (%p) = [HMAS.WWST]WasmWGPUTextureBindingLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_binding_layout: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_texture_binding_layout: [HMAS.WWST]sampleType: (%p)", (void *)&ha_wasm_struct_ptr->sampleType);
    LOG_TRACE("extract_texture_binding_layout: [HMAS.WWST]viewDimension: (%p)", (void *)&ha_wasm_struct_ptr->viewDimension);
    LOG_TRACE("extract_texture_binding_layout: [HMAS.WWST]multisampled: (%p)", (void *)&ha_wasm_struct_ptr->multisampled);

    /* Dereference out_ha_host_struct_ptr */
    WGPUTextureBindingLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_texture_binding_layout: allocating [*HMAS.HWST] (%p) as WGPUTextureBindingLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUTextureBindingLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_texture_binding_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_texture_binding_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_texture_binding_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_texture_binding_layout: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_texture_binding_layout: extract_chained_struct failed");
    }

    LOG_TRACE("extract_texture_binding_layout: extracting [Embedded<enum>] sampleType: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->sampleType, (void *)&ha_host_struct_ptr->sampleType);
    ha_host_struct_ptr->sampleType = ha_wasm_struct_ptr->sampleType;

    LOG_TRACE("extract_texture_binding_layout: extracting [Embedded<enum>] viewDimension: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewDimension, (void *)&ha_host_struct_ptr->viewDimension);
    ha_host_struct_ptr->viewDimension = ha_wasm_struct_ptr->viewDimension;

    LOG_TRACE("extract_texture_binding_layout: extracting [Embedded<bool>] multisampled: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->multisampled, (void *)&ha_host_struct_ptr->multisampled);
    ha_host_struct_ptr->multisampled = ha_wasm_struct_ptr->multisampled;

    return 0;
}

int extract_surface_configuration(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceConfiguration **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_configuration: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_configuration: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_configuration: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, nextInChain));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]device: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, device));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, format));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]usage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, usage));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]viewFormatCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, viewFormatCount));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]viewFormats: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, viewFormats));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]alphaMode: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, alphaMode));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]width: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, width));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]height: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, height));
    LOG_TRACE("extract_surface_configuration: [WMAS.WWST]presentMode: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceConfiguration, presentMode));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceConfiguration *ha_wasm_struct_ptr = (WasmWGPUSurfaceConfiguration *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_configuration: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceConfiguration (%p) = [HMAS.WWST]WasmWGPUSurfaceConfiguration: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]device: (%p)", (void *)&ha_wasm_struct_ptr->device);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]usage: (%p)", (void *)&ha_wasm_struct_ptr->usage);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]viewFormatCount: (%p)", (void *)&ha_wasm_struct_ptr->viewFormatCount);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]viewFormats: (%p)", (void *)&ha_wasm_struct_ptr->viewFormats);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]alphaMode: (%p)", (void *)&ha_wasm_struct_ptr->alphaMode);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]width: (%p)", (void *)&ha_wasm_struct_ptr->width);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]height: (%p)", (void *)&ha_wasm_struct_ptr->height);
    LOG_TRACE("extract_surface_configuration: [HMAS.WWST]presentMode: (%p)", (void *)&ha_wasm_struct_ptr->presentMode);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceConfiguration *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_configuration: allocating [*HMAS.HWST] (%p) as WGPUSurfaceConfiguration", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceConfiguration));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_configuration: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_configuration: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_configuration: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_configuration: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_surface_configuration: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<object>] device: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->device, (void *)&ha_host_struct_ptr->device);
    ha_host_struct_ptr->device = (WGPUDevice)registry_item_get_mapping(&registry->devices, ha_wasm_struct_ptr->device);

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<bitflag>] usage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->usage, (void *)&ha_host_struct_ptr->usage);
    ha_host_struct_ptr->usage = ha_wasm_struct_ptr->usage;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<count>] viewFormatCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewFormatCount, (void *)&ha_host_struct_ptr->viewFormatCount);
    ha_host_struct_ptr->viewFormatCount = ha_wasm_struct_ptr->viewFormatCount;

    LOG_TRACE("extract_surface_configuration: extracting [Array<enum>] viewFormats: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewFormats, (void *)&ha_host_struct_ptr->viewFormats);
    /* TODO: Implement SAFE pointer extraction */
    WGPUTextureFormat *texture_format_array_proto = calloc(ha_host_struct_ptr->viewFormatCount, sizeof(int));
    if (texture_format_array_proto == NULL) {
        FATAL("extract_surface_configuration: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->viewFormatCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->viewFormats + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_surface_configuration: copying data at %p into texture_format_array_proto[%d]", ha_wasm_ptr_i, i);
        texture_format_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->viewFormats = texture_format_array_proto;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<enum>] alphaMode: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->alphaMode, (void *)&ha_host_struct_ptr->alphaMode);
    ha_host_struct_ptr->alphaMode = ha_wasm_struct_ptr->alphaMode;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<uint32>] width: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->width, (void *)&ha_host_struct_ptr->width);
    ha_host_struct_ptr->width = ha_wasm_struct_ptr->width;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<uint32>] height: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->height, (void *)&ha_host_struct_ptr->height);
    ha_host_struct_ptr->height = ha_wasm_struct_ptr->height;

    LOG_TRACE("extract_surface_configuration: extracting [Embedded<enum>] presentMode: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->presentMode, (void *)&ha_host_struct_ptr->presentMode);
    ha_host_struct_ptr->presentMode = ha_wasm_struct_ptr->presentMode;

    return 0;
}

int extract_storage_texture_binding_layout(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUStorageTextureBindingLayout **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_storage_texture_binding_layout: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_storage_texture_binding_layout: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_storage_texture_binding_layout: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_storage_texture_binding_layout: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStorageTextureBindingLayout, nextInChain));
    LOG_TRACE("extract_storage_texture_binding_layout: [WMAS.WWST]access: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStorageTextureBindingLayout, access));
    LOG_TRACE("extract_storage_texture_binding_layout: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStorageTextureBindingLayout, format));
    LOG_TRACE("extract_storage_texture_binding_layout: [WMAS.WWST]viewDimension: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUStorageTextureBindingLayout, viewDimension));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUStorageTextureBindingLayout *ha_wasm_struct_ptr = (WasmWGPUStorageTextureBindingLayout *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_storage_texture_binding_layout: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUStorageTextureBindingLayout (%p) = [HMAS.WWST]WasmWGPUStorageTextureBindingLayout: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_storage_texture_binding_layout: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_storage_texture_binding_layout: [HMAS.WWST]access: (%p)", (void *)&ha_wasm_struct_ptr->access);
    LOG_TRACE("extract_storage_texture_binding_layout: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_storage_texture_binding_layout: [HMAS.WWST]viewDimension: (%p)", (void *)&ha_wasm_struct_ptr->viewDimension);

    /* Dereference out_ha_host_struct_ptr */
    WGPUStorageTextureBindingLayout *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_storage_texture_binding_layout: allocating [*HMAS.HWST] (%p) as WGPUStorageTextureBindingLayout", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUStorageTextureBindingLayout));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_storage_texture_binding_layout: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_storage_texture_binding_layout: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_storage_texture_binding_layout: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_storage_texture_binding_layout: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_storage_texture_binding_layout: extract_chained_struct failed");
    }

    LOG_TRACE("extract_storage_texture_binding_layout: extracting [Embedded<enum>] access: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->access, (void *)&ha_host_struct_ptr->access);
    ha_host_struct_ptr->access = ha_wasm_struct_ptr->access;

    LOG_TRACE("extract_storage_texture_binding_layout: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_storage_texture_binding_layout: extracting [Embedded<enum>] viewDimension: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewDimension, (void *)&ha_host_struct_ptr->viewDimension);
    ha_host_struct_ptr->viewDimension = ha_wasm_struct_ptr->viewDimension;

    return 0;
}

int extract_bind_group_layout_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupLayoutEntry **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_bind_group_layout_entry: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_bind_group_layout_entry: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_bind_group_layout_entry: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, nextInChain));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]binding: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, binding));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]visibility: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, visibility));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]buffer: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, buffer));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]sampler: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, sampler));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]texture: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, texture));
    LOG_TRACE("extract_bind_group_layout_entry: [WMAS.WWST]storageTexture: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, storageTexture));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBindGroupLayoutEntry *ha_wasm_struct_ptr = (WasmWGPUBindGroupLayoutEntry *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_bind_group_layout_entry: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBindGroupLayoutEntry (%p) = [HMAS.WWST]WasmWGPUBindGroupLayoutEntry: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]binding: (%p)", (void *)&ha_wasm_struct_ptr->binding);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]visibility: (%p)", (void *)&ha_wasm_struct_ptr->visibility);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]buffer: (%p)", (void *)&ha_wasm_struct_ptr->buffer);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]sampler: (%p)", (void *)&ha_wasm_struct_ptr->sampler);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]texture: (%p)", (void *)&ha_wasm_struct_ptr->texture);
    LOG_TRACE("extract_bind_group_layout_entry: [HMAS.WWST]storageTexture: (%p)", (void *)&ha_wasm_struct_ptr->storageTexture);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBindGroupLayoutEntry *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_bind_group_layout_entry: allocating [*HMAS.HWST] (%p) as WGPUBindGroupLayoutEntry", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBindGroupLayoutEntry));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_bind_group_layout_entry: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_bind_group_layout_entry: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_bind_group_layout_entry: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_bind_group_layout_entry: extract_chained_struct failed");
    }

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<uint32>] binding: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->binding, (void *)&ha_host_struct_ptr->binding);
    ha_host_struct_ptr->binding = ha_wasm_struct_ptr->binding;

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<bitflag>] visibility: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->visibility, (void *)&ha_host_struct_ptr->visibility);
    ha_host_struct_ptr->visibility = ha_wasm_struct_ptr->visibility;

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<struct>] buffer: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->buffer, (void *)&ha_host_struct_ptr->buffer);
    WGPUBufferBindingLayout *buffer_ptr = &ha_host_struct_ptr->buffer;
    if (extract_buffer_binding_layout(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, buffer), &buffer_ptr)) {
        LOG_WARN("extract_bind_group_layout_entry: extract_buffer_binding_layout failed");
    }

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<struct>] sampler: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->sampler, (void *)&ha_host_struct_ptr->sampler);
    WGPUSamplerBindingLayout *sampler_ptr = &ha_host_struct_ptr->sampler;
    if (extract_sampler_binding_layout(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, sampler), &sampler_ptr)) {
        LOG_WARN("extract_bind_group_layout_entry: extract_sampler_binding_layout failed");
    }

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<struct>] texture: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->texture, (void *)&ha_host_struct_ptr->texture);
    WGPUTextureBindingLayout *texture_ptr = &ha_host_struct_ptr->texture;
    if (extract_texture_binding_layout(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, texture), &texture_ptr)) {
        LOG_WARN("extract_bind_group_layout_entry: extract_texture_binding_layout failed");
    }

    LOG_TRACE("extract_bind_group_layout_entry: extracting [Embedded<struct>] storageTexture: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->storageTexture, (void *)&ha_host_struct_ptr->storageTexture);
    WGPUStorageTextureBindingLayout *storage_texture_ptr = &ha_host_struct_ptr->storageTexture;
    if (extract_storage_texture_binding_layout(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutEntry, storageTexture), &storage_texture_ptr)) {
        LOG_WARN("extract_bind_group_layout_entry: extract_storage_texture_binding_layout failed");
    }

    return 0;
}

int extract_bind_group_layout_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBindGroupLayoutDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_bind_group_layout_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_bind_group_layout_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_bind_group_layout_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_layout_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutDescriptor, nextInChain));
    LOG_TRACE("extract_bind_group_layout_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutDescriptor, label));
    LOG_TRACE("extract_bind_group_layout_descriptor: [WMAS.WWST]entryCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutDescriptor, entryCount));
    LOG_TRACE("extract_bind_group_layout_descriptor: [WMAS.WWST]entries: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBindGroupLayoutDescriptor, entries));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBindGroupLayoutDescriptor *ha_wasm_struct_ptr = (WasmWGPUBindGroupLayoutDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_bind_group_layout_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBindGroupLayoutDescriptor (%p) = [HMAS.WWST]WasmWGPUBindGroupLayoutDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_bind_group_layout_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_bind_group_layout_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_bind_group_layout_descriptor: [HMAS.WWST]entryCount: (%p)", (void *)&ha_wasm_struct_ptr->entryCount);
    LOG_TRACE("extract_bind_group_layout_descriptor: [HMAS.WWST]entries: (%p)", (void *)&ha_wasm_struct_ptr->entries);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBindGroupLayoutDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_bind_group_layout_descriptor: allocating [*HMAS.HWST] (%p) as WGPUBindGroupLayoutDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBindGroupLayoutDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_bind_group_layout_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_bind_group_layout_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_bind_group_layout_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_bind_group_layout_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_bind_group_layout_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_bind_group_layout_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_bind_group_layout_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_bind_group_layout_descriptor: extracting [Embedded<count>] entryCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryCount, (void *)&ha_host_struct_ptr->entryCount);
    ha_host_struct_ptr->entryCount = ha_wasm_struct_ptr->entryCount;

    LOG_TRACE("extract_bind_group_layout_descriptor: extracting [Array<struct>] entries: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entries, (void *)&ha_host_struct_ptr->entries);
    /* TODO: Implement SAFE pointer extraction */
    WGPUBindGroupLayoutEntry *bind_group_layout_entry_array_proto = calloc(ha_host_struct_ptr->entryCount, sizeof(WGPUBindGroupLayoutEntry));
    if (bind_group_layout_entry_array_proto == NULL) {
        FATAL("extract_bind_group_layout_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->entryCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->entries + i * sizeof(WasmWGPUBindGroupLayoutEntry);
        LOG_TRACE("extract_bind_group_layout_descriptor: copying struct at wasm-address %p into bind_group_layout_entry_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUBindGroupLayoutEntry *proto_i_ptr = &bind_group_layout_entry_array_proto[i];
        if (extract_bind_group_layout_entry(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_bind_group_layout_descriptor: extract_bind_group_layout_entry at index %d failed", i);
        }
    }
    ha_host_struct_ptr->entries = bind_group_layout_entry_array_proto;

    return 0;
}

int extract_buffer_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUBufferDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_buffer_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_buffer_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_buffer_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_buffer_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferDescriptor, nextInChain));
    LOG_TRACE("extract_buffer_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferDescriptor, label));
    LOG_TRACE("extract_buffer_descriptor: [WMAS.WWST]usage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferDescriptor, usage));
    LOG_TRACE("extract_buffer_descriptor: [WMAS.WWST]size: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferDescriptor, size));
    LOG_TRACE("extract_buffer_descriptor: [WMAS.WWST]mappedAtCreation: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUBufferDescriptor, mappedAtCreation));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUBufferDescriptor *ha_wasm_struct_ptr = (WasmWGPUBufferDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_buffer_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUBufferDescriptor (%p) = [HMAS.WWST]WasmWGPUBufferDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_buffer_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_buffer_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_buffer_descriptor: [HMAS.WWST]usage: (%p)", (void *)&ha_wasm_struct_ptr->usage);
    LOG_TRACE("extract_buffer_descriptor: [HMAS.WWST]size: (%p)", (void *)&ha_wasm_struct_ptr->size);
    LOG_TRACE("extract_buffer_descriptor: [HMAS.WWST]mappedAtCreation: (%p)", (void *)&ha_wasm_struct_ptr->mappedAtCreation);

    /* Dereference out_ha_host_struct_ptr */
    WGPUBufferDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_buffer_descriptor: allocating [*HMAS.HWST] (%p) as WGPUBufferDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUBufferDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_buffer_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_buffer_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_buffer_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_buffer_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_buffer_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_buffer_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_buffer_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_buffer_descriptor: extracting [Embedded<bitflag>] usage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->usage, (void *)&ha_host_struct_ptr->usage);
    ha_host_struct_ptr->usage = ha_wasm_struct_ptr->usage;

    LOG_TRACE("extract_buffer_descriptor: extracting [Embedded<uint64>] size: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->size, (void *)&ha_host_struct_ptr->size);
    ha_host_struct_ptr->size = ha_wasm_struct_ptr->size;

    LOG_TRACE("extract_buffer_descriptor: extracting [Embedded<bool>] mappedAtCreation: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mappedAtCreation, (void *)&ha_host_struct_ptr->mappedAtCreation);
    ha_host_struct_ptr->mappedAtCreation = ha_wasm_struct_ptr->mappedAtCreation;

    return 0;
}

int extract_constant_entry(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUConstantEntry **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_constant_entry: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_constant_entry: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_constant_entry: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_constant_entry: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUConstantEntry, nextInChain));
    LOG_TRACE("extract_constant_entry: [WMAS.WWST]key: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUConstantEntry, key));
    LOG_TRACE("extract_constant_entry: [WMAS.WWST]value: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUConstantEntry, value));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUConstantEntry *ha_wasm_struct_ptr = (WasmWGPUConstantEntry *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_constant_entry: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUConstantEntry (%p) = [HMAS.WWST]WasmWGPUConstantEntry: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_constant_entry: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_constant_entry: [HMAS.WWST]key: (%p)", (void *)&ha_wasm_struct_ptr->key);
    LOG_TRACE("extract_constant_entry: [HMAS.WWST]value: (%p)", (void *)&ha_wasm_struct_ptr->value);

    /* Dereference out_ha_host_struct_ptr */
    WGPUConstantEntry *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_constant_entry: allocating [*HMAS.HWST] (%p) as WGPUConstantEntry", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUConstantEntry));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_constant_entry: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_constant_entry: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_constant_entry: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_constant_entry: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_constant_entry: extract_chained_struct failed");
    }

    LOG_TRACE("extract_constant_entry: extracting [Embedded<string>] key: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->key, (void *)&ha_host_struct_ptr->key);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->key, &ha_host_struct_ptr->key, 65534)) {
        LOG_WARN("extract_constant_entry: wasm_safe_copy_string_null_terminated failed for key");
    }

    LOG_TRACE("extract_constant_entry: extracting [Embedded<float64>] value: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->value, (void *)&ha_host_struct_ptr->value);
    ha_host_struct_ptr->value = ha_wasm_struct_ptr->value;

    return 0;
}

int extract_command_buffer_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCommandBufferDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_command_buffer_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_command_buffer_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_command_buffer_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_command_buffer_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCommandBufferDescriptor, nextInChain));
    LOG_TRACE("extract_command_buffer_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCommandBufferDescriptor, label));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUCommandBufferDescriptor *ha_wasm_struct_ptr = (WasmWGPUCommandBufferDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_command_buffer_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUCommandBufferDescriptor (%p) = [HMAS.WWST]WasmWGPUCommandBufferDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_command_buffer_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_command_buffer_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);

    /* Dereference out_ha_host_struct_ptr */
    WGPUCommandBufferDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_command_buffer_descriptor: allocating [*HMAS.HWST] (%p) as WGPUCommandBufferDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUCommandBufferDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_command_buffer_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_command_buffer_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_command_buffer_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_command_buffer_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_command_buffer_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_command_buffer_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_command_buffer_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    return 0;
}

int extract_command_encoder_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCommandEncoderDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_command_encoder_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_command_encoder_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_command_encoder_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_command_encoder_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCommandEncoderDescriptor, nextInChain));
    LOG_TRACE("extract_command_encoder_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCommandEncoderDescriptor, label));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUCommandEncoderDescriptor *ha_wasm_struct_ptr = (WasmWGPUCommandEncoderDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_command_encoder_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUCommandEncoderDescriptor (%p) = [HMAS.WWST]WasmWGPUCommandEncoderDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_command_encoder_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_command_encoder_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);

    /* Dereference out_ha_host_struct_ptr */
    WGPUCommandEncoderDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_command_encoder_descriptor: allocating [*HMAS.HWST] (%p) as WGPUCommandEncoderDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUCommandEncoderDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_command_encoder_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_command_encoder_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_command_encoder_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_command_encoder_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_command_encoder_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_command_encoder_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_command_encoder_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    return 0;
}

int extract_compilation_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCompilationInfo **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_compilation_info: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_compilation_info: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_compilation_info: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_compilation_info: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationInfo, nextInChain));
    LOG_TRACE("extract_compilation_info: [WMAS.WWST]messageCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationInfo, messageCount));
    LOG_TRACE("extract_compilation_info: [WMAS.WWST]messages: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationInfo, messages));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUCompilationInfo *ha_wasm_struct_ptr = (WasmWGPUCompilationInfo *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_compilation_info: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUCompilationInfo (%p) = [HMAS.WWST]WasmWGPUCompilationInfo: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_compilation_info: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_compilation_info: [HMAS.WWST]messageCount: (%p)", (void *)&ha_wasm_struct_ptr->messageCount);
    LOG_TRACE("extract_compilation_info: [HMAS.WWST]messages: (%p)", (void *)&ha_wasm_struct_ptr->messages);

    /* Dereference out_ha_host_struct_ptr */
    WGPUCompilationInfo *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_compilation_info: allocating [*HMAS.HWST] (%p) as WGPUCompilationInfo", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUCompilationInfo));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_compilation_info: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_compilation_info: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_compilation_info: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_compilation_info: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_compilation_info: extract_chained_struct failed");
    }

    LOG_TRACE("extract_compilation_info: extracting [Embedded<count>] messageCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->messageCount, (void *)&ha_host_struct_ptr->messageCount);
    ha_host_struct_ptr->messageCount = ha_wasm_struct_ptr->messageCount;

    LOG_TRACE("extract_compilation_info: extracting [Array<struct>] messages: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->messages, (void *)&ha_host_struct_ptr->messages);
    /* TODO: Implement SAFE pointer extraction */
    WGPUCompilationMessage *compilation_message_array_proto = calloc(ha_host_struct_ptr->messageCount, sizeof(WGPUCompilationMessage));
    if (compilation_message_array_proto == NULL) {
        FATAL("extract_compilation_info: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->messageCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->messages + i * sizeof(WasmWGPUCompilationMessage);
        LOG_TRACE("extract_compilation_info: copying struct at wasm-address %p into compilation_message_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUCompilationMessage *proto_i_ptr = &compilation_message_array_proto[i];
        if (extract_compilation_message(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_compilation_info: extract_compilation_message at index %d failed", i);
        }
    }
    ha_host_struct_ptr->messages = compilation_message_array_proto;

    return 0;
}

int extract_compilation_message(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUCompilationMessage **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_compilation_message: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_compilation_message: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_compilation_message: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, nextInChain));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]message: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, message));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]type: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, type));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]lineNum: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, lineNum));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]linePos: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, linePos));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]offset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, offset));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]length: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, length));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]utf16LinePos: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, utf16LinePos));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]utf16Offset: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, utf16Offset));
    LOG_TRACE("extract_compilation_message: [WMAS.WWST]utf16Length: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUCompilationMessage, utf16Length));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUCompilationMessage *ha_wasm_struct_ptr = (WasmWGPUCompilationMessage *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_compilation_message: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUCompilationMessage (%p) = [HMAS.WWST]WasmWGPUCompilationMessage: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]message: (%p)", (void *)&ha_wasm_struct_ptr->message);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]type: (%p)", (void *)&ha_wasm_struct_ptr->type);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]lineNum: (%p)", (void *)&ha_wasm_struct_ptr->lineNum);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]linePos: (%p)", (void *)&ha_wasm_struct_ptr->linePos);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]offset: (%p)", (void *)&ha_wasm_struct_ptr->offset);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]length: (%p)", (void *)&ha_wasm_struct_ptr->length);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]utf16LinePos: (%p)", (void *)&ha_wasm_struct_ptr->utf16LinePos);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]utf16Offset: (%p)", (void *)&ha_wasm_struct_ptr->utf16Offset);
    LOG_TRACE("extract_compilation_message: [HMAS.WWST]utf16Length: (%p)", (void *)&ha_wasm_struct_ptr->utf16Length);

    /* Dereference out_ha_host_struct_ptr */
    WGPUCompilationMessage *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_compilation_message: allocating [*HMAS.HWST] (%p) as WGPUCompilationMessage", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUCompilationMessage));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_compilation_message: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_compilation_message: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_compilation_message: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_compilation_message: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_compilation_message: extract_chained_struct failed");
    }

    LOG_TRACE("extract_compilation_message: extracting [Embedded<string>] message: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->message, (void *)&ha_host_struct_ptr->message);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->message, &ha_host_struct_ptr->message, 65534)) {
        LOG_WARN("extract_compilation_message: wasm_safe_copy_string_null_terminated failed for message");
    }

    LOG_TRACE("extract_compilation_message: extracting [Embedded<enum>] type: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->type, (void *)&ha_host_struct_ptr->type);
    ha_host_struct_ptr->type = ha_wasm_struct_ptr->type;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] lineNum: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->lineNum, (void *)&ha_host_struct_ptr->lineNum);
    ha_host_struct_ptr->lineNum = ha_wasm_struct_ptr->lineNum;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] linePos: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->linePos, (void *)&ha_host_struct_ptr->linePos);
    ha_host_struct_ptr->linePos = ha_wasm_struct_ptr->linePos;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] offset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->offset, (void *)&ha_host_struct_ptr->offset);
    ha_host_struct_ptr->offset = ha_wasm_struct_ptr->offset;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] length: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->length, (void *)&ha_host_struct_ptr->length);
    ha_host_struct_ptr->length = ha_wasm_struct_ptr->length;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] utf16LinePos: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->utf16LinePos, (void *)&ha_host_struct_ptr->utf16LinePos);
    ha_host_struct_ptr->utf16LinePos = ha_wasm_struct_ptr->utf16LinePos;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] utf16Offset: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->utf16Offset, (void *)&ha_host_struct_ptr->utf16Offset);
    ha_host_struct_ptr->utf16Offset = ha_wasm_struct_ptr->utf16Offset;

    LOG_TRACE("extract_compilation_message: extracting [Embedded<uint64>] utf16Length: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->utf16Length, (void *)&ha_host_struct_ptr->utf16Length);
    ha_host_struct_ptr->utf16Length = ha_wasm_struct_ptr->utf16Length;

    return 0;
}

int extract_compute_pass_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePassDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_compute_pass_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_compute_pass_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_compute_pass_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pass_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassDescriptor, nextInChain));
    LOG_TRACE("extract_compute_pass_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassDescriptor, label));
    LOG_TRACE("extract_compute_pass_descriptor: [WMAS.WWST]timestampWrites: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePassDescriptor, timestampWrites));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUComputePassDescriptor *ha_wasm_struct_ptr = (WasmWGPUComputePassDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_compute_pass_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUComputePassDescriptor (%p) = [HMAS.WWST]WasmWGPUComputePassDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pass_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_compute_pass_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_compute_pass_descriptor: [HMAS.WWST]timestampWrites: (%p)", (void *)&ha_wasm_struct_ptr->timestampWrites);

    /* Dereference out_ha_host_struct_ptr */
    WGPUComputePassDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_compute_pass_descriptor: allocating [*HMAS.HWST] (%p) as WGPUComputePassDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUComputePassDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_compute_pass_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_compute_pass_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_compute_pass_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_compute_pass_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_compute_pass_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_compute_pass_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_compute_pass_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_compute_pass_descriptor: extracting [Pointer<struct>] timestampWrites: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->timestampWrites, (void *)&ha_host_struct_ptr->timestampWrites);
    if (extract_compute_pass_timestamp_writes(registry, memory, (byte_t *)ha_wasm_struct_ptr->timestampWrites, &ha_host_struct_ptr->timestampWrites)) {
        LOG_WARN("extract_compute_pass_descriptor: extract_compute_pass_timestamp_writes failed");
    }

    return 0;
}

int extract_compute_pipeline_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUComputePipelineDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_compute_pipeline_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_compute_pipeline_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_compute_pipeline_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pipeline_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePipelineDescriptor, nextInChain));
    LOG_TRACE("extract_compute_pipeline_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePipelineDescriptor, label));
    LOG_TRACE("extract_compute_pipeline_descriptor: [WMAS.WWST]layout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePipelineDescriptor, layout));
    LOG_TRACE("extract_compute_pipeline_descriptor: [WMAS.WWST]compute: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUComputePipelineDescriptor, compute));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUComputePipelineDescriptor *ha_wasm_struct_ptr = (WasmWGPUComputePipelineDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_compute_pipeline_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUComputePipelineDescriptor (%p) = [HMAS.WWST]WasmWGPUComputePipelineDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_compute_pipeline_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_compute_pipeline_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_compute_pipeline_descriptor: [HMAS.WWST]layout: (%p)", (void *)&ha_wasm_struct_ptr->layout);
    LOG_TRACE("extract_compute_pipeline_descriptor: [HMAS.WWST]compute: (%p)", (void *)&ha_wasm_struct_ptr->compute);

    /* Dereference out_ha_host_struct_ptr */
    WGPUComputePipelineDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_compute_pipeline_descriptor: allocating [*HMAS.HWST] (%p) as WGPUComputePipelineDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUComputePipelineDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_compute_pipeline_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_compute_pipeline_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_compute_pipeline_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_compute_pipeline_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_compute_pipeline_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_compute_pipeline_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_compute_pipeline_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_compute_pipeline_descriptor: extracting [Embedded<object>] layout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layout, (void *)&ha_host_struct_ptr->layout);
    ha_host_struct_ptr->layout = (WGPUPipelineLayout)registry_item_get_mapping(&registry->pipelineLayouts, ha_wasm_struct_ptr->layout);

    LOG_TRACE("extract_compute_pipeline_descriptor: extracting [Embedded<struct>] compute: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->compute, (void *)&ha_host_struct_ptr->compute);
    WGPUProgrammableStageDescriptor *compute_ptr = &ha_host_struct_ptr->compute;
    if (extract_programmable_stage_descriptor(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUComputePipelineDescriptor, compute), &compute_ptr)) {
        LOG_WARN("extract_compute_pipeline_descriptor: extract_programmable_stage_descriptor failed");
    }

    return 0;
}

int extract_required_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURequiredLimits **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_required_limits: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_required_limits: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_required_limits: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_required_limits: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequiredLimits, nextInChain));
    LOG_TRACE("extract_required_limits: [WMAS.WWST]limits: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURequiredLimits, limits));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURequiredLimits *ha_wasm_struct_ptr = (WasmWGPURequiredLimits *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_required_limits: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURequiredLimits (%p) = [HMAS.WWST]WasmWGPURequiredLimits: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_required_limits: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_required_limits: [HMAS.WWST]limits: (%p)", (void *)&ha_wasm_struct_ptr->limits);

    /* Dereference out_ha_host_struct_ptr */
    WGPURequiredLimits *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_required_limits: allocating [*HMAS.HWST] (%p) as WGPURequiredLimits", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURequiredLimits));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_required_limits: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_required_limits: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_required_limits: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_required_limits: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_required_limits: extract_chained_struct failed");
    }

    LOG_TRACE("extract_required_limits: extracting [Embedded<struct>] limits: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->limits, (void *)&ha_host_struct_ptr->limits);
    WGPULimits *limits_ptr = &ha_host_struct_ptr->limits;
    if (extract_limits(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPURequiredLimits, limits), &limits_ptr)) {
        LOG_WARN("extract_required_limits: extract_limits failed");
    }

    return 0;
}

int extract_image_copy_buffer(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUImageCopyBuffer **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_image_copy_buffer: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_image_copy_buffer: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_image_copy_buffer: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_image_copy_buffer: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyBuffer, nextInChain));
    LOG_TRACE("extract_image_copy_buffer: [WMAS.WWST]layout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyBuffer, layout));
    LOG_TRACE("extract_image_copy_buffer: [WMAS.WWST]buffer: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyBuffer, buffer));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUImageCopyBuffer *ha_wasm_struct_ptr = (WasmWGPUImageCopyBuffer *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_image_copy_buffer: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUImageCopyBuffer (%p) = [HMAS.WWST]WasmWGPUImageCopyBuffer: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_image_copy_buffer: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_image_copy_buffer: [HMAS.WWST]layout: (%p)", (void *)&ha_wasm_struct_ptr->layout);
    LOG_TRACE("extract_image_copy_buffer: [HMAS.WWST]buffer: (%p)", (void *)&ha_wasm_struct_ptr->buffer);

    /* Dereference out_ha_host_struct_ptr */
    WGPUImageCopyBuffer *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_image_copy_buffer: allocating [*HMAS.HWST] (%p) as WGPUImageCopyBuffer", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUImageCopyBuffer));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_image_copy_buffer: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_image_copy_buffer: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_image_copy_buffer: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_image_copy_buffer: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_image_copy_buffer: extract_chained_struct failed");
    }

    LOG_TRACE("extract_image_copy_buffer: extracting [Embedded<struct>] layout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layout, (void *)&ha_host_struct_ptr->layout);
    WGPUTextureDataLayout *layout_ptr = &ha_host_struct_ptr->layout;
    if (extract_texture_data_layout(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyBuffer, layout), &layout_ptr)) {
        LOG_WARN("extract_image_copy_buffer: extract_texture_data_layout failed");
    }

    LOG_TRACE("extract_image_copy_buffer: extracting [Embedded<object>] buffer: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->buffer, (void *)&ha_host_struct_ptr->buffer);
    ha_host_struct_ptr->buffer = (WGPUBuffer)registry_item_get_mapping(&registry->buffers, ha_wasm_struct_ptr->buffer);

    return 0;
}

int extract_image_copy_texture(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUImageCopyTexture **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_image_copy_texture: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_image_copy_texture: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_image_copy_texture: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_image_copy_texture: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, nextInChain));
    LOG_TRACE("extract_image_copy_texture: [WMAS.WWST]texture: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, texture));
    LOG_TRACE("extract_image_copy_texture: [WMAS.WWST]mipLevel: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, mipLevel));
    LOG_TRACE("extract_image_copy_texture: [WMAS.WWST]origin: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, origin));
    LOG_TRACE("extract_image_copy_texture: [WMAS.WWST]aspect: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, aspect));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUImageCopyTexture *ha_wasm_struct_ptr = (WasmWGPUImageCopyTexture *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_image_copy_texture: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUImageCopyTexture (%p) = [HMAS.WWST]WasmWGPUImageCopyTexture: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_image_copy_texture: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_image_copy_texture: [HMAS.WWST]texture: (%p)", (void *)&ha_wasm_struct_ptr->texture);
    LOG_TRACE("extract_image_copy_texture: [HMAS.WWST]mipLevel: (%p)", (void *)&ha_wasm_struct_ptr->mipLevel);
    LOG_TRACE("extract_image_copy_texture: [HMAS.WWST]origin: (%p)", (void *)&ha_wasm_struct_ptr->origin);
    LOG_TRACE("extract_image_copy_texture: [HMAS.WWST]aspect: (%p)", (void *)&ha_wasm_struct_ptr->aspect);

    /* Dereference out_ha_host_struct_ptr */
    WGPUImageCopyTexture *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_image_copy_texture: allocating [*HMAS.HWST] (%p) as WGPUImageCopyTexture", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUImageCopyTexture));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_image_copy_texture: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_image_copy_texture: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_image_copy_texture: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_image_copy_texture: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_image_copy_texture: extract_chained_struct failed");
    }

    LOG_TRACE("extract_image_copy_texture: extracting [Embedded<object>] texture: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->texture, (void *)&ha_host_struct_ptr->texture);
    ha_host_struct_ptr->texture = (WGPUTexture)registry_item_get_mapping(&registry->textures, ha_wasm_struct_ptr->texture);

    LOG_TRACE("extract_image_copy_texture: extracting [Embedded<uint32>] mipLevel: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mipLevel, (void *)&ha_host_struct_ptr->mipLevel);
    ha_host_struct_ptr->mipLevel = ha_wasm_struct_ptr->mipLevel;

    LOG_TRACE("extract_image_copy_texture: extracting [Embedded<struct>] origin: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->origin, (void *)&ha_host_struct_ptr->origin);
    WGPUOrigin3D *origin_ptr = &ha_host_struct_ptr->origin;
    if (extract_origin_3D(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUImageCopyTexture, origin), &origin_ptr)) {
        LOG_WARN("extract_image_copy_texture: extract_origin_3D failed");
    }

    LOG_TRACE("extract_image_copy_texture: extracting [Embedded<enum>] aspect: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->aspect, (void *)&ha_host_struct_ptr->aspect);
    ha_host_struct_ptr->aspect = ha_wasm_struct_ptr->aspect;

    return 0;
}

int extract_instance_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUInstanceDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_instance_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_instance_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_instance_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_instance_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUInstanceDescriptor, nextInChain));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUInstanceDescriptor *ha_wasm_struct_ptr = (WasmWGPUInstanceDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_instance_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUInstanceDescriptor (%p) = [HMAS.WWST]WasmWGPUInstanceDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_instance_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);

    /* Dereference out_ha_host_struct_ptr */
    WGPUInstanceDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_instance_descriptor: allocating [*HMAS.HWST] (%p) as WGPUInstanceDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUInstanceDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_instance_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_instance_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_instance_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_instance_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_instance_descriptor: extract_chained_struct failed");
    }

    return 0;
}

int extract_pipeline_layout_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPipelineLayoutDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_pipeline_layout_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_pipeline_layout_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_pipeline_layout_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_pipeline_layout_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPipelineLayoutDescriptor, nextInChain));
    LOG_TRACE("extract_pipeline_layout_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPipelineLayoutDescriptor, label));
    LOG_TRACE("extract_pipeline_layout_descriptor: [WMAS.WWST]bindGroupLayoutCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPipelineLayoutDescriptor, bindGroupLayoutCount));
    LOG_TRACE("extract_pipeline_layout_descriptor: [WMAS.WWST]bindGroupLayouts: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPipelineLayoutDescriptor, bindGroupLayouts));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUPipelineLayoutDescriptor *ha_wasm_struct_ptr = (WasmWGPUPipelineLayoutDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_pipeline_layout_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUPipelineLayoutDescriptor (%p) = [HMAS.WWST]WasmWGPUPipelineLayoutDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_pipeline_layout_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_pipeline_layout_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_pipeline_layout_descriptor: [HMAS.WWST]bindGroupLayoutCount: (%p)", (void *)&ha_wasm_struct_ptr->bindGroupLayoutCount);
    LOG_TRACE("extract_pipeline_layout_descriptor: [HMAS.WWST]bindGroupLayouts: (%p)", (void *)&ha_wasm_struct_ptr->bindGroupLayouts);

    /* Dereference out_ha_host_struct_ptr */
    WGPUPipelineLayoutDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_pipeline_layout_descriptor: allocating [*HMAS.HWST] (%p) as WGPUPipelineLayoutDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUPipelineLayoutDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_pipeline_layout_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_pipeline_layout_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_pipeline_layout_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_pipeline_layout_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_pipeline_layout_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_pipeline_layout_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_pipeline_layout_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_pipeline_layout_descriptor: extracting [Embedded<count>] bindGroupLayoutCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->bindGroupLayoutCount, (void *)&ha_host_struct_ptr->bindGroupLayoutCount);
    ha_host_struct_ptr->bindGroupLayoutCount = ha_wasm_struct_ptr->bindGroupLayoutCount;

    LOG_TRACE("extract_pipeline_layout_descriptor: extracting [Array<object>] bindGroupLayouts: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->bindGroupLayouts, (void *)&ha_host_struct_ptr->bindGroupLayouts);
    /* TODO: Implement SAFE pointer extraction */
    WGPUBindGroupLayout *bind_group_layout_array_proto = calloc(ha_host_struct_ptr->bindGroupLayoutCount, sizeof(WGPUBindGroupLayout));
    if (bind_group_layout_array_proto == NULL) {
        FATAL("extract_pipeline_layout_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->bindGroupLayoutCount; i++) {
        WASM_POINTER_OBJECT_C_TYPE *ha_wasm_ptr_i = (WASM_POINTER_OBJECT_C_TYPE *)ha_wasm_struct_ptr->bindGroupLayouts + i * sizeof(WASM_POINTER_OBJECT_C_TYPE);
        LOG_TRACE("extract_pipeline_layout_descriptor: copying data at %p into bind_group_layout_array_proto[%d]", ha_wasm_ptr_i, i);
        bind_group_layout_array_proto[i] = (WGPUBindGroupLayout)registry_item_get_mapping(&registry->bindGroupLayouts, *ha_wasm_ptr_i);
    }
    ha_host_struct_ptr->bindGroupLayouts = bind_group_layout_array_proto;

    return 0;
}

int extract_query_set_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUQuerySetDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_query_set_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_query_set_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_query_set_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_query_set_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQuerySetDescriptor, nextInChain));
    LOG_TRACE("extract_query_set_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQuerySetDescriptor, label));
    LOG_TRACE("extract_query_set_descriptor: [WMAS.WWST]type: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQuerySetDescriptor, type));
    LOG_TRACE("extract_query_set_descriptor: [WMAS.WWST]count: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUQuerySetDescriptor, count));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUQuerySetDescriptor *ha_wasm_struct_ptr = (WasmWGPUQuerySetDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_query_set_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUQuerySetDescriptor (%p) = [HMAS.WWST]WasmWGPUQuerySetDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_query_set_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_query_set_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_query_set_descriptor: [HMAS.WWST]type: (%p)", (void *)&ha_wasm_struct_ptr->type);
    LOG_TRACE("extract_query_set_descriptor: [HMAS.WWST]count: (%p)", (void *)&ha_wasm_struct_ptr->count);

    /* Dereference out_ha_host_struct_ptr */
    WGPUQuerySetDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_query_set_descriptor: allocating [*HMAS.HWST] (%p) as WGPUQuerySetDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUQuerySetDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_query_set_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_query_set_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_query_set_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_query_set_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_query_set_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_query_set_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_query_set_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_query_set_descriptor: extracting [Embedded<enum>] type: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->type, (void *)&ha_host_struct_ptr->type);
    ha_host_struct_ptr->type = ha_wasm_struct_ptr->type;

    LOG_TRACE("extract_query_set_descriptor: extracting [Embedded<uint32>] count: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->count, (void *)&ha_host_struct_ptr->count);
    ha_host_struct_ptr->count = ha_wasm_struct_ptr->count;

    return 0;
}

int extract_render_bundle_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderBundleDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_bundle_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_bundle_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_bundle_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_bundle_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleDescriptor, nextInChain));
    LOG_TRACE("extract_render_bundle_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleDescriptor, label));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderBundleDescriptor *ha_wasm_struct_ptr = (WasmWGPURenderBundleDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_bundle_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderBundleDescriptor (%p) = [HMAS.WWST]WasmWGPURenderBundleDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_bundle_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_render_bundle_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderBundleDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_bundle_descriptor: allocating [*HMAS.HWST] (%p) as WGPURenderBundleDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderBundleDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_bundle_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_bundle_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_bundle_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_bundle_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_render_bundle_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_bundle_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_render_bundle_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    return 0;
}

int extract_render_bundle_encoder_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderBundleEncoderDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_bundle_encoder_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_bundle_encoder_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_bundle_encoder_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, nextInChain));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, label));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]colorFormatCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, colorFormatCount));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]colorFormats: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, colorFormats));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]depthStencilFormat: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, depthStencilFormat));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]sampleCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, sampleCount));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]depthReadOnly: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, depthReadOnly));
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [WMAS.WWST]stencilReadOnly: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderBundleEncoderDescriptor, stencilReadOnly));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderBundleEncoderDescriptor *ha_wasm_struct_ptr = (WasmWGPURenderBundleEncoderDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderBundleEncoderDescriptor (%p) = [HMAS.WWST]WasmWGPURenderBundleEncoderDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]colorFormatCount: (%p)", (void *)&ha_wasm_struct_ptr->colorFormatCount);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]colorFormats: (%p)", (void *)&ha_wasm_struct_ptr->colorFormats);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]depthStencilFormat: (%p)", (void *)&ha_wasm_struct_ptr->depthStencilFormat);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]sampleCount: (%p)", (void *)&ha_wasm_struct_ptr->sampleCount);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]depthReadOnly: (%p)", (void *)&ha_wasm_struct_ptr->depthReadOnly);
    LOG_TRACE("extract_render_bundle_encoder_descriptor: [HMAS.WWST]stencilReadOnly: (%p)", (void *)&ha_wasm_struct_ptr->stencilReadOnly);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderBundleEncoderDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_bundle_encoder_descriptor: allocating [*HMAS.HWST] (%p) as WGPURenderBundleEncoderDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderBundleEncoderDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_bundle_encoder_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_bundle_encoder_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_render_bundle_encoder_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_render_bundle_encoder_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<count>] colorFormatCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->colorFormatCount, (void *)&ha_host_struct_ptr->colorFormatCount);
    ha_host_struct_ptr->colorFormatCount = ha_wasm_struct_ptr->colorFormatCount;

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Array<enum>] colorFormats: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->colorFormats, (void *)&ha_host_struct_ptr->colorFormats);
    /* TODO: Implement SAFE pointer extraction */
    WGPUTextureFormat *texture_format_array_proto = calloc(ha_host_struct_ptr->colorFormatCount, sizeof(int));
    if (texture_format_array_proto == NULL) {
        FATAL("extract_render_bundle_encoder_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->colorFormatCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->colorFormats + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_render_bundle_encoder_descriptor: copying data at %p into texture_format_array_proto[%d]", ha_wasm_ptr_i, i);
        texture_format_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->colorFormats = texture_format_array_proto;

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<enum>] depthStencilFormat: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthStencilFormat, (void *)&ha_host_struct_ptr->depthStencilFormat);
    ha_host_struct_ptr->depthStencilFormat = ha_wasm_struct_ptr->depthStencilFormat;

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<uint32>] sampleCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->sampleCount, (void *)&ha_host_struct_ptr->sampleCount);
    ha_host_struct_ptr->sampleCount = ha_wasm_struct_ptr->sampleCount;

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<bool>] depthReadOnly: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthReadOnly, (void *)&ha_host_struct_ptr->depthReadOnly);
    ha_host_struct_ptr->depthReadOnly = ha_wasm_struct_ptr->depthReadOnly;

    LOG_TRACE("extract_render_bundle_encoder_descriptor: extracting [Embedded<bool>] stencilReadOnly: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilReadOnly, (void *)&ha_host_struct_ptr->stencilReadOnly);
    ha_host_struct_ptr->stencilReadOnly = ha_wasm_struct_ptr->stencilReadOnly;

    return 0;
}

int extract_render_pass_color_attachment(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassColorAttachment **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pass_color_attachment: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pass_color_attachment: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pass_color_attachment: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, nextInChain));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]view: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, view));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]depthSlice: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, depthSlice));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]resolveTarget: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, resolveTarget));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]loadOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, loadOp));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]storeOp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, storeOp));
    LOG_TRACE("extract_render_pass_color_attachment: [WMAS.WWST]clearValue: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, clearValue));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPassColorAttachment *ha_wasm_struct_ptr = (WasmWGPURenderPassColorAttachment *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pass_color_attachment: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPassColorAttachment (%p) = [HMAS.WWST]WasmWGPURenderPassColorAttachment: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]view: (%p)", (void *)&ha_wasm_struct_ptr->view);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]depthSlice: (%p)", (void *)&ha_wasm_struct_ptr->depthSlice);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]resolveTarget: (%p)", (void *)&ha_wasm_struct_ptr->resolveTarget);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]loadOp: (%p)", (void *)&ha_wasm_struct_ptr->loadOp);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]storeOp: (%p)", (void *)&ha_wasm_struct_ptr->storeOp);
    LOG_TRACE("extract_render_pass_color_attachment: [HMAS.WWST]clearValue: (%p)", (void *)&ha_wasm_struct_ptr->clearValue);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPassColorAttachment *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pass_color_attachment: allocating [*HMAS.HWST] (%p) as WGPURenderPassColorAttachment", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPassColorAttachment));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pass_color_attachment: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pass_color_attachment: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pass_color_attachment: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_render_pass_color_attachment: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<object>] view: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->view, (void *)&ha_host_struct_ptr->view);
    ha_host_struct_ptr->view = (WGPUTextureView)registry_item_get_mapping(&registry->textureViews, ha_wasm_struct_ptr->view);

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<uint32>] depthSlice: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthSlice, (void *)&ha_host_struct_ptr->depthSlice);
    ha_host_struct_ptr->depthSlice = ha_wasm_struct_ptr->depthSlice;

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<object>] resolveTarget: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->resolveTarget, (void *)&ha_host_struct_ptr->resolveTarget);
    ha_host_struct_ptr->resolveTarget = (WGPUTextureView)registry_item_get_mapping(&registry->textureViews, ha_wasm_struct_ptr->resolveTarget);

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<enum>] loadOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->loadOp, (void *)&ha_host_struct_ptr->loadOp);
    ha_host_struct_ptr->loadOp = ha_wasm_struct_ptr->loadOp;

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<enum>] storeOp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->storeOp, (void *)&ha_host_struct_ptr->storeOp);
    ha_host_struct_ptr->storeOp = ha_wasm_struct_ptr->storeOp;

    LOG_TRACE("extract_render_pass_color_attachment: extracting [Embedded<struct>] clearValue: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->clearValue, (void *)&ha_host_struct_ptr->clearValue);
    WGPUColor *clear_value_ptr = &ha_host_struct_ptr->clearValue;
    if (extract_color(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPURenderPassColorAttachment, clearValue), &clear_value_ptr)) {
        LOG_WARN("extract_render_pass_color_attachment: extract_color failed");
    }

    return 0;
}

int extract_render_pass_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pass_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pass_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pass_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, nextInChain));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, label));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]colorAttachmentCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, colorAttachmentCount));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]colorAttachments: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, colorAttachments));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]depthStencilAttachment: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, depthStencilAttachment));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]occlusionQuerySet: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, occlusionQuerySet));
    LOG_TRACE("extract_render_pass_descriptor: [WMAS.WWST]timestampWrites: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptor, timestampWrites));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPassDescriptor *ha_wasm_struct_ptr = (WasmWGPURenderPassDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pass_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPassDescriptor (%p) = [HMAS.WWST]WasmWGPURenderPassDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]colorAttachmentCount: (%p)", (void *)&ha_wasm_struct_ptr->colorAttachmentCount);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]colorAttachments: (%p)", (void *)&ha_wasm_struct_ptr->colorAttachments);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]depthStencilAttachment: (%p)", (void *)&ha_wasm_struct_ptr->depthStencilAttachment);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]occlusionQuerySet: (%p)", (void *)&ha_wasm_struct_ptr->occlusionQuerySet);
    LOG_TRACE("extract_render_pass_descriptor: [HMAS.WWST]timestampWrites: (%p)", (void *)&ha_wasm_struct_ptr->timestampWrites);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPassDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pass_descriptor: allocating [*HMAS.HWST] (%p) as WGPURenderPassDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPassDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pass_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pass_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pass_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pass_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_render_pass_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_pass_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_render_pass_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_render_pass_descriptor: extracting [Embedded<count>] colorAttachmentCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->colorAttachmentCount, (void *)&ha_host_struct_ptr->colorAttachmentCount);
    ha_host_struct_ptr->colorAttachmentCount = ha_wasm_struct_ptr->colorAttachmentCount;

    LOG_TRACE("extract_render_pass_descriptor: extracting [Array<struct>] colorAttachments: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->colorAttachments, (void *)&ha_host_struct_ptr->colorAttachments);
    /* TODO: Implement SAFE pointer extraction */
    WGPURenderPassColorAttachment *render_pass_color_attachment_array_proto = calloc(ha_host_struct_ptr->colorAttachmentCount, sizeof(WGPURenderPassColorAttachment));
    if (render_pass_color_attachment_array_proto == NULL) {
        FATAL("extract_render_pass_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->colorAttachmentCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->colorAttachments + i * sizeof(WasmWGPURenderPassColorAttachment);
        LOG_TRACE("extract_render_pass_descriptor: copying struct at wasm-address %p into render_pass_color_attachment_array_proto[%d]", wa_wasm_offset_i, i);
        WGPURenderPassColorAttachment *proto_i_ptr = &render_pass_color_attachment_array_proto[i];
        if (extract_render_pass_color_attachment(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_render_pass_descriptor: extract_render_pass_color_attachment at index %d failed", i);
        }
    }
    ha_host_struct_ptr->colorAttachments = render_pass_color_attachment_array_proto;

    LOG_TRACE("extract_render_pass_descriptor: extracting [Pointer<struct>] depthStencilAttachment: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthStencilAttachment, (void *)&ha_host_struct_ptr->depthStencilAttachment);
    if (extract_render_pass_depth_stencil_attachment(registry, memory, (byte_t *)ha_wasm_struct_ptr->depthStencilAttachment, &ha_host_struct_ptr->depthStencilAttachment)) {
        LOG_WARN("extract_render_pass_descriptor: extract_render_pass_depth_stencil_attachment failed");
    }

    LOG_TRACE("extract_render_pass_descriptor: extracting [Embedded<object>] occlusionQuerySet: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->occlusionQuerySet, (void *)&ha_host_struct_ptr->occlusionQuerySet);
    ha_host_struct_ptr->occlusionQuerySet = (WGPUQuerySet)registry_item_get_mapping(&registry->querySets, ha_wasm_struct_ptr->occlusionQuerySet);

    LOG_TRACE("extract_render_pass_descriptor: extracting [Pointer<struct>] timestampWrites: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->timestampWrites, (void *)&ha_host_struct_ptr->timestampWrites);
    if (extract_render_pass_timestamp_writes(registry, memory, (byte_t *)ha_wasm_struct_ptr->timestampWrites, &ha_host_struct_ptr->timestampWrites)) {
        LOG_WARN("extract_render_pass_descriptor: extract_render_pass_timestamp_writes failed");
    }

    return 0;
}

int extract_vertex_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUVertexState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_vertex_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_vertex_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_vertex_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, nextInChain));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]module: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, module));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]entryPoint: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, entryPoint));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]constantCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, constantCount));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]constants: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, constants));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]bufferCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, bufferCount));
    LOG_TRACE("extract_vertex_state: [WMAS.WWST]buffers: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUVertexState, buffers));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUVertexState *ha_wasm_struct_ptr = (WasmWGPUVertexState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_vertex_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUVertexState (%p) = [HMAS.WWST]WasmWGPUVertexState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]module: (%p)", (void *)&ha_wasm_struct_ptr->module);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]entryPoint: (%p)", (void *)&ha_wasm_struct_ptr->entryPoint);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]constantCount: (%p)", (void *)&ha_wasm_struct_ptr->constantCount);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]constants: (%p)", (void *)&ha_wasm_struct_ptr->constants);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]bufferCount: (%p)", (void *)&ha_wasm_struct_ptr->bufferCount);
    LOG_TRACE("extract_vertex_state: [HMAS.WWST]buffers: (%p)", (void *)&ha_wasm_struct_ptr->buffers);

    /* Dereference out_ha_host_struct_ptr */
    WGPUVertexState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_vertex_state: allocating [*HMAS.HWST] (%p) as WGPUVertexState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUVertexState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_vertex_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_vertex_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_vertex_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_vertex_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_vertex_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_vertex_state: extracting [Embedded<object>] module: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->module, (void *)&ha_host_struct_ptr->module);
    ha_host_struct_ptr->module = (WGPUShaderModule)registry_item_get_mapping(&registry->shaderModules, ha_wasm_struct_ptr->module);

    LOG_TRACE("extract_vertex_state: extracting [Embedded<string>] entryPoint: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryPoint, (void *)&ha_host_struct_ptr->entryPoint);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->entryPoint, &ha_host_struct_ptr->entryPoint, 65534)) {
        LOG_WARN("extract_vertex_state: wasm_safe_copy_string_null_terminated failed for entry_point");
    }

    LOG_TRACE("extract_vertex_state: extracting [Embedded<count>] constantCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constantCount, (void *)&ha_host_struct_ptr->constantCount);
    ha_host_struct_ptr->constantCount = ha_wasm_struct_ptr->constantCount;

    LOG_TRACE("extract_vertex_state: extracting [Array<struct>] constants: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constants, (void *)&ha_host_struct_ptr->constants);
    /* TODO: Implement SAFE pointer extraction */
    WGPUConstantEntry *constant_entry_array_proto = calloc(ha_host_struct_ptr->constantCount, sizeof(WGPUConstantEntry));
    if (constant_entry_array_proto == NULL) {
        FATAL("extract_vertex_state: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->constantCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->constants + i * sizeof(WasmWGPUConstantEntry);
        LOG_TRACE("extract_vertex_state: copying struct at wasm-address %p into constant_entry_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUConstantEntry *proto_i_ptr = &constant_entry_array_proto[i];
        if (extract_constant_entry(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_vertex_state: extract_constant_entry at index %d failed", i);
        }
    }
    ha_host_struct_ptr->constants = constant_entry_array_proto;

    LOG_TRACE("extract_vertex_state: extracting [Embedded<count>] bufferCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->bufferCount, (void *)&ha_host_struct_ptr->bufferCount);
    ha_host_struct_ptr->bufferCount = ha_wasm_struct_ptr->bufferCount;

    LOG_TRACE("extract_vertex_state: extracting [Array<struct>] buffers: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->buffers, (void *)&ha_host_struct_ptr->buffers);
    /* TODO: Implement SAFE pointer extraction */
    WGPUVertexBufferLayout *vertex_buffer_layout_array_proto = calloc(ha_host_struct_ptr->bufferCount, sizeof(WGPUVertexBufferLayout));
    if (vertex_buffer_layout_array_proto == NULL) {
        FATAL("extract_vertex_state: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->bufferCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->buffers + i * sizeof(WasmWGPUVertexBufferLayout);
        LOG_TRACE("extract_vertex_state: copying struct at wasm-address %p into vertex_buffer_layout_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUVertexBufferLayout *proto_i_ptr = &vertex_buffer_layout_array_proto[i];
        if (extract_vertex_buffer_layout(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_vertex_state: extract_vertex_buffer_layout at index %d failed", i);
        }
    }
    ha_host_struct_ptr->buffers = vertex_buffer_layout_array_proto;

    return 0;
}

int extract_primitive_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPrimitiveState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_primitive_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_primitive_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_primitive_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_primitive_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveState, nextInChain));
    LOG_TRACE("extract_primitive_state: [WMAS.WWST]topology: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveState, topology));
    LOG_TRACE("extract_primitive_state: [WMAS.WWST]stripIndexFormat: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveState, stripIndexFormat));
    LOG_TRACE("extract_primitive_state: [WMAS.WWST]frontFace: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveState, frontFace));
    LOG_TRACE("extract_primitive_state: [WMAS.WWST]cullMode: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveState, cullMode));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUPrimitiveState *ha_wasm_struct_ptr = (WasmWGPUPrimitiveState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_primitive_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUPrimitiveState (%p) = [HMAS.WWST]WasmWGPUPrimitiveState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_primitive_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_primitive_state: [HMAS.WWST]topology: (%p)", (void *)&ha_wasm_struct_ptr->topology);
    LOG_TRACE("extract_primitive_state: [HMAS.WWST]stripIndexFormat: (%p)", (void *)&ha_wasm_struct_ptr->stripIndexFormat);
    LOG_TRACE("extract_primitive_state: [HMAS.WWST]frontFace: (%p)", (void *)&ha_wasm_struct_ptr->frontFace);
    LOG_TRACE("extract_primitive_state: [HMAS.WWST]cullMode: (%p)", (void *)&ha_wasm_struct_ptr->cullMode);

    /* Dereference out_ha_host_struct_ptr */
    WGPUPrimitiveState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_primitive_state: allocating [*HMAS.HWST] (%p) as WGPUPrimitiveState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUPrimitiveState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_primitive_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_primitive_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_primitive_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_primitive_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_primitive_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_primitive_state: extracting [Embedded<enum>] topology: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->topology, (void *)&ha_host_struct_ptr->topology);
    ha_host_struct_ptr->topology = ha_wasm_struct_ptr->topology;

    LOG_TRACE("extract_primitive_state: extracting [Embedded<enum>] stripIndexFormat: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stripIndexFormat, (void *)&ha_host_struct_ptr->stripIndexFormat);
    ha_host_struct_ptr->stripIndexFormat = ha_wasm_struct_ptr->stripIndexFormat;

    LOG_TRACE("extract_primitive_state: extracting [Embedded<enum>] frontFace: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->frontFace, (void *)&ha_host_struct_ptr->frontFace);
    ha_host_struct_ptr->frontFace = ha_wasm_struct_ptr->frontFace;

    LOG_TRACE("extract_primitive_state: extracting [Embedded<enum>] cullMode: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->cullMode, (void *)&ha_host_struct_ptr->cullMode);
    ha_host_struct_ptr->cullMode = ha_wasm_struct_ptr->cullMode;

    return 0;
}

int extract_depth_stencil_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUDepthStencilState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_depth_stencil_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_depth_stencil_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_depth_stencil_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, nextInChain));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, format));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]depthWriteEnabled: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, depthWriteEnabled));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]depthCompare: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, depthCompare));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]stencilFront: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilFront));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]stencilBack: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilBack));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]stencilReadMask: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilReadMask));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]stencilWriteMask: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilWriteMask));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]depthBias: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, depthBias));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]depthBiasSlopeScale: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, depthBiasSlopeScale));
    LOG_TRACE("extract_depth_stencil_state: [WMAS.WWST]depthBiasClamp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, depthBiasClamp));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUDepthStencilState *ha_wasm_struct_ptr = (WasmWGPUDepthStencilState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_depth_stencil_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUDepthStencilState (%p) = [HMAS.WWST]WasmWGPUDepthStencilState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]depthWriteEnabled: (%p)", (void *)&ha_wasm_struct_ptr->depthWriteEnabled);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]depthCompare: (%p)", (void *)&ha_wasm_struct_ptr->depthCompare);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]stencilFront: (%p)", (void *)&ha_wasm_struct_ptr->stencilFront);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]stencilBack: (%p)", (void *)&ha_wasm_struct_ptr->stencilBack);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]stencilReadMask: (%p)", (void *)&ha_wasm_struct_ptr->stencilReadMask);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]stencilWriteMask: (%p)", (void *)&ha_wasm_struct_ptr->stencilWriteMask);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]depthBias: (%p)", (void *)&ha_wasm_struct_ptr->depthBias);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]depthBiasSlopeScale: (%p)", (void *)&ha_wasm_struct_ptr->depthBiasSlopeScale);
    LOG_TRACE("extract_depth_stencil_state: [HMAS.WWST]depthBiasClamp: (%p)", (void *)&ha_wasm_struct_ptr->depthBiasClamp);

    /* Dereference out_ha_host_struct_ptr */
    WGPUDepthStencilState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_depth_stencil_state: allocating [*HMAS.HWST] (%p) as WGPUDepthStencilState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUDepthStencilState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_depth_stencil_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_depth_stencil_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_depth_stencil_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_depth_stencil_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_depth_stencil_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<bool>] depthWriteEnabled: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthWriteEnabled, (void *)&ha_host_struct_ptr->depthWriteEnabled);
    ha_host_struct_ptr->depthWriteEnabled = ha_wasm_struct_ptr->depthWriteEnabled;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<enum>] depthCompare: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthCompare, (void *)&ha_host_struct_ptr->depthCompare);
    ha_host_struct_ptr->depthCompare = ha_wasm_struct_ptr->depthCompare;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<struct>] stencilFront: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilFront, (void *)&ha_host_struct_ptr->stencilFront);
    WGPUStencilFaceState *stencil_front_ptr = &ha_host_struct_ptr->stencilFront;
    if (extract_stencil_face_state(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilFront), &stencil_front_ptr)) {
        LOG_WARN("extract_depth_stencil_state: extract_stencil_face_state failed");
    }

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<struct>] stencilBack: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilBack, (void *)&ha_host_struct_ptr->stencilBack);
    WGPUStencilFaceState *stencil_back_ptr = &ha_host_struct_ptr->stencilBack;
    if (extract_stencil_face_state(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUDepthStencilState, stencilBack), &stencil_back_ptr)) {
        LOG_WARN("extract_depth_stencil_state: extract_stencil_face_state failed");
    }

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<uint32>] stencilReadMask: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilReadMask, (void *)&ha_host_struct_ptr->stencilReadMask);
    ha_host_struct_ptr->stencilReadMask = ha_wasm_struct_ptr->stencilReadMask;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<uint32>] stencilWriteMask: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->stencilWriteMask, (void *)&ha_host_struct_ptr->stencilWriteMask);
    ha_host_struct_ptr->stencilWriteMask = ha_wasm_struct_ptr->stencilWriteMask;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<int32>] depthBias: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthBias, (void *)&ha_host_struct_ptr->depthBias);
    ha_host_struct_ptr->depthBias = ha_wasm_struct_ptr->depthBias;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<float32>] depthBiasSlopeScale: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthBiasSlopeScale, (void *)&ha_host_struct_ptr->depthBiasSlopeScale);
    ha_host_struct_ptr->depthBiasSlopeScale = ha_wasm_struct_ptr->depthBiasSlopeScale;

    LOG_TRACE("extract_depth_stencil_state: extracting [Embedded<float32>] depthBiasClamp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthBiasClamp, (void *)&ha_host_struct_ptr->depthBiasClamp);
    ha_host_struct_ptr->depthBiasClamp = ha_wasm_struct_ptr->depthBiasClamp;

    return 0;
}

int extract_multisample_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUMultisampleState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_multisample_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_multisample_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_multisample_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_multisample_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUMultisampleState, nextInChain));
    LOG_TRACE("extract_multisample_state: [WMAS.WWST]count: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUMultisampleState, count));
    LOG_TRACE("extract_multisample_state: [WMAS.WWST]mask: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUMultisampleState, mask));
    LOG_TRACE("extract_multisample_state: [WMAS.WWST]alphaToCoverageEnabled: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUMultisampleState, alphaToCoverageEnabled));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUMultisampleState *ha_wasm_struct_ptr = (WasmWGPUMultisampleState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_multisample_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUMultisampleState (%p) = [HMAS.WWST]WasmWGPUMultisampleState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_multisample_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_multisample_state: [HMAS.WWST]count: (%p)", (void *)&ha_wasm_struct_ptr->count);
    LOG_TRACE("extract_multisample_state: [HMAS.WWST]mask: (%p)", (void *)&ha_wasm_struct_ptr->mask);
    LOG_TRACE("extract_multisample_state: [HMAS.WWST]alphaToCoverageEnabled: (%p)", (void *)&ha_wasm_struct_ptr->alphaToCoverageEnabled);

    /* Dereference out_ha_host_struct_ptr */
    WGPUMultisampleState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_multisample_state: allocating [*HMAS.HWST] (%p) as WGPUMultisampleState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUMultisampleState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_multisample_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_multisample_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_multisample_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_multisample_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_multisample_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_multisample_state: extracting [Embedded<uint32>] count: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->count, (void *)&ha_host_struct_ptr->count);
    ha_host_struct_ptr->count = ha_wasm_struct_ptr->count;

    LOG_TRACE("extract_multisample_state: extracting [Embedded<uint32>] mask: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mask, (void *)&ha_host_struct_ptr->mask);
    ha_host_struct_ptr->mask = ha_wasm_struct_ptr->mask;

    LOG_TRACE("extract_multisample_state: extracting [Embedded<bool>] alphaToCoverageEnabled: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->alphaToCoverageEnabled, (void *)&ha_host_struct_ptr->alphaToCoverageEnabled);
    ha_host_struct_ptr->alphaToCoverageEnabled = ha_wasm_struct_ptr->alphaToCoverageEnabled;

    return 0;
}

int extract_fragment_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUFragmentState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_fragment_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_fragment_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_fragment_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, nextInChain));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]module: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, module));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]entryPoint: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, entryPoint));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]constantCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, constantCount));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]constants: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, constants));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]targetCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, targetCount));
    LOG_TRACE("extract_fragment_state: [WMAS.WWST]targets: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUFragmentState, targets));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUFragmentState *ha_wasm_struct_ptr = (WasmWGPUFragmentState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_fragment_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUFragmentState (%p) = [HMAS.WWST]WasmWGPUFragmentState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]module: (%p)", (void *)&ha_wasm_struct_ptr->module);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]entryPoint: (%p)", (void *)&ha_wasm_struct_ptr->entryPoint);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]constantCount: (%p)", (void *)&ha_wasm_struct_ptr->constantCount);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]constants: (%p)", (void *)&ha_wasm_struct_ptr->constants);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]targetCount: (%p)", (void *)&ha_wasm_struct_ptr->targetCount);
    LOG_TRACE("extract_fragment_state: [HMAS.WWST]targets: (%p)", (void *)&ha_wasm_struct_ptr->targets);

    /* Dereference out_ha_host_struct_ptr */
    WGPUFragmentState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_fragment_state: allocating [*HMAS.HWST] (%p) as WGPUFragmentState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUFragmentState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_fragment_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_fragment_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_fragment_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_fragment_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_fragment_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_fragment_state: extracting [Embedded<object>] module: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->module, (void *)&ha_host_struct_ptr->module);
    ha_host_struct_ptr->module = (WGPUShaderModule)registry_item_get_mapping(&registry->shaderModules, ha_wasm_struct_ptr->module);

    LOG_TRACE("extract_fragment_state: extracting [Embedded<string>] entryPoint: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryPoint, (void *)&ha_host_struct_ptr->entryPoint);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->entryPoint, &ha_host_struct_ptr->entryPoint, 65534)) {
        LOG_WARN("extract_fragment_state: wasm_safe_copy_string_null_terminated failed for entry_point");
    }

    LOG_TRACE("extract_fragment_state: extracting [Embedded<count>] constantCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constantCount, (void *)&ha_host_struct_ptr->constantCount);
    ha_host_struct_ptr->constantCount = ha_wasm_struct_ptr->constantCount;

    LOG_TRACE("extract_fragment_state: extracting [Array<struct>] constants: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->constants, (void *)&ha_host_struct_ptr->constants);
    /* TODO: Implement SAFE pointer extraction */
    WGPUConstantEntry *constant_entry_array_proto = calloc(ha_host_struct_ptr->constantCount, sizeof(WGPUConstantEntry));
    if (constant_entry_array_proto == NULL) {
        FATAL("extract_fragment_state: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->constantCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->constants + i * sizeof(WasmWGPUConstantEntry);
        LOG_TRACE("extract_fragment_state: copying struct at wasm-address %p into constant_entry_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUConstantEntry *proto_i_ptr = &constant_entry_array_proto[i];
        if (extract_constant_entry(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_fragment_state: extract_constant_entry at index %d failed", i);
        }
    }
    ha_host_struct_ptr->constants = constant_entry_array_proto;

    LOG_TRACE("extract_fragment_state: extracting [Embedded<count>] targetCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->targetCount, (void *)&ha_host_struct_ptr->targetCount);
    ha_host_struct_ptr->targetCount = ha_wasm_struct_ptr->targetCount;

    LOG_TRACE("extract_fragment_state: extracting [Array<struct>] targets: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->targets, (void *)&ha_host_struct_ptr->targets);
    /* TODO: Implement SAFE pointer extraction */
    WGPUColorTargetState *color_target_state_array_proto = calloc(ha_host_struct_ptr->targetCount, sizeof(WGPUColorTargetState));
    if (color_target_state_array_proto == NULL) {
        FATAL("extract_fragment_state: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->targetCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->targets + i * sizeof(WasmWGPUColorTargetState);
        LOG_TRACE("extract_fragment_state: copying struct at wasm-address %p into color_target_state_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUColorTargetState *proto_i_ptr = &color_target_state_array_proto[i];
        if (extract_color_target_state(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_fragment_state: extract_color_target_state at index %d failed", i);
        }
    }
    ha_host_struct_ptr->targets = color_target_state_array_proto;

    return 0;
}

int extract_color_target_state(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUColorTargetState **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_color_target_state: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_color_target_state: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_color_target_state: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_color_target_state: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColorTargetState, nextInChain));
    LOG_TRACE("extract_color_target_state: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColorTargetState, format));
    LOG_TRACE("extract_color_target_state: [WMAS.WWST]blend: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColorTargetState, blend));
    LOG_TRACE("extract_color_target_state: [WMAS.WWST]writeMask: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUColorTargetState, writeMask));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUColorTargetState *ha_wasm_struct_ptr = (WasmWGPUColorTargetState *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_color_target_state: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUColorTargetState (%p) = [HMAS.WWST]WasmWGPUColorTargetState: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_color_target_state: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_color_target_state: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_color_target_state: [HMAS.WWST]blend: (%p)", (void *)&ha_wasm_struct_ptr->blend);
    LOG_TRACE("extract_color_target_state: [HMAS.WWST]writeMask: (%p)", (void *)&ha_wasm_struct_ptr->writeMask);

    /* Dereference out_ha_host_struct_ptr */
    WGPUColorTargetState *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_color_target_state: allocating [*HMAS.HWST] (%p) as WGPUColorTargetState", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUColorTargetState));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_color_target_state: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_color_target_state: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_color_target_state: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_color_target_state: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_color_target_state: extract_chained_struct failed");
    }

    LOG_TRACE("extract_color_target_state: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_color_target_state: extracting [Pointer<struct>] blend: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->blend, (void *)&ha_host_struct_ptr->blend);
    if (extract_blend_state(registry, memory, (byte_t *)ha_wasm_struct_ptr->blend, &ha_host_struct_ptr->blend)) {
        LOG_WARN("extract_color_target_state: extract_blend_state failed");
    }

    LOG_TRACE("extract_color_target_state: extracting [Embedded<bitflag>] writeMask: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->writeMask, (void *)&ha_host_struct_ptr->writeMask);
    ha_host_struct_ptr->writeMask = ha_wasm_struct_ptr->writeMask;

    return 0;
}

int extract_render_pipeline_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPipelineDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pipeline_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pipeline_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pipeline_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, nextInChain));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, label));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]layout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, layout));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]vertex: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, vertex));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]primitive: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, primitive));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]depthStencil: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, depthStencil));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]multisample: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, multisample));
    LOG_TRACE("extract_render_pipeline_descriptor: [WMAS.WWST]fragment: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, fragment));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPipelineDescriptor *ha_wasm_struct_ptr = (WasmWGPURenderPipelineDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pipeline_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPipelineDescriptor (%p) = [HMAS.WWST]WasmWGPURenderPipelineDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]layout: (%p)", (void *)&ha_wasm_struct_ptr->layout);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]vertex: (%p)", (void *)&ha_wasm_struct_ptr->vertex);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]primitive: (%p)", (void *)&ha_wasm_struct_ptr->primitive);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]depthStencil: (%p)", (void *)&ha_wasm_struct_ptr->depthStencil);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]multisample: (%p)", (void *)&ha_wasm_struct_ptr->multisample);
    LOG_TRACE("extract_render_pipeline_descriptor: [HMAS.WWST]fragment: (%p)", (void *)&ha_wasm_struct_ptr->fragment);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPipelineDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pipeline_descriptor: allocating [*HMAS.HWST] (%p) as WGPURenderPipelineDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPipelineDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pipeline_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pipeline_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pipeline_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_render_pipeline_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Embedded<object>] layout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layout, (void *)&ha_host_struct_ptr->layout);
    ha_host_struct_ptr->layout = (WGPUPipelineLayout)registry_item_get_mapping(&registry->pipelineLayouts, ha_wasm_struct_ptr->layout);

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Embedded<struct>] vertex: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->vertex, (void *)&ha_host_struct_ptr->vertex);
    WGPUVertexState *vertex_ptr = &ha_host_struct_ptr->vertex;
    if (extract_vertex_state(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, vertex), &vertex_ptr)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_vertex_state failed");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Embedded<struct>] primitive: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->primitive, (void *)&ha_host_struct_ptr->primitive);
    WGPUPrimitiveState *primitive_ptr = &ha_host_struct_ptr->primitive;
    if (extract_primitive_state(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, primitive), &primitive_ptr)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_primitive_state failed");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Pointer<struct>] depthStencil: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->depthStencil, (void *)&ha_host_struct_ptr->depthStencil);
    if (extract_depth_stencil_state(registry, memory, (byte_t *)ha_wasm_struct_ptr->depthStencil, &ha_host_struct_ptr->depthStencil)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_depth_stencil_state failed");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Embedded<struct>] multisample: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->multisample, (void *)&ha_host_struct_ptr->multisample);
    WGPUMultisampleState *multisample_ptr = &ha_host_struct_ptr->multisample;
    if (extract_multisample_state(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPURenderPipelineDescriptor, multisample), &multisample_ptr)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_multisample_state failed");
    }

    LOG_TRACE("extract_render_pipeline_descriptor: extracting [Pointer<struct>] fragment: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->fragment, (void *)&ha_host_struct_ptr->fragment);
    if (extract_fragment_state(registry, memory, (byte_t *)ha_wasm_struct_ptr->fragment, &ha_host_struct_ptr->fragment)) {
        LOG_WARN("extract_render_pipeline_descriptor: extract_fragment_state failed");
    }

    return 0;
}

int extract_sampler_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSamplerDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_sampler_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_sampler_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_sampler_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, nextInChain));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, label));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]addressModeU: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, addressModeU));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]addressModeV: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, addressModeV));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]addressModeW: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, addressModeW));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]magFilter: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, magFilter));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]minFilter: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, minFilter));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]mipmapFilter: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, mipmapFilter));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]lodMinClamp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, lodMinClamp));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]lodMaxClamp: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, lodMaxClamp));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]compare: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, compare));
    LOG_TRACE("extract_sampler_descriptor: [WMAS.WWST]maxAnisotropy: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSamplerDescriptor, maxAnisotropy));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSamplerDescriptor *ha_wasm_struct_ptr = (WasmWGPUSamplerDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_sampler_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSamplerDescriptor (%p) = [HMAS.WWST]WasmWGPUSamplerDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]addressModeU: (%p)", (void *)&ha_wasm_struct_ptr->addressModeU);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]addressModeV: (%p)", (void *)&ha_wasm_struct_ptr->addressModeV);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]addressModeW: (%p)", (void *)&ha_wasm_struct_ptr->addressModeW);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]magFilter: (%p)", (void *)&ha_wasm_struct_ptr->magFilter);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]minFilter: (%p)", (void *)&ha_wasm_struct_ptr->minFilter);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]mipmapFilter: (%p)", (void *)&ha_wasm_struct_ptr->mipmapFilter);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]lodMinClamp: (%p)", (void *)&ha_wasm_struct_ptr->lodMinClamp);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]lodMaxClamp: (%p)", (void *)&ha_wasm_struct_ptr->lodMaxClamp);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]compare: (%p)", (void *)&ha_wasm_struct_ptr->compare);
    LOG_TRACE("extract_sampler_descriptor: [HMAS.WWST]maxAnisotropy: (%p)", (void *)&ha_wasm_struct_ptr->maxAnisotropy);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSamplerDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_sampler_descriptor: allocating [*HMAS.HWST] (%p) as WGPUSamplerDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSamplerDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_sampler_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_sampler_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_sampler_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_sampler_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_sampler_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_sampler_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] addressModeU: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->addressModeU, (void *)&ha_host_struct_ptr->addressModeU);
    ha_host_struct_ptr->addressModeU = ha_wasm_struct_ptr->addressModeU;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] addressModeV: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->addressModeV, (void *)&ha_host_struct_ptr->addressModeV);
    ha_host_struct_ptr->addressModeV = ha_wasm_struct_ptr->addressModeV;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] addressModeW: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->addressModeW, (void *)&ha_host_struct_ptr->addressModeW);
    ha_host_struct_ptr->addressModeW = ha_wasm_struct_ptr->addressModeW;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] magFilter: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->magFilter, (void *)&ha_host_struct_ptr->magFilter);
    ha_host_struct_ptr->magFilter = ha_wasm_struct_ptr->magFilter;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] minFilter: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->minFilter, (void *)&ha_host_struct_ptr->minFilter);
    ha_host_struct_ptr->minFilter = ha_wasm_struct_ptr->minFilter;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] mipmapFilter: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mipmapFilter, (void *)&ha_host_struct_ptr->mipmapFilter);
    ha_host_struct_ptr->mipmapFilter = ha_wasm_struct_ptr->mipmapFilter;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<float32>] lodMinClamp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->lodMinClamp, (void *)&ha_host_struct_ptr->lodMinClamp);
    ha_host_struct_ptr->lodMinClamp = ha_wasm_struct_ptr->lodMinClamp;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<float32>] lodMaxClamp: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->lodMaxClamp, (void *)&ha_host_struct_ptr->lodMaxClamp);
    ha_host_struct_ptr->lodMaxClamp = ha_wasm_struct_ptr->lodMaxClamp;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<enum>] compare: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->compare, (void *)&ha_host_struct_ptr->compare);
    ha_host_struct_ptr->compare = ha_wasm_struct_ptr->compare;

    LOG_TRACE("extract_sampler_descriptor: extracting [Embedded<uint16>] maxAnisotropy: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxAnisotropy, (void *)&ha_host_struct_ptr->maxAnisotropy);
    ha_host_struct_ptr->maxAnisotropy = ha_wasm_struct_ptr->maxAnisotropy;

    return 0;
}

int extract_shader_module_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_shader_module_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_shader_module_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_shader_module_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleDescriptor, nextInChain));
    LOG_TRACE("extract_shader_module_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleDescriptor, label));
    LOG_TRACE("extract_shader_module_descriptor: [WMAS.WWST]hintCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleDescriptor, hintCount));
    LOG_TRACE("extract_shader_module_descriptor: [WMAS.WWST]hints: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleDescriptor, hints));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUShaderModuleDescriptor *ha_wasm_struct_ptr = (WasmWGPUShaderModuleDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_shader_module_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUShaderModuleDescriptor (%p) = [HMAS.WWST]WasmWGPUShaderModuleDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_shader_module_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_shader_module_descriptor: [HMAS.WWST]hintCount: (%p)", (void *)&ha_wasm_struct_ptr->hintCount);
    LOG_TRACE("extract_shader_module_descriptor: [HMAS.WWST]hints: (%p)", (void *)&ha_wasm_struct_ptr->hints);

    /* Dereference out_ha_host_struct_ptr */
    WGPUShaderModuleDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_shader_module_descriptor: allocating [*HMAS.HWST] (%p) as WGPUShaderModuleDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUShaderModuleDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_shader_module_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_shader_module_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_shader_module_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_shader_module_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_shader_module_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_shader_module_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_shader_module_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_shader_module_descriptor: extracting [Embedded<count>] hintCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->hintCount, (void *)&ha_host_struct_ptr->hintCount);
    ha_host_struct_ptr->hintCount = ha_wasm_struct_ptr->hintCount;

    LOG_TRACE("extract_shader_module_descriptor: extracting [Array<struct>] hints: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->hints, (void *)&ha_host_struct_ptr->hints);
    /* TODO: Implement SAFE pointer extraction */
    WGPUShaderModuleCompilationHint *shader_module_compilation_hint_array_proto = calloc(ha_host_struct_ptr->hintCount, sizeof(WGPUShaderModuleCompilationHint));
    if (shader_module_compilation_hint_array_proto == NULL) {
        FATAL("extract_shader_module_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->hintCount; i++) {
        byte_t *wa_wasm_offset_i = (byte_t *)ha_wasm_struct_ptr->hints + i * sizeof(WasmWGPUShaderModuleCompilationHint);
        LOG_TRACE("extract_shader_module_descriptor: copying struct at wasm-address %p into shader_module_compilation_hint_array_proto[%d]", wa_wasm_offset_i, i);
        WGPUShaderModuleCompilationHint *proto_i_ptr = &shader_module_compilation_hint_array_proto[i];
        if (extract_shader_module_compilation_hint(registry, memory, wa_wasm_offset_i, &proto_i_ptr)) {
            LOG_WARN("extract_shader_module_descriptor: extract_shader_module_compilation_hint at index %d failed", i);
        }
    }
    ha_host_struct_ptr->hints = shader_module_compilation_hint_array_proto;

    return 0;
}

int extract_shader_module_compilation_hint(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleCompilationHint **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_shader_module_compilation_hint: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_shader_module_compilation_hint: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_shader_module_compilation_hint: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_compilation_hint: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleCompilationHint, nextInChain));
    LOG_TRACE("extract_shader_module_compilation_hint: [WMAS.WWST]entryPoint: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleCompilationHint, entryPoint));
    LOG_TRACE("extract_shader_module_compilation_hint: [WMAS.WWST]layout: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleCompilationHint, layout));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUShaderModuleCompilationHint *ha_wasm_struct_ptr = (WasmWGPUShaderModuleCompilationHint *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_shader_module_compilation_hint: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUShaderModuleCompilationHint (%p) = [HMAS.WWST]WasmWGPUShaderModuleCompilationHint: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_compilation_hint: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_shader_module_compilation_hint: [HMAS.WWST]entryPoint: (%p)", (void *)&ha_wasm_struct_ptr->entryPoint);
    LOG_TRACE("extract_shader_module_compilation_hint: [HMAS.WWST]layout: (%p)", (void *)&ha_wasm_struct_ptr->layout);

    /* Dereference out_ha_host_struct_ptr */
    WGPUShaderModuleCompilationHint *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_shader_module_compilation_hint: allocating [*HMAS.HWST] (%p) as WGPUShaderModuleCompilationHint", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUShaderModuleCompilationHint));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_shader_module_compilation_hint: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_shader_module_compilation_hint: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_shader_module_compilation_hint: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_shader_module_compilation_hint: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_shader_module_compilation_hint: extract_chained_struct failed");
    }

    LOG_TRACE("extract_shader_module_compilation_hint: extracting [Embedded<string>] entryPoint: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->entryPoint, (void *)&ha_host_struct_ptr->entryPoint);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->entryPoint, &ha_host_struct_ptr->entryPoint, 65534)) {
        LOG_WARN("extract_shader_module_compilation_hint: wasm_safe_copy_string_null_terminated failed for entry_point");
    }

    LOG_TRACE("extract_shader_module_compilation_hint: extracting [Embedded<object>] layout: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layout, (void *)&ha_host_struct_ptr->layout);
    ha_host_struct_ptr->layout = (WGPUPipelineLayout)registry_item_get_mapping(&registry->pipelineLayouts, ha_wasm_struct_ptr->layout);

    return 0;
}

int extract_surface_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptor, nextInChain));
    LOG_TRACE("extract_surface_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptor, label));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptor *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptor (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_surface_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_surface_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_surface_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    return 0;
}

int extract_texture_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_texture_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_texture_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_texture_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, nextInChain));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, label));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]usage: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, usage));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]dimension: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, dimension));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]size: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, size));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, format));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]mipLevelCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, mipLevelCount));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]sampleCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, sampleCount));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]viewFormatCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, viewFormatCount));
    LOG_TRACE("extract_texture_descriptor: [WMAS.WWST]viewFormats: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, viewFormats));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUTextureDescriptor *ha_wasm_struct_ptr = (WasmWGPUTextureDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_texture_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUTextureDescriptor (%p) = [HMAS.WWST]WasmWGPUTextureDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]usage: (%p)", (void *)&ha_wasm_struct_ptr->usage);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]dimension: (%p)", (void *)&ha_wasm_struct_ptr->dimension);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]size: (%p)", (void *)&ha_wasm_struct_ptr->size);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]mipLevelCount: (%p)", (void *)&ha_wasm_struct_ptr->mipLevelCount);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]sampleCount: (%p)", (void *)&ha_wasm_struct_ptr->sampleCount);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]viewFormatCount: (%p)", (void *)&ha_wasm_struct_ptr->viewFormatCount);
    LOG_TRACE("extract_texture_descriptor: [HMAS.WWST]viewFormats: (%p)", (void *)&ha_wasm_struct_ptr->viewFormats);

    /* Dereference out_ha_host_struct_ptr */
    WGPUTextureDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_texture_descriptor: allocating [*HMAS.HWST] (%p) as WGPUTextureDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUTextureDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_texture_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_texture_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_texture_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_texture_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_texture_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_texture_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<bitflag>] usage: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->usage, (void *)&ha_host_struct_ptr->usage);
    ha_host_struct_ptr->usage = ha_wasm_struct_ptr->usage;

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<enum>] dimension: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->dimension, (void *)&ha_host_struct_ptr->dimension);
    ha_host_struct_ptr->dimension = ha_wasm_struct_ptr->dimension;

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<struct>] size: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->size, (void *)&ha_host_struct_ptr->size);
    WGPUExtent3D *size_ptr = &ha_host_struct_ptr->size;
    if (extract_extent_3D(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUTextureDescriptor, size), &size_ptr)) {
        LOG_WARN("extract_texture_descriptor: extract_extent_3D failed");
    }

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<uint32>] mipLevelCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mipLevelCount, (void *)&ha_host_struct_ptr->mipLevelCount);
    ha_host_struct_ptr->mipLevelCount = ha_wasm_struct_ptr->mipLevelCount;

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<uint32>] sampleCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->sampleCount, (void *)&ha_host_struct_ptr->sampleCount);
    ha_host_struct_ptr->sampleCount = ha_wasm_struct_ptr->sampleCount;

    LOG_TRACE("extract_texture_descriptor: extracting [Embedded<count>] viewFormatCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewFormatCount, (void *)&ha_host_struct_ptr->viewFormatCount);
    ha_host_struct_ptr->viewFormatCount = ha_wasm_struct_ptr->viewFormatCount;

    LOG_TRACE("extract_texture_descriptor: extracting [Array<enum>] viewFormats: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->viewFormats, (void *)&ha_host_struct_ptr->viewFormats);
    /* TODO: Implement SAFE pointer extraction */
    WGPUTextureFormat *texture_format_array_proto = calloc(ha_host_struct_ptr->viewFormatCount, sizeof(int));
    if (texture_format_array_proto == NULL) {
        FATAL("extract_texture_descriptor: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->viewFormatCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->viewFormats + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_texture_descriptor: copying data at %p into texture_format_array_proto[%d]", ha_wasm_ptr_i, i);
        texture_format_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->viewFormats = texture_format_array_proto;

    return 0;
}

int extract_texture_view_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUTextureViewDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_texture_view_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_texture_view_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_texture_view_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, nextInChain));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]label: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, label));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]format: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, format));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]dimension: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, dimension));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]baseMipLevel: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, baseMipLevel));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]mipLevelCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, mipLevelCount));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]baseArrayLayer: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, baseArrayLayer));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]arrayLayerCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, arrayLayerCount));
    LOG_TRACE("extract_texture_view_descriptor: [WMAS.WWST]aspect: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUTextureViewDescriptor, aspect));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUTextureViewDescriptor *ha_wasm_struct_ptr = (WasmWGPUTextureViewDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_texture_view_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUTextureViewDescriptor (%p) = [HMAS.WWST]WasmWGPUTextureViewDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]label: (%p)", (void *)&ha_wasm_struct_ptr->label);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]format: (%p)", (void *)&ha_wasm_struct_ptr->format);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]dimension: (%p)", (void *)&ha_wasm_struct_ptr->dimension);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]baseMipLevel: (%p)", (void *)&ha_wasm_struct_ptr->baseMipLevel);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]mipLevelCount: (%p)", (void *)&ha_wasm_struct_ptr->mipLevelCount);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]baseArrayLayer: (%p)", (void *)&ha_wasm_struct_ptr->baseArrayLayer);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]arrayLayerCount: (%p)", (void *)&ha_wasm_struct_ptr->arrayLayerCount);
    LOG_TRACE("extract_texture_view_descriptor: [HMAS.WWST]aspect: (%p)", (void *)&ha_wasm_struct_ptr->aspect);

    /* Dereference out_ha_host_struct_ptr */
    WGPUTextureViewDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_texture_view_descriptor: allocating [*HMAS.HWST] (%p) as WGPUTextureViewDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUTextureViewDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_texture_view_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_texture_view_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_texture_view_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_texture_view_descriptor: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_texture_view_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<string>] label: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->label, (void *)&ha_host_struct_ptr->label);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->label, &ha_host_struct_ptr->label, 65534)) {
        LOG_WARN("extract_texture_view_descriptor: wasm_safe_copy_string_null_terminated failed for label");
    }

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<enum>] format: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->format, (void *)&ha_host_struct_ptr->format);
    ha_host_struct_ptr->format = ha_wasm_struct_ptr->format;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<enum>] dimension: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->dimension, (void *)&ha_host_struct_ptr->dimension);
    ha_host_struct_ptr->dimension = ha_wasm_struct_ptr->dimension;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<uint32>] baseMipLevel: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->baseMipLevel, (void *)&ha_host_struct_ptr->baseMipLevel);
    ha_host_struct_ptr->baseMipLevel = ha_wasm_struct_ptr->baseMipLevel;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<uint32>] mipLevelCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->mipLevelCount, (void *)&ha_host_struct_ptr->mipLevelCount);
    ha_host_struct_ptr->mipLevelCount = ha_wasm_struct_ptr->mipLevelCount;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<uint32>] baseArrayLayer: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->baseArrayLayer, (void *)&ha_host_struct_ptr->baseArrayLayer);
    ha_host_struct_ptr->baseArrayLayer = ha_wasm_struct_ptr->baseArrayLayer;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<uint32>] arrayLayerCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->arrayLayerCount, (void *)&ha_host_struct_ptr->arrayLayerCount);
    ha_host_struct_ptr->arrayLayerCount = ha_wasm_struct_ptr->arrayLayerCount;

    LOG_TRACE("extract_texture_view_descriptor: extracting [Embedded<enum>] aspect: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->aspect, (void *)&ha_host_struct_ptr->aspect);
    ha_host_struct_ptr->aspect = ha_wasm_struct_ptr->aspect;

    return 0;
}

int extract_adapter_info(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUAdapterInfo **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_adapter_info: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_adapter_info: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_adapter_info: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, nextInChain));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]vendor: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, vendor));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]architecture: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, architecture));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]device: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, device));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]description: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, description));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]backendType: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, backendType));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]adapterType: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, adapterType));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]vendorID: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, vendorID));
    LOG_TRACE("extract_adapter_info: [WMAS.WWST]deviceID: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUAdapterInfo, deviceID));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUAdapterInfo *ha_wasm_struct_ptr = (WasmWGPUAdapterInfo *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_adapter_info: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUAdapterInfo (%p) = [HMAS.WWST]WasmWGPUAdapterInfo: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]vendor: (%p)", (void *)&ha_wasm_struct_ptr->vendor);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]architecture: (%p)", (void *)&ha_wasm_struct_ptr->architecture);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]device: (%p)", (void *)&ha_wasm_struct_ptr->device);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]description: (%p)", (void *)&ha_wasm_struct_ptr->description);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]backendType: (%p)", (void *)&ha_wasm_struct_ptr->backendType);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]adapterType: (%p)", (void *)&ha_wasm_struct_ptr->adapterType);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]vendorID: (%p)", (void *)&ha_wasm_struct_ptr->vendorID);
    LOG_TRACE("extract_adapter_info: [HMAS.WWST]deviceID: (%p)", (void *)&ha_wasm_struct_ptr->deviceID);

    /* Dereference out_ha_host_struct_ptr */
    WGPUAdapterInfo *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_adapter_info: allocating [*HMAS.HWST] (%p) as WGPUAdapterInfo", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUAdapterInfo));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_adapter_info: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_adapter_info: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_adapter_info: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_adapter_info: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_adapter_info: extract_chained_struct failed");
    }

    LOG_TRACE("extract_adapter_info: extracting [Embedded<string>] vendor: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->vendor, (void *)&ha_host_struct_ptr->vendor);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->vendor, &ha_host_struct_ptr->vendor, 65534)) {
        LOG_WARN("extract_adapter_info: wasm_safe_copy_string_null_terminated failed for vendor");
    }

    LOG_TRACE("extract_adapter_info: extracting [Embedded<string>] architecture: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->architecture, (void *)&ha_host_struct_ptr->architecture);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->architecture, &ha_host_struct_ptr->architecture, 65534)) {
        LOG_WARN("extract_adapter_info: wasm_safe_copy_string_null_terminated failed for architecture");
    }

    LOG_TRACE("extract_adapter_info: extracting [Embedded<string>] device: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->device, (void *)&ha_host_struct_ptr->device);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->device, &ha_host_struct_ptr->device, 65534)) {
        LOG_WARN("extract_adapter_info: wasm_safe_copy_string_null_terminated failed for device");
    }

    LOG_TRACE("extract_adapter_info: extracting [Embedded<string>] description: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->description, (void *)&ha_host_struct_ptr->description);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->description, &ha_host_struct_ptr->description, 65534)) {
        LOG_WARN("extract_adapter_info: wasm_safe_copy_string_null_terminated failed for description");
    }

    LOG_TRACE("extract_adapter_info: extracting [Embedded<enum>] backendType: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->backendType, (void *)&ha_host_struct_ptr->backendType);
    ha_host_struct_ptr->backendType = ha_wasm_struct_ptr->backendType;

    LOG_TRACE("extract_adapter_info: extracting [Embedded<enum>] adapterType: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->adapterType, (void *)&ha_host_struct_ptr->adapterType);
    ha_host_struct_ptr->adapterType = ha_wasm_struct_ptr->adapterType;

    LOG_TRACE("extract_adapter_info: extracting [Embedded<uint32>] vendorID: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->vendorID, (void *)&ha_host_struct_ptr->vendorID);
    ha_host_struct_ptr->vendorID = ha_wasm_struct_ptr->vendorID;

    LOG_TRACE("extract_adapter_info: extracting [Embedded<uint32>] deviceID: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->deviceID, (void *)&ha_host_struct_ptr->deviceID);
    ha_host_struct_ptr->deviceID = ha_wasm_struct_ptr->deviceID;

    return 0;
}

int extract_surface_capabilities(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceCapabilities **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_capabilities: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_capabilities: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_capabilities: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, nextInChain));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]usages: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, usages));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]formatCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, formatCount));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]formats: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, formats));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]presentModeCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, presentModeCount));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]presentModes: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, presentModes));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]alphaModeCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, alphaModeCount));
    LOG_TRACE("extract_surface_capabilities: [WMAS.WWST]alphaModes: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceCapabilities, alphaModes));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceCapabilities *ha_wasm_struct_ptr = (WasmWGPUSurfaceCapabilities *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_capabilities: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceCapabilities (%p) = [HMAS.WWST]WasmWGPUSurfaceCapabilities: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]usages: (%p)", (void *)&ha_wasm_struct_ptr->usages);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]formatCount: (%p)", (void *)&ha_wasm_struct_ptr->formatCount);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]formats: (%p)", (void *)&ha_wasm_struct_ptr->formats);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]presentModeCount: (%p)", (void *)&ha_wasm_struct_ptr->presentModeCount);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]presentModes: (%p)", (void *)&ha_wasm_struct_ptr->presentModes);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]alphaModeCount: (%p)", (void *)&ha_wasm_struct_ptr->alphaModeCount);
    LOG_TRACE("extract_surface_capabilities: [HMAS.WWST]alphaModes: (%p)", (void *)&ha_wasm_struct_ptr->alphaModes);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceCapabilities *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_capabilities: allocating [*HMAS.HWST] (%p) as WGPUSurfaceCapabilities", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceCapabilities));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_capabilities: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_capabilities: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_capabilities: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_capabilities: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_surface_capabilities: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_capabilities: extracting [Embedded<bitflag>] usages: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->usages, (void *)&ha_host_struct_ptr->usages);
    ha_host_struct_ptr->usages = ha_wasm_struct_ptr->usages;

    LOG_TRACE("extract_surface_capabilities: extracting [Embedded<count>] formatCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->formatCount, (void *)&ha_host_struct_ptr->formatCount);
    ha_host_struct_ptr->formatCount = ha_wasm_struct_ptr->formatCount;

    LOG_TRACE("extract_surface_capabilities: extracting [Array<enum>] formats: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->formats, (void *)&ha_host_struct_ptr->formats);
    /* TODO: Implement SAFE pointer extraction */
    WGPUTextureFormat *texture_format_array_proto = calloc(ha_host_struct_ptr->formatCount, sizeof(int));
    if (texture_format_array_proto == NULL) {
        FATAL("extract_surface_capabilities: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->formatCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->formats + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_surface_capabilities: copying data at %p into texture_format_array_proto[%d]", ha_wasm_ptr_i, i);
        texture_format_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->formats = texture_format_array_proto;

    LOG_TRACE("extract_surface_capabilities: extracting [Embedded<count>] presentModeCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->presentModeCount, (void *)&ha_host_struct_ptr->presentModeCount);
    ha_host_struct_ptr->presentModeCount = ha_wasm_struct_ptr->presentModeCount;

    LOG_TRACE("extract_surface_capabilities: extracting [Array<enum>] presentModes: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->presentModes, (void *)&ha_host_struct_ptr->presentModes);
    /* TODO: Implement SAFE pointer extraction */
    WGPUPresentMode *present_mode_array_proto = calloc(ha_host_struct_ptr->presentModeCount, sizeof(int));
    if (present_mode_array_proto == NULL) {
        FATAL("extract_surface_capabilities: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->presentModeCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->presentModes + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_surface_capabilities: copying data at %p into present_mode_array_proto[%d]", ha_wasm_ptr_i, i);
        present_mode_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->presentModes = present_mode_array_proto;

    LOG_TRACE("extract_surface_capabilities: extracting [Embedded<count>] alphaModeCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->alphaModeCount, (void *)&ha_host_struct_ptr->alphaModeCount);
    ha_host_struct_ptr->alphaModeCount = ha_wasm_struct_ptr->alphaModeCount;

    LOG_TRACE("extract_surface_capabilities: extracting [Array<enum>] alphaModes: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->alphaModes, (void *)&ha_host_struct_ptr->alphaModes);
    /* TODO: Implement SAFE pointer extraction */
    WGPUCompositeAlphaMode *composite_alpha_mode_array_proto = calloc(ha_host_struct_ptr->alphaModeCount, sizeof(int));
    if (composite_alpha_mode_array_proto == NULL) {
        FATAL("extract_surface_capabilities: calloc failed");
    }
    for (int i = 0; i < ha_host_struct_ptr->alphaModeCount; i++) {
        byte_t *ha_wasm_ptr_i = (byte_t *)ha_wasm_struct_ptr->alphaModes + i * sizeof(WASM_ENUM_C_TYPE);
        LOG_TRACE("extract_surface_capabilities: copying data at %p into composite_alpha_mode_array_proto[%d]", ha_wasm_ptr_i, i);
        composite_alpha_mode_array_proto[i] = (int)*ha_wasm_ptr_i;
    }
    ha_host_struct_ptr->alphaModes = composite_alpha_mode_array_proto;

    return 0;
}

int extract_supported_limits(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSupportedLimits **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_supported_limits: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_supported_limits: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_supported_limits: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_supported_limits: [WMAS.WWST]nextInChain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSupportedLimits, nextInChain));
    LOG_TRACE("extract_supported_limits: [WMAS.WWST]limits: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSupportedLimits, limits));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSupportedLimits *ha_wasm_struct_ptr = (WasmWGPUSupportedLimits *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_supported_limits: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSupportedLimits (%p) = [HMAS.WWST]WasmWGPUSupportedLimits: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_supported_limits: [HMAS.WWST]nextInChain: (%p)", (void *)&ha_wasm_struct_ptr->nextInChain);
    LOG_TRACE("extract_supported_limits: [HMAS.WWST]limits: (%p)", (void *)&ha_wasm_struct_ptr->limits);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSupportedLimits *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_supported_limits: allocating [*HMAS.HWST] (%p) as WGPUSupportedLimits", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSupportedLimits));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_supported_limits: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_supported_limits: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_supported_limits: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_supported_limits: extracting [Pointer<struct>] nextInChain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->nextInChain, (void *)&ha_host_struct_ptr->nextInChain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->nextInChain, &ha_host_struct_ptr->nextInChain)) {
        LOG_WARN("extract_supported_limits: extract_chained_struct failed");
    }

    LOG_TRACE("extract_supported_limits: extracting [Embedded<struct>] limits: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->limits, (void *)&ha_host_struct_ptr->limits);
    WGPULimits *limits_ptr = &ha_host_struct_ptr->limits;
    if (extract_limits(registry, memory, wa_wasm_struct_offset + offsetof(WasmWGPUSupportedLimits, limits), &limits_ptr)) {
        LOG_WARN("extract_supported_limits: extract_limits failed");
    }

    return 0;
}

int extract_render_pass_descriptor_max_draw_count(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPURenderPassDescriptorMaxDrawCount **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_render_pass_descriptor_max_draw_count: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_render_pass_descriptor_max_draw_count: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptorMaxDrawCount, chain));
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: [WMAS.WWST]maxDrawCount: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPURenderPassDescriptorMaxDrawCount, maxDrawCount));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPURenderPassDescriptorMaxDrawCount *ha_wasm_struct_ptr = (WasmWGPURenderPassDescriptorMaxDrawCount *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: mapping mem_base (%p) + [WMAS.WWST]WasmWGPURenderPassDescriptorMaxDrawCount (%p) = [HMAS.WWST]WasmWGPURenderPassDescriptorMaxDrawCount: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: [HMAS.WWST]maxDrawCount: (%p)", (void *)&ha_wasm_struct_ptr->maxDrawCount);

    /* Dereference out_ha_host_struct_ptr */
    WGPURenderPassDescriptorMaxDrawCount *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_render_pass_descriptor_max_draw_count: allocating [*HMAS.HWST] (%p) as WGPURenderPassDescriptorMaxDrawCount", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPURenderPassDescriptorMaxDrawCount));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_render_pass_descriptor_max_draw_count: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_render_pass_descriptor_max_draw_count: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_render_pass_descriptor_max_draw_count: extract_chained_struct failed");
    }

    LOG_TRACE("extract_render_pass_descriptor_max_draw_count: extracting [Embedded<uint64>] maxDrawCount: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->maxDrawCount, (void *)&ha_host_struct_ptr->maxDrawCount);
    ha_host_struct_ptr->maxDrawCount = ha_wasm_struct_ptr->maxDrawCount;

    return 0;
}

int extract_primitive_depth_clip_control(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUPrimitiveDepthClipControl **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_primitive_depth_clip_control: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_primitive_depth_clip_control: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_primitive_depth_clip_control: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_primitive_depth_clip_control: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveDepthClipControl, chain));
    LOG_TRACE("extract_primitive_depth_clip_control: [WMAS.WWST]unclippedDepth: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUPrimitiveDepthClipControl, unclippedDepth));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUPrimitiveDepthClipControl *ha_wasm_struct_ptr = (WasmWGPUPrimitiveDepthClipControl *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_primitive_depth_clip_control: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUPrimitiveDepthClipControl (%p) = [HMAS.WWST]WasmWGPUPrimitiveDepthClipControl: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_primitive_depth_clip_control: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_primitive_depth_clip_control: [HMAS.WWST]unclippedDepth: (%p)", (void *)&ha_wasm_struct_ptr->unclippedDepth);

    /* Dereference out_ha_host_struct_ptr */
    WGPUPrimitiveDepthClipControl *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_primitive_depth_clip_control: allocating [*HMAS.HWST] (%p) as WGPUPrimitiveDepthClipControl", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUPrimitiveDepthClipControl));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_primitive_depth_clip_control: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_primitive_depth_clip_control: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_primitive_depth_clip_control: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_primitive_depth_clip_control: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_primitive_depth_clip_control: extract_chained_struct failed");
    }

    LOG_TRACE("extract_primitive_depth_clip_control: extracting [Embedded<bool>] unclippedDepth: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->unclippedDepth, (void *)&ha_host_struct_ptr->unclippedDepth);
    ha_host_struct_ptr->unclippedDepth = ha_wasm_struct_ptr->unclippedDepth;

    return 0;
}

int extract_shader_module_SPIRV_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleSPIRVDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_shader_module_SPIRV_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_shader_module_SPIRV_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleSPIRVDescriptor, chain));
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [WMAS.WWST]codeSize: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleSPIRVDescriptor, codeSize));
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [WMAS.WWST]code: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleSPIRVDescriptor, code));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUShaderModuleSPIRVDescriptor *ha_wasm_struct_ptr = (WasmWGPUShaderModuleSPIRVDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUShaderModuleSPIRVDescriptor (%p) = [HMAS.WWST]WasmWGPUShaderModuleSPIRVDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [HMAS.WWST]codeSize: (%p)", (void *)&ha_wasm_struct_ptr->codeSize);
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: [HMAS.WWST]code: (%p)", (void *)&ha_wasm_struct_ptr->code);

    /* Dereference out_ha_host_struct_ptr */
    WGPUShaderModuleSPIRVDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_shader_module_SPIRV_descriptor: allocating [*HMAS.HWST] (%p) as WGPUShaderModuleSPIRVDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUShaderModuleSPIRVDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_shader_module_SPIRV_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_shader_module_SPIRV_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_shader_module_SPIRV_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_shader_module_SPIRV_descriptor: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_shader_module_SPIRV_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_shader_module_SPIRV_descriptor: extracting [Embedded<uint32>] codeSize: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->codeSize, (void *)&ha_host_struct_ptr->codeSize);
    ha_host_struct_ptr->codeSize = ha_wasm_struct_ptr->codeSize;

    LOG_TRACE("extract_shader_module_SPIRV_descriptor: extracting [Pointer<uint32>] code: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->code, (void *)&ha_host_struct_ptr->code);
    /* TODO: Implement Uint32 pointer extraction */

    return 0;
}

int extract_shader_module_WGSL_descriptor(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUShaderModuleWGSLDescriptor **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_shader_module_WGSL_descriptor: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_shader_module_WGSL_descriptor: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_shader_module_WGSL_descriptor: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_WGSL_descriptor: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleWGSLDescriptor, chain));
    LOG_TRACE("extract_shader_module_WGSL_descriptor: [WMAS.WWST]code: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUShaderModuleWGSLDescriptor, code));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUShaderModuleWGSLDescriptor *ha_wasm_struct_ptr = (WasmWGPUShaderModuleWGSLDescriptor *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_shader_module_WGSL_descriptor: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUShaderModuleWGSLDescriptor (%p) = [HMAS.WWST]WasmWGPUShaderModuleWGSLDescriptor: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_shader_module_WGSL_descriptor: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_shader_module_WGSL_descriptor: [HMAS.WWST]code: (%p)", (void *)&ha_wasm_struct_ptr->code);

    /* Dereference out_ha_host_struct_ptr */
    WGPUShaderModuleWGSLDescriptor *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_shader_module_WGSL_descriptor: allocating [*HMAS.HWST] (%p) as WGPUShaderModuleWGSLDescriptor", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUShaderModuleWGSLDescriptor));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_shader_module_WGSL_descriptor: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_shader_module_WGSL_descriptor: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_shader_module_WGSL_descriptor: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_shader_module_WGSL_descriptor: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_shader_module_WGSL_descriptor: extract_chained_struct failed");
    }

    LOG_TRACE("extract_shader_module_WGSL_descriptor: extracting [Embedded<string>] code: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->code, (void *)&ha_host_struct_ptr->code);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->code, &ha_host_struct_ptr->code, 65534)) {
        LOG_WARN("extract_shader_module_WGSL_descriptor: wasm_safe_copy_string_null_terminated failed for code");
    }

    return 0;
}

int extract_surface_descriptor_from_android_native_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromAndroidNativeWindow **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_android_native_window: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_android_native_window: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromAndroidNativeWindow, chain));
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: [WMAS.WWST]window: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromAndroidNativeWindow, window));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromAndroidNativeWindow *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromAndroidNativeWindow *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromAndroidNativeWindow (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromAndroidNativeWindow: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: [HMAS.WWST]window: (%p)", (void *)&ha_wasm_struct_ptr->window);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromAndroidNativeWindow *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_android_native_window: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromAndroidNativeWindow", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromAndroidNativeWindow));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_android_native_window: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_android_native_window: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_android_native_window: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_android_native_window: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_android_native_window: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_android_native_window: extracting [Pointer<c_void>] window: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->window, (void *)&ha_host_struct_ptr->window);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->window = (void *)ha_wasm_struct_ptr->window;

    return 0;
}

int extract_surface_descriptor_from_canvas_HTML_selector(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromCanvasHTMLSelector **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_canvas_HTML_selector: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_canvas_HTML_selector: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector, chain));
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: [WMAS.WWST]selector: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector, selector));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromCanvasHTMLSelector: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: [HMAS.WWST]selector: (%p)", (void *)&ha_wasm_struct_ptr->selector);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromCanvasHTMLSelector *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_canvas_HTML_selector: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromCanvasHTMLSelector", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromCanvasHTMLSelector));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_canvas_HTML_selector: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_canvas_HTML_selector: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_canvas_HTML_selector: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_canvas_HTML_selector: extracting [Embedded<string>] selector: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->selector, (void *)&ha_host_struct_ptr->selector);
    if (wasm_safe_copy_string_null_terminated(memory, ha_wasm_struct_ptr->selector, &ha_host_struct_ptr->selector, 65534)) {
        LOG_WARN("extract_surface_descriptor_from_canvas_HTML_selector: wasm_safe_copy_string_null_terminated failed for selector");
    }

    return 0;
}

int extract_surface_descriptor_from_metal_layer(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromMetalLayer **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_metal_layer: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_metal_layer: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromMetalLayer, chain));
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: [WMAS.WWST]layer: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromMetalLayer, layer));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromMetalLayer *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromMetalLayer *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromMetalLayer (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromMetalLayer: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: [HMAS.WWST]layer: (%p)", (void *)&ha_wasm_struct_ptr->layer);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromMetalLayer *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_metal_layer: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromMetalLayer", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromMetalLayer));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_metal_layer: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_metal_layer: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_metal_layer: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_metal_layer: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_metal_layer: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_metal_layer: extracting [Pointer<c_void>] layer: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->layer, (void *)&ha_host_struct_ptr->layer);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->layer = (void *)ha_wasm_struct_ptr->layer;

    return 0;
}

int extract_surface_descriptor_from_windows_HWND(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromWindowsHWND **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_windows_HWND: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_windows_HWND: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWindowsHWND, chain));
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [WMAS.WWST]hinstance: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWindowsHWND, hinstance));
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [WMAS.WWST]hwnd: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWindowsHWND, hwnd));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromWindowsHWND *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromWindowsHWND *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromWindowsHWND (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromWindowsHWND: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [HMAS.WWST]hinstance: (%p)", (void *)&ha_wasm_struct_ptr->hinstance);
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: [HMAS.WWST]hwnd: (%p)", (void *)&ha_wasm_struct_ptr->hwnd);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromWindowsHWND *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_windows_HWND: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromWindowsHWND", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromWindowsHWND));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_windows_HWND: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_windows_HWND: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_windows_HWND: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: extracting [Pointer<c_void>] hinstance: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->hinstance, (void *)&ha_host_struct_ptr->hinstance);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->hinstance = (void *)ha_wasm_struct_ptr->hinstance;

    LOG_TRACE("extract_surface_descriptor_from_windows_HWND: extracting [Pointer<c_void>] hwnd: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->hwnd, (void *)&ha_host_struct_ptr->hwnd);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->hwnd = (void *)ha_wasm_struct_ptr->hwnd;

    return 0;
}

int extract_surface_descriptor_from_xcb_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromXcbWindow **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_xcb_window: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_xcb_window: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXcbWindow, chain));
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [WMAS.WWST]connection: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXcbWindow, connection));
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [WMAS.WWST]window: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXcbWindow, window));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromXcbWindow *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromXcbWindow *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromXcbWindow (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromXcbWindow: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [HMAS.WWST]connection: (%p)", (void *)&ha_wasm_struct_ptr->connection);
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: [HMAS.WWST]window: (%p)", (void *)&ha_wasm_struct_ptr->window);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromXcbWindow *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_xcb_window: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromXcbWindow", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromXcbWindow));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_xcb_window: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_xcb_window: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_xcb_window: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_xcb_window: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_xcb_window: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_xcb_window: extracting [Pointer<c_void>] connection: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->connection, (void *)&ha_host_struct_ptr->connection);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->connection = (void *)ha_wasm_struct_ptr->connection;

    LOG_TRACE("extract_surface_descriptor_from_xcb_window: extracting [Embedded<uint32>] window: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->window, (void *)&ha_host_struct_ptr->window);
    ha_host_struct_ptr->window = ha_wasm_struct_ptr->window;

    return 0;
}

int extract_surface_descriptor_from_xlib_window(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromXlibWindow **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_xlib_window: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_xlib_window: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXlibWindow, chain));
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [WMAS.WWST]display: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXlibWindow, display));
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [WMAS.WWST]window: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromXlibWindow, window));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromXlibWindow *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromXlibWindow *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromXlibWindow (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromXlibWindow: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [HMAS.WWST]display: (%p)", (void *)&ha_wasm_struct_ptr->display);
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: [HMAS.WWST]window: (%p)", (void *)&ha_wasm_struct_ptr->window);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromXlibWindow *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_xlib_window: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromXlibWindow", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromXlibWindow));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_xlib_window: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_xlib_window: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_xlib_window: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_xlib_window: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_xlib_window: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_xlib_window: extracting [Pointer<c_void>] display: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->display, (void *)&ha_host_struct_ptr->display);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->display = (void *)ha_wasm_struct_ptr->display;

    LOG_TRACE("extract_surface_descriptor_from_xlib_window: extracting [Embedded<uint64>] window: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->window, (void *)&ha_host_struct_ptr->window);
    ha_host_struct_ptr->window = ha_wasm_struct_ptr->window;

    return 0;
}

int extract_surface_descriptor_from_wayland_surface(
    BindWGPUObjectMappingRegistry *registry,
    wasm_memory_t *memory,
    byte_t *wa_wasm_struct_offset,
    WGPUSurfaceDescriptorFromWaylandSurface **out_ha_host_struct_ptr
) {
    /* Log input parameters */
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: params [WMAS.WWST] (%p), [*HMAS.WWST] (%p)", (void *)wa_wasm_struct_offset, (void *)out_ha_host_struct_ptr);

    /* Verify out_ha_host_struct_ptr is not NULL */
    if (out_ha_host_struct_ptr == NULL) {
        FATAL("extract_surface_descriptor_from_wayland_surface: [*HMAS.WWST] is NULL");
        return 0;
    }

    /* Verify wasm-address is not NULL */
    if (wa_wasm_struct_offset == NULL) {
        LOG_WARN("extract_surface_descriptor_from_wayland_surface: [WMAS.WWST] is NULL");
        *out_ha_host_struct_ptr = NULL;
        return 0;
    }

    /* Trace wasm-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [WMAS.WWST]chain: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWaylandSurface, chain));
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [WMAS.WWST]display: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWaylandSurface, display));
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [WMAS.WWST]surface: (%p)", wa_wasm_struct_offset + offsetof(WasmWGPUSurfaceDescriptorFromWaylandSurface, surface));

    byte_t *mem_base = wasm_memory_data(memory);

    /* Create host-address wasm-struct pointer from wasm-address wasm-struct pointer */
    WasmWGPUSurfaceDescriptorFromWaylandSurface *ha_wasm_struct_ptr = (WasmWGPUSurfaceDescriptorFromWaylandSurface *)(mem_base + (uintptr_t)wa_wasm_struct_offset);
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: mapping mem_base (%p) + [WMAS.WWST]WasmWGPUSurfaceDescriptorFromWaylandSurface (%p) = [HMAS.WWST]WasmWGPUSurfaceDescriptorFromWaylandSurface: (%p)", (void *)mem_base, (void *)wa_wasm_struct_offset, (void *)ha_wasm_struct_ptr);

    /* Trace host-address wasm-struct member pointers */
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [HMAS.WWST]chain: (%p)", (void *)&ha_wasm_struct_ptr->chain);
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [HMAS.WWST]display: (%p)", (void *)&ha_wasm_struct_ptr->display);
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: [HMAS.WWST]surface: (%p)", (void *)&ha_wasm_struct_ptr->surface);

    /* Dereference out_ha_host_struct_ptr */
    WGPUSurfaceDescriptorFromWaylandSurface *ha_host_struct_ptr = *out_ha_host_struct_ptr;

    /* Allocate ha_host_struct_ptr if it is NULL */
    if (ha_host_struct_ptr == NULL) {
        LOG_DEBUG("extract_surface_descriptor_from_wayland_surface: allocating [*HMAS.HWST] (%p) as WGPUSurfaceDescriptorFromWaylandSurface", (void *)out_ha_host_struct_ptr);
        *out_ha_host_struct_ptr = calloc(1, sizeof(WGPUSurfaceDescriptorFromWaylandSurface));
        if (*out_ha_host_struct_ptr == NULL) {
            FATAL("extract_surface_descriptor_from_wayland_surface: failed to allocate [*HMAS.HWST] (%p)", (void *)out_ha_host_struct_ptr);
            return 0;
        }
        ha_host_struct_ptr = *out_ha_host_struct_ptr;
    } else {
        LOG_DEBUG("extract_surface_descriptor_from_wayland_surface: [*HMAS.HWST] is not NULL");
    }

    /* Extract host-address wasm-struct members to host-address host-struct members */
    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: extracting [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)ha_wasm_struct_ptr, (void *)ha_host_struct_ptr);

    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: extracting [Embedded<struct>] chain: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->chain, (void *)&ha_host_struct_ptr->chain);
    if (extract_chained_struct(registry, memory, (byte_t *)ha_wasm_struct_ptr->chain.next, &ha_host_struct_ptr->chain.next)) {
        LOG_WARN("extract_surface_descriptor_from_wayland_surface: extract_chained_struct failed");
    }

    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: extracting [Pointer<c_void>] display: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->display, (void *)&ha_host_struct_ptr->display);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->display = (void *)ha_wasm_struct_ptr->display;

    LOG_TRACE("extract_surface_descriptor_from_wayland_surface: extracting [Pointer<c_void>] surface: [HMAS.WWST] (%p) -> [HMAS.HWST] (%p)", (void *)&ha_wasm_struct_ptr->surface, (void *)&ha_host_struct_ptr->surface);
    /* TODO: Is this safe? */
    ha_host_struct_ptr->surface = (void *)ha_wasm_struct_ptr->surface;

    return 0;
}


/* Free Struct Function Definitions */

int free_chained_struct(WGPUChainedStruct *struct_ptr) {
    LOG_WARN("free_chained_struct: TODO");
    return 0;
}

int free_chained_struct_out(WGPUChainedStructOut *struct_ptr) {
    LOG_WARN("free_chained_struct_out: TODO");
    return 0;
}

int free_limits(WGPULimits *struct_ptr) {
    LOG_WARN("free_limits: TODO");
    return 0;
}

int free_blend_component(WGPUBlendComponent *struct_ptr) {
    LOG_WARN("free_blend_component: TODO");
    return 0;
}

int free_color(WGPUColor *struct_ptr) {
    LOG_WARN("free_color: TODO");
    return 0;
}

int free_compute_pass_timestamp_writes(WGPUComputePassTimestampWrites *struct_ptr) {
    LOG_WARN("free_compute_pass_timestamp_writes: TODO");
    return 0;
}

int free_extent_3D(WGPUExtent3D *struct_ptr) {
    LOG_WARN("free_extent_3D: TODO");
    return 0;
}

int free_vertex_attribute(WGPUVertexAttribute *struct_ptr) {
    LOG_WARN("free_vertex_attribute: TODO");
    return 0;
}

int free_vertex_buffer_layout(WGPUVertexBufferLayout *struct_ptr) {
    LOG_WARN("free_vertex_buffer_layout: TODO");
    return 0;
}

int free_origin_3D(WGPUOrigin3D *struct_ptr) {
    LOG_WARN("free_origin_3D: TODO");
    return 0;
}

int free_render_pass_depth_stencil_attachment(WGPURenderPassDepthStencilAttachment *struct_ptr) {
    LOG_WARN("free_render_pass_depth_stencil_attachment: TODO");
    return 0;
}

int free_render_pass_timestamp_writes(WGPURenderPassTimestampWrites *struct_ptr) {
    LOG_WARN("free_render_pass_timestamp_writes: TODO");
    return 0;
}

int free_blend_state(WGPUBlendState *struct_ptr) {
    LOG_WARN("free_blend_state: TODO");
    return 0;
}

int free_stencil_face_state(WGPUStencilFaceState *struct_ptr) {
    LOG_WARN("free_stencil_face_state: TODO");
    return 0;
}

int free_surface_texture(WGPUSurfaceTexture *struct_ptr) {
    LOG_WARN("free_surface_texture: TODO");
    return 0;
}

int free_uncaptured_error_callback_info(WGPUUncapturedErrorCallbackInfo *struct_ptr) {
    LOG_WARN("free_uncaptured_error_callback_info: TODO");
    return 0;
}

int free_texture_data_layout(WGPUTextureDataLayout *struct_ptr) {
    LOG_WARN("free_texture_data_layout: TODO");
    return 0;
}

int free_queue_descriptor(WGPUQueueDescriptor *struct_ptr) {
    LOG_WARN("free_queue_descriptor: TODO");
    return 0;
}

int free_programmable_stage_descriptor(WGPUProgrammableStageDescriptor *struct_ptr) {
    LOG_WARN("free_programmable_stage_descriptor: TODO");
    return 0;
}

int free_request_adapter_options(WGPURequestAdapterOptions *struct_ptr) {
    LOG_WARN("free_request_adapter_options: TODO");
    return 0;
}

int free_device_descriptor(WGPUDeviceDescriptor *struct_ptr) {
    LOG_WARN("free_device_descriptor: TODO");
    return 0;
}

int free_bind_group_entry(WGPUBindGroupEntry *struct_ptr) {
    LOG_WARN("free_bind_group_entry: TODO");
    return 0;
}

int free_bind_group_descriptor(WGPUBindGroupDescriptor *struct_ptr) {
    LOG_WARN("free_bind_group_descriptor: TODO");
    return 0;
}

int free_buffer_binding_layout(WGPUBufferBindingLayout *struct_ptr) {
    LOG_WARN("free_buffer_binding_layout: TODO");
    return 0;
}

int free_sampler_binding_layout(WGPUSamplerBindingLayout *struct_ptr) {
    LOG_WARN("free_sampler_binding_layout: TODO");
    return 0;
}

int free_texture_binding_layout(WGPUTextureBindingLayout *struct_ptr) {
    LOG_WARN("free_texture_binding_layout: TODO");
    return 0;
}

int free_surface_configuration(WGPUSurfaceConfiguration *struct_ptr) {
    LOG_WARN("free_surface_configuration: TODO");
    return 0;
}

int free_storage_texture_binding_layout(WGPUStorageTextureBindingLayout *struct_ptr) {
    LOG_WARN("free_storage_texture_binding_layout: TODO");
    return 0;
}

int free_bind_group_layout_entry(WGPUBindGroupLayoutEntry *struct_ptr) {
    LOG_WARN("free_bind_group_layout_entry: TODO");
    return 0;
}

int free_bind_group_layout_descriptor(WGPUBindGroupLayoutDescriptor *struct_ptr) {
    LOG_WARN("free_bind_group_layout_descriptor: TODO");
    return 0;
}

int free_buffer_descriptor(WGPUBufferDescriptor *struct_ptr) {
    LOG_WARN("free_buffer_descriptor: TODO");
    return 0;
}

int free_constant_entry(WGPUConstantEntry *struct_ptr) {
    LOG_WARN("free_constant_entry: TODO");
    return 0;
}

int free_command_buffer_descriptor(WGPUCommandBufferDescriptor *struct_ptr) {
    LOG_WARN("free_command_buffer_descriptor: TODO");
    return 0;
}

int free_command_encoder_descriptor(WGPUCommandEncoderDescriptor *struct_ptr) {
    LOG_WARN("free_command_encoder_descriptor: TODO");
    return 0;
}

int free_compilation_info(WGPUCompilationInfo *struct_ptr) {
    LOG_WARN("free_compilation_info: TODO");
    return 0;
}

int free_compilation_message(WGPUCompilationMessage *struct_ptr) {
    LOG_WARN("free_compilation_message: TODO");
    return 0;
}

int free_compute_pass_descriptor(WGPUComputePassDescriptor *struct_ptr) {
    LOG_WARN("free_compute_pass_descriptor: TODO");
    return 0;
}

int free_compute_pipeline_descriptor(WGPUComputePipelineDescriptor *struct_ptr) {
    LOG_WARN("free_compute_pipeline_descriptor: TODO");
    return 0;
}

int free_required_limits(WGPURequiredLimits *struct_ptr) {
    LOG_WARN("free_required_limits: TODO");
    return 0;
}

int free_image_copy_buffer(WGPUImageCopyBuffer *struct_ptr) {
    LOG_WARN("free_image_copy_buffer: TODO");
    return 0;
}

int free_image_copy_texture(WGPUImageCopyTexture *struct_ptr) {
    LOG_WARN("free_image_copy_texture: TODO");
    return 0;
}

int free_instance_descriptor(WGPUInstanceDescriptor *struct_ptr) {
    LOG_WARN("free_instance_descriptor: TODO");
    return 0;
}

int free_pipeline_layout_descriptor(WGPUPipelineLayoutDescriptor *struct_ptr) {
    LOG_WARN("free_pipeline_layout_descriptor: TODO");
    return 0;
}

int free_query_set_descriptor(WGPUQuerySetDescriptor *struct_ptr) {
    LOG_WARN("free_query_set_descriptor: TODO");
    return 0;
}

int free_render_bundle_descriptor(WGPURenderBundleDescriptor *struct_ptr) {
    LOG_WARN("free_render_bundle_descriptor: TODO");
    return 0;
}

int free_render_bundle_encoder_descriptor(WGPURenderBundleEncoderDescriptor *struct_ptr) {
    LOG_WARN("free_render_bundle_encoder_descriptor: TODO");
    return 0;
}

int free_render_pass_color_attachment(WGPURenderPassColorAttachment *struct_ptr) {
    LOG_WARN("free_render_pass_color_attachment: TODO");
    return 0;
}

int free_render_pass_descriptor(WGPURenderPassDescriptor *struct_ptr) {
    LOG_WARN("free_render_pass_descriptor: TODO");
    return 0;
}

int free_vertex_state(WGPUVertexState *struct_ptr) {
    LOG_WARN("free_vertex_state: TODO");
    return 0;
}

int free_primitive_state(WGPUPrimitiveState *struct_ptr) {
    LOG_WARN("free_primitive_state: TODO");
    return 0;
}

int free_depth_stencil_state(WGPUDepthStencilState *struct_ptr) {
    LOG_WARN("free_depth_stencil_state: TODO");
    return 0;
}

int free_multisample_state(WGPUMultisampleState *struct_ptr) {
    LOG_WARN("free_multisample_state: TODO");
    return 0;
}

int free_fragment_state(WGPUFragmentState *struct_ptr) {
    LOG_WARN("free_fragment_state: TODO");
    return 0;
}

int free_color_target_state(WGPUColorTargetState *struct_ptr) {
    LOG_WARN("free_color_target_state: TODO");
    return 0;
}

int free_render_pipeline_descriptor(WGPURenderPipelineDescriptor *struct_ptr) {
    LOG_WARN("free_render_pipeline_descriptor: TODO");
    return 0;
}

int free_sampler_descriptor(WGPUSamplerDescriptor *struct_ptr) {
    LOG_WARN("free_sampler_descriptor: TODO");
    return 0;
}

int free_shader_module_descriptor(WGPUShaderModuleDescriptor *struct_ptr) {
    LOG_WARN("free_shader_module_descriptor: TODO");
    return 0;
}

int free_shader_module_compilation_hint(WGPUShaderModuleCompilationHint *struct_ptr) {
    LOG_WARN("free_shader_module_compilation_hint: TODO");
    return 0;
}

int free_surface_descriptor(WGPUSurfaceDescriptor *struct_ptr) {
    LOG_WARN("free_surface_descriptor: TODO");
    return 0;
}

int free_texture_descriptor(WGPUTextureDescriptor *struct_ptr) {
    LOG_WARN("free_texture_descriptor: TODO");
    return 0;
}

int free_texture_view_descriptor(WGPUTextureViewDescriptor *struct_ptr) {
    LOG_WARN("free_texture_view_descriptor: TODO");
    return 0;
}

int free_adapter_info(WGPUAdapterInfo *struct_ptr) {
    LOG_WARN("free_adapter_info: TODO");
    return 0;
}

int free_surface_capabilities(WGPUSurfaceCapabilities *struct_ptr) {
    LOG_WARN("free_surface_capabilities: TODO");
    return 0;
}

int free_supported_limits(WGPUSupportedLimits *struct_ptr) {
    LOG_WARN("free_supported_limits: TODO");
    return 0;
}

int free_render_pass_descriptor_max_draw_count(WGPURenderPassDescriptorMaxDrawCount *struct_ptr) {
    LOG_WARN("free_render_pass_descriptor_max_draw_count: TODO");
    return 0;
}

int free_primitive_depth_clip_control(WGPUPrimitiveDepthClipControl *struct_ptr) {
    LOG_WARN("free_primitive_depth_clip_control: TODO");
    return 0;
}

int free_shader_module_SPIRV_descriptor(WGPUShaderModuleSPIRVDescriptor *struct_ptr) {
    LOG_WARN("free_shader_module_SPIRV_descriptor: TODO");
    return 0;
}

int free_shader_module_WGSL_descriptor(WGPUShaderModuleWGSLDescriptor *struct_ptr) {
    LOG_WARN("free_shader_module_WGSL_descriptor: TODO");
    return 0;
}

int free_surface_descriptor_from_android_native_window(WGPUSurfaceDescriptorFromAndroidNativeWindow *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_android_native_window: TODO");
    return 0;
}

int free_surface_descriptor_from_canvas_HTML_selector(WGPUSurfaceDescriptorFromCanvasHTMLSelector *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_canvas_HTML_selector: TODO");
    return 0;
}

int free_surface_descriptor_from_metal_layer(WGPUSurfaceDescriptorFromMetalLayer *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_metal_layer: TODO");
    return 0;
}

int free_surface_descriptor_from_windows_HWND(WGPUSurfaceDescriptorFromWindowsHWND *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_windows_HWND: TODO");
    return 0;
}

int free_surface_descriptor_from_xcb_window(WGPUSurfaceDescriptorFromXcbWindow *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_xcb_window: TODO");
    return 0;
}

int free_surface_descriptor_from_xlib_window(WGPUSurfaceDescriptorFromXlibWindow *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_xlib_window: TODO");
    return 0;
}

int free_surface_descriptor_from_wayland_surface(WGPUSurfaceDescriptorFromWaylandSurface *struct_ptr) {
    LOG_WARN("free_surface_descriptor_from_wayland_surface: TODO");
    return 0;
}


/* Wasm Callback Function Definitions */
void host_callback_wgpuAdapterRequestDevice(
    WGPURequestDeviceStatus status,
    WGPUDevice device,
    const char * message,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuBufferMapAsync(
    WGPUBufferMapAsyncStatus status,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuDeviceCreateComputePipelineAsync(
    WGPUCreatePipelineAsyncStatus status,
    WGPUComputePipeline pipeline,
    const char * message,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuDeviceCreateRenderPipelineAsync(
    WGPUCreatePipelineAsyncStatus status,
    WGPURenderPipeline pipeline,
    const char * message,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuInstanceRequestAdapter(
    WGPURequestAdapterStatus status,
    WGPUAdapter adapter,
    const char * message,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuQueueOnSubmittedWorkDone(
    WGPUQueueWorkDoneStatus status,
    void * userdata
) {
    /* TODO: Callback */
}

void host_callback_wgpuShaderModuleGetCompilationInfo(
    WGPUCompilationInfoRequestStatus status,
    const struct WGPUCompilationInfo * compilation_info,
    void * userdata
) {
    /* TODO: Callback */
}


/* Wasm Import Function Definitions */
wasm_trap_t *wasm_import_wgpuAdapterGetLimits(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuAdapterGetLimits: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[0]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WASM_POINTER_STRUCT_C_TYPE limits_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSupportedLimits *limits = NULL;
    extract_supported_limits(&registry, memory, (byte_t *)limits_wa_struct_ptr, &limits);


    wgpuAdapterGetLimits(adapter, limits);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuAdapterHasFeature(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuAdapterHasFeature: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[0]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WGPUFeatureName feature = wasm_val_to_native_int(args->data[1]);


    wgpuAdapterHasFeature(adapter, feature);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuAdapterEnumerateFeatures(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuAdapterEnumerateFeatures: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[0]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WGPUFeatureName * features = (WGPUFeatureName *)wasm_val_to_native_int(args->data[1]);


    wgpuAdapterEnumerateFeatures(adapter, features);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuAdapterGetInfo(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuAdapterGetInfo: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[0]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WASM_POINTER_STRUCT_C_TYPE info_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUAdapterInfo *info = NULL;
    extract_adapter_info(&registry, memory, (byte_t *)info_wa_struct_ptr, &info);


    wgpuAdapterGetInfo(adapter, info);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuAdapterRequestDevice(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuAdapterRequestDevice: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[0]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUDeviceDescriptor *descriptor = NULL;
    extract_device_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[2]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuAdapterRequestDevice(adapter, descriptor, host_callback_wgpuAdapterRequestDevice, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBindGroupSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBindGroupSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_bind_group = wasm_val_to_native_int(args->data[0]);
    WGPUBindGroup bind_group = (WGPUBindGroup)registry_item_get_mapping(&registry.bindGroups, mapping_index_bind_group);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuBindGroupSetLabel(bind_group, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBindGroupLayoutSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBindGroupLayoutSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_bind_group_layout = wasm_val_to_native_int(args->data[0]);
    WGPUBindGroupLayout bind_group_layout = (WGPUBindGroupLayout)registry_item_get_mapping(&registry.bindGroupLayouts, mapping_index_bind_group_layout);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuBindGroupLayoutSetLabel(bind_group_layout, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferMapAsync(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferMapAsync: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    WGPUMapMode mode = wasm_val_to_native_int(args->data[1]);

    size_t offset = wasm_val_to_native_int(args->data[2]);

    size_t size = wasm_val_to_native_int(args->data[3]);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[4]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[5]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuBufferMapAsync(buffer, mode, offset, size, host_callback_wgpuBufferMapAsync, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferGetMappedRange(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferGetMappedRange: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    size_t offset = wasm_val_to_native_int(args->data[1]);

    size_t size = wasm_val_to_native_int(args->data[2]);


    wgpuBufferGetMappedRange(buffer, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferGetConstMappedRange(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferGetConstMappedRange: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    size_t offset = wasm_val_to_native_int(args->data[1]);

    size_t size = wasm_val_to_native_int(args->data[2]);


    wgpuBufferGetConstMappedRange(buffer, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuBufferSetLabel(buffer, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferGetUsage(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferGetUsage: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);


    wgpuBufferGetUsage(buffer);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferGetSize(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferGetSize: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);


    wgpuBufferGetSize(buffer);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferGetMapState(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferGetMapState: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);


    wgpuBufferGetMapState(buffer);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferUnmap(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferUnmap: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);


    wgpuBufferUnmap(buffer);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuBufferDestroy(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuBufferDestroy: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);


    wgpuBufferDestroy(buffer);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandBufferSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandBufferSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_buffer = wasm_val_to_native_int(args->data[0]);
    WGPUCommandBuffer command_buffer = (WGPUCommandBuffer)registry_item_get_mapping(&registry.commandBuffers, mapping_index_command_buffer);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuCommandBufferSetLabel(command_buffer, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderFinish(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderFinish: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUCommandBufferDescriptor *descriptor = NULL;
    extract_command_buffer_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuCommandEncoderFinish(command_encoder, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderBeginComputePass(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderBeginComputePass: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUComputePassDescriptor *descriptor = NULL;
    extract_compute_pass_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuCommandEncoderBeginComputePass(command_encoder, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderBeginRenderPass(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderBeginRenderPass: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURenderPassDescriptor *descriptor = NULL;
    extract_render_pass_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuCommandEncoderBeginRenderPass(command_encoder, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderCopyBufferToBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderCopyBufferToBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    uint32_t mapping_index_source = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer source = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_source);

    uint64_t source_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t source_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t source_offset = source_offset_high << 32 | source_offset_low;

    uint32_t mapping_index_destination = wasm_val_to_native_int(args->data[4]);
    WGPUBuffer destination = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_destination);

    uint64_t destination_offset_high = wasm_val_to_native_int(args->data[5]);
    uint64_t destination_offset_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t destination_offset = destination_offset_high << 32 | destination_offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[7]);
    uint64_t size_low = wasm_val_to_native_int(args->data[7 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuCommandEncoderCopyBufferToBuffer(command_encoder, source, source_offset, destination, destination_offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderCopyBufferToTexture(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderCopyBufferToTexture: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE source_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUImageCopyBuffer *source = NULL;
    extract_image_copy_buffer(&registry, memory, (byte_t *)source_wa_struct_ptr, &source);

    WASM_POINTER_STRUCT_C_TYPE destination_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPUImageCopyTexture *destination = NULL;
    extract_image_copy_texture(&registry, memory, (byte_t *)destination_wa_struct_ptr, &destination);

    WASM_POINTER_STRUCT_C_TYPE copy_size_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WGPUExtent3D *copy_size = NULL;
    extract_extent_3D(&registry, memory, (byte_t *)copy_size_wa_struct_ptr, &copy_size);


    wgpuCommandEncoderCopyBufferToTexture(command_encoder, source, destination, copy_size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderCopyTextureToBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderCopyTextureToBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE source_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUImageCopyTexture *source = NULL;
    extract_image_copy_texture(&registry, memory, (byte_t *)source_wa_struct_ptr, &source);

    WASM_POINTER_STRUCT_C_TYPE destination_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPUImageCopyBuffer *destination = NULL;
    extract_image_copy_buffer(&registry, memory, (byte_t *)destination_wa_struct_ptr, &destination);

    WASM_POINTER_STRUCT_C_TYPE copy_size_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WGPUExtent3D *copy_size = NULL;
    extract_extent_3D(&registry, memory, (byte_t *)copy_size_wa_struct_ptr, &copy_size);


    wgpuCommandEncoderCopyTextureToBuffer(command_encoder, source, destination, copy_size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderCopyTextureToTexture(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderCopyTextureToTexture: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRUCT_C_TYPE source_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUImageCopyTexture *source = NULL;
    extract_image_copy_texture(&registry, memory, (byte_t *)source_wa_struct_ptr, &source);

    WASM_POINTER_STRUCT_C_TYPE destination_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPUImageCopyTexture *destination = NULL;
    extract_image_copy_texture(&registry, memory, (byte_t *)destination_wa_struct_ptr, &destination);

    WASM_POINTER_STRUCT_C_TYPE copy_size_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WGPUExtent3D *copy_size = NULL;
    extract_extent_3D(&registry, memory, (byte_t *)copy_size_wa_struct_ptr, &copy_size);


    wgpuCommandEncoderCopyTextureToTexture(command_encoder, source, destination, copy_size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderClearBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderClearBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    uint64_t offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t offset = offset_high << 32 | offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[4]);
    uint64_t size_low = wasm_val_to_native_int(args->data[4 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuCommandEncoderClearBuffer(command_encoder, buffer, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderInsertDebugMarker(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderInsertDebugMarker: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRING_C_TYPE marker_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * marker_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, marker_label_wa_string_ptr, &marker_label, 1024);


    wgpuCommandEncoderInsertDebugMarker(command_encoder, marker_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderPopDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderPopDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);


    wgpuCommandEncoderPopDebugGroup(command_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderPushDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderPushDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRING_C_TYPE group_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * group_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, group_label_wa_string_ptr, &group_label, 1024);


    wgpuCommandEncoderPushDebugGroup(command_encoder, group_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderResolveQuerySet(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderResolveQuerySet: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[1]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);

    uint32_t first_query = wasm_val_to_native_int(args->data[2]);

    uint32_t query_count = wasm_val_to_native_int(args->data[3]);

    uint32_t mapping_index_destination = wasm_val_to_native_int(args->data[4]);
    WGPUBuffer destination = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_destination);

    uint64_t destination_offset_high = wasm_val_to_native_int(args->data[5]);
    uint64_t destination_offset_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t destination_offset = destination_offset_high << 32 | destination_offset_low;


    wgpuCommandEncoderResolveQuerySet(command_encoder, query_set, first_query, query_count, destination, destination_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderWriteTimestamp(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderWriteTimestamp: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[1]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);

    uint32_t query_index = wasm_val_to_native_int(args->data[2]);


    wgpuCommandEncoderWriteTimestamp(command_encoder, query_set, query_index);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuCommandEncoderSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuCommandEncoderSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_command_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUCommandEncoder command_encoder = (WGPUCommandEncoder)registry_item_get_mapping(&registry.commandEncoders, mapping_index_command_encoder);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuCommandEncoderSetLabel(command_encoder, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderInsertDebugMarker(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderInsertDebugMarker: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    WASM_POINTER_STRING_C_TYPE marker_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * marker_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, marker_label_wa_string_ptr, &marker_label, 1024);


    wgpuComputePassEncoderInsertDebugMarker(compute_pass_encoder, marker_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderPopDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderPopDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);


    wgpuComputePassEncoderPopDebugGroup(compute_pass_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderPushDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderPushDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    WASM_POINTER_STRING_C_TYPE group_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * group_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, group_label_wa_string_ptr, &group_label, 1024);


    wgpuComputePassEncoderPushDebugGroup(compute_pass_encoder, group_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderSetPipeline(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderSetPipeline: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    uint32_t mapping_index_pipeline = wasm_val_to_native_int(args->data[1]);
    WGPUComputePipeline pipeline = (WGPUComputePipeline)registry_item_get_mapping(&registry.computePipelines, mapping_index_pipeline);


    wgpuComputePassEncoderSetPipeline(compute_pass_encoder, pipeline);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderSetBindGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderSetBindGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    uint32_t group_index = wasm_val_to_native_int(args->data[1]);

    uint32_t mapping_index_group = wasm_val_to_native_int(args->data[2]);
    WGPUBindGroup group = (WGPUBindGroup)registry_item_get_mapping(&registry.bindGroups, mapping_index_group);

    int dynamic_offsets_count = wasm_val_to_native_int(args->data[3]);

    WASM_POINTER_ARRAY_C_TYPE dynamic_offsets_wa_array_ptr = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[4]);
    uint32_t *dynamic_offsets_array = calloc(dynamic_offsets_count, sizeof(uint32_t));
    for (size_t dynamic_offsets_iter = 0; dynamic_offsets_iter < dynamic_offsets_count; dynamic_offsets_iter++) {
        wasm_safe_copy_int(memory, dynamic_offsets_wa_array_ptr + dynamic_offsets_iter, &(dynamic_offsets_array[dynamic_offsets_iter]));
    }


    wgpuComputePassEncoderSetBindGroup(compute_pass_encoder, group_index, group, dynamic_offsets_count, dynamic_offsets_array);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderDispatchWorkgroups(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderDispatchWorkgroups: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    uint32_t workgroupCountX = wasm_val_to_native_int(args->data[1]);

    uint32_t workgroupCountY = wasm_val_to_native_int(args->data[2]);

    uint32_t workgroupCountZ = wasm_val_to_native_int(args->data[3]);


    wgpuComputePassEncoderDispatchWorkgroups(compute_pass_encoder, workgroupCountX, workgroupCountY, workgroupCountZ);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderDispatchWorkgroupsIndirect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderDispatchWorkgroupsIndirect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    uint32_t mapping_index_indirect_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer indirect_buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_indirect_buffer);

    uint64_t indirect_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t indirect_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t indirect_offset = indirect_offset_high << 32 | indirect_offset_low;


    wgpuComputePassEncoderDispatchWorkgroupsIndirect(compute_pass_encoder, indirect_buffer, indirect_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderEnd(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderEnd: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);


    wgpuComputePassEncoderEnd(compute_pass_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePassEncoderSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePassEncoderSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPUComputePassEncoder compute_pass_encoder = (WGPUComputePassEncoder)registry_item_get_mapping(&registry.computePassEncoders, mapping_index_compute_pass_encoder);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuComputePassEncoderSetLabel(compute_pass_encoder, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePipelineGetBindGroupLayout(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePipelineGetBindGroupLayout: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pipeline = wasm_val_to_native_int(args->data[0]);
    WGPUComputePipeline compute_pipeline = (WGPUComputePipeline)registry_item_get_mapping(&registry.computePipelines, mapping_index_compute_pipeline);

    uint32_t group_index = wasm_val_to_native_int(args->data[1]);


    wgpuComputePipelineGetBindGroupLayout(compute_pipeline, group_index);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuComputePipelineSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuComputePipelineSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_compute_pipeline = wasm_val_to_native_int(args->data[0]);
    WGPUComputePipeline compute_pipeline = (WGPUComputePipeline)registry_item_get_mapping(&registry.computePipelines, mapping_index_compute_pipeline);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuComputePipelineSetLabel(compute_pipeline, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateBindGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateBindGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUBindGroupDescriptor *descriptor = NULL;
    extract_bind_group_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateBindGroup(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateBindGroupLayout(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateBindGroupLayout: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUBindGroupLayoutDescriptor *descriptor = NULL;
    extract_bind_group_layout_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateBindGroupLayout(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUBufferDescriptor *descriptor = NULL;
    extract_buffer_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateBuffer(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateCommandEncoder(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateCommandEncoder: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUCommandEncoderDescriptor *descriptor = NULL;
    extract_command_encoder_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateCommandEncoder(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateComputePipeline(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateComputePipeline: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUComputePipelineDescriptor *descriptor = NULL;
    extract_compute_pipeline_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateComputePipeline(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateComputePipelineAsync(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateComputePipelineAsync: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUComputePipelineDescriptor *descriptor = NULL;
    extract_compute_pipeline_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[2]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuDeviceCreateComputePipelineAsync(device, descriptor, host_callback_wgpuDeviceCreateComputePipelineAsync, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreatePipelineLayout(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreatePipelineLayout: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUPipelineLayoutDescriptor *descriptor = NULL;
    extract_pipeline_layout_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreatePipelineLayout(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateQuerySet(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateQuerySet: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUQuerySetDescriptor *descriptor = NULL;
    extract_query_set_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateQuerySet(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateRenderPipelineAsync(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateRenderPipelineAsync: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURenderPipelineDescriptor *descriptor = NULL;
    extract_render_pipeline_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[2]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuDeviceCreateRenderPipelineAsync(device, descriptor, host_callback_wgpuDeviceCreateRenderPipelineAsync, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateRenderBundleEncoder(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateRenderBundleEncoder: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURenderBundleEncoderDescriptor *descriptor = NULL;
    extract_render_bundle_encoder_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateRenderBundleEncoder(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateRenderPipeline(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateRenderPipeline: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURenderPipelineDescriptor *descriptor = NULL;
    extract_render_pipeline_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateRenderPipeline(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateSampler(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateSampler: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSamplerDescriptor *descriptor = NULL;
    extract_sampler_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateSampler(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateShaderModule(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateShaderModule: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUShaderModuleDescriptor *descriptor = NULL;
    extract_shader_module_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateShaderModule(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceCreateTexture(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceCreateTexture: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUTextureDescriptor *descriptor = NULL;
    extract_texture_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuDeviceCreateTexture(device, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceDestroy(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceDestroy: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);


    wgpuDeviceDestroy(device);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceGetLimits(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceGetLimits: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRUCT_C_TYPE limits_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSupportedLimits *limits = NULL;
    extract_supported_limits(&registry, memory, (byte_t *)limits_wa_struct_ptr, &limits);


    wgpuDeviceGetLimits(device, limits);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceHasFeature(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceHasFeature: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WGPUFeatureName feature = wasm_val_to_native_int(args->data[1]);


    wgpuDeviceHasFeature(device, feature);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceEnumerateFeatures(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceEnumerateFeatures: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WGPUFeatureName * features = (WGPUFeatureName *)wasm_val_to_native_int(args->data[1]);


    wgpuDeviceEnumerateFeatures(device, features);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceGetQueue(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceGetQueue: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);


    wgpuDeviceGetQueue(device);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDevicePushErrorScope(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDevicePushErrorScope: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WGPUErrorFilter filter = wasm_val_to_native_int(args->data[1]);


    wgpuDevicePushErrorScope(device, filter);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDevicePopErrorScope(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDevicePopErrorScope: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    void * callback = (void *)wasm_val_to_native_int(args->data[1]);

    void * userdata = (void *)wasm_val_to_native_int(args->data[2]);


    wgpuDevicePopErrorScope(device, callback, userdata);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuDeviceSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuDeviceSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_device = wasm_val_to_native_int(args->data[0]);
    WGPUDevice device = (WGPUDevice)registry_item_get_mapping(&registry.devices, mapping_index_device);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuDeviceSetLabel(device, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuInstanceCreateSurface(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuInstanceCreateSurface: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_instance = wasm_val_to_native_int(args->data[0]);
    WGPUInstance instance = (WGPUInstance)registry_item_get_mapping(&registry.instances, mapping_index_instance);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSurfaceDescriptor *descriptor = NULL;
    extract_surface_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuInstanceCreateSurface(instance, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuInstanceHasWGSLLanguageFeature(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuInstanceHasWGSLLanguageFeature: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_instance = wasm_val_to_native_int(args->data[0]);
    WGPUInstance instance = (WGPUInstance)registry_item_get_mapping(&registry.instances, mapping_index_instance);

    WGPUWGSLFeatureName feature = wasm_val_to_native_int(args->data[1]);


    wgpuInstanceHasWGSLLanguageFeature(instance, feature);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuInstanceProcessEvents(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuInstanceProcessEvents: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_instance = wasm_val_to_native_int(args->data[0]);
    WGPUInstance instance = (WGPUInstance)registry_item_get_mapping(&registry.instances, mapping_index_instance);


    wgpuInstanceProcessEvents(instance);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuInstanceRequestAdapter(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuInstanceRequestAdapter: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_instance = wasm_val_to_native_int(args->data[0]);
    WGPUInstance instance = (WGPUInstance)registry_item_get_mapping(&registry.instances, mapping_index_instance);

    WASM_POINTER_STRUCT_C_TYPE options_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURequestAdapterOptions *options = NULL;
    extract_request_adapter_options(&registry, memory, (byte_t *)options_wa_struct_ptr, &options);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[2]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[3]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuInstanceRequestAdapter(instance, options, host_callback_wgpuInstanceRequestAdapter, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuPipelineLayoutSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuPipelineLayoutSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_pipeline_layout = wasm_val_to_native_int(args->data[0]);
    WGPUPipelineLayout pipeline_layout = (WGPUPipelineLayout)registry_item_get_mapping(&registry.pipelineLayouts, mapping_index_pipeline_layout);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuPipelineLayoutSetLabel(pipeline_layout, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQuerySetSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQuerySetSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[0]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuQuerySetSetLabel(query_set, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQuerySetGetType(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQuerySetGetType: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[0]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);


    wgpuQuerySetGetType(query_set);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQuerySetGetCount(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQuerySetGetCount: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[0]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);


    wgpuQuerySetGetCount(query_set);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQuerySetDestroy(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQuerySetDestroy: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_query_set = wasm_val_to_native_int(args->data[0]);
    WGPUQuerySet query_set = (WGPUQuerySet)registry_item_get_mapping(&registry.querySets, mapping_index_query_set);


    wgpuQuerySetDestroy(query_set);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQueueSubmit(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQueueSubmit: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_queue = wasm_val_to_native_int(args->data[0]);
    WGPUQueue queue = (WGPUQueue)registry_item_get_mapping(&registry.queues, mapping_index_queue);

    int commands_count = wasm_val_to_native_int(args->data[1]);

    WASM_POINTER_ARRAY_C_TYPE commands_wa_array_ptr = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPUCommandBuffer *commands_array = calloc(commands_count, sizeof(void *));
    for (size_t commands_iter = 0; commands_iter < commands_count; commands_iter++) {
        int mapping_index_commands = wasm_val_to_native_int(args->data[2]);
        wasm_safe_copy_int(memory, commands_wa_array_ptr + commands_iter, &mapping_index_commands);
        commands_array[commands_iter] = (WGPUCommandBuffer *)registry_item_get_mapping(&registry.commandBuffers, mapping_index_commands);
    }


    wgpuQueueSubmit(queue, commands_count, commands_array);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQueueOnSubmittedWorkDone(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQueueOnSubmittedWorkDone: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_queue = wasm_val_to_native_int(args->data[0]);
    WGPUQueue queue = (WGPUQueue)registry_item_get_mapping(&registry.queues, mapping_index_queue);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[1]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuQueueOnSubmittedWorkDone(queue, host_callback_wgpuQueueOnSubmittedWorkDone, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQueueWriteBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQueueWriteBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_queue = wasm_val_to_native_int(args->data[0]);
    WGPUQueue queue = (WGPUQueue)registry_item_get_mapping(&registry.queues, mapping_index_queue);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    uint64_t buffer_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t buffer_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t buffer_offset = buffer_offset_high << 32 | buffer_offset_low;

    void * data = (void *)wasm_val_to_native_int(args->data[4]);

    size_t size = wasm_val_to_native_int(args->data[5]);


    wgpuQueueWriteBuffer(queue, buffer, buffer_offset, data, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQueueWriteTexture(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQueueWriteTexture: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_queue = wasm_val_to_native_int(args->data[0]);
    WGPUQueue queue = (WGPUQueue)registry_item_get_mapping(&registry.queues, mapping_index_queue);

    WASM_POINTER_STRUCT_C_TYPE destination_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUImageCopyTexture *destination = NULL;
    extract_image_copy_texture(&registry, memory, (byte_t *)destination_wa_struct_ptr, &destination);

    void * data = (void *)wasm_val_to_native_int(args->data[2]);

    size_t data_size = wasm_val_to_native_int(args->data[3]);

    WASM_POINTER_STRUCT_C_TYPE data_layout_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[4]);
    WGPUTextureDataLayout *data_layout = NULL;
    extract_texture_data_layout(&registry, memory, (byte_t *)data_layout_wa_struct_ptr, &data_layout);

    WASM_POINTER_STRUCT_C_TYPE write_size_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[5]);
    WGPUExtent3D *write_size = NULL;
    extract_extent_3D(&registry, memory, (byte_t *)write_size_wa_struct_ptr, &write_size);


    wgpuQueueWriteTexture(queue, destination, data, data_size, data_layout, write_size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuQueueSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuQueueSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_queue = wasm_val_to_native_int(args->data[0]);
    WGPUQueue queue = (WGPUQueue)registry_item_get_mapping(&registry.queues, mapping_index_queue);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuQueueSetLabel(queue, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundle render_bundle = (WGPURenderBundle)registry_item_get_mapping(&registry.renderBundles, mapping_index_render_bundle);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuRenderBundleSetLabel(render_bundle, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetPipeline(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderSetPipeline: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t mapping_index_pipeline = wasm_val_to_native_int(args->data[1]);
    WGPURenderPipeline pipeline = (WGPURenderPipeline)registry_item_get_mapping(&registry.renderPipelines, mapping_index_pipeline);


    wgpuRenderBundleEncoderSetPipeline(render_bundle_encoder, pipeline);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetBindGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderSetBindGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t group_index = wasm_val_to_native_int(args->data[1]);

    uint32_t mapping_index_group = wasm_val_to_native_int(args->data[2]);
    WGPUBindGroup group = (WGPUBindGroup)registry_item_get_mapping(&registry.bindGroups, mapping_index_group);

    int dynamic_offsets_count = wasm_val_to_native_int(args->data[3]);

    WASM_POINTER_ARRAY_C_TYPE dynamic_offsets_wa_array_ptr = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[4]);
    uint32_t *dynamic_offsets_array = calloc(dynamic_offsets_count, sizeof(uint32_t));
    for (size_t dynamic_offsets_iter = 0; dynamic_offsets_iter < dynamic_offsets_count; dynamic_offsets_iter++) {
        wasm_safe_copy_int(memory, dynamic_offsets_wa_array_ptr + dynamic_offsets_iter, &(dynamic_offsets_array[dynamic_offsets_iter]));
    }


    wgpuRenderBundleEncoderSetBindGroup(render_bundle_encoder, group_index, group, dynamic_offsets_count, dynamic_offsets_array);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDraw(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderDraw: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t vertex_count = wasm_val_to_native_int(args->data[1]);

    uint32_t instance_count = wasm_val_to_native_int(args->data[2]);

    uint32_t first_vertex = wasm_val_to_native_int(args->data[3]);

    uint32_t first_instance = wasm_val_to_native_int(args->data[4]);


    wgpuRenderBundleEncoderDraw(render_bundle_encoder, vertex_count, instance_count, first_vertex, first_instance);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndexed(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderDrawIndexed: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t index_count = wasm_val_to_native_int(args->data[1]);

    uint32_t instance_count = wasm_val_to_native_int(args->data[2]);

    uint32_t first_index = wasm_val_to_native_int(args->data[3]);

    int32_t base_vertex = wasm_val_to_native_int(args->data[4]);

    uint32_t first_instance = wasm_val_to_native_int(args->data[5]);


    wgpuRenderBundleEncoderDrawIndexed(render_bundle_encoder, index_count, instance_count, first_index, base_vertex, first_instance);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndirect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderDrawIndirect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t mapping_index_indirect_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer indirect_buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_indirect_buffer);

    uint64_t indirect_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t indirect_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t indirect_offset = indirect_offset_high << 32 | indirect_offset_low;


    wgpuRenderBundleEncoderDrawIndirect(render_bundle_encoder, indirect_buffer, indirect_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderDrawIndexedIndirect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderDrawIndexedIndirect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t mapping_index_indirect_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer indirect_buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_indirect_buffer);

    uint64_t indirect_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t indirect_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t indirect_offset = indirect_offset_high << 32 | indirect_offset_low;


    wgpuRenderBundleEncoderDrawIndexedIndirect(render_bundle_encoder, indirect_buffer, indirect_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderInsertDebugMarker(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderInsertDebugMarker: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    WASM_POINTER_STRING_C_TYPE marker_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * marker_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, marker_label_wa_string_ptr, &marker_label, 1024);


    wgpuRenderBundleEncoderInsertDebugMarker(render_bundle_encoder, marker_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderPopDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderPopDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);


    wgpuRenderBundleEncoderPopDebugGroup(render_bundle_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderPushDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderPushDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    WASM_POINTER_STRING_C_TYPE group_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * group_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, group_label_wa_string_ptr, &group_label, 1024);


    wgpuRenderBundleEncoderPushDebugGroup(render_bundle_encoder, group_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetVertexBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderSetVertexBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t slot = wasm_val_to_native_int(args->data[1]);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[2]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    uint64_t offset_high = wasm_val_to_native_int(args->data[3]);
    uint64_t offset_low = wasm_val_to_native_int(args->data[3 + 1]);
    uint64_t offset = offset_high << 32 | offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[5]);
    uint64_t size_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuRenderBundleEncoderSetVertexBuffer(render_bundle_encoder, slot, buffer, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetIndexBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderSetIndexBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    WGPUIndexFormat format = wasm_val_to_native_int(args->data[2]);

    uint64_t offset_high = wasm_val_to_native_int(args->data[3]);
    uint64_t offset_low = wasm_val_to_native_int(args->data[3 + 1]);
    uint64_t offset = offset_high << 32 | offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[5]);
    uint64_t size_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuRenderBundleEncoderSetIndexBuffer(render_bundle_encoder, buffer, format, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderFinish(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderFinish: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPURenderBundleDescriptor *descriptor = NULL;
    extract_render_bundle_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuRenderBundleEncoderFinish(render_bundle_encoder, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderBundleEncoderSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderBundleEncoderSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_bundle_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderBundleEncoder render_bundle_encoder = (WGPURenderBundleEncoder)registry_item_get_mapping(&registry.renderBundleEncoders, mapping_index_render_bundle_encoder);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuRenderBundleEncoderSetLabel(render_bundle_encoder, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetPipeline(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetPipeline: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t mapping_index_pipeline = wasm_val_to_native_int(args->data[1]);
    WGPURenderPipeline pipeline = (WGPURenderPipeline)registry_item_get_mapping(&registry.renderPipelines, mapping_index_pipeline);


    wgpuRenderPassEncoderSetPipeline(render_pass_encoder, pipeline);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetBindGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetBindGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t group_index = wasm_val_to_native_int(args->data[1]);

    uint32_t mapping_index_group = wasm_val_to_native_int(args->data[2]);
    WGPUBindGroup group = (WGPUBindGroup)registry_item_get_mapping(&registry.bindGroups, mapping_index_group);

    int dynamic_offsets_count = wasm_val_to_native_int(args->data[3]);

    WASM_POINTER_ARRAY_C_TYPE dynamic_offsets_wa_array_ptr = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[4]);
    uint32_t *dynamic_offsets_array = calloc(dynamic_offsets_count, sizeof(uint32_t));
    for (size_t dynamic_offsets_iter = 0; dynamic_offsets_iter < dynamic_offsets_count; dynamic_offsets_iter++) {
        wasm_safe_copy_int(memory, dynamic_offsets_wa_array_ptr + dynamic_offsets_iter, &(dynamic_offsets_array[dynamic_offsets_iter]));
    }


    wgpuRenderPassEncoderSetBindGroup(render_pass_encoder, group_index, group, dynamic_offsets_count, dynamic_offsets_array);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderDraw(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderDraw: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t vertex_count = wasm_val_to_native_int(args->data[1]);

    uint32_t instance_count = wasm_val_to_native_int(args->data[2]);

    uint32_t first_vertex = wasm_val_to_native_int(args->data[3]);

    uint32_t first_instance = wasm_val_to_native_int(args->data[4]);


    wgpuRenderPassEncoderDraw(render_pass_encoder, vertex_count, instance_count, first_vertex, first_instance);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndexed(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderDrawIndexed: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t index_count = wasm_val_to_native_int(args->data[1]);

    uint32_t instance_count = wasm_val_to_native_int(args->data[2]);

    uint32_t first_index = wasm_val_to_native_int(args->data[3]);

    int32_t base_vertex = wasm_val_to_native_int(args->data[4]);

    uint32_t first_instance = wasm_val_to_native_int(args->data[5]);


    wgpuRenderPassEncoderDrawIndexed(render_pass_encoder, index_count, instance_count, first_index, base_vertex, first_instance);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndirect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderDrawIndirect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t mapping_index_indirect_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer indirect_buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_indirect_buffer);

    uint64_t indirect_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t indirect_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t indirect_offset = indirect_offset_high << 32 | indirect_offset_low;


    wgpuRenderPassEncoderDrawIndirect(render_pass_encoder, indirect_buffer, indirect_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderDrawIndexedIndirect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderDrawIndexedIndirect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t mapping_index_indirect_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer indirect_buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_indirect_buffer);

    uint64_t indirect_offset_high = wasm_val_to_native_int(args->data[2]);
    uint64_t indirect_offset_low = wasm_val_to_native_int(args->data[2 + 1]);
    uint64_t indirect_offset = indirect_offset_high << 32 | indirect_offset_low;


    wgpuRenderPassEncoderDrawIndexedIndirect(render_pass_encoder, indirect_buffer, indirect_offset);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderExecuteBundles(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderExecuteBundles: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    int bundles_count = wasm_val_to_native_int(args->data[1]);

    WASM_POINTER_ARRAY_C_TYPE bundles_wa_array_ptr = (WASM_POINTER_ARRAY_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPURenderBundle *bundles_array = calloc(bundles_count, sizeof(void *));
    for (size_t bundles_iter = 0; bundles_iter < bundles_count; bundles_iter++) {
        int mapping_index_bundles = wasm_val_to_native_int(args->data[2]);
        wasm_safe_copy_int(memory, bundles_wa_array_ptr + bundles_iter, &mapping_index_bundles);
        bundles_array[bundles_iter] = (WGPURenderBundle *)registry_item_get_mapping(&registry.renderBundles, mapping_index_bundles);
    }


    wgpuRenderPassEncoderExecuteBundles(render_pass_encoder, bundles_count, bundles_array);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderInsertDebugMarker(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderInsertDebugMarker: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    WASM_POINTER_STRING_C_TYPE marker_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * marker_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, marker_label_wa_string_ptr, &marker_label, 1024);


    wgpuRenderPassEncoderInsertDebugMarker(render_pass_encoder, marker_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderPopDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderPopDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);


    wgpuRenderPassEncoderPopDebugGroup(render_pass_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderPushDebugGroup(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderPushDebugGroup: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    WASM_POINTER_STRING_C_TYPE group_label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * group_label = NULL;
    wasm_safe_copy_string_null_terminated(memory, group_label_wa_string_ptr, &group_label, 1024);


    wgpuRenderPassEncoderPushDebugGroup(render_pass_encoder, group_label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetStencilReference(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetStencilReference: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t reference = wasm_val_to_native_int(args->data[1]);


    wgpuRenderPassEncoderSetStencilReference(render_pass_encoder, reference);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetBlendConstant(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetBlendConstant: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    WASM_POINTER_STRUCT_C_TYPE color_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUColor *color = NULL;
    extract_color(&registry, memory, (byte_t *)color_wa_struct_ptr, &color);


    wgpuRenderPassEncoderSetBlendConstant(render_pass_encoder, color);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetViewport(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetViewport: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    float x = wasm_val_to_native_float(args->data[1]);

    float y = wasm_val_to_native_float(args->data[2]);

    float width = wasm_val_to_native_float(args->data[3]);

    float height = wasm_val_to_native_float(args->data[4]);

    float min_depth = wasm_val_to_native_float(args->data[5]);

    float max_depth = wasm_val_to_native_float(args->data[6]);


    wgpuRenderPassEncoderSetViewport(render_pass_encoder, x, y, width, height, min_depth, max_depth);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetScissorRect(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetScissorRect: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t x = wasm_val_to_native_int(args->data[1]);

    uint32_t y = wasm_val_to_native_int(args->data[2]);

    uint32_t width = wasm_val_to_native_int(args->data[3]);

    uint32_t height = wasm_val_to_native_int(args->data[4]);


    wgpuRenderPassEncoderSetScissorRect(render_pass_encoder, x, y, width, height);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetVertexBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetVertexBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t slot = wasm_val_to_native_int(args->data[1]);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[2]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    uint64_t offset_high = wasm_val_to_native_int(args->data[3]);
    uint64_t offset_low = wasm_val_to_native_int(args->data[3 + 1]);
    uint64_t offset = offset_high << 32 | offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[5]);
    uint64_t size_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuRenderPassEncoderSetVertexBuffer(render_pass_encoder, slot, buffer, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetIndexBuffer(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetIndexBuffer: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t mapping_index_buffer = wasm_val_to_native_int(args->data[1]);
    WGPUBuffer buffer = (WGPUBuffer)registry_item_get_mapping(&registry.buffers, mapping_index_buffer);

    WGPUIndexFormat format = wasm_val_to_native_int(args->data[2]);

    uint64_t offset_high = wasm_val_to_native_int(args->data[3]);
    uint64_t offset_low = wasm_val_to_native_int(args->data[3 + 1]);
    uint64_t offset = offset_high << 32 | offset_low;

    uint64_t size_high = wasm_val_to_native_int(args->data[5]);
    uint64_t size_low = wasm_val_to_native_int(args->data[5 + 1]);
    uint64_t size = size_high << 32 | size_low;


    wgpuRenderPassEncoderSetIndexBuffer(render_pass_encoder, buffer, format, offset, size);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderBeginOcclusionQuery(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderBeginOcclusionQuery: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    uint32_t query_index = wasm_val_to_native_int(args->data[1]);


    wgpuRenderPassEncoderBeginOcclusionQuery(render_pass_encoder, query_index);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderEndOcclusionQuery(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderEndOcclusionQuery: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);


    wgpuRenderPassEncoderEndOcclusionQuery(render_pass_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderEnd(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderEnd: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);


    wgpuRenderPassEncoderEnd(render_pass_encoder);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPassEncoderSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPassEncoderSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pass_encoder = wasm_val_to_native_int(args->data[0]);
    WGPURenderPassEncoder render_pass_encoder = (WGPURenderPassEncoder)registry_item_get_mapping(&registry.renderPassEncoders, mapping_index_render_pass_encoder);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuRenderPassEncoderSetLabel(render_pass_encoder, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPipelineGetBindGroupLayout(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPipelineGetBindGroupLayout: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pipeline = wasm_val_to_native_int(args->data[0]);
    WGPURenderPipeline render_pipeline = (WGPURenderPipeline)registry_item_get_mapping(&registry.renderPipelines, mapping_index_render_pipeline);

    uint32_t group_index = wasm_val_to_native_int(args->data[1]);


    wgpuRenderPipelineGetBindGroupLayout(render_pipeline, group_index);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuRenderPipelineSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuRenderPipelineSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_render_pipeline = wasm_val_to_native_int(args->data[0]);
    WGPURenderPipeline render_pipeline = (WGPURenderPipeline)registry_item_get_mapping(&registry.renderPipelines, mapping_index_render_pipeline);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuRenderPipelineSetLabel(render_pipeline, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSamplerSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSamplerSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_sampler = wasm_val_to_native_int(args->data[0]);
    WGPUSampler sampler = (WGPUSampler)registry_item_get_mapping(&registry.samplers, mapping_index_sampler);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuSamplerSetLabel(sampler, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuShaderModuleGetCompilationInfo(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuShaderModuleGetCompilationInfo: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_shader_module = wasm_val_to_native_int(args->data[0]);
    WGPUShaderModule shader_module = (WGPUShaderModule)registry_item_get_mapping(&registry.shaderModules, mapping_index_shader_module);

    WASM_POINTER_FUNCTION_C_TYPE callback_wasm = (WASM_POINTER_FUNCTION_C_TYPE)wasm_val_to_native_int(args->data[1]);

    WASM_POINTER_VOID_C_TYPE userdata_wasm = (WASM_POINTER_VOID_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WasmCallbackUserdataWrapper userdata = {
        .callback = callback_wasm,
        .userdata = userdata_wasm
    };


    wgpuShaderModuleGetCompilationInfo(shader_module, host_callback_wgpuShaderModuleGetCompilationInfo, (void *)(&userdata));

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuShaderModuleSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuShaderModuleSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_shader_module = wasm_val_to_native_int(args->data[0]);
    WGPUShaderModule shader_module = (WGPUShaderModule)registry_item_get_mapping(&registry.shaderModules, mapping_index_shader_module);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuShaderModuleSetLabel(shader_module, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfaceConfigure(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfaceConfigure: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);

    WASM_POINTER_STRUCT_C_TYPE config_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSurfaceConfiguration *config = NULL;
    extract_surface_configuration(&registry, memory, (byte_t *)config_wa_struct_ptr, &config);


    wgpuSurfaceConfigure(surface, config);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfaceGetCapabilities(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfaceGetCapabilities: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);

    uint32_t mapping_index_adapter = wasm_val_to_native_int(args->data[1]);
    WGPUAdapter adapter = (WGPUAdapter)registry_item_get_mapping(&registry.adapters, mapping_index_adapter);

    WASM_POINTER_STRUCT_C_TYPE capabilities_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[2]);
    WGPUSurfaceCapabilities *capabilities = NULL;
    extract_surface_capabilities(&registry, memory, (byte_t *)capabilities_wa_struct_ptr, &capabilities);


    wgpuSurfaceGetCapabilities(surface, adapter, capabilities);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfaceGetCurrentTexture(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfaceGetCurrentTexture: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);

    WASM_POINTER_STRUCT_C_TYPE surface_texture_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUSurfaceTexture *surface_texture = NULL;
    extract_surface_texture(&registry, memory, (byte_t *)surface_texture_wa_struct_ptr, &surface_texture);


    wgpuSurfaceGetCurrentTexture(surface, surface_texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfacePresent(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfacePresent: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);


    wgpuSurfacePresent(surface);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfaceUnconfigure(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfaceUnconfigure: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);


    wgpuSurfaceUnconfigure(surface);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuSurfaceSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuSurfaceSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_surface = wasm_val_to_native_int(args->data[0]);
    WGPUSurface surface = (WGPUSurface)registry_item_get_mapping(&registry.surfaces, mapping_index_surface);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuSurfaceSetLabel(surface, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureCreateView(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureCreateView: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);

    WASM_POINTER_STRUCT_C_TYPE descriptor_wa_struct_ptr = (WASM_POINTER_STRUCT_C_TYPE)wasm_val_to_native_int(args->data[1]);
    WGPUTextureViewDescriptor *descriptor = NULL;
    extract_texture_view_descriptor(&registry, memory, (byte_t *)descriptor_wa_struct_ptr, &descriptor);


    wgpuTextureCreateView(texture, descriptor);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuTextureSetLabel(texture, label);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetWidth(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetWidth: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetWidth(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetHeight(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetHeight: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetHeight(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetDepthOrArrayLayers(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetDepthOrArrayLayers: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetDepthOrArrayLayers(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetMipLevelCount(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetMipLevelCount: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetMipLevelCount(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetSampleCount(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetSampleCount: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetSampleCount(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetDimension(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetDimension: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetDimension(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetFormat(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetFormat: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetFormat(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureGetUsage(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureGetUsage: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureGetUsage(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureDestroy(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureDestroy: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture = wasm_val_to_native_int(args->data[0]);
    WGPUTexture texture = (WGPUTexture)registry_item_get_mapping(&registry.textures, mapping_index_texture);


    wgpuTextureDestroy(texture);

    /* TODO: Freeing */
    return NULL;
}

wasm_trap_t *wasm_import_wgpuTextureViewSetLabel(
    void *env,
    const wasm_val_vec_t *args,
    wasm_val_vec_t *results
) {
    LOG_TRACE("wasm_import_wgpuTextureViewSetLabel: params: env (%p), args (%p), results (%p)", env, args, results);
    ImportHook *import_hook = (ImportHook *)env;
    Proc *proc = import_hook->proc;
    wasm_store_t *store = proc->store;
    wasm_memory_t *memory = get_memory(proc);
    byte_t *base_ptr = wasm_memory_data(memory);
    BindWGPUObjectMappingRegistry registry = proc->registry;

    /* Extract args */
    uint32_t mapping_index_texture_view = wasm_val_to_native_int(args->data[0]);
    WGPUTextureView texture_view = (WGPUTextureView)registry_item_get_mapping(&registry.textureViews, mapping_index_texture_view);

    WASM_POINTER_STRING_C_TYPE label_wa_string_ptr = wasm_val_to_native_int(args->data[1]);
    char * label = NULL;
    wasm_safe_copy_string_null_terminated(memory, label_wa_string_ptr, &label, 1024);


    wgpuTextureViewSetLabel(texture_view, label);

    /* TODO: Freeing */
    return NULL;
}


#endif // WASM_C_API_WEBGPU_IMPL_H_
