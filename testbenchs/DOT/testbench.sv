`timescale 1ns/1ps

module testbench #(
    parameter DATA_WIDTH = 8,
    parameter N_INPUTS = 32,
    parameter ENABLE_WAVEFORM = 0,
    parameter ENABLE_MONITOR = 0
);
    localparam ACC_WIDTH = 2*DATA_WIDTH + $clog2(N_INPUTS);
    // O RTL possui $clog2(N_INPUTS)+1 posicoes/estagios de pipeline contando
    // o proprio ciclo de captura como a primeira posicao. Portanto, para N_INPUTS=32:
    // PIPELINE_STAGES=6, mas a distancia entre a borda de captura C_IN e a borda
    // de saida e 5 ciclos. T26--T28 continuam usando as 6 ocupacoes fisicas.
    localparam LATENCY = $clog2(N_INPUTS) + 1;
    localparam LATENCY_CYCLES = LATENCY - 1;
    localparam REF_DEPTH = LATENCY;
    localparam CHECK_STAGE = REF_DEPTH - 1;
    localparam VECTOR_BITS = DATA_WIDTH * N_INPUTS;
    localparam CLK_PERIOD = 10;
    localparam N_TESTS = 29;
    localparam integer SEED_BASE = 32'h5A17_2026;

    logic clk, rst, valid_in, valid_out;
    logic signed [DATA_WIDTH-1:0] input_vec [0:N_INPUTS-1];
    logic signed [DATA_WIDTH-1:0] weight [0:N_INPUTS-1];
    logic signed [ACC_WIDTH-1:0] out;

    logic signed [ACC_WIDTH-1:0] exp_pipe [0:REF_DEPTH-1];
    logic exp_valid [0:REF_DEPTH-1];
    integer exp_test [0:REF_DEPTH-1];
    integer exp_tx [0:REF_DEPTH-1];
    integer exp_round [0:REF_DEPTH-1];
    integer exp_seed [0:REF_DEPTH-1];
    integer exp_input_cycle [0:REF_DEPTH-1];
    integer exp_expected_cycle [0:REF_DEPTH-1];
    logic [VECTOR_BITS-1:0] exp_input_snapshot [0:REF_DEPTH-1];
    logic [VECTOR_BITS-1:0] exp_weight_snapshot [0:REF_DEPTH-1];

    integer test_sent [0:N_TESTS-1];
    integer test_pass [0:N_TESTS-1];
    integer test_fail [0:N_TESTS-1];
    integer test_skip [0:N_TESTS-1];
    integer test_flushed [0:N_TESTS-1];
    integer round_seed_log [0:N_TESTS-1][0:3];
    integer total_sent, total_recv, total_pass, total_fail, total_flushed;
    integer latency_pass, latency_fail, valid_fail, data_fail, unknown_fail;
    integer valid_latency_pass, valid_latency_fail, data_latency_pass, data_latency_fail;
    integer order_fail, order_pass, loss_fail, duplicate_fail, latency_early, latency_late;
    integer assertions_pass, assertions_fail;
    integer cycle_count, current_test, tx_count, current_round, current_seed;
    integer valid_latency_min, valid_latency_max, valid_latency_sum, valid_latency_samples;
    integer data_latency_min, data_latency_max, data_latency_sum, data_latency_samples;
    integer pending_missing_valid, sb_scan, order_match_stage;
    integer skipped_required, coverage_fail, index_cov_count;
    integer t21_order_next, t21_order_checks;
    logic signed [ACC_WIDTH-1:0] t21_expected_order_value;
    integer observed_valid_latency, observed_data_latency;
    integer i, j, r, c;

    // Medicao dirigida usada por T23 e T25.
    logic measure_active;
    logic signed [ACC_WIDTH-1:0] measure_expected;
    integer measure_input_cycle, measure_data_cycle, measure_valid_cycle;
    integer normal_data_latency, normal_valid_latency;
    integer postreset_data_latency, postreset_valid_latency;

    // Cobertura funcional manual, independente de suporte a covergroup do simulador.
    integer cov_reset_initial, cov_reset_activity;
    integer cov_valid_0, cov_valid_1;
    integer cov_pipe_isolated, cov_pipe_back2back, cov_pipe_gaps;
    integer cov_active_1, cov_active_4, cov_active_8, cov_active_12, cov_active_32;
    integer cov_input_zero, cov_input_pos, cov_input_neg;
    integer cov_weight_zero, cov_weight_pos, cov_weight_neg;
    integer cov_result_neg, cov_result_zero, cov_result_pos;
    integer cov_signed_min, cov_signed_max;
    integer cov_special_x, cov_special_z, cov_special_xz;
    integer cov_cancel_partial, cov_cancel_total;
    integer cov_latency_correct, cov_latency_early, cov_latency_late;
    integer cov_order_correct, cov_order_incorrect;
    logic [N_INPUTS-1:0] cov_index_positions;

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

    function automatic snapshot_is_zero;
        input logic [VECTOR_BITS-1:0] snap;
        begin
            snapshot_is_zero = (snap === {VECTOR_BITS{1'b0}});
        end
    endfunction

    task automatic capture_snapshots;
        input integer idx;
        integer k;
        begin
            for (k=0; k<N_INPUTS; k=k+1) begin
                exp_input_snapshot[idx][k*DATA_WIDTH +: DATA_WIDTH] = input_vec[k];
                exp_weight_snapshot[idx][k*DATA_WIDTH +: DATA_WIDTH] = weight[k];
            end
        end
    endtask

    task automatic set_round_seed;
        input integer test_id;
        input integer round_id;
        integer tmp_seed;
        integer dummy;
        begin
            tmp_seed = SEED_BASE ^ (test_id * 32'h0001_0101) ^ (round_id * 32'h0100_0193);
            current_round = round_id;
            current_seed = tmp_seed;
            if ((round_id >= 0) && (round_id < 4))
                round_seed_log[test_id][round_id] = current_seed;
            // Semeia o PRNG da thread sem perder o valor original usado no relatorio.
            dummy = $urandom(tmp_seed);
        end
    endtask

    task automatic record_valid_latency;
        input integer lat;
        begin
            if (valid_latency_samples == 0) begin
                valid_latency_min = lat;
                valid_latency_max = lat;
            end else begin
                if (lat < valid_latency_min) valid_latency_min = lat;
                if (lat > valid_latency_max) valid_latency_max = lat;
            end
            valid_latency_sum = valid_latency_sum + lat;
            valid_latency_samples = valid_latency_samples + 1;
        end
    endtask

    task automatic record_data_latency;
        input integer lat;
        begin
            if (data_latency_samples == 0) begin
                data_latency_min = lat;
                data_latency_max = lat;
            end else begin
                if (lat < data_latency_min) data_latency_min = lat;
                if (lat > data_latency_max) data_latency_max = lat;
            end
            data_latency_sum = data_latency_sum + lat;
            data_latency_samples = data_latency_samples + 1;
        end
    endtask

    task automatic arm_latency_measure;
        input logic signed [ACC_WIDTH-1:0] expected_value;
        begin
            measure_active = 1;
            measure_expected = expected_value;
            measure_input_cycle = -1;
            measure_data_cycle = -1;
            measure_valid_cycle = -1;
        end
    endtask

    task automatic update_functional_coverage;
        input logic signed [ACC_WIDTH-1:0] expected_value;
        integer k;
        integer input_all_zero, weight_all_zero;
        integer seen_input_pos, seen_input_neg, seen_weight_pos, seen_weight_neg;
        begin
            input_all_zero = 1;
            weight_all_zero = 1;
            seen_input_pos = 0;
            seen_input_neg = 0;
            seen_weight_pos = 0;
            seen_weight_neg = 0;

            for (k=0; k<N_INPUTS; k=k+1) begin
                if ($isunknown(input_vec[k])) begin
                    input_all_zero = 0;
                end else begin
                    if (input_vec[k] != 0) input_all_zero = 0;
                    if ($signed(input_vec[k]) > 0) seen_input_pos = 1;
                    if ($signed(input_vec[k]) < 0) seen_input_neg = 1;
                    if ($signed(input_vec[k]) == -(1 <<< (DATA_WIDTH-1))) cov_signed_min = 1;
                    if ($signed(input_vec[k]) == ((1 <<< (DATA_WIDTH-1))-1)) cov_signed_max = 1;
                    if ((current_test == 15) && (input_vec[k] != 0)) cov_index_positions[k] = 1'b1;
                end

                if ($isunknown(weight[k])) begin
                    weight_all_zero = 0;
                end else begin
                    if (weight[k] != 0) weight_all_zero = 0;
                    if ($signed(weight[k]) > 0) seen_weight_pos = 1;
                    if ($signed(weight[k]) < 0) seen_weight_neg = 1;
                    if ($signed(weight[k]) == -(1 <<< (DATA_WIDTH-1))) cov_signed_min = 1;
                    if ($signed(weight[k]) == ((1 <<< (DATA_WIDTH-1))-1)) cov_signed_max = 1;
                end
            end

            if (input_all_zero) cov_input_zero = 1;
            if (weight_all_zero) cov_weight_zero = 1;
            if (seen_input_pos) cov_input_pos = 1;
            if (seen_input_neg) cov_input_neg = 1;
            if (seen_weight_pos) cov_weight_pos = 1;
            if (seen_weight_neg) cov_weight_neg = 1;

            if (!$isunknown(expected_value)) begin
                if ($signed(expected_value) < 0) cov_result_neg = 1;
                else if ($signed(expected_value) > 0) cov_result_pos = 1;
                else cov_result_zero = 1;
            end

            case (current_test)
                 2,14,15,16,21,23,25: cov_active_1 = 1;
                 3,5,20:           cov_active_4 = 1;
                 4:                cov_active_8 = 1;
                 6:                cov_active_12 = 1;
                17,18,19,27,28:    cov_active_32 = 1;
                default: ;
            endcase

            case (current_test)
                 7: cov_special_x = 1;
                 8,9: cov_special_z = 1;
                10,11: cov_special_xz = 1;
                19: cov_cancel_partial = 1;
                20: cov_cancel_total = 1;
                21: cov_pipe_back2back = 1;
                22: cov_pipe_gaps = 1;
                23: cov_pipe_isolated = 1;
                default: ;
            endcase
        end
    endtask

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

    task automatic settle_datapath_zero;
        begin
            clear_vectors();
            valid_in = 0;
            repeat (LATENCY+1) @(negedge clk);
        end
    endtask

    task automatic start_test;
        input integer id;
        begin
            current_test = id;
            current_round = -1;
            current_seed = 0;
            $display("[RUN ] T%02d  %s", id, test_name(id));
        end
    endtask

    task automatic apply_transaction;
        begin
            // Aplica o estimulo no negedge e o mantem estavel atraves do
            // posedge em que DUT e scoreboard realizam a captura.
            //
            // A versao anterior retornava imediatamente no mesmo negedge.
            // Em loops back-to-back o chamador alterava input_vec/weight ainda
            // no mesmo timestep, fazendo a proxima transacao sobrescrever a
            // atual antes da captura. O atraso abaixo ocorre somente dentro do
            // mesmo ciclo e preserva throughput de uma transacao por clock.
            @(negedge clk);
            valid_in = 1;
            cov_valid_1 = 1;
            tx_count = tx_count + 1;
            @(posedge clk);
            #2; // scoreboard amostra em #1; so entao liberamos o proximo estimulo
        end
    endtask

    task automatic apply_gap;
        begin
            @(negedge clk);
            valid_in = 0;
            cov_valid_0 = 1;
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
            for (k=0; k<REF_DEPTH; k=k+1) begin
                exp_valid[k] = 0;
                exp_pipe[k] = '0;
                exp_test[k] = 0;
                exp_tx[k] = 0;
                exp_round[k] = -1;
                exp_seed[k] = 0;
                exp_input_cycle[k] = 0;
                exp_expected_cycle[k] = 0;
                exp_input_snapshot[k] = '0;
                exp_weight_snapshot[k] = '0;
            end
            pending_missing_valid = 0;
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

    /* Scoreboard temporal: associa valor, teste, ID e ciclos ao ciclo exato de saída.
       O indice CHECK_STAGE representa C_IN + LATENCY_CYCLES; o slot zero representa
       o ciclo em que a transacao foi capturada. As atribuicoes bloqueantes sao intencionais. */
    /* verilator lint_off BLKSEQ */
    always @(posedge clk) begin
        cycle_count = cycle_count + 1;

        if (rst) begin
            for (j=0; j<REF_DEPTH; j=j+1) begin
                if (exp_valid[j]) begin
                    total_flushed = total_flushed + 1;
                    test_flushed[exp_test[j]] = test_flushed[exp_test[j]] + 1;
                end
                exp_valid[j] = 0;
                exp_pipe[j] = '0;
                exp_test[j] = 0;
                exp_tx[j] = 0;
                exp_round[j] = -1;
                exp_seed[j] = 0;
                exp_input_cycle[j] = 0;
                exp_expected_cycle[j] = 0;
                exp_input_snapshot[j] = '0;
                exp_weight_snapshot[j] = '0;
            end
            pending_missing_valid = 0;
        end else begin
            for (j=CHECK_STAGE; j>0; j=j-1) begin
                exp_valid[j] = exp_valid[j-1];
                exp_pipe[j] = exp_pipe[j-1];
                exp_test[j] = exp_test[j-1];
                exp_tx[j] = exp_tx[j-1];
                exp_round[j] = exp_round[j-1];
                exp_seed[j] = exp_seed[j-1];
                exp_input_cycle[j] = exp_input_cycle[j-1];
                exp_expected_cycle[j] = exp_expected_cycle[j-1];
                exp_input_snapshot[j] = exp_input_snapshot[j-1];
                exp_weight_snapshot[j] = exp_weight_snapshot[j-1];
            end

            exp_valid[0] = valid_in;
            exp_pipe[0] = '0;
            exp_test[0] = current_test;
            exp_tx[0] = 0;
            exp_round[0] = current_round;
            exp_seed[0] = current_seed;
            exp_input_cycle[0] = cycle_count;
            exp_expected_cycle[0] = cycle_count + LATENCY_CYCLES;
            exp_input_snapshot[0] = '0;
            exp_weight_snapshot[0] = '0;

            if (valid_in) begin
                exp_pipe[0] = reference_dot();
                exp_tx[0] = tx_count;
                capture_snapshots(0);
                update_functional_coverage(exp_pipe[0]);
                total_sent = total_sent + 1;
                test_sent[current_test] = test_sent[current_test] + 1;

                if (measure_active && (measure_input_cycle < 0))
                    measure_input_cycle = cycle_count;
            end
        end

        #1;

        // T23/T25 medem independentemente o primeiro ciclo em que o dado
        // reconhecivel aparece e o primeiro ciclo em que valid_out e observado.
        if (measure_active && (measure_input_cycle >= 0)) begin
            if ((measure_data_cycle < 0) && (out === measure_expected))
                measure_data_cycle = cycle_count;
            if ((measure_valid_cycle < 0) && (valid_out === 1'b1))
                measure_valid_cycle = cycle_count;
        end

        // T21 possui resultados unicos. A ordem e checada independentemente do
        // ciclo de chegada, de modo que um erro puramente de LATENCY nao seja
        // confundido com ORDER_ERROR.
        if ((current_test == 21) && (valid_out === 1'b1) && (t21_order_next < 256)) begin
            if (t21_order_next < 128)
                t21_expected_order_value = t21_order_next;
            else
                t21_expected_order_value = t21_order_next - 256;

            t21_order_checks = t21_order_checks + 1;
            if (out === t21_expected_order_value) begin
                order_pass = order_pass + 1;
                cov_order_correct = 1;
            end else begin
                order_fail = order_fail + 1;
                cov_order_incorrect = 1;
                total_fail = total_fail + 1;
                test_fail[21] = test_fail[21] + 1;
                $display("[ORDER_ERROR][T21] posicao=%0d esperado=%0d obtido=%0d ciclo=%0d",
                       t21_order_next, t21_expected_order_value, out, cycle_count);
            end
            t21_order_next = t21_order_next + 1;
        end

        // Assertion temporal primaria: valid_out deve ser valid_in deslocado por LATENCY_CYCLES.
        assert (valid_out === exp_valid[CHECK_STAGE])
            assertions_pass = assertions_pass + 1;
        else
            assertions_fail = assertions_fail + 1;

        if (valid_out !== exp_valid[CHECK_STAGE]) begin
            total_fail = total_fail + 1;
            valid_fail = valid_fail + 1;
            latency_fail = latency_fail + 1;
            valid_latency_fail = valid_latency_fail + 1;
            order_match_stage = -1;

            if (exp_valid[CHECK_STAGE]) begin
                // A transacao deveria ter produzido valid_out neste ciclo.
                pending_missing_valid = pending_missing_valid + 1;
                loss_fail = loss_fail + 1;
                latency_late = latency_late + 1;
                cov_latency_late = 1;
                test_fail[exp_test[CHECK_STAGE]] = test_fail[exp_test[CHECK_STAGE]] + 1;

                $display("[VALID_ERROR][T%02d][TX%0d] esperado no ciclo=%0d observado=%0d valid=%b",
                       exp_test[CHECK_STAGE], exp_tx[CHECK_STAGE], exp_expected_cycle[CHECK_STAGE],
                       cycle_count, valid_out);
                $display("       round=%0d seed=0x%08x input_cycle=%0d expected_cycle=%0d",
                         exp_round[CHECK_STAGE], exp_seed[CHECK_STAGE], exp_input_cycle[CHECK_STAGE],
                         exp_expected_cycle[CHECK_STAGE]);
                $display("       input_vec=0x%0h weight=0x%0h expected=%0h out=%0h",
                         exp_input_snapshot[CHECK_STAGE], exp_weight_snapshot[CHECK_STAGE],
                         exp_pipe[CHECK_STAGE], out);
            end else if (valid_out === 1'b1) begin
                // Sem transacao prevista agora: procura se o dado pertence a uma
                // transacao futura ainda no pipeline, caracterizando antecipacao temporal.
                for (sb_scan=CHECK_STAGE-1; sb_scan>=0; sb_scan=sb_scan-1) begin
                    if ((order_match_stage < 0) && exp_valid[sb_scan] &&
                        (out === exp_pipe[sb_scan]))
                        order_match_stage = sb_scan;
                end

                if (order_match_stage >= 0) begin
                    latency_early = latency_early + 1;
                    cov_latency_early = 1;
                    test_fail[exp_test[order_match_stage]] = test_fail[exp_test[order_match_stage]] + 1;
                    $display("[LATENCY_ERROR][EARLY][T%02d][TX%0d] resultado antecipado no ciclo=%0d esperado=%0d",
                           exp_test[order_match_stage], exp_tx[order_match_stage], cycle_count,
                           exp_expected_cycle[order_match_stage]);
                end else if (pending_missing_valid > 0) begin
                    pending_missing_valid = pending_missing_valid - 1;
                    if (loss_fail > 0) loss_fail = loss_fail - 1;
                    latency_late = latency_late + 1;
                    cov_latency_late = 1;
                    $display("[LATENCY_ERROR] valid_out atrasado no ciclo=%0d", cycle_count);
                end else begin
                    duplicate_fail = duplicate_fail + 1;
                    $display("[VALID_ERROR][DUPLICATE_ERROR] valid_out sem transacao prevista no ciclo=%0d", cycle_count);
                end
            end
        end else if (exp_valid[CHECK_STAGE]) begin
            total_recv = total_recv + 1;
            observed_valid_latency = cycle_count - exp_input_cycle[CHECK_STAGE];
            record_valid_latency(observed_valid_latency);

            if (observed_valid_latency == LATENCY_CYCLES) begin
                valid_latency_pass = valid_latency_pass + 1;
            end else begin
                valid_latency_fail = valid_latency_fail + 1;
                latency_fail = latency_fail + 1;
                if (observed_valid_latency < LATENCY_CYCLES) begin
                    latency_early = latency_early + 1;
                    cov_latency_early = 1;
                end else begin
                    latency_late = latency_late + 1;
                    cov_latency_late = 1;
                end
            end

            // Assertions dirigidas para os dois corner cases zero descritos no README.
            if (snapshot_is_zero(exp_input_snapshot[CHECK_STAGE]) &&
                !$isunknown(exp_weight_snapshot[CHECK_STAGE])) begin
                assert (out === '0)
                    assertions_pass = assertions_pass + 1;
                else
                    assertions_fail = assertions_fail + 1;
            end
            if (snapshot_is_zero(exp_weight_snapshot[CHECK_STAGE]) &&
                !$isunknown(exp_input_snapshot[CHECK_STAGE])) begin
                assert (out === '0)
                    assertions_pass = assertions_pass + 1;
                else
                    assertions_fail = assertions_fail + 1;
            end

            if (out === exp_pipe[CHECK_STAGE]) begin
                observed_data_latency = cycle_count - exp_input_cycle[CHECK_STAGE];
                record_data_latency(observed_data_latency);
                if (observed_data_latency == LATENCY_CYCLES)
                    data_latency_pass = data_latency_pass + 1;
                else
                    data_latency_fail = data_latency_fail + 1;

                if ((observed_valid_latency == LATENCY_CYCLES) &&
                    (observed_data_latency == LATENCY_CYCLES)) begin
                    latency_pass = latency_pass + 1;
                    cov_latency_correct = 1;
                end else begin
                    latency_fail = latency_fail + 1;
                end

                total_pass = total_pass + 1;
                test_pass[exp_test[CHECK_STAGE]] = test_pass[exp_test[CHECK_STAGE]] + 1;
                if (ENABLE_MONITOR)
                    $display("[PASS][T%02d][TX%0d] in=%0d exp=%0d obs=%0d out=%0d",
                             exp_test[CHECK_STAGE], exp_tx[CHECK_STAGE], exp_input_cycle[CHECK_STAGE],
                             exp_expected_cycle[CHECK_STAGE], cycle_count, out);
            end else begin
                total_fail = total_fail + 1;
                data_fail = data_fail + 1;
                data_latency_fail = data_latency_fail + 1;
                test_fail[exp_test[CHECK_STAGE]] = test_fail[exp_test[CHECK_STAGE]] + 1;
                if ($isunknown(exp_pipe[CHECK_STAGE])) unknown_fail = unknown_fail + 1;

                order_match_stage = -1;
                for (sb_scan=CHECK_STAGE-1; sb_scan>=0; sb_scan=sb_scan-1) begin
                    if ((order_match_stage < 0) && exp_valid[sb_scan] &&
                        (out === exp_pipe[sb_scan]))
                        order_match_stage = sb_scan;
                end
                if (order_match_stage >= 0) begin
                    $display("[DATA_LATENCY_ERROR] out corresponde a TX%0d futura, esperada somente no ciclo=%0d",
                           exp_tx[order_match_stage], exp_expected_cycle[order_match_stage]);
                end

                $display("[DATA_ERROR][T%02d][TX%0d] input_cycle=%0d expected_cycle=%0d observed_cycle=%0d",
                       exp_test[CHECK_STAGE], exp_tx[CHECK_STAGE], exp_input_cycle[CHECK_STAGE],
                       exp_expected_cycle[CHECK_STAGE], cycle_count);
                $display("       round=%0d seed=0x%08x expected=%0h out=%0h",
                         exp_round[CHECK_STAGE], exp_seed[CHECK_STAGE], exp_pipe[CHECK_STAGE], out);
                $display("       input_vec=0x%0h weight=0x%0h",
                         exp_input_snapshot[CHECK_STAGE], exp_weight_snapshot[CHECK_STAGE]);
            end
        end
    end
    /* verilator lint_on BLKSEQ */

    initial begin
        clk=0; rst=1; valid_in=0;
        total_sent=0; total_recv=0; total_pass=0; total_fail=0; total_flushed=0;
        latency_pass=0; latency_fail=0; valid_fail=0; data_fail=0; unknown_fail=0;
        valid_latency_pass=0; valid_latency_fail=0; data_latency_pass=0; data_latency_fail=0;
        order_fail=0; order_pass=0; loss_fail=0; duplicate_fail=0;
        latency_early=0; latency_late=0; assertions_pass=0; assertions_fail=0;
        cycle_count=0; current_test=0; tx_count=0; current_round=-1; current_seed=0;
        valid_latency_min=0; valid_latency_max=0; valid_latency_sum=0; valid_latency_samples=0;
        data_latency_min=0; data_latency_max=0; data_latency_sum=0; data_latency_samples=0;
        pending_missing_valid=0; skipped_required=0;
        t21_order_next=0; t21_order_checks=0; t21_expected_order_value='0;
        coverage_fail=0; index_cov_count=0;
        measure_active=0; measure_expected='0; measure_input_cycle=-1;
        measure_data_cycle=-1; measure_valid_cycle=-1;
        normal_data_latency=-1; normal_valid_latency=-1;
        postreset_data_latency=-1; postreset_valid_latency=-1;

        cov_reset_initial=0; cov_reset_activity=0; cov_valid_0=0; cov_valid_1=0;
        cov_pipe_isolated=0; cov_pipe_back2back=0; cov_pipe_gaps=0;
        cov_active_1=0; cov_active_4=0; cov_active_8=0; cov_active_12=0; cov_active_32=0;
        cov_input_zero=0; cov_input_pos=0; cov_input_neg=0;
        cov_weight_zero=0; cov_weight_pos=0; cov_weight_neg=0;
        cov_result_neg=0; cov_result_zero=0; cov_result_pos=0;
        cov_signed_min=0; cov_signed_max=0; cov_special_x=0; cov_special_z=0; cov_special_xz=0;
        cov_cancel_partial=0; cov_cancel_total=0;
        cov_latency_correct=0; cov_latency_early=0; cov_latency_late=0;
        cov_order_correct=0; cov_order_incorrect=0; cov_index_positions='0;

        clear_vectors();
        for (i=0; i<REF_DEPTH; i=i+1) begin
            exp_valid[i]=0; exp_pipe[i]='0; exp_test[i]=0; exp_tx[i]=0;
            exp_round[i]=-1; exp_seed[i]=0; exp_input_cycle[i]=0; exp_expected_cycle[i]=0;
            exp_input_snapshot[i]='0; exp_weight_snapshot[i]='0;
        end
        for (i=0; i<N_TESTS; i=i+1) begin
            test_sent[i]=0; test_pass[i]=0; test_fail[i]=0;
            test_skip[i]=0; test_flushed[i]=0;
            for (r=0; r<4; r=r+1) round_seed_log[i][r]=0;
        end

        if (ENABLE_WAVEFORM || $test$plusargs("waveform")) begin
            $dumpfile("DotProduct_tb.vcd");
            $dumpvars(0, testbench);
            $display("[WAVE] Gravando waveform em DotProduct_tb.vcd");
        end else begin
            $display("[WAVE] Desabilitada (use +waveform ou o alvo make wave)");
        end

        // T00 - reset inicial e primeira operacao pos-reset.
        start_test(0);
        repeat (3) @(negedge clk);
        rst=0; clear_vectors(); input_vec[0]=7; weight[0]=3; apply_transaction();
        drain_and_report(0);
        cov_reset_initial=1;

        // T01 - reset limpa operacoes em transito; depois o pipeline se recupera.
        start_test(1); clear_vectors();
        for (c=0; c<4; c=c+1) begin
            input_vec[0]=c+1; weight[0]=2; apply_transaction();
        end
        pulse_reset(); cov_reset_activity=1;
        clear_vectors(); input_vec[0]=11; weight[0]=3; apply_transaction();
        drain_and_report(1);

        // T02 - 4 x 256: um elemento ativo, faixa completa de 8 bits.
        start_test(2);
        for (r=0; r<4; r=r+1) begin
            set_round_seed(2, r);
            for (c=0; c<256; c=c+1) begin
                clear_vectors(); input_vec[0]=c[7:0]; weight[0]=$urandom_range(31,0); apply_transaction();
            end
        end
        drain_and_report(2);

        // T03 - 4 x 256: quatro elementos restritos a 4 bits.
        // Todos os quatro elementos variam em 0..15; os 256 casos continuam preservados.
        start_test(3);
        for (r=0; r<4; r=r+1) begin
            set_round_seed(3, r);
            for (c=0; c<256; c=c+1) begin
                clear_vectors();
                input_vec[0] = c & 15;
                input_vec[1] = (c >> 4) & 15;
                input_vec[2] = ((c * 5) + r) & 15;
                input_vec[3] = ((c * 9) + (r * 3)) & 15;
                for (i=0; i<4; i=i+1) weight[i]=$urandom_range(15,0);
                apply_transaction();
            end
        end
        drain_and_report(3);

        // T04 - todas as 256 combinacoes binarias dos oito elementos, 4 rodadas.
        start_test(4);
        for (r=0; r<4; r=r+1) begin
            set_round_seed(4, r);
            for (c=0; c<256; c=c+1) begin
                clear_vectors();
                for (i=0; i<8; i=i+1) begin
                    input_vec[i]=(c>>i)&1; weight[i]=$urandom_range(3,0);
                end
                apply_transaction();
            end
        end
        drain_and_report(4);

        // T05 - 4 x 4096 amostras de quatro elementos de 8 bits.
        start_test(5);
        for (r=0; r<4; r=r+1) begin
            set_round_seed(5, r);
            for (c=0; c<4096; c=c+1) begin
                clear_vectors();
                for (i=0; i<4; i=i+1) begin input_vec[i]=$urandom; weight[i]=$urandom_range(31,0); end
                apply_transaction();
            end
        end
        drain_and_report(5);

        // T06 - 4 x 65536 amostras de doze elementos de 4 bits.
        start_test(6);
        for (r=0; r<4; r=r+1) begin
            set_round_seed(6, r);
            for (c=0; c<65536; c=c+1) begin
                clear_vectors();
                for (i=0; i<12; i=i+1) begin
                    input_vec[i]=$urandom_range(15,0); weight[i]=$urandom_range(31,0);
                end
                apply_transaction();
            end
        end
        drain_and_report(6);

`ifndef VERILATOR
        // T07--T11 - propagacao de X/Z (somente simuladores de quatro estados).
        start_test(7); set_round_seed(7,0);
        clear_vectors(); input_vec[0]='x; weight[0]=$urandom_range(31,0); apply_transaction(); drain_and_report(7);

        start_test(8); set_round_seed(8,0);
        clear_vectors(); input_vec[0]='z; weight[0]=$urandom_range(31,0); apply_transaction(); drain_and_report(8);

        start_test(9); set_round_seed(9,0);
        clear_vectors(); input_vec[0]=8'b0z0z0z0z; weight[0]=$urandom_range(31,0); apply_transaction();
        clear_vectors(); input_vec[0]=8'bz0z0z0z0; weight[0]=$urandom_range(31,0); apply_transaction();
        clear_vectors(); input_vec[0]=8'b1z1z1z1z; weight[0]=$urandom_range(31,0); apply_transaction();
        clear_vectors(); input_vec[0]=8'bz1z1z1z1; weight[0]=$urandom_range(31,0); apply_transaction(); drain_and_report(9);

        start_test(10);
        clear_vectors(); input_vec[0]='z; weight[0]=8'bxzxzxzxz; apply_transaction();
        clear_vectors(); input_vec[0]='z; weight[0]=8'bzxzxzxzx; apply_transaction(); drain_and_report(10);

        start_test(11);
        clear_vectors(); input_vec[0]=8'b0z1z0z1z; weight[0]=8'bxzxzxzxz; apply_transaction();
        clear_vectors(); input_vec[0]=8'bz0z1z0z1; weight[0]=8'bzxzxzxzx; apply_transaction(); drain_and_report(11);
