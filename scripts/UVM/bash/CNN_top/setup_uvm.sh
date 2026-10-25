#!/usr/bin/env bash
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../../.." && pwd)"
DEST="${PROJECT_ROOT}/.deps/1800.2-2017-1.0"
if [[ -f "${DEST}/src/uvm_pkg.sv" ]]; then echo "UVM ja disponivel: ${DEST}/src"; exit 0; fi
if [[ -e "${DEST}" ]]; then echo "ERRO: diretorio de dependencia existente e incompleto: ${DEST}" >&2; exit 1; fi
TEMP_DIR="$(mktemp -d)"
trap 'rm -rf -- "$TEMP_DIR"' EXIT
curl --fail --location --retry 2 --output "${TEMP_DIR}/uvm.tar.gz" \
    https://www.accellera.org/images/downloads/standards/uvm/Accellera-1800.2-2017-1.0.tar.gz
printf '%s  %s\n' 60466406956e4a6f1101198b1b6459f829ba0bae72c8850b7dac24cd79ecc466 "${TEMP_DIR}/uvm.tar.gz" | sha256sum -c -
tar -xzf "${TEMP_DIR}/uvm.tar.gz" -C "${TEMP_DIR}"
test -f "${TEMP_DIR}/1800.2-2017-1.0/src/uvm_pkg.sv"
mkdir -p "${PROJECT_ROOT}/.deps"
mv "${TEMP_DIR}/1800.2-2017-1.0" "${DEST}"
echo "UVM instalada: ${DEST}/src"
