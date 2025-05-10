cmake_minimum_required(VERSION 3.20)
project(examples LANGUAGES C)

set(CMAKE_C_STANDARD 99)

# Ensure we're using Emscripten
if(NOT EMSCRIPTEN)
    message(FATAL_ERROR "This project must be compiled with Emscripten")
endif()

# Set Emscripten specific flags
set(CMAKE_EXECUTABLE_SUFFIX ".html")
set(EMSCRIPTEN_LINK_FLAGS "-s -s WASM=1 -s ASYNCIFY")

# Get Emscripten root path
execute_process(
    COMMAND em-config EMSCRIPTEN_ROOT
    OUTPUT_VARIABLE EMSCRIPTEN_ROOT_PATH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_subdirectory(compute)
add_subdirectory(triangle_png)
