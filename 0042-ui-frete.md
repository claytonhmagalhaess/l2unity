# #0042 — Frete: `SelectDeliverWnd` + `DeliverWnd` (T18)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-frete` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T18; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Frete: `SelectDeliverWnd` + `DeliverWnd`, com o comportamento do Interlude levantado na #0024 (T18 do 05 §2). Tamanho estimado: P.

Ordem: 13ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-loja-privada` (#0036). Depende de: T5.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: duas listas com Alt.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `PackageToList` 0xc2, `PackageSendableList` 0xc3; C→S `RequestPackageSendableItemList` 0x9e, `RequestPackageSend` 0x9f) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/frete/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `PackageToList` 0xc2 / `PackageSendableList` 0xc3 e C→S `RequestPackageSendableItemList` 0x9e / `RequestPackageSend` 0x9f não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-frete` criado de `feat/ui-loja-privada` (b353182).
- 2026-11-03 — `DeliverScript`, `DeliverView` e `DeliverTests` (`7951487`, `.meta` em `8c5c580`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 650/650 (exit 0).
- 2026-11-03 — captura offline e linha K24 (`78caef4`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `IL:SelectDeliverWnd.uc:9-60`: `EV_SelectDeliverClear` limpa o combo e mostra; `EV_SelectDeliverAddName` (`name`, `id`) = `AddStringWithReserved`; OK com `GetSelectedNum >= 0` manda `RequestPackageSendableItemList(reserved)` e fecha (sem escolha só fecha).
- [A validar] O script não chama `SetSelectedNum`, então o combo começa sem escolha no porte; não se sabe se o `NCComboBox` nativo seleciona o primeiro no `AddString`.
- [O] `IL:DeliverWnd.uc`: as listas juntam pelo `FindItem(info.ID)` (serverID, diferente do armazém); empilhável com mais de 1 e sem Alt pede o número (NumberPad sm72, DefaultOK); Alt (`AllItemCount`) move tudo; não empilhável desce com `ItemNum = 1` e `bShowCount = false`; ao voltar sem a pilha em cima entra uma nova; `HandleDialogOK` só move com num > 0 e não limita ao que tem; custo = itens embaixo × 1000 (`AdjustPrice`); OK manda `RequestPackageSend(targetID, dbID = Reserved, count)`; Cancel e Esc (`OnReceivedCloseUI`) limpam e fecham; `OnClickItem` na TopList fecha o NumberPad desta janela.
- [I] Ao abrir, o inventário fecha como na spec 07 §5 (Interlude `DeliverWnd.uc:270-273`); no P166 essa linha está comentada e o `onShow` chama `ItemRelationWindowHide`.
- Os eventos vêm do `InterfaceRouter` (#0046): `PackageToList` 0xc2 e `PackageSendableList` 0xc3; os pedidos são do `StorePackets`.
- Divergência: barra de peso (`InvenWeight`) não desenhada.

## Entrega

- **Commits:** `7951487` (código e `DeliverTests`), `8c5c580` (`.meta`), `78caef4` (evidências e K24).
- **Testes:** `DeliverTests` (destinatário só com escolha; envio com número, Alt, custo e pedido; volta com número e não empilhável; eventos do router); `sh Docs/tools/run_tests.sh` 650/650.
- **Falta / fora do escopo:** barra de peso; teste ao vivo (frete no aCis); confirmar a seleção inicial do combo.

## Pedidos

Nenhum por enquanto.
