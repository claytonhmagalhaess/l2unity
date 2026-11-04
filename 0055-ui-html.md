# #0055 — HTML do servidor renderizado como no original

| Campo | Valor |
|---|---|
| Vaga | ui4 (vaga nova, `worktrees\ui4`) |
| Branch | `feat/ui-html` (nasce de `feat/ui-revisao`, #0047) |
| Estado | bloqueada (suíte e ao vivo esperando RAM ou a sessão de testes) |
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

- [ ] Levantamento, com evidência (`NCHtmlViewer` e o parser no NWindow do Tryskell ou na REA, a spec), de cada tag e atributo que o original aceita, e de como desenha:
  - `html`, `body`, `title`, `br`, `p`, `center`, `font` (color), `a` (action bypass/link/url);
  - `button` (value, action, width, height, back, fore), `img` (src com `icon.*`/`L2UI*`, width, height), `table`/`tr`/`td` (width, height, align, valign, bgcolor, background, cellpadding, cellspacing, border);
  - `edit`, `multiedit`, `combobox` e as variáveis `$`;
  - as entidades, as cores por nome e #hex e as quebras de linha.

  A tabela fica em `Docs/html_suporte.md`, com o estado de cada item no porte.
- [ ] O tamanho e a rolagem do texto, a roda do mouse e o clique nos links e botões são iguais ao original.
- [ ] Todos os HTMLs do `data\html` do aCis (somente leitura em `C:\Workspace-java\aCis_gameserver`) passam pelo parser do porte sem erro. Um teste percorre a pasta e falha em tag ou atributo não suportado. O que o original ignora fica registrado como ignorado.
- [ ] Os ícones (`img src="icon.skill0000"` e outros pacotes de textura), as texturas de fundo e os botões com `back`/`fore` aparecem. O que faltar no `shared` vira pedido de exportação para a coordenadora, com o comando exato.
- [ ] O Community Board mostra o conteúdo de todas as abas como no original (`ShowBoard` com as várias partes do HTML).
- [ ] A janela do buffer da captura do usuário (lista de buffs com ícone, nome e descrição) fica igual ao original.
- [ ] O que for de `Scripts\Net\` vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Testes EditMode (parser e layout de amostras: tabela com ícone, botão com textura, fontes e cores, board). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/html/`, tiradas no aCis local (buffer, gatekeeper, board, uma quest), e uma linha em `Docs/validacao.md`.

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

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- 0042 (coordenadora): `App.cs` despacha o 0xa0 TutorialShowHtml e o 0xa3 TutorialCloseHtml.
- 0043 (coordenadora): rodar `Docs/tools/copy_html_textures.py` (sek e Default para o shared).
- 0047 (net): `UiPackets.RequestTutorialLinkHtml` 0x7b e `RequestTutorialPassCmdToServer` 0x7c.
- Já existente: 0034 (net), `RequestBBSWrite`, de que o `write` do board depende.
