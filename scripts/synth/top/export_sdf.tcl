# Reuse the flow's Liberty libraries, final database, constraints and parasitics.
source $::env(SCRIPTS_DIR)/load.tcl
load_design 6_final.odb 6_final.sdc
read_spef $::env(RESULTS_DIR)/6_final.spef

set sdf_file $::env(RESULTS_DIR)/6_final.sdf
write_sdf -include_typ -digits 6 $sdf_file
puts "SDF gerado: $sdf_file"
