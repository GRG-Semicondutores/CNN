`timescale 1ns/1ps

// Interface e classe de teste permanecem no proprio testbench, seguindo o
// mesmo padrao estrutural usado na bancada-base fornecida.
interface dot_if #(
    parameter int DATA_WIDTH = 8,
    parameter int N_INPUTS   = 32,
    parameter int ACC_WIDTH  = 2*DATA_WIDTH + $clog2(N_INPUTS)
) (input logic clk);
    logic rst;
    logic valid_in;
    logic valid_out;

    logic signed [DATA_WIDTH-1:0] input_vec [0:N_INPUTS-1];
    logic signed [DATA_WIDTH-1:0] weight    [0:N_INPUTS-1];
    logic signed [ACC_WIDTH-1:0]  out;

    // Metadados exclusivos da bancada. Nao fazem parte do DUT; servem para o
    // monitor associar cada amostra ao teste/transacao que o driver aplicou.
    int   tb_test_id;
    int   tb_round;
    int   tb_seed;
    int   tb_tx_id;
    bit [28:0] tb_skipped_tests;

    task automatic clear_vectors();
        int k;
        for (k=0; k<N_INPUTS; k++) begin
            input_vec[k] = '0;
            weight[k]    = '0;
        end
    endtask
endinterface

module tb_dot;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    `include "UVM_tb_params.svh"

    // Mesmo tipo parametrizado para a instancia, os componentes e o config_db.
    typedef virtual dot_if #(DATA_WIDTH, N_INPUTS, ACC_WIDTH) dot_vif_t;

    `include "UVM_seq_item.sv"
    `include "UVM_sequencer.sv"
    `include "UVM_random.sv"
    `include "UVM_sequence.sv"
    `include "UVM_driver.sv"
    `include "UVM_monitor.sv"
    `include "UVM_scoreboard.sv"
    `include "UVM_agent.sv"
    `include "UVM_env.sv"

    class dot_test extends uvm_test;
        `uvm_component_utils(dot_test)

        dot_env env;
        dot_vif_t vif;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);

            env = dot_env::type_id::create("env", this);

            if (!uvm_config_db#(dot_vif_t)::get(this, "", "vif", vif)) begin
                `uvm_fatal("NOVIF", "vif nao encontrado no test")
            end
        endfunction

        task automatic apply_initial_reset();
            // Reproduz T00 da bancada funcional: rst inicia ativo em t=0,
            // permanece ativo por tres bordas de subida e e liberado no
            // terceiro negedge antes da primeira transacao funcional.
            vif.rst        = 1'b1;
            vif.valid_in   = 1'b0;
            vif.tb_test_id = 0;
            vif.tb_round   = -1;
            vif.tb_seed    = 0;
            vif.tb_tx_id   = 0;
            vif.tb_skipped_tests = '0;
            vif.clear_vectors();

            `uvm_info("DOT_TEST", $sformatf("Reset inicial assert em t=%0t", $time), UVM_LOW)

            repeat (3) @(negedge vif.clk);
            vif.rst = 1'b0;

            `uvm_info("DOT_TEST", $sformatf("Reset inicial deassert em t=%0t", $time), UVM_LOW)
        endtask

        task run_phase(uvm_phase phase);
            dot_sequence seq;

            super.run_phase(phase);
            phase.raise_objection(this);

            // O reset inicial pertence ao teste, como no modelo-base RNG/ReLU.
            // A sequence recebe o DUT ja liberado e executa T00-T28.
            apply_initial_reset();

            seq = dot_sequence::type_id::create("seq");
            seq.start(env.agent.sequencer);

            // A sequence termina no negedge apos drenar o pipeline; a ultima
            // amostragem do monitor (posedge + 1ns) ja foi entregue ao scoreboard.

            phase.drop_objection(this);
        endtask
    endclass

    logic clk;

    dot_if #(
        .DATA_WIDTH(DATA_WIDTH),
        .N_INPUTS  (N_INPUTS),
        .ACC_WIDTH (ACC_WIDTH)
    ) dif (.clk(clk));

    initial begin
        clk = 1'b0;
        forever #(CLK_HALF_PERIOD) clk = ~clk;
    end

    DotProduct #(
        .DATA_WIDTH(DATA_WIDTH),
        .N_INPUTS  (N_INPUTS)
    ) dut (
        .clk      (dif.clk),
        .rst      (dif.rst),
        .input_vec(dif.input_vec),
        .weight   (dif.weight),
        .valid_in (dif.valid_in),
        .valid_out(dif.valid_out),
        .out      (dif.out)
    );

    initial begin
        if ($test$plusargs("waveform")) begin
            $dumpfile("DOT_UVM.vcd");
            $dumpvars(0, tb_dot);
        end

        // T00 exige reset ativo desde o inicio da simulacao.
        dif.rst        = 1'b1;
        dif.valid_in   = 1'b0;
        dif.tb_test_id = 0;
        dif.tb_round   = -1;
        dif.tb_seed    = 0;
        dif.tb_tx_id   = 0;
        dif.tb_skipped_tests = '0;
        dif.clear_vectors();

        uvm_config_db#(dot_vif_t)::set(null, "*", "vif", dif);
        run_test();
    end
endmodule
