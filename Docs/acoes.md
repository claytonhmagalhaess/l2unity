# Ações da ActionWnd (#0051)

Cada ação das categorias 1 a 3 do `actionname-e.dat`, comparada com o `DoAction` do original (`FUN_10170860`, `analises\l2-interlude\re\decomp_all\nwindow\00012.c:29025`). O porte monta os passos em `L2Commands.PlanAction`, que o `App.DoAction` executa (pedido 0045). Teste: `StatusAcoesClaTests` (`Acao_*`). Conferência ao vivo no aCis local, conta `l2webtest2` (personagem `L2webTest2`, Giran), em 2026-11-04. As ações com outro jogador foram conferidas pela sessão de testes (`testes\0051-1`, commit `1cd199f`), com o Figurante `L2webTest` (conta `l2webtest`). Os logs estão em `Docs/evidencias/status-acoes-cla/figurante-log.txt`. As ações com outro jogador foram conferidas pela sessão de testes (`testes1-1`, commit `1cd199f`), com o Figurante `L2webTest` (conta `l2webtest`). Os logs estão em `Docs/evidencias/status-acoes-cla/figurante-log.txt`.

Antes desta tarefa, toda ação saía como `RequestActionUse(id)` (`UiDeps.ActionUse`). O `RequestActionUse` do aCis só trata 0, 1, 10, 28, 37, 38, 51, 61 e as de pet, então as outras não faziam nada.

**Estados:**
- **ok**: o porte já fazia certo;
- **corrigido**: corrigido nesta tarefa;
- **pedido**: depende de outra vaga (número do pedido);
- **a conferir**: correto pelo código e pelos testes, sem conferência ao vivo.

