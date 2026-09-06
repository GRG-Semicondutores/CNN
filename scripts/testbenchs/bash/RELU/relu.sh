#!/usr/bin/env bash

set -euo pipefail

# Diretorio deste script: <projeto>/scripts/testbenchs/bash/RELU
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Raiz do projeto CNN
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"

MAKEFILE="${PROJECT_ROOT}/scripts/testbenchs/makefiles/Makefile_relu"
RESULTS_ROOT="${PROJECT_ROOT}/results_tb"
TARGET="${1:-icarus}"

if [[ ! -f "${MAKEFILE}" ]]; then
    echo "Erro: Makefile não encontrado em: ${MAKEFILE}" >&2
    exit 1
fi

if (( $# > 0 )); then
    shift
fi

make -f "${MAKEFILE}" RESULTS_ROOT="${RESULTS_ROOT}" "${TARGET}" "$@"
