#!/usr/bin/env bash

set -euo pipefail

# Diretorio deste script: <projeto>/scripts/testbenchs/bash/DOT
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Raiz do projeto CNN
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"

# Makefile do DotProduct usando Verilator + cobertura LCOV/HTML
MAKEFILE="${PROJECT_ROOT}/scripts/testbenchs/makefiles/Makefile_dot_VERILATOR"
RESULTS_ROOT="${PROJECT_ROOT}/results_tb"

# Por padrão executa a cobertura completa e gera o relatório HTML.
# Também aceita qualquer target existente no Makefile:
#   ./dot_verilator.sh run
#   ./dot_verilator.sh lint
#   ./dot_verilator.sh lint_rtl
#   ./dot_verilator.sh coverage
#   ./dot_verilator.sh waves
#   ./dot_verilator.sh surf
#   ./dot_verilator.sh clean
TARGET="${1:-coverage}"

if [[ ! -f "${MAKEFILE}" ]]; then
    echo "Erro: Makefile não encontrado em: ${MAKEFILE}" >&2
    exit 1
fi

if (( $# > 0 )); then
    shift
fi

make -f "${MAKEFILE}" RESULTS_ROOT="${RESULTS_ROOT}" "${TARGET}" "$@"
