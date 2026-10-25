class relu_sequence extends uvm_sequence #(relu_seq_item);
    `uvm_object_utils(relu_sequence)

    int unsigned quantity_of_tests = RELU_QUANTITY_OF_TESTS;

    function new(string name = "relu_sequence");
        super.new(name);
    endfunction

    // Gera 1010... quando variant=0 e 0101... quando variant=1.
    // Como o payload possui 31 bits, bit 30 e o primeiro bit exibido.
    function automatic logic [RELU_DATA_WIDTH-2:0]
        make_alternating_01(bit variant);
        logic [RELU_DATA_WIDTH-2:0] payload;

        for (int bit_idx = 0; bit_idx < (RELU_DATA_WIDTH-1); bit_idx++) begin
            if (variant == 1'b0)
                payload[bit_idx] = (bit_idx % 2 == 0) ? 1'b1 : 1'b0;
            else
                payload[bit_idx] = (bit_idx % 2 == 0) ? 1'b0 : 1'b1;
        end

        return payload;
    endfunction

    // Gera ZXZX... quando variant=0 e XZXZ... quando variant=1.
    function automatic logic [RELU_DATA_WIDTH-2:0]
        make_alternating_xz(bit variant);
        logic [RELU_DATA_WIDTH-2:0] payload;

        for (int bit_idx = 0; bit_idx < (RELU_DATA_WIDTH-1); bit_idx++) begin
            if (variant == 1'b0)
                payload[bit_idx] = (bit_idx % 2 == 0) ? 1'bz : 1'bx;
            else
                payload[bit_idx] = (bit_idx % 2 == 0) ? 1'bx : 1'bz;
        end

        return payload;
    endfunction

    function automatic logic [RELU_DATA_WIDTH-2:0]
        make_payload(int unsigned routine_id, bit variant);
        case (routine_id)
            // 1 - Valores aleatorios nos 31 bits inferiores.
            1: make_payload = $urandom_range(0, 2147483647);

            // 2 - Todos os 31 bits inferiores em zero.
            2: make_payload = '0;

            // 3 - Replica literalmente o TB original. O literal 31'b1
            // produz ...0001 (e nao 31 bits em um).
            3: make_payload = 31'b1;

            // 4 - Polaridade fixa usada pelo TB original: 1010...0101.
            4: make_payload =
                31'b101_0101_0101_0101_0101_0101_0101_0101;

            // 5 - Todos em alta impedancia.
            5: make_payload = 'z;

            // 6 - Todos indefinidos.
            6: make_payload = 'x;

            // 7 - Polaridade fixa usada pelo TB original: ZXZ_XZXZ...
            7: make_payload =
                31'bZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ_XZXZ;

            default: make_payload = 'x;
        endcase
    endfunction

    virtual task body();
        relu_seq_item tr;
        bit variant;

        `uvm_info("RELU_SEQ",
            $sformatf(
                "Plano: %0d rotinas executaveis, %0d amostras esperadas (plano completo=%0d)",
                RELU_EXECUTED_ROUTINES, RELU_EXPECTED_SAMPLES,
                RELU_FULL_EXPECTED_SAMPLES), UVM_LOW)

        // Preserva a metodologia do TB original: para cada rotina, primeiro
        // todas as repeticoes com MSB=0 e depois todas com MSB=1.
        for (int unsigned routine_id = 1;
             routine_id <= RELU_EXECUTED_ROUTINES;
             routine_id++) begin

            `uvm_info("RELU_SEQ",
                $sformatf("Iniciando rotina %0d", routine_id), UVM_LOW)

            for (int unsigned sign = 0; sign < RELU_NUM_MSB_STATES; sign++) begin
                for (int unsigned i = 0; i < quantity_of_tests; i++) begin
                    // O TB original aplica somente uma polaridade para cada
                    // padrao alternado.
                    variant = 1'b0;

                    tr = relu_seq_item::type_id::create(
                        $sformatf("tr_r%0d_s%0d_i%0d", routine_id, sign, i));

                    start_item(tr);

                    tr.test_case_number   = routine_id;
                    tr.matrix_case_number = ((routine_id - 1) * 2) + sign + 1;
                    tr.iteration          = i;
                    tr.msb_value          = sign[0];
                    tr.pattern_variant    = variant;
                    tr.in[RELU_DATA_WIDTH-1]   = sign[0];
                    tr.in[RELU_DATA_WIDTH-2:0] = make_payload(routine_id, variant);

                    finish_item(tr);
                end
            end
        end

`ifdef VERILATOR
        `uvm_warning("RELU_SEQ",
            {"Regressao parcial 2-state: rotinas 5, 6 e 7 nao foram executadas. ",
             "O plano completo de 14000 amostras requer simulador 4-state para preservar X/Z."})
`endif
    endtask
endclass
