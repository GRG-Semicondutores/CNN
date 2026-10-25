class cnn_sequencer extends uvm_sequencer #(cnn_seq_item);
    `uvm_component_utils(cnn_sequencer)
    function new(string name, uvm_component parent); super.new(name,parent); endfunction
endclass
