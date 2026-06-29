module Conv2D #(
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH = 32,
    parameter KERNEL_SIZE = 3
) (
    input logic clk,
    input logic [10:0] imagem,
);

localparam N_INPUTS = KERNEL_SIZE * KERNEL_SIZE; //kernel = N x N
localparam STAGES = $clog2(N_INPUTS); //estágios de soma pipeline

logic signed [DATA_WIDTH-1:0] kernel [0:N_INPUTS-1];
logic signed [DATA_WIDTH*2-1:0] soma [0:STAGES][0:N_INPUTS-1];

logic [1:0] resto;

genvar s;
genvar n;

generate
    for (s = 0; s < STAGES; s = s + 1) begin :estagios

        //cada estágio executa N/2 vezes (N = número de elementos no estágio anterior), sendo N somado de 1, se teve resto no estágio anterior
        for (n = 0; n < ((N_INPUTS + (1 << s) - 1) >> s) >> 1; n = n + 1) begin :elementos_soma 
            always @(posedge clk) begin
                //primeiro estágio do pipeline de árvore de soma (soma dois do estágio anterior)
                if (s == 0) begin
                    soma[0][n] <= mult[2 * n] + mult[2 * n + 1];
                //próximos estágios do pipeline de árvore de soma (soma dois do estágio anterior)
                end else begin
                    soma[s][n] <= soma[s - 1][2 * n] + soma[s - 1][2 * n + 1];
                end
            end
        end
        
        if (s == 0) begin :contorno_primeiro_estagio
            always @(posedge clk) begin
                //persiste o valor do elemento ímpar (sozinho) para o próximo estágio
                if (N_INPUTS % 2 == 1)  soma[0][N_INPUTS >> 1] <= mult[N_INPUTS - 1];
            end
        end else begin
            always @(posedge clk) begin :contorno_outros_estagios
                //persiste o valor do elemento ímpar (sozinho) para o próximo estágio
                if (((N_INPUTS + (1 << (s - 1)) - 1) >> (s - 1)) % 2 == 1) soma[s][((N_INPUTS + (1 << s) - 1) >> s) >> 1] <= soma[s - 1][((N_INPUTS + (1 << s) - 1) >> s) - 1]; 
            end
        end
    end
endgenerate

endmodule