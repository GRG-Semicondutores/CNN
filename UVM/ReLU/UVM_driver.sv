class relu_driver extends uvm_driver #(relu_seq_item);
    `uvm_component_utils(relu_driver)

    virtual relu_if vif;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db #(virtual relu_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NOVIF", "vif nao encontrado no driver ReLU")
        end
    endfunction

    task run_phase(uvm_phase phase);
        relu_seq_item tr;
        bit request_value;

        super.run_phase(phase);

        vif.in                 = '0;
        vif.test_case_number   = '0;
        vif.matrix_case_number = '0;
        vif.iteration          = '0;
        vif.msb_value          = 1'b0;
        vif.pattern_variant    = 1'b0;
        vif.drive_toggle       = 1'b0;
        vif.sample_request     = 1'b0;

        forever begin
            seq_item_port.get_next_item(tr);

            vif.in                 = tr.in;
            vif.test_case_number   = tr.test_case_number;
            vif.matrix_case_number = tr.matrix_case_number;
            vif.iteration          = tr.iteration;
            vif.msb_value          = tr.msb_value;
            vif.pattern_variant    = tr.pattern_variant;

            // Mantem a ponte usada pela bancada provisoria para o Verilator.
            vif.drive_toggle = ~vif.drive_toggle;

            // Mesmo intervalo entre estimulo e checagem empregado no TB SV.
            #(RELU_SETTLE_TIME);

            request_value = ~vif.sample_request;
            vif.sample_request = request_value;

            // Garante que o monitor recebeu uma captura atomica de entrada,
            // saida e metadados antes de liberar o proximo item.
            wait (vif.sample_toggle == request_value);

            seq_item_port.item_done();
        end
    endtask
endclass
