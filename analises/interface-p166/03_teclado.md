# 03 — Teclado: todas as teclas e combinações (Interlude) e o estado no l2unity

Legenda: **[O]** observado, **[I]** inferido, **[V]** a validar. Fontes:
- `xdat`: grupos `Shortcut` do `Interface.xdat` do Interlude (`analises\l2-interlude\re\interface_layout.json`, campo `shortcuts`; tabela completa na spec 05 §5);
- `user.ini`: ligações `[Engine.Input]` do cliente oficial (spec 05 §5.6, correção de 2026-10-28);
- `IL:` / `P166:` / `nw:` / `u:`: mesmas convenções do 02.

A P166 não traz `Interface.xdat`, `user.ini` nem `Interface.int`. Os `.int` de `Interface_P166\System` são só `Core`, `Engine` e `Editor`. Por isso as teclas da P166 só aparecem pelos `OnKeyUp/OnKeyDown` dos `.uc` (§6). A tabela de teclas que vale é a do xdat do Interlude.

## 1. Caminho de uma tecla no Interlude (nativo)

[O] `NConsoleWnd::HandleKeyboardInput` (`nw:0x101734e0`), na ordem:

1. Alt, Shift ou Ctrl sozinhos (VK 0x12, 0x10, 0x11) são ignorados e retornam 0.
2. **Sem Alt**, nos estados `GAMINGSTATE` e `OLYMPIADOBSERVERSTATE`:
   - se a tecla é "de digitação" (`NWndUtil::IsTypingKey`, `nw:0x100624e0`: tudo **menos** F1–F12, Tab, Esc e NumLock),
   - e não há uma caixa de edição com foco (testes no `UWindowHandle` focado, vfuncs `+0x88`, `+0xfc`, bit `0x20000000`),
   - e `GIsEnterChatting == 0` (opção **Enter Chat desligada**),
   - então dispara `EV_ChatWndSetFocus` (570) e retorna 0: o chat ganha o foco e a tecla **não** vira atalho.
3. **Sem Alt**, no `LOGINSTATE`: uma tecla de digitação manda o foco para a caixa de login.
4. Monta os modificadores: o primeiro é o de maior prioridade (Alt > Shift > Ctrl) e o segundo é guardado à parte.
5. Shift+Ctrl+**Tab**, com `GetBuilderAuthority()` (`nw:0x1014e820`): alterna uma janela de builder (GM) [I].
6. `NCShortcutManager::GetCommand(tecla, mod1, mod2)` (`nw:0x10049120`) procura o comando na tabela do estado atual e depois numa segunda tabela, a de chave de estado vazia [I]. `ExecuteShortcutCommand` (`nw:0x10172350`) executa. Se executou, retorna 1 (tecla consumida).
7. Se nada casou, retorna 0, e a tecla segue para as ligações do `user.ini` (movimento, câmera) [I] (precedência da spec 05 §5.6).

**Correção da spec** (05 §5.6, "Chat × dígitos", que estava [I]/[N]): agora é [O].
- Com `EnterChatting=True`, letras e dígitos sem Alt chegam à tabela do xdat: `1`–`0`, `-`, `=` usam atalhos, e `V`, `T`, `K`… abrem janelas. Enter foca o chat (`FocusChatWindow`).
- Com `EnterChatting=False`, qualquer tecla de digitação sem Alt foca o chat. Só F1–F12, Tab, Esc, NumLock e as combinações com Alt funcionam como atalho. Shift+F e Ctrl+F são F-teclas e também funcionam.
- [V] Se o caractere que causou o foco é inserido no chat.

**l2unity** (`u:App.cs:2483-2621`, `u:UI/L2Shortcuts.cs`):
- usa só a tabela `GamingState` e casa os modificadores de forma exata (`u:UI/L2Shortcuts.cs:59-69`);
- não implementa a regra do passo 2: com `EnterChatting=False`, as letras continuam sendo atalhos;
- não implementa os passos 3 e 5;
- converte só A–Z, 0–9, F1–F12, Esc, Enter, Tab, PgUp/PgDn, `-`, `=`, `[`, `]` (`u:UI/L2Shortcuts.cs:16-35`).

## 2. GamingState (xdat, 118 entradas)

Na coluna Exec, `N` = executado pelo nativo e `S` = repassado ao script como `EV_ShortcutCommand` (spec 05 §5.1). "Tecla / Alt+" significa as duas formas; a sem Alt só vale com `EnterChatting=True` (§1).

