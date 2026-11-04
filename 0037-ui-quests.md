# #0037 — Quests: `QuestTreeWnd` e `QuestListWnd` (T13)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-quests` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T13; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Quests: `QuestTreeWnd` e `QuestListWnd`, com o comportamento do Interlude levantado na #0024 (T13 do 05 §2). Tamanho estimado: M.

Ordem: 15ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-pet-servo` (#0031). Depende de: T3.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: árvore por zona/nível, abandonar, tooltip `QuestList`/`QuestInfo`.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `QuestList` 0x80; C→S `RequestQuestList` 0x63, `RequestQuestAbort`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/quests/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestQuestAbort` não existe no `main` (o `QuestList` 0x80 só é lido em parte). Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-quests` criado de `feat/ui-pet-servo` (e1c588b).
- 2026-11-03 — `QuestData` (questname-e.dat), `QuestTreeScript`/`QuestListScript`, `QuestView`, dicas QuestList/QuestInfo, marcador no minimapa, `QuestTests` (`6e670ca`, `9ac94af`).
- 2026-11-03 — pedido 0030 para a vaga `net`: um `EV_QuestList` por nível do diário.
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 677/677 (exit 0).
- 2026-11-03 — capturas offline e linha K26 (`300a7b0`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `questname-e.dat`: d n; por registro d tag, d id, d nível, ASCF título/diário/descrição, índice compacto + d (itens), índice compacto + d (quantidades), f x/y/z do alvo, d mínimo, máximo e tipo, ASCF alvo, 3 d (0/1), d NPC inicial, f x/y/z do NPC, ASCF requisito e resumo, índice compacto + classes, índice compacto + itens exigidos, 4 d; 2050 registros e 13 bytes de rodapé.
- [O] Os offsets do `UUIDATA_QUEST::exec*` (`nw:0x10126*`) mapeiam: título +0xc, diário +0x18, alvo +0x50..58, mínimo +0x5c, máximo +0x60, tipo +0x64, nome do alvo +0x68, `IsMinimapOnly` +0x74 (o 1º d depois do alvo; 1 nas quests com área como alvo), NPC inicial +0x78 e posição +0x7c..84.
- [I] `IsShowableJournalQuest`/`IsShowableItemNumQuest` leem o `FL2QuestData` do Engine (+0x24 e +0x4c, `nw:0x10143630/0x101436e0`); usei os 2 d seguintes do registro, na mesma ordem.
- [O] `NConsoleWnd::AddQuestID` (`nw:0x1016ac70`): sem o bit 31, o valor do 0x80 é o cond, e a máscara vira os bits 0..cond−1; cada bit ligado dá um `EV_QuestList` (nível = bit + 1) e só o último sai com `Completed = 0`. O `InterfaceEvents.QuestList` da #0046 manda um evento só (pedido 0030).
- [O] `QuestTreeWnd.uc` portado: `RequestQuestList` no OnShow; quest nova conta e entra no nó `root.<id>` com nome, ícones do tipo (0 = 4/1, 1 = 4/2, 2 = 3/1, 3 = 3/2), faixa de nível (ss922, ss859, ss866) e espaço 7; diário `<nível>.<completo>` com nome, ícone do alvo, "Complete" (ss898, com ShowJournal) e espaço 5; descrição com cor 140 e os itens (moldura menu_outline 34, ícone 32, nome dourado, "(%s/N)", "(%s/ss858)" ou "(%s/N ss859)"; com o diário completo e ShowItemNum, ss898 no lugar do número); contador `(n/25)` no QuestListEnd; quantidades pelo `GetInventoryItemCount` no QuestListEnd e no `EV_InventoryAddItem/UpdateItem` (só o classID do evento).
- [O] Abort: sem quest aberta, Notice sm1201 (id 1, nada no OK); com, Warning sm182 (id 0) e no OK `RequestQuestAbort` (0x64), `SetQuestOff` e o nó some. `EV_QuestSetCurrentID` abre a quest e o último diário e recalcula o alvo.
- [O] UpdateTargetInfo: checkbox desmarcado ou sem quest aberta = desliga; o último diário da quest aberta dá quest e nível pelo nome; o script lê o "completo" num `case 2` repetido, então ele fica sempre 0; `IsMinimapOnly` = só minimapa, senão radar e seta.
- [I] `multiExpand = 0` no xdat: abrir um nó fecha os irmãos.
- [I] `SetQuestTargetInfo` grava o alvo (o NCDataManager +0x5110) e liga ou desliga o `SetShowQuest` do minimapa (`EV_MinimapShowQuest`/`HideQuest`); `DrawQuestTarget` desenha MapIcon_Mark 32 × 32 em (px, py − 20) com o nome do alvo e o da quest na dica (spec 03 §5.2). Radar e seta 3D não existem no porte.
- [O] QuestListWnd: `EV_QuestInfoStart` limpa e mostra; `EV_QuestInfo` vira a linha (ícone _1 nos tipos 0/2, _2 nos 1/3); Location marca o NPC inicial do nível 1 com radar e seta. A dica QuestInfo (largura mínima = a maior entre as linhas 1200 e 1201, no mínimo 144, mais 30) sai sempre com ss861, porque o script não preenche o `nReserved1` da coluna 3.
- [I] Desenho do TreeCtrl e do ListCtrl (os nativos não foram lidos): deslocamentos somados por nível, itens em fila com quebra, fundo TextSelect no nó aberto, linhas de 18 px na lista.
- O aCis não manda `ExShowQuestInfo` (FE:19); o `ExShowQuestMark` (FE:1a, `QuestBtnWnd`) não é tratado no router e fica fora desta tarefa.

## Entrega

- **Commits:** `6e670ca` (código e `QuestTests`), `9ac94af` (quebra da descrição), `300a7b0` (evidências e K26).
- **Testes:** `QuestTests` (árvore e contador, itens pelo classID, abrir exclusivo e alvo, Abort, SetCurrentID, lista e Location, dicas, questname-e.dat do cliente); `sh Docs/tools/run_tests.sh` 677/677.
- **Falta / fora do escopo:** pedido 0030 (net); `ExShowQuestMark` para o QuestBtnWnd (novo pedido, se a coordenadora quiser); radar e seta 3D do alvo; teste ao vivo no aCis.

## Pedidos

- `pedidos/0030-ui-questlist-niveis.md` (net): um `EV_QuestList` por nível do diário.
