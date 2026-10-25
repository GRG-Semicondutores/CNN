class cnn_test extends uvm_test;
    `uvm_component_utils(cnn_test)
    cnn_env env;
    cnn_config cfg;
    cnn_vif_t vif;
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        cfg=cnn_config::type_id::create("cfg"); cfg.read_plusargs();
        uvm_config_db#(cnn_config)::set(this,"env.*","cfg",cfg);
        if (!uvm_config_db#(cnn_vif_t)::get(this,"","vif",vif))
            `uvm_fatal("CNN_TEST","Interface nao fornecida")
        env=cnn_env::type_id::create("env",this);
    endfunction
    task run_phase(uvm_phase phase);
        cnn_sequence seq;
        phase.raise_objection(this);
        // Mesmo reset e mesma fase de inicio da bancada funcional.
        vif.rst=1'b1; vif.start=1'b0;
        repeat(4) @(negedge vif.clk);
        vif.rst=1'b0;
        repeat(2) @(negedge vif.clk);
        $display("[CFG] TEST=%s OBS_CYCLES=%0d RANDOM_COUNT=%0d SEED=%0d",
                 cfg.selected_test,cfg.obs_cycles,cfg.random_count,cfg.seed);
        seq=cnn_sequence::type_id::create("seq"); seq.cfg=cfg;
        seq.start(env.agent.sequencer);
        phase.drop_objection(this);
    endtask
    function void final_phase(uvm_phase phase);
        uvm_report_server server;
        super.final_phase(phase);
`ifdef CNN_TOP_VERILATOR_COVERAGE
        cnn_top_write_coverage(cfg.coverage_path);
        $display("[REPORT] Banco de cobertura=%s",cfg.coverage_path);
`endif
        server=uvm_report_server::get_server();
        if (env.scb.result_status!="PASS" || server.get_severity_count(UVM_ERROR) ||
            server.get_severity_count(UVM_FATAL))
            $fatal(1,"CNN UVM: campanha %s; consulte o relatorio",env.scb.result_status);
    endfunction
endclass