| Tecla | Comando | O que faz (Interlude) | Exec | l2unity |
|---|---|---|---|---|
| F1–F12 | `UseShortcutItem Num=0..11` | usa o slot da barra principal na página atual | N | feito (`u:UI/GameUi.Hud.cs:42-45`) |
| Ctrl+F1–F12 | idem | com Ctrl: force (atacar ou usar em alvo não hostil) | N | feito |
| Shift+F1–F12 | idem | com Shift: usar sem se mover | N | feito |
| 1–0, `-`, `=` | `UseShortcutItem Num=0..11` | idem (só com `EnterChatting=True`) | N | parcial: funciona sempre, sem depender da opção |
| Ctrl+1–0 | idem | force | N | feito |
| Alt+1–0, Alt+F1–F10 | `SetShortcutPage Num=0..9` | página da barra principal | N | feito (`:46-48`) |
| Esc | `TargetCancel` | cancela o alvo. Conflita com `CameraModeSelectingCancel` do `user.ini` [V] | N | feito (`u:App.cs:2605`) |
| Enter | `FocusChatWindow` | foca o chat | N | feito |
| Tab | `TabShowInventoryWindow` | alterna o inventário | N | feito |
| V / Alt+V | `ShowInventoryWindow` | inventário | N | feito |
| T / Alt+T | `ShowMainWindow Tab=Status` | MainWnd, aba Status | N | feito |
| K / Alt+K | `Tab=Skill` | aba Skills | N | feito |
| C / Alt+C | `Tab=Action` | aba Ações | N | feito |
| U / Alt+U | `Tab=Quest` | aba Quests | N | parcial (a aba está vazia) |
| N / Alt+N | `Tab=Pledge` | aba Clã | N | parcial (a aba está vazia) |
| I / Alt+I | `ShowMainWindow` | MainWnd na última aba | N | feito |
| X / Alt+X | `ShowSystemMenuWindow` | menu do sistema | N | feito |
| B / Alt+B | `ShowBoardWindow` | Community Board | N | feito (`u:App.cs:2608`) |
| M / Alt+M | `RequestOpenMinimap` | pede o mapa ao servidor | N | feito (`u:App.cs:2611`) |
| R / Alt+R | `ShowMacroListWindow` | lista de macros (`EV_MacroShowListWnd`) | N | **falta** (só registra no log, `u:App.cs:2617`) |
| Y / Alt+Y | `ShowMessengerWindow` | Messenger | N | feito |
| F / Alt+F | `ShowPartyBuff` | alterna buff/debuff na PartyWnd | N | feito (`u:UI/GameUi.Hud.cs:52-56`) |
| P / Alt+P | `ApplyMinFrame` | alterna "manter FPS mínimo" (`Option.ini IsKeepMinFrameRate`) [I] | N | **falta** |
| G / Alt+G | `ShowGMWindow` | GMWnd (só GM) | N | falta (GM, baixa prioridade) |
| O / Alt+O | `ShowGMPetitionWindow` | petição | N | **falta** |
| Alt+J | `ShowChatWindow` | alterna o chat e a SystemMsgWnd (`IL:Shortcut.uc:54,71-89`) | S | feito |
| Alt+H | `HideAllWindow` | esconde toda a UI (alterna) | N | feito |
| Alt+W | `CloseAllWindow` | fecha as janelas. O script só esconde o SystemMenuWnd (`IL:Shortcut.uc:51,207-210`); o resto é nativo [V] | S | parcial: esconde 6 janelas fixas (`u:UI/GameUi.Hud.cs:79-84`) |
| Alt+PgUp / Alt+PgDn | `SetPrevChatType` / `SetNextChatType` | aba de chat anterior ou próxima, com o quirk de CLAN (spec 05 §5.1) | S | feito |

## 3. Outros estados (xdat)

| Estado | Teclas | l2unity |
|---|---|---|
| `EulaMsgState`, `ChinaWarnMsgState`, `ServerListState` | Enter → OK da tela (`EulaWndOKButton`, `ChinaWarnMsgOKButton`, `ServerSelectOKButton`) | parcial: Enter na lista de servidores e na seleção de personagem é tratado à mão (`u:App.cs:2473-2479`); não há tela de EULA |
| `BroadcastObserverState` (13) | câmera e Alt+J (spec 05 §5.3) | **falta** (a tabela não é lida) |
| `EventMatchObserverState` (13) | `EventMatch*` (spec 05 §5.4) | falta |
| `DebugState`, `GMCameraState` | Alt+J; Shift+`[` `]` velocidade; Shift+E/C altura; Alt+H sai (spec 05 §5.5) | falta (GM) |
| `OlympiadObserverState` | sem tabela própria; entra na regra do chat do §1, passo 2 | falta (observador da Olimpíada) |

## 4. Ligações do `user.ini` (movimento e câmera)

Valores do cliente **oficial** (spec 05 §5.6, correção). Valem quando o xdat não tem comando para a tecla.

