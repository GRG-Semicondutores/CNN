# Adder_CSA

Carry-Save Adder (CSA) parametrizável em SystemVerilog. Soma três operandos de `ADD_LENGTH` bits sem propagar carry — cada bit é calculado de forma independente, produzindo uma soma parcial (`PreSum`) e um vetor de carries (`Cout`).

---

## Parâmetros

| Parâmetro    | Tipo  | Padrão | Descrição                              |
|--------------|-------|--------|----------------------------------------|
| `ADD_LENGTH` | `int` | `4`    | Largura em bits de todas as portas I/O |

---

## Portas

| Porto     | Direção | Largura        | Descrição                                                                 |
|-----------|---------|----------------|---------------------------------------------------------------------------|
| `A`       | input   | `ADD_LENGTH`   | Primeiro operando                                                         |
| `B`       | input   | `ADD_LENGTH`   | Segundo operando                                                          |
| `Cin`     | input   | `ADD_LENGTH`   | Terceiro operando (carry de entrada ou terceiro número a somar)           |
| `PreSum`  | output  | `ADD_LENGTH`   | XOR bit a bit dos três operandos — soma sem carry                        |
| `Cout`    | output  | `ADD_LENGTH`   | Carry gerado bit a bit — **não deslocado**, representa o carry da posição `i` para `i+1` |

---

## Equações lógicas

```
PreSum[i] = A[i] ^ B[i] ^ Cin[i]
Cout[i]   = (A[i] & B[i]) | (B[i] & Cin[i]) | (A[i] & Cin[i])
```

A relação fundamental preservada é:

```
A + B + Cin = PreSum + (Cout << 1)
```

O shift de `Cout` **não é feito internamente** — é responsabilidade de quem instancia o módulo alinhar o carry corretamente antes de usá-lo na próxima etapa.

---

## Uso em cadeia (Wallace Tree)

Por não propagar carry, o CSA pode ser encadeado em múltiplos estágios sem aumentar o caminho crítico. Ao final da cadeia, os dois sinais restantes (`PreSum` e `Cout << 1`) são somados por um Carry-Propagate Adder (CPA).

```
Estágio N:   A, B, Cin  →  CSA  →  PreSum, Cout
Estágio N+1: PreSum, (Cout << 1), próxima_linha  →  CSA  →  ...
```

---

## Instanciação

```systemverilog
Adder_CSA #(
    .ADD_LENGTH(8)
) csa_inst (
    .A      (a),
    .B      (b),
    .Cin    (cin),
    .PreSum (presum),
    .Cout   (cout)
);
```
