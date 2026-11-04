# #0055 — HTML do servidor renderizado como no original

| Campo | Valor |
|---|---|
| Vaga | ui4 (vaga nova, `worktrees\ui4`) |
| Branch | `feat/ui-html` (nasce de `feat/ui-revisao`, #0047) |
| Estado | no main |
| Spec | `analises\l2-interlude\client_spec\` (NCHtmlViewer, NpcHtmlMessage, ShowBoard, 89, 96); `analises\interface-p166\02_interacoes.md` (roda e cliques no `NCHtmlViewer`); `UI/L2Html.cs` |
| Sessão | ui: HTML do servidor (#0055) |
| Criada | 2026-11-04 |

## Objetivo

Os HTMLs que o servidor manda (NpcHtmlMessage, ShowBoard/Community Board, TutorialShowHtml e as janelas de quest) aparecem quebrados no porte. O usuário viu dois exemplos:
- o Community Board abre com as abas e as linhas, mas sem o conteúdo;
- o buffer mostra a lista de buffs com os botões, mas os ícones das skills não aparecem.

No cliente original, tudo isso funciona. Esta tarefa faz o visualizador de HTML do porte suportar o que o NCHtmlViewer do original suporta, com o mesmo layout.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Levantamento, com evidência (`NCHtmlViewer` e o parser no NWindow do Tryskell ou na REA, a spec), de cada tag e atributo que o original aceita, e de como desenha:
  - `html`, `body`, `title`, `br`, `p`, `center`, `font` (color), `a` (action bypass/link/url);
  - `button` (value, action, width, height, back, fore), `img` (src com `icon.*`/`L2UI*`, width, height), `table`/`tr`/`td` (width, height, align, valign, bgcolor, background, cellpadding, cellspacing, border);
  - `edit`, `multiedit`, `combobox` e as variáveis `$`;
  - as entidades, as cores por nome e #hex e as quebras de linha.

  A tabela fica em `Docs/html_suporte.md`, com o estado de cada item no porte.
  - Feito: `Docs/html_suporte.md` §2-§7, com a linha do `nwindow.c` de cada item. O original não lê o `url` do `<a>` (`href` também não); o `<a>` tem `link`, `action`, `cmd` e `msg`.
- [ ] O tamanho e a rolagem do texto, a roda do mouse e o clique nos links e botões são iguais ao original.
  - Justificativa (parcial):
    - Roda (3 unidades: 39 px, ou 45 no BBS), clique e ações (bypass em tokens, `$var` com o GetData, `link`, `cmd`, `msg`) seguem o original e têm teste.
    - A altura da linha segue a fórmula do original ('A' + 6), mas o 'A' = 13 é [V]: falta uma captura do cliente oficial na mesma resolução.
    - A fonte é a embutida do Unity em 11 px, como no resto do porte.
    - Falta a barra de rolagem do HtmlCtrl (▲▼).
- [x] Todos os HTMLs do `data\html` do aCis (somente leitura em `C:\Workspace-java\aCis_gameserver`) passam pelo parser do porte sem erro. Um teste percorre a pasta e falha em tag ou atributo não suportado. O que o original ignora fica registrado como ignorado.
  - Feito: `L2HtmlTests.Corpus_aCis_TodasAsTagsEAtributosConhecidos`. Os 3751 arquivos passam; o que o cliente ignora está em `HtmlDoc.Ignored`.
- [x] Os ícones (`img src="icon.skill0000"` e outros pacotes de textura), as texturas de fundo e os botões com `back`/`fore` aparecem. O que faltar no `shared` vira pedido de exportação para a coordenadora, com o comando exato.
  - Feito: o buffer mostra os ícones ao vivo (`depois_buffer_buff.png`). `L2UI.SquareGray` e os botões `L2UI_CH3` aparecem 1:1. Pedido 0043 para `sek.*` e `Default.*`.
- [x] O Community Board mostra o conteúdo de todas as abas como no original (`ShowBoard` com as várias partes do HTML).
  - A aba Top está ao vivo, com as partes 101/102/103 e os fundos das tabelas (`depois_board_top.png`).
  - As outras abas mandam `_bbsloc` e os demais `Command1..8`, mas o aCis local só trata `bbs_*` (`RequestBypassToServer.java:858`). O servidor não responde, e o cliente original ficaria igual com esse servidor.
  - Falta: as partes 1..4 e 1001/1002 do BBS (leitura e escrita), que dependem do `RequestBBSWrite` (pedido 0034).
- [x] A janela do buffer da captura do usuário (lista de buffs com ícone, nome e descrição) fica igual ao original.
  - Ícone, nome e descrição em cinza sobre as faixas pretas alternadas, pelo layout da tabela do original. Captura ao vivo em `depois_buffer_buff.png`; não há captura do cliente oficial para comparar pixel a pixel.
- [x] O que for de `Scripts\Net\` vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
  - Pedidos 0042 e 0043 (coordenadora) e 0047 (net).
- [x] Testes EditMode (parser e layout de amostras: tabela com ícone, botão com textura, fontes e cores, board). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
  - Sessão de testes, `testes\0055-1\`: 772/772 em `d96d606`; a base `b88e07c` dá 750/750. Os testes estão em `L2HtmlTests`, `NpcHtmlWndTests` e `SystemMenuTests`.
- [x] Capturas antes e depois em `Docs/evidencias/html/`, tiradas no aCis local (buffer, gatekeeper, board, uma quest), e uma linha em `Docs/validacao.md`.
  - `Docs/evidencias/html/antes_*`/`depois_*` e `Docs/validacao.md` K34.
  - Quest: o link "Quest" da gatekeeper responde a página padrão do servidor ("not on a quest"); nenhum NPC perto tinha quest para um personagem novo. As páginas de quest usam as mesmas tags (texto, `<br>` e `<a action>`), e as amostras de quest passam nos testes.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — `feat/ui-html` criado de `feat/ui-revisao` (`b88e07c`). A vaga não tem Library e a RAM livre ficou entre 1 e 5 GB o dia todo, então o Editor não foi aberto. Para compilar sem ele: `dotnet build` do `Assets/L2Web/Scripts` contra as DLLs do Unity e da Library da vaga `ui` (só leitura), com 0 erros, e NUnit em .NET 9 para o parser e o layout.
- 2026-11-04 — inventário do corpus do aCis (3751 arquivos: tags, atributos, texturas); amostras em `Tests/Data/html`.
- 2026-11-04 — layout próprio no lugar dos LayoutGroups do uGUI; botão com `icon.*` (o defeito do buffer); `bgcolor` (`284bf86`). Largura do viewer em cada janela (`48ed30a`).
- 2026-11-04 — TutorialViewerWnd do xdat e eventos do 0xa0/0xa3 (`4d735d9`, `4ee8e04`); pedido 0042 (App.cs).
- 2026-11-04 — `Docs/tools/copy_html_textures.py` e pedido 0043 (sek e Default no shared) (`dd93575`); conta `l2webtest6` em `Docs/contas_teste.md` (`2c95a76`).
- 2026-11-04 — REA do NCHtmlViewer (relatório nas notas da sessão, `0055-rea-nchtmlviewer.md`) e reescrita do parser, do layout, das texturas e das ações pelo original (`98b3d0f`); pedido 0047 (net).
- 2026-11-04 — `Docs/html_suporte.md` com a tabela de tags e atributos, evidência e estado (`d96d606`).
- 2026-11-04 — bloqueada: `run_tests.sh` e o ao vivo precisam do Unity. Na ui4, isso é a primeira importação (~8 GB) com 2 GB livres. Pedi à coordenadora para pôr na fila da sessão de testes.
- 2026-11-04 — 0055-1 (sessão de testes, `d96d606`): suíte 772/772 (a base `b88e07c` dá 750/750). Ao vivo, o buffer mostra os ícones e o board tem os fundos; mas o sublinhado dos links do gatekeeper ficou mais largo que o texto, e a aba Region não muda (o aCis local só trata `bbs_*`).
- 2026-11-04 — o sublinhado e a medida passam a usar a escala do Canvas (`feb17cf`). Capturas em `Docs/evidencias/html/` e K34 no `Docs/validacao.md` (`86bc02a`).
- 2026-11-04 — 0055-2 (`feb17cf`): o sublinhado ficou certo, mas as descrições do buffer passaram a quebrar (dpi 120, escala 1,25). A largura natural da célula passa a usar a mesma soma de pedaços da quebra, com teste de regressão (`9d9f8e6`).
- 2026-11-04 — 0055-3 (`9d9f8e6`): suíte 773/773; buffer com uma linha por descrição e os sublinhados do tamanho do texto. Capturas finais (`c3a2cc2`). Pronta p/ merge.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
- **Causa do buffer sem ícones [O]:** os botões do aCis usam `fore="icon.skill1040" back="icon.skill0000"` (`buffer/Sub/*.htm`). O `L2Html` só procurava textura no `textures.json`, onde os `icon.*` não estão (eles ficam em `cache/icons`), e caía no `btn1` genérico. Corrigido em `L2Html.TexUrl`/`ButtonSkin`.
- **Board "sem conteúdo" [O]:** a correção do HtmlViewer escondido fora da 7ª aba (`29f1a2f`, #0047) não está no `main`. Esta tarefa nasce dela. O layout novo também resolve as células centralizadas por engano e os `bgcolor` das tabelas aninhadas.
- **Layout pelo original [O]** (detalhes e linhas do `nwindow.c` em `Docs/html_suporte.md`):
  - só o texto corre na linha; controles, imagens, tabelas e `br` ficam cada um na sua linha;
  - linha de texto = 'A' + 6; `br` = 9;
  - tabela com padding 1 e spacing 2; colunas pelo conteúdo e escaladas na proporção; célula − 6; valign meio; `bgcolor` só na tabela;
  - `td` sem `align` cancela o `<center>`;
  - CR/LF somem; `LEVEL` = 0xFFFFCC00; entidades com caixa e nomes `&$N;`/`&@N;`/`&#N;`;
  - texturas 1:1 sem esticar;
  - `msg` só no `<a>`; bypass em tokens com o `GetData` de 16 bytes.
- **[V]** A altura do 'A' da SmallFont-r ficou em 13 px (linha de 19). A fonte do porte continua a embutida do Unity em 11 px. Precisa de captura do original na mesma resolução.
- **[I]** Combobox ocupa 21 + 6 na linha, como o botão.
- **Decisão:** textura que falta no botão = `Default.BlackTexture` (como o original), ou preto sólido enquanto o pedido 0043 não põe o `Default.*` no shared. Os `sek.cbui*` ficam pretos até o 0043; o cliente de referência tem o `sek.utx`.
- **Decisão:** os pacotes do tutorial (0x7b/0x7c) ficam na `TutorialViewerView` até a net atender o pedido 0047, como a #0047 fez com a petição.
- **Arquivos compartilhados tocados:** nenhum (`App.cs` vai pelo pedido 0042). Fora do HTML, foram tocados `UI/GameUi.cs` (cria a `TutorialViewerView`), `UI/GameUi.Windows.cs` (`HtmlAct`: confirmação do `msg`, `cmd`, systemmsg), `UI/PacketEvents.cs` (eventos do tutorial), `UI/HelpHtmlView.cs`, `UI/LobbyServerScreen.cs`, `UI/PetitionView.cs` (largura do viewer e `<a link>`), `UI/BoardView.cs`, `UI/NpcHtmlWnd.cs` e os testes `NpcHtmlWndTests`/`SystemMenuTests` (API do botão e do sublinhado).

## Entrega

- **Commits** (`feat/ui-html`, de `feat/ui-revisao` `b88e07c`): `284bf86`, `48ed30a`, `4d735d9`, `dd93575`, `2c95a76`, `4ee8e04`, `98b3d0f`, `d96d606`, `d6718cf`, `feb17cf`, `86bc02a`, `9d9f8e6`, `c3a2cc2`. O merge precisa juntar a tabela do `Docs/contas_teste.md` com as das vagas ui2, ui3 e net.
- **Testes** (sessão de testes, `testes\0055-1..3\`):
  - suíte inteira 773/773 em `9d9f8e6`; a base `b88e07c` dá 750/750;
  - `L2HtmlTests` 26/26, entre eles o corpus do aCis (3751 HTMLs sem tag ou atributo desconhecido); `NpcHtmlWndTests` 3/3; `SystemMenuTests` 11/11;
  - ao vivo no aCis local (1024×768, escala 1,25, `l2webtest6`): buffer, gatekeeper, board Top/Region e quest, antes e depois, em `Docs/evidencias/html/`; 0 erros no console.
- **Falta / fora do escopo:**
  - [V] a altura do 'A' (13) e a fonte, sem captura do original;
  - barra de rolagem do HtmlCtrl;
  - `textani`;
  - limite do edit pela largura;
  - nomes de castelo `&%N;`;
  - partes 1..4 e 1001/1002 do BBS e o `RequestBBSWrite` (pedido 0034);
  - deslocamento do clip do BBS;
  - a janela do board passa da borda direita em 1024×768: é a posição do BoardWnd, não o HTML, e já acontecia antes;
  - quest de verdade ao vivo (nenhum NPC por perto tinha quest para um personagem novo).
  - Pedidos abertos: 0042 (App.cs: o tutorial só abre com ele), 0043 (sek e Default no shared; até lá, os botões `sek.cbui*` do admin ficam pretos) e 0047 (net).

## Pedidos

- 0042 (coordenadora): `App.cs` despacha o 0xa0 TutorialShowHtml e o 0xa3 TutorialCloseHtml.
- 0043 (coordenadora): rodar `Docs/tools/copy_html_textures.py` (sek e Default para o shared).
- 0047 (net): `UiPackets.RequestTutorialLinkHtml` 0x7b e `RequestTutorialPassCmdToServer` 0x7c.
- Já existente: 0034 (net), `RequestBBSWrite`, de que o `write` do board depende.
