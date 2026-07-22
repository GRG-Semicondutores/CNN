module DotProduct #(
    parameter DATA_WIDTH = 8,
    parameter N_INPUTS = 32,

    localparam ACC_WIDTH = 2 * DATA_WIDTH + $clog2(N_INPUTS)
) (
    input logic clk,
    input logic signed [DATA_WIDTH-1:0] input_vec [0:N_INPUTS-1],
    input logic signed [DATA_WIDTH-1:0] weight [0:N_INPUTS-1],
    input logic valid_in,
    output logic valid_out,
    output logic signed [ACC_WIDTH-1:0] out
);


localparam STAGES = $clog2(N_INPUTS); //estágios de soma pipeline
localparam LATENCY = STAGES + 1;

logic signed [ACC_WIDTH-1:0] soma [0:STAGES][0:N_INPUTS-1];
logic signed [ACC_WIDTH-1:0] mult [0:N_INPUTS-1];
logic valid_pipe [0:LATENCY];

genvar m; //multiplicadores
genvar s; //estágios
genvar n; //número de somadores por estágio
integer v; //pipeline de valid


//gera os multiplicadores que fazem multiplicação elemento a elemento entre o vetor de entrada e os pesos
generate
    for (m = 0; m < N_INPUTS; m = m + 1) begin
        always @(posedge clk) begin
            mult[m] <= input_vec[m] * weight[m];
        end
    end
endgenerate

generate
    for (s = 0; s < STAGES; s = s + 1) begin :estagios

        //cada estágio executa N/2 vezes (N = número de elementos no estágio anterior), sendo N somado de 1, se teve resto no estágio anterior
        for (n = 0; n < ((N_INPUTS + (1 << s) - 1) >> s) >> 1; n = n + 1) begin :elementos_soma 
            always @(posedge clk) begin
                //primeiro estágio do pipeline de árvore de soma (soma dois do estágio anterior)
                if (s == 0) begin :primeiro_estagio
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

//pipeline de valid, o valid_in é enviado pelos blocos utilizadores deste bloco, para indicar que estão enviando uma entrada válida.
//depois de LATENCY ciclos de clock, baseados no número de estágios, a saída de um valid_in recebido se torna válida
always @(posedge clk) begin // ERRO: o pipeline valid_pipe nao tem reset; apos rst do restante da CNN, valid_out pode permanecer X ate os registros serem preenchidos.
    valid_pipe[0] <= valid_in;
    for (v = 1; v <= LATENCY; v = v  + 1) begin
        valid_pipe[v] <= valid_pipe[v - 1];
    end
end

assign out = soma[STAGES-1][0];
//saída válida corresponde ao último índice do pipeline de saída
assign valid_out = valid_pipe[LATENCY];

endmodule
