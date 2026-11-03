# #0030 — `WarehouseWnd` (privado e de clã) (T6)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-armazem` |
| Estado | aberta |
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

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
