class relu_sequencer extends uvm_sequencer #(relu_seq_item);
    `uvm_component_utils(relu_sequencer)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass
