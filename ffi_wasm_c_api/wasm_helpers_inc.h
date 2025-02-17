#include <stddef.h>

/* Object Registry */
#define WGPU_OBJECT_TYPE_COUNT 128

typedef struct BindWGPUObjectMappingRegistryItem {
    size_t count;
    void* list[WGPU_OBJECT_TYPE_COUNT];
} BindWGPUObjectMappingRegistryItem;
