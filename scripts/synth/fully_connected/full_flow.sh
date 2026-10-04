#!/usr/bin/env bash
set -euo pipefail

clear 2>/dev/null || true
LOG_FILE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)/$(basename "${BASH_SOURCE[0]}" .sh).log"
exec > >(tee -i "$LOG_FILE") 2>&1

PROJECT_DIR="/home/matheus-grossi/Projects/CNN/CNN/synth_org/fully_connected"
ORFS="${ORFS:-$HOME/OpenROAD/OpenROAD-flow-scripts}"

echo "========================================"
echo " ASAP7 - Fluxo completo RTL -> GDS"
echo " Projeto: $PROJECT_DIR"
echo "========================================"

make \
    --file="$ORFS/flow/Makefile" \
    DESIGN_CONFIG="$PROJECT_DIR/config.mk"

GDS="$PROJECT_DIR/results/asap7/fully_connected/base/6_final.gds"

echo
if [ -f "$GDS" ]; then
    echo "Fluxo concluído."
    echo "GDS gerado:"
    ls -lh "$GDS"
else
    echo "Fluxo terminou, mas o GDS não foi encontrado em:"
    echo "$GDS"
fi