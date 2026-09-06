class dot_env extends uvm_env;
    `uvm_component_utils(dot_env)

    // Segue o modelo-base: o ambiente possui apenas o agent e o scoreboard.
    dot_agent      agent;
    dot_scoreboard scb;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = dot_agent::type_id::create("agent", this);
        scb   = dot_scoreboard::type_id::create("scb", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        // Mantem somente o caminho monitor -> scoreboard, como no modelo-base.
        agent.monitor.ap.connect(scb.imp);
    endfunction
endclass
