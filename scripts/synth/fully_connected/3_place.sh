#!/usr/bin/env bash
set -euo pipefail

clear 2>/dev/null || true
if [[ "3_place.sh" != "7_clean.sh" ]]; then
    LOG_FILE="$(dirname "${BASH_SOURCE[0]}")/$(basename "${BASH_SOURCE[0]}" .sh).log"
    exec > >(tee -i "$LOG_FILE") 2>&1
fi

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DESIGN_NAME="$(basename "$SCRIPT_DIR")"

# ------------------------------------------------------------
# Encontrar raiz CNN
# ------------------------------------------------------------

SEARCH_DIR="$SCRIPT_DIR"
CNN_ROOT=""

while [[ "$SEARCH_DIR" != "/" ]]; do

    if [[ -d "$SEARCH_DIR/synth_org" && -d "$SEARCH_DIR/scripts" ]]; then
        CNN_ROOT="$SEARCH_DIR"
        break
    fi

    SEARCH_DIR="$(dirname "$SEARCH_DIR")"
done

if [[ -z "$CNN_ROOT" ]]; then
    echo "ERRO: raiz CNN não encontrada."
    exit 1
fi

PROJECT_DIR="$CNN_ROOT/synth_org/$DESIGN_NAME"
CONFIG="$PROJECT_DIR/config.mk"

ORFS="${ORFS:-$HOME/OpenROAD/OpenROAD-flow-scripts}"
ORFS_MAKEFILE="$ORFS/flow/Makefile"

if [[ ! -f "$CONFIG" ]]; then
    echo "ERRO: config.mk não encontrado:"
    echo "  $CONFIG"
    exit 1
fi

echo "============================================================"
echo " 3 - Placement"
echo "============================================================"
echo
echo "Design:  $DESIGN_NAME"
echo "Projeto: $PROJECT_DIR"
echo "Config:  $CONFIG"
echo

make \
    --file="$ORFS_MAKEFILE" \
    DESIGN_CONFIG="$CONFIG" \
    place
