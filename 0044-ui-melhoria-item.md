# #0044 — Melhoria de item: `ItemEnchantWnd`, `RefineryWnd`, `UnrefineryWnd` (T20)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-melhoria-item` |
| Estado | bloqueada |
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

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
