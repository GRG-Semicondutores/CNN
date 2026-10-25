# Referências do projeto

<div align="justify">

Os materiais desta pasta descrevem a arquitetura de CNNs, alternativas de
implementação em hardware e aplicações de redes neurais. Eles têm papéis
diferentes: as notas do projeto apresentam os blocos, enquanto os materiais
didáticos e acadêmicos fornecem a base conceitual.

## Arquitetura da CNN

<table align="center">
<thead>
<tr>
<th>Documento</th>
<th>Conteúdo relevante</th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="CNN_block_notes.pdf">Notas do bloco CNN</a></td>
<td>Produto interno e validade, pp. 1–2; convolução, canais e filtros, pp. 3–5; neurônios e FC, pp. 6–7; pooling, ReLU, quantização e flatten, pp. 8–11; interface do topo, p. 12.</td>
</tr>
<tr>
<td><a href="material_de_aula_cd_hbr_de_arquiteturas_para_redes_neurais.pdf">Arquiteturas de hardware para CNNs — A-408</a></td>
<td>Organização das camadas, produtos ponderados, bias e relação entre o cálculo da rede e sua implementação em hardware.</td>
</tr>
<tr>
<td><a href="topico9_P2_IA353_1s2026.pdf">IA353, tópico 9, parte 2 — Fernando J. Von Zuben</a></td>
<td>Correlação cruzada e convolução, pp. 11–12; camadas convolucionais e densas, a partir da p. 55; max/average pooling, a partir da p. 61.</td>
</tr>
<tr>
<td><a href="material_de_aula_cd_hbr_de_arquiteturas_para_machine_learning.pdf">Arquiteturas para Machine Learning — A-407</a></td>
<td>Material complementar sobre arquiteturas de processamento para aprendizado de máquina.</td>
</tr>
</tbody>
</table>

As páginas indicadas são as posições no PDF. Algumas publicações também têm
numeração impressa, que pode diferir da posição do arquivo.

### Convenções usadas na documentação

**Canal e filtro têm funções distintas.** Para cada filtro convolucional, há
um kernel por canal de entrada. As contribuições desses canais são somadas e
recebem o bias do filtro. Cada filtro produz um mapa de características; os
mapas formam os canais de entrada da camada seguinte.

**Convolução é o nome usual da operação nas CNNs.** O material IA353 distingue
essa denominação da correlação cruzada efetivamente usada nas camadas neurais.
O modelo de verificação percorre as janelas sem inverter o kernel; a convenção
espacial e a ordem dos canais estão especificadas no
[plano de verificação](../UVM/CNN_top/req_verif_CNN_top.md).

**Bias e ativação são operações diferentes.** O neurônio calcula
`a = Σ(x_i × w_i) + b`. A ReLU aplica `max(0, a)` ao valor recebido. O ponto
exato em que quantização e ativação entram na cadeia precisa estar definido
para permitir uma comparação bit a bit.

**Quantização exige mais que a largura dos dados.** As notas explicam a
redução de largura e a representação em ponto fixo, mas não fornecem um
contrato completo de arredondamento e saturação para a campanha atual.
O plano registra as regras adotadas pelo modelo, que devem ser confirmadas
na especificação do projeto.

Os exemplos de classificação, softmax e treinamento nos materiais didáticos
explicam CNNs em geral. A campanha do repositório compara resultados numéricos
com pesos sintéticos; ela não mede acurácia nem interpreta as duas saídas
como probabilidades.

## Implementação e avaliação em hardware

<table align="center">
<thead>
<tr>
<th>Documento</th>
<th>Tema</th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="metodos_para_desenvolver_redes_neurais_em_fpgas.pdf">Método para execução de redes neurais convolucionais em FPGA — Mark Cappello Ferreira de Sousa, 2019</a></td>
<td>Mapeamento de camadas e operações de CNNs em FPGA.</td>
</tr>
<tr>
<td><a href="otimizacao_de_redes_neuronais_convolucionais_em.pdf">Otimização de redes neuronais convolucionais em FPGA utilizando técnicas de compressão — Tiago Alexandre Mateus Peres</a></td>
<td>Representação dos parâmetros e técnicas de compressão para implementação.</td>
</tr>
<tr>
<td><a href="comparacao_de_desempenho_de_redes_neurais_em_diferentes_plataformas_de_hardware.pdf">Comparação de desempenho de redes neurais em diferentes plataformas de hardware — Enzo Victor Zucchetti Pietta, 2025</a></td>
<td>Avaliação de execução em diferentes plataformas.</td>
</tr>
<tr>
<td><a href="arquiteturas_hibridas_reconfiguraveis_de_dsp.pdf">Arquiteturas híbridas reconfiguráveis de múltiplos propósitos baseadas em DSP e FPGA</a></td>
<td>Organização de plataformas híbridas de processamento.</td>
</tr>
</tbody>
</table>

## Material complementar

- [Anotações de Felipe](anotacoes_felipe.pdf).
- [Proposta de metodologia para utilização em hardware reconfigurável para aplicações aeroespaciais](proposta_de_metodologia_para_utilizacao_em_hardware_reconfiguravel_para_aplicacoes_aeroespaciais.pdf).
- [Extensões para design de hardware digital em aplicações aeroespaciais](extensoes_para_design_de_hardware_digital_em_aplicacoes_aeroespaciais.pdf).
- [Redes neurais aplicadas ao controle de atitude de satélites com geometria variável](redes-neurais-aplicadas-ao-controle-de-atitude-de-satelites-com-geometria-variavel.pdf).
- [Algoritmos para mapeamento de arquiteturas — inversão de matrizes](material_de_aula_cd_hbr_de_algoritmos_de_mapeamento_inversão_de_matrizc.pdf).
- [Um estudo sobre a transformada rápida de Fourier e seu uso em processamento de imagens](um_estudo_sobre_a_transformada_rapida_de_fourier_e_aplicacoes.pdf).
- [Uma abordagem para pré-processamento de dados textuais em algoritmos de aprendizado — Claudia Aparecida Martins](tese-cam.pdf).

Esses documentos compõem a bibliografia de apoio. Sua presença na pasta não
significa que os experimentos ou garantias neles descritos foram reproduzidos
na CNN deste repositório. Os resultados do projeto estão nos relatórios de
simulação e de implementação física apontados pelo [README principal](../README.md).

</div>
