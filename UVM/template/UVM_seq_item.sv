class rng_seq_item extends uvm_sequence_item;
    `uvm_object_utils(rng_seq_item)

    // Mantem o identificador da rodada no item para rastrear a correspondencia entre
    // parametrizacao da sequencia, logs do driver e resultados do monitor.
    int unsigned round_id;

    // Mantem o semi-periodo do clock no item para que cada transacao transporte sua propria
    // configuracao temporal ate o driver.
    time clk_toggle_tu;

    // Mantem o intervalo entre requisicoes como campo randomico para variar o espacamento
    // temporal entre rodadas de forma controlada pela sequencia.
    rand int unsigned inter_req_tu;

    function new(string name="rng_seq_item");
        // Preserva o construtor base para registrar corretamente o objeto na infraestrutura UVM.
        super.new(name);
    endfunction

    function string convert2string();
        // Converte os parametros do item em texto para facilitar rastreabilidade e depuracao
        // durante a geracao e a execucao das rodadas.
        return $sformatf("round=%0d clk_toggle=%0tTU(period=%0tTU) inter_req=%0dTU",
                         round_id, clk_toggle_tu, 2*clk_toggle_tu, inter_req_tu);
    endfunction
endclass