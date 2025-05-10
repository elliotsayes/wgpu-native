cmake_minimum_required(VERSION 3.20)
project(triangle_png LANGUAGES CXX)

add_executable(triangle_png 
    main.c
    hellotriangle.cpp
    hellotriangle.h
    encodetexture.hpp
    webgpuwrapper.hpp
    stbimage.h
    stbimagewrite.h
)

# Compiler warnings
add_compile_options(-Wall -Wextra -Wpedantic)

# Include Local WebGPU headers
include_directories(${CMAKE_SOURCE_DIR}/../ffi)
include_directories(${CMAKE_SOURCE_DIR}/../ffi/webgpu-headers)

# Set Emscripten linker flags
set_target_properties(triangle_png PROPERTIES
    LINK_FLAGS "${EMSCRIPTEN_LINK_FLAGS} -sEXPORTED_FUNCTIONS=_main,_handle -sEXPORTED_RUNTIME_METHODS=ccall,cwrap --js-library ${CMAKE_SOURCE_DIR}/stubs.js"
)
