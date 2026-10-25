class cnn_agent extends uvm_agent;
    `uvm_component_utils(cnn_agent)
    cnn_sequencer sequencer;
    cnn_driver driver;
    cnn_monitor monitor;
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        sequencer=cnn_sequencer::type_id::create("sequencer",this);
        driver=cnn_driver::type_id::create("driver",this);
        monitor=cnn_monitor::type_id::create("monitor",this);
    endfunction
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass
