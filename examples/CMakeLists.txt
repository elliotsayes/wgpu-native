cmake_minimum_required(VERSION 3.20)
project(examples LANGUAGES C)

set(CMAKE_C_STANDARD 99)

if(APPLE)
    add_compile_options(-x objective-c)
endif()

cmake_path(GET CMAKE_SOURCE_DIR PARENT_PATH PROJECT_ROOT_DIR)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(WGPU_NATIVE_LIB_TYPE debug)
else()
    set(WGPU_NATIVE_LIB_TYPE release)
endif()

if(DEFINED ENV{CARGO_BUILD_TARGET})
    set(WGPU_NATIVE_LIB_DIR ${PROJECT_ROOT_DIR}/target/$ENV{CARGO_BUILD_TARGET}/${WGPU_NATIVE_LIB_TYPE})
else()
    set(WGPU_NATIVE_LIB_DIR ${PROJECT_ROOT_DIR}/target/${WGPU_NATIVE_LIB_TYPE})
endif()

find_library(
    WGPU_LIBRARY NAMES libwgpu_native.a wgpu_native.lib wgpu_native
    HINTS ${WGPU_NATIVE_LIB_DIR}
    REQUIRED
)

set(FAIAL_DIR ${WGPU_NATIVE_LIB_DIR}/build/faial-sys-6cb79ac45d74ca9c)

find_library(
    DRF_API_LIBRARY NAMES libdrf_api.so
    HINTS ${FAIAL_DIR}/out/install/default/lib/faial
    REQUIRED
)

add_subdirectory(framework)

add_subdirectory(capture)
add_subdirectory(compute)
add_subdirectory(enumerate_adapters)
add_subdirectory(push_constants)
add_subdirectory(texture_arrays)
add_subdirectory(triangle)

set(GLFW_BUILD_DOCS OFF)
add_subdirectory(vendor/glfw)