| Tecla | Ligação | l2unity |
|---|---|---|
| Botão esquerdo | `PlayerPawnMoveTo` (andar, selecionar, falar); trava de pedido `UGameEngine+0x64` (spec 05 §5.7) | feito (`u:App.cs:2492-2516`); segurar 300 ms segue o cursor (comportamento próprio do port) |
| Botão direito | segurar gira a câmera | feito |
| Botão do meio | `TurnBack` | feito (`u:App.cs:2508`) |
| W / ↑, S / ↓ | andar para frente / para trás | feito (`u:App.cs:2575-2579`) |
| A / ←, D / → | girar | feito |
| Espaço / Ctrl | subir / descer ao voar ou nadar (`KeyboardMoveStart Dir=16/32`); Espaço também pausa o replay | **falta** |
| NumLock | `KeyboardPermanentMove` (correr sem parar) | **falta** |
| Roda | zoom (`ZoomInPress` / `ZoomOutPress Speed=50`) | feito (`u:App.cs:2517-2523`) |
| NumPad 7/9, 4/6, 1/3 | zoom ±2,0 / ±0,1 / ±0,01 | **falta** |
| NumPad 8/2 | altura da câmera ±20 | **falta** |
| Home | `FixedDefaultCamera` | feito (preset de câmera, `u:App.cs:2588-2592`) [V] equivalência |
| PgUp / PgDn | `FixedDefaultCamera Down` / `Up` | feito (preset −1/+1) [V] |
| End | `TurnBack` | feito |
| Esc | `CameraModeSelectingCancel` | não se aplica (o xdat tem prioridade, §1) |
| PrintScrn | `shot` (captura de tela) | **falta** |
| GreyPlus / GreyMinus, GreySlash / GreyStar | velocidade de voo, velocidade do replay | falta (baixa prioridade) |
| Joypad (Joy1..16) | barra joypad (spec 05 §3.8) | falta (sem suporte a joypad) |

## 5. Teclas dentro das janelas (Interlude)

| Onde | Tecla | Efeito | Evidência | l2unity |
|---|---|---|---|---|
| Chat (campo) | Enter | `ProcessChatMessage`, limpa o campo; `OldChatting` repõe o prefixo da aba; `EnterChatting` solta o foco | `IL:ChatWnd.uc:129-159` | feito (`u:UI/GameUi.cs:557-588`) |
| Chat (campo) | [V] tecla que gera o código 3 | responde ao último sussurro: insere `"nome ` (`AttachWhisperName(0)` → `EV_ChatWndSetString` 560) | `NCChatWnd::OnChatEditBox` `nw:0x1013bf90` → `nw:0x10139700` | **falta** |
| Chat (campo) | [V] teclas que geram os códigos 4 e 5 | percorre os nomes de sussurro guardados (`ChangeWhisperName(1/0)`, `nw:0x101398c0`) | idem | **falta** |
| Chat (campo) | prefixos `! " # @ + $ % & * ~` e crase | canal (spec 02) | spec 02 | feito (`u:UI/L2Chat.cs:14-96`) |
| Chat (campo) | `/comando` | 114 comandos (spec 02) | spec 02 | parcial (`u:UI/L2Commands.cs`) |
| DialogBox | Enter | ação padrão: OK se `DialogSetDefaultOK`, senão Cancel | `IL:DialogBox.uc:429-448` | [V] (só OK/Cancel com mouse; Enter não conferido) |
| EditBox com ordem de Tab | Tab | próximo controle da cadeia `SetTabOrder` | `IL:MacroEditWnd.uc:83-93` | falta (MacroEditWnd falta) |
| HTML de NPC | teclas no `NCHtmlViewer` (slot 102) | [V] rolagem pelo teclado | `nw:0x10081790` | falta |
| TeaserSlideWnd | `OnKeyUp` | avança o slide | `IL:TeaserSlideWnd.uc:746` | fora do escopo |

## 6. Teclas que só a P166 tem (posteriores)

[O] A P166 trata teclas no script em 31 classes. Os exemplos que interessam: Enter/Esc em diálogos e relatórios (`P166:DialogBox.uc:974`, `PrivateShopWndReport.uc:1069`), Tab no correio (`PostWriteWnd.uc:1109`), Ctrl+C nas ferramentas (`UICommandWnd.uc:1444`) e o `OnKeyDown` do armazém (`WarehouseWnd.uc:134`). O `Shortcut.uc` da P166 trata cerca de 60 comandos novos: `FN_MuteAllAudio`, `FN_UILocReset`, `ShortcutAssign`, `getPrevTarget`/`getNextTarget` da arena, `ShopSellAll` etc. (`P166:Shortcut.uc:85-811`). O Interlude trata 4 (`IL:Shortcut.uc:51-64`). A P166 também tem `InputAPI.IsShiftPressed/IsCtrlPressed/IsAltPressed/GetKeyString` (`P166 NWindow\Classes\InputAPI.uc`), que o Interlude não tem. Nada disso entra nas tarefas.
