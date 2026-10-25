`ifndef RELU_UVM_TB_PARAMS_SVH
`define RELU_UVM_TB_PARAMS_SVH

// Parametros comuns da verificacao da ReLU.
localparam int  RELU_DATA_WIDTH          = 32;
localparam int  RELU_QUANTITY_OF_TESTS   = 1000;
localparam int  RELU_NUM_ROUTINES        = 7;
localparam int  RELU_NUM_MSB_STATES      = 2;
localparam time RELU_SETTLE_TIME          = 10ns;

// Plano completo: 7 padroes x 2 valores do MSB x 1000 repeticoes.
localparam int RELU_FULL_EXPECTED_SAMPLES =
    RELU_NUM_ROUTINES * RELU_NUM_MSB_STATES * RELU_QUANTITY_OF_TESTS;

// O Verilator e um simulador 2-state. Executar X/Z nele criaria uma falsa
// sensacao de cobertura, pois esses estados seriam convertidos para 0/1.
// Em um simulador 4-state, as sete rotinas sao executadas integralmente.
`ifdef VERILATOR
localparam bit RELU_SUPPORTS_4STATE      = 1'b0;
localparam int RELU_EXECUTED_ROUTINES    = 4;
`else
localparam bit RELU_SUPPORTS_4STATE      = 1'b1;
localparam int RELU_EXECUTED_ROUTINES    = RELU_NUM_ROUTINES;
`endif

localparam int RELU_EXPECTED_SAMPLES =
    RELU_EXECUTED_ROUTINES * RELU_NUM_MSB_STATES * RELU_QUANTITY_OF_TESTS;

`endif
