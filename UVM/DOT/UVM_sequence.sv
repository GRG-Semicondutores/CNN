class dot_sequence extends uvm_sequence #(dot_seq_item);
    `uvm_object_utils(dot_sequence)

    dot_random_stream rng;
    int tx_counter;
    int current_round;
    int current_seed;

    function new(string name = "dot_sequence");
        super.new(name);
        rng = new;
        tx_counter    = 0;
        current_round = -1;
        current_seed  = 0;
    endfunction

    function string test_name(int id);
        case (id)
             0: return "Reset inicial";
             1: return "Reset durante atividade";
             2: return "1 elemento x 8 bits";
             3: return "4 elementos x 4 bits";
             4: return "8 elementos x 1 bit";
             5: return "4 elementos x 8 bits";
             6: return "12 elementos x 4 bits";
             7: return "Entrada em X";
             8: return "Entrada em Z";
             9: return "Z alternado";
            10: return "Z com pesos X/Z";
            11: return "Z alternado com pesos X/Z";
            12: return "Entradas iguais a zero";
            13: return "Pesos iguais a zero";
            14: return "Elemento unitario";
            15: return "Walking element";
            16: return "Extremos signed";
            17: return "Maximo positivo";
            18: return "Minimo negativo";
            19: return "Sinais alternados";
            20: return "Cancelamento perfeito";
            21: return "Operacoes back-to-back";
            22: return "Gaps em valid_in";
            23: return "Impulso unico";
            24: return "Padrao conhecido de valid";
            25: return "Latencia apos reset";
            26: return "Latencia - pacotes em zero";
            27: return "Latencia - pacotes em um";
            28: return "Latencia - pacotes alternados";
            default: return "Caso desconhecido";
        endcase
    endfunction

    task start_test(int id);
        current_round = -1;
        current_seed  = 0;
        $display("[RUN ] T%02d  %s", id, test_name(id));
    endtask

    task set_round_seed(int test_id, int round_id);
        current_round = round_id;
        current_seed  = SEED_BASE ^ (test_id * 32'h0001_0101) ^ (round_id * 32'h0100_0193);
        rng.seed(current_seed);
    endtask

    task send_data(int test_id,
                   logic [VECTOR_BITS-1:0] in_flat,
                   logic [VECTOR_BITS-1:0] w_flat);
        dot_seq_item req;
        req = dot_seq_item::type_id::create($sformatf("data_T%02d_TX%0d", test_id, tx_counter));
        start_item(req);
        req.kind        = dot_seq_item::DOT_DATA;
        req.input_flat  = in_flat;
        req.weight_flat = w_flat;
        req.test_id     = test_id;
        req.round_id    = current_round;
        req.seed        = current_seed;

        // A bancada funcional numera a primeira transacao valida como TX1.
        tx_counter++;
        req.tx_id       = tx_counter;
        finish_item(req);
    endtask

    task send_gap(int test_id,
                  logic [VECTOR_BITS-1:0] in_flat = '0,
                  logic [VECTOR_BITS-1:0] w_flat  = '0,
                  bit drive_vectors = 1'b0);
        dot_seq_item req;
        req = dot_seq_item::type_id::create($sformatf("gap_T%02d", test_id));
        start_item(req);
        req.kind          = dot_seq_item::DOT_GAP;
        req.input_flat    = in_flat;
        req.weight_flat   = w_flat;
        req.drive_vectors = drive_vectors;
        req.test_id       = test_id;
        req.round_id      = current_round;
        req.seed          = current_seed;
        finish_item(req);
    endtask

    task send_reset(int test_id, int cycles = 2);
        dot_seq_item req;
        req = dot_seq_item::type_id::create($sformatf("reset_T%02d", test_id));
        start_item(req);
        req.kind         = dot_seq_item::DOT_RESET;
        req.test_id      = test_id;
        req.round_id     = current_round;
        req.seed         = current_seed;
        req.reset_cycles = cycles;
        finish_item(req);
    endtask

    task send_skip(int test_id);
        dot_seq_item req;
        req = dot_seq_item::type_id::create($sformatf("skip_T%02d", test_id));
        start_item(req);
        req.kind     = dot_seq_item::DOT_SKIP;
        req.test_id  = test_id;
        req.round_id = -1;
        req.seed     = 0;
        finish_item(req);
    endtask

    task drain(int test_id);
        int k;
        for (k=0; k<PIPELINE_OCCUPATIONS+1; k++)
            send_gap(test_id);
    endtask

    task settle_datapath_zero(int test_id);
        int k;

        // A bancada funcional zera os vetores imediatamente e depois mantem
        // valid_in=0 durante PIPELINE_OCCUPATIONS+1 ciclos.
        send_gap(test_id, '0, '0, 1'b1);
        for (k=1; k<PIPELINE_OCCUPATIONS+1; k++)
            send_gap(test_id);
    endtask

    function automatic void put_elem(ref logic [VECTOR_BITS-1:0] vec,
                                     input int idx,
                                     input logic signed [DATA_WIDTH-1:0] value);
        vec[idx*DATA_WIDTH +: DATA_WIDTH] = value;
    endfunction

    function automatic logic [VECTOR_BITS-1:0] latency_pattern(int kind);
        logic [VECTOR_BITS-1:0] v;
        int k, b;
        v = '0;
        case (kind)
            0: v = '0;
            1: v = '1;
            2: begin
                for (k=0; k<N_INPUTS; k++)
                    for (b=0; b<DATA_WIDTH; b++)
                        v[k*DATA_WIDTH+b] = (b % 2 == 0) ? 1'b1 : 1'b0;
            end
            default: v = '0;
        endcase
        return v;
    endfunction

    task run_latency_fill_test(int test_id, int pattern_kind);
        int fill_count, slot;
        logic [VECTOR_BITS-1:0] p;
        p = latency_pattern(pattern_kind);
        start_test(test_id);
        for (fill_count=1; fill_count<=PIPELINE_OCCUPATIONS; fill_count++) begin
            send_reset(test_id, 2);
            for (slot=0; slot<PIPELINE_OCCUPATIONS; slot++) begin
                if (slot < fill_count)
                    send_data(test_id, p, p);
                else
                    send_data(test_id, '0, '0);
            end
            drain(test_id);
        end
    endtask

    virtual task body();
        int r, c, i;
        logic [VECTOR_BITS-1:0] iv, wv;

        // T00 - reset inicial e primeira operacao pos-reset.
        // O reset inicial e aplicado pelo dot_test, seguindo o modelo-base.
        // A sequence inicia apenas a primeira operacao funcional apos a liberacao.
        start_test(0);
        iv='0; wv='0; put_elem(iv,0,7); put_elem(wv,0,3);
        send_data(0,iv,wv); drain(0);

        // T01 - reset durante atividade.
        start_test(1);
        for (c=0; c<4; c++) begin
            iv='0; wv='0; put_elem(iv,0,c+1); put_elem(wv,0,2);
            send_data(1,iv,wv);
        end
        send_reset(1,2);
        iv='0; wv='0; put_elem(iv,0,11); put_elem(wv,0,3);
        send_data(1,iv,wv); drain(1);

        // T02 - 4 x 256.
        start_test(2);
        for (r=0; r<4; r++) begin
            set_round_seed(2,r);
            for (c=0; c<256; c++) begin
                iv='0; wv='0;
                put_elem(iv,0,c[DATA_WIDTH-1:0]);
                put_elem(wv,0,rng.range_inclusive(31,0));
                send_data(2,iv,wv);
            end
        end
        drain(2);

        // T03 - quatro elementos restritos a 4 bits, 256 casos x 4 rodadas.
        start_test(3);
        for (r=0; r<4; r++) begin
            set_round_seed(3,r);
            for (c=0; c<256; c++) begin
                iv='0; wv='0;
                put_elem(iv,0,c & 15);
                put_elem(iv,1,(c >> 4) & 15);
                put_elem(iv,2,((c * 5) + r) & 15);
                put_elem(iv,3,((c * 9) + (r * 3)) & 15);
                for (i=0; i<4; i++) put_elem(wv,i,rng.range_inclusive(15,0));
                send_data(3,iv,wv);
            end
        end
        drain(3);

        // T04 - 8 elementos de 1 bit.
        start_test(4);
        for (r=0; r<4; r++) begin
            set_round_seed(4,r);
            for (c=0; c<256; c++) begin
                iv='0; wv='0;
                for (i=0; i<8; i++) begin
                    put_elem(iv,i,(c>>i)&1);
                    put_elem(wv,i,rng.range_inclusive(3,0));
                end
                send_data(4,iv,wv);
            end
        end
        drain(4);

        // T05 - 4 x 4096 amostras.
        start_test(5);
        for (r=0; r<4; r++) begin
            set_round_seed(5,r);
            for (c=0; c<4096; c++) begin
                iv='0; wv='0;
                for (i=0; i<4; i++) begin
                    put_elem(iv,i,rng.word());
                    put_elem(wv,i,rng.range_inclusive(31,0));
                end
                send_data(5,iv,wv);
            end
        end
        drain(5);

        // T06 - 12 elementos de 4 bits, 4 x 65536.
        start_test(6);
        for (r=0; r<4; r++) begin
            set_round_seed(6,r);
            for (c=0; c<65536; c++) begin
                iv='0; wv='0;
                for (i=0; i<12; i++) begin
                    put_elem(iv,i,rng.range_inclusive(15,0));
                    put_elem(wv,i,rng.range_inclusive(31,0));
                end
                send_data(6,iv,wv);
            end
        end
        drain(6);

`ifndef VERILATOR
        // T07--T11 - quatro estados.
        start_test(7); set_round_seed(7,0);
        iv='0; wv='0; put_elem(iv,0,'x); put_elem(wv,0,rng.range_inclusive(31,0));
        send_data(7,iv,wv); drain(7);

        start_test(8); set_round_seed(8,0);
        iv='0; wv='0; put_elem(iv,0,'z); put_elem(wv,0,rng.range_inclusive(31,0));
        send_data(8,iv,wv); drain(8);

        start_test(9); set_round_seed(9,0);
        iv='0; wv='0; put_elem(iv,0,8'b0z0z0z0z); put_elem(wv,0,rng.range_inclusive(31,0)); send_data(9,iv,wv);
        iv='0; wv='0; put_elem(iv,0,8'bz0z0z0z0); put_elem(wv,0,rng.range_inclusive(31,0)); send_data(9,iv,wv);
        iv='0; wv='0; put_elem(iv,0,8'b1z1z1z1z); put_elem(wv,0,rng.range_inclusive(31,0)); send_data(9,iv,wv);
        iv='0; wv='0; put_elem(iv,0,8'bz1z1z1z1); put_elem(wv,0,rng.range_inclusive(31,0)); send_data(9,iv,wv); drain(9);

        start_test(10);
        iv='0; wv='0; put_elem(iv,0,'z); put_elem(wv,0,8'bxzxzxzxz); send_data(10,iv,wv);
        iv='0; wv='0; put_elem(iv,0,'z); put_elem(wv,0,8'bzxzxzxzx); send_data(10,iv,wv); drain(10);

        start_test(11);
        iv='0; wv='0; put_elem(iv,0,8'b0z1z0z1z); put_elem(wv,0,8'bxzxzxzxz); send_data(11,iv,wv);
        iv='0; wv='0; put_elem(iv,0,8'bz0z1z0z1); put_elem(wv,0,8'bzxzxzxzx); send_data(11,iv,wv); drain(11);
`else
        // Como na bancada funcional, os SKIPs nao consomem ciclos de clock.
        // O driver transmite os SKIPs ao monitor em uma mascara persistente.
        for (i=7; i<=11; i++) begin
            start_test(i);
            send_skip(i);
            `uvm_info("DOT_SEQ",
                $sformatf("[SKIP] T%02d  Verilator utiliza simulacao de dois estados", i),
                UVM_LOW)
        end
`endif

        // T12 - todas entradas zero.
        start_test(12); set_round_seed(12,0);
        for (c=0; c<32; c++) begin
            iv='0; wv='0;
            for (i=0; i<N_INPUTS; i++) put_elem(wv,i,rng.word());
            send_data(12,iv,wv);
        end
        drain(12);

        // T13 - todos pesos zero.
        start_test(13); set_round_seed(13,0);
        for (c=0; c<32; c++) begin
            iv='0; wv='0;
            for (i=0; i<N_INPUTS; i++) put_elem(iv,i,rng.word());
            send_data(13,iv,wv);
        end
        drain(13);

        // T14 - elemento unitario, faixa signed completa.
        start_test(14);
        for (c=-(1<<(DATA_WIDTH-1)); c<(1<<(DATA_WIDTH-1)); c++) begin
            iv='0; wv='0; put_elem(iv,7,c); put_elem(wv,7,1);
            send_data(14,iv,wv);
        end
        drain(14);

        // T15 - walking element.
        start_test(15);
        for (c=0; c<N_INPUTS; c++) begin
            iv='0; wv='0; put_elem(iv,c,37); put_elem(wv,c,1);
            send_data(15,iv,wv);
        end
        drain(15);

        // T16 - extremos signed.
        start_test(16);
        iv='0; wv='0; put_elem(iv,0,127);  put_elem(wv,0,127);  send_data(16,iv,wv);
        iv='0; wv='0; put_elem(iv,0,127);  put_elem(wv,0,-128); send_data(16,iv,wv);
        iv='0; wv='0; put_elem(iv,0,-128); put_elem(wv,0,127);  send_data(16,iv,wv);
        iv='0; wv='0; put_elem(iv,0,-128); put_elem(wv,0,-128); send_data(16,iv,wv); drain(16);

        // T17/T18 - extremos em todos os elementos.
        start_test(17); iv='0; wv='0;
        for(i=0;i<N_INPUTS;i++) begin put_elem(iv,i,127); put_elem(wv,i,127); end
        send_data(17,iv,wv); drain(17);

        start_test(18); iv='0; wv='0;
        for(i=0;i<N_INPUTS;i++) begin put_elem(iv,i,-128); put_elem(wv,i,-128); end
        send_data(18,iv,wv); drain(18);

        // T19 - sinais alternados.
        start_test(19); iv='0; wv='0;
        for(i=0;i<N_INPUTS;i++) begin put_elem(iv,i,(i%2)?-128:127); put_elem(wv,i,1); end
        send_data(19,iv,wv);
        iv='0; wv='0;
        for(i=0;i<N_INPUTS;i++) begin put_elem(iv,i,127); put_elem(wv,i,(i%2)?-1:1); end
        send_data(19,iv,wv); drain(19);

        // T20 - cancelamento perfeito.
        start_test(20); iv='0; wv='0;
        for(i=0;i<4;i++) begin put_elem(iv,i,10); put_elem(wv,i,(i%2)?-1:1); end
        send_data(20,iv,wv); drain(20);

        // T21 - 256 operacoes back-to-back, resultados identificaveis.
        start_test(21);
        for(c=0;c<256;c++) begin
            iv='0; wv='0; put_elem(iv,0,c[DATA_WIDTH-1:0]); put_elem(wv,0,1);
            send_data(21,iv,wv);
        end
        drain(21);

        // T22 - 256 ciclos com gaps pseudoaleatorios reproduziveis.
        start_test(22); set_round_seed(22,0);
        for(c=0;c<256;c++) begin
            iv='0; wv='0; put_elem(iv,0,c[DATA_WIDTH-1:0]); put_elem(wv,0,1);
            if (c==0) send_data(22,iv,wv);
            else if (c==1) send_gap(22,iv,wv,1'b1);
            else if (rng.range_inclusive(99,0) < 65) send_data(22,iv,wv);
            else send_gap(22,iv,wv,1'b1);
        end
        drain(22);

        // T23 - impulso unico; L_DATA e L_VALID sao caracterizados separadamente.
        start_test(23); send_reset(23,2); settle_datapath_zero(23);
        iv='0; wv='0; put_elem(iv,0,7); put_elem(wv,0,3);
        send_data(23,iv,wv); drain(23);

        // T24 - padrao conhecido 1 0 1 1 0 0 1 0 1.
        start_test(24);
        for(c=0;c<9;c++) begin
            iv='0; wv='0; put_elem(iv,0,c+1); put_elem(wv,0,2);
            if ((c==0)||(c==2)||(c==3)||(c==6)||(c==8)) send_data(24,iv,wv);
            else send_gap(24,iv,wv,1'b1);
        end
        drain(24);

        // T25 - mesma caracterizacao depois de reset.
        start_test(25); send_reset(25,2); settle_datapath_zero(25);
        iv='0; wv='0; put_elem(iv,0,13); put_elem(wv,0,-5);
        send_data(25,iv,wv); drain(25);

        // T26--T28.
        run_latency_fill_test(26,0);
        run_latency_fill_test(27,1);
        run_latency_fill_test(28,2);

        drain(28);
        `uvm_info("DOT_SEQ", $sformatf("Sequencia concluida; transacoes de dados geradas=%0d", tx_counter), UVM_LOW)
    endtask
endclass
