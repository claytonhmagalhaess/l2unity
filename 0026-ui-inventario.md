# #0026 — Inventário: clique direito, arrastar (reordenar, desequipar, equipar), lixeira, largar no mundo, cristalizar, confirmações, Alt = pilha (T2)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-inventario` |
| Estado | fazendo |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T2; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Inventário: clique direito, arrastar (reordenar, desequipar, equipar), lixeira, largar no mundo, cristalizar, confirmações, Alt = pilha, com o comportamento do Interlude levantado na #0024 (T2 do 05 §2). Tamanho estimado: M.

Ordem: 7ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-mensagens-tela` (#0040). Depende de: T1.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: os ramos de `IL:InventoryWnd.uc:184-383` e `:1100-1140` reproduzidos; Alt no início do arrasto (`nw:0x1002eb00`).
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (C→S `RequestUnEquipItem` 0x11, `RequestDropItem` 0x12, `RequestDestroyItem` 0x59, `RequestCrystallizeItem` 0x72; S→C `InventoryUpdate`, `DropItem`, `SystemMessage`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/inventario/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestUnEquipItem` 0x11, `RequestDestroyItem` 0x59 e `RequestCrystallizeItem` 0x72 não existem no `main` (o `RequestDropItem` já existe). Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-inventario` criado de `feat/ui-barra-atalhos` (ef46695); estado `fazendo`.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
