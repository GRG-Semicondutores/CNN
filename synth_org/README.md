# Fontes organizados para síntese

Esta pasta, anteriormente chamada `src_organized`, é uma cópia organizada de
`../src`. A pasta original e os scripts existentes permanecem inalterados.

## Divisão arquitetural

| Pasta | Topo | Conteúdo |
| --- | --- | --- |
| `top/` | CNN | Integração da rede, ReLU e Quantizer usados diretamente por CNN |
| `convolution/` | ConvLayer | ConvLayer, FeatureMap, Convolution e cópia local de DotProduct |
| `fully_connected/` | FCLayer | FCLayer, Neuron e cópias locais de DotProduct, ReLU e Quantizer |
| `pooling/` | MaxPooling | Redução espacial |
| `reshape/` | Flatten | Conversão de mapas em vetor |
| `arithmetic/` | Multiplier_WTM | Multiplicador independente e seu Adder_CSA |

Não há pasta `common`. Os módulos reutilizados foram copiados para cada
subdivisão que os instancia diretamente. Os READMEs correspondentes acompanham
as cópias. Multiplier_WTM instancia Adder_CSA, mas não é instanciado por
DotProduct, que utiliza os operadores `*` e `+`.

## Compilação e filelists

Cada pasta contém um `filelist.f`, com o módulo e o arquivo de topo em comentários,
e todos os fontes necessários àquela subdivisão. Os caminhos são relativos a
`CNN/synth_org`: execute a ferramenta a partir dessa pasta e selecione o topo
nas opções da ferramenta.

Use apenas a lista desejada. Como existem cópias dos mesmos módulos, não compile
recursivamente todos os arquivos .sv nem combine os filelists.

As listas da raiz e de `top/` selecionam uma única definição por módulo:
DotProduct de `convolution/`, ReLU e Quantizer de `top/`. Elas também incluem os
blocos das outras subdivisões necessários à rede. A lista da raiz e
`logic_filelist.txt` incluem adicionalmente Multiplier_WTM e Adder_CSA.

As cópias locais começam idênticas. Ao alterar um módulo reutilizado, mantenha
suas cópias sincronizadas para preservar o mesmo comportamento na compilação
isolada e na integração.

## Verificação

O testbench do multiplicador está em
`../testbenchs/arithmetic/multiplier_tb.sv`, fora dos fontes RTL.
Os READMEs dos módulos preservam o conteúdo original e podem citar caminhos antigos.
