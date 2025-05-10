#ifndef WASM_HELPERS_H
#define WASM_HELPERS_H

#include <stdint.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <wasm_c_api.h>
#include <string.h>

#include "wasm_webgpu_c_api_inc.h"

#ifndef HB_CORE_H
#include "hb_stub.h"
#endif

/* Define native WASM types */
#define WASM_C_TYPE uint32_t
#define WASM_POINTER_ENUM_C_TYPE WASM_C_TYPE
#define WASM_FLOAT_C_TYPE float32_t
#define WASM_DEFAULT_ALIGN 1
#define WASM_INT_KIND WASM_I32
#define WASM_FLOAT_KIND WASM_F32
#define WASM_POINTER_KIND WASM_I32
#define WASM_VAL_INT_PROP i32
#define WASM_VAL_FLOAT_PROP f32

#ifndef LOG_MACROS
#define LOG_TRACE(...) do {fprintf(stderr, "[TRACE] "); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");} while (0)
#define LOG_DEBUG(...) do {fprintf(stderr, "[DEBUG] "); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");} while (0)
#define LOG_WARN(...) do {fprintf(stderr, "[WARN] "); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");} while (0)
#define LOG_ERROR(...) do {fprintf(stderr, "[ERROR] "); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");} while (0)
#define FATAL(...) do {fprintf(stderr, "[FATAL] "); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); exit(1);} while (0)
#endif /* LOG_MACROS */

