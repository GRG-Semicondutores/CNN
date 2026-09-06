class rng_agent extends uvm_agent;
    `uvm_component_utils(rng_agent)

    // Mantem o sequencer agregado ao agente para concentrar a arbitragem de itens no
    // mesmo bloco responsavel pelo caminho ativo de estimulo.
    rng_sequencer sequencer;

    // Mantem o driver agregado ao agente para centralizar a geracao fisica do protocolo
    // no mesmo encapsulamento funcional do caminho ativo.
    rng_driver driver;

    // Mantem o monitor agregado ao agente para reunir observacao e estimulo dentro da
    // mesma abstracao de interface da UVM.
    rng_monitor monitor;

    function new(string name, uvm_component parent);
        // Preserva o construtor base para registrar corretamente o agente na hierarquia UVM.
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        // Mantem o fluxo padrao da fase para nao suprimir comportamento herdado necessario.
        super.build_phase(phase);

        // Cria o sequencer no build para que a infraestrutura de entrega de itens exista
        // antes da fase de conexao do agente.
        sequencer = rng_sequencer::type_id::create("sequencer", this);

        // Cria o driver no build para que o caminho ativo de sinais esteja pronto antes
        // do inicio da execucao da sequencia.
        driver = rng_driver::type_id::create("driver", this);

        // Cria o monitor no build para que a observacao do DUT acompanhe a simulacao desde
        // o primeiro instante funcional valido.
        monitor = rng_monitor::type_id::create("monitor", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        // Preserva a sequencia padrao da fase para manter a semantica de conexao da base UVM.
        super.connect_phase(phase);

        // Conecta o driver ao sequencer para que cada item produzido pela sequencia seja
        // convertido em estimulo fisico na interface do DUT.
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass