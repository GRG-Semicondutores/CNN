class cnn_seq_item extends uvm_sequence_item;
    typedef enum int {CNN_START, CNN_WAIT, CNN_RESET, CNN_CASE, CNN_PREPARE} kind_e;
    kind_e kind=CNN_WAIT;
    cnn_payload_t pins='0;
    cnn_result_t result='{default:'0}, pre_result='{default:'0};
    int case_id=-1, tx_id=0;
    string subcase="NONE", weights="W00";
    int unsigned cycles=0, lead_cycles=1;
    longint unsigned cycle=0;
    logic rst=0, start=0, valid=0, pre_rst=0, pre_start=0, pre_valid=0;
    bit exploratory=0;
    bit [21:0] cases_started='0;
    `uvm_object_utils(cnn_seq_item)
    function new(string name="cnn_seq_item"); super.new(name); endfunction
    virtual function void do_copy(uvm_object rhs);
        cnn_seq_item other;
        super.do_copy(rhs);
        if (!$cast(other,rhs)) `uvm_fatal("CNN_COPY","Tipo de transacao invalido")
        kind=other.kind; pins=other.pins; result=other.result; pre_result=other.pre_result;
        case_id=other.case_id; tx_id=other.tx_id; subcase=other.subcase; weights=other.weights;
        cycles=other.cycles; lead_cycles=other.lead_cycles; cycle=other.cycle;
        rst=other.rst; start=other.start; valid=other.valid;
        pre_rst=other.pre_rst; pre_start=other.pre_start; pre_valid=other.pre_valid;
        exploratory=other.exploratory; cases_started=other.cases_started;
    endfunction
endclass