#ifndef WASM_MEMORY_ERROR
#define WASM_MEMORY_ERROR(msg, ...)                                                 \
    do {                                                                       \
        LOG_ERROR("WASM Memory Error: %s\n", msg, ##__VA_ARGS__);                             \
    } while (0)
#endif

typedef struct {
    Proc *proc;
    WASM_INT_C_TYPE wasm_callback_index;
    WASM_POINTER_VOID_C_TYPE wa_wasm_userdata;
} WasmCallbackUserdataWrapper;

/* Methods */

/*
 * Adds a mapping to the registry.
 *
 * Returns the index of the mapping in the registry.
 */
size_t registry_item_add_mapping(BindWGPUObjectMappingRegistryItem* item, void* value) {
	LOG_TRACE("registry_item_add_mapping: item = %p, value = %p", item, value);

    if (item->count >= WGPU_OBJECT_TYPE_COUNT) {
		LOG_WARN("Too many mappings: %zu", item->count);
        return 0;
    }
    item->list[item->count] = value;
    item->count += 1;
    
    /* Return 1-index */
    return item->count;
}

/*
 * registry_item_get_mapping
 *
 * Gets the mapping at the given index.
 *
 * Returns NULL if the index is out of bounds.
 */
void* registry_item_get_mapping(BindWGPUObjectMappingRegistryItem* item, size_t index) {
	LOG_TRACE("registry_item_get_mapping: item = %p, index = %zu", item, index);

    /* Treat index as 1-index */
    if (index == 0) {
        LOG_DEBUG("Returning NULL for 0-index");
        return NULL;
    }

    if (index > item->count || index < 0) {
		LOG_WARN("Index out of bounds: %zu, count: %zu", index, item->count);
        return NULL;
    }

    return item->list[index - 1];
}

#define GET_WASM_SYS_INT(data) ((data).of.WASM_VAL_INT_PROP)
#define GET_WASM_SYS_FLOAT(data) ((data).of.WASM_VAL_FLOAT_PROP)

static inline WASM_INT_C_TYPE wasm_val_to_native_int(wasm_val_t wasm_val) {
    if (wasm_val.kind != WASM_INT_KIND) {
        LOG_DEBUG("wasm_val_to_native_int: expected %s, got kind: %d",
                  WASM_INT_KIND, wasm_val.kind);
    } else {
        // LOG_DEBUG("wasm_val_to_native_int: got kind: %d", WASM_INT_KIND);
    }
    return GET_WASM_SYS_INT(wasm_val);
}

static inline WASM_FLOAT_C_TYPE wasm_val_to_native_float(wasm_val_t wasm_val) {
    if (wasm_val.kind != WASM_FLOAT_KIND) {
        LOG_DEBUG("wasm_val_to_native_float: expected %s, got kind: %d",
                  WASM_FLOAT_KIND, wasm_val.kind);
    } else {
        // LOG_DEBUG("wasm_val_to_native_float: got kind: %d", WASM_FLOAT_KIND);
    }
    return GET_WASM_SYS_FLOAT(wasm_val);
}

int wasm_safe_extract_pointer(wasm_memory_t* memory, WASM_POINTER_VOID_C_TYPE wa_ptr, void **out_ha_ptr, size_t size) {
	LOG_TRACE("wasm_safe_extract_pointer args: %p %p %p %zu", memory, (void*)(uintptr_t)wa_ptr, out_ha_ptr, size);
    assert(memory != NULL);

    if (wa_ptr == 0) {
        LOG_DEBUG("wasm_safe_extract_pointer: wa_ptr is NULL");
        return 0;
    }

    if (WASM_DEFAULT_ALIGN > 1 && (wa_ptr % WASM_DEFAULT_ALIGN) != 0) {
        WASM_MEMORY_ERROR("Unaligned struct pointer in WASM memory");
        return 1;
    }

    // Get the start of the memory and its size.
    byte_t *mem_base = wasm_memory_data(memory);
    size_t mem_size = wasm_memory_data_size(memory);

    // Bounds checking: ensure wasm_ptr is within memory.
    // TODO: Also protect against overflow in pointer arithmetic?
    if (wa_ptr < 0 || (wa_ptr + size) > mem_size) {
        WASM_MEMORY_ERROR("Attempt to read struct out of WASM memory bounds");
        return 1;
    }

    // Cast the pointer to the struct
    *out_ha_ptr = (void *)(mem_base + wa_ptr);
	LOG_TRACE("wasm_safe_extract_pointer result: mem_base %p + wa_ptr %p = *out_ha_ptr %p", mem_base, (void*)(uintptr_t)wa_ptr, *out_ha_ptr);

    return 0;
}

int wasm_safe_extract_string_null_terminated(wasm_memory_t* memory, WASM_POINTER_STRING_C_TYPE wasm_str_ptr, char **host_string, size_t max_str_len) {
    LOG_TRACE("wasm_safe_extract_string_null_terminated args: %p %p %p %zu", memory, (void*)(uintptr_t)wasm_str_ptr, host_string, max_str_len);
    assert(memory != NULL);
    assert(host_string != NULL);

    if (wasm_str_ptr == 0) {
        LOG_DEBUG("wasm_safe_extract_string_null_terminated: wasm_str_ptr is NULL");
        *host_string = NULL;
        return 0;
    }

    // Get the start of the memory and its size.
    byte_t *mem_base = wasm_memory_data(memory);
    size_t mem_size = wasm_memory_data_size(memory);

    // Bounds checking: ensure wasm_ptr is within memory.
    if (wasm_str_ptr < 0 || wasm_str_ptr >= mem_size) {
        WASM_MEMORY_ERROR("String pointer out of WASM memory bounds");
        return 1;
    }

    // Get pointer to the string in WASM memory
    const char *wasm_str = (const char *)(mem_base + wasm_str_ptr);
    LOG_TRACE("wasm_safe_extract_string_null_terminated: mem_base %p + wasm_str_ptr %p = wasm_str %p", 
              mem_base, (void*)(uintptr_t)wasm_str_ptr, wasm_str);

    // Find string length, ensuring we don't read past memory bounds
    size_t remaining_mem = mem_size - wasm_str_ptr;
    size_t max_len = (max_str_len > 0 && max_str_len < remaining_mem) ? max_str_len : remaining_mem;
    
    size_t str_len = strnlen(wasm_str, max_len);
    if (str_len >= max_len) {
        WASM_MEMORY_ERROR("No null terminator found within bounds");
        return 1;
    }

    // Allocate and copy the string
    *host_string = malloc(str_len + 1);
    if (*host_string == NULL) {
        WASM_MEMORY_ERROR("Failed to allocate memory for string");
        return 1;
    }

    memcpy(*host_string, wasm_str, str_len);
    (*host_string)[str_len] = '\0';
    
    LOG_TRACE("wasm_safe_extract_string_null_terminated result: %s", *host_string);
    return 0;
}

int wasm_safe_extract_int(wasm_memory_t* memory, WASM_POINTER_UINT32_C_TYPE wasm_int_ptr, int *host_int_out) {
    LOG_TRACE("wasm_safe_extract_int args: %p %p %p", memory, (void*)(uintptr_t)wasm_int_ptr, host_int_out);
    assert(memory != NULL);

    if (wasm_int_ptr == 0) {
        LOG_TRACE("wasm_safe_extract_int: wasm_int_ptr is NULL, skipping");
        return 0;
    }

    // Get the start of the memory and its size.
    byte_t *mem_base = wasm_memory_data(memory);
    size_t mem_size = wasm_memory_data_size(memory);

    // Bounds checking: ensure wasm_ptr is within memory.
    // TODO: Also protect against overflow in pointer arithmetic?
    if (wasm_int_ptr < 0 || wasm_int_ptr > mem_size) {
        WASM_MEMORY_ERROR("Attempt to read struct out of WASM memory bounds");
        return 1;
    }

    // Copy the memory from `wasm_int_ptr` to `host_int_out`
    int wasm_int_val = 0;
	memcpy(&wasm_int_val, mem_base + wasm_int_ptr, sizeof(WASM_C_TYPE));
    *host_int_out = wasm_int_val;
    LOG_TRACE("wasm_safe_extract_int wasm_int_val: %d, host_int_out: %d", wasm_int_val, *host_int_out);

    return 0;
}

int wasm_safe_malloc(Proc *proc, size_t size, WASM_POINTER_VOID_C_TYPE *wasm_malloc_res_out, void **ha_wasm_malloc_res_out) {
    wasm_func_t *wasm_malloc = get_exported_function(proc, "malloc");

    if (wasm_malloc == NULL) {
        FATAL("wasm_safe_malloc: failed to get exported function 'malloc'");
        return 1;
    }

    // set up arguments
    wasm_val_vec_t wm_args = {};
    wasm_val_vec_new_uninitialized(&wm_args, 1);
    wm_args.size = 1;
    wm_args.num_elems = 1;
    wm_args.data[0].kind = WASM_INT_KIND;
    wm_args.data[0].of.i32 = size;

    // create results (void *)
    wasm_val_vec_t wm_results = {};
    wasm_val_vec_new_uninitialized(&wm_results, 1);

    wasm_trap_t *trap = wasm_func_call(wasm_malloc, &wm_args, &wm_results);
    if (trap != NULL) {
        wasm_message_t msg;
        wasm_trap_message(trap, &msg);
        FATAL("Error calling wasm_malloc: %.*s",
                  msg.size, msg.data);
        // return 1;
    }

    WASM_POINTER_VOID_C_TYPE wasm_malloc_res = wasm_val_to_native_int(wm_results.data[0]);
    LOG_TRACE("Called wasm_malloc with result %p", wasm_malloc_res);

    if (wasm_malloc_res == 0) {
        LOG_ERROR("Call to wasm malloc returned 0");
        return 1;
    }

    *wasm_malloc_res_out = wasm_malloc_res;
    LOG_TRACE("wasm_safe_malloc [WA] result: %p", *wasm_malloc_res_out);

    wasm_memory_t *memory = get_memory(proc);
    byte_t *mem_base = wasm_memory_data(memory);
    *ha_wasm_malloc_res_out =  mem_base + wasm_malloc_res;
    LOG_TRACE("wasm_safe_malloc [HA] result: %p", *ha_wasm_malloc_res_out);

    return 0;
}

int insert_compilation_info(
    byte_t *wa_wasm_struct_offset,
    WGPUCompilationInfo *ha_host_struct_ptr
) {
    /* TODO */
    LOG_WARN("TODO: insert_compilation_info");

    return 0;
}

#endif /* WASM_HELPERS_H */
