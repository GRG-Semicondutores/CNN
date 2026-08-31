class rng_env extends uvm_env;
    `uvm_component_utils(rng_env)

    // Mantem o agente no ambiente para encapsular, em um unico ponto, o caminho ativo e o
    // caminho passivo associados a interface do DUT.
    rng_agent agent;

    // Mantem o scoreboard no ambiente para concentrar a checagem e o resumo dos dados
    // observados ao longo da simulacao.
    rng_scoreboard scb;

    function new(string name, uvm_component parent);
        // Preserva o construtor base para registrar corretamente o ambiente na hierarquia UVM.
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        // Mantem o fluxo padrao da fase para nao suprimir a inicializacao herdada do ambiente.
        super.build_phase(phase);

        // Cria o agente no build para que o caminho de estimulo e observacao exista antes das conexoes.
        agent = rng_agent::type_id::create("agent", this);

        // Cria o scoreboard no build para que o destino das analises esteja disponivel na fase de conexao.
        scb = rng_scoreboard::type_id::create("scb", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        // Preserva a semantica padrao de conexao da classe base da UVM.
        super.connect_phase(phase);

        // Conecta a porta de analise do monitor ao scoreboard para que cada amostra valida
        // observada no DUT seja entregue ao bloco de consolidacao e verificacao.
        agent.monitor.ap.connect(scb.imp);
    endfunction
endclass