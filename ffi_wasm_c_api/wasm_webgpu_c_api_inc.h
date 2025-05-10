#ifndef WASM_C_API_WEBGPU_H_
#define WASM_C_API_WEBGPU_H_

#include <stdlib.h>

#include <webgpu.h>
#include <wasm_c_api.h>
#include "wasm_helpers_inc.h"

/* Define native WASM types */
#define WASM_C_TYPE uint32_t
#define WASM_INT_C_TYPE uint32_t
#define WASM_SIZE_C_TYPE uint32_t
#define WASM_ENUM_C_TYPE uint32_t
#define WASM_BITFLAG_C_TYPE uint32_t
#define WASM_POINTER_VOID_C_TYPE uint32_t
#define WASM_POINTER_UINT32_C_TYPE uint32_t
#define WASM_POINTER_OBJECT_C_TYPE uint32_t
#define WASM_POINTER_STRING_C_TYPE uint32_t
#define WASM_POINTER_ARRAY_C_TYPE uint32_t
#define WASM_POINTER_STRUCT_C_TYPE uint32_t
#define WASM_POINTER_FUNCTION_C_TYPE uint32_t

/* Object Registries Definition */
typedef struct BindWGPUObjectMappingRegistry {
    BindWGPUObjectMappingRegistryItem adapters;
    BindWGPUObjectMappingRegistryItem bindGroups;
    BindWGPUObjectMappingRegistryItem bindGroupLayouts;
    BindWGPUObjectMappingRegistryItem buffers;
    BindWGPUObjectMappingRegistryItem commandBuffers;
    BindWGPUObjectMappingRegistryItem commandEncoders;
    BindWGPUObjectMappingRegistryItem computePassEncoders;
    BindWGPUObjectMappingRegistryItem computePipelines;
    BindWGPUObjectMappingRegistryItem devices;
    BindWGPUObjectMappingRegistryItem instances;
    BindWGPUObjectMappingRegistryItem pipelineLayouts;
    BindWGPUObjectMappingRegistryItem querySets;
    BindWGPUObjectMappingRegistryItem queues;
    BindWGPUObjectMappingRegistryItem renderBundles;
    BindWGPUObjectMappingRegistryItem renderBundleEncoders;
    BindWGPUObjectMappingRegistryItem renderPassEncoders;
    BindWGPUObjectMappingRegistryItem renderPipelines;
    BindWGPUObjectMappingRegistryItem samplers;
    BindWGPUObjectMappingRegistryItem shaderModules;
    BindWGPUObjectMappingRegistryItem surfaces;
    BindWGPUObjectMappingRegistryItem textures;
    BindWGPUObjectMappingRegistryItem textureViews;
} BindWGPUObjectMappingRegistry;

#endif // WASM_C_API_WEBGPU_H_