`else
        for (i=7; i<=11; i=i+1) begin
            start_test(i); test_skip[i]=1; skipped_required=skipped_required+1;
            $display("[SKIP] T%02d  Verilator utiliza simulacao de dois estados", i);
        end
`endif

        // T12 - entradas zero; T13 - pesos zero.
        start_test(12); set_round_seed(12,0);
        for (c=0; c<32; c=c+1) begin
            clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) weight[i]=$urandom; apply_transaction();
        end
        drain_and_report(12);

        start_test(13); set_round_seed(13,0);
        for (c=0; c<32; c=c+1) begin
            clear_vectors(); for(i=0;i<N_INPUTS;i=i+1) input_vec[i]=$urandom; apply_transaction();
        end
        drain_and_report(13);

        // T14 - elemento unitario, positivo e negativo.
        start_test(14);
        for (c=-128; c<128; c=c+1) begin
            clear_vectors(); input_vec[7]=c; weight[7]=1; apply_transaction();
        end
        drain_and_report(14);

        // T15 - walking element em todas as posicoes.
        start_test(15);
        for (c=0; c<N_INPUTS; c=c+1) begin
            clear_vectors(); input_vec[c]=37; weight[c]=1; apply_transaction();
        end
        drain_and_report(15);

        // T16--T18 - extremos signed e largura do acumulador.
        start_test(16);
        clear_vectors(); input_vec[0]=127; weight[0]=127; apply_transaction();
        clear_vectors(); input_vec[0]=127; weight[0]=-128; apply_transaction();
        clear_vectors(); input_vec[0]=-128; weight[0]=127; apply_transaction();
        clear_vectors(); input_vec[0]=-128; weight[0]=-128; apply_transaction(); drain_and_report(16);

        start_test(17); clear_vectors();
        for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=127; weight[i]=127; end
        apply_transaction(); drain_and_report(17);

        start_test(18); clear_vectors();
        for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=-128; weight[i]=-128; end
        apply_transaction(); drain_and_report(18);

        // T19--T20 - cancelamento parcial e perfeito.
        start_test(19);
        clear_vectors();
        for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=(i%2)?-128:127; weight[i]=1; end
        apply_transaction();
        clear_vectors();
        for(i=0;i<N_INPUTS;i=i+1) begin input_vec[i]=127; weight[i]=(i%2)?-1:1; end
        apply_transaction(); drain_and_report(19);

        start_test(20); clear_vectors();
        for(i=0;i<4;i=i+1) begin input_vec[i]=10; weight[i]=(i%2)?-1:1; end
        apply_transaction(); drain_and_report(20);

        // T21 - 256 operacoes back-to-back com resultados unicos/identificaveis.
        // Isso preserva o caso e torna uma eventual reordenacao observavel pelo scoreboard.
        start_test(21); t21_order_next=0; t21_order_checks=0;
        for(c=0;c<256;c=c+1) begin
            clear_vectors(); input_vec[0]=c[7:0]; weight[0]=1; apply_transaction();
        end
        drain_and_report(21);

        // T22 - 256 ciclos com gaps pseudoaleatorios e seed reproduzivel.
        start_test(22); set_round_seed(22,0);
        for(c=0;c<256;c=c+1) begin
            clear_vectors(); input_vec[0]=c[7:0]; weight[0]=1;
            if (c==0) apply_transaction();
            else if (c==1) apply_gap();
            else if ($urandom_range(99,0) < 65) apply_transaction();
            else apply_gap();
        end
        drain_and_report(22);

        // T23 - impulso unico: mede experimentalmente L_DATA e L_VALID.
        start_test(23); pulse_reset(); settle_datapath_zero();
        clear_vectors(); input_vec[0]=7; weight[0]=3;
        arm_latency_measure(21); apply_transaction(); drain_and_report(23);
        measure_active=0;
        if ((measure_input_cycle >= 0) && (measure_data_cycle >= 0) && (measure_valid_cycle >= 0)) begin
            normal_data_latency = measure_data_cycle - measure_input_cycle;
            normal_valid_latency = measure_valid_cycle - measure_input_cycle;
            $display("[LATENCY][T23] input=%0d data=%0d valid=%0d L_DATA=%0d L_VALID=%0d esperado=%0d",
                     measure_input_cycle, measure_data_cycle, measure_valid_cycle,
                     normal_data_latency, normal_valid_latency, LATENCY_CYCLES);
            if ((normal_data_latency != LATENCY_CYCLES) || (normal_valid_latency != LATENCY_CYCLES)) begin
                total_fail=total_fail+1; test_fail[23]=test_fail[23]+1; latency_fail=latency_fail+1;
                if (normal_data_latency < LATENCY_CYCLES) begin
                    latency_early=latency_early+1; cov_latency_early=1;
                end else if (normal_data_latency > LATENCY_CYCLES) begin
                    latency_late=latency_late+1; cov_latency_late=1;
                end
                if (normal_valid_latency < LATENCY_CYCLES) begin
                    latency_early=latency_early+1; cov_latency_early=1;
                end else if (normal_valid_latency > LATENCY_CYCLES) begin
                    latency_late=latency_late+1; cov_latency_late=1;
                end
                $display("[LATENCY_ERROR][T23] L_DATA=%0d L_VALID=%0d esperado=%0d",
                       normal_data_latency, normal_valid_latency, LATENCY_CYCLES);
            end
        end else begin
            total_fail=total_fail+1; test_fail[23]=test_fail[23]+1; latency_fail=latency_fail+1;
            $display("[LATENCY_ERROR][T23] nao foi possivel caracterizar data/valid");
        end

        // T24 - padrao conhecido 1 0 1 1 0 0 1 0 1.
        start_test(24);
        for(c=0;c<9;c=c+1) begin
            clear_vectors(); input_vec[0]=c+1; weight[0]=2;
            if ((c==0)||(c==2)||(c==3)||(c==6)||(c==8)) apply_transaction(); else apply_gap();
        end
        drain_and_report(24);

        // T25 - mede novamente apos reset e compara com a latencia normal de T23.
        start_test(25); pulse_reset(); settle_datapath_zero();
        clear_vectors(); input_vec[0]=13; weight[0]=-5;
        arm_latency_measure(-65); apply_transaction(); drain_and_report(25);
        measure_active=0;
        if ((measure_input_cycle >= 0) && (measure_data_cycle >= 0) && (measure_valid_cycle >= 0)) begin
            postreset_data_latency = measure_data_cycle - measure_input_cycle;
            postreset_valid_latency = measure_valid_cycle - measure_input_cycle;
            $display("[LATENCY][T25] L_DATA=%0d L_VALID=%0d; normal T23=(%0d,%0d)",
                     postreset_data_latency, postreset_valid_latency,
                     normal_data_latency, normal_valid_latency);
            // T25 tem como requisito especifico verificar que o reset nao altere
            // a caracteristica temporal observada em T23. A eventual diferenca
            // entre L_DATA e L_VALID ja e classificada por T23 e nao deve ser
            // contada novamente como uma falha de reset quando permanece igual.
            if ((postreset_data_latency != normal_data_latency) ||
                (postreset_valid_latency != normal_valid_latency)) begin
                total_fail=total_fail+1; test_fail[25]=test_fail[25]+1; latency_fail=latency_fail+1;
                $display("[LATENCY_ERROR][T25] latencia pos-reset difere da latencia normal medida em T23");
            end
        end else begin
            total_fail=total_fail+1; test_fail[25]=test_fail[25]+1; latency_fail=latency_fail+1;
            $display("[LATENCY_ERROR][T25] nao foi possivel caracterizar data/valid apos reset");
        end

        // T26--T28 - varredura dirigida de todas as ocupacoes do pipeline.
        // Para cada padrao sao executados LATENCY subcasos. No subcaso n,
        // n pacotes recebem o padrao e os LATENCY-n restantes sao zerados.
        // Todos os pacotes permanecem validos e sao conferidos pelo scoreboard.
        run_latency_fill_test(26, 0); // todos os bits em 0
        run_latency_fill_test(27, 1); // todos os bits em 1
        run_latency_fill_test(28, 2); // bits 0/1 alternados

        // Fecha eventuais transacoes ainda pendentes antes do relatorio.
        apply_gap();
        repeat (LATENCY) @(negedge clk);

        // Cobertura de indexacao e requisitos funcionais obrigatorios.
        index_cov_count=0;
        for (i=0; i<N_INPUTS; i=i+1) if (cov_index_positions[i]) index_cov_count=index_cov_count+1;

        coverage_fail=0;
        if (!cov_reset_initial) coverage_fail=coverage_fail+1;
        if (!cov_reset_activity) coverage_fail=coverage_fail+1;
        if (!cov_valid_0 || !cov_valid_1) coverage_fail=coverage_fail+1;
        if (!cov_pipe_isolated || !cov_pipe_back2back || !cov_pipe_gaps) coverage_fail=coverage_fail+1;
        if (!cov_active_1 || !cov_active_4 || !cov_active_8 || !cov_active_12 || !cov_active_32) coverage_fail=coverage_fail+1;
        if (!cov_input_zero || !cov_input_pos || !cov_input_neg) coverage_fail=coverage_fail+1;
        if (!cov_weight_zero || !cov_weight_pos || !cov_weight_neg) coverage_fail=coverage_fail+1;
        if (!cov_result_neg || !cov_result_zero || !cov_result_pos) coverage_fail=coverage_fail+1;
        if (!cov_signed_min || !cov_signed_max) coverage_fail=coverage_fail+1;
        if (!cov_cancel_partial || !cov_cancel_total) coverage_fail=coverage_fail+1;
        if (!cov_latency_correct) coverage_fail=coverage_fail+1;
        if (!cov_order_correct || (t21_order_checks != 256) || (t21_order_next != 256)) coverage_fail=coverage_fail+1;
        if (index_cov_count != N_INPUTS) coverage_fail=coverage_fail+1;
        if ((skipped_required==0) && (!cov_special_x || !cov_special_z || !cov_special_xz)) coverage_fail=coverage_fail+1;

        $display("");
        $display("====================================================================================================");
        $display("                                      DOTPRODUCT - RESULTADOS");
        $display("====================================================================================================");
        $display(" ID   CASO                              APLICADAS  CHECADAS  DESCART.  RESULTADO");
        $display("----------------------------------------------------------------------------------------------------");
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

        $display("====================================================================================================");
        $display(" Varreduras T02-T06 : %0d / 281600", test_sent[2]+test_sent[3]+test_sent[4]+test_sent[5]+test_sent[6]);
        $display(" Total aplicado      : %0d", total_sent);
        $display(" Total checado       : %0d", total_recv);
        $display(" Descartado por reset: %0d", total_flushed);
        $display(" Functional PASS/FAIL: %0d / %0d", total_pass, data_fail);
        $display(" Latency PASS/FAIL   : %0d / %0d", latency_pass, latency_fail);
        $display(" Valid latency       : %0d PASS / %0d FAIL", valid_latency_pass, valid_latency_fail);
        $display(" Data @ expected     : %0d PASS / %0d FAIL", data_latency_pass, data_latency_fail);
        $display(" Order T21           : %0d/256 checked, %0d PASS / %0d FAIL", t21_order_checks, order_pass, order_fail);
        $display(" Loss/Duplicate      : %0d / %0d", loss_fail, duplicate_fail);
        $display(" Early/Late          : %0d / %0d", latency_early, latency_late);
        $display(" Unknown-state FAIL  : %0d", unknown_fail);
        $display("----------------------------------------------------------------------------------------------------");
        $display(" Pipeline stages     : %0d", LATENCY);
        $display(" Expected latency    : %0d cycles (C_IN -> C_OUT)", LATENCY_CYCLES);
        if (valid_latency_samples != 0)
            $display(" Valid latency obs.  : min=%0d max=%0d avg=%0d samples=%0d",
                     valid_latency_min, valid_latency_max, valid_latency_sum/valid_latency_samples,
                     valid_latency_samples);
        if (data_latency_samples != 0)
            $display(" Data aligned obs.   : min=%0d max=%0d avg=%0d samples=%0d",
                     data_latency_min, data_latency_max, data_latency_sum/data_latency_samples,
                     data_latency_samples);
        $display(" T23 first appearance: L_DATA=%0d L_VALID=%0d", normal_data_latency, normal_valid_latency);
        $display(" T25 first appearance: L_DATA=%0d L_VALID=%0d", postreset_data_latency, postreset_valid_latency);
        $display(" Assertions          : %0d PASS / %0d FAIL", assertions_pass, assertions_fail);
        $display("----------------------------------------------------------------------------------------------------");
        $display(" Seeds T02: %08x %08x %08x %08x", round_seed_log[2][0],round_seed_log[2][1],round_seed_log[2][2],round_seed_log[2][3]);
        $display(" Seeds T03: %08x %08x %08x %08x", round_seed_log[3][0],round_seed_log[3][1],round_seed_log[3][2],round_seed_log[3][3]);
        $display(" Seeds T04: %08x %08x %08x %08x", round_seed_log[4][0],round_seed_log[4][1],round_seed_log[4][2],round_seed_log[4][3]);
        $display(" Seeds T05: %08x %08x %08x %08x", round_seed_log[5][0],round_seed_log[5][1],round_seed_log[5][2],round_seed_log[5][3]);
        $display(" Seeds T06: %08x %08x %08x %08x", round_seed_log[6][0],round_seed_log[6][1],round_seed_log[6][2],round_seed_log[6][3]);
        $display("----------------------------------------------------------------------------------------------------");
        $display(" Coverage reset      : initial=%0d activity=%0d", cov_reset_initial, cov_reset_activity);
        $display(" Coverage valid      : 0=%0d 1=%0d", cov_valid_0, cov_valid_1);
        $display(" Coverage pipeline   : isolated=%0d back2back=%0d gaps=%0d", cov_pipe_isolated, cov_pipe_back2back, cov_pipe_gaps);
        $display(" Coverage active     : 1=%0d 4=%0d 8=%0d 12=%0d 32=%0d", cov_active_1,cov_active_4,cov_active_8,cov_active_12,cov_active_32);
        $display(" Coverage signed     : min=%0d max=%0d", cov_signed_min, cov_signed_max);
        $display(" Coverage X/Z/XZ     : X=%0d Z=%0d XZ=%0d", cov_special_x, cov_special_z, cov_special_xz);
        $display(" Coverage indexacao  : %0d/%0d posicoes", index_cov_count, N_INPUTS);
        $display(" Coverage latency    : correct=%0d early=%0d late=%0d", cov_latency_correct,cov_latency_early,cov_latency_late);
        $display(" Coverage order      : correct=%0d incorrect=%0d", cov_order_correct,cov_order_incorrect);
        $display(" Coverage FAIL bins  : %0d", coverage_fail);
        $display("====================================================================================================");

        if (skipped_required != 0) begin
            $display(" RESULTADO FINAL      : INCOMPLETE (%0d testes obrigatorios foram SKIP)", skipped_required);
            $fatal(1,"REGRESSAO DOTPRODUCT INCOMPLETA");
        end else if ((total_fail!=0) ||
                     (test_sent[2]+test_sent[3]+test_sent[4]+test_sent[5]+test_sent[6] != 281600) ||
                     (total_sent!=(total_recv+total_flushed)) ||
                     (assertions_fail!=0) || (coverage_fail!=0) ||
                     (order_fail!=0) || (loss_fail!=0) || (duplicate_fail!=0)) begin
            $display(" RESULTADO FINAL      : FAIL");
            $fatal(1,"REGRESSAO DOTPRODUCT FALHOU");
        end else begin
            $display(" RESULTADO FINAL      : PASS");
            $display("====================================================================================================");
            $finish(0);
        end
    end
endmodule
