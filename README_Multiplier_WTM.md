# Multiplier_WTM

Multiplicador parametrizável em SystemVerilog baseado em **Wallace Tree** com redução por estágios de Carry-Save Adders (`Adder_CSA`). Reduz os produtos parciais em múltiplos estágios até restar dois sinais, que são somados por um Carry-Propagate Adder (CPA) inferido.

---

## Parâmetros

| Parâmetro | Tipo  | Padrão | Descrição                                  |
|-----------|-------|--------|--------------------------------------------|
| `LENGTH`  | `int` | `4`    | Largura em bits dos operandos de entrada   |

---

## Portas

| Porto          | Direção | Largura        | Descrição                              |
|----------------|---------|----------------|----------------------------------------|
| `multiplicand` | input   | `LENGTH`       | Primeiro operando da multiplicação     |
| `multiplier`   | input   | `LENGTH`       | Segundo operando da multiplicação      |
| `result`       | output  | `LENGTH*2 + 1` | Resultado da multiplicação — um bit extra para acomodar o carry acumulado ao longo dos estágios |

---

## Arquitetura

### 1. Geração dos produtos parciais

São gerados `LENGTH` produtos parciais. O produto parcial `i` é o `multiplicand` ANDado com o bit `i` do `multiplier`, shiftado `i` posições à esquerda:

```
partial[i] = (multiplicand & {LENGTH{multiplier[i]}}) << i
```

### 2. Redução por estágios (Wallace Tree)

Os produtos parciais são carregados no estágio 0 do array `stage[s][l]` e reduzidos a cada estágio segundo a regra:

```
n linhas entrando → floor(n/3) CSAs → 2*floor(n/3) saídas
                  → n%3 linhas passthrough
                  → total saindo: 2*floor(n/3) + n%3
```

O número de estágios necessários para `LENGTH` linhas é calculado automaticamente pela função `calc_stages`.

Exemplos de redução:

| LENGTH | Estágios | Progressão de linhas         |
|--------|----------|------------------------------|
| 4      | 2        | 4 → 3 → 2                   |
| 7      | 4        | 7 → 5 → 4 → 3 → 2           |
| 8      | 4        | 8 → 6 → 4 → 3 → 2           |
| 16     | 6        | 16 → 11 → 8 → 6 → 4 → 3 → 2 |

### 3. Carry alinhado entre estágios

O `Cout` do `Adder_CSA` representa o carry da posição `i` para `i+1`, mas é entregue na posição `i`. Antes de guardar no próximo estágio, ele é deslocado 1 bit à esquerda:

```
stage[s+1][2*j + 1] = cout_wire[s][j] << 1
```

Isso garante que todas as linhas do array `stage` estejam sempre alinhadas na posição correta de valor.

### 4. Soma final (CPA)

Ao final dos estágios restam exatamente duas linhas. Elas são somadas diretamente:

```systemverilog
assign result = stage[MAX_STAGES][0] + stage[MAX_STAGES][1];
```

---

## Dependências

| Módulo      | Descrição                        |
|-------------|----------------------------------|
| `Adder_CSA` | Carry-Save Adder parametrizável  |

---

## Instanciação

```systemverilog
Multiplier_WTM #(
    .LENGTH(8)
) mult_inst (
    .multiplicand (a),
    .multiplier   (b),
    .result       (result)
);
```

---

## Observações de síntese

- Ferramentas mais antigas podem não suportar `localparam` dentro de `for generate` ou funções `automatic` em `localparam`
- O CPA final é inferido pelo sintetizador — para controle explícito do tipo de somador, substitua o `assign result` por uma instância dedicada
