`ifndef RNG_TB_PARAMS_SVH
`define RNG_TB_PARAMS_SVH

// Mantem a largura do dado como parametro global para garantir coerencia entre interface,
// DUT e componentes que interpretam o valor observado.
localparam int RNG_WIDTH = 3;

// Define um tipo sem sinal para identificar rodadas de forma uniforme em toda a bancada,
// preservando legibilidade e consistencia semantica.
typedef int unsigned rng_round_t;

`endif