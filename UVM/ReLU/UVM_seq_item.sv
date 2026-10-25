class relu_seq_item extends uvm_sequence_item;
    `uvm_object_utils(relu_seq_item)

    // logic deve ser preservado: as rotinas 5, 6 e 7 dependem de X/Z.
    logic [RELU_DATA_WIDTH-1:0] in;
    logic [RELU_DATA_WIDTH-1:0] out;

    // test_case_number identifica a rotina (1..7), como no TB original.
    int unsigned test_case_number;

    // matrix_case_number segue a matriz de requisitos (1..14):
    // rotina 1/MSB0 -> 1, rotina 1/MSB1 -> 2, ..., rotina 7/MSB1 -> 14.
    int unsigned matrix_case_number;
    int unsigned iteration;
    bit          msb_value;

    // Mantido para rastreabilidade do formato UVM. Na regressao equivalente
    // ao TB original permanece em 0, pois ele usa uma unica polaridade.
    bit pattern_variant;

    function new(string name = "relu_seq_item");
        super.new(name);
    endfunction

    function string convert2string();
        return $sformatf(
            "routine=%0d matrix_case=%0d msb=%0b variant=%0d iteration=%0d in=%032b out=%032b",
            test_case_number, matrix_case_number, msb_value, pattern_variant,
            iteration, in, out
        );
    endfunction
endclass
