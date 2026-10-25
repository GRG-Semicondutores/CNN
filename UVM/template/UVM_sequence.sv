class rng_sequence extends uvm_sequence #(rng_seq_item);
    `uvm_object_utils(rng_sequence)

    // Mantem o total de rodadas configuravel para que a sequencia possa controlar a quantidade
    // nominal de transacoes sem alterar o corpo principal.
    int unsigned num_rounds = 24;

    // Mantem uma semente opcional para reproduzir a mesma sequencia de intervalos quando necessario.
    int unsigned seed = 0;

    // Controla se a semente fixa deve substituir a aleatoriedade livre da execucao corrente.
    bit use_seed = 0;

    function new(string name="rng_sequence");
        // Preserva o construtor base para integrar corretamente a sequencia a infraestrutura UVM.
        super.new(name);
    endfunction

    virtual task body();
        rng_seq_item tr;
        int unsigned s;
        int unsigned lo;
        int unsigned hi;
        time         clk_tog;
        int unsigned inter_req_tmp;

        // Escolhe a semente fixa quando solicitado para permitir repetibilidade controlada,
        // ou usa uma semente aleatoria para exploracao mais ampla dos intervalos.
        s = use_seed ? seed : $urandom;

        // Inicializa o gerador pseudoaleatorio da sequencia com a semente selecionada para
        // tornar reproduzivel a geracao de intervalos desta execucao.
        this.srandom(s);

        // Registra os parametros globais da sequencia para facilitar rastreabilidade da execucao.
        `uvm_info("RNG_SEQ",
            $sformatf("Iniciando rng_sequence: num_rounds=%0d seed=%0d", num_rounds, s),
            UVM_LOW)

        for (int r = 1; r <= int'(num_rounds); r++) begin
            // Seleciona a primeira faixa de temporizacao para as rodadas iniciais, mantendo
            // clock mais rapido e intervalo minimo menor.
            if (r <= 8) begin
                clk_tog = 3;
                lo      = 5;
                hi      = 100;
            end
            else if (r <= 16) begin
                // Seleciona a faixa intermediaria para aumentar clock e espacamento em bloco distinto.
                clk_tog = 7;
                lo      = 15;
                hi      = 150;
            end
            else begin
                // Seleciona a faixa final para impor a condicao mais lenta e o maior espacamento entre pedidos.
                clk_tog = 10;
                lo      = 25;
                hi      = 250;
            end

            // Cria o item da rodada corrente com nome unico para facilitar depuracao e rastreamento.
            tr = rng_seq_item::type_id::create($sformatf("tr_r%0d", r));

            // Inicia o handshake da sequencia com o sequencer antes de preencher e entregar o item.
            start_item(tr);

            // Identifica o item com o numero da rodada para manter vinculo entre configuracao e execucao.
            tr.round_id = r;

            // Propaga ao item o semi-periodo do clock definido para a faixa temporal da rodada.
            tr.clk_toggle_tu = clk_tog;

            // Gera o intervalo entre requisicoes dentro da faixa selecionada usando mecanismo amplamente
            // compativel com simuladores que nem sempre aceitam randomizacao mais elaborada.
            inter_req_tmp = $urandom_range(hi, lo);

            // Armazena no item o intervalo gerado para que o driver aplique o espacamento planejado.
            tr.inter_req_tu = inter_req_tmp;

            // Emite o conteudo do item para registrar a parametrizacao efetiva de cada rodada.
            `uvm_info("RNG_SEQ_ITEM",
                $sformatf("Gerado: %s", tr.convert2string()),
                UVM_LOW)

            // Finaliza a entrega do item para que o sequencer o disponibilize ao driver.
            finish_item(tr);
        end
    endtask
endclass