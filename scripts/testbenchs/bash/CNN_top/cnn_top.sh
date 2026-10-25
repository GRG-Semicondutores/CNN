#!/usr/bin/env bash

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"
MAKEFILE="${PROJECT_ROOT}/scripts/testbenchs/makefiles/Makefile_cnn_top"
RESULTS_ROOT="${RESULTS_ROOT:-${PROJECT_ROOT}/results_tb}"
TARGET="${1:-icarus}"

if [[ ! -f "${MAKEFILE}" ]]; then
    echo "Erro: Makefile nao encontrado em: ${MAKEFILE}" >&2
    exit 1
fi

if (( $# > 0 )); then
    shift
fi

exec make -f "${MAKEFILE}" RESULTS_ROOT="${RESULTS_ROOT}" "${TARGET}" "$@"
