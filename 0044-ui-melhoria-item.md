# #0044 — Melhoria de item: `ItemEnchantWnd`, `RefineryWnd`, `UnrefineryWnd` (T20)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-melhoria-item` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T20; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Melhoria de item: `ItemEnchantWnd`, `RefineryWnd`, `UnrefineryWnd`, com o comportamento do Interlude levantado na #0024 (T20 do 05 §2). Tamanho estimado: M.

Ordem: 19ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-fabricacao` (#0043). Depende de: T2 (arrastar do inventário).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: enchant com `ChooseInventoryItem`/`EnchantResult`; augment com as 3 caixas de soltar na ordem.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `ChooseInventoryItem` 0x6f, `EnchantResult` 0x81, `ExPutItemResultForVariationMake`…; C→S `RequestEnchantItem` 0x58, `RequestConfirmTargetItem`, `RequestRefine`, `RequestRefineCancel`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/melhoria-item/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestEnchantItem` 0x58, `RequestConfirmTargetItem`, `RequestRefineCancel` e S→C `ChooseInventoryItem`/`EnchantResult` não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — nota da vaga net: o `EV_EnchantItemList` (itens que o pergaminho aceita) não vem de pacote; o nativo monta a partir do inventário e a janela filtra o ItemList pelo `Interface.EnchantScroll` (grupo `071f3c2` no `feat/net-pacotes-interface`, fora do main).
- 2026-11-04 — branch `feat/ui-melhoria-item` criado de `feat/ui-fabricacao` (1efb192).
- 2026-11-04 — `EnchantScript`, `RefineryScript`, `UnrefineryScript`, `ItemUpgradeView`, `GameUi.InventoryDropTargets`, `ItemUpgradeTests` (`218eb21`, `dbfed12`).
- 2026-11-04 — `sh Docs/tools/run_tests.sh`: 711/711 (exit 0).
- 2026-11-04 — capturas offline e linha K31 (`c7b4ffd`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] ItemEnchantWnd: `EV_EnchantShow` limpa e põe o título "ss1220(nome do pergaminho)"; OK = `RequestEnchantItem` do escolhido (ServerID > 0); Cancel = `RequestEnchantItem(-1)` e fecha; `EV_EnchantHide` e `EV_EnchantResult` fecham e limpam.
- [I] `EV_EnchantItemList`: como a nota da vaga net, não vem de pacote; a janela o monta do inventário do `GameUi` ao abrir. O filtro é pelo nome do pergaminho ("Weapon" = Type2 0, "Armor" = Type2 1/2, e o grau D..S = CrystalType 1..5), porque a regra nativa não foi lida.
- [O] RefineryWnd: `EV_ShowRefineryInteface` só sem o 1º passo feito; `ResetReady` = sm1957, só a 1ª caixa; a caixa 1 aceita antes de tudo, a 2 depois do alvo, a 3 depois da life stone; cada `EV_RefineryConfirm*Result` com Result 1 e o mesmo ServerID avança (sm1958; sm1959 com o nome e a quantidade da gemstone; sm1984 e libera o Augment); a gemstone vai com Alt (AllItemCount) ou pede o número (NumberPad sm72); Augment desliga os botões e, no fim do progresso de 1900 ms (`OnProgressTimeUp`), `RequestRefine(alvo, life stone, gemstone, quantidade)`; `EV_RefineryRefineResult` 1 põe o alvo com as opções na caixa de resultado, 0 volta tudo.
- [O] UnrefineryWnd: sm1963 e "0 ss469"; soltar (só antes de remover) = `RequestConfirmCancelItem`; o resultado 1 mostra a taxa (`ParseInt64`) na cor do número e, sem adena, desliga o botão com sm279; Remove sem adena = OK sm279, com adena = progresso de 2000 ms e `RequestRefineCancel`; `EV_RefineryRefineCancelResult` 1 = sm1965 com o nome, 0 = fecha.
- O `GameUi` ganhou `InventoryDropTargets`: o soltar de um item do inventário passa pelas janelas que o aceitam (as duas caixas do augment), como o PetWnd.
- Divergências: sem as animações de refino, os destaques das caixas e os sons; [I] o progresso conta por quadro.

## Entrega

- **Commits:** `218eb21` (código e `ItemUpgradeTests`), `dbfed12` (fundo e animações escondidos), `c7b4ffd` (evidências e K31).
- **Testes:** `ItemUpgradeTests` (o que o pergaminho aceita; título e OK; augment nas 3 caixas e o resultado; confirmação errada não avança; remover augment com taxa e adena); `sh Docs/tools/run_tests.sh` 711/711.
- **Falta / fora do escopo:** regra nativa do filtro do pergaminho; animações; teste ao vivo no aCis.

## Pedidos

Nenhum por enquanto.
