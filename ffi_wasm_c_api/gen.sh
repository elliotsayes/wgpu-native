#!/bin/bash
set -e

SCRIPT_DIR=$(cd -- "$(dirname -- "$0")" && pwd -P)

cd "$SCRIPT_DIR"

WEBGPU_HEADERS_DIR="$SCRIPT_DIR/../ffi/webgpu-headers"
WEBGPU_SPEC_YAML_PATH="$WEBGPU_HEADERS_DIR/webgpu.yml"

OUT_DIR="$SCRIPT_DIR"
OUT_FILE_SRC="$OUT_DIR/wasm_webgpu_c_api.h"

cargo run "$WEBGPU_SPEC_YAML_PATH" "$OUT_FILE_SRC"
