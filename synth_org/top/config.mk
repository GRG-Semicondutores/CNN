PROJECT_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

# ============================================================
# Tecnologia
# ============================================================

export PLATFORM = asap7

# ============================================================
# Projeto
# ============================================================

export DESIGN_NAME = CNN
export DESIGN_NICKNAME = top

# ============================================================
# RTL
# ============================================================

export VERILOG_FILES = \
    $(PROJECT_DIR)/DotProduct.sv \
    $(PROJECT_DIR)/Convolution.sv \
    $(PROJECT_DIR)/FeatureMap.sv \
    $(PROJECT_DIR)/ConvLayer.sv \
    $(PROJECT_DIR)/ReLU.sv \
    $(PROJECT_DIR)/Quantizer.sv \
    $(PROJECT_DIR)/Neuron.sv \
    $(PROJECT_DIR)/FCLayer.sv \
    $(PROJECT_DIR)/MaxPooling.sv \
    $(PROJECT_DIR)/Flatten.sv \
    $(PROJECT_DIR)/CNN.sv

export SYNTH_HDL_FRONTEND = slang
export SYNTH_SLANG_ARGS = --unroll-limit 10000
export SYNTH_MEMORY_MAX_BITS = 65536

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
