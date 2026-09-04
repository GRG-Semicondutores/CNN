`timescale 1ns/1ps

module testbench #(
    parameter DATA_WIDTH = 8,
    parameter N_INPUTS = 32,
    parameter ENABLE_WAVEFORM = 0,
    parameter ENABLE_MONITOR = 0
);
    localparam ACC_WIDTH = 2*DATA_WIDTH + $clog2(N_INPUTS);
    localparam LATENCY = $clog2(N_INPUTS) + 1;
    localparam CLK_PERIOD = 10;
    localparam N_TESTS = 29;

    logic clk, rst, valid_in, valid_out;
    logic signed [DATA_WIDTH-1:0] input_vec [0:N_INPUTS-1];
    logic signed [DATA_WIDTH-1:0] weight [0:N_INPUTS-1];
    logic signed [ACC_WIDTH-1:0] out;

    logic signed [ACC_WIDTH-1:0] exp_pipe [0:LATENCY-1];
    logic exp_valid [0:LATENCY-1];
    integer exp_test [0:LATENCY-1];
    integer exp_tx [0:LATENCY-1];

    integer test_sent [0:N_TESTS-1];
    integer test_pass [0:N_TESTS-1];
    integer test_fail [0:N_TESTS-1];
    integer test_skip [0:N_TESTS-1];
    integer test_flushed [0:N_TESTS-1];
    integer total_sent, total_recv, total_pass, total_fail, total_flushed;
    integer latency_pass, latency_fail, valid_fail, data_fail, unknown_fail;
    integer cycle_count, current_test, tx_count;
    integer i, j, r, c;

    DotProduct #(.DATA_WIDTH(DATA_WIDTH), .N_INPUTS(N_INPUTS)) dut (.*);
    always #(CLK_PERIOD/2) clk = ~clk;

    function automatic signed [ACC_WIDTH-1:0] reference_dot;
        integer k;
        logic signed [2*DATA_WIDTH-1:0] product;
        logic signed [ACC_WIDTH-1:0] sum;
        begin
            sum = '0;
            for (k=0; k<N_INPUTS; k=k+1) begin
                product = input_vec[k] * weight[k];
                sum = sum + product;
            end
            reference_dot = sum;
        end
    endfunction

    function automatic string test_name;
        input integer id;
        begin
            case (id)
                 0: test_name = "Reset inicial";
                 1: test_name = "Reset durante atividade";
                 2: test_name = "1 elemento x 8 bits";
                 3: test_name = "4 elementos x 4 bits";
                 4: test_name = "8 elementos x 1 bit";
                 5: test_name = "4 elementos x 8 bits";
                 6: test_name = "12 elementos x 4 bits";
                 7: test_name = "Entrada em X";
                 8: test_name = "Entrada em Z";
                 9: test_name = "Z alternado";
                10: test_name = "Z com pesos X/Z";
                11: test_name = "Z alternado com pesos X/Z";
                12: test_name = "Entradas iguais a zero";
                13: test_name = "Pesos iguais a zero";
                14: test_name = "Elemento unitario";
                15: test_name = "Walking element";
                16: test_name = "Extremos signed";
                17: test_name = "Maximo positivo";
                18: test_name = "Minimo negativo";
                19: test_name = "Sinais alternados";
                20: test_name = "Cancelamento perfeito";
                21: test_name = "Operacoes back-to-back";
                22: test_name = "Gaps em valid_in";
                23: test_name = "Impulso unico";
                24: test_name = "Padrao conhecido de valid";
                25: test_name = "Latencia apos reset";
                26: test_name = "Latencia - pacotes em zero";
                27: test_name = "Latencia - pacotes em um";
                28: test_name = "Latencia - pacotes alternados";
                default: test_name = "Caso desconhecido";
            endcase
        end
    endfunction

    task automatic clear_vectors;
        integer k;
        begin
            for (k=0; k<N_INPUTS; k=k+1) begin
                input_vec[k] = '0;
                weight[k] = '0;
            end
        end
    endtask

    task automatic start_test;
        input integer id;
        begin
            current_test = id;
            $display("[RUN ] T%02d  %s", id, test_name(id));
        end
    endtask

    task automatic apply_transaction;
        begin
            @(negedge clk);
            valid_in = 1;
            tx_count = tx_count + 1;
        end
    endtask

    task automatic apply_gap;
        begin
            @(negedge clk);
            valid_in = 0;
        end
    endtask

    task automatic drain_and_report;
        input integer id;
        begin
            apply_gap();
            repeat (LATENCY) @(negedge clk);
        end
    endtask

    task automatic pulse_reset;
        integer k;
        begin
            @(negedge clk); valid_in = 0; rst = 1;
            repeat (2) @(negedge clk);
            rst = 0;
            for (k=0; k<LATENCY; k=k+1) begin
                exp_valid[k] = 0;
                exp_pipe[k] = '0;
            end
        end
    endtask

    // Carrega um dos tres padroes dirigidos usados na varredura dedicada de latencia.
    // pattern_kind = 0 -> todos os bits em 0
    // pattern_kind = 1 -> todos os bits em 1
    // pattern_kind = 2 -> bits alternados 0/1 (010101... em cada elemento)
    task automatic load_latency_pattern;
        input integer pattern_kind;
        integer k, b;
        begin
            clear_vectors();
            case (pattern_kind)
                0: begin
                    // clear_vectors() ja produz o pacote totalmente zerado.
                end
                1: begin
                    for (k=0; k<N_INPUTS; k=k+1) begin
                        input_vec[k] = '1;
                        weight[k]    = '1;
                    end
                end
                2: begin
                    for (k=0; k<N_INPUTS; k=k+1) begin
                        for (b=0; b<DATA_WIDTH; b=b+1) begin
                            input_vec[k][b] = (b % 2 == 0) ? 1'b1 : 1'b0;
                            weight[k][b]    = (b % 2 == 0) ? 1'b1 : 1'b0;
                        end
                    end
                end
                default: begin
                    $fatal(1, "Padrao de latencia invalido: %0d", pattern_kind);
                end
            endcase
        end
    endtask

    // Exercita todas as ocupacoes do pipeline: 1, 2, ... LATENCY pacotes preenchidos.
    // Cada subcaso envia exatamente LATENCY pacotes validos. Os slots ainda nao
    // preenchidos pelo padrao sao completados com zero, permitindo observar cada
    // posicao temporal sem deixar valores residuais do subcaso anterior.
    task automatic run_latency_fill_test;
        input integer test_id;
        input integer pattern_kind;
        integer fill_count, slot;
        begin
            start_test(test_id);
            for (fill_count=1; fill_count<=LATENCY; fill_count=fill_count+1) begin
                // Comeca cada ocupacao com o pipeline vazio para tornar o caso isolado.
                pulse_reset();

                for (slot=0; slot<LATENCY; slot=slot+1) begin
                    if (slot < fill_count)
                        load_latency_pattern(pattern_kind);
                    else
                        clear_vectors();

                    apply_transaction();
                end

                // O scoreboard temporal confere, para todos os pacotes, tanto
                // o resultado do produto escalar quanto o ciclo de valid_out.
                drain_and_report(test_id);
            end
        end
    endtask

    /* Scoreboard temporal: associa valor, teste e ID ao ciclo exato de saída.
       As atribuições são intencionalmente bloqueantes para deslocar e consultar
       o modelo de referência no mesmo evento de clock. */
    /* verilator lint_off BLKSEQ */
    always @(posedge clk) begin
        cycle_count = cycle_count + 1;
        if (rst) begin
            for (j=0; j<LATENCY; j=j+1) begin
                if (exp_valid[j]) begin
                    total_flushed = total_flushed + 1;
                    test_flushed[exp_test[j]] = test_flushed[exp_test[j]] + 1;
                end
                exp_valid[j] = 0;
                exp_pipe[j] = '0;
                exp_test[j] = 0;
                exp_tx[j] = 0;
            end
        end else begin
            for (j=LATENCY-1; j>0; j=j-1) begin
                exp_valid[j] = exp_valid[j-1];
                exp_pipe[j] = exp_pipe[j-1];
                exp_test[j] = exp_test[j-1];
                exp_tx[j] = exp_tx[j-1];
            end
            exp_valid[0] = valid_in;
            if (valid_in) begin
                exp_pipe[0] = reference_dot();
                exp_test[0] = current_test;
                exp_tx[0] = tx_count;
                total_sent = total_sent + 1;
                test_sent[current_test] = test_sent[current_test] + 1;
            end
        end

        #1;
        if (valid_out !== exp_valid[LATENCY-1]) begin
            total_fail = total_fail + 1;
            valid_fail = valid_fail + 1;
            latency_fail = latency_fail + 1;
            if (exp_valid[LATENCY-1])
                test_fail[exp_test[LATENCY-1]] = test_fail[exp_test[LATENCY-1]] + 1;
            $error("[VALID_ERROR] ciclo=%0d esperado=%b obtido=%b",
                   cycle_count, exp_valid[LATENCY-1], valid_out);
        end else if (exp_valid[LATENCY-1]) begin
            total_recv = total_recv + 1;
            latency_pass = latency_pass + 1;
            if (out === exp_pipe[LATENCY-1]) begin
                total_pass = total_pass + 1;
                test_pass[exp_test[LATENCY-1]] = test_pass[exp_test[LATENCY-1]] + 1;
                if (ENABLE_MONITOR)
                    $display("[PASS][T%02d][TX%0d] ciclo=%0d out=%0d",
                             exp_test[LATENCY-1], exp_tx[LATENCY-1], cycle_count, out);
            end else begin
                total_fail = total_fail + 1;
                data_fail = data_fail + 1;
                test_fail[exp_test[LATENCY-1]] = test_fail[exp_test[LATENCY-1]] + 1;
                if ($isunknown(exp_pipe[LATENCY-1])) unknown_fail = unknown_fail + 1;
                $error("[DATA_ERROR][T%02d][TX%0d] ciclo=%0d esperado=%b obtido=%b",
                       exp_test[LATENCY-1], exp_tx[LATENCY-1], cycle_count,
                       exp_pipe[LATENCY-1], out);
            end
        end
    end
    /* verilator lint_on BLKSEQ */

    initial begin
        clk=0; rst=1; valid_in=0; total_sent=0; total_recv=0;
        total_pass=0; total_fail=0; total_flushed=0; latency_pass=0;
        latency_fail=0; valid_fail=0; data_fail=0; unknown_fail=0;
        cycle_count=0; current_test=0; tx_count=0;
        clear_vectors();
        for (i=0; i<LATENCY; i=i+1) begin
            exp_valid[i]=0; exp_pipe[i]='0; exp_test[i]=0; exp_tx[i]=0;
        end
        for (i=0; i<N_TESTS; i=i+1) begin
            test_sent[i]=0; test_pass[i]=0; test_fail[i]=0;
            test_skip[i]=0; test_flushed[i]=0;
        end
        if (ENABLE_WAVEFORM || $test$plusargs("waveform")) begin
            $dumpfile("DotProduct_tb.vcd");
            $dumpvars(0, testbench);
            $display("[WAVE] Gravando waveform em DotProduct_tb.vcd");
        end else begin
            $display("[WAVE] Desabilitada (use +waveform ou o alvo make wave)");
        end

        // T00 - reset inicial e primeira operação pós-reset.
        start_test(0);
        repeat (3) @(negedge clk);
        rst=0; clear_vectors(); input_vec[0]=7; weight[0]=3; apply_transaction();
        drain_and_report(0);

        // T01 - reset limpa operações em trânsito; depois o pipeline se recupera.
        start_test(1); clear_vectors();
        for (c=0; c<4; c=c+1) begin input_vec[0]=c+1; weight[0]=2; apply_transaction(); end
        pulse_reset(); clear_vectors(); input_vec[0]=11; weight[0]=3; apply_transaction();
        drain_and_report(1);

        // T02 - 4 x 256: um elemento ativo, faixa completa de 8 bits.
        start_test(2);
        for (r=0; r<4; r=r+1) for (c=0; c<256; c=c+1) begin
            clear_vectors(); input_vec[0]=c[7:0]; weight[0]=$urandom_range(31,0); apply_transaction();
        end
        drain_and_report(2);

        // T03 - 4 x 256: quatro elementos de 4 bits.
        start_test(3);
        for (r=0; r<4; r=r+1) for (c=0; c<256; c=c+1) begin
            clear_vectors();
            for (i=0; i<4; i=i+1) begin input_vec[i]=(c>>(i*2)) & 15; weight[i]=$urandom_range(15,0); end
            apply_transaction();
        end
        drain_and_report(3);

        // T04 - todas as 256 combinações binárias dos oito elementos, 4 rodadas.
        start_test(4);
        for (r=0; r<4; r=r+1) for (c=0; c<256; c=c+1) begin
            clear_vectors();
            for (i=0; i<8; i=i+1) begin input_vec[i]=(c>>i)&1; weight[i]=$urandom_range(3,0); end
            apply_transaction();
        end
        drain_and_report(4);

        // T05 - 4 x 4096 amostras de quatro elementos de 8 bits.
        start_test(5);
        for (r=0; r<4; r=r+1) for (c=0; c<4096; c=c+1) begin
            clear_vectors();
            for (i=0; i<4; i=i+1) begin input_vec[i]=$urandom; weight[i]=$urandom_range(31,0); end
            apply_transaction();
        end
        drain_and_report(5);

        // T06 - 4 x 65536 amostras de doze elementos de 4 bits.
        start_test(6);
        for (r=0; r<4; r=r+1) for (c=0; c<65536; c=c+1) begin
            clear_vectors();
            for (i=0; i<12; i=i+1) begin input_vec[i]=$urandom_range(15,0); weight[i]=$urandom_range(31,0); end
            apply_transaction();
        end
        drain_and_report(6);

`ifndef VERILATOR
        // T07--T11 - propagação de X/Z (somente simuladores de quatro estados).
        start_test(7); clear_vectors(); input_vec[0]='x; weight[0]=7; apply_transaction(); drain_and_report(7);
        start_test(8); clear_vectors(); input_vec[0]='z; weight[0]=7; apply_transaction(); drain_and_report(8);
        start_test(9);
        clear_vectors(); input_vec[0]=8'b0z0z0z0z; weight[0]=3; apply_transaction();
        clear_vectors(); input_vec[0]=8'bz0z0z0z0; weight[0]=5; apply_transaction();
        clear_vectors(); input_vec[0]=8'b1z1z1z1z; weight[0]=7; apply_transaction();
        clear_vectors(); input_vec[0]=8'bz1z1z1z1; weight[0]=9; apply_transaction(); drain_and_report(9);
        start_test(10);
        clear_vectors(); input_vec[0]='z; weight[0]=8'bxzxzxzxz; apply_transaction();
        clear_vectors(); input_vec[0]='z; weight[0]=8'bzxzxzxzx; apply_transaction(); drain_and_report(10);
        start_test(11);
        clear_vectors(); input_vec[0]=8'b0z1z0z1z; weight[0]=8'bxzxzxzxz; apply_transaction();
        clear_vectors(); input_vec[0]=8'bz0z1z0z1; weight[0]=8'bzxzxzxzx; apply_transaction(); drain_and_report(11);
