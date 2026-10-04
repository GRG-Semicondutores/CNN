current_design FCLayer

# ============================================================
# Clock
# ============================================================

set clk_name core_clk
set clk_period 10000
set clk_io_pct 0.20

set clk_port [get_ports clk]

create_clock \
    -name $clk_name \
    -period $clk_period \
    $clk_port

# ============================================================
# Input constraints
# ============================================================

set non_clock_inputs [all_inputs -no_clocks]

set_input_delay \
    [expr $clk_period * $clk_io_pct] \
    -clock $clk_name \
    $non_clock_inputs

# ============================================================
# Output constraints
# ============================================================

set_output_delay \
    [expr $clk_period * $clk_io_pct] \
    -clock $clk_name \
    [all_outputs]