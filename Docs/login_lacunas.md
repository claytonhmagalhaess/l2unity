# Login: o que o original faz e o estado no l2unity (#0048)

Varredura da parte de login do cliente Interlude, da tela de ID e senha até a lista de servidores. Fontes: `analises\system_Tryskell_RE\nwindow.c` e `engine.c` (pseudocódigo do Ghidra), o assembly do `reference\l2-interlude\client\System\NWindow.dll` (lido com capstone, sem executar), `export\uc\Interface\*.uc`, `texts.json`/systemmsg do cliente e o aCis (`C:\Workspace-java\aCis_gameserver`). Endereços são do `NWindow.dll`, salvo quando dito.

Marcas: **[O]** observado no binário ou no código; **[I]** inferido; **[A]** a validar.

Estado: **igual** (já estava como o original), **corrigido** (nesta tarefa), **pedido** (depende de outra vaga, com o número do pedido em `tarefas\pedidos\`), **fora** (fora do escopo, com o motivo).

## Telas e estados

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| E1 | Estados: `LoginState` → (LoginOk com contrato) `EulaMsgState` → `ServerListState` → `CharacterSelectState`. `UILoginState::OnEnter` põe a faixa no id 94 (copyright). | [O] `FUN_1006ec20` (`UILoginState::OnEnter`: `FUN_10186b80(0x5e)`); `FUN_1014ba00` (troca para `EulaMsgState`/`ServerListState`) | igual (`App.Show` chama `Band.SetMessage(94)`) |
| E2 | Telas nativas, fora do xdat: `NCAuthWnd`, `NCLoginFunctionWnd`, `NCEulaWnd`, `NCLoginServerWnd` (`NCServerSelectWnd` + `NCServerInfoWnd`), `NCMessageWnd` (faixa), `NCGaraDialogBox`. Do xdat só `OptionWnd` e `HelpHtmlWnd` estão registradas no `LoginState`. | [O] spec 01 §3; `OptionWnd.uc:112-113`, `HelpHtmlWnd.uc:7-8` | igual (telas em `UI/Lobby*`) |

## NCAuthWnd (ID e senha)

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| A1 | Janela 256×108 em (0,5W−128, 0,5H−54), `logon_back`; ID/PWD 128×17 em (84, 20/42); rótulos ID/PWD (ss150/151) à direita em x=78; Log In (ss152, 0x1006) e Exit (ss153, 0x1007) 96×23 em (31/131, 72). | [O] spec 89; `OnCreate` 0x10181c80 | igual (G1) |
| A2 | Foco inicial no ID, a cada vez que a janela aparece (cada entrada no `LoginState`, também depois de um erro). | [O] `ShowWindow` 0x10181030: `ID.vt+0x78` | **corrigido**: `LobbyLoginScreen.Visible = true` põe o foco no ID |
| A3 | Tab e Shift+Tab: a janela entra pelo ID; ID → PWD e PWD → ID nos dois sentidos. | [O] `SetTabOrder` (vt+0x10c) em 0x101822a9: `auth(ID, ID)`, `ID(PWD, PWD)`, `PWD(ID, ID)`; [I] o Tab segue a ordem (como `UIAPI_WINDOW.SetTabOrder`, `MacroEditWnd.uc:83-93`) | **corrigido**: `LoginAuth.TabNext`, `LobbyLoginScreen.Keys` |
| A4 | Enter na senha com texto faz o login (`OnPasswordDone(1)` → `OnLoginBtnClick`). Enter na senha vazia e Enter no ID não fazem nada; o campo não perde o foco. | [O] `NCEditBox::OnKeyDown` 0x10019880 (`0xd`: com texto avisa `0x501(id, 1)`, vazio `0x501(id, 7)`); `NCAuthWnd` 0x10180b10 só trata 0x1503 → `OnPasswordDone` 0x101811c0 | **corrigido** (antes: Enter no ID ia para a senha e o Enter não chegava a logar): `LoginAuth.EnterSubmits` |
| A5 | Esc nos campos: avisa o pai com um código ≠ 1, o `NCAuthWnd` ignora. O `LoginState` não tem atalhos (os grupos de `_shortcuts.txt` são Eula, ChinaWarn, ServerList, Gaming e observadores). | [O] `OnKeyDown` `0x1b`; spec 01 §1.6 (atalhos por estado) | igual (nada acontece) |
| A6 | Campos: ID tipo 6, senha tipo 2 (máscara `*`), os dois só com IME inglês; sem `SetLimitedCharNum` (dá para digitar mais); o `RequestAuthLogin` copia 14 caracteres do ID e 16 da senha. | [O] `NCEditBox` ctor 0x1001a820 com `(6/2, 0, 1, 0x80, 1, 0)` em 0x10181d25/0x10181db0 (0x80 é a largura de desenho); `AllSelect` usa `*` (0x2a) no tipo 2; Engine `UNetworkHandler::RequestAuthLogin` (`wcsncpy 0xe`/`0x10`) | **corrigido**: sem `characterLimit` (antes 14/16 no campo); o corte é o do `Rsa.CredentialBlock` (14/16) |
| A7 | Caracteres aceitos: 0x20..0x81 (letras, dígitos, espaço e símbolos ASCII). | [O] `NCEditBox::OnChar` 0x10018f40 | **corrigido** (antes `Alphanumeric`, sem símbolos): `LoginAuth.AcceptChar` |
| A8 | O ID não é aparado (espaço conta como texto). | [O] `OnLoginBtnClick` lê o texto cru | **pedido** 0037 (o `App.SubmitLogin` faz `Trim()`) |
| A8b | O ID começa vazio: o `OnCreate` não põe texto no campo e o `ShowWindow` só dá o foco. | [O] `OnCreate` 0x10181c80 e `ShowWindow` 0x10181030 sem `SetString` no ID; [I] nenhum outro ponto preenche | **pedido** 0037 item 6 (opcional): o App preenche com o último login (`Config "user"`), comodidade do porte |
| A9 | Log In: ID vazio → systemmsg 86 "Please enter your ID."; senha vazia → 87 "Please enter your password."; senão `RequestAuthLogin` uma vez (flag `+0x200`, zerada pelo timer 0xaff12013 de 5 s); sempre o som 0 (`InterfaceSound.click_01`). | [O] `OnLoginBtnClick` 0x10180d70; ids pela fórmula `(off − 0x240ec)/0x5c` (0x25fd4 → 86, 0x26030 → 87); tabela de sons 0x10350fa0 | **corrigido** (antes "Informe a conta e a senha."): `LobbyLoginScreen.Submit` + `LoginAuth.CheckFields`; o `loggingIn` do App faz o papel da flag |
| A10 | Exit sai do cliente. | [O] id 0x1007 → slot 0x1fc | igual; o texto "Saindo..." sai pelo **pedido** 0037 |
| A11 | Modo OTP (campo 0x112211f1, ícone de ajuda `aboutotpicon`, `otplogon_back`, sysmsg 1236) e cartão de segurança (`+0x1cc`). | [O] `OnCreate`, `OnLoginBtnClick` | fora: o Interlude sem OTP não usa (`FUN_10141090` = 0) |
| A12 | Aviso do KeyCrypt (`NCKeyCryptWarningDialogBox` 205×87). | [O] spec 89; `ShowWindow` só mostra com `GL2UseKeyCrypt` e `GIsL2NetLogin` | fora (G3: não aparece no cliente sem KeyCrypt) |

## NCLoginFunctionWnd (janela de funções)

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| F1 | 5 botões BigButton em 120×138 (W−154, H−200): New Account (ss154, 0xaff12012) e Lost Account (ss155, 0xaff12015) mostram as systemmsg 1186/1187 na faixa; Production Team (ss805) vai para o `CreditState`; Replay (ss1251) abre a lista de replays. | [O] `FUN_1017f9f0` (slots 0x1f4..0x204) e os handlers em 0x1017fbxx..0x1017fea0 | **corrigido** por decisão do usuário: os 4 saíram; a janela ficou 120×39 com só o Options (borda de baixo em H−62, como a do 120×138). Ver Decisões da #0048 |
| F2 | Options (ss156, 0xaff12011) chama `NConsoleWnd::ShowOptionWnd`: abre o **OptionWnd do xdat** (o mesmo do jogo) com o som 5 (`itemsound.window_open`) ou fecha com o 6. | [O] slot 0x1f8 → `FUN_1017fd00` → `FUN_10164450` (`L"OptionWnd"`, sons 5/6); `RegisterState("OptionWnd","LoginState")` | **corrigido** (antes abria a janela de conexão do porte): `LobbyLoginScreen.ToggleOptionWnd`; falta ligar no App (**pedido** 0037 item 1). A janela de conexão ficou no atalho de desenvolvimento Ctrl+Alt+O |

## Mensagens (faixa NCMessageWnd e caixa NCGaraDialogBox)

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| M1 | `console+0x658` (`FUN_101456c0`) não é uma caixa com botões: escreve o texto na faixa `NCMessageWnd` de baixo (0, H−52, W, 52; `sek.cbui141`; texto #DCDCDC centrado). É onde aparecem os motivos de recusa e os avisos do login. | [O] `FUN_101456c0` → `console+0x50ac` (NCConsole) `+0x1f0`; NCConsole::OnCreate 0x1013f9f8 (SetRect 0, H−52, W, 52; id 94) | igual (`LobbyMessageBand`; o `LobbyUi.Msg` já manda tudo para a faixa). A G10 da matriz chamava a faixa de "caixa"; corrigido na `validacao.md` |
| M2 | LoginFail: `RefuseLogOn` (`FUN_10150be0`) monta 1 a 3 sysmsg do motivo, chama `GotoLogin` (desconecta, `LoginState`, a faixa volta ao 94) e depois põe o texto na faixa; o motivo 0x1f não volta ao login. | [O] `FUN_10150be0`, `FUN_1014cd40` (`GotoLogin`) | igual (C1: `LoginMessages.Fail`; ao vivo: senha errada → "Password does not match this account. Confirm your account information and log in again later.") |
| M3 | AccountKicked: sysmsg pelo bit (`FUN_10150730`/`FUN_10150920`). | [O] C1 | igual (`LoginMessages.KickedId`) |
| M4 | PlayFail (0x06) e 0x05/0x08/0x09: só fecham a conexão, sem texto. | [O] C1 (`FUN_1040ccd0` e vizinhos, Engine) | igual no Net (texto vazio); o App mostrava "Falha: " → **pedido** 0037 item 2 (LoginError sem texto = nada) |
| M5 | Lista de servidores vazia: o `ServerList` sem entradas deixa a lista vazia; OK sem seleção só toca o som. | [O] `NCServerSelectWnd::OnLoginBtnClick` 0x101a8d60 (`FUN_10035c90` nulo → só `FUN_1014ed50`) | **pedido** 0038 item 2 (o Net falha com "nenhum servidor disponivel" em português) |
| M6 | Queda da conexão fora do jogo: `NConsoleWnd::ServerClose` abre o `NCGaraDialogBox` (NCConsole+0x228) 306×128 com a systemmsg 127 "You have been disconnected from the server. Please login again." e só o OK; o OK (`ContinueServerClose`) faz `GotoLogin` no nível Lobby. | [O] `FUN_1016ee60` (id 0x1d, `FUN_1000dd30(0x7f)`), `FUN_101510b0`; caixa: ctor 0x10012260 (306×128), `OnCreate` 0x1000f050, `OnPaint` 0x1000f700 (`Calculate12_back`, `warningicon` em (11, 8), texto em (41, 9)), `FUN_1000f9d0` (só OK no centro, (W/2−38, 99), para os ids 0x1d/0x1f/0x10/0x50) | **corrigido** na UI (`LobbyDialogBox`, `LobbyUi.ShowServerClose`); ligar no App: **pedido** 0037 item 4; queda do login server: **pedido** 0038 item 2 |
| M7 | Falha ao conectar no login server: o `UNetworkHandler` conecta assíncrono (WSAAsyncSelect, porta 0x83a); o `OnLoginBtnClick` usa a systemmsg 90 "You are unable to connect to the server." quando o `RequestAuthLogin` falha. | [O] `OnLoginBtnClick` (0x26144 → 90); Engine `FUN_00e21670`; [A] o caminho do FD_CONNECT com erro não foi lido | **pedido** 0037 item 2 (exceção que não é `LoginError` → sysmsg 90) [I] |
| M8 | Durante o login não há texto de progresso: a faixa fica no copyright. | [I] nenhum `0x658` no caminho `RequestAuthLogin` → `ServerList` | **pedido** 0037 item 2 (tirar "Conectando ao login server…" e "Entrando no servidor de jogo…") |
| M9 | Re-Login da seleção de personagem volta ao login sem texto. | [I] `GotoLogin` não escreve na faixa | **pedido** 0037 item 4 (tirar "Você saiu do jogo.") |

## Contrato de licença

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| L1 | Com o LoginOk e o texto `eula` do `EULA-e.dat` (Ver413), abre o `NCEulaWnd` 546×425 centrado (`lobby3_back`), texto em (6, 6, 536, 375), Agree (ss599) em (196, 396) e Disagree (ss600) em (276, 396), 76×23. Agree pede a lista; Disagree desconecta e volta ao ID. Enter = Agree (`EulaWndOKButton`). Sem texto, vai direto à lista. | [O] `FUN_1014ba00`; `NCEulaWnd::OnCreate` 0x10190910; NCConsole 0x1013f765 (rect); `OnOkBtnClick` 0x1018fed0, `OnCancelBtnClick` 0x1018f7a0; Engine `FL2GameData::EulaLoad`; `_shortcuts.txt` | **pedido** 0038 item 1 (o Net manda o `RequestServerList` sozinho). Medidas na `NativeLayout.Eula*`; a janela fica para depois do pedido. O aCis local está com `ShowLicence = False` (vai direto ao `ServerList`), então hoje não aparece |

## Lista de servidores

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| S1 | NCLoginServerWnd 316×542 centrado; lista 300×274 com cabeçalho, listras, seleção e setas de rolagem; Quality/OK/Cancel 76×23; ajuda `server_help.htm`. | [O] spec 89; estudo `lobby_ui_re` | igual (G4) |
| S2 | Enter = OK (`ServerSelectOKButton`); duplo clique entra. | [O] `_shortcuts.txt` | igual (`App.LobbyKeys`, `LobbyServerScreen`) |
| S3 | Cancel: desconecta e volta ao `LoginState` sem mensagem. | [O] `OnCancelBtnClick` 0x101a8ed0 | **pedido** 0037 item 3 (hoje mostra "selecao de servidor cancelada") |
| S4 | Quality ordena pela coluna Ping. | [O] `OnSortBtnClick` 0x101a8fb0 | igual em parte: com um servidor não há o que ordenar; a ordenação em si não foi portada [A] |
| S5 | Cursor (polegar) da barra de rolagem da lista com mais de 15 servidores e barra da ajuda. | [O] `NCListCtrl::InitScrollBar` | fora: o aCis local tem 1 servidor; registrado na G4 como falta |

## Música e som

| # | O que o original faz | Evidência | Estado no l2unity |
|---|---|---|---|
| U1 | Música do lobby `LS01_F` (`PlayIntroMusic`, `RestoreLobbyMusic`, `StopIntroMusic`). | [O] Engine `UL2ConsoleWnd::PlayIntroMusic` (engine.c:187514) | **pedido** 0039 (render: `MusicPlayer.PlayIntro`) e 0037 item 5 (chamada no App) |
| U2 | Sons do `PlayConsoleSound`: 0 click_01 (Log In), 5/6 window_open/close (Options). | [O] tabela 0x10350fa0 | **corrigido** (`LoginAuth.ClickSound`, `WindowOpenSound`, `WindowCloseSound`) |

## Cena 3D

Nada novo além dos cipós (#0049, render). Nenhum pedido para a render além do 0039.

## Não localizado

- `VersionWnd` (listada na spec 01 §3.1) não tem métodos neste `NWindow.dll`; nada do tipo aparece na tela observada.
- O `OnKeyDown` do `NCGaraDialogBox` (o Enter como OK na `LobbyDialogBox` é [I]).
