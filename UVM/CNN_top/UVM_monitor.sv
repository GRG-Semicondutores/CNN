class cnn_monitor extends uvm_monitor;
    `uvm_component_utils(cnn_monitor)
    cnn_vif_t vif;
    uvm_analysis_port #(cnn_seq_item) ap;
    longint unsigned cycle_count=0;
    function new(string name,uvm_component parent);
        super.new(name,parent); ap=new("ap",this);
    endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(cnn_vif_t)::get(this,"","vif",vif))
            `uvm_fatal("CNN_MON","Interface nao configurada")
    endfunction
    task run_phase(uvm_phase phase);
        cnn_seq_item tr;
        forever begin
            @(posedge vif.clk);
            tr=cnn_seq_item::type_id::create("sample");
            tr.cycle=++cycle_count;
            tr.pre_rst=vif.rst; tr.pre_start=vif.start; tr.pre_valid=vif.valid_out4;
            for (int n=0;n<N_NEURONS_2;n++) tr.pre_result[n]=vif.result_FC2[n];
            tr.pins=vif.snapshot();
            tr.case_id=vif.tb_case_id; tr.tx_id=vif.tb_tx_id;
            tr.subcase=$sformatf("%0s",vif.tb_subcase);
            tr.weights=$sformatf("%0s",vif.tb_weights);
            tr.exploratory=vif.tb_exploratory; tr.cases_started=vif.tb_cases_started;
            @(vif.monitor_sample_tick);
            tr.rst=vif.rst; tr.start=vif.start; tr.valid=vif.valid_out4;
            for (int n=0;n<N_NEURONS_2;n++) tr.result[n]=vif.result_FC2[n];
            ap.write(tr);
        end
    endtask
endclass
