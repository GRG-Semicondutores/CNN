# Site do projeto CNN

Apresentação técnica da arquitetura, da implementação física e dos resultados
de verificação do topo. A interface é estática, em HTML/CSS/JavaScript; o
Python reúne os documentos e extrai os indicadores dos registros versionados.

A organização segue a [metodologia do site RSA_APB](https://github.com/MattGrossi12/RSA_APB_32-bit/blob/main/site/README_METODOLOGIA.md),
com a [apresentação embedded_power_supply](https://mattgrossi12.github.io/embedded_power_supply/)
como referência visual. O conteúdo, as imagens e as métricas publicados
pertencem à CNN.

## Gerar e abrir localmente

A partir da raiz do repositório, com Python 3.11 ou mais recente:

```bash
python3 -m venv /tmp/cnn-pages-env
/tmp/cnn-pages-env/bin/pip install -r scripts/pages/requirements.txt
/tmp/cnn-pages-env/bin/python scripts/pages/build.py
python3 -m http.server 8000 --bind 127.0.0.1 --directory _site
```

Abra `http://localhost:8000/`. Para encerrar a prévia, pressione `Ctrl+C` no
terminal do servidor. O gerador também aceita uma saída diferente:

```bash
/tmp/cnn-pages-env/bin/python scripts/pages/build.py --output /tmp/cnn-site-preview
```

A pasta de saída precisa ainda não existir ou ter sido criada pelo
próprio gerador. `_site/` é um artefato e fica fora do Git; as alterações
permanentes devem ser feitas em `site/` ou `scripts/pages/`.

## Fontes e responsabilidades

| Recurso | Responsabilidade |
| --- | --- |
| `site/index.html` | Abertura e seções técnicas, com conteúdo HTML disponível sem JavaScript. |
| `site/assets/style.css` | Tema escuro, tipografia, tabelas, galerias e layout responsivo. |
| `site/assets/app.js` | Menu mobile, filtros de cenários e ampliação das imagens. |
| `site/catalog.json` | Descrições dos módulos, legendas das imagens e seleção de documentos. Não contém resultados de simulação. |
| `site/document.html` | Leitura dos documentos Markdown no tema do site, com índice e downloads. |
| `site/coverage.html` | Explorador de contadores nativos e da exportação LCOV por arquivo. |
| `scripts/pages/data.py` | Leitura e reconciliação de logs, CSV, cobertura e síntese. |
| `scripts/pages/build.py` | Montagem das páginas, cópia de recursos e ajuste dos links. |
| `scripts/pages/check.py` | Verificação de links locais, âncoras, imagens e placeholders. |
| `.github/workflows/pages.yml` | Construção e publicação do artefato pelo GitHub Pages. |

As imagens vêm de `images/` e das vistas ASAP7 em
`synth_org/top/reports/asap7/top/base/`. O catálogo relaciona nove vistas de
implementação física e cinco capturas do GTKWave. Os links abrem a imagem
original; a ampliação em diálogo é uma melhoria quando JavaScript está ativo.

Os textos de referência são convertidos em `_site/reference/`. Links entre
os documentos selecionados passam a apontar para páginas locais; os demais
fontes têm links para o repositório. Os PDFs do relatório e das notas do bloco
CNN são copiados para o site. A construção não abre os fontes RTL.

## Origem dos indicadores

A apresentação usa a campanha documentada em **25/10/2026**, cujos registros
estão em `UVM/CNN_top/doc_verif/evidencias/`. Os hashes do manifesto são
conferidos antes da leitura. O gerador reconcilia os starts, os estados das
transações, o CSV e as contagens de cobertura por arquivo.

O resultado publicado é **FAIL**, com duas transações divergentes. Isso não
impede a construção do site: a publicação apresenta a evidência existente,
sem transformar uma aprovação do workflow em aprovação do DUT. A geração
não executa uma nova simulação nem lê resultados locais não versionados em
`results_uvm/`.

- Contadores nativos: `coverage_summary.log` e `coverage_by_file.csv`.
- Covergroups: `functional_summary.log` e `coverage_bins.log`.
- LCOV: `site/evidence/rtl.lcov`, conferido com `rtl_lcov_summary.log`.
- Síntese: `synth_stat.txt` e `6_finish.rpt` da execução ASAP7 versionada.
- Configuração: parâmetros públicos da bancada em `UVM_tb_params.svh`.

Os logs publicados são cópias com caminhos pessoais normalizados. O manifesto
`_site/SHA256SUMS` identifica os downloads produzidos pelo gerador. Os arquivos
de evidência originais e seu manifesto permanecem inalterados.

O horário e o commit no rodapé identificam a construção da apresentação. Eles
não são usados como prova de quando a simulação ocorreu ou de qual revisão do
RTL a produziu; essa limitação de rastreabilidade continua explícita no site.

## Validar

```bash
/tmp/cnn-pages-env/bin/python -m unittest discover -s scripts/pages -p 'test_*.py'
/tmp/cnn-pages-env/bin/python scripts/pages/build.py
/tmp/cnn-pages-env/bin/python scripts/pages/check.py _site
node --check site/assets/app.js
```

Os testes exercitam a preservação do status FAIL, a integridade do manifesto,
a reconciliação das contagens, os caminhos LCOV e a configuração da campanha.
A conferência do artefato cobre páginas e âncoras locais, caminhos relativos,
imagens e ausência de diretórios pessoais nos downloads.

A revisão visual deve conferir desktop e celular, os filtros FAIL/INCOMPLETE,
a ampliação e navegação das galerias, o fechamento por Escape, o foco de
teclado e a navegação básica sem JavaScript. O relatório de cobertura também
pode ser consultado dentro da seção da página ou aberto separadamente.

## Publicar pelo GitHub Pages

1. Envie os arquivos do site e as evidências versionadas à branch `main`.
2. Em **Settings → Pages → Build and deployment → Source**, selecione
   **GitHub Actions**.
3. Use **Actions → Site do projeto — GitHub Pages → Run workflow**, ou envie
   um commit que altere um dos caminhos acompanhados pelo workflow.

O workflow instala apenas a dependência do gerador, executa os testes e
confere o artefato antes do deploy. Não recompila a CNN nem substitui os
resultados da campanha. O endereço padrão previsto é
`https://grg-semicondutores.github.io/CNN/`; a disponibilidade é confirmada
pelo resultado do job de publicação no repositório.

Todos os recursos locais usam caminhos relativos para funcionar nesse
subdiretório. A interface não depende de bibliotecas, fontes ou serviços
externos em tempo de execução.
