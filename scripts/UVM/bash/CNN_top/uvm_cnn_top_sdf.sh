#!/usr/bin/env bash
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"
MAKEFILE="${PROJECT_ROOT}/scripts/UVM/makefiles/Makefile_UVM_cnn_top_sdf"
TARGET="${1:-run}"
if (( $# > 0 )); then shift; fi
exec make -f "${MAKEFILE}" "${TARGET}" "$@"