`else
        for (i=7; i<=11; i=i+1) begin
            start_test(i); test_skip[i]=1;
            $display("[SKIP] T%02d  Verilator utiliza simulacao de dois estados", i);
        end
`endif

        // T12 - entradas zero; T13 - pesos zero.
        start_test(12);
        for (c=0; c<32; c=c+1) begin clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) weight[i]=$urandom; apply_transaction(); end
        drain_and_report(12);
        start_test(13);
        for (c=0; c<32; c=c+1) begin clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) input_vec[i]=$urandom; apply_transaction(); end
        drain_and_report(13);

        // T14 - elemento unitário, positivo e negativo.
        start_test(14);
        for (c=-128; c<128; c=c+1) begin clear_vectors(); input_vec[7]=c; weight[7]=1; apply_transaction(); end
        drain_and_report(14);

        // T15 - walking element em todas as posições.
        start_test(15);
        for (c=0; c<N_INPUTS; c=c+1) begin clear_vectors(); input_vec[c]=37; weight[c]=1; apply_transaction(); end
        drain_and_report(15);

        // T16--T18 - extremos signed e largura do acumulador.
        start_test(16);
        clear_vectors(); input_vec[0]=127; weight[0]=127; apply_transaction();
        clear_vectors(); input_vec[0]=127; weight[0]=-128; apply_transaction();
        clear_vectors(); input_vec[0]=-128; weight[0]=127; apply_transaction();
        clear_vectors(); input_vec[0]=-128; weight[0]=-128; apply_transaction(); drain_and_report(16);
        start_test(17); clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=127; weight[i]=127; end apply_transaction(); drain_and_report(17);
        start_test(18); clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=-128; weight[i]=-128; end apply_transaction(); drain_and_report(18);

        // T19--T20 - cancelamento parcial e perfeito.
        start_test(19);
        clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=(i%2)?-128:127; weight[i]=1; end apply_transaction();
        clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=127; weight[i]=(i%2)?-1:1; end apply_transaction(); drain_and_report(19);
        start_test(20); clear_vectors(); for(i=0;i<4;i=i+1) begin input_vec[i]=10; weight[i]=(i%2)?-1:1; end apply_transaction(); drain_and_report(20);

        // T21 - 256 operações back-to-back.
        start_test(21);
        for(c=0;c<256;c=c+1) begin clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=$urandom; weight[i]=$urandom; end apply_transaction(); end
        drain_and_report(21);

        // T22 - 256 ciclos com gaps pseudoaleatórios determinísticos.
        start_test(22);
        for(c=0;c<256;c=c+1) begin
            clear_vectors(); input_vec[0]=c; weight[0]=c+1;
            if ((c%3)!=1) apply_transaction(); else apply_gap();
        end
        drain_and_report(22);

        // T23 - impulso único reconhecível.
        start_test(23); clear_vectors(); input_vec[0]=7; weight[0]=3; apply_transaction(); apply_gap(); drain_and_report(23);

        // T24 - padrão conhecido 1 0 1 1 0 0 1 0 1.
        start_test(24);
        for(c=0;c<9;c=c+1) begin
            clear_vectors(); input_vec[0]=c+1; weight[0]=2;
            if ((c==0)||(c==2)||(c==3)||(c==6)||(c==8)) apply_transaction(); else apply_gap();
        end
        drain_and_report(24);

        // T25 - latência preservada após novo reset.
        start_test(25); pulse_reset(); clear_vectors(); input_vec[0]=13; weight[0]=-5; apply_transaction(); drain_and_report(25);

        // T26--T28 - varredura dirigida de todas as ocupacoes do pipeline.
        // Para cada padrao sao executados LATENCY subcasos. No subcaso n,
        // n pacotes recebem o padrao e os LATENCY-n restantes sao zerados.
        // Todos os pacotes permanecem validos e sao conferidos pelo scoreboard.
        run_latency_fill_test(26, 0); // todos os bits em 0
        run_latency_fill_test(27, 1); // todos os bits em 1
        run_latency_fill_test(28, 2); // bits 0/1 alternados

        $display("");
        $display("=========================================================================================");
        $display("                              DOTPRODUCT - RESULTADOS");
        $display("=========================================================================================");
        $display(" ID   CASO                              APLICADAS  CHECADAS  DESCART.  RESULTADO");
        $display("-----------------------------------------------------------------------------------------");
        for (i=0; i<N_TESTS; i=i+1) begin
            if (test_skip[i])
                $display(" T%02d  %-32s %9d %9d %9d  SKIP",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i]);
            else if (test_fail[i] != 0)
                $display(" T%02d  %-32s %9d %9d %9d  FAIL (%0d)",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i], test_fail[i]);
            else
                $display(" T%02d  %-32s %9d %9d %9d  PASS",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i]);
        end
        $display("=========================================================================================");
        $display(" Varreduras T02-T06 : %0d / 281600", test_sent[2]+test_sent[3]+test_sent[4]+test_sent[5]+test_sent[6]);
        $display(" Total aplicado      : %0d", total_sent);
        $display(" Total checado       : %0d", total_recv);
        $display(" Descartado por reset: %0d", total_flushed);
        $display(" Latencia            : %0d ciclos (%0d PASS / %0d FAIL)", LATENCY, latency_pass, latency_fail);
        $display(" Erros               : dados=%0d valid=%0d desconhecidos=%0d", data_fail, valid_fail, unknown_fail);
        $display("-----------------------------------------------------------------------------------------");
        if ((total_fail!=0) || (total_sent!=(total_recv+total_flushed))) begin
            $display(" RESULTADO FINAL      : FAIL");
            $fatal(1,"REGRESSAO DOTPRODUCT FALHOU");
        end else begin
            $display(" RESULTADO FINAL      : PASS");
            $display("=========================================================================================");
            $finish(0);
        end
    end
endmodule
