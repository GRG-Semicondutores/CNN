class dot_expected extends uvm_object;
    logic signed [ACC_WIDTH-1:0] value;
    logic [VECTOR_BITS-1:0] input_flat;
    logic [VECTOR_BITS-1:0] weight_flat;
    int test_id;
    int tx_id;
    int round_id;
    int seed;
    int input_cycle;
    int expected_cycle;

    `uvm_object_utils(dot_expected)

    function new(string name="dot_expected");
        super.new(name);
    endfunction
endclass

class dot_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(dot_scoreboard)

    // Segue o modelo-base: o scoreboard recebe exclusivamente o analysis_port
    // do monitor e concentra checagem, cobertura e relatorio final.
    uvm_analysis_imp #(dot_seq_item, dot_scoreboard) imp;
    dot_expected exp_q[$];

    int test_sent[0:N_TESTS-1];
    int test_pass[0:N_TESTS-1];
    int test_fail[0:N_TESTS-1];
    int test_skip[0:N_TESTS-1];
    int test_flushed[0:N_TESTS-1];
    int round_seed_log[0:N_TESTS-1][0:3];
    int round_sent[0:N_TESTS-1][0:3];
    int completeness_fail;

    int total_sent, total_recv, total_pass, total_flushed;
    int data_fail, valid_fail, latency_fail, latency_pass, unknown_fail;
    int valid_latency_pass, valid_latency_fail;
    int order_pass, order_fail, order_checks;
    int loss_fail, duplicate_fail;
    int latency_early, latency_late, pending_missing_valid;
    int assertions_pass, assertions_fail;
    int skipped_required;

    // T21 e observado independentemente da checagem temporal principal,
    // reproduzindo a verificacao de ordem da bancada funcional.
    int t21_order_next;
    logic signed [ACC_WIDTH-1:0] t21_expected_order_value;

    int valid_lat_min, valid_lat_max, valid_lat_sum, valid_lat_samples;
    int data_lat_min, data_lat_max, data_lat_sum, data_lat_samples;
    int data_latency_pass, data_latency_fail;
    bit regression_fail;
    int normal_data_latency, normal_valid_latency;
    int postreset_data_latency, postreset_valid_latency;

    bit measure23_active, measure25_active;
    logic signed [ACC_WIDTH-1:0] measure23_expected, measure25_expected;
    int measure23_input_cycle, measure23_data_cycle, measure23_valid_cycle;
    int measure25_input_cycle, measure25_data_cycle, measure25_valid_cycle;

    // Cobertura funcional manual incorporada ao scoreboard para manter a mesma
    // divisao estrutural do ambiente-base, sem componente UVM_coverage separado.
    int cov_reset_initial, cov_reset_activity;
    int cov_valid_0, cov_valid_1;
    int cov_pipe_isolated, cov_pipe_back2back, cov_pipe_gaps;
    int cov_active_1, cov_active_4, cov_active_8, cov_active_12, cov_active_32;
    int cov_input_zero, cov_input_pos, cov_input_neg;
    int cov_weight_zero, cov_weight_pos, cov_weight_neg;
    int cov_result_neg, cov_result_zero, cov_result_pos;
    int cov_signed_min, cov_signed_max;
    int cov_special_x, cov_special_z, cov_special_xz;
    int cov_cancel_partial, cov_cancel_total;
    int cov_valid_latency_correct, cov_valid_latency_early, cov_valid_latency_late;
    int cov_order_correct, cov_order_incorrect;
    int cov_data_before_valid;
    logic [N_INPUTS-1:0] cov_index_positions;
    int index_count;
    int coverage_fail;
    bit xz_skipped;

    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
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

    function logic signed [ACC_WIDTH-1:0] reference_dot(
        logic [VECTOR_BITS-1:0] iv,
        logic [VECTOR_BITS-1:0] wv
    );
        logic signed [DATA_WIDTH-1:0] a, b;
        logic signed [2*DATA_WIDTH-1:0] product;
        logic signed [ACC_WIDTH-1:0] sum;
        int k;

        sum = '0;
        for (k=0; k<N_INPUTS; k++) begin
            a = iv[k*DATA_WIDTH +: DATA_WIDTH];
            b = wv[k*DATA_WIDTH +: DATA_WIDTH];
            product = a*b;
            sum = sum + product;
        end
        return sum;
    endfunction

    function bit flat_is_zero(logic [VECTOR_BITS-1:0] v);
        return (v === {VECTOR_BITS{1'b0}});
    endfunction

    function void record_valid_latency(int lat);
        if (valid_lat_samples == 0) begin
            valid_lat_min = lat;
            valid_lat_max = lat;
        end
        else begin
            if (lat < valid_lat_min) valid_lat_min = lat;
            if (lat > valid_lat_max) valid_lat_max = lat;
        end

        valid_lat_sum += lat;
        valid_lat_samples++;
    endfunction

    function void build_phase(uvm_phase phase);
        int i, r;

        super.build_phase(phase);

        total_sent=0; total_recv=0; total_pass=0; total_flushed=0;
        data_fail=0; valid_fail=0; latency_fail=0; latency_pass=0; unknown_fail=0;
        valid_latency_pass=0; valid_latency_fail=0;
        order_pass=0; order_fail=0; order_checks=0;
        loss_fail=0; duplicate_fail=0;
        latency_early=0; latency_late=0; pending_missing_valid=0;
        assertions_pass=0; assertions_fail=0; skipped_required=0; completeness_fail=0;
        t21_order_next=0; t21_expected_order_value='0;

        valid_lat_min=0; valid_lat_max=0; valid_lat_sum=0; valid_lat_samples=0;
        data_lat_min=0; data_lat_max=0; data_lat_sum=0; data_lat_samples=0;
        data_latency_pass=0; data_latency_fail=0; regression_fail=0;
        normal_data_latency=-1; normal_valid_latency=-1;
        postreset_data_latency=-1; postreset_valid_latency=-1;

        measure23_active=0; measure25_active=0;
        measure23_input_cycle=-1; measure23_data_cycle=-1; measure23_valid_cycle=-1;
        measure25_input_cycle=-1; measure25_data_cycle=-1; measure25_valid_cycle=-1;

        cov_reset_initial=0; cov_reset_activity=0;
        cov_valid_0=0; cov_valid_1=0;
        cov_pipe_isolated=0; cov_pipe_back2back=0; cov_pipe_gaps=0;
        cov_active_1=0; cov_active_4=0; cov_active_8=0; cov_active_12=0; cov_active_32=0;
        cov_input_zero=0; cov_input_pos=0; cov_input_neg=0;
        cov_weight_zero=0; cov_weight_pos=0; cov_weight_neg=0;
        cov_result_neg=0; cov_result_zero=0; cov_result_pos=0;
        cov_signed_min=0; cov_signed_max=0;
        cov_special_x=0; cov_special_z=0; cov_special_xz=0;
        cov_cancel_partial=0; cov_cancel_total=0;
        cov_valid_latency_correct=0; cov_valid_latency_early=0; cov_valid_latency_late=0;
        cov_order_correct=0; cov_order_incorrect=0;
        cov_data_before_valid=0;
        cov_index_positions='0;
        index_count=0; coverage_fail=0; xz_skipped=0;

        for (i=0; i<N_TESTS; i++) begin
            test_sent[i]=0;
            test_pass[i]=0;
            test_fail[i]=0;
            test_skip[i]=0;
            test_flushed[i]=0;
            for (r=0; r<4; r++) begin
                round_seed_log[i][r]=0; round_sent[i][r]=0;
            end
        end


    endfunction

    function void flush_expected();
        dot_expected e;

        while (exp_q.size() != 0) begin
            e = exp_q.pop_front();
            total_flushed++;
            if ((e.test_id >= 0) && (e.test_id < N_TESTS))
                test_flushed[e.test_id]++;
        end
    endfunction

    function void begin_measurement_if_needed(dot_expected e);
        if (e.test_id == 23) begin
            measure23_active      = 1;
            measure23_expected    = e.value;
            measure23_input_cycle = e.input_cycle;
            measure23_data_cycle  = -1;
            measure23_valid_cycle = -1;
        end

        if (e.test_id == 25) begin
            measure25_active      = 1;
            measure25_expected    = e.value;
            measure25_input_cycle = e.input_cycle;
            measure25_data_cycle  = -1;
            measure25_valid_cycle = -1;
        end
    endfunction

    function void update_measurements(dot_seq_item tr);
        if (measure23_active) begin
            if ((measure23_data_cycle < 0) && (tr.out === measure23_expected))
                measure23_data_cycle = tr.cycle;
            if ((measure23_valid_cycle < 0) && (tr.valid_out === 1'b1))
                measure23_valid_cycle = tr.cycle;
        end

        if (measure25_active) begin
            if ((measure25_data_cycle < 0) && (tr.out === measure25_expected))
                measure25_data_cycle = tr.cycle;
            if ((measure25_valid_cycle < 0) && (tr.valid_out === 1'b1))
                measure25_valid_cycle = tr.cycle;
        end
    endfunction

    // Fecha a janela ao sair do teste, mesmo quando valid_out nunca apareceu.
    // Finalizar apenas quando a transacao era recebida ocultava medicoes ausentes.
    function void finalize_measurement(int id);
        int data_lat, valid_lat;
        bit complete_measurement;
        if ((id == 23) && measure23_active) begin
            complete_measurement = (measure23_input_cycle >= 0) &&
                (measure23_data_cycle >= 0) && (measure23_valid_cycle >= 0);
            data_lat = complete_measurement ? measure23_data_cycle - measure23_input_cycle : -1;
            valid_lat = complete_measurement ? measure23_valid_cycle - measure23_input_cycle : -1;
            normal_data_latency = data_lat;
            normal_valid_latency = valid_lat;
            `uvm_info("DOT_SCB", $sformatf("[LATENCY][T23] input=%0d data=%0d valid=%0d L_DATA=%0d L_VALID=%0d esperado=%0d",
                measure23_input_cycle, measure23_data_cycle, measure23_valid_cycle,
                data_lat, valid_lat, VALID_LATENCY_CYCLES), UVM_LOW)
            if (!complete_measurement || (data_lat != VALID_LATENCY_CYCLES) ||
                (valid_lat != VALID_LATENCY_CYCLES)) begin
                latency_fail++;
                test_fail[23]++;
                if (complete_measurement) begin
                    if (data_lat < VALID_LATENCY_CYCLES) begin
                        latency_early++; cov_valid_latency_early=1;
                    end
                    if (valid_lat < VALID_LATENCY_CYCLES) begin
                        latency_early++; cov_valid_latency_early=1;
                    end
                    if (data_lat > VALID_LATENCY_CYCLES) begin
                        latency_late++; cov_valid_latency_late=1;
                    end
                    if (valid_lat > VALID_LATENCY_CYCLES) begin
                        latency_late++; cov_valid_latency_late=1;
                    end
                end
                `uvm_error("DOT_SCB", $sformatf("[LATENCY_ERROR][T23] L_DATA=%0d L_VALID=%0d esperado=%0d; medicao completa=%0b",
                    data_lat, valid_lat, VALID_LATENCY_CYCLES, complete_measurement))
            end
            if (complete_measurement && (data_lat < valid_lat)) cov_data_before_valid=1;
            measure23_active=0;
        end
        if ((id == 25) && measure25_active) begin
            complete_measurement = (measure25_input_cycle >= 0) &&
                (measure25_data_cycle >= 0) && (measure25_valid_cycle >= 0);
            postreset_data_latency = complete_measurement ? measure25_data_cycle - measure25_input_cycle : -1;
            postreset_valid_latency = complete_measurement ? measure25_valid_cycle - measure25_input_cycle : -1;
            `uvm_info("DOT_SCB", $sformatf("[LATENCY][T25] L_DATA=%0d L_VALID=%0d; normal T23=(%0d,%0d)",
                postreset_data_latency, postreset_valid_latency,
                normal_data_latency, normal_valid_latency), UVM_LOW)
            // Como no original, T25 compara com T23; nao duplica sua falha de alinhamento.
            if (!complete_measurement || (normal_data_latency < 0) || (normal_valid_latency < 0) ||
                (postreset_data_latency != normal_data_latency) ||
                (postreset_valid_latency != normal_valid_latency)) begin
                latency_fail++;
                test_fail[25]++;
                `uvm_error("DOT_SCB", "[LATENCY_ERROR][T25] medicao ausente ou latencia pos-reset difere de T23")
            end
            measure25_active=0;
        end
    endfunction

    function void record_data_latency(int lat);
        if (data_lat_samples == 0) begin
            data_lat_min=lat; data_lat_max=lat;
        end else begin
            if (lat < data_lat_min) data_lat_min=lat;
            if (lat > data_lat_max) data_lat_max=lat;
        end
        data_lat_sum += lat;
        data_lat_samples++;
    endfunction

    function string transaction_context(dot_expected e, dot_seq_item tr);
        return $sformatf("T%02d TX%0d round=%0d seed=0x%08x input_cycle=%0d expected_cycle=%0d observed_cycle=%0d valid_in=%b valid_out=%b expected=%0h out=%0h input_vec=0x%0h weight=0x%0h",
            e.test_id, e.tx_id, e.round_id, e.seed, e.input_cycle,
            e.expected_cycle, tr.cycle, tr.valid_in, tr.valid_out,
            e.value, tr.out, e.input_flat, e.weight_flat);
    endfunction

    function void update_coverage(dot_seq_item tr);
        int k;
        bit in_zero, w_zero;
        logic signed [DATA_WIDTH-1:0] a, b;
        logic signed [ACC_WIDTH-1:0] result;

        if (tr.rst) begin
            if (tr.test_id == 0) cov_reset_initial = 1;
            if (tr.test_id == 1) cov_reset_activity = 1;
        end

        if (tr.valid_in === 1'b0) cov_valid_0 = 1;
        if (tr.valid_in === 1'b1) cov_valid_1 = 1;

        if (tr.rst || (tr.valid_in !== 1'b1))
            return;

        in_zero = 1;
        w_zero  = 1;

        for (k=0; k<N_INPUTS; k++) begin
            a = tr.input_flat[k*DATA_WIDTH +: DATA_WIDTH];
            b = tr.weight_flat[k*DATA_WIDTH +: DATA_WIDTH];

            if ($isunknown(a)) begin
                in_zero = 0;
            end
            else begin
                if (a != 0) in_zero = 0;
                if ($signed(a) > 0) cov_input_pos = 1;
                if ($signed(a) < 0) cov_input_neg = 1;
                if ($signed(a) == -(1 << (DATA_WIDTH-1))) cov_signed_min = 1;
                if ($signed(a) ==  ((1 << (DATA_WIDTH-1))-1)) cov_signed_max = 1;
                if ((tr.test_id == 15) && (a != 0)) cov_index_positions[k] = 1'b1;
            end

            if ($isunknown(b)) begin
                w_zero = 0;
            end
            else begin
                if (b != 0) w_zero = 0;
                if ($signed(b) > 0) cov_weight_pos = 1;
                if ($signed(b) < 0) cov_weight_neg = 1;
                if ($signed(b) == -(1 << (DATA_WIDTH-1))) cov_signed_min = 1;
                if ($signed(b) ==  ((1 << (DATA_WIDTH-1))-1)) cov_signed_max = 1;
            end
        end

        if (in_zero) cov_input_zero = 1;
        if (w_zero)  cov_weight_zero = 1;

        case (tr.test_id)
             2,14,15,16,21,23,25: cov_active_1  = 1;
             3,5,20:               cov_active_4  = 1;
             4:                    cov_active_8  = 1;
             6:                    cov_active_12 = 1;
            17,18,19,27,28:        cov_active_32 = 1;
            default: ;
        endcase

        case (tr.test_id)
             7: cov_special_x  = 1;
             8,9: cov_special_z = 1;
            10,11: cov_special_xz = 1;
            19: cov_cancel_partial = 1;
            20: cov_cancel_total   = 1;
            21: cov_pipe_back2back = 1;
            22: cov_pipe_gaps      = 1;
            23: cov_pipe_isolated  = 1;
            default: ;
        endcase

        result = reference_dot(tr.input_flat, tr.weight_flat);
        if (!$isunknown(result)) begin
            if ($signed(result) < 0) cov_result_neg = 1;
            else if ($signed(result) > 0) cov_result_pos = 1;
            else cov_result_zero = 1;
        end
    endfunction

    virtual function void write(dot_seq_item tr);
        dot_expected e;
        int lat;
        int future_idx;
        int match_idx;
        bit due;
        bit data_ok;
        bit expected_unknown;

        // A cobertura recebe exatamente a mesma amostra que alimenta a checagem.
        update_coverage(tr);

        for (int id=0; id<N_TESTS; id++) begin
            if (tr.skipped_tests[id] && !test_skip[id]) begin
                test_skip[id]=1;
                skipped_required++;
                if ((id >= 7) && (id <= 11)) xz_skipped=1;
            end
        end
        if (tr.test_id != 23) finalize_measurement(23);
        if (tr.test_id != 25) finalize_measurement(25);

        if (tr.rst) begin
            flush_expected();
            pending_missing_valid = 0;
            update_measurements(tr);

            // Na bancada funcional a assertion temporal tambem e avaliada
            // durante reset, quando a referencia de valid e zerada.
            if (tr.valid_out === 1'b0) assertions_pass++;
            else begin
                assertions_fail++; valid_fail++; valid_latency_fail++; latency_fail++;
                test_fail[tr.test_id]++;
                `uvm_error("DOT_SCB", $sformatf("[VALID_ERROR][RESET] T%02d ciclo=%0d valid_out=%b", tr.test_id, tr.cycle, tr.valid_out))
            end
            return;
        end

        // Captura uma nova transacao valida e calcula a referencia funcional.
        if (tr.valid_in === 1'b1) begin
            e = dot_expected::type_id::create(
                $sformatf("exp_T%02d_TX%0d", tr.test_id, tr.tx_id));

            e.value          = reference_dot(tr.input_flat, tr.weight_flat);
            e.input_flat     = tr.input_flat;
            e.weight_flat    = tr.weight_flat;
            e.test_id        = tr.test_id;
            e.tx_id          = tr.tx_id;
            e.round_id       = tr.round_id;
            e.seed           = tr.seed;
            e.input_cycle    = tr.cycle;
            e.expected_cycle = tr.cycle + VALID_LATENCY_CYCLES;

            exp_q.push_back(e);
            total_sent++;

            if ((e.test_id >= 0) && (e.test_id < N_TESTS))
                test_sent[e.test_id]++;

            if ((e.round_id >= 0) && (e.round_id < 4) &&
                (round_seed_log[e.test_id][e.round_id] == 0))
                round_seed_log[e.test_id][e.round_id] = e.seed;

            if ((e.round_id >= 0) && (e.round_id < 4)) round_sent[e.test_id][e.round_id]++;
            begin_measurement_if_needed(e);
        end

        update_measurements(tr);

        // T21: checa a ordem diretamente na sequencia observada de valid_out,
        // independentemente de a transacao estar ou nao no ciclo temporal esperado.
        if ((tr.test_id == 21) && (tr.valid_out === 1'b1) && (t21_order_next < 256)) begin
            if (t21_order_next < 128)
                t21_expected_order_value = t21_order_next;
            else
                t21_expected_order_value = t21_order_next - 256;

            order_checks++;
            if (tr.out === t21_expected_order_value) begin
                order_pass++;
                cov_order_correct = 1;
            end
            else begin
                order_fail++;
                cov_order_incorrect = 1;
                test_fail[21]++;
                `uvm_error("DOT_SCB",
                    $sformatf("[ORDER_ERROR][T21] posicao=%0d esperado=%0d obtido=%0d ciclo=%0d",
                              t21_order_next, t21_expected_order_value, tr.out, tr.cycle))
            end
            t21_order_next++;
        end

        due = (exp_q.size() != 0) && (exp_q[0].expected_cycle == tr.cycle);

        // Assertion procedural equivalente a valid_in atrasado pela latencia nominal.
        if (tr.valid_out === due) assertions_pass++;
        else assertions_fail++;

        if (due) begin
            e = exp_q.pop_front();

            expected_unknown = $isunknown(e.value);
            // A bancada funcional usa case equality inclusive nos casos X/Z.
            // Portanto a correspondencia 4-state deve ser exata, nao apenas
            // "qualquer estado desconhecido".
            data_ok = (tr.out === e.value);

            if (data_ok) begin
                record_data_latency(tr.cycle - e.input_cycle);
                data_latency_pass++;
                if (tr.valid_out === 1'b1) begin
                    total_pass++;
                    test_pass[e.test_id]++;
                    latency_pass++;
                    cov_valid_latency_correct=1;
                end
            end
            else begin
                data_fail++;
                data_latency_fail++;
                test_fail[e.test_id]++;
                if (expected_unknown) unknown_fail++;

                `uvm_error("DOT_SCB", {expected_unknown ? "[UNKNOWN_ERROR][DATA_ERROR] " : "[DATA_ERROR] ", transaction_context(e,tr)})
                for (future_idx=0; future_idx<exp_q.size(); future_idx++) begin
                    if (tr.out === exp_q[future_idx].value) begin
                        `uvm_info("DOT_SCB", $sformatf("[DATA_LATENCY_ERROR] out corresponde a TX%0d futura, esperada no ciclo=%0d",
                            exp_q[future_idx].tx_id, exp_q[future_idx].expected_cycle), UVM_NONE)
                        break;
                    end
                end
            end

            // Assertions dirigidas para entradas/pesos totalmente zerados.
            if (flat_is_zero(e.input_flat) && !$isunknown(e.weight_flat)) begin
                if (tr.out === '0) assertions_pass++;
                else assertions_fail++;
            end

            if (flat_is_zero(e.weight_flat) && !$isunknown(e.input_flat)) begin
                if (tr.out === '0) assertions_pass++;
                else assertions_fail++;
            end


            if (tr.valid_out !== 1'b1) begin
                valid_fail++;
                valid_latency_fail++;
                latency_fail++;
                latency_late++;
                pending_missing_valid++;
                loss_fail++;
                cov_valid_latency_late = 1;
                test_fail[e.test_id]++;

                `uvm_error("DOT_SCB", {"[VALID_ERROR] ", transaction_context(e,tr)})
                return;
            end

            total_recv++;
            lat = tr.cycle - e.input_cycle;
            record_valid_latency(lat);

            if (lat == VALID_LATENCY_CYCLES) begin
                valid_latency_pass++;
            end
            else begin
                valid_latency_fail++;
                latency_fail++;
                test_fail[e.test_id]++;
                if (lat < VALID_LATENCY_CYCLES) begin
                    latency_early++;
                    cov_valid_latency_early = 1;
                end
                else begin
                    latency_late++;
                    cov_valid_latency_late = 1;
                end

                `uvm_error("DOT_SCB",
                    $sformatf("[LATENCY_ERROR][T%02d][TX%0d] lat=%0d esperado=%0d",
                              e.test_id, e.tx_id, lat, VALID_LATENCY_CYCLES))
            end


        end
        else if (tr.valid_out === 1'b1) begin
            valid_fail++;
            valid_latency_fail++;
            latency_fail++;
            match_idx = -1;

            // Procura uma transacao futura cujo dado ja esteja aparecendo agora:
            // isso caracteriza valid_out antecipado, como na bancada funcional.
            for (future_idx=0; future_idx<exp_q.size(); future_idx++) begin
                if ((match_idx < 0) &&
                    (exp_q[future_idx].expected_cycle > tr.cycle) &&
                    (tr.out === exp_q[future_idx].value))
                    match_idx = future_idx;
            end

            if (match_idx >= 0) begin
                latency_early++;
                cov_valid_latency_early = 1;
                test_fail[exp_q[match_idx].test_id]++;
                `uvm_error("DOT_SCB",
                    $sformatf("[LATENCY_ERROR][EARLY][T%02d][TX%0d] ciclo=%0d esperado=%0d",
                              exp_q[match_idx].test_id, exp_q[match_idx].tx_id,
                              tr.cycle, exp_q[match_idx].expected_cycle))
            end
            else if (pending_missing_valid > 0) begin
                pending_missing_valid--;
                if (loss_fail > 0) loss_fail--;
                latency_late++;
                cov_valid_latency_late = 1;
                `uvm_error("DOT_SCB",
                    $sformatf("[LATENCY_ERROR][LATE] valid_out atrasado no ciclo=%0d", tr.cycle))
            end
            else begin
                duplicate_fail++;
                `uvm_error("DOT_SCB",
                    $sformatf("[VALID_ERROR][DUPLICATE] valid_out sem transacao prevista no ciclo=%0d out=%0h",
                              tr.cycle, tr.out))
            end
        end
        else if (tr.valid_out !== 1'b0) begin
            valid_fail++; valid_latency_fail++; latency_fail++;
            test_fail[tr.test_id]++;
            `uvm_error("DOT_SCB", $sformatf("[VALID_ERROR] T%02d ciclo=%0d valid_out desconhecido=%b", tr.test_id, tr.cycle, tr.valid_out))
        end
    endfunction

    function int expected_count(int id);
        case (id)
            0,7,8,17,18,20,23,25: return 1;
            1,24: return 5;
            2,3,4: return 1024;
            5: return 16384;
            6: return 262144;
            9,16: return 4;
            10,11,19: return 2;
            12,13,15: return 32;
            14,21: return 256;
            22: return -1; // Pseudorrandomico: 256 ciclos, incluindo pelo menos um gap.
            26,27,28: return PIPELINE_OCCUPATIONS*PIPELINE_OCCUPATIONS;
            default: return 0;
        endcase
    endfunction

    function void check_phase(uvm_phase phase);
        int sweep_total;
        int k, r, expected;

        super.check_phase(phase);
        finalize_measurement(23);
        finalize_measurement(25);
        if (measure23_input_cycle < 0) begin
            latency_fail++; test_fail[23]++;
            `uvm_error("DOT_SCB", "[LATENCY_ERROR][T23] impulso nao observado")
        end
        if (measure25_input_cycle < 0) begin
            latency_fail++; test_fail[25]++;
            `uvm_error("DOT_SCB", "[LATENCY_ERROR][T25] impulso nao observado")
        end

        for (k=0; k<N_TESTS; k++) begin
            expected = test_skip[k] ? 0 : expected_count(k);
            if (((expected >= 0) && (test_sent[k] != expected)) ||
                ((k == 22) && ((test_sent[k] < 1) || (test_sent[k] > 255)))) begin
                completeness_fail++; test_fail[k]++;
                `uvm_error("DOT_SCB", $sformatf("[COUNT_ERROR] T%02d aplicadas=%0d esperado=%0d", k,test_sent[k],expected))
            end
            if ((k >= 2) && (k <= 6)) begin
                for (r=0; r<4; r++) begin
                    if ((round_sent[k][r] != expected_count(k)/4) ||
                        (round_seed_log[k][r] != (SEED_BASE ^ (k * 32'h0001_0101) ^ (r * 32'h0100_0193)))) begin
                        completeness_fail++; test_fail[k]++;
                        `uvm_error("DOT_SCB", $sformatf("[ROUND_ERROR] T%02d rodada=%0d aplicadas=%0d seed=0x%08x", k,r,round_sent[k][r],round_seed_log[k][r]))
                    end
                end
            end
        end
        if (exp_q.size() != 0) begin
            completeness_fail++;
            `uvm_error("DOT_SCB", $sformatf("[LOSS_ERROR] pipeline nao drenado: %0d transacoes",exp_q.size()))
        end

        sweep_total = test_sent[2] + test_sent[3] + test_sent[4] +
                      test_sent[5] + test_sent[6];

        index_count = 0;
        for (k=0; k<N_INPUTS; k++)
            if (cov_index_positions[k]) index_count++;

        coverage_fail = 0;
        if (!cov_reset_initial) coverage_fail++;
        if (!cov_reset_activity) coverage_fail++;
        if (!cov_valid_0 || !cov_valid_1) coverage_fail++;
        if (!cov_pipe_isolated || !cov_pipe_back2back || !cov_pipe_gaps) coverage_fail++;
        if (!cov_active_1 || !cov_active_4 || !cov_active_8 || !cov_active_12 || !cov_active_32) coverage_fail++;
        if (!cov_input_zero || !cov_input_pos || !cov_input_neg) coverage_fail++;
        if (!cov_weight_zero || !cov_weight_pos || !cov_weight_neg) coverage_fail++;
        if (!cov_result_neg || !cov_result_zero || !cov_result_pos) coverage_fail++;
        if (!cov_signed_min || !cov_signed_max) coverage_fail++;
        if (!cov_cancel_partial || !cov_cancel_total) coverage_fail++;
        if (!cov_valid_latency_correct) coverage_fail++;
        if (!cov_order_correct || (order_checks != 256) || (t21_order_next != 256)) coverage_fail++;
        if (index_count != N_INPUTS) coverage_fail++;
        if (!xz_skipped && (!cov_special_x || !cov_special_z || !cov_special_xz)) coverage_fail++;

        if (sweep_total != 281600)
            `uvm_error("DOT_SCB",
                $sformatf("Varreduras T02-T06=%0d, esperado=281600", sweep_total))

        if (total_sent != (total_recv + total_flushed))
            `uvm_error("DOT_SCB",
                $sformatf("Contagem inconsistente sent=%0d recv=%0d flushed=%0d",
                          total_sent, total_recv, total_flushed))

        if ((order_checks != 256) || (t21_order_next != 256))
            `uvm_error("DOT_SCB",
                $sformatf("T21 order checks=%0d next=%0d esperado=256/256",
                          order_checks, t21_order_next))

        if ((normal_valid_latency >= 0) &&
            (normal_valid_latency != VALID_LATENCY_CYCLES))
            `uvm_error("DOT_SCB", "T23 valid latency fora da especificacao")

        if (assertions_fail != 0)
            `uvm_error("DOT_SCB",
                $sformatf("Assertions procedurais falharam: %0d", assertions_fail))

        if (coverage_fail != 0)
            `uvm_error("DOT_SCB",
                $sformatf("Cobertura funcional obrigatoria incompleta: %0d grupos", coverage_fail))
        regression_fail =
            (completeness_fail != 0) ||
            (data_fail != 0) ||
            (valid_fail != 0) ||
            (latency_fail != 0) ||
            (order_fail != 0) ||
            (loss_fail != 0) ||
            (duplicate_fail != 0) ||
            (assertions_fail != 0) ||
            (coverage_fail != 0) ||
            (sweep_total != 281600) ||
            (total_sent != (total_recv + total_flushed)) ||
            (order_checks != 256) ||
            (t21_order_next != 256) || (exp_q.size() != 0);
        for (k=0; k<N_TESTS; k++)
            if (test_fail[k] != 0) regression_fail=1;

    endfunction

    int report_fd;
    function void report_line(string line);
        $display("%s",line);
        if (report_fd) $fdisplay(report_fd,"%s",line);
    endfunction

    function void report_phase(uvm_phase phase);
        int i;
        string report_path;
        super.report_phase(phase);
        report_fd=0;
        if ($value$plusargs("DOT_REPORT_FILE=%s",report_path)) begin
            report_fd=$fopen(report_path,"w");
            if (!report_fd) `uvm_error("DOT_SCB", {"Nao foi possivel gravar relatorio: ",report_path})
        end
        report_line($sformatf(""));
        report_line($sformatf("===================================================================================================="));
        report_line($sformatf("                                      DOTPRODUCT - RESULTADOS"));
        report_line($sformatf("===================================================================================================="));
        report_line($sformatf(" ID   CASO                              APLICADAS  CHECADAS  DESCART.  RESULTADO"));
        report_line($sformatf("----------------------------------------------------------------------------------------------------"));
        for (i=0; i<N_TESTS; i=i+1) begin
            if (test_skip[i])
                report_line($sformatf(" T%02d  %-32s %9d %9d %9d  SKIP",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i]));
            else if (test_fail[i] != 0)
                report_line($sformatf(" T%02d  %-32s %9d %9d %9d  FAIL (%0d)",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i], test_fail[i]));
            else
                report_line($sformatf(" T%02d  %-32s %9d %9d %9d  PASS",
                         i, test_name(i), test_sent[i], test_pass[i], test_flushed[i]));
        end

        report_line($sformatf("===================================================================================================="));
        report_line($sformatf(" Varreduras T02-T06 : %0d / 281600", test_sent[2]+test_sent[3]+test_sent[4]+test_sent[5]+test_sent[6]));
        report_line($sformatf(" Total aplicado      : %0d", total_sent));
        report_line($sformatf(" Total checado       : %0d", total_recv));
        report_line($sformatf(" Descartado por reset: %0d", total_flushed));
        report_line($sformatf(" Functional PASS/FAIL: %0d / %0d", total_pass, data_fail));
        report_line($sformatf(" Latency PASS/FAIL   : %0d / %0d", latency_pass, latency_fail));
        report_line($sformatf(" Valid latency       : %0d PASS / %0d FAIL", valid_latency_pass, valid_latency_fail));
        report_line($sformatf(" Data @ expected     : %0d PASS / %0d FAIL", data_latency_pass, data_latency_fail));
        report_line($sformatf(" Order T21           : %0d/256 checked, %0d PASS / %0d FAIL", order_checks, order_pass, order_fail));
        report_line($sformatf(" Loss/Duplicate      : %0d / %0d", loss_fail, duplicate_fail));
        report_line($sformatf(" Early/Late          : %0d / %0d", latency_early, latency_late));
        report_line($sformatf(" Unknown-state FAIL  : %0d", unknown_fail));
        report_line($sformatf("----------------------------------------------------------------------------------------------------"));
        report_line($sformatf(" Pipeline stages     : %0d", PIPELINE_OCCUPATIONS));
        report_line($sformatf(" Expected latency    : %0d cycles (C_IN -> C_OUT)", VALID_LATENCY_CYCLES));
        if (valid_lat_samples != 0)
            report_line($sformatf(" Valid latency obs.  : min=%0d max=%0d avg=%0d samples=%0d",
                     valid_lat_min, valid_lat_max, valid_lat_sum/valid_lat_samples,
                     valid_lat_samples));
        if (data_lat_samples != 0)
            report_line($sformatf(" Data aligned obs.   : min=%0d max=%0d avg=%0d samples=%0d",
                     data_lat_min, data_lat_max, data_lat_sum/data_lat_samples,
                     data_lat_samples));
        report_line($sformatf(" T23 first appearance: L_DATA=%0d L_VALID=%0d", normal_data_latency, normal_valid_latency));
        report_line($sformatf(" T25 first appearance: L_DATA=%0d L_VALID=%0d", postreset_data_latency, postreset_valid_latency));
        report_line($sformatf(" Assertions          : %0d PASS / %0d FAIL", assertions_pass, assertions_fail));
        report_line($sformatf("----------------------------------------------------------------------------------------------------"));
        report_line($sformatf(" Seeds T02: %08x %08x %08x %08x", round_seed_log[2][0],round_seed_log[2][1],round_seed_log[2][2],round_seed_log[2][3]));
        report_line($sformatf(" Seeds T03: %08x %08x %08x %08x", round_seed_log[3][0],round_seed_log[3][1],round_seed_log[3][2],round_seed_log[3][3]));
        report_line($sformatf(" Seeds T04: %08x %08x %08x %08x", round_seed_log[4][0],round_seed_log[4][1],round_seed_log[4][2],round_seed_log[4][3]));
        report_line($sformatf(" Seeds T05: %08x %08x %08x %08x", round_seed_log[5][0],round_seed_log[5][1],round_seed_log[5][2],round_seed_log[5][3]));
        report_line($sformatf(" Seeds T06: %08x %08x %08x %08x", round_seed_log[6][0],round_seed_log[6][1],round_seed_log[6][2],round_seed_log[6][3]));
        report_line($sformatf("----------------------------------------------------------------------------------------------------"));
        report_line($sformatf(" Coverage reset      : initial=%0d activity=%0d", cov_reset_initial, cov_reset_activity));
        report_line($sformatf(" Coverage valid      : 0=%0d 1=%0d", cov_valid_0, cov_valid_1));
        report_line($sformatf(" Coverage pipeline   : isolated=%0d back2back=%0d gaps=%0d", cov_pipe_isolated, cov_pipe_back2back, cov_pipe_gaps));
        report_line($sformatf(" Coverage active     : 1=%0d 4=%0d 8=%0d 12=%0d 32=%0d", cov_active_1,cov_active_4,cov_active_8,cov_active_12,cov_active_32));
        report_line($sformatf(" Coverage signed     : min=%0d max=%0d", cov_signed_min, cov_signed_max));
        report_line($sformatf(" Coverage X/Z/XZ     : X=%0d Z=%0d XZ=%0d", cov_special_x, cov_special_z, cov_special_xz));
        report_line($sformatf(" Coverage indexacao  : %0d/%0d posicoes", index_count, N_INPUTS));
        report_line($sformatf(" Coverage latency    : correct=%0d early=%0d late=%0d", cov_valid_latency_correct,cov_valid_latency_early,cov_valid_latency_late));
        report_line($sformatf(" Coverage order      : correct=%0d incorrect=%0d", cov_order_correct,cov_order_incorrect));
        report_line($sformatf(" Coverage FAIL bins  : %0d", coverage_fail));
        report_line($sformatf("===================================================================================================="));

        if (skipped_required != 0)
            report_line($sformatf(" RESULTADO FINAL      : INCOMPLETE (%0d testes obrigatorios foram SKIP)",skipped_required));
        else if (regression_fail)
            report_line(" RESULTADO FINAL      : FAIL");
        else
            report_line(" RESULTADO FINAL      : PASS");
        if (report_fd) $fclose(report_fd);
        report_fd=0;
    endfunction

    function void final_phase(uvm_phase phase);
        int sweep_total;

        super.final_phase(phase);

        sweep_total = test_sent[2] + test_sent[3] + test_sent[4] +
                      test_sent[5] + test_sent[6];


        // Replica a politica da bancada funcional: SKIP obrigatorio tem
        // precedencia e encerra a regressao como INCOMPLETE com status fatal.
        if (skipped_required != 0) begin
            `uvm_fatal("DOT_SCB",
                $sformatf("REGRESSAO DOTPRODUCT INCOMPLETA: %0d testes obrigatorios foram SKIP",
                          skipped_required))
        end
        else if (regression_fail) begin
            `uvm_fatal("DOT_SCB", "REGRESSAO DOTPRODUCT FALHOU")
        end
    endfunction
endclass
