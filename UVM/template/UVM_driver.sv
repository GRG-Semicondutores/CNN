class rng_driver extends uvm_driver #(rng_seq_item);
    `uvm_component_utils(rng_driver)

    // Mantem a interface virtual no driver para que a emissao do protocolo atue sobre os
    // mesmos sinais fisicos compartilhados com DUT, teste e monitor.
    virtual rng_if vif;

    function new(string name, uvm_component parent);
        // Preserva o construtor base para integrar corretamente o driver a hierarquia UVM.
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        // Mantem o fluxo padrao do build para preservar a inicializacao herdada da base.
        super.build_phase(phase);

        // Recupera a interface virtual do config_db para garantir que o driver opere sobre
        // a instancia de sinais realmente conectada ao DUT.
        if (!uvm_config_db #(virtual rng_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NOVIF", "vif nao encontrado")
        end
    endfunction

    task automatic drive_idle();
        // Mantem a requisicao em zero no estado ocioso para impedir pedidos residuais
        // entre transacoes consecutivas.
        vif.req_num_i <= 1'b0;

        // Mantem a escrita em zero no estado ocioso para impedir confirmacoes indevidas
        // fora da janela valida de handshake.
        vif.wr_i <= 1'b0;
    endtask

    task automatic request_number(int unsigned round_id);
        time t_on;
        time t_off;

        // Sincroniza o inicio da requisicao na borda de descida para evitar disputa direta
        // com logica do DUT sensivel a borda de subida.
        @(negedge vif.clk_i);

        // Eleva a solicitacao nesse ponto para abrir uma janela estavel de pedido antes
        // da confirmacao de escrita.
        vif.req_num_i <= 1'b1;

        // Mantem a escrita baixa nesta etapa para separar semanticamente pedido e aceite.
        vif.wr_i <= 1'b0;

        // Registra o instante de ativacao da solicitacao para medir a duracao efetiva da janela.
        t_on = $time;

        // Aguarda uma nova borda de descida para sustentar a solicitacao por um ciclo completo
        // sem alterar o alinhamento temporal adotado no protocolo.
        @(negedge vif.clk_i);

        // Registra o instante de fechamento da primeira janela para rastrear a latencia aplicada.
        t_off = $time;

        // Emite log da janela de requisicao para verificar que o pedido permaneceu ativo pelo
        // intervalo de observacao definido pelo protocolo.
        `uvm_info("RNG_DRV",
            $sformatf("round=%0d REQ_WINDOW req_num_i=1 de %0t ate %0t (dur=%0tTU)",
                      round_id, t_on, t_off, (t_off - t_on)),
            UVM_LOW)
    endtask

    task automatic accept_number(int unsigned round_id);
        time t_wr_on;
        time t_wr_posedge;
        time t_both_off;

        // Sincroniza a ativacao de escrita na borda de descida para preservar a mesma regra
        // de nao competir com a logica sequencial amostrada na borda de subida.
        @(negedge vif.clk_i);

        // Eleva a escrita somente apos a janela de requisicao para materializar um aceite
        // claramente separado da solicitacao inicial.
        vif.wr_i <= 1'b1;

        // Registra o instante de aceite para depuracao temporal do handshake.
        t_wr_on = $time;

        // Aguarda a borda de subida para garantir um ponto de amostragem em que requisicao
        // e escrita estejam simultaneamente validas para o DUT.
        @(posedge vif.clk_i);

        // Registra a borda efetiva em que o DUT pode capturar o handshake completo.
        t_wr_posedge = $time;

        // Aguarda a proxima borda de descida para encerrar o handshake mantendo um ciclo
        // completo de validade conjunta entre requisicao e escrita.
        @(negedge vif.clk_i);

        // Derruba a requisicao apos a janela valida para encerrar explicitamente o pedido.
        vif.req_num_i <= 1'b0;

        // Derruba a escrita no mesmo ponto para fechar o handshake sem deixar sinal residual.
        vif.wr_i <= 1'b0;

        // Registra o instante de desligamento simultaneo para fechar a analise temporal.
        t_both_off = $time;

        // Emite log da janela de aceite para confirmar a relacao temporal entre ativacao,
        // amostragem util e desligamento do protocolo.
        `uvm_info("RNG_DRV",
            $sformatf("round=%0d ACCEPT_WINDOW wr_i=1 em %0t | write_edge=%0t | ambos baixam em %0t",
                      round_id, t_wr_on, t_wr_posedge, t_both_off),
            UVM_LOW)
    endtask

    task automatic drive_one_use(rng_seq_item tr);
        time t_start;

        // Reforca o estado ocioso no inicio de cada transacao para impedir heranca de sinais
        // ativos da rodada imediatamente anterior.
        drive_idle();

        // Registra o instante de partida da rodada para correlacionar configuracao temporal
        // e execucao do handshake.
        t_start = $time;

        // Emite log inicial da rodada para documentar parametros temporais aplicados a cada uso.
        `uvm_info("RNG_DRV",
            $sformatf("BEGIN round=%0d clk_toggle=%0tTU(period=%0tTU) inter_req=%0dTU t=%0t",
                      tr.round_id, tr.clk_toggle_tu, 2*tr.clk_toggle_tu, tr.inter_req_tu, t_start),
            UVM_LOW)

        // Sincroniza a atualizacao do semi-periodo do clock em borda de descida para que a
        // mudanca de temporizacao nao coincida com a borda funcional de captura do DUT.
        @(negedge vif.clk_i);

        // Aplica o semi-periodo especificado no item para que cada rodada execute exatamente
        // com a temporizacao planejada pela sequencia.
        vif.clk_toggle_tu = tr.clk_toggle_tu;

        // Emite log da alteracao de clock para validar que a rodada passou a operar com a
        // temporizacao configurada no item corrente.
        `uvm_info("RNG_DRV",
            $sformatf("round=%0d clock atualizado: clk_toggle_tu=%0tTU (periodo=%0tTU)",
                      tr.round_id, tr.clk_toggle_tu, 2*tr.clk_toggle_tu),
            UVM_LOW)

        // Aguarda o intervalo entre requisicoes definido no item para reproduzir o espacamento
        // temporal exigido entre rodadas.
        #(tr.inter_req_tu);

        // Executa a fase de solicitacao do protocolo antes da confirmacao de escrita para manter
        // a separacao causal entre pedir e aceitar o numero.
        request_number(tr.round_id);

        // Executa a fase de aceite somente apos a solicitacao ter permanecido valida pela janela
        // estabelecida no protocolo.
        accept_number(tr.round_id);

        // Emite log final da rodada para fechar a rastreabilidade temporal da transacao.
        `uvm_info("RNG_DRV",
            $sformatf("END round=%0d t=%0t", tr.round_id, $time),
            UVM_LOW)

        // Retorna ao estado ocioso ao final da rodada para garantir fronteira limpa entre usos.
        drive_idle();
    endtask

    task run_phase(uvm_phase phase);
        rng_seq_item tr;

        // Preserva o comportamento base da fase para manter compatibilidade com o fluxo UVM.
        super.run_phase(phase);

        // Inicializa o barramento em estado ocioso antes de observar o reset para evitar sinais
        // indefinidos durante o inicio da fase de execucao.
        drive_idle();

        // Aguarda a entrada em reset para so iniciar o protocolo apos a bancada realmente ter
        // passado pela fase explicita de inicializacao.
        wait (vif.rst_i == 1'b0);

        // Aguarda a liberacao do reset para garantir que nenhuma rodada seja dirigida enquanto
        // o DUT ainda estiver em condicao de reinicializacao.
        wait (vif.rst_i == 1'b1);

        // Registra o instante de liberacao do reset para marcar o inicio da operacao funcional.
        `uvm_info("RNG_DRV",
            $sformatf("Reset liberado em t=%0t. Iniciando rodadas.", $time),
            UVM_LOW)

        forever begin
            // Obtem o proximo item do sequencer para serializar a execucao das rodadas no driver.
            seq_item_port.get_next_item(tr);

            // Converte o item recebido em atividade fisica na interface compartilhada do DUT.
            drive_one_use(tr);

            // Notifica o sequencer de que a rodada terminou para liberar o proximo item da fila.
            seq_item_port.item_done();
        end
    endtask
endclass