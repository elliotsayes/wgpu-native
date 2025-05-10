// Placeholders for hbeamr hb_wasm types/helpers

#ifndef HB_CORE_H
#define HB_CORE_H

#include "include/wasm_c_api.h"
#include "wasm_webgpu_c_api_inc.h"

// Structure to represent a WASM process instance
typedef struct {
    wasm_engine_t* engine;          // WASM engine instance
    wasm_instance_t* instance;      // WASM instance
    wasm_module_t* module;          // WASM module
    wasm_store_t* store;            // WASM store
    // ErlDrvPort port;                // Erlang port associated with this process
    // ErlDrvTermData port_term;       // Erlang term representation of the port
    // ErlDrvMutex* is_running;        // Mutex to track if the process is running
    char* current_function;        // Current function being executed
    long current_function_ix;   // Index of the current function
    int indirect_func_table_ix;    // Index of the indirect function table
    wasm_table_t* indirect_func_table; // Indirect function table
    // wasm_exec_env_t exec_env;      // Execution environment for the WASM instance
    // ei_term* current_args;         // Arguments for the current function
    int current_args_length;       // Length of the current arguments
    // ImportResponse* current_import; // Import response structure
    // ErlDrvTermData pid;            // PID of the Erlang process
    int is_initialized;            // Flag to check if the process is initialized
    // time_t start_time;             // Start time of the process
    BindWGPUObjectMappingRegistry registry;
} Proc;

// Structure to represent an import hook
typedef struct {
    char* module_name;             // Name of the module
    char* field_name;              // Name of the field (function)
    char* signature;               // Function signature
    Proc* proc;                    // The associated process
    wasm_func_t* stub_func;        // WASM function pointer for the import
} ImportHook;

wasm_memory_t* get_memory(Proc* proc) {
    wasm_extern_vec_t exports;
    wasm_instance_exports(proc->instance, &exports);
    for (size_t i = 0; i < exports.size; i++) {
        if (wasm_extern_kind(exports.data[i]) == WASM_EXTERN_MEMORY) {
            return wasm_extern_as_memory(exports.data[i]);
        }
    }
    return NULL;
}

wasm_func_t* get_exported_function(Proc* proc, const char* target_name) {
    wasm_extern_vec_t exports;
    wasm_instance_exports(proc->instance, &exports);
    wasm_exporttype_vec_t export_types;
    wasm_module_exports(proc->module, &export_types);
    wasm_func_t* func = NULL;

    for (size_t i = 0; i < exports.size; ++i) {
        wasm_extern_t* ext = exports.data[i];
        if (wasm_extern_kind(ext) == WASM_EXTERN_FUNC) {
            const wasm_name_t* exp_name = wasm_exporttype_name(export_types.data[i]);
            if (exp_name && exp_name->size == strlen(target_name) + 1 && 
                strncmp(exp_name->data, target_name, exp_name->size - 1) == 0) {
                func = wasm_extern_as_func(ext);
                break;
            }
        }
    }

    return func;
}

#endif /* HB_CORE_H */
