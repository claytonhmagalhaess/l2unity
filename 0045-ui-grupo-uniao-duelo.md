# #0045 — Busca de grupo, união e duelo (T21)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-grupo-uniao-duelo` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T21; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Busca de grupo, união e duelo, com o comportamento do Interlude levantado na #0024 (T21 do 05 §2). Tamanho estimado: G.

Ordem: 20ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-melhoria-item` (#0044). Depende de: T1.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: `PartyMatch*`, `UnionWnd`/`UnionDetailWnd`, `DuelManager` (02 §3.5).
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (`RequestPartyMatchConfig`, `RequestJoinPartyRoom`… (spec 07 §10)) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/grupo-uniao-duelo/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestPartyMatchConfig`, `RequestJoinPartyRoom` e os S→C do party matching não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-04 — branch `feat/ui-grupo-uniao-duelo` criado de `feat/ui-melhoria-item` (c7b4ffd).
- 2026-11-04 — `PartyMatchScript` (salas, criar sala, sala, listas de espera, canal de comando, duelo), `PartyMatchView` das 8 janelas, `PartyMatchTests` (`a8898a3`).
- 2026-11-04 — pedido 0032 para a vaga `net`: `ExDuelAskStart` (FE:4b) e `RequestDuelAnswerStart` (D0:28).
- 2026-11-04 — `sh Docs/tools/run_tests.sh`: 720/720 (exit 0).
- 2026-11-04 — capturas offline e linha K32 (`a196004`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] PartyMatchWnd: os combos começam no item 1; `EV_PartyMatchStart` abre (ou, depois do X da sala, sai da espera e fecha tudo); `EV_PartyMatchList` = número, líder, título, região, "min-max" e "cur/max" (na ordem das colunas do script); Prev = página − 1 (no mínimo 1), Next = + 1, Refresh = página 1, todos `RequestPartyRoomList(página, local = reserved do combo, nível = índice do combo)`; duplo clique = `RequestJoinPartyRoom(número)`; fechar = `RequestExitPartyMatchingWaitingRoom` e fecha o criar sala.
- [O] PartyMatchMakeRoomWnd: criar = sala 0, título sm1398, 12 vagas, nível ± 5 (1..80); a partir da lista de espera de fora, entre o nível do alvo e o do jogador ± 5 e o convite depois do OK; editar = os dados da sala; OK = `RequestManagePartyRoom(sala, combo + 2, níveis presos em 1..80, título)`; títulos ss1457/1458/1460.
- [O] PartyMatchRoomWnd: informação da sala; membros com o ícone da classe, nível "aproximado" (`GetAmbiguousLevelString`), região e ss1061/1062/1063; `EV_PartyMatchRoomMemberUpdate` 0 entra, 1 sai e entra no fim, 2 sai, e o jogador pega o tipo novo; só o líder (tipo 1) edita, expulsa (`RequestBanFromPartyRoom`) e convida (`RequestInviteParty`); sair = Withdraw (candidato e membro) ou Dismiss (líder); fechar pela moldura marca o `CompletelyQuitPartyMatching`; `EV_PartyMatchRoomClose` depois de sair pede a lista de novo.
- [O] Listas de espera: páginas de 64 ("atual/total"), Prev/Next desligados nas pontas; Whisper e duplo clique = `SetChatMessage("\"nome ")`; Invite = `RequestAskJoinPartyRoom` (de dentro da sala) ou criar sala com convite (de fora); a de fora começa com 1..80 e Search pede a página 1.
- [O] UnionWnd: `EV_CommandChannelStart` abre e desliga Ban/Out; `…Info` = dono, saque (ss1383/1384), "n ss440 / m ss1013", e o dono libera o Ban; `…PartyList` acrescenta o grupo (o líder libera o Out) e repede o detalhe do grupo procurado; `…PartyUpdate` 0 tira o grupo e os membros dele, 1 acrescenta; Member Info alterna o UnionDetailWnd com `RequestExMPCCShowPartyMembersInfo(líder)`; no detalhe, duplo clique = Action (Attack com Ctrl, o modo PK).
- [O] DuelManager: só durante o duelo (`EV_DuelReady` → `EV_DuelEnd`); acha o ID ou o 1º espaço livre (até 9), cresce a janela em 46 px por linha; nome, ícone e barras de CP/HP/MP; clique com x > 13 = `RequestTargetUser` do ID da linha; convite com `IsRejectingDuel` recusa direto, senão Progress de 10 s com sm1938 (1×1) ou sm1939 (grupo).
- [I] `GetZoneNameWithZoneID` pela tabela do combo de local do PartyMatchWnd (reserved → sysstring) e `GetLootingMethodName` 0..4 = ss487/488/798/799/800.
- [I] Sem builder no Net: o Auto Join usa o `RequestPartyMatchDetail(0)`; o Refresh do canal repede só o grupo escolhido; o Quit do canal vai como o comando `/channelleave`.
- Divergências: o chat da sala só recebe (`ProcessPartyMatchChatMessage` precisa do tipo de chat da sala no App); as listas de espera são janelas soltas, não gavetas; sem o convite e a resposta de duelo no Net (pedido 0032).

## Entrega

- **Commits:** `a8898a3` (código e `PartyMatchTests`), `a196004` (evidências e K32).
- **Testes:** `PartyMatchTests` (nível aproximado; salas, páginas, região e divisão; criar sala e convite; sala com membros e autoridade; lista de espera; canal de comando; duelo); `sh Docs/tools/run_tests.sh` 720/720.
- **Falta / fora do escopo:** pedido 0032 (net); chat da sala (enviar); listas de espera como gaveta; teste ao vivo no aCis.

## Pedidos

- `pedidos/0032-ui-duelo-pedido.md` (net): `ExDuelAskStart` e `RequestDuelAnswerStart`.
