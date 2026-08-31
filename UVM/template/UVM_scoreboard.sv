class rng_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(rng_scoreboard)

    // Mantem a expectativa total de requisicoes como constante local para comparar o trafego
    // observado com o plano nominal da sequencia.
    localparam longint unsigned EXPECTED_REQS = 24;

    // Mantem a implementacao de analise para receber diretamente cada valor publicado pelo monitor.
    uvm_analysis_imp #(int unsigned, rng_scoreboard) imp;

    // Conta todas as publicacoes recebidas do monitor para medir o volume bruto de amostras observadas.
    longint unsigned sample_count;

    // Conta apenas os valores efetivamente armazenados na sequencia comprimida para separar
    // observacao bruta de mudancas reais de conteudo.
    longint unsigned stored_count;

    // Conta repeticoes reais de valores na sequencia armazenada para identificar reincidencias
    // apos a compressao de estabilidade.
    longint unsigned dup_count;

    // Mantem o histograma das ocorrencias reais registradas para resumir a distribuicao de valores.
    int unsigned seen[int];

    // Mantem a sequencia comprimida para registrar apenas mudancas de valor e eliminar estagnacoes.
    int unsigned seq[$];

    // Guarda o ultimo valor observado para decidir se a amostra atual representa uma nova entrada.
    int unsigned last_val;

    // Indica se ja existe uma referencia valida de ultimo valor antes da primeira comparacao.
    bit last_val_valid;

    function new(string name, uvm_component parent);
        // Preserva o construtor base para integrar corretamente o scoreboard a hierarquia UVM.
        super.new(name, parent);

        // Instancia a implementacao de analise no construtor para que o ambiente possa conecta-la.
        imp = new("imp", this);
    endfunction

    function void build_phase(uvm_phase phase);
        // Mantem o fluxo padrao do build para preservar a inicializacao herdada da base.
        super.build_phase(phase);

        // Zera a contagem de amostras para iniciar a consolidacao sem heranca de execucoes anteriores.
        sample_count = 0;

        // Zera a contagem de valores armazenados para reconstruir a sequencia comprimida do zero.
        stored_count = 0;

        // Zera a contagem de duplicatas para medir apenas repeticoes da execucao corrente.
        dup_count = 0;

        // Inicializa o ultimo valor com zero apenas como preenchimento seguro antes da primeira amostra valida.
        last_val = '0;

        // Marca que ainda nao existe ultimo valor valido para evitar comparacao indevida na primeira escrita.
        last_val_valid = 1'b0;

        // Limpa o histograma para remover qualquer residuo de dados de execucoes anteriores.
        seen.delete();

        // Limpa a sequencia comprimida para reconstruir integralmente o historico da execucao atual.
        seq.delete();
    endfunction

    virtual function void write(int unsigned val);
        // Conta toda publicacao recebida do monitor para manter o total bruto de amostras observadas.
        sample_count++;

        // Armazena a amostra apenas quando nao ha referencia anterior ou quando houve mudanca
        // efetiva de valor em relacao ao ultimo elemento aceito.
        if (!last_val_valid || (val != last_val)) begin
            // Acrescenta o novo valor a sequencia comprimida para preservar apenas transicoes reais.
            seq.push_back(val);

            // Incrementa a contagem de entradas armazenadas para distinguir mudancas reais de repeticoes estaveis.
            stored_count++;

            // Atualiza o histograma e a contagem de duplicatas quando o valor ja havia aparecido antes
            // na sequencia comprimida.
            if (seen.exists(val)) begin
                seen[val]++;
                dup_count++;
                `uvm_warning("RNG_DUP",
                    $sformatf("Duplicado real na sequencia: val=%0d total_ocorrencias=%0d",
                              val, seen[val]))
            end
            else begin
                // Registra a primeira ocorrencia do valor para iniciar sua contagem no histograma.
                seen[val] = 1;
            end

            // Atualiza o ultimo valor para que a proxima amostra possa ser comparada contra a referencia atual.
            last_val = val;

            // Marca que ja existe referencia valida para as comparacoes subsequentes.
            last_val_valid = 1'b1;
        end
    endfunction

    function void report_phase(uvm_phase phase);
        int keys[$];
        string hist;
        string list;
        longint unsigned uniq;
        int i;

        // Preserva o comportamento base da fase para manter compatibilidade com a UVM.
        super.report_phase(phase);

        // Limpa o vetor auxiliar de chaves para reconstruir a ordenacao do histograma a partir do array associativo.
        keys.delete();

        // Coleta todas as chaves presentes no histograma para permitir ordenacao e formatacao deterministica.
        foreach (seen[k]) begin
            keys.push_back(k);
        end

        // Ordena as chaves para que o resumo textual do histograma tenha ordem estavel e comparavel entre execucoes.
        keys.sort();

        // Inicializa a string do histograma vazia antes da concatenacao incremental dos pares valor:contagem.
        hist = "";

        foreach (keys[i]) begin
            int k;

            // Copia a chave corrente para uma variavel escalar a fim de simplificar a formatacao do texto.
            k = keys[i];

            // Concatena o par valor:ocorrencias correspondente a chave atual no resumo do histograma.
            hist = {hist, $sformatf("%0d:%0d", k, seen[k])};

            // Insere separador entre elementos para produzir um resumo legivel sem virgula final excedente.
            if (i != keys.size() - 1) begin
                hist = {hist, ", "};
            end
        end

        // Inicializa a string da sequencia resumida antes de expandir os elementos capturados ou faltantes.
        list = "";

        for (i = 0; i < int'(EXPECTED_REQS); i++) begin
            // Usa o valor armazenado quando a posicao existe para reconstruir a sequencia efetivamente capturada.
            if (i < seq.size()) begin
                list = {list, $sformatf("%0d", seq[i])};
            end
            else begin
                // Preenche posicoes ausentes com x para explicitar, no relatorio, que faltaram capturas ate a meta nominal.
                list = {list, "x"};
            end

            // Insere separador textual entre posicoes para manter a sequencia legivel no log final.
            if (i != EXPECTED_REQS - 1) begin
                list = {list, ", "};
            end
        end

        // Calcula a quantidade de valores unicos a partir do histograma para resumir a diversidade da sequencia.
        uniq = seen.num();

        // Emite o resumo global das contagens para consolidar volume observado, volume armazenado,
        // diversidade e duplicacao real em uma unica linha.
        `uvm_info("RNG_SCB",
            $sformatf("Resumo: requisicoes=%0d armazenados=%0d unicos=%0d duplicados_reais=%0d",
                      sample_count, stored_count, uniq, dup_count),
            UVM_NONE)

        // Emite o histograma formatado para detalhar a distribuicao dos valores efetivamente registrados.
        `uvm_info("RNG_SCB",
            $sformatf("Histograma=[%s]", hist),
            UVM_NONE)

        // Emite a sequencia expandida ate a quantidade esperada para facilitar inspecao visual da ordem capturada.
        `uvm_info("RNG_SCB",
            $sformatf("Sequencia=[%s]", list),
            UVM_LOW)

        // Sinaliza discrepancia entre total bruto observado e expectativa nominal para evidenciar possiveis
        // diferencas de protocolo ou de estrategia de monitoramento.
        if (sample_count != EXPECTED_REQS) begin
            `uvm_warning("RNG_SCB",
                $sformatf("Requisicoes != %0d (requisicoes=%0d). Se o DUT usa outro handshake, ajuste o monitor.",
                          EXPECTED_REQS, sample_count))
        end

        // Informa quando a sequencia precisou ser completada com marcadores de ausencia para destacar
        // que a captura real nao atingiu a meta nominal de rodadas.
        if (seq.size() < EXPECTED_REQS) begin
            `uvm_info("RNG_SCB",
                $sformatf("Sequencia completada com x: capturados=%0d faltantes=%0d",
                          seq.size(), EXPECTED_REQS - seq.size()),
                UVM_LOW)
        end
    endfunction
endclass