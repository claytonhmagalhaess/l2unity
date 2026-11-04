# #0037 — Quests: `QuestTreeWnd` e `QuestListWnd` (T13)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-quests` |
| Estado | bloqueada |
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

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
