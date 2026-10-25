PROJECT_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

# ============================================================
# Tecnologia
# ============================================================

export PLATFORM = asap7

# ============================================================
# Projeto
# ============================================================

export DESIGN_NAME = Multiplier_WTM
export DESIGN_NICKNAME = WTM

# ============================================================
# RTL
# ============================================================

export VERILOG_FILES = \
    $(PROJECT_DIR)/Adder_CSA.sv \
    $(PROJECT_DIR)/Multiplier_WTM.sv

# SystemVerilog
export SYNTH_HDL_FRONTEND = slang

# ============================================================
# Timing
# ============================================================

export SDC_FILE = $(PROJECT_DIR)/constraint.sdc

# ============================================================
# Diretórios locais
# ============================================================

export WORK_HOME = $(PROJECT_DIR)

# ============================================================
# Floorplan inicial
# ============================================================

export CORE_UTILIZATION = 40
export CORE_ASPECT_RATIO = 1
export CORE_MARGIN = 2

export PLACE_DENSITY = 0.60