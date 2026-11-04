# #0047 — Revisão de toda a interface já implementada

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-revisao` (nasce de `feat/ui-grupo-uniao-duelo`, fim da cadeia #0026–#0045) |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` (UI em `01`–`07`, `89`, `90`, `91`, `96`, `98`) |
| Sessão | ui: revisão da interface |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou o cliente no aCis local e encontrou coisas que já estavam marcadas como feitas e não funcionam como no Interlude. Exemplos:
- a janela de Options;
- o Community Board;
- a animação em cima do slot da barra de atalhos quando uma skill é usada ou o soulshot automático está ligado;
- os itens do System Menu (Community, Macro, Help, Petition, Options, Restart, Exit Game).

Esta tarefa revisa tudo o que já existe na UI do `l2unity` (o `main` e a cadeia #0026–#0045), compara com o original e corrige as divergências.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] `Docs/revisao_ui.md`: uma linha por janela e por elemento da HUD que o `l2unity` já tem. Cada linha registra:
  - o que o original faz (layout do xdat, comportamento do `Interface.u` e da `client_spec`, interações do `02_interacoes.md`);
  - o que o `l2unity` faz, conferido no jogo com o aCis local;
  - a divergência, se houver;
  - o estado: igual, corrigido, pedido ou fora do escopo.
- [x] System Menu: cada item abre a janela ou faz a ação do original, sem botão morto:
  - Community: abre o Community Board (`RequestShowBoard`, `ShowBoard`);
  - Macro, Help, Petition e Options abrem as janelas correspondentes;
  - Restart e Exit Game pedem confirmação e fazem a ação.
- [x] Options: abas, controles e valores iguais ao original, gravados e relidos em `L2Options`, e cada opção com efeito no jogo ou marcada como fora do escopo, com o motivo.
- [x] Community Board: abre pelo System Menu e pela tecla do original. Os links e botões do HTML do servidor (`bypass`, voltar, páginas) funcionam com o aCis.
- [x] Barra de atalhos, igual ao original:
  - a animação sobre o slot quando o soulshot ou spiritshot automático está ligado;
  - a animação de uso e o tempo de recarga ao usar uma skill ou um item;
  - o estado das skills de liga e desliga.

  Cada uma leva a textura e o handler do original como evidência.
- [x] Todas as outras divergências do `revisao_ui.md` são corrigidas nesta tarefa ou registradas: o que depende de pacote vira pedido para a net, e o que depende de `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [x] Um commit por correção, com a evidência na mensagem, e testes EditMode para a lógica corrigida. `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-grupo-uniao-duelo`.
- [x] Capturas antes e depois em `Docs/evidencias/revisao/`, tiradas no aCis local.
- [x] Linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — Branch `feat/ui-revisao` sobre `feat/ui-grupo-uniao-duelo`. Capturas de antes no aCis local (HUD, Options, Board, barra com o soulshot automático). O usuário fechou o Editor durante a tarefa; testes em batchmode desde então.
- 2026-11-04 — Barra de atalhos: ToggleEffect, varredura de recarga, CooltimeEnd e menu_outline (`d2dc954`). Pedido 0033 (assets no shared), atendido pela coordenadora (`bcbe1cd`).
- 2026-11-04 — TextBox do xdat com o texto no topo + offsetY; corrige os rótulos da Options e de todas as janelas (`ad57962`).
- 2026-11-04 — System Menu sem botão morto; BoardWnd, HelpHtmlWnd e UserPetitionWnd do xdat (`eba79cd`).
- 2026-11-04 — Comparação estática das ~60 janelas restantes em três grupos (HUD, personagem, comércio/grupo + janelas ausentes).
- 2026-11-04 — Correções do levantamento: MainWnd, gaveta do clã, MagicSkillWnd, ActionWnd (`45ecc7a`); HUD e chat (`0f4f02f`); DetailStatusWnd, InventoryWnd, sm797 (`d6ec922`); duelo, sala e canal de comando, RefineryWnd (`c4f9742`).
- 2026-11-04 — `Docs/revisao_ui.md`, K33 na `validacao.md` e capturas (`1c40569`); suíte 745/745 (`9ae7531`). Pedidos 0034 (net) e 0035 (coordenadora).
- 2026-11-04 — Conferência ao vivo no Play reaberto: capturas de depois; corrigidos o board vazio fora da 7ª aba (`29f1a2f`) e a largura e o sublinhado da Help (`d5c2c6b`); docs `b88e07c`. Estado: pronta p/ merge.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
- [O] `NCShortcutItemWnd::OnPaint` (nw:0x10047b40) desenha em (1,1) 33x33: ToggleEffect (m_pIconToggle, taxa +0x5e4 = 9,0, OnCreate nw:0x10047520) quando o item tem o automático (+0x1f68) ou a skill é de liga e desliga (NCItem +0x1f58) e está ligada. `IsToggleOn` (nw:0x10146830) procura o id na lista de buffs, e `IsToggleSkill` (nw:0x101b57d0) é `operate_type == 3`. Depois vem o `shortcut_recipeicon` (tipo 5), depois a recarga. **A mesma moldura marca o soulshot automático e a skill ligada** (responde a dúvida [N] da spec 05 §3.7/3.10).
- [O] Recarga: `cooltime0..359` (0x168 texturas, nw:0x10030930), um quadro por grau do tempo decorrido; depois `CooltimeEnd001..009` por 0,5 s (+0x28 = 0x3fe0000000000000; FUN_10030af0 até o fim + 0,5) e o som IFST_COOLTIME_END (FUN_1014ed50(9)).
- [O] Contorno do slot: `L2UI_CH3.Etc.menu_outline` / `menu_outline_down` (OnCreate nw:0x10047520). O porte usava `inventory_outline`.
- [O] `NCTextBox::PaintSingleLine` (nw:0x10051770) desenha a linha em y = 0 da caixa. [I] O texto fica no topo, descido pelo `offsetY`: as TextBox de 30 px do xdat usam offsetY 7/10, e os rótulos de 19 px ficam alinhados com os combos de 17 px três pixels acima (VideoTab, SystemMenuWnd txtBBS (51,43) contra btnBBS (13,29) 36x36).
- [I] B/Alt+B (`ShowBoardWindow`) dispara o `EV_ShowBBS Init=1`, como o btnBBS. A trava de página do BoardWnd sai em 3 s sem resposta (no original ela não tem prazo), para a tecla não ficar morta com o board desligado no servidor.
- [I] Chat da PartyMatchRoomWnd: `ProcessPartyMatchChatMessage` = Say2 tipo 14 (PARTYMATCH_ROOM). PartyMatchingBtn = `RequestPartyMatchConfig(1, -1, 1)`, como o `/partymatching`.
- [O] actionname-e.dat: a categoria 1 inclui Duel (58) e Withdraw (59); a ActionWnd agora lê as categorias do arquivo.
- [A validar] `RequestPetitionCancel` 0x80: a spec 95 lista `cS`, e o porte manda só o opcode (pedido 0034).

## Entrega

- **Commits** (`feat/ui-revisao`, sobre `feat/ui-grupo-uniao-duelo`):
  - `d2dc954` barra de atalhos: ToggleEffect, recarga, CooltimeEnd, menu_outline;
  - `ad57962` TextBox no topo + offsetY (rótulos da Options e de todas as janelas);
  - `eba79cd` System Menu sem botão morto; BoardWnd, HelpHtmlWnd, UserPetitionWnd;
  - `45ecc7a` MainWnd, gaveta do clã, MagicSkillWnd, ActionWnd;
  - `0f4f02f` HUD e chat (filtro por aba, Alt+J, PartyMatchingBtn, Restart, alvo do pet, buffs no Reset);
  - `d6ec922` DetailStatusWnd, InventoryWnd, sm797;
  - `c4f9742` duelo, chat da sala, convites de sala e de canal, RefineryWnd;
  - `29f1a2f` e `d5c2c6b` achados ao vivo: o board vazio fora da 7ª aba, e a largura e o sublinhado da Help;
  - docs: `1c40569`, `9ae7531`, `b88e07c` (`Docs/revisao_ui.md`, K33, capturas).
- **Testes:**
  - `run_tests.sh` (batchmode) em `9ae7531`: 745/745 (base `feat/ui-grupo-uniao-duelo`: 720/720), com os novos `ShortcutBarTests`, `SystemMenuTests` e `RevisaoUiTests`;
  - depois de `d5c2c6b`, EditMode no Editor aberto: 746/746. `ZoneTests.Tique_DoisESegundosEOitoParaOTitulo` falhou 1 de 4 rodadas no Editor aberto: é de tempo e não tem relação com a mudança. Vale rodar o `run_tests.sh` no merge.
- **Ao vivo** (aCis local, com o usuário jogando): capturas de antes e de depois em `Docs/evidencias/revisao/`.
  - ToggleEffect nos shots automáticos e a varredura de recarga na barra;
  - Options e System Menu;
  - BoardWnd, Help e Petition.

  `29f1a2f` e `d5c2c6b` foram conferidos pelo eval na mesma sessão. Depois disso o Play foi encerrado no Editor, então eles não foram vistos num Play novo.
- **Justificativas do Critério:**
  - Options: as opções sem efeito são setters de render que o porte não tem (Gamma, PC/NPC Limit, Texture Filter, GPU Animation, Shadows, Ground Detail, PC/NPC Range, Reflections, Shader, Weather; `Render/VideoOptions.cs:16-18`). A OptionWnd grava e relê todas.
  - Community Board: os bypass das abas e do HTML vão pelo RequestBypassToServer. Escrever no board (`action="write"` → RequestBBSwrite 0x22) é o pedido 0034.
  - Barra:
    - a recarga de skill vem do MagicSkillUse;
    - a do login (SkillCoolTime 0xC1) e a de itens dependem do pedido 0034;
    - a moldura da skill de liga e desliga tem regra e teste (operate_type 3 + buff), mas o personagem do teste não tinha skill desse tipo para ver ao vivo.
- **Falta / fora do escopo:**
  - pedidos 0034 (net) e 0035 (App.cs, com a parte de UI da troca para entrar junto);
  - divergências menores da UI em `Docs/revisao_ui.md` §6.2 (gaveta no `L2Wnd`, painéis da ClanDrawerWnd, InvenWeight, dica RecipeManufacture, `EV_ChatWndStatusChange`…), para uma próxima tarefa;
  - janelas que o porte não cria (§5);
  - modo de mistura do ToggleEffect a validar contra o original.

## Pedidos

- `concluidas/0033-ui-assets-skilltime-l2text.md` (coordenadora): **feito**.
- `pedidos/0034-ui-pacotes-revisao.md` (net): aberto.
- `pedidos/0035-ui-app-revisao.md` (coordenadora): aberto.
