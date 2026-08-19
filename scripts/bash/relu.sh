#!/usr/bin/env bash

set -euo pipefail

# Diretório deste script: <projeto>/scripts/bash
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Raiz do projeto CNN
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

MAKEFILE="${PROJECT_ROOT}/scripts/makefiles/Makefile_relu"
TARGET="${1:-icarus}"

if [[ ! -f "${MAKEFILE}" ]]; then
    echo "Erro: Makefile não encontrado em: ${MAKEFILE}" >&2
    exit 1
fi

make -f "${MAKEFILE}" "${TARGET}"