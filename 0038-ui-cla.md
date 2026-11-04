# #0038 — Clã: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd` (T14)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-cla` |
| Estado | bloqueada |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T14; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Clã: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd`, com o comportamento do Interlude levantado na #0024 (T14 do 05 §2). Tamanho estimado: G.

Ordem: 16ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-quests` (#0037). Depende de: T1.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: lista de membros, informações e autoridade, aprendiz.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `PledgeShowMemberListAll` 0x53 e os `Pledge*`; C→S `RequestPledgeMemberList` 0x3c, `RequestClanMemberInfo`…) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/cla/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestClanMemberInfo` e os `Pledge*` da lista não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
