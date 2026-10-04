###############################################################################
# Created by write_sdc
###############################################################################
current_design Multiplier_WTM
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name virtual_clk -period 428.0881 
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[0]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[10]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[1]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[2]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[3]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[4]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[5]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[6]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[7]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[8]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplicand[9]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[0]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[10]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[1]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[2]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[3]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[4]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[5]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[6]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[7]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[8]}]
set_input_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {multiplier[9]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[0]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[10]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[11]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[12]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[13]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[14]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[15]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[16]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[17]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[18]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[19]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[1]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[20]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[21]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[22]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[2]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[3]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[4]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[5]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[6]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[7]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[8]}]
set_output_delay 0.0000 -clock [get_clocks {virtual_clk}] -add_delay [get_ports {result[9]}]
###############################################################################
# Environment
###############################################################################
###############################################################################
# Design Rules
###############################################################################
