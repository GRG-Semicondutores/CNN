`ifndef DOT_TB_PARAMS_SVH
`define DOT_TB_PARAMS_SVH

// Parametros globais da bancada. Mantem a mesma configuracao usada pela
// bancada funcional e pelo RTL do DotProduct.
localparam int DATA_WIDTH = 8;
localparam int N_INPUTS   = 32;
localparam int ACC_WIDTH  = 2*DATA_WIDTH + $clog2(N_INPUTS);
localparam int VECTOR_BITS = DATA_WIDTH * N_INPUTS;

// A arvore possui STAGES niveis de reducao. Para N_INPUTS=32 temos 5 niveis.
localparam int STAGES = $clog2(N_INPUTS);

// T26--T28 exercitam as ocupacoes 1..6 observadas na implementacao atual.
localparam int PIPELINE_OCCUPATIONS = STAGES + 1;

// Contrato temporal validado na bancada funcional:
// Dado e valid_out devem aparecer 5 ciclos apos C_IN para N_INPUTS=32.
// T23 mede a primeira aparicao de ambos e reprova qualquer desalinhamento.
localparam int VALID_LATENCY_CYCLES = STAGES;

localparam int N_TESTS = 29;
localparam int unsigned SEED_BASE = 32'h5A17_2026;
localparam time CLK_HALF_PERIOD = 5ns;

typedef int unsigned dot_test_id_t;
typedef int unsigned dot_round_t;

`endif
