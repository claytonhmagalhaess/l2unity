# #0038 — Clã: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd` (T14)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-cla` |
| Estado | no main |
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
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-cla` criado de `feat/ui-quests` (300a7b0).
- 2026-11-03 — `ClanScript`, `ClanView`, `L2ListCtrl` (também na QuestListWnd), `EV_ClanMyAuth` no `GameUi.SetUser`, `ClanTests` (`6ea9106`, `291f4e9`).
- 2026-11-03 — pedido 0031 para a vaga `net`: privilégios, relação, nobre e herói no `UserInfo`.
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 686/686 (exit 0).
- 2026-11-03 — capturas offline e linha K27 (`afb7427`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] Unidades (`UIEventManager.uc:663-682`): 0 clã, 100/200 guardas reais, 1001/1002/2001/2002 cavaleiros, −1 academia; índice 0..7 nessa ordem. `HandleClanInfo` grava nome e líder da unidade e, só na principal, o cabeçalho (sede pelo `AgitID`, senão pelo `CastleID`, senão ss27; estado ss341 no Status 3, ss894 sem guerra, ss340 em guerra).
- [O] `AddToList`: nas ordens de cavalaria, a 1ª linha é o líder (dourado; nível e classe pelo clã principal; coluna 3 = "0"), ou ss1445 sem líder; a academia conta como a principal (sem essa linha). Membros: branco 170, amarelo com mestre, branco 255 o próprio jogador; Logon/Logoff pelo objectId. O `OnLineNum = OnLineNum++` do script não soma, então o contador sai sempre "(0/n)" (+1 nas ordens).
- [O] `resetBtnShowHide`: sem clã, quase todos desligados; níveis 0..5 e acima de 5 pela tabela do script; líder: sem Quit, com AuthEdit e com TitleManage acima do nível 2; os demais pelo Join/ClanCrest/War. `NoblessMenuValidate`: sem clã, nobre ou herói, o HeroBtn entra no lugar do ClanMemInfoBtn.
- [O] ClanDrawerWnd: `OnShow` e `CheckandCompareMyNameandDisableThings`/`Proc_AuthValidation` portados (líder expulsa e troca a ordem; sem liderança, pelos bits; ninguém mexe em si mesmo nem no líder; a academia não tem grau nem aprendiz). Painel do membro: grau ss1406..1414 (o líder do clã = ss342), ordem "getClanOrderString - nome" (academia ss1419), aprendiz ss1431/ss1332 e ss27 sem mestre. Combo de grau: 1..5 e ss1451, que volta ao grau da unidade (6/7/8/9).
- [O] Os botões de painel do ClanWnd alternam (`m_currentactivestatus1..8`); com o painel de membro ou de autoridade aberto, o clique na linha pede de novo; o duplo clique abre o do membro. O `HandleMemberInfoUpdate` troca o registro antes de comparar a unidade, então a mudança de unidade junto com a de mestre não move o membro (como o script).
- [O] Autoridade do membro: PowerValue1..9 → Check101..109, 10..14 → 201..205, 15..22 → 301..308; 100/200/300 marcam o grupo cheio; do próprio jogador, 101/107/105 atualizam Join/ClanCrest/War; o líder do clã fica com tudo marcado. Informação: reputação "n ss1442" (175/152/120, vermelho < 0, azul > 0), ranking ss1374 sem ou acima de 100, "ss1375 n".
- [O] InviteClanPopWnd: as unidades com nome; a academia sempre, as outras só se o tipo do jogador tem no máximo os dígitos do tipo da unidade (o `len` do script); OK = `RequestJoinPledge(alvo, tipo)`.
- [O] `EV_ClanMyAuth` vem do UserInfo no nativo (`NConsoleWnd::ReceivePledgeMyAuth`, `nw:0x1015c020`, campos ClanMaster/Join/NickName/ClanCrest/War/Grade/ManageMaster/OustMember). [I] Os bits pelo aCis (`Clan.CP_CL_*`): Join 2, NickName 4, Grade 16, War 32, OustMember 64, ClanCrest 128, ManageMaster 256; líder = relação 0x40. O `ParseUserInfo` descarta esses campos (pedido 0031); o `GameUi.SetUser` manda o evento quando `Stats` tem `clanPrivileges`.
- [I] Declarar e encerrar guerra pelo clã do alvo; Penalty pelo comando `/pledgepenalty`; Board = `EV_ShowBBS` Index 3.
- Fora desta tarefa: lista de guerra (só pede), editar graus (`ClanAuthEditWnd`), brasão, troca de ordem de cavalaria e o painel de herói.

## Entrega

- **Commits:** `6ea9106` (código, `L2ListCtrl` e `ClanTests`), `291f4e9` (TryGetComponent), `afb7427` (evidências e K27).
- **Testes:** `ClanTests` (unidades, cabeçalho e combo; linhas e contador; botões por nível e autoridade; bits do MyAuth; cliques e painéis; membro, aprendiz e grau; autoridade e informação; convite; entrada, saída e mudança de membro); `sh Docs/tools/run_tests.sh` 686/686.
- **Falta / fora do escopo:** pedido 0031 (net); guerra, edição de graus, brasão, troca de ordem e painel de herói; teste ao vivo no aCis.

## Pedidos

- `pedidos/0031-ui-userinfo-cla.md` (net): privilégios do clã, relação, nobre e herói no `UserInfo`.
