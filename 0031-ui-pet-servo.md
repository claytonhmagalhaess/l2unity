# #0031 — Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd` (T7)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-pet-servo` |
| Estado | aberta |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T7; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd`, com o comportamento do Interlude levantado na #0024 (T7 do 05 §2). Tamanho estimado: G.

Ordem: 14ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-frete` (#0042). Depende de: T1.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: barras e clique de seleção; inventário do pet com uso e arrastar ↔ inventário; ações do pet e do servo; ações de pet arrastáveis para a barra.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `PetStatusShow` 0xb0, `PetInfo` 0xb1, `PetItemList` 0xb2, `PetInventoryUpdate` 0xb3, `PetStatusUpdate`; C→S `RequestPetUseItem` 0x8a, `RequestGiveItemToPet` 0x8b, `RequestGetItemFromPet` 0x8c, `RequestActionUse`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/pet-servo/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
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