| id | Ação | Original (FUN_10170860) | Pacote do porte | aCis local | Estado |
|---|---|---|---|---|---|
| 0 | Sit/Stand | default → `RequestActionUse` | 0x45 (0, ctrl, shift) | ChangeWaitType 0x2f do personagem (senta e levanta) | ok |
| 1 | Walk/Run | default | 0x45 (1, ctrl, shift) | ChangeMoveType 0x2e (0 = andar, 1 = correr) | ok |
| 2 | Attack | `FUN_1014ca10`: Ctrl → AttackRequest, senão Action com Shift | 0x04 Action ou 0x0a AttackRequest (alvo, x, y, z, shift); sem alvo nada | sem alvo: nada | corrigido |
| 3 | Exchange | `NConsoleWnd::RequestTrade` | 0x15 TradeRequest (alvo) | sm 118 e 120 + TradeStart 0x1e: a janela de troca abre (`0051_d_troca.png`); TradeDone(false) → 0x22 + sm 124 | corrigido |
| 4 | Next Target | `FUN_1014c7c0(200, alvo)` | `local:targetnext` (Action no próximo inimigo a até 200) | sem monstro a 200: nada | corrigido |
| 5 | Pick Up | `FUN_1014c720(200, -1)` | `local:pickup` (Action no item mais próximo) | sem item: nada | corrigido |
| 6 | Assist | `FUN_1015a770` | `local:assist` (Action no alvo do alvo) | sem conferência ao vivo (o Figurante não seleciona alvo) | corrigido |
| 7 | Invite | alvo jogador → `FUN_10144860` (nome, GL2PartyLooting); senão sm 185 | 0x29 RequestJoinParty (nome, distribuição) / sm 185 | sm 105 e 107, o Figurante aceita e entra na PartyWnd (`0051_a_party.png`); sem alvo, sm 185 no chat | corrigido |
| 8 | Leave Party | `FUN_10144880` | 0x2b RequestWithDrawalParty | em grupo: 0x50 PartySmallWindowDeleteAll + sm 203; sem grupo: nada | corrigido |
| 9 | Dismiss Party Member | alvo jogador → `FUN_10144890` (nome); senão sm 187 | 0x2c RequestOustPartyMember / sm 187 | 0x50 + sm 203, o Figurante sai do grupo; sem alvo, sm 187 | corrigido |
| 10 | Private Store - Sell | `FUN_10145240` | 0x73 RequestPrivateStoreManage | sm 1296 "You cannot open a Private Store here." (cidade) | corrigido |
| 11 | Party Matching | `FUN_10149af0(1, -1, 1)` + EV_PartyMatchCommand | 0x6f (1, -1, 1) + ev 1630 | ListPartyWaiting 0x96 e a janela de party matching | corrigido |
| 12 | Greeting | social: `FUN_10144110(tipo)` | 0x1b RequestSocialAction (2) | SocialAction 0x2d do personagem (2) | corrigido; animação: pedido 0046 |
| 13 | Victory | social | 0x1b (3) | 0x2d (3) | corrigido; pedido 0046 |
| 14 | Advance | social | 0x1b (4) | 0x2d (4) | corrigido; pedido 0046 |
| 24 | Yes | social | 0x1b (6) | 0x2d (6) | corrigido; pedido 0046 |
| 25 | No | social | 0x1b (5) | 0x2d (5) | corrigido; pedido 0046 |
| 26 | Bow | social | 0x1b (7) | 0x2d (7) | corrigido; pedido 0046 |
| 28 | Private Store - Buy | `FUN_10145290` | 0x90 RequestPrivateStoreBuyManage | sm 1296 (cidade) | corrigido |
| 29 | Unaware | social | 0x1b (8) | 0x2d (8) | corrigido; pedido 0046 |
| 30 | Social Waiting | social | 0x1b (9) | 0x2d (9) | corrigido; pedido 0046 |
| 31 | Laugh | social | 0x1b (10) | 0x2d (10) | corrigido; pedido 0046 |
| 33 | Applaud | social | 0x1b (11) | 0x2d (11) | corrigido; pedido 0046 |
| 34 | Dance | social | 0x1b (12) | 0x2d (12) | corrigido; pedido 0046 |
| 35 | Sorrow | social | 0x1b (13) | 0x2d (13) | corrigido; pedido 0046 |
| 37 | Dwarven Manufacture | default | 0x45 (37) | SystemMessage do servidor (sm 1987 do L2Ketra) | ok |
| 38 | Mount/Dismount | default | 0x45 (38) | sem pet: nada | ok |
| 40 | Recommend | sem alvo sm 242; jogador → VoteSociality 0xb9; outro sm 144 | idem | jogador: sm 830 ("You have recommended L2webTest…"), o Figurante recebe a 831; NPC: sm 144 | ok (já estava no App) |
| 50 | Change of Party Leader | alvo jogador → `FUN_10149690` (nome); senão sm 1400 | D0:04 RequestChangePartyLeader / sm 1400 | 0x50 + 0x4e PartySmallWindowAll + sm 1384 "L2webTest has become the party leader" (`0051_c_lider.png`); sem alvo, sm 1400 | corrigido |
| 51 | General Manufacture | default | 0x45 (51) | SystemMessage do servidor | ok |
| 55 | Start/End Recording Replay | `FL2ReplayManager::OnSaveStartStop` | `local:replay` (sem executor) | — | pedido 0045 (opcional) |
| 56 | Command Channel Invitation | alvo jogador → `FUN_10143a10` (nome); senão sm 50 | D0:0D RequestExAskJoinMPCC / sm 50 | sem resposta: o aCis exige líder de grupo com as condições do canal de comando, que o teste não tinha | corrigido (pacote); resposta não conferida |
| 57 | Find Store | DialogBox de texto, sm 1722 → SetMatchedStore | `dlg:1722` (sem executor) | — | pedido 0045 (opcional) |
| 58 | Duel | alvo jogador → `FUN_101445d0` (nome, 0) | D0:27 RequestDuelStart (nome, 0) | sm 1940 "You are unable to request a duel at this time." (zona de paz de Giran) | corrigido (pacote); duelo fora da cidade não conferido |
| 59 | Withdraw | `FUN_10144710` | D0:30 RequestDuelSurrender | fora de duelo: nada | corrigido |
| 60 | Party Duel | alvo jogador → `FUN_101445d0` (nome, 1) | D0:27 (nome, 1) | sm 1940 (zona de paz) | corrigido (pacote) |

## Atalhos de ação

| Uso | Original | Porte |
|---|---|---|
| Clique simples na ActionWnd | `OnClickItem` → `DoAction(ClassID)` (`ActionWnd.uc:46-67`) | `bs[k].OnClick` → `UiDeps.ActionUse` → `DoAction` (pedido 0045) |
| Duplo clique | a ActionWnd não tem `OnDBClickItem`; o clique conta uma vez [A validar no NCItemWindow] | cada clique do botão dispara o `OnClick`: o duplo clique faz a ação duas vezes. Registrado |
| Arrastar para a barra | `OnDropItem` do NCShortcutItemWnd → RequestShortCutReg (tipo 3, UserShortCut 1; 2 para as ações 15-27 de pet) | `Draggable(..., "action", id)` → `UiPackets.ShortCutReg` (`GameUi.Windows.cs:599`) | 
| Uso pela barra | `ExecuteShortcut` → `DoAction` | `UseSlot` → `deps.ActionUse(s.Id)` → `DoAction`. Ao vivo: Dance no slot 9 → 0x1b(12) → SocialAction 12 |
| Clique fora de um item | `DoAction(0)` com o `infItem` vazio (bug do script, spec 05 §545) | nada (sem botão) |
