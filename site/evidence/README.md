# Exportação LCOV da campanha

`rtl.lcov` é a exportação de linhas e ramos de
`results_uvm/CNN_top/coverage/cnn_top_rtl.info`, correspondente à campanha
registrada em `UVM/CNN_top/doc_verif/evidencias/`.

A cópia mantém os registros DA/BRDA e normaliza somente o campo SF para
caminhos relativos sob `src/`. Não contém o texto dos módulos RTL. O gerador
recalcula os totais e exige correspondência com `rtl_lcov_summary.log`:
75/75 linhas físicas e 199/211 ramos, em sete arquivos.

Este arquivo é necessário para reproduzir o explorador LCOV no GitHub Pages,
onde a pasta local ignorada `results_uvm/` não existe. Uma campanha posterior
exige atualizar essa exportação e o conjunto coerente de evidências. Não
misture a exportação de uma execução com logs ou métricas de outra.
