class dot_sequencer extends uvm_sequencer #(dot_seq_item);
    `uvm_component_utils(dot_sequencer)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass
