#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CNN_ROOT="$(cd "$SCRIPT_DIR/../../.." && pwd)"
PROJECT_DIR="$CNN_ROOT/synth_org/top"
ORFS="${ORFS:-$HOME/OpenROAD/OpenROAD-flow-scripts}"

for artifact in 6_final.odb 6_final.sdc 6_final.spef; do
    if [[ ! -f "$PROJECT_DIR/results/asap7/top/base/$artifact" ]]; then
        echo "ERRO: $artifact não encontrado. Execute scripts/synth/top/full_flow.sh primeiro." >&2
        exit 1
    fi
done

source "$ORFS/env.sh"

make \
    --file="$ORFS/flow/Makefile" \
    DESIGN_CONFIG="$PROJECT_DIR/config.mk" \
    RUN_SCRIPT="$SCRIPT_DIR/export_sdf.tcl" \
    RUN_LOG_NAME_STEM=export_sdf \
    run
