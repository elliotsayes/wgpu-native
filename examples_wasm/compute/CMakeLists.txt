cmake_minimum_required(VERSION 3.20)
project(compute LANGUAGES C)

add_executable(compute main.c)

# Compiler warnings
add_compile_options(-Wall -Wextra -Wpedantic)

# Include Local WebGPU headers
include_directories(${CMAKE_SOURCE_DIR}/../ffi)
include_directories(${CMAKE_SOURCE_DIR}/../ffi/webgpu-headers)

# Set Emscripten linker flags
set_target_properties(compute PROPERTIES
    LINK_FLAGS "${EMSCRIPTEN_LINK_FLAGS} -sEXPORTED_FUNCTIONS=_main,_handle -sEXPORTED_RUNTIME_METHODS=ccall,cwrap --js-library ${CMAKE_SOURCE_DIR}/stubs.js"
)
