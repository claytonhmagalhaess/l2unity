# #0030 — `WarehouseWnd` (privado e de clã) (T6)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-armazem` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T6; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

`WarehouseWnd` (privado e de clã), com o comportamento do Interlude levantado na #0024 (T6 do 05 §2). Tamanho estimado: M.

Ordem: 11ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-loja-troca` (#0029). Depende de: T1, T5 (reaproveita as listas).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: depositar e retirar com duas listas, quantidade e Alt; limite de slots.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `WarehouseDepositList` 0x41, `WarehouseWithdrawList` 0x42; C→S `SendWarehouseDepositList` 0x31, `SendWarehouseWithdrawList` 0x32) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/armazem/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `WarehouseDepositList` 0x41 / `WarehouseWithdrawList` 0x42 e C→S `SendWarehouseDepositList` 0x31 / `SendWarehouseWithdrawList` 0x32 não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-armazem` criado de `feat/ui-loja-troca` (13ead7a).
- 2026-11-03 — `WarehouseScript`, `WarehouseView` e `ListWnd.FromParam` (`1348fcc`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 635/635 (exit 0).
- 2026-11-03 — captura offline e linha K22 (`088c20a`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `IL:WarehouseWnd.uc` portado: duas listas que juntam pelo classID nos dois sentidos; empilhável com mais de 1 e sem Alt pede o número (NumberPad sm72 com DefaultOK); taxa `KEEPING_PRICE` 30 por item embaixo no depósito; contador `(n/max)` com `m_maxPrivateCount` (do `EV_SetMaxCount warehousePrivate`) no privado e 200 nos outros; textos 138/132 (depósito) e 132/133 (retirada); títulos 1216/1217/1218/131 pela categoria; OK manda o dbID (`reserved`) e a quantidade.
- [O] `OnClickItem` na TopList fecha o NumberPad desta janela.
- O `HandleDialogOK` do script não limita o número ao que a lista tem (diferente da venda da loja): portado igual.
- Os itens chegam pelo `EV_WarehouseAddItem` do `InterfaceRouter` (#0046); o `reserved` do ItemInfo é o dbID.
- Divergências: barra de peso (`InvenWeight`) não desenhada; [I] empilhável = itemType ≥ 3.

## Entrega

- **Commits:** `1348fcc` (código e `WarehouseTests`), `088c20a` (evidências e K22).
- **Testes:** `WarehouseTests` (depósito com taxa, contador e pedido; retirada; ItemInfo do evento); `sh Docs/tools/run_tests.sh` 635/635.
- **Falta / fora do escopo:** barra de peso; teste ao vivo (depositar e retirar no aCis).

## Pedidos

Nenhum por enquanto.
