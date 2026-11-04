# #0036 — Loja privada: montar venda e compra (T12)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-loja-privada` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T12; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Loja privada: montar venda e compra, com o comportamento do Interlude levantado na #0024 (T12 do 05 §2). Tamanho estimado: M.

Ordem: 12ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-armazem` (#0030). Depende de: T5.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: `PrivateShopWnd` nos modos `PT_Sell`/`PT_BuyList`; título da loja.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `PrivateStoreManageListSell` 0x9a, `PrivateStoreManageListBuy` 0xb7; C→S `RequestPrivateStoreManageSell` 0x73, `SetPrivateStoreListSell` 0x74, `RequestPrivateStoreManageBuy` 0x90, `SetPrivateStoreListBuy` 0x91, `SetPrivateStoreMsg*`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/loja-privada/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `PrivateStoreManageListSell` 0x9a / `PrivateStoreManageListBuy` 0xb7 e os C→S `SetPrivateStore*`/`RequestPrivateStoreManage*` não existem no `main` (e o item 1 do pedido 0025). Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — adiantado o item 1 do pedido 0025: `PacketEvents.PrivateStore` (0x9b) passa a mandar `type=buy` (PT_Buy), no branch `feat/ui-barra-atalhos` (`86c006d`, `PrivateStoreEventTests`; suíte 523/523). Continua bloqueada pelos pacotes de montar a loja.
- 2026-11-03 — branch `feat/ui-loja-privada` criado de `feat/ui-armazem` (088c20a).
- 2026-11-03 — `PrivateShopScript` e `PrivateShopView` (`4f50ac6`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 646/646 (exit 0).
- 2026-11-03 — captura offline e linha K23 (`b353182`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `IL:PrivateShopWnd.uc` portado nos 4 modos: o PT_Buy e a loja própria de venda andam pelo serverID; o PT_Sell e a própria de compra, pelo classID. Na loja própria, mover pede o preço (NumberPad sm322 venda / sm585 compra, `editType=number`, sem All); preço ≥ 2.000.000.000 = sm1369; fora de `DefaultPrice/5..×5` (`IsProperPrice`) confirma sm569; depois a quantidade (sm72 venda / sm570 compra) ou vai direto (Alt = tudo; não empilhável = 1). Na loja de compra própria, um item não empilhável vira uma linha por unidade, e tirar de baixo não volta para cima.
- [O] PT_Buy em pacote (`bulk`) move a lista inteira; PT_Sell com `ItemNum` 0 está desabilitado; vender mais do que a loja quer = sm1036. O OK do PT_Buy/PT_Sell confere os preços e, fora da faixa, pede a confirmação sm569 (`DIALOG_CONFIRM_PRICE_FINAL` repete o OK sem a conferência).
- [O] `MessageButton`: OKCancelInput sm334 com até 29 caracteres e o título atual. `StopButton` e o `OnSendPacketWhenHiding` desmontam a loja própria (`RequestPrivateStoreQuitSell/Buy`).
- [I] O título editado vai ao servidor na hora (`SetPrivateStoreMsgSell/Buy`); o `SetPrivateShopMessage` do nativo não foi lido.
- Item 1 do pedido 0025: o 0x9b manda `type=buy` (`86c006d`); os itens 2–4 entraram na #0029.
- A janela genérica de loja do `SocialUi.StoreList` não abre mais: o 0x9b chega pelos eventos do `PacketEvents.PrivateStore` (`App.cs`).
- Divergência: barra de peso não desenhada.

## Entrega

- **Commits:** `86c006d` (type=buy no 0x9b), `4f50ac6` (código e `PrivateShopTests`), `b353182` (evidências e K23).
- **Testes:** `PrivateShopTests` (cadeia de preço, Alt, compra própria, pacote, venda limitada, faixa de preço, títulos), `PrivateStoreEventTests`; `sh Docs/tools/run_tests.sh` 646/646.
- **Falta / fora do escopo:** barra de peso; teste ao vivo (montar e usar as lojas no aCis).

## Pedidos

Nenhum por enquanto.
