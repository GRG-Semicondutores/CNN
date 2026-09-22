PROJECT_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

# ============================================================
# Tecnologia
# ============================================================

export PLATFORM = asap7

# ============================================================
# Projeto
# ============================================================

export DESIGN_NAME = FCLayer
export DESIGN_NICKNAME = fully_connected

# ============================================================
# RTL
# ============================================================

export VERILOG_FILES = \
    $(PROJECT_DIR)/DotProduct.sv \
    $(PROJECT_DIR)/ReLU.sv \
    $(PROJECT_DIR)/Quantizer.sv \
    $(PROJECT_DIR)/Neuron.sv \
    $(PROJECT_DIR)/FCLayer.sv

export SYNTH_HDL_FRONTEND = slang

# ============================================================
# Timing
# ============================================================

export SDC_FILE = $(PROJECT_DIR)/constraint.sdc

# ============================================================
# Diretório de trabalho
# ============================================================

export WORK_HOME = $(PROJECT_DIR)

# ============================================================
# Floorplan
# ============================================================

export CORE_UTILIZATION = 40
export CORE_ASPECT_RATIO = 1
export CORE_MARGIN = 2

export PLACE_DENSITY = 0.60