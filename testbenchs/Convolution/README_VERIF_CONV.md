# Testbench Convolution — 392 casos

Configuração: imagem 4 × 4, kernel 3 × 3, padding 1, elementos signed de 8 bits e saída 4 × 4 com elementos de 20 bits. O kernel possui 9 posições; a imagem possui 16.

## Padrões

| ID | Padrão aplicado independentemente à imagem e ao kernel |
|---|---|
| 1 | Todos os bits em zero |
| 2 | Todos os bits em um (−1 em signed de 8 bits) |
| 3 | Bits alternados; posições consecutivas alternam 0x55 e 0xAA |
| 4 | Todos os bits em Z |
| 5 | Todos os bits em X |
| 6–10 | Cinco matrizes pseudoaleatórias |
| 11 | Diagonal principal com todos os bits em zero; demais posições aleatórias |
| 12 | Diagonal principal com todos os bits em um; demais posições aleatórias |
| 13 | Diagonal secundária com todos os bits em zero; demais posições aleatórias |
| 14 | Diagonal secundária com todos os bits em um; demais posições aleatórias |

As matrizes são geradas uma vez com PRNG xorshift e semente fixa 0x19A42026. Os mesmos estímulos são reutilizados nas duas abordagens para permitir comparação. Stuck-at é aplicado aos dados de entrada, sem force em nós internos.

## Ordem e reset

1. Abordagem 0: 196 combinações, sem reset inicial. Há reset entre os casos.
2. Abordagem 1: as mesmas 196 combinações, com reset inicial. Há reset entre os casos.

Essa interpretação mantém o reset entre testes solicitado: a diferença entre abordagens é o estado inicial do primeiro caso. Para estudar operações consecutivas sem reset, seria necessária outra rodada.

Não se inicializam registradores internos artificialmente. No primeiro caso sem reset, o controle pode permanecer X e a operação pode não concluir. O timeout é reportado como falha; o testbench aplica o reset previsto antes do próximo caso e continua a regressão. Nenhuma falha é ocultada por ser previsível.

## Scoreboard e assertions

O modelo de referência calcula diretamente a correlação cruzada signed de cada janela com zero padding e stride 1, sem repetir a árvore pipelineada do DUT. O resultado esperado tem a mesma largura AW da saída.

Cada operação concluída executa uma assertion imediata para cada posição de result. Na configuração padrão são 16 comparações por operação, ou 6.272 comparações se todos os 392 casos concluírem. Casos com timeout não executam comparações sobre dados sem conclusão; o resumo registra a quantidade efetivamente executada.

A comparação usa `===`, verificando explicitamente os quatro estados. Entradas X/Z na aritmética produzem resultados desconhecidos no modelo; uma saída numérica não é aceita quando o esperado é X. Esses casos verificam propagação de desconhecidos, não um valor numérico de convolução. O zero padding também participa das multiplicações: multiplicação por um peso X/Z permanece desconhecida.

Assertions adicionais verificam conclusão dentro de `N_OUT + $clog2(N_KERNEL) + 16` ciclos após retirar start, valid_out em zero sob reset, duração de um ciclo do pulso de conclusão e execução dos 392 casos. A janela de timeout é um limite de progresso, não uma assertion de latência exata.

Estímulos e reset mudam na borda de descida; a scoreboard lê a saída 1 ns após a borda de subida, depois das atualizações não bloqueantes. Imagem e kernel permanecem estáveis até a conclusão ou timeout.

O console mostra PASS/FAIL e detalhes das divergências. `convolution_results.csv` recebe uma linha por caso. A regressão retorna erro ao final se houver falhas, mas continua após divergências e timeouts para explorar todos os estímulos.

## Execução com Xcelium

A partir da pasta deste pacote:

```bash
xrun -64bit -sv -top tb_convolution -access +rwc DotProduct.sv Convolution.sv tb_convolution.sv
```

É necessário um simulador de quatro estados para preservar X/Z. O testbench utiliza SystemVerilog, arrays unpacked, tasks, assertions imediatas e break.

## Situação da validação

O testbench foi revisado estaticamente; não foi compilado ou simulado nesta sessão, pois não há simulador HDL instalado. Não há resultado de execução dos 392 casos disponível.

Os RTLs incluídos são as versões fornecidas e alinhadas anteriormente aos parâmetros do topo. Não foi corrigido o problema conhecido de propagação dos elementos ímpares do DotProduct. Portanto, a scoreboard pode detectar divergências ou X nas operações, além do timeout possível no primeiro caso sem reset.
