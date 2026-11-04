# #0047 — Revisão de toda a interface já implementada

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-revisao` (nasce de `feat/ui-grupo-uniao-duelo`, fim da cadeia #0026–#0045) |
| Estado | fazendo |
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

- [ ] `Docs/revisao_ui.md`: uma linha por janela e por elemento da HUD que o `l2unity` já tem. Cada linha registra:
  - o que o original faz (layout do xdat, comportamento do `Interface.u` e da `client_spec`, interações do `02_interacoes.md`);
  - o que o `l2unity` faz, conferido no jogo com o aCis local;
  - a divergência, se houver;
  - o estado: igual, corrigido, pedido ou fora do escopo.
- [ ] System Menu: cada item abre a janela ou faz a ação do original, sem botão morto:
  - Community: abre o Community Board (`RequestShowBoard`, `ShowBoard`);
  - Macro, Help, Petition e Options abrem as janelas correspondentes;
  - Restart e Exit Game pedem confirmação e fazem a ação.
- [ ] Options: abas, controles e valores iguais ao original, gravados e relidos em `L2Options`, e cada opção com efeito no jogo ou marcada como fora do escopo, com o motivo.
- [ ] Community Board: abre pelo System Menu e pela tecla do original. Os links e botões do HTML do servidor (`bypass`, voltar, páginas) funcionam com o aCis.
- [ ] Barra de atalhos, igual ao original:
  - a animação sobre o slot quando o soulshot ou spiritshot automático está ligado;
  - a animação de uso e o tempo de recarga ao usar uma skill ou um item;
  - o estado das skills de liga e desliga.

  Cada uma leva a textura e o handler do original como evidência.
- [ ] Todas as outras divergências do `revisao_ui.md` são corrigidas nesta tarefa ou registradas: o que depende de pacote vira pedido para a net, e o que depende de `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Um commit por correção, com a evidência na mensagem, e testes EditMode para a lógica corrigida. `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-grupo-uniao-duelo`.
- [ ] Capturas antes e depois em `Docs/evidencias/revisao/`, tiradas no aCis local.
- [ ] Linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — Branch `feat/ui-revisao` sobre `feat/ui-grupo-uniao-duelo`. Capturas de antes no aCis local (HUD, Options, Board, barra com o soulshot automático). O usuário fechou o Editor durante a tarefa; testes em batchmode desde então.
- 2026-11-04 — Barra de atalhos: ToggleEffect, varredura de recarga, CooltimeEnd e menu_outline (`d2dc954`). Pedido 0033 (assets no shared), atendido pela coordenadora (`bcbe1cd`).
- 2026-11-04 — TextBox do xdat com o texto no topo + offsetY; corrige os rótulos da Options e de todas as janelas (`ad57962`).
- 2026-11-04 — System Menu sem botão morto; BoardWnd, HelpHtmlWnd e UserPetitionWnd do xdat (`eba79cd`).
- 2026-11-04 — Comparação estática das ~60 janelas restantes em três grupos (HUD, personagem, comércio/grupo + janelas ausentes).
- 2026-11-04 — Correções do levantamento: MainWnd, gaveta do clã, MagicSkillWnd, ActionWnd (`45ecc7a`); HUD e chat (`0f4f02f`); DetailStatusWnd, InventoryWnd, sm797 (`d6ec922`); duelo, sala e canal de comando, RefineryWnd (`c4f9742`).
- 2026-11-04 — `Docs/revisao_ui.md`, K33 na `validacao.md` e capturas (`1c40569`); suíte 745/745 (`9ae7531`). Pedidos 0034 (net) e 0035 (coordenadora).

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

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- `pedidos/0033-ui-assets-skilltime-l2text.md` (coordenadora): **feito**.
- `pedidos/0034-ui-pacotes-revisao.md` (net): aberto.
- `pedidos/0035-ui-app-revisao.md` (coordenadora): aberto.
