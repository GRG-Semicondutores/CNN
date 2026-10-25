class rng_monitor extends uvm_monitor;
    `uvm_component_utils(rng_monitor)

    // Mantem a interface virtual no monitor para observar exatamente os mesmos sinais fisicos
    // que o driver estimula e que o DUT consome.
    virtual rng_if vif;

    // Mantem a porta de analise para publicar cada valor confirmado sem acoplar o monitor a
    // um consumidor especifico.
    uvm_analysis_port #(int unsigned) ap;

    function new(string name, uvm_component parent);
        // Preserva o construtor base para registrar corretamente o monitor na hierarquia UVM.
        super.new(name, parent);

        // Instancia a porta de analise no construtor para que o canal de publicacao exista
        // antes das conexoes do ambiente.
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        // Mantem o fluxo padrao do build para preservar a inicializacao herdada da base.
        super.build_phase(phase);

        // Recupera a interface virtual do config_db para garantir que a observacao recaia
        // sobre a mesma instancia de interface conectada ao DUT.
        if (!uvm_config_db #(virtual rng_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NOVIF", "vif nao encontrado")
        end
    endfunction

    task run_phase(uvm_phase phase);
        int unsigned sample_idx;
        int unsigned val;

        // Preserva o comportamento base da fase para manter compatibilidade com a UVM.
        super.run_phase(phase);

        // Inicializa o indice local de amostras para numerar cada publicacao feita pelo monitor.
        sample_idx = 0;

        // Aguarda o reset estar liberado para impedir publicacao de valores durante a fase de inicializacao.
        wait (vif.rst_i == 1'b1);

        forever begin
            // Sincroniza a observacao na borda de subida para coincidir com o ponto natural
            // de captura de logica sequencial do DUT.
            @(posedge vif.clk_i);

            // Descarta a iteracao se o reset estiver ativo nessa borda, pois qualquer valor
            // observado nessa condicao nao representa operacao funcional valida.
            if (!vif.rst_i) begin
                continue;
            end

            // Filtra a captura apenas quando a escrita estiver ativa, tratando esse sinal como
            // indicativo de que o dado foi confirmado pelo protocolo.
            if (vif.wr_i) begin
                // Aguarda a regiao NBA para observar o valor ja estabilizado apos as atualizacoes
                // nao bloqueantes ocorridas no mesmo ciclo.
                uvm_wait_for_nba_region();

                // Converte o dado observado para inteiro sem sinal para padronizar o formato
                // entregue ao scoreboard e aos logs.
                val = int'(vif.num_to_send_o);

                // Registra a amostra capturada para rastrear a ordem e o instante de cada valor
                // efetivamente publicado pelo monitor.
                `uvm_info("RNG_MON",
                    $sformatf("WRITE_SAMPLE[%0d] t=%0t num_to_send_o=%0d", sample_idx, $time, val),
                    UVM_LOW)

                // Publica o valor no canal de analise para desacoplar a observacao da etapa de checagem.
                ap.write(val);

                // Incrementa o indice apos a publicacao para manter a contagem alinhada com o historico emitido.
                sample_idx++;
            end
        end
    endtask
endclass