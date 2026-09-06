class dot_seq_item extends uvm_sequence_item;
    typedef enum int {DOT_DATA, DOT_GAP, DOT_RESET, DOT_SKIP} kind_e;

    kind_e kind;

    logic [VECTOR_BITS-1:0] input_flat;
    logic [VECTOR_BITS-1:0] weight_flat;

    int test_id;
    int round_id;
    int seed;
    int tx_id;
    int reset_cycles;

    // Em DOT_GAP indica se o item deve atualizar os vetores mesmo com
    // valid_in=0. Isso reproduz os gaps T22/T24 da bancada funcional.
    bit drive_vectors;

    // Campos preenchidos pelo monitor.
    int cycle;
    logic rst;
    logic valid_in;
    logic valid_out;
    logic signed [ACC_WIDTH-1:0] out;
    bit [N_TESTS-1:0] skipped_tests;

    `uvm_object_utils(dot_seq_item)

    function new(string name = "dot_seq_item");
        super.new(name);
        kind         = DOT_GAP;
        input_flat   = '0;
        weight_flat  = '0;
        test_id      = -1;
        round_id     = -1;
        seed         = 0;
        tx_id        = 0;
        reset_cycles = 2;
        drive_vectors = 0;
        cycle        = 0;
        rst          = 0;
        valid_in     = 0;
        valid_out    = 0;
        out          = '0;
        skipped_tests = '0;
    endfunction

    function void set_input_elem(int idx, logic signed [DATA_WIDTH-1:0] value);
        input_flat[idx*DATA_WIDTH +: DATA_WIDTH] = value;
    endfunction

    function void set_weight_elem(int idx, logic signed [DATA_WIDTH-1:0] value);
        weight_flat[idx*DATA_WIDTH +: DATA_WIDTH] = value;
    endfunction

    function logic signed [DATA_WIDTH-1:0] get_input_elem(int idx);
        return input_flat[idx*DATA_WIDTH +: DATA_WIDTH];
    endfunction

    function logic signed [DATA_WIDTH-1:0] get_weight_elem(int idx);
        return weight_flat[idx*DATA_WIDTH +: DATA_WIDTH];
    endfunction

    function string convert2string();
        return $sformatf("kind=%0d T%02d TX%0d round=%0d seed=0x%08x in=0x%0h w=0x%0h",
                         kind, test_id, tx_id, round_id, seed, input_flat, weight_flat);
    endfunction
endclass
