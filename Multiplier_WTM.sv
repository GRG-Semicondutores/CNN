module Multiplier_WTM #(parameter int LENGTH = 11)(
    input  [LENGTH-1:0]   multiplicand,
    input  [LENGTH-1:0]   multiplier,
    output [LENGTH*2:0]   result // ERRO: produto unsigned de dois vetores LENGTH requer 2*LENGTH bits ([2*LENGTH-1:0]); esta declaracao tem um bit extra e nao coincide com o testbench.
);

    // ─────────────────────────────────────────────
    // Funções auxiliares
    // ─────────────────────────────────────────────

    function automatic int next_n(input int n);
        return 2 * (n / 3) + (n % 3);
    endfunction

    function automatic int calc_stages(input int n);
        int s;
        s = 0;
        while (n > 2) begin
            n = next_n(n);
            s++;
        end
        return s;
    endfunction

    function automatic int lines_at(input int n, input int s);
        int i;
        for (i = 0; i < s; i++)
            n = next_n(n);
        return n;
    endfunction

    // ─────────────────────────────────────────────
    // Localparams
    // ─────────────────────────────────────────────

    localparam int MAX_STAGES = calc_stages(LENGTH);
    localparam int MAX_LINES  = LENGTH;

    // ─────────────────────────────────────────────
    // Partial products
    // ─────────────────────────────────────────────

    logic [LENGTH*2:0] partial [0:LENGTH-1];

    genvar i;
    generate
        for (i = 0; i < LENGTH; i++) begin : gen_partial
            assign partial[i] = {{LENGTH{1'b0}}, (multiplicand & {LENGTH{multiplier[i]}})} << i;
        end
    endgenerate

    // ─────────────────────────────────────────────
    // Array de stages
    // ─────────────────────────────────────────────

    logic [LENGTH*2:0] stage [0:MAX_STAGES][0:MAX_LINES-1];

    // ─────────────────────────────────────────────
    // Stage 0: carregar partial products
    // ─────────────────────────────────────────────

    genvar p;
    generate
        for (p = 0; p < LENGTH; p++) begin : gen_stage0
            assign stage[0][p] = partial[p];
        end
    endgenerate

    // ─────────────────────────────────────────────
    // Stages intermediários: CSAs + passthrough
    // ─────────────────────────────────────────────

    genvar s, j;
    generate
        for (s = 0; s < MAX_STAGES; s++) begin : gen_stages

            localparam int LINES_S     = lines_at(LENGTH, s);
            localparam int NUM_CSAS    = LINES_S / 3;
            localparam int NUM_PT      = LINES_S % 3;
            localparam int CSA_OUT_OFF = 2 * NUM_CSAS;
            localparam int PT_SRC_OFF  = 3 * NUM_CSAS;

            for (j = 0; j < NUM_CSAS; j++) begin : gen_csa

                logic [LENGTH*2:0] sum_wire;
                logic [LENGTH*2:0] cout_wire;

                Adder_CSA #(
                    .ADD_LENGTH(LENGTH * 2 + 1)
                ) csa_mult (
                    .A      (stage[s][3*j    ]),
                    .B      (stage[s][3*j + 1]),
                    .Cin    (stage[s][3*j + 2]),
                    .PreSum (sum_wire),
                    .Cout   (cout_wire)
                );

                assign stage[s+1][2*j    ] = sum_wire;
                assign stage[s+1][2*j + 1] = cout_wire << 1;

            end

            for (j = 0; j < NUM_PT; j++) begin : gen_passthrough

                assign stage[s+1][CSA_OUT_OFF + j] = stage[s][PT_SRC_OFF + j];

            end

        end
    endgenerate

    // ─────────────────────────────────────────────
    // Stage final: CPA
    // ─────────────────────────────────────────────

    assign result = stage[MAX_STAGES][0] + stage[MAX_STAGES][1];

endmodule
