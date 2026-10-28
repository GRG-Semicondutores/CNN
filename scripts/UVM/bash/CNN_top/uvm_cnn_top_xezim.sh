#!/usr/bin/env bash
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"
TARGET="${1:-coverage}"
if (( $# > 0 )); then shift; fi
exec make -f "${PROJECT_ROOT}/scripts/UVM/makefiles/Makefile_UVM_cnn_top_xezim" \
  RESULTS_ROOT="${RESULTS_ROOT:-${PROJECT_ROOT}/results_uvm}" "${TARGET}" "$@"
