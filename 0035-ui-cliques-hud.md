# #0035 — Cliques pequenos e divergências do HUD (T11)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-cliques-hud` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T11; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Cliques pequenos e divergências do HUD, com o comportamento do Interlude levantado na #0024 (T11 do 05 §2). Tamanho estimado: P.

Ordem: 3ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-tooltips` (#0027). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: StatusWnd → `RequestSelfTarget`; MagicSkillWnd com clique simples; MenuWnd com sysstrings e Map → minimapa; TargetStatusWnd sem os botões extras e com modo expandido.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes: `Action` sobre o próprio objectId [V].
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/cliques-hud/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-cliques-hud` criado de `feat/ui-tooltips` (e0adc57); estado `fazendo`.
- 2026-11-03 — StatusWnd, MagicSkillWnd, MenuWnd e TargetStatusWnd (`c72456c`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 482/482 (exit 0).
- 2026-11-03 — capturas offline, `cliques.log` com os pacotes e linha K15 do `Docs/validacao.md` (`61d8222`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] StatusWnd (`IL:StatusWnd.uc:47-56`): `OnLButtonDown` com X entre `nX + 13` e `nX + largura − 10` chama `RequestSelfTarget()`. A janela tem 176 de largura: faixa 14..165.
- [V] O pacote do `RequestSelfTarget` não foi lido no nativo (`UUIScript::execRequestSelfTarget`); a spec 01 (tabela de natives) o põe com o `Action`. O porte manda `Action` no próprio objectId pelo `Party.Action` do App (mesmo caminho do clique no grupo).
- [O] MagicSkillWnd (`IL:MagicSkillWnd.uc:45-54`): `OnClickItem` → `UseSkill`. Era duplo clique no porte; o Ctrl/Shift continua indo no pedido.
- [O] MenuWnd (`IL:MenuWnd.uc`): Map → `RequestOpenMinimap()` (0xcd, o servidor responde com o ShowMiniMap), não o radar. Dicas: `popupType=Text` com `popupValue` 434/195/925/193 no xdat; `NCWnd::OnPostPaint` (`nw:0x1005da50`) usa a sysstring quando `popupValue ≥ 0`. Ficou genérico no `L2Wnd` para todo botão com `popupType=Text` (o ChatWnd também perdeu as dicas inventadas do porte).
- [O] TargetStatusWnd: o original não tem os botões Party/Trocar/Amigo (02 §5 da #0024) — removidos. Botão de expandir da moldura: `NCFrameCtrl::CreateExpandBtn` cria `L2UI_CH3.TargetWnd.Target_InfoButton` (vfunc 0xc0 com 1, 6, 11, 13) e `OnExpandBtnClick` troca para `_Down`, muda a altura (`Frame.expandOrgHeight/expandExpHeight` = 46/76 no xdat) e chama `OnFrameExpandClick`. O script (`SetExpandMode`, `:464-487`) alterna BackTex/BackExpTex e, no modo expandido, mostra cla e aliança do jogador (`:300-379`).
- [I] Posição (1, 6) e tamanho 11×13 do botão lidos como x, y, w, h dos argumentos da vfunc 0xc0.
- Divergências: o nome do cla vem de `GameUi.ClanName`, que o `App.cs` ainda não liga (sai vazio); brasões e a árvore de propriedades do NPC (`UIDATA_NPC.GetNpcProperty`) não existem no porte. O botão de expandir ficou no `L2Wnd` e vale para toda janela com `Frame.expandbutton = 1` (a #0041 aproveita).

## Entrega

- **Commits:** `c72456c` (código e `HudClickTests`), `61d8222` (evidências e K15).
- **Testes:** `HudClickTests` (faixa da StatusWnd, dicas do MenuWnd pelo xdat, botão de expandir 46↔76 com `OnFrameExpand`); `sh Docs/tools/run_tests.sh` 482/482.
- **Falta / fora do escopo:** comparar com o original e testar ao vivo (aCis fora do ar); ligar `GameUi.ClanName` no `App.cs` (arquivo da coordenadora) quando houver cache de clãs; brasões e propriedades do NPC.

## Pedidos

Nenhum por enquanto.
