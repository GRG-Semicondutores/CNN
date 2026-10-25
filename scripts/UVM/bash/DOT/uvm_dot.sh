#!/usr/bin/env bash

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"
MAKEFILE="${PROJECT_ROOT}/scripts/UVM/makefiles/Makefile_UVM_dot"
RESULTS_ROOT="${PROJECT_ROOT}/results_uvm"
TARGET="${1:-coverage}"

if [[ ! -f "${MAKEFILE}" ]]; then
    echo "Erro: Makefile UVM do DOT não encontrado: ${MAKEFILE}" >&2
    exit 1
fi

if (( $# > 0 )); then
    shift
fi

make -f "${MAKEFILE}" RESULTS_ROOT="${RESULTS_ROOT}" "${TARGET}" "$@"
