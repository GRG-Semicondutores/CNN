#!/usr/bin/env bash
set -euo pipefail

# ============================================================
# ORFS Script Environment Generator
#
# O nome da pasta atual determina o projeto:
#
# scripts/synth/convolution
#            ↓
# synth_org/convolution
#
# scripts/synth/arithmetic
#            ↓
# synth_org/arithmetic
#
# O full_flow.sh permanece sem numeracao porque executa o fluxo completo.
# ============================================================

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DESIGN_NAME="$(basename "$SCRIPT_DIR")"

clear 2>/dev/null || true
LOG_FILE="$SCRIPT_DIR/$(basename "${BASH_SOURCE[0]}" .sh).log"
exec > >(tee -i "$LOG_FILE") 2>&1

# ------------------------------------------------------------
# Localizar automaticamente a raiz do projeto CNN.
#
# Procuramos para cima até encontrar:
#
#   synth_org/
#   scripts/
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
    echo "ERRO: não foi possível localizar a raiz do projeto CNN."
    echo
    echo "Esperava encontrar uma pasta contendo:"
    echo "  synth_org/"
    echo "  scripts/"
    exit 1
fi

# ------------------------------------------------------------
# Caminhos
# ------------------------------------------------------------

PROJECT_DIR="$CNN_ROOT/synth_org/$DESIGN_NAME"
CONFIG="$PROJECT_DIR/config.mk"

ORFS="${ORFS:-$HOME/OpenROAD/OpenROAD-flow-scripts}"
ORFS_MAKEFILE="$ORFS/flow/Makefile"

# ------------------------------------------------------------
# Validações
# ------------------------------------------------------------

if [[ ! -d "$PROJECT_DIR" ]]; then
    echo "ERRO: diretório do projeto não encontrado:"
    echo
    echo "  $PROJECT_DIR"
    exit 1
fi

if [[ ! -f "$CONFIG" ]]; then
    echo "ERRO: config.mk não encontrado:"
    echo
    echo "  $CONFIG"
    exit 1
fi

if [[ ! -f "$ORFS_MAKEFILE" ]]; then
    echo "ERRO: Makefile do ORFS não encontrado:"
    echo
    echo "  $ORFS_MAKEFILE"
    exit 1
fi

echo "============================================================"
echo " Gerando scripts ORFS"
echo "============================================================"
echo
echo "Design:      $DESIGN_NAME"
echo "CNN root:    $CNN_ROOT"
echo "Projeto:     $PROJECT_DIR"
echo "Config:      $CONFIG"
echo "ORFS:        $ORFS"
echo

# ============================================================
# Função geradora
# ============================================================

generate_script()
{
    local filename="$1"
    local target="$2"
    local description="$3"

    cat > "$SCRIPT_DIR/$filename" <<EOF
#!/usr/bin/env bash
set -euo pipefail

clear 2>/dev/null || true
if [[ "$filename" != "7_clean.sh" ]]; then
    LOG_FILE="\$(dirname "\${BASH_SOURCE[0]}")/\$(basename "\${BASH_SOURCE[0]}" .sh).log"
    exec > >(tee -i "\$LOG_FILE") 2>&1
fi

SCRIPT_DIR="\$(cd "\$(dirname "\${BASH_SOURCE[0]}")" && pwd)"
DESIGN_NAME="\$(basename "\$SCRIPT_DIR")"

# ------------------------------------------------------------
# Encontrar raiz CNN
# ------------------------------------------------------------

SEARCH_DIR="\$SCRIPT_DIR"
CNN_ROOT=""

while [[ "\$SEARCH_DIR" != "/" ]]; do

    if [[ -d "\$SEARCH_DIR/synth_org" && -d "\$SEARCH_DIR/scripts" ]]; then
        CNN_ROOT="\$SEARCH_DIR"
        break
    fi

    SEARCH_DIR="\$(dirname "\$SEARCH_DIR")"
done

if [[ -z "\$CNN_ROOT" ]]; then
    echo "ERRO: raiz CNN não encontrada."
    exit 1
fi

PROJECT_DIR="\$CNN_ROOT/synth_org/\$DESIGN_NAME"
CONFIG="\$PROJECT_DIR/config.mk"

ORFS="\${ORFS:-\$HOME/OpenROAD/OpenROAD-flow-scripts}"
ORFS_MAKEFILE="\$ORFS/flow/Makefile"

if [[ ! -f "\$CONFIG" ]]; then
    echo "ERRO: config.mk não encontrado:"
    echo "  \$CONFIG"
    exit 1
fi

echo "============================================================"
echo " $description"
echo "============================================================"
echo
echo "Design:  \$DESIGN_NAME"
echo "Projeto: \$PROJECT_DIR"
echo "Config:  \$CONFIG"
echo

make \\
    --file="\$ORFS_MAKEFILE" \\
    DESIGN_CONFIG="\$CONFIG" \\
    $target
EOF

    chmod +x "$SCRIPT_DIR/$filename"

    echo "Criado: $filename"
}

# ============================================================
# Scripts numerados do fluxo; full_flow.sh permanece independente.
# ============================================================

generate_script \
    "1_synth.sh" \
    "synth" \
    "1 - Síntese"

generate_script \
    "2_floorplan.sh" \
    "floorplan" \
    "2 - Floorplan"

generate_script \
    "3_place.sh" \
    "place" \
    "3 - Placement"

generate_script \
    "4_cts.sh" \
    "cts" \
    "4 - Clock Tree Synthesis"

generate_script \
    "5_route.sh" \
    "route" \
    "5 - Routing"

generate_script \
    "6_finish.sh" \
    "finish" \
    "6 - Finish / GDS"

generate_script \
    "7_clean.sh" \
    "clean_all" \
    "7 - Limpeza completa"

echo
echo "============================================================"
echo " Scripts gerados"
echo "============================================================"
echo

printf '%s\n' \
    "1_synth.sh" \
    "2_floorplan.sh" \
    "3_place.sh" \
    "4_cts.sh" \
    "5_route.sh" \
    "6_finish.sh" \
    "7_clean.sh"

echo
echo "Projeto associado:"
echo
echo "  $PROJECT_DIR"
echo
