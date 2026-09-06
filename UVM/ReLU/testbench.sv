interface relu_if #(parameter int DATA_WIDTH = 32);
    timeunit 1ns;
    timeprecision 1ps;

    logic signed [DATA_WIDTH-1:0] in;
    logic signed [DATA_WIDTH-1:0] out;

    // Metadados da transacao, usados para manter rastreabilidade entre as
    // sete rotinas do TB e os 14 casos da matriz de requisitos.
    int unsigned test_case_number;
    int unsigned matrix_case_number;
    int unsigned iteration;
    bit          msb_value;
    bit          pattern_variant;

    // Handshake exclusivo da bancada.
    bit drive_toggle;
    bit sample_request;
    bit sample_toggle;

    logic signed [DATA_WIDTH-1:0] sampled_in;
    logic signed [DATA_WIDTH-1:0] sampled_out;
    int unsigned sampled_test_case_number;
    int unsigned sampled_matrix_case_number;
    int unsigned sampled_iteration;
    bit          sampled_msb_value;
    bit          sampled_pattern_variant;
endinterface

module tb_relu;
    timeunit 1ns;
    timeprecision 1ps;

    import uvm_pkg::*;
    `include "uvm_macros.svh"
    `include "UVM_tb_params.svh"

    `include "UVM_seq_item.sv"
    `include "UVM_sequencer.sv"
    `include "UVM_sequence.sv"
    `include "UVM_driver.sv"
    `include "UVM_monitor.sv"
    `include "UVM_scoreboard.sv"
    `include "UVM_coverage.sv"
    `include "UVM_agent.sv"
    `include "UVM_env.sv"

    class relu_test extends uvm_test;
        `uvm_component_utils(relu_test)

        relu_env env;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = relu_env::type_id::create("env", this);
        endfunction

        task run_phase(uvm_phase phase);
            relu_sequence seq;

            super.run_phase(phase);
            phase.raise_objection(this);

            seq = relu_sequence::type_id::create("seq");
            seq.start(env.agent.sequencer);

            // Permite que a ultima amostra atravesse monitor/scoreboard.
            #(RELU_SETTLE_TIME);
            phase.drop_objection(this);
        endtask
    endclass

    relu_if #(RELU_DATA_WIDTH) rif();
    logic signed [RELU_DATA_WIDTH-1:0] dut_in;
    logic signed [RELU_DATA_WIDTH-1:0] dut_out;

    ReLU #(.DATA_WIDTH(RELU_DATA_WIDTH)) dut (
        .in  (dut_in),
        .out (dut_out)
    );

    // Ponte mantida para compatibilidade com a bancada Verilator existente.
    always @(rif.drive_toggle) begin
        dut_in = rif.in;
    end

    // Captura atomica apos o tempo de acomodacao definido no driver.
    always @(rif.sample_request) begin
        rif.sampled_in                 = dut_in;
        rif.sampled_out                = dut_out;
        rif.sampled_test_case_number   = rif.test_case_number;
        rif.sampled_matrix_case_number = rif.matrix_case_number;
        rif.sampled_iteration          = rif.iteration;
        rif.sampled_msb_value          = rif.msb_value;
        rif.sampled_pattern_variant    = rif.pattern_variant;
        rif.out                        = dut_out;
        rif.sample_toggle              = rif.sample_request;
    end

    initial begin
        rif.in                         = '0;
        rif.out                        = '0;
        rif.test_case_number           = '0;
        rif.matrix_case_number         = '0;
        rif.iteration                  = '0;
        rif.msb_value                  = 1'b0;
        rif.pattern_variant            = 1'b0;
        rif.drive_toggle               = 1'b0;
        rif.sample_request             = 1'b0;
        rif.sample_toggle              = 1'b0;
        rif.sampled_in                 = '0;
        rif.sampled_out                = '0;
        rif.sampled_test_case_number   = '0;
        rif.sampled_matrix_case_number = '0;
        rif.sampled_iteration          = '0;
        rif.sampled_msb_value          = 1'b0;
        rif.sampled_pattern_variant    = 1'b0;
        dut_in                         = '0;

        if ($test$plusargs("waveform")) begin
            $dumpfile("ReLU_UVM.vcd");
            $dumpvars(0, tb_relu);
        end

        uvm_config_db #(virtual relu_if)::set(null, "*", "vif", rif);
        run_test("relu_test");
    end
endmodule
