# #0051 — Character Status, Actions e Clã: validar e corrigir

| Campo | Valor |
|---|---|
| Vaga | ui, na pasta `worktrees\net` (emprestada: a `worktrees\ui` está com a #0048 e a `worktrees\world` com a #0050) |
| Branch | `feat/ui-status-acoes-cla` (nasce de `feat/ui-revisao`, #0047) |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` (DetailStatusWnd, ActionWnd, ClanWnd, 89, 90, 91, 96); `Docs/revisao_ui.md` (#0047) |
| Sessão | ui: status, ações e clã (#0051) |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou no aCis local e encontrou estes problemas:
- **Character Status** (DetailStatusWnd): o HP não aparece e os valores estão desalinhados.
- **Actions** (ActionWnd): as ações não funcionam (dança, convidar para o grupo e outras). Todas precisam ser revisadas.
- **Clã**: há texto em outro idioma, e o padrão é inglês.

Esta tarefa compara as três janelas com o original, item por item, e corrige tudo o que estiver diferente.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] **Character Status:** cada campo do original (nome, classe, nível, HP/MP/CP/EXP com barra e valor, STR/DEX/CON/INT/WIT/MEN, P. Atk., M. Atk., defesas, precisão, evasão, crítico, velocidades, peso, karma, PvP/PK, Sociality/Votes, clã, título etc.) aparece:
  - na posição, no alinhamento e no formato do original (xdat, `DetailStatusWnd.uc`);
  - com o valor certo do personagem, conferido contra o aCis. Justificativa: campos, posições e formatos iguais ao `DetailStatusWnd.uc` e ao xdat; os 29 valores conferidos contra o UserInfo do aCis (`depois_status*.png`). O rank, o herói/nobre e Sociality/Votes dependem do pedido 0044 (net), e o brasão do clã não existe no porte (registrado).
- [x] **Actions:** cada ação da `actionname-e.dat` (básicas, de grupo, sociais e de pet/servo) faz o que faz no original, conferido no aCis. Exemplos: sentar e levantar, andar e correr, atacar, pegar, convidar para o grupo, loja privada, fabricação, as 13+ sociais com a animação do personagem e o duelo. O resultado de cada uma fica numa tabela em `Docs/acoes.md`, com a ação, o pacote enviado (RequestActionUse id, RequestSocialAction id ou outro) e o estado: ok, corrigido ou pedido. Justificativa: `Docs/acoes.md`, 36 ações (as de pet/servo seguem pelo default `RequestActionUse`, como o original). Tudo conferido no aCis, menos Assist, o duelo fora de zona de paz e a resposta do canal de comando. Funcionar no jogo depende do pedido 0045 (`App.cs`); a animação social, do 0046 (world).
- [x] **Atalhos de ação:** o clique simples, o duplo clique, o arrasto para a barra de atalhos e o uso pela barra seguem o original. Justificativa: o clique simples, o arrasto (RequestShortCutReg) e o uso pela barra (Dance no slot 9 → 0x1b(12)) foram conferidos. O duplo clique dispara a ação duas vezes, e no nativo isso está a validar (registrado em Decisões).
- [x] **Clã:** nenhum texto fora do inglês. Cada rótulo, botão, coluna e mensagem vem da sysstring/systemmsg/`.int` em inglês do original, com o id certo, nunca de texto fixo no código. O mesmo vale para as outras janelas: os textos em português ou em outro idioma achados pelo caminho também são corrigidos ou listados. Justificativa: os rótulos passam a vir da sysstring/systemmsg (ordem do `SetProperText`), `depois_cla*.png`. Os textos em português das outras janelas foram corrigidos (`SocialUi`) ou listados (Decisões), e o do `App.cs:1850` virou o item 3 do pedido 0045.
- [x] Todas as divergências são corrigidas ou registradas:
  - o que for de `Scripts\Net\` vira pedido para a net;
  - o que for do `App.cs` (por exemplo, o despacho de `RunCommand`/`DoAction`) vira pedido para a coordenadora, com o trecho exato;
  - a animação social que depender do personagem e não da UI vira pedido para a vaga correspondente. Justificativa: pedidos 0044 (net), 0045 (coordenadora, `App.cs`) e 0046 (world, animação social).

  Os pedidos vão em `tarefas\pedidos\`.
- [x] Testes EditMode para a lógica corrigida (montagem dos campos do status, mapa ação → pacote, textos por id). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`. Justificativa: `StatusAcoesClaTests` (36 casos) e o `XdatLayoutTests` ajustado. A suíte deu 786/786, contra 746 na `feat/ui-revisao`, sem falhas novas.
- [x] Capturas antes e depois em `Docs/evidencias/status-acoes-cla/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`. Justificativa: `Docs/evidencias/status-acoes-cla/` (antes/depois do status, das ações e do clã, a barra e as capturas da sessão de testes) e a linha #0051 no `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-04 — Branch `feat/ui-status-acoes-cla` a partir de `feat/ui-revisao` (b88e07c). Editor da pasta `worktrees\net` aberto; conta de teste `l2webtest2` (`Docs/contas_teste.md`).
- 2026-11-04 — TextBox do xdat: offsetY só na fonte de dígitos e sysstring antes do text (`6ef6317`).
- 2026-11-04 — DetailStatusWnd pelo `HandleUpdateUserInfo` (`d84a833`).
- 2026-11-04 — `L2Commands.PlanAction`, o DoAction por ação (`5451d2f`). O `App.cs` foi testado como patch local e virou o pedido 0045.
- 2026-11-04 — Perguntas de grupo, troca e amigo pelas systemmsg (`804492f`); testes e conta (`9c7b195`).
- 2026-11-04 — Autosize da TextBox pelo `textAlign` (`2dd4261`). O defeito apareceu na captura "antes" do status.
- 2026-11-04 — Capturas antes e depois e conferência ao vivo no aCis (`Docs/evidencias/status-acoes-cla/`, `Docs/acoes.md`). Pedidos 0044 (net), 0045 (coordenadora) e 0046 (world).
- 2026-11-04 — Suíte EditMode 786/786 no Editor aberto (`b9fd8ed`: o `XdatLayoutTests` confere o autosize pelo `textAlign`). Falta conferir ao vivo as ações com outro jogador (3, 7, 9, 50, 56, 58, 60): pedi à coordenadora um 2º personagem da #0050.
- 2026-11-04 — Novo fluxo de testes: fechei o Editor da pasta net. O Figurante (`Dev/Figurante.cs`) agora trata duelo, canal de comando e saída do grupo (`da7bddb`). Pedi à sessão de testes o teste de grupo, troca e duelo com o Figurante no branch só de teste `test/0051-app-doaction` (`1cd199f` = `da7bddb` + o diff do pedido 0045, **sem merge**). O `App.cs` não fica no branch da tarefa.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

### Character Status: HP sumido e valores desalinhados

- **Observado (causa do HP sumido).** O NCTextBox desenha a fonte normal em y = 0: `PaintSingleLine` nw:0x10051770 → `FUN_100217a0(x = +0x2fc, y = 0)`. O `offsetY` (`+0x2f8`, gravado pelo construtor nw:0x10052c20 a partir do `XMLTextBoxData::GetOffsetY`, vtable +0xbc em nw:0x100ec6e0) só é lido no `FUN_100212f0`, a fonte de dígitos (fontType 9, 10 e 11). Nenhuma TextBox do xdat tem fontType ≥ 8. A #0047 (`ad57962`) aplicou o offsetY a todas: `txtHP/MP/CP/Exp/Weight`, com 12 px e offsetY 10, desciam 10 px, e o HP caía sobre a barra de MP. Corrigido no `L2Wnd.TextOffsetY`. O efeito vale para todas as janelas com offsetY (OnScreenMessage, ZoneTitle, PartyMember, MacroEdit, PageNum das barras…): o texto sobe para o topo da caixa, como no nativo. Os rótulos da OptionWnd continuam no topo, que era a correção certa da #0047.
- **Observado (valores fora do lugar).** O `RefreshTextCoords` (nw:0x10051af0) com autosize faz `MoveTo(x + deslocamento do alinhamento)`: no centro o centro fica, à direita a borda direita fica. O porte mantinha o ponto da âncora (TOP_LEFT). Corrigido em `L2Wnd.AutoSizeAnchor`. Também afeta os preços de Shop/Warehouse/PrivateShop/Deliver, o Text4 da MultiSellWnd (pasta da #0050, só pelo `L2Wnd`), MinLevel e MaxLevel da PartyMatchMakeRoom e o txtSP/txtSPString da SkillTrain. Em todos eles o resultado fica igual ao nativo.
- **Observado.** A ordem do texto da TextBox é sysstring, depois systemMsg, depois text (`SetProperText` nw:0x100527a0). As TextBox de cabeçalho com `text = "undefined"` (txtHeadPledge…) passam a usar a sysstring.
- **Observado.** `GetUserRankString` = `FUN_1014a3b0`: 0 → ss1385, 1 → 1386, 2..8 → 1388..1394 (`GL2GameData+0x6e9c8..0x6ea34`). O `nUserRank` é o `pledgeClass` do UserInfo (pedido 0044).
- **Decidido.** As barras são esticadas por `SetWindowSize` (como no `.uc`), e não recortadas. O EXP usa `int(fExpRate)`. O peso usa duas casas e a textura `ps_weightbar1..4` (`PetScript.WeightTexture`).
- **Conferido no aCis.** Os 29 campos exibidos são iguais ao UserInfo 0x04 recebido: HP 1088/1088, MP 276/276, CP 206/206, P.Atk 396, M.Def 373, Speed 162 = 115 × 1,4104 truncado, STR…MEN 40/30/43/21/11/25, PvP/PK 0/0. EXP 0.00% com 835854, o mínimo do nível 20.
- **Pendente (registrado).** Não há textura de brasão do clã no porte: `texPledgeCrest` fica escondido e o nome do clã fica em x = 68, como "sem brasão".

### Actions

- **Observado.** `DoAction` = FUN_10170860 (`decomp_all\nwindow\00012.c:29025`): mapa completo em `Docs/acoes.md`. O porte mandava toda ação como `RequestActionUse` (`App.cs:132`), e o `RequestActionUse.java` do aCis não trata as sociais, o grupo, a troca, o duelo nem o ataque. Por isso dança, convite etc. não funcionavam.
- **Observado.** O tipo social é o 2º int do registro do `actionname-e` (`GL2GameData+0x3d2c[id]+8`): 12 Greeting = 2 … 35 Sorrow = 13. Entrou em `L2TooltipData.ActionName.Type`.
- **Decidido.** `L2Commands.PlanAction` fica na UI (testável). O `App.DoAction` só executa o plano: pedido 0045, com o diff exato, testado como patch local e fora dos commits.
- **Observado (ao vivo).** O `SocialAction` 0x2d volta do servidor, mas o porte não trata o pacote, e a animação não toca: pedido 0046 (world + uma linha do `App.cs`).
- **A validar.** O duplo clique na ActionWnd faz a ação duas vezes. No nativo, o `NCItemWindow` provavelmente manda só o `OnDBClickItem`, que a ActionWnd não trata.
- **Registrado.** As ações 55 (replay) e 57 (Find Store) dependem de executores do `App.cs` que não existem (`local:replay`, `dlg`): pedido 0045, item 2.

### Clã e textos fora do inglês

- **Observado (causa).** 23 TextBox do xdat têm um `text` coreano de rascunho junto da sysstring em inglês: ClanWnd `title0..2` (혈맹명/혈맹주/본거지 → ss1321 "Clan", ss342 "Leader", ss343 "Base"), InviteClanPopWnd, as gavetas ClanMemberInfo/ClanInfo/ClanEmblem/Clan1_ChangeMemberGradeName e PartyMatch(Out)WaitList. O `L2Wnd` usava o `text` antes da sysstring. Resolvido com a ordem do `SetProperText`. Os rascunhos sem sysstring (nome do membro, nome do clã, pontos…) são preenchidos pelo script, como no original. Só o `Clan6_CurrentSelectedRankName` fica com o rascunho, porque o painel de autoridade dos graus ainda não existe no porte (registrado pela #0047).
- **Corrigido.** As perguntas de grupo, troca e amigo do `SocialUi` (vivas: `App.cs:1849,1884,1963`) estavam em português. Agora usam as systemmsg 66, 100 e 516 do original, conferidas em inglês no jogo.
- **Registrado (fora do escopo, porte ou código morto):**
  - a ajuda da tecla H (`GameUi.Hud.cs:382-389`);
  - o `SettingsUi` da tela de login;
  - os nomes de slot do `GameUi.cs:80-81`;
  - "Aguarde ressurreição." (`GameUi.Windows.cs:57`, RestartWnd sem opções);
  - a janela de troca do `SocialUi` (`:252-314`, pedido 0035);
  - a `UiWindow` "Clã" (`SocialUi.cs:73,398-406`, código morto apontado pela #0047);
  - a multisell antiga (`GameUi.Windows.cs:168-175`).
- **Observado (para a coordenadora).** O `shared\StreamingAssets-L2Web\client\System\systemmsg-e.dat` é diferente do `reference\l2-interlude\client\system\systemmsg-e.dat` (md5 5cf0… contra 8499…). Os textos usados aqui saíram em inglês normal no jogo. A `analises\l2-interludee\strings.json` tem uma systemmsg modificada ("An idiot called $c1…"): não use essa cópia como referência de texto.
- **Nota.** A mensagem do commit `d84a833` cita o "pedido 0043". O número certo é **0044**, porque outra sessão já usava o 0043.

## Entrega

- **Commits** (`feat/ui-status-acoes-cla`, de `b88e07c` a `0779ee4`, 12 commits):
  - `6ef6317` TextBox do xdat (offsetY só na fonte de dígitos; sysstring antes do text);
  - `2dd4261` autosize pelo `textAlign`;
  - `d84a833` DetailStatusWnd (`DetailStatusScript`);
  - `5451d2f` `L2Commands.PlanAction`;
  - `804492f` perguntas de grupo, troca e amigo pela systemmsg;
  - `da7bddb` Figurante com duelo;
  - testes e documentação (`9c7b195`, `b9fd8ed`, `e4c64b0`, `0dc1c1b`, `0779ee4`, `bb2202b`).
  O branch `test/0051-app-doaction` (`1cd199f`) é só para teste: ele leva o diff do pedido 0045 no `App.cs`. **Não fazer merge dele.**
- **Testes:**
  - EditMode: 786/786 no Editor da pasta net e 786/786 pela sessão de testes (`testes\0051-1`, `1cd199f`).
  - Ao vivo no aCis local: status, sociais, sentar, andar, lojas, Party Matching e barra (`l2webtest2`); grupo, troca, recomendar, duelo e os casos sem alvo, com o Figurante (`l2webtest`).
- **Falta / fora do escopo:**
  - **Pedido 0045 (coordenadora):** sem ele as ações continuam mandando `RequestActionUse`.
  - **Pedido 0044 (net):** rank, recomendações, herói e nobre no status.
  - **Pedido 0046 (world):** a animação do SocialAction.
  - Não conferidos ao vivo: duelo fora da cidade, a resposta do canal de comando, Assist, Find Store e Replay (estes dois sem executor; pedido 0045, item 2).
  - O duplo clique na ActionWnd faz a ação duas vezes (a validar).
  - Sem brasão do clã na DetailStatusWnd.
  - O `GamePackets.OpName` não dá nome a 0x4e, 0x50, 0x1e e 0x22 (só no diagnóstico; net).

## Pedidos

- `pedidos\0044-ui-userinfo-status.md`: net, UserInfo com pledgeClass, recomLeft/recomHave, noble e hero.
- `pedidos\0045-ui-app-doaction.md`: coordenadora, `App.cs` (DoAction pelo `PlanAction`, executores opcionais `dlg`/`replay` e o texto em português do JoinParty).
- `pedidos\0046-ui-socialaction-animacao.md`: world e uma linha no `App.cs`, animação do SocialAction 0x2d.
