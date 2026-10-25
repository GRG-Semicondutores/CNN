current_design Flatten

# O bloco e combinacional; a clock virtual define a referencia de I/O.
create_clock -name virtual_clk -period 10.0

set_input_delay 0.0 \
    -clock virtual_clk \
    [all_inputs]

set_output_delay 0.0 \
    -clock virtual_clk \
    [all_outputs]