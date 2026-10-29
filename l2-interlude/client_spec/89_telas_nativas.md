# Layout das telas nativas (login, servidor, lobby, criação, carregamento, messenger)

Gerado por `scripts/native_screen_layout.py` a partir do assembly do `NWindow.dll`. Essas telas não estão no `Interface.xdat`: cada janela cria os seus controles em C++.

Slots da vtable de `NCWnd` usados, com o nome observado no binário:

- `0xC0` **SetRect(x, y, largura, altura, …)**: o corpo base (`0x1005e8f0`) grava x em `+0x80`, y em `+0x84` e largura e altura em `+0x88`/`+0x8C`, os mesmos campos que `UWindowHandle::execGetRect` lê (`FUN_10058770`). Coordenadas relativas à janela-mãe.
- `0xD4` **SetAnchor(ponto próprio, ponto do alvo, alvo, x, y)**: chamado por `execSetAnchor`, que converte `TopLeft`…`BottomRight` em 1…9 (mesma ordem do xdat, 93 §2).
- `0x128` **SetWindowSize(w, h)** em float (`execSetWindowSize`), `0x144` **MoveTo(x, y)** (`execMoveTo`), `0x174` **SetString** (`execSetString`).

Para cada controle: classe (pela vtable RTTI que o construtor grava), id (`[controle+0x1CC]`, o valor que chega a `OnClick`/`OnTimer`), operações de posição na ordem do código, texturas e textos (literais e sysstrings em `FL2GameData+0x6A8DC+12·i`). Total: **84 controles e janelas**, 82 com posição. "?" é um valor calculado em tempo de execução (por exemplo, a partir do tamanho da tela); "A ou B" são os dois valores de um ramo curto (o 1º quando o teste é verdadeiro, como o modo OTP no login). A coluna "em" é o endereço da criação; os dados completos estão em `out/re/native_screen_layout.json`.

## NCAuthWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1013f3d7` | (a própria janela, criada por NCConsole) | — | SetRect (0.5*W-128, H*0.5-64 ou H*0.5-54, 256, 128 ou 108) | — |
| `0x10181d36` | NCEditBox | 0x1502 | SetRect (84, 20, 128, 17) | — |
| `0x10181dc1` | NCEditBox | 0x1503 | SetRect (84, 42, 128, 17) | — |
| `0x10181e4c` | NCEditBox | 0x112211f1 | SetRect (84, 64, 128, 17) | — |
| `0x10181f3a` | NCButton | 0x112211f0 | SetWindowSize (16, 16)<br>âncora TopLeft → TopRight de NCEditBox 0x112211f1 (5, 1) | `L2UI_CH3.LoginWnd.aboutotpicon_down`<br>`L2UI_CH3.LoginWnd.aboutotpicon` |
| `0x101820d9` | NCButton | 0x1006 | SetRect (31, 92 ou 72, 96, 23) | `L2UI_CH3.BUTTON.bigbutton_down`<br>`L2UI_CH3.BUTTON.bigbutton`<br>`rótulo sysstring[152] = Log In` |
| `0x101821f4` | NCButton | 0x1007 | SetRect (131, 92 ou 72, 96, 23) | `L2UI_CH3.BUTTON.bigbutton_down`<br>`L2UI_CH3.BUTTON.bigbutton`<br>`rótulo sysstring[153] = Exit` |

## NCLoginFunctionWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1013f537` | (a própria janela, criada por NCConsole) | — | SetRect (W-154, H-200, 120, 138) | — |
| `0x101800f8` | NCButton | 0xaff12012 | SetRect (13, 8, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[154] = New Account` |
| `0x10180200` | NCButton | 0xaff12015 | SetRect (13, 33, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[155] = Lost Account` |
| `0x10180308` | NCButton | 0xaff12011 | SetRect (13, 58, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[156] = Options` |
| `0x10180413` | NCButton | 0xaff12014 | SetRect (13, 83, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[805] = Production Team` |
| `0x10180523` | NCButton | 0xaff12016 | SetRect (13, 107, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[1251] = Replay` |

## NCLoginServerWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1013f946` | (a própria janela, criada por NCConsole) | — | SetWindowSize (316, 542) | — |

## LoginWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x100bbb9f` | (a própria janela, criada por MsnWnd) | — | SetRect (0, 0, W, H) | — |
| `0x100b208e` | NCEditBox | — | SetRect (92, 131, 151, 17) | — |
| `0x100b212a` | NCEditBox | 0xa56 | SetRect (92, 151, 151, 17) | — |
| `0x100b2211` | NCButton | 0xa09 | SetRect (72, 176, 66, 21) | `L2UI_CH3.Button.SmallButton2_down`<br>`L2UI_CH3.Button.SmallButton2`<br>`rótulo sysstring[140] = OK` |
| `0x100b2338` | NCButton | 0xa0a | SetRect (142, 176, 66, 21) | `L2UI_CH3.Button.SmallButton2_down`<br>`L2UI_CH3.Button.SmallButton2`<br>`rótulo sysstring[141] = Cancel` |
| `0x100b2466` | NCButton | 0xa0b | SetRect (72, 204, 134, 23) | `L2UI_CH3.Button.bigbutton3_down`<br>`L2UI_CH3.Button.bigbutton3`<br>`rótulo sysstring[995] = MSN Messenger Info` |

## NCServerSelectWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x10180910` | (a própria janela, criada por NCLoginServerWnd) | — | SetRect (0, 0, 316, 330) | — |
| `0x101aa502` | NCButton | 0xf007 | SetRect (121, 297, 76, 23) | `L2UI_CH3.Button.Btn1_normalOn`<br>`L2UI_CH3.Button.Btn1_normal`<br>`rótulo sysstring[140] = OK` |
| `0x101aa647` | NCButton | 0xf017 | SetRect (201, 297, 76, 23) | `L2UI_CH3.Button.Btn1_normalOn`<br>`L2UI_CH3.Button.Btn1_normal`<br>`rótulo sysstring[141] = Cancel` |
| `0x101aa782` | NCButton | 0xf020 | SetRect (41, 297, 76, 23) | `L2UI_CH3.Button.Btn1_normalOn`<br>`L2UI_CH3.Button.Btn1_normal`<br>`rótulo sysstring[603] = Quality` |

## NCServerSelectListCtrl

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x101aa298` | (a própria janela, criada por NCServerSelectWnd) | 0xf018 | SetRect (8, 10, 300, 274) | — |

## NCLobbyFunctionWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1017f938` | (a própria janela, criada por NCLobbyWnd) | — | SetRect (GSEKScreenX-154, GSEKScreenY-200, 120, 138) | — |
| `0x1017cb88` | NCButton | 0x100b | SetRect (13, 20, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[158] = Create` |
| `0x1017cc90` | NCButton | 0x100c | SetRect (13, 45, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[159] = Delete` |
| `0x1017cdaa` | NCButton | 0x100a | SetRect (13, 95, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[884] = Re-Login` |

## NCLobbyStartWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1017f887` | (a própria janela, criada por NCLobbyWnd) | — | SetRect (GSEKScreenX/2-71, GSEKScreenY-111, 140, 49) | — |
| `0x1017d4a1` | NCButton | 0x1009 | SetRect (13, 10, 116, 31) | `L2UI_CH3.Button.BigButton2_down`<br>`L2UI_CH3.Button.BigButton2`<br>`rótulo sysstring[160] = Start` |

## NCNpcView_CharacterSelectWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x10195f41` | (a própria janela, criada por NCNpcViewerWnd) | — | SetRect (10, 40, 350, 630) | — |
| `0x10194a10` | (a própria janela) | — | — | `NpcViewer` |
| `0x10194a78` | NCFrameCtrl | — | SetRect (0, 0, W, 25) | — |
| `0x10194b12` | NCComboBox | 0x1f05 | SetRect (25, 30, 125, 18) | — |
| `0x10194c03` | NCEditBox | 0xf4 | SetRect (10, 380, 80, 16) | — |
| `0x10194cc0` | NCButton | 0xf5 | SetRect (95, 380, 32, 16) | `L2UI_ch3.button.SmallButton2_Down`<br>`L2UI_ch3.button.SmallButton2`<br>`rótulo sysstring[420] = Search` |
| `0x10194dc6` | NCButton | 0xf6 | SetRect (135, 380, 50, 16) | `L2UI_ch3.button.SmallButton2_Down`<br>`L2UI_ch3.button.SmallButton2`<br>`rótulo sysstring[422] = View List` |
| `0x10194ecf` | NCButton | 0xfa | SetRect (195, 380, 32, 16) | `L2UI_ch3.button.SmallButton2_Down`<br>`L2UI_ch3.button.SmallButton2` |
| `0x10194fc6` | NCCheckBox | 0xfb | SetRect (180, 32, 100, 16) | `Mesh이름` |
| `0x1019505d` | NCCheckBox | — | SetRect (10, 400, 100, 16) | `Monster` |
| `0x101950e7` | NCCheckBox | — | SetRect (110, 400, 100, 16) | `NPC` |
| `0x1019516c` | NCEditBox | 0xfe | SetRect (60, 418, 230, 16) | — |
| `0x101951f6` | NCEditBox | 0xff | SetRect (60, 438, 230, 16) | — |
| `0x10195280` | NCEditBox | 0x100 | SetRect (60, 458, 230, 16) | — |
| `0x1019530a` | NCEditBox | 0x101 | SetRect (60, 478, 230, 16) | — |
| `0x10195394` | NCEditBox | 0x102 | SetRect (60, 498, 230, 16) | — |
| `0x1019541e` | NCEditBox | 0x103 | SetRect (60, 518, 32, 16) | — |
| `0x101954a5` | NCEditBox | 0x104 | SetRect (160, 518, 32, 16) | — |
| `0x10195562` | NCButton | 0x1100 | SetRect (200, 518, 32, 16) | `L2UI_ch3.button.SmallButton2_Down`<br>`L2UI_ch3.button.SmallButton2` |
| `0x1019565c` | NCEditBox | 0xf8 | SetRect (60, 550, 80, 16) | — |
| `0x101956e4` | NCEditBox | 0xf7 | SetRect (210, 550, 80, 16) | — |
| `0x1019576f` | NCEditBox | 0xfe | SetRect (60, 570, 80, 16) | — |
| `0x101957f7` | NCEditBox | 0xff | SetRect (210, 570, 80, 16) | — |
| `0x10195882` | NCEditBox | 0x1101 | SetRect (60, 590, 80, 16) | — |
| `0x10195943` | NCButton | 0xf9 | SetRect (210, 590, 32, 16) | `L2UI_ch3.button.SmallButton2_Down`<br>`L2UI_ch3.button.SmallButton2`<br>`rótulo sysstring[218] = Apply` |

## NCNpcView_CharacterSelect_List

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x10194b8e` | (a própria janela, criada por NCNpcView_CharacterSelectWnd) | — | SetRect (10, 50, 285, 250) | — |

## NCPawnCreateWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1019a4e7` | NCExButton | 0x100d | SetRect (W*0.5-88, H-100, 44, 44) | `l2ui.LobbyWnd.left_click`<br>`l2ui.LobbyWnd.left` |
| `0x1019a689` | NCExButton | 0x100e | SetRect (W*0.5+44, H-100, 44, 44) | `l2ui.LobbyWnd.right_click`<br>`l2ui.LobbyWnd.right` |
| `0x1019a82b` | NCButton | 0x1010 | SetRect (W*0.5-22, H-100, 44, 44) | `l2ui.LobbyWnd.zoomin_click`<br>`l2ui.LobbyWnd.zoomin` |
| `0x1019a9cd` | NCButton | 0x1010 | SetRect (W*0.5-22, H-100, 44, 44) | `l2ui.LobbyWnd.zoomout_click`<br>`l2ui.LobbyWnd.zoomout` |

## NCPawnCreateFunctionWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1019ab28` | (a própria janela, criada por NCPawnCreateWnd) | — | SetRect (GSEKScreenX-154, GSEKScreenY-200, 120, 138) | — |
| `0x10196168` | NCButton | 0x1009 | SetRect (13, 20, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[162] = Create Character` |
| `0x10196270` | NCButton | 0x100a | SetRect (13, 45, 96, 23) | `L2UI_CH3.Button.BigButton_down`<br>`L2UI_CH3.Button.BigButton`<br>`rótulo sysstring[161] = Previous` |

## LoadingWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x100bbd1f` | (a própria janela, criada por MsnWnd) | — | SetRect (0, 0, W, H) | — |

## MessengerWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x101401d3` | (a própria janela, criada por NCConsole) | — | SetRect (384, 180, 256, 401) | — |
| `0x100b64b0` | (a própria janela) | — | SetRect (0, 0, W, H) | — |
| `0x100bd4e6` | NCFrameCtrl | — | SetRect (0, 0, 256, 20) | — |
| `0x100bd678` | NCTabControl | 0xa02 | SetRect (12, 25, 224, 41) | — |

## NCServerInfoWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x10180996` | (a própria janela, criada por NCLoginServerWnd) | — | SetRect (0, 337, 316, 205) | — |
| `0x101a958c` | NCHtmlViewer | — | SetRect (7, 7, W-14, H-14) | — |

## NCPawnSelectWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1017f73d` | (a própria janela, criada por NCLobbyWnd) | — | SetRect (24, 27, 256, 108) | — |
| `0x1017e21e` | NCComboBox | 0x1f04 | SetRect (46, 13, 138, 17) | — |

## NCPawnSetupWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1019a346` | (a própria janela, criada por NCPawnCreateWnd) | — | SetRect (24, 27, 256, 205) | — |
| `0x10199e2f` | NCEditBox | 0x1503 | SetRect (66, 17, 128, 17) | — |
| `0x10199eba` | NCSelectCtrl | 0xf0a3b2 | SetRect (86, 52, 136, 17) | — |
| `0x10199f45` | NCSelectCtrl | 0xf0a4b3 | SetRect (86, 76, 136, 17) | — |
| `0x10199fd0` | NCSelectCtrl | 0xf0a5b4 | SetRect (86, 100, 136, 17) | — |
| `0x1019a05b` | NCSelectCtrl | 0xf0a7b6 | SetRect (86, 124, 136, 17) | — |
| `0x1019a0e6` | NCSelectCtrl | 0xf0a6b5 | SetRect (86, 148, 136, 17) | — |
| `0x1019a174` | NCSelectCtrl | 0xf0a8b7 | SetRect (86, 172, 136, 17) | — |

## NCPawnInfoWnd

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1019a3fa` | (a própria janela, criada por NCPawnCreateWnd) | — | SetRect (24, 249, 256, 205) | — |

## NCKeyCryptWarningDialogBox

| em | classe | id | posição | texturas e textos |
|---|---|---|---|---|
| `0x1018240d` | (a própria janela, criada por NCAuthWnd) | — | SetRect (GSEKScreenX/2-101, GSEKScreenY/2-43, 205, 87) | — |
| `0x10181415` | NCButton | 0x1004 | SetRect (?, 60, 74, 21)<br>x = trunc(largura·0,5 − 37) = 65: a largura (205) vem de FUN_1005d0a0, que copia o retângulo do próprio diálogo para a pilha; constantes 0,5 em 0x1022f270 e 37,0 em 0x1024f738; fldcw 0xC00 = truncamento | `L2UI_ch3.button.btn1_normalon`<br>`L2UI_ch3.button.btn1_normal`<br>`rótulo sysstring[140] = OK` |

