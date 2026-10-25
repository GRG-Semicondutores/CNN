class cnn_env extends uvm_env;
    `uvm_component_utils(cnn_env)
    cnn_agent agent;
    cnn_scoreboard scb;
    cnn_coverage cov;
    function new(string name,uvm_component parent); super.new(name,parent); endfunction
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent=cnn_agent::type_id::create("agent",this);
        scb=cnn_scoreboard::type_id::create("scb",this);
        cov=cnn_coverage::type_id::create("cov",this);
    endfunction
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scb.imp);
        agent.monitor.ap.connect(cov.analysis_export);
        scb.coverage=cov; scb.model.coverage=cov;
    endfunction
endclass
