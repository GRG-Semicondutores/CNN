class rng_sequencer extends uvm_sequencer #(rng_seq_item);
    `uvm_component_utils(rng_sequencer)

    function new(string name, uvm_component parent);
        // Preserva o construtor base para registrar corretamente o sequencer na hierarquia UVM.
        super.new(name, parent);
    endfunction
endclass