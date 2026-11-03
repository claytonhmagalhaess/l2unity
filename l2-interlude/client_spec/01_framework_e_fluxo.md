# 01 — Framework de interface e fluxo de telas (Lineage II Interlude)

Escopo: como a UI do cliente é montada e dirigida (layout declarativo + scripts + natives), quais estados de UI existem e como se passa de uma tela a outra, e o que a UI envia ao servidor. Complementos: `90_catalogo_eventos.md` (os 322 `EV_*`, lado script), `91_eventos_nativos.md` (os mesmos eventos, lado `NWindow.dll`), `92_protocolo_opcodes.md` (pacotes).

**Marcação de evidência** usada em todo o documento:
- **[O] Observado** — está no código/dado; cita `arquivo:linha` ou o artefato.
- **[I] Inferido** — dedução; diz de onde.
- **[N] A validar no nativo** — comportamento implementado em C++ (`NWindow.dll`/`engine.dll`) que não está nos artefatos lidos.

**Onde estão as fontes citadas**
| abreviação | caminho |
|---|---|
| `X.uc:n` (classes de framework) | `export/uc/NWindow/X.uc` |
| `X.uc:n` (janelas) | `export/uc/Interface/X.uc` |
| `layout/X.txt` | `out/re/layout/X.txt` (árvore legível do `Interface.xdat`; JSON completo em `out/re/interface_layout.json`) |
| `_shortcuts.txt`, `_wnddefpos.txt` | `out/re/layout/` |
| `*.groovy` | `ext/src/xdat_schema_ct0/` (esquema do xdat, validado byte a byte por `scripts/xdat_parse.py`) |
| `WindowsInfo.ini`, `l2.ini`… | `export/client_cfg/` |
| strings do binário | extraídas de `C:\Program Files (x86)\Lineage II Interlude\System\NWindow.dll` / `engine.dll` (ASCII e UTF‑16LE, nomes RTTI `.?AV…@@`, nomes de função em mensagens de log `Classe::Metodo`) |
| exports | `out/re/nwindow_exports.txt`, `out/re/nwindow_script_callbacks.txt`, `out/re/engine_network_and_console.txt` |

---

## 1. Arquitetura

### 1.1 Camadas

```
engine.dll   UGameEngine / UNetworkHandler (Request*, recepção de pacotes)
             UL2ConsoleWnd  (máquina de estados do console: enum L2ConsoleState, ExecLobbyEvent,
                             SpawnDefaultCharacter, MoveCameraByState …)
   │
NWindow.dll  NConsoleWnd  (ponte rede→UI: Receive*/On*/Request*, GotoLogin, GotoCharacterSelect,
                           SetUIState, SaveWndInfo, ExecuteShortcutCommand …)
             UIGameStateManager + UI*State (estados de UI)          NCVirtualWndMain (raiz, foco, captura, modal)
             XMLUIManager / XML*Data (carrega Interface.xdat)       NCWnd / NCFrameWnd / NC<Controle> (controles)
             telas nativas: LoginWnd, NCAuthWnd, NCEulaWnd, NCServerSelectWnd, NCLobbyWnd, NCPawnCreateWnd …
             exec* das 817 natives de NWindow.u; despachante de eventos (FUN_100d1790)
   │
NWindow.u    UIEventManager → UIScript / WindowHandle / UIAPI_* / UIDATA_* / *API   (declarações; corpo nativo)
Interface.u  UICommonAPI → 142 classes de janela (lógica de UI em UnrealScript)
Interface.xdat  layout declarativo das 140 janelas + 8 grupos de atalhos + 56 posições padrão
```
- [O] Classes nativas e de estado: RTTI do `NWindow.dll` (`.?AVNCVirtualWndMain@@`, `.?AVUIGamingState@@`, `.?AVXMLUIManager@@`, `.?AVNCLobbyWnd@@` …) e mensagens `UIGameStateManager::SetState`, `NConsoleWnd::GotoLogin` etc.
- [O] `l2.ini` liga as classes: `L2Console=NWindow.ConsoleWnd`, `L2Font=NWindow.L2Font`, `L2NetHandler=Engine.NetHandler` (seção da engine, linhas ~100–101).
- [O] `UIEventManager extends Interactions` (`UIEventManager.uc:1`); `UIScript extends UIEventManager` (`UIScript.uc:1`); `WindowHandle extends UIEventManager` (`WindowHandle.uc:1`); `UICommonAPI extends UIScript` (`UICommonAPI.uc:1`). Quase todas as janelas estendem `UICommonAPI` (algumas `UIScript` direto: `MainWnd.uc:1`, `LoadingWnd.uc:1`, `BenchMarkMenuWnd.uc:1`).
- [O] As mensagens `Loading XML documents...`, `Finished loading XML documents with no error.`, `Reloading XMLUI...` e as classes `XMLWindowData`, `XMLButtonData`, …, `XMLDefaultPositionData`, `XMLShortcutData`, `XMLConstant*Data`, `XMLUIAbsoluteSize/XMLUIRelativeSize` mostram que o `.xdat` é a forma binária de um layout originalmente XML. [I] Cada tipo de controle do xdat tem um `XML<Tipo>Data` e um `NC<Tipo>` nativo (ex.: `XMLButtonData`↔`NCButton`↔`ButtonHandle`).

### 1.2 Interface.xdat (layout declarativo)

#### 1.2.1 Estrutura do arquivo — [O] `XDAT.groovy`
```
int32 nWindows;   Window[nWindows]            (140 janelas raiz)
int32 nShortcut;  Shortcut[nShortcut]         (8 grupos de atalho de teclado, por estado)
int32 1;          (constante)
int32 nDefPos;    WndDefPos[nDefPos]          (56 posições padrão)
[20 bytes de cauda opcionais]
```
Codificação: `String` = FString UE2 (compact index + bytes), `int/float/bool` = 4 bytes LE, enum = int32, lista = int32 + itens; itens polimórficos (`children`) começam pelo nome da classe (`scripts/xdat_parse.py:1-10`).

#### 1.2.2 `DefaultProperty` — campos comuns a todo controle — [O] `DefaultProperty.groovy`
| campo | tipo | significado |
|---|---|---|
| `name` | str | nome do controle; endereçado por `"Janela.Controle"` nas natives (`GetHandle("DialogBox.DialogBoxEdit")`, `DialogBox.uc:153`) e só por `name` nos callbacks (`OnClickButton("OKButton")`, `DialogBox.uc:163`) |
| `superName` | str | herança de layout: [O] só 3 janelas usam — `GMInventoryWnd←InventoryWnd`, `GMWarehouseWnd←WarehouseWnd`, `ManorShopWnd←ShopWnd`; espelha a herança de script (`GMInventoryWnd.uc:1`, `ManorShopWnd.uc:1`). [I] a janela é instanciada a partir do layout da super e sobrescreve campos |
| `unk2, unk3` | int (bool) | [O] **`alwaysOnTop`**, **`alwaysOnBack`** (atributos XML lidos por `XMLUIData` slot 1 e gravados por setters em `+0x1C`/`+0x20`; −1 = não definido) |
| `unk4` | str | nome do pai (vazio na raiz; nos filhos = janela dona, ex. `"AbnormalStatusWnd"`) [O] JSON |
| `unk5, unk6` | str | [O] **`TabOrder.preOrder`**, **`TabOrder.postOrder`** (controle anterior/seguinte na ordem de Tab; `+0x3C`/`+0x48`); sempre `undefined` neste xdat |
| `unk7` | int (bool) | [O] **`Position.anchored`** (6º argumento do setter de `Position`, `+0x54`) |
| `size` (bool) → `size_absolute_values` (bool) → se relativo: `compact 0`, `float pctW, pctH`; depois `int w, h` | | **tamanho**: absoluto `w×h`, ou relativo `largura = pctW·pai + w`, `altura = pctH·pai + h` (ex. `100%-12 x 0%+46`, `layout/PartyWnd.txt`). 215 controles usam relativo. [I] fórmula pela leitura dos valores (ex. `BackTexture 100%+0 x 100%+0` cobre a janela inteira, `layout/DialogBox.txt:2`) |
| `anchor` (bool) → `int pontoA, int pontoB, str ctrl, int x, int y` | | **âncora**, ver 1.2.3 |
| `unk22..24` | int | [O] `unk22` = **`virtual`** (`+0x60`), `unk23` = **`passThrough`** (`+0x64`, não captura o mouse); `unk24` (`+0x68`) não vem de nenhum atributo XML: o construtor e o `Reset` zeram, sempre 0 |
| `popupType` | str | tipo de tooltip (ver 1.9) |
| `popupValue` | int | sempre −9999 nas janelas; [I] id de sysstring do tooltip quando `popupType="Text"` (ver 1.9) |

`Alignment` (enum, `Alignment.groovy`): `NONE, TOP_LEFT, TOP_CENTER, TOP_RIGHT, CENTER_LEFT, CENTER, CENTER_RIGHT, BOTTOM_LEFT, BOTTOM_CENTER, BOTTOM_RIGHT`. Em script os mesmos pontos são strings `"TopLeft" "TopCenter" "TopRight" "CenterLeft" "CenterCenter" "CenterRight" "BottomLeft" "BottomCenter" "BottomRight"` (`SetAnchor`, `DialogBox.uc:332-336`, `PartyWnd.uc:73`).

#### 1.2.3 Semântica da âncora (corrige o nome dos campos do esquema)
O esquema groovy chama os dois ints de `anchor_parent` e `anchor_this` (e `xdat_parse.py:149` grava `parent`/`this` nessa ordem; `layout/*.txt` imprime `@{this}->{ctrl|pai}.{parent}(x,y)`). A geometria mostra que:
- **1º int (`parent` no JSON) = ponto do PRÓPRIO controle**; **2º int (`this` no JSON) = ponto do controle de referência** (`ctrl`, ou o pai se `ctrl` vazio); `(x,y)` = deslocamento em pixels.
- Prova [I, geometria do dado]: no teclado numérico do `DialogBox` (`layout/DialogBox.txt`), `num1` está em `TOP_LEFT(7,7)` do pai, `num4` tem `this=BOTTOM_LEFT, ctrl=num1, parent=TOP_LEFT, (0,1)` e `num2` tem `this=TOP_RIGHT, ctrl=num1, parent=TOP_LEFT, (1,0)`. Só a leitura "TOP_LEFT de num4 = BOTTOM_LEFT de num1 + (0,1)" mantém as 4 linhas de 28 px dentro do painel de 128 px; a leitura inversa poria `num4` em y negativo.
- O mesmo vale para `SetAnchor(Ctrl, AnchorWnd, RelativePoint, AnchorPoint, dx, dy)` em script: `RelativePoint` = ponto da referência, `AnchorPoint` = ponto do próprio controle — ex. ícones de buff "à direita" da barra de party: `SetAnchor("PartyWnd.PartyStatusWnd"$idx, "TopRight", "TopLeft", -3, 5)` (`PartyWnd.uc:73`) [I].
- `ctrl` referencia irmão pelo caminho completo (`DialogBox.num1`); 194 controles ancoram num irmão, o resto no pai [O].
- Ponto próprio `NONE` aparece 192 vezes (sempre com referência `TOP_LEFT`, ex. `PartyStatusWnd1 @TOP_LEFT->pai.NONE(12,46)`); [I] tratar `NONE` como `TOP_LEFT`. [N] confirmar.
- Janela raiz ancora na tela (viewport). Posição salva do usuário substitui a âncora (ver 1.11).

#### 1.2.4 Campos próprios de `Window` (`Window.groovy`: `unk100..unk139`, `children`)
[O] Nomes originais recuperados do `NWindow.dll` (`scripts/xdat_field_names.py`, `out/re/xdat_field_names.json`). O cliente tem dois carregadores do mesmo objeto `XMLWindowData`: o leitor da versão **XML** do layout (slot 1 da vtable, `0x100f4020`), que lê cada atributo pelo nome (`L"savePosition"`…) e grava num membro, e o **serializador binário** do `.xdat` (slot 25, `0x100f3c20`), que lê os mesmos membros na ordem do arquivo. Cruzando os dois, cada posição do registro ganha o nome do atributo. Enums pelos conversores: direção `FUN_100ce7f0` (Left=1, Right=2, Top=3, Bottom=4), tamanho `FUN_100cec80` (Small=1), animação `FUN_100ceb40` (AlphaTransition=3, PositionTransition=4).

**Por que alguns campos parecem lixo:** os campos de um nó opcional (`Frame`, `ResizeFrame`, `Drawer`, `ShowHideAnim`) só são gravados quando o nó existe no XML original. Sem o nó, a estrutura não é inicializada e o compilador do xdat gravou o que estava na memória. Ex.: `ShowHideAnim` só em `TeaserSlideWnd` e `ZoneTitleWnd` (`type` 3 = alfa; em `ZoneTitleWnd` `seconds` = 2,0); `Drawer` só nas 5 gavetas (`offset` 20, `ClanDrawerWnd` −66); `Frame.expand*` em `TargetStatusWnd` (46 → 76, abre a linha de MP) e `OlympiadPlayer1/2Wnd` (46 → 126).

| campo | atributo XML | tipo | membro | nota |
|---|---|---|---|---|
| `unk100` | `parent` | string | `+0x88` | janela-mãe lógica |
| `unk101` | `backTex` | string | `+0x94` | textura de fundo |
| `unk102` | `script` | string | `+0xA0` | classe UnrealScript da janela |
| `unk103` | `state` | string | `+0xAC` | estado de UI em que a janela existe |
| `unk104` | `frame` | bool | `+0xB8` | tem moldura (nó Frame) |
| `unk105` | `iconable` | bool | `+0xBC` | pode ser minimizada para ícone |
| `unk106` | `stuckable` | bool | `+0xC0` | gruda em outras janelas |
| `unk107` | `hidden` | bool | `+0xC4` | começa escondida |
| `unk108` | `alwaysFullAlpha` | bool | `+0xC8` | ignora a transparência global |
| `unk109` | `savePosition` | bool | `+0xCC` | grava a posição (WindowsInfo.ini) |
| `unk110` | `saveSize` | bool | `+0xD0` | grava o tamanho |
| `unk111` | `title` | int (sysstring) | `+0xE4` | título |
| `unk112` | `resizeframe` | bool | `+0xD4` | tem faixa de redimensionamento (nó ResizeFrame) |
| `unk113` | `Frame.size` | enum | `+0xEC` | Small=1, senão 0 |
| `unk114` | `Frame.direction` | enum | `+0xF0` | Left=1, Right=2, Top=3, Bottom=4 (padrão 3) |
| `unk115` | `Frame.exitbutton` | bool | `+0xD8` | botão fechar |
| `unk116` | `draggable` | bool | `+0xDC` | arrastável |
| `unk117` | `ResizeFrame.direction` | enum | `+0xF4` | Left=1, Right=2, Top=3, Bottom=4 |
| `unk118` | `ResizeFrame.x` | int | `+0xF8` |  |
| `unk119` | `ResizeFrame.y` | int | `+0xFC` |  |
| `unk120` | `ResizeFrame.width` | float | `+0x100` |  |
| `unk121` | `ResizeFrame.height` | float | `+0x104` |  |
| `unk122` | `ResizeFrame.maxIncrease` | int | `+0xE8` | quanto a janela pode crescer |
| `unk123` | `Frame.expandbutton` | bool | `+0x118` | botão expandir |
| `unk124` | `Frame.expandOrgHeight` | int | `+0x11C` | altura recolhida |
| `unk125` | `Frame.expandExpHeight` | int | `+0x120` | altura expandida |
| `unk126` | `Drawer.direction` | enum | `+0x124` | lado da gaveta: Left=1, Right=2, Top=3, Bottom=4 |
| `unk127` | `Drawer.offset` | int | `+0x128` | deslocamento |
| `unk128` | `Drawer.directionFixed` | bool | `+0x12C` |  |
| `unk129` | `Drawer.ownerWindow` | string | `+0x130` | janela dona da gaveta |
| `unk130` | `ShowHideAnim.ShowAnim.type` | enum | `+0x13C` | AlphaTransition=3, PositionTransition=4 |
| `unk131` | `ShowHideAnim.HideAnim.type` | enum | `+0x140` | AlphaTransition=3, PositionTransition=4 |
| `unk132` | `ShowHideAnim.ShowAnim.direction` | enum | `+0x148` | Left=1, Right=2, Top=3, Bottom=4 |
| `unk133` | `ShowHideAnim.ShowAnim.seconds` | float (bits) | `+0x144` | duração |
| `unk134` | `ShowHideAnim.HideAnim.direction` | enum | `+0x150` | Left=1, Right=2, Top=3, Bottom=4 |
| `unk135` | `ShowHideAnim.HideAnim.seconds` | float (bits) | `+0x14C` | duração |
| `unk136` | `Iconable.IconName` | string | `+0x108` | textura do ícone minimizado |
| `unk137` | `Iconable.TooltipIdx` | int (sysstring) | `+0x114` | dica do ícone |
| `unk138` | `hookKeyInput` | bool | `+0xE0` | captura o teclado |
| `unk139` | `WorkingConfiguration` | string | `+0x158` | configuração ("Game") |
| `children` | lista polimórfica | controles filhos (podem ser outras `Window`) |

#### 1.2.5 Tipos de controle (31 classes no xdat) e handle de script correspondente
Contagem [O] em `interface_layout.json`; campos [O] nos `.groovy`; handle/UIAPI [O] em `NWindow.u`.
| xdat | qtd | campos próprios (groovy) | Handle (script) | API estática |
|---|---|---|---|---|
| Window | 335 | ver 1.2.4 | `WindowHandle` | `UIAPI_WINDOW` |
| TextBox | 662 | text, textAlign(Undefined/Left/Center/Right/MacroIcon), offsetY, backTex, **fontType**, sysstring, systemMsg, textColor (ARGB), emoticon, autosize | `TextBoxHandle` | `UIAPI_TEXTBOX` |
| Button | 380 | normalTex, pushedTex, highlightTex, dropTex, buttonName (sysstring), noHighlight, defaultSoundOn, disableTime | `ButtonHandle` | `UIAPI_BUTTON` |
| Texture | 372 | file, type (Stretch/Normal/Tile/Draggable/Control/Mask), layer (None/Normal/Background), u, v, uSize, vSize, alpha 0..255, isAnimTex | `TextureHandle` / `AnimTextureHandle` | `UIAPI_TEXTURECTRL` |
| CheckBox | 102 | titleIndex (sysstring), checked, leftAligned, maxWidth, check/unCheck/disable/disableCheck textures | `CheckBoxHandle` | `UIAPI_CHECKBOX` |
| ShortcutItemWindow | 88 | (ver groovy) | — | `UIAPI_SHORTCUTITEMWINDOW` |
| EditBox | 53 | type (NORMAL/CHAT/PASSWORD/COUNT/NUMBER/…), maxLength, showCursor, chatMarkOn | `EditBoxHandle` | `UIAPI_EDITBOX` |
| ItemWindow | 51 | col,row,maxItemNum, iconWidth/Height, gapX/Y, offsetX/Y, background/selected/unselected item tex+size, noSelectItem, **noItemDrag**, buttonClick, useCoolTime, noScroll, outLineUp/Down | `ItemWindowHandle` | `UIAPI_ITEMWINDOW` |
| ComboBox | 38 | values[] {sysString, systemMsg, text, reserved} | `ComboBoxHandle` | `UIAPI_COMBOBOX` |
| ListCtrl | 31 | `maxRow, showRow, useScroll, contentsHeight, headerHeight` (unk100..104), colunas[] {textStringId, width, `bNumber`, `bAscend`, `bClickEnable`} | `ListCtrlHandle` | `UIAPI_LISTCTRL` |
| BarCtrl | 28 | foreTexture, backTexture, uSize, vSize | `BarHandle` | `UIAPI_BARCTRL` |
| Tab | 13 | tabs[] {buttonName, **target** (janela-página), width, height, normalTex, pushedTex, movable, gap, tooltip, noHighlight} | `TabHandle` | `UIAPI_TABCTRL` |
| StatusIconCtrl | 10 | noClip, noTooltip | `StatusIconHandle` | `UIAPI_STATUSICONCTRL` |
| TreeCtrl | 9 | — | — | `UIAPI_TREECTRL` |
| NameCtrl | 7 | — | `NameCtrlHandle` | `UIAPI_NAMECTRL` |
| ChatWindow | 6 | lineGap… | `ChatWindowHandle` | (via TextListBox) |
| InvenWeight | 6 | — | — | `UIAPI_INVENWEIGHT` |
| HtmlCtrl | 5 | viewType (''/Normal/Help/BBS/Tutorial) | `HtmlHandle` | `UIAPI_HTMLCTRL` |
| RadioButton | 5 | sysstring, radioGroupID, isChecked | — | `UIAPI_WINDOW.GetSelectedRadioButtonName` |
| Progress | 4 | backTexture, barTexture, gap | — | `UIAPI_PROGRESSCTRL` |
| SliderCtrl | 4 | — | — | `UIAPI_SLIDERCTRL` |
| StatusBar | 4 | title, textureWidth/Height, fore/back/warn/regen textures | — | `UIAPI_STATUSBARCTRL` |
| EffectButton | 3 | — | — | `UIAPI_EFFECTBUTTON` |
| TextListBox | 3 | — | `TextListBoxHandle` | `UIAPI_TEXTLISTBOX` |
| MultiEdit | 3 | — | — | `UIAPI_MULTIEDITBOX` |
| MinimapCtrl | 2 | — | — | `UIAPI_MINIMAPCTRL` |
| FishViewportWindow, ScrollArea, MultiSellItemInfo, MultiSellNeededItem, Radar | 1 cada | — | — | `UIAPI_MULTISELL*`, `UIAPI_RADAR` |
`DrawPanelHandle` (`DrawPanelHandle.uc`) existe só em script/nativo (`XMLDrawPanelData` no RTTI) — nenhum no xdat deste cliente [O].

Valores sentinela [O]: `-9999` = "não definido" (int/float), `'undefined'` = string não definida, `-1` = flag não definida.

#### 1.2.6 `WndDefPos` e `Shortcut` — ver 1.11 e 1.7.

### 1.3 Interface.u — scripts de janela

#### 1.3.1 Ligação janela ↔ script
- [O] `Window.unk102` nomeia a classe; a classe é a "dona" de todos os callbacks dos controles daquela janela (os ids de controle chegam sem prefixo, `DialogBox.uc:161-187`).
- [O] `GetScript("DialogBox")` devolve a instância do script de uma janela pelo nome (`UIScript.uc:129`; 92 usos, ex. `UICommonAPI.uc:28`). [I] há uma instância por janela raiz com `unk102`.
- [O] `GetHandle("Janela.Controle")` devolve o handle tipado (`UIScript.uc:408`; cast `TextBoxHandle(GetHandle(...))`, `DialogBox.uc:152`). Handles também nascem no nativo (`NC<Tipo>::CreateScriptHandle`, strings do `NWindow.dll`).
- [O] `m_hOwnerWnd` (`UIScript.uc:5`) — handle da janela dona do script.
- [O] Classes de idioma sem corpo: `LoadingWnd_e/_k/_j/_tw/_cn/_th`, `ReplayLogoWnd_*`, `TeaserSlideWnd_*` estendem a base e só mudariam `defaultproperties` (ex. `LoadingWnd_e.uc:1`). Os `defaultproperties` (texturas `LoadingTexture15/18/Free`) **não** estão no texto exportado. [N] como o cliente escolhe a variante (sufixo por `[LanguageSet] Language` do `l2.ini`?) e quais são as texturas.

#### 1.3.2 Ciclo de vida e callbacks (os 46 eventos que o framework chama)
Declarados em `UIScript.uc:273-367`; os 46 nomes coincidem 1:1 com os exports `UUIScript::eventOn*` do `NWindow.dll` (`out/re/nwindow_script_callbacks.txt`) [O]. "usos" = nº de classes de Interface.u que sobrescrevem [O].
| callback | assinatura | quando é chamado | usos |
|---|---|---|---|
| OnLoad | `()` | após criar a janela a partir do xdat; registrar eventos/estados, pegar handles (`DialogBox.uc:150`) | 120 |
| OnTick | `()` | todo frame [I] | 2 |
| OnShow / OnHide | `()` | ao mostrar/esconder (inclui troca de estado [I]) | 54 / 36 |
| OnEvent | `(int a_EventID, string a_Param)` | evento `EV_*` registrado (1.4) | 106 |
| OnTimer | `(int TimerID)` | `SetTimer/SetUITimer` vencido (`WindowHandle.uc:11`, `UIAPI_WINDOW.uc:10`) | 8 |
| OnMinimize | `()` | botão minimizar da moldura (`MainWnd.uc:18`) | 1 |
| OnEnterState / OnExitState | `(name a_PreStateName)` / `(name a_NextStateName)` | troca de estado de UI (1.6) | 21 / 3 |
| OnSendPacketWhenHiding | `()` | ao esconder janela que precisa avisar o servidor (`NCFrameWnd::SendPacketWhenHiding`), ex. sair da sala de party (`PartyMatchWnd.uc:29`) | 5 |
| OnFrameExpandClick | `(bool bIsExpand)` | botão expandir da moldura (`NCFrameCtrl::OnExpandBtnClick`) | 2 |
| OnDefaultPosition | `()` | "restaurar posições padrão" (`SetDefaultPosition`, `UIScript.uc:202`) | 2 |
| OnKeyDown / OnKeyUp | `(EInputKey Key)` | tecla com a janela focada | 0 / 1 |
| OnLButtonDown / OnLButtonUp | `(WindowHandle a_WindowHandle, int X, int Y)` | clique esquerdo | 7 / 0 |
| OnLButtonDblClick, OnRButtonDown, OnRButtonUp, OnRButtonDblClick | `(int X, int Y)` | mouse | 0/0/2/0 |
| OnDropItem | `(string strID, ItemInfo infItem, int x, int y)` | item solto **sobre** o controle `strID` desta janela | 14 |
| OnDragItemStart / OnDragItemEnd | `(string strID, ItemInfo)` / `(string strID)` | início/fim de arrasto | 1 / 1 |
| OnDropItemSource | `(string strTarget, ItemInfo infItem)` | na janela **de origem**, quando o item foi solto em outro lugar (`UIScript.uc:302`; `strTarget=="Console"` = mundo, `InventoryWnd.uc:349`) | 2 |
| OnClickButton | `(string strID)` | Button; também Tab: `"<NomeDoTab><índice>"` (`MainWnd.uc:38` `"MainTabCtrl0"`) | 82 |
| OnClickButtonWithHandle | `(ButtonHandle)` | idem com handle | 3 |
| OnButtonTimer | `(bool bExpired)` | Button com `disableTime` [I] | 1 |
| OnTabSplit / OnTabMerge | `(string sName)` | aba destacada/reacoplada (TabElement.movable) | 1 / 1 |
| OnCompleteEditBox / OnChangeEditBox / OnChatMarkedEditBox | `(string strID)` | Enter / mudança de texto / marca de chat | 4 / 3 / 1 |
| OnClickListCtrlRecord / OnDBClickListCtrlRecord | `(string strID)` | ListCtrl | 2 / 12 |
| OnClickCheckBox | `(string strID)` | CheckBox | 5 |
| OnClickItem / OnDBClickItem / OnRClickItem / OnRDBClickItem | `(string strID, int index)` | ItemWindow | 10/9/2/0 |
| OnRClickItemWithHandle / OnDBClickItemWithHandle / OnSelectItemWithHandle | `(ItemWindowHandle, int a_Index)` | ItemWindow (variante com handle) | 1/1/1 |
| OnProgressTimeUp | `(string strID)` | Progress terminou (`DialogBox.uc:422`) | 2 |
| OnComboBoxItemSelected | `(string strID, int index)` | ComboBox | 9 |
| OnTextureAnimEnd | `(AnimTextureHandle)` | fim da animação | 2 |
| OnModifyCurrentTickSliderCtrl | `(string strID, int iCurrentTick)` | SliderCtrl | 1 |
[N] ordem exata (ex.: `OnLoad` de todas as janelas antes do 1º `OnEnterState`? `OnShow` chamado na troca de estado?), e se os callbacks de mouse disparam para filhos ou só para a raiz.

### 1.4 Eventos `EV_*`: assinatura, despacho, disparo pelo script
- [O] `RegisterEvent(int ev)` (`UIEventManager.uc:1187`) em `OnLoad` inscreve o script; o nativo chama `OnEvent(id, param)` dos inscritos. 106 classes tratam eventos; 304 dos 322 ids são registrados por alguém (`90_catalogo_eventos.md`).
- [O] `ExecuteEvent(int id, optional string param)` (`UIEventManager.uc:1177`) permite ao script disparar um evento para os outros scripts — 16 eventos são usados assim (ex.: `SystemMenuWnd.uc:74` dispara `EV_ShowBBS` com `Init=1`; `DialogBox.uc:362` dispara `EV_DialogOK`).
- [O] Nativo: despachante interno único (FUN_100d1790) chamado de ~331 pontos; 249 ids disparados por código nativo (`91_eventos_nativos.md`).
- [I] Entrega por difusão: todos os inscritos recebem; quem precisa filtrar faz no script (ex. `DialogIsMine()` compara o alvo gravado, `UICommonAPI.uc:51-58`). [N] ordem de entrega entre inscritos e se o emissor de `ExecuteEvent` também recebe.
- Ids são múltiplos de 10 com poucas exceções (571, 572, 1221, 1861/1862…), faixas por sistema (clã 320–500, chat 540–572, atalho 590–690, party 1140–1180…) [O].

### 1.5 Modelo de parâmetros (`param` string)
- [O] Construção: `ParamAdd(out string, "Chave", "valor")`, `ParamAddInt64` (`UIEventManager.uc:1180-1181`). Leitura: `ParseString/ParseInt/ParseInt64/ParseFloat(param, "Chave", out v)` que retornam `bool` (achou ou não) (`:1182-1185`). Uso típico com default: `if (!ParseInt(a_Param, "MsgColorR", r)) r = 255;` (`OnScreenMessageWnd.uc:373-374`).
- [O] Listas são achatadas com sufixo numérico: `Max`/`Count` + `SkillID_<i>`, `ID_<i>` (`AbnormalStatusWnd.uc:194-201`, `MacroListWnd.uc:152-166`); pedidos ao servidor também: `merchant`, `num`, `classID<i>`, `count<i>`, `serverID<i>` (`ShopWnd.uc:468-488`).
- [O] Registros prontos: `ParamToItemInfo` (≈45 chaves: `classID, level, name, additionalName, iconName, description, itemType, serverID, itemNum, slotBitType, enchanted, blessed, damaged, equipped, price, reserved, defaultPrice, refineryOp1/2, currentDurability, weight, materialType, weaponType, physicalDamage, magicalDamage, shieldDefense, shieldDefenseRate, durability, crystalType, randomDamage, critical, hitModify, attackSpeed, mpConsume, avoidModify, soulshotCount, spiritshotCount, armorType, physicalDefense, magicalDefense, mpBonus, consumeType, ItemSubType, iconNameEx1..4, arrow, recipe`) — `UICommonAPI.uc:199-258`; `ParamToRecord` para ListCtrl (`szReserved, nReserved1..3, MaxColumn, szData_<i>, szReserved_<i>, nReserved1_<i>..3_<i>`) — `UICommonAPI.uc:260-280`.
- [O] O mesmo formato textual `Chave=Valor` aparece nos atalhos do xdat (`UseShortcutItem Num=0`, `ShowMainWindow Tab=Status`, `_shortcuts.txt`).
- [N] Serialização exata gerada por `ParamAdd` (separador, aspas/escape de valores com espaço) e regra de casamento do `Parse*`. [I] É o padrão UE2 `FParse::Value` (procura `Chave=` como **substring**, sem diferenciar maiúsculas): então `"ID"` casaria dentro de `"ServerID="`. Os scripts usam chaves com prefixos comuns (`ID`, `ServerID`, `MasterID`, `classID`/`ClassID`), por isso a recriação deve validar a regra no nativo antes de trocar por um dicionário estrito — o comportamento “errado” pode ser necessário para compatibilidade.

### 1.6 Estados de UI

#### 1.6.1 Lista de estados
[O] strings UTF‑16 contíguas no `NWindow.dll` (0x248368–0x248600) e grupos do xdat:
`LoginState`, `EulaMsgState`, `ChinaWarnMsgState`, `WarnMsgState`, `ServerListState`, `CharacterSelectState`, `CharacterCreateState`, `LoadingState`, `GamingState`, `GamingHideWindowState`, `SpecialCameraState`, `OlympiadObserverState`, `BroadcastObserverState`, `EventMatchObserverState`, `GMCameraState`, `CreditState`, `ReplaySelectState`, `ReplayState`, `SlideQuestState`, `BenchMarkMenuState`, `BenchMarkPlayState`, `BenchMarkResultState`, `ThaiHtmlWordWrapState`, `DebugState`, `PawnViewerState`, `NpcViewerState`, `MSViewerState` (27).
- [O] Classes nativas de estado com comportamento próprio: `UIGameState` (base: `ShowUI/HideUI/ClearUI/IsWindowInState/OnEnter`), `UILoginState`, `UICharacterSelectState`, `UIGamingState` (`OnEnter/OnExit/ShowUI`), `UIReplayState`, `UIOlympiadObserverState`, `UIEventMatchObserverState`, `UIPawnViewerState`, `UINpcViewerState`, `UIMSViewerState`; gerente `UIGameStateManager` (`RegisterState/RegisterUIState/UnregisterUIState/SetState/CreateNewState/CreatePreState/DestroyState/MakeProperStateName/IsWindowInCurrentState`). [I] os demais estados são `UIGameState` genéricos.
- [O] No engine existe outra máquina, do console: `UL2ConsoleWnd::SetState/GetState(L2ConsoleState)`, `MoveCameraByState`, `ExecLobbyEvent` (`out/re/engine_network_and_console.txt`). [N] valores do enum `L2ConsoleState` e o mapeamento para os estados de UI.

#### 1.6.2 Pertinência janela→estado
- [O] Declarativa: `Window.unk103` (tabela 1.2.4).
- [O] Adicional em script: `RegisterState("Janela","Estado")` (`UIEventManager.uc:1188`) — `OptionWnd` em `GamingState` e `LoginState` (`OptionWnd.uc:112-113`), `HelpHtmlWnd` idem (`HelpHtmlWnd.uc:7-8`), `ChatWnd` também em `OlympiadObserverState` (`ChatWnd.uc:67`; comentário: "xml registra GamingState, aqui adiciona OlympiadObserverState"). Comentário em `OptionWnd.uc:111`: "multi-registering states can only be placed in uc".
- [I] Ao entrar num estado o gerente mostra/torna ativas as janelas daquele estado e esconde as demais (`UIGameState::ShowUI/HideUI`); janelas mantêm o "devia estar visível" próprio — ex. `RestartMenuWnd.OnEnterState` re-mostra o menu se `m_bRestartON` (`RestartMenuWnd.uc:49-59`). [N] se `ShowUI` mostra todas as janelas do estado ou só as que estavam visíveis/marcadas como visíveis no xdat (`unk104`?).

#### 1.6.3 Transições
- [O] Script: `SetUIState(string)` / `GetUIState()` (`UIEventManager.uc:1189,1192`). Usos: `ReplayListWnd.uc:92` (Cancelar → `LoginState`), `TeaserSlideWnd.uc:206` (→ `SlideQuestState`) e `:880` (→ `GamingState`). `GetUIState()=='LoginState'` em `OptionWnd.uc:784` (comentado).
- [O] Callbacks: `OnEnterState(name prev)` / `OnExitState(name next)` (`UIScript.uc:280-281`); ex. `ChatWnd.OnEnterState` limpa o chat só quando `prev=='LoadingState'` (`ChatWnd.uc:341-347`) — logo a sequência normal é **LoadingState → GamingState**; `Shortcut.OnExitState` testa `next=='GamingState'` (`Shortcut.uc:29-31`).
- [O] Eventos de borda: `EV_GamingStateEnter` (150), `EV_GamingStateExit` (160). O nativo monta em 160 chaves com nomes de estado `BroadcastObserverState, GamingHideWindowState, OlympiadObserverState, SpecialCameraState` (`91_eventos_nativos.md`) [O]; [I] indicam para qual estado "sub‑jogo" se saiu.
- [O] Atalho de teclado como transição: `Alt+H → SetGamingState` no grupo `GMCameraStateShortcut` (`_shortcuts.txt`).
- [O] Nativo: `NConsoleWnd::SetUIState/GetUIState/RegisterUIState/GotoLogin/GotoLoginNextTick/GotoCharacterSelect/StartSpecialCameraMode/FinishSpecialCameraMode/StartGMCameraMode/FinishGMCameraMode/RestartBegin/RestartEnd/InitReplayMode`.
- Grafo [I] (combina o acima com o fluxo da §3):
```
LoginState ─(auth ok)→ EulaMsgState ─(OK)→ ServerListState ─(server ok)→ CharacterSelectState
   ↑  ↑ └(Replay)→ ReplaySelectState ─(play)→ ReplayState          │  ↕ CharacterCreateState
   │  └──────────── (Cancelar, ReplayListWnd.uc:92) ───────────┘    │
   │                                                     (Start)→ LoadingState → GamingState
   └──────────────── (ExecQuit/erro de conexão: GotoLogin) ─────────┘         │ ↕ GamingHideWindowState / SpecialCameraState
                                  CharacterSelectState ←(ExecRestart)──────────┤ ↕ OlympiadObserverState / BroadcastObserverState
                                                                               │ ↕ EventMatchObserverState / GMCameraState
                                                                               └ ↕ SlideQuestState (TeaserSlideWnd)
```
`ChinaWarnMsgState`/`WarnMsgState` (avisos), `CreditState` (créditos, `NCCreditWnd`), `BenchMark*`, `*ViewerState` e `DebugState` são caminhos especiais/ferramentas [I].

### 1.7 Foco e teclado
- [O] Foco: `SetFocus/IsFocused/ReleaseFocus` (`WindowHandle.uc:33-35`), `UIAPI_WINDOW.SetFocus/IsFocused` (`UIAPI_WINDOW.uc:29-30`), `ShowWindowWithFocus` (`UICommonAPI.uc:182-186`). Nativo: `NCVirtualWndMain::SetFocusingWindow/ClearFocus/PassToFocusedWindow/IsInterfaceFocused`, `NCWnd::OnGotFocus/OnLostFocus/ReleaseFocusAll/SetNextFocusUnderConsole`, `NCEditBox::OnGotFocus/OnLostFocus`.
- [O] Ordem de Tab: `UIAPI_WINDOW.SetTabOrder(ctrl, next, prev)` (`UIAPI_WINDOW.uc:36`; uso em cadeia circular `MacroEditWnd.uc:83-93`).
- [O] Teclado em script: `OnKeyDown/OnKeyUp(EInputKey)` (quase não usados; só `TeaserSlideWnd.uc:746`), `IsKeyDown(EInputKey)` (`UIScript.uc:124`). A tecla Enter no DialogBox era tratada em script e foi comentada (`DialogBox.uc:56-62`); hoje `DoDefaultAction()` existe (`DialogBox.uc:429`) — [N] quem chama (provavelmente o nativo ao receber Enter com o DialogBox focado).
- [O] **Atalhos globais** são declarativos e por estado: 8 grupos `Shortcut{nome, estado, ações[{key1,key2,key3,"comando args"}]}` (`Shortcut.groovy`; `_shortcuts.txt`): `EulaMsgState` (Enter→`EulaWndOKButton`), `ChinaWarnMsgState` (Enter→`ChinaWarnMsgOKButton`), `ServerListState` (Enter→`ServerSelectOKButton`), `GamingState` (F1–F12/1–0/-/= → `UseShortcutItem Num=n`, Ctrl/Shift+F → idem, Alt+1..0 → `SetShortcutPage Num=n`, Esc→`TargetCancel`, Enter→`FocusChatWindow`, Tab→`TabShowInventoryWindow`, V/Alt+V→`ShowInventoryWindow`, T/K/C/U/N→`ShowMainWindow Tab=Status|Skill|Action|Quest|Pledge`, X→`ShowSystemMenuWindow`, B→`ShowBoardWindow`, M→`RequestOpenMinimap`, R→`ShowMacroListWindow`, Y→`ShowMessengerWindow`, Alt+H→`HideAllWindow`, Alt+W→`CloseAllWindow`, Alt+J→`ShowChatWindow`, Alt+PgUp/PgDn→`SetPrev/NextChatType`, P→`ApplyMinFrame`, F→`ShowPartyBuff`, G/O→GM), `BroadcastObserverState`, `EventMatchObserverState`, `DebugState`, `GMCameraState`.
- [O] Execução: nativo (`NConsoleWnd::ExecuteShortcutCommand/HookShortCutKey/HandleKeyboardInput`). Os comandos que o nativo não executa sozinho chegam ao script como `EV_ShortcutCommand` (90) com `Command` — `Shortcut.uc:43-69` trata `CloseAllWindow`, `ShowChatWindow`, `SetPrevChatType`, `SetNextChatType`; `EventMatchObserverWnd.uc:348` trata os `EventMatch*`. [N] lista exata de comandos nativos vs. repassados.
- [O] Teclas de reconfiguração ficam em `Option.ini [Key]` (linha 74) e `UL2ConsoleWnd::L2KeyRemapping` [N].
- [O] EditBox: tipos do xdat `NORMAL/CHAT/PASSWORD/COUNT/NUMBER` (`EditBox.groovy`), e em runtime `SetEditType("normal"|"number")` (`DialogBox.uc:195,310`); IME por idioma (`GetCurrentIMELang`, `EIMEType`, classes `NCKoreanIME/NCJapaneseIME/NCChineseIME/NCTaiwanIME/NCThaiIME`).

### 1.8 Drag & drop
- [O] Objeto arrastado é sempre um `ItemInfo` (`UIEventManager.uc` struct `ItemInfo`), com `DragSrcName` (nome do controle de origem) e `DragSrcReserved`.
- [O] Fluxo: origem recebe `OnDragItemStart(strID, info)`; destino recebe `OnDropItem(strID_destino, info, x, y)` e decide pela origem (`InventoryWnd.uc:189-305`: aceita `InventoryItem`, `QuestItem`, `*EquipItem*`, `PetInvenWnd`; reordena com `GetIndexAt(x,y,1,1)` + `SwapItems`; `TrashButton` = destruir; `CrystallizeButton`); se solto fora de qualquer janela, a **origem** recebe `OnDropItemSource("Console", info)` → largar no chão com `GetClickLocation()` e `RequestDropItem` (`InventoryWnd.uc:347-369`); `OnDragItemEnd(strID)` no fim (`MacroEditWnd.uc:162`).
- [O] Controles: `ItemWindow.noItemDrag` impede arrastar; `Texture.type=Draggable` (`Texture.groovy`). Nativo: `NConsoleWnd::SetDragDropState/GetDragDropState/SetCurrentDraggingWnd/GetCurrentDraggingWnd`, `NCVirtualWndMain::SetIconMoveCursor`.
- [O] Barra de atalhos: `ShortcutItemWindow` (88) aceita drop de itens/skills/ações/macros; registro no servidor feito pelo nativo (`NConsoleWnd::RequestShortCutReg/RequestShortCutDel`) [I].
- [O] Início do arrasto: no `OnMouseMove` do `NCItemWnd` (`NWindow.dll@0x1002eb00`) com o botão apertado sobre um slot ocupado; o código não testa distância mínima [I]. Alt com pilha > 1 = `AllItemCount` (pilha toda) (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`). [N] Se um drop em janela sem handler cai em `OnDropItemSource("Console")`.

### 1.9 Tooltips
- [O] Declarativo: `popupType` em qualquer controle. Valores usados (controle, qtd): `Shortcut` (ShortcutItemWindow 88), `Inventory` (ItemWindow 36), `Text` (Button 29, TextBox 14, Window 9, Texture 7), `Action` 6, `PartyMatch` 4, `AbnormalStatus` 3, `Skill` 3, `ClanInfo` 2, `ManorCropSell` 2, `Recipe` 2, `RecipeManufacture` 2, `QuestList`, `RaidList`, `NormalItem`, `ManorCropSetting`(×2), `ManorCropInfo`, `ManorDefaultInfo`, `ManorSeedInfo`, `ManorSeedSetting`, `QuestInfo`, `RecipePrice`.
- [O] Runtime: `SetTooltipType/SetTooltipText/GetTooltipText/SetTooltipCustomType/GetTooltipCustomType` (`WindowHandle.uc:38-42`), `UIAPI_WINDOW.SetTooltipType/Text` (`UIAPI_WINDOW.uc:37-39`), `TextBoxHandle.SetTooltipString`; tipos extras definidos em script: `InventoryPrice1`, `InventoryPrice2`, `InventoryPrice1HideEnchant`, `InventoryPrice1HideEnchantStackable`, `InventoryPrice2PrivateShop` (`PrivateShopWnd`, `ShopWnd`…), e `Description` (`ToolTip.uc:47`).
- [O] Mecanismo: ao pairar, o nativo dispara `EV_RequestTooltipInfo` (2920) com `TooltipType`, `SourceType` (`ETooltipSourceType`: `NTST_TEXT, NTST_ITEM, NTST_LIST`) e os dados do alvo (texto `Text` ou id `ID`; item = chaves de `ParamToItemInfo`; linha de lista = chaves de `ParamToRecord`). `Tooltip` (`ToolTip.uc:24-128`) monta um `CustomTooltip{MinimumWidth, SimpleLineCount, DrawList[DrawItemInfo]}` (`DrawItemInfo`: `eType BLANK/TEXT/TEXTURE`, offsets, `bLineBreak`, texto/cor/`t_ID`, textura+tamanho) e devolve com `ReturnTooltipInfo(CustomTooltip)` (`UIScript.uc:270`). Atalho para texto simples: `MakeTooltipSimpleText` (`UICommonAPI.uc:282`). Cor de descrição `RGB(178,190,207)` (`ToolTip.uc:174-177`).
- [I] `popupType="Text"` + `popupValue`/`ID` = sysstring (o ramo `ParseInt("ID")` põe `t_ID`, `ToolTip.uc:191-199`). [O] Com `popupValue=-9999`, o texto é a string gravada por `SetTooltipText` (`NCWnd::OnPostPaint`, `NWindow.dll@0x1005da50`: campo `+0x170` ≥ 0 = sysstring, senão `+0x174`). [O] **Sem atraso:** `NCVirtualWndMain::PostDrawChildWindow` (`@0x10072da0`) manda a mensagem de pós-pintura à janela sob o cursor a cada quadro, e o conteúdo é montado uma vez e guardado (`NCTooltipManager::MakeTooltipInfo` `@0x101b8f10`). [O] **Posição** (`NCTooltip::DrawTooltip` `@0x10054680`): acima do canto superior esquerdo do controle (ou do slot, no ItemWindow); se não couber, abaixo (+32 + altura); limitado na horizontal. Moldura de 9 partes de 8 px, conteúdo em (+5,+5). Não aparece durante um arrasto (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`). [N] As texturas de fundo (`L2UI_ch3.Tooltip.Tooltip%d`, `L2UI.Tooltip.Tool01..03` no binário).

### 1.10 Z-order, modais e DialogBox
- [O] `UIAPI_WINDOW.SetAlwaysOnTop(ctrl, bool)` (`UIAPI_WINDOW.uc:19`); nativo `NCDialogBox::DoModal`, `NCVirtualWndMain::DispatchWndModalMsg`, `IsTopWindowAt`, `AddCapturedWindow`. [I] clicar numa janela a traz para frente; [N] regra exata de z-order entre janelas do mesmo estado.
- [O] **DialogBox** (janela única compartilhada, script `DialogBox.uc`, layout `layout/DialogBox.txt`, 434×128 centrada): tipos `EDialogType = DIALOG_OKCancel, DIALOG_OK, DIALOG_OKCancelInput, DIALOG_OKInput, DIALOG_Warning, DIALOG_Notice, DIALOG_NumberPad, DIALOG_Progress` (`UICommonAPI.uc:4-14`).
  - API para as janelas (só via `UICommonAPI`): `DialogShow(type, msg)`, `DialogHide`, `DialogSetDefaultOK`, `DialogIsMine`, `DialogSetID/GetID`, `DialogSetEditType`, `DialogGetString/SetString`, `DialogSetParamInt` (tempo do Progress ou valor de "All" no NumberPad), `DialogSetReservedInt/2/3`, `DialogSetEditBoxMaxLength` (`UICommonAPI.uc:25-157`).
  - Comportamento: um diálogo por vez (`m_bInUse`, `DialogBox.uc:25-29`); grava o nome do script chamador (`string(Self)`); mostra/esconde `OKButton`/`CancelButton`/`CenterOKButton`/`DialogBoxEdit`/`NumberPad`/`DialogProgress` conforme o tipo e redimensiona (`DialogBox.uc:260-328`); Progress ancora no rodapé, demais no centro (`:330-337`); OK lê o EditBox e dispara `EV_DialogOK`, Cancel dispara `EV_DialogCancel` (`:352-370`); fim do Progress = Cancel (`:422-427`); Enter = ação padrão (OK se `DialogSetDefaultOK`, senão Cancel), que volta a `None` após cada uso (`:429-448`); NumberPad: botões `num0..9`, `numAll` (= `m_paramInt`), `numBS`, `numC` e texto por extenso `ConvertNumToTextNoAdena` (`:218-233, 372-419`). Textos de botão 1337 "Confirm"/1342 "Cancel" (`DialogBox.uc:155`).
  - [O] Diálogos nativos separados: `NCGaraDialogBox`, `NCWarningDialogBox::SetWarningMessage`, `NCKeyCryptWarningDialogBox`, `MessageBox/SMessageBox` (`UIEventManager.uc:1190-1191`). [N] aparência e quando aparecem.

### 1.11 Posição e tamanho salvos
- [O] Padrão declarativo `WndDefPos{wnd, alignment, x, y, moveParent, width, height}` (56 entradas, `_wnddefpos.txt`; ex. `MainWnd CENTER_LEFT 0,0`, `InventoryWnd CENTER_RIGHT -46,-50`, `SystemMenuWnd BOTTOM_RIGHT 0,-46`, `StatusWnd TOP_LEFT w=176`, `ShortcutWnd.ShortcutWndVertical CENTER_RIGHT`). Há duplicatas (`MiniMapWnd_Expand`, `ManorInfoWnd`, `MacroListWnd`) e nomes que não batem com janela (`PartyMatchingWnd`, `MiniMapWnd` com M maiúsculo, `WareHouseWnd`, `PartyChat`) — [I] nomes case-insensitive e entradas mortas.
- [O] Usuário: `WindowsInfo.ini` (55 seções `[NomeDaJanela]` com `posX`, `posY` e, nas redimensionáveis, `width`, `height`; inclui subjanelas `ShortcutWndVertical`, `ShortcutWndVertical_1/_2`, `ShortcutWndHorizontal`, `ShortcutWndJoypad(Expand)`). Seções numéricas `[1]..[8]` (com `posX/posY`, `[6]` com `width/height`) — [N] o que são (abas destacadas do chat via `OnTabSplit`? janelas `OnScreenMessageWnd1..8`?).
- [O] Nativo: `NConsoleWnd::SaveWndInfo/AddSavePositionWnd/AddSaveSizeWnd/ReArrangeSavedWnd/DefaultPosition/RearrangePosition`, `NCWnd::GetSavePosition/SetDefaultPositionInfo/SetDefaultPosition`, `NCFrameWnd::SetDefaultPosition/RearrangePosition`.
- [O] Posição padrão: `XMLDataManager::CreateDefaultPosition` (`FUN_100c9230`) passa cada `WndDefPos` ao `NCWnd::SetDefaultPositionInfo` (`FUN_1005ca60`, virtual 51), que guarda um `XMLDefaultPositionItemData` em `+0xa8` (numa entrada repetida só atualiza os campos: vale a última). `NCWnd::SetDefaultPosition` (`FUN_1005ffd0`, virtual 50 = slot 0xC8) usa esse registro quando existe (alinhamento + x, y pela virtual 0xd0; com `moveParent` falso a âncora é desfeita depois; largura/altura ≠ -1 viram `SetWindowSize`); sem registro usa os campos +0x94..+0xa4 da âncora do xdat. Na carga (`FUN_1016a040`), `ReArrangeSavedWnd` (`FUN_1014d6a0`) aplica `posX/posY` do `WindowsInfo.ini` e chama o slot 0xC8 só quando nenhum canto fica na tela; depois, sob uma condição do viewport (virtuais 0xbc e 0x7c, não resolvidas), `NConsoleWnd::DefaultPosition` (`FUN_1014dbf0`, virtual 403 = console+0x64c, o mesmo do `SetDefaultPosition()` do script) chama o slot 0xC8 em todas as janelas. [Obs] O `WindowsInfo.ini` gravado pelo original (sessão em 1374×1071, deduzida das janelas centralizadas) tem `MacroListWnd (559,335)` e `MacroInfoWnd (559,455)`: são as posições do `WndDefPos` (CENTER 0,0), não as da âncora do xdat (0,279 / 20,305). Script: `SetDefaultPosition()` (`UIScript.uc:202`) → `OnDefaultPosition()` nas janelas que se reposicionam sozinhas (`ChatWnd`, `ShortcutWnd`).
- [I] Quem salva: janelas com `unk109=1` (1.2.4). [N] quando grava (ao sair? ao mover?), se clampa à resolução e como converte para resolução diferente (`EV_ResolutionChanged` 2900 com `NewWidth/NewHeight`, `SetWindowSizeRel43`).
- [O] Moldura nativa: título (`unk111`), botões fechar/minimizar (`L2UI_CH3.FrameCtrl.FrameCloseBtn/FrameMiniBtn`), expandir (`OnFrameExpandClick`), faixa de redimensionamento (`NCResizeFrame`, `SetResizeFrameSize`), animação de mostrar/esconder (`NCFrameWnd::ShowWindow_AlphaTransition/HideWindow_AlphaTransition`, `SetAlpha(a, seconds)`), minimizar para ícone (`Iconize`).

### 1.12 Fontes e cores
- [O] Fonte global: `l2.ini [FontSet] Font=L2Font.gulim, Glyph=gulim.gly` (Japonês comentado: `L2Font.Japan`/`Japan.gly`); classe `L2Font=NWindow.L2Font`; créditos usam `L2UI.CreditWnd.CreditFont`/`CreditFont.gly` (strings do binário).
- [O] `TextBox.fontType`: −9999 (padrão) em 661 TextBox e **6** em um (`StatusWnd_LevelTextBox`, `layout/StatusWnd.txt`). Mensagens de tela: `EV_ShowScreenMessage` traz `FontType`, `FontSize` (`OnScreenMessageWnd.uc:370-371`) e `SystemMsgData.FontType` (struct). [N] tabela fontType→(face, tamanho, negrito/contorno).
- [O] Cores: `Color{R,G,B,A}`; no xdat `TextBox.textColor` ARGB (ex. `#ffdcdcdc` texto normal, `#ffe4ca7f` destaque, `#ff000000` sombra — sombra é feita duplicando o TextBox deslocado 1–2 px, ex. `GametipWnd` e `OnScreenMessageWnd1`, `layout/GametipWnd.txt`). Runtime: `TextBoxHandle.SetTextColor`, `NameCtrlHandle.SetNameWithColor`, `TextListBoxHandle.AddString(text, color)`, `AddSystemMessage(msg, color)`, chat com `ColorR/G/B` (`EV_ChatMessage`), `GetNumericColor(adena)` (`UIScript.uc:141`), `UIDATA_TARGET.GetTargetNameColor(level)`, `SystemMsgData.color` (`GetSystemMsgInfo`, `UIScript.uc:127`).
- [O] Texto vem de tabelas: `GetSystemString(id)` (sysstring), `GetSystemMessage(id)` (systemmsg), `MakeFullSystemMsg(msg, arg1, arg2)`; ids também no xdat (`buttonName`, `sysstring`, `titleIndex`, `unk111`). Dump em `out/re/strings.json`.

### 1.13 Natives de NWindow.u por categoria
Total **817** declarações `native` (contagem por arquivo `export/uc/NWindow/*.uc`; todas com `exec*` no `NWindow.dll`). Assinaturas completas nos `.uc`; aqui o resumo.

| categoria | classes (nº natives) | conteúdo |
|---|---|---|
| Núcleo de eventos/estado | `UIEventManager` (13) | `ExecuteEvent`, `ParamAdd/ParamAddInt64`, `ParseString/Int/Int64/Float`, `RegisterEvent`, `RegisterState`, `SetUIState`, `GetUIState`, `MessageBox`, `SMessageBox` (`:1177-1192`) |
| Script base | `UIScript` (247) | pedidos ao servidor (§4); informação do jogador (`GetPlayerInfo/GetTargetInfo/GetUserInfo/GetPetInfo/GetSkillInfo`, `GetAdena`, `GetInventoryItemCount`, `GetClassType/Str/IconName/Step`, `GetExpByPlayerLevel/GetExpRate`); utilidades de texto/número (`GetSystemString/Message`, `MakeFullSystemMsg`, `MakeCostString*`, `ConvertNumToText*`, `Int64*`, `MakeBuffTimeStr`, `GetTimeString`, `GetTextSize`); opções (`Set/GetOption{Bool,Int,Float,String}`, `Get/SetINI*`, `RefreshINI`, resolução/qualidade gráfica `Set*Detail`, `SetResolution`, `GetResolutionList`); áudio (`PlaySound/StopSound`, `PlayConsoleSound(EInterfaceSoundType)`, volumes); chat (`ProcessChatMessage`, `GetChatPrefix`, `SetChatMessage`); comandos (`ExecuteCommand`, `ExecuteCommandFromAction`, `DoAction`, `UseSkill`); sistema (`ExecRestart/ExecQuit`, `GetServerNo/Type/AgeLimit`, `GetLanguage`, `GetCurrentIMELang`); replay/benchmark; janela (`GetScript`, `GetHandle`, `SetDefaultPosition`, `ReturnTooltipInfo`, `GetCurrentResolution`) |
| Handles (instância) | `WindowHandle` (44) e filhos: `ItemWindowHandle` 19, `StatusIconHandle` 11, `ListCtrlHandle` 10, `EditBoxHandle` 9, `ComboBoxHandle` 9, `HtmlHandle` 8, `TextureHandle` 7, `TextBoxHandle` 7, `CheckBoxHandle` 6, `TabHandle` 5, `AnimTextureHandle` 4, `BarHandle` 3, `NameCtrlHandle` 3, `DrawPanelHandle` 3, `ButtonHandle` 3, `TextListBoxHandle` 2, `ChatWindowHandle` 2 | `WindowHandle`: `Show/HideWindow`, `IsShowWindow`, `IsMinimizedWindow`, `SetTimer/KillTimer`, `GetWindowName/GetParentWindowName/GetParentWindowHandle/IsChildOf`, `Get/SetAlpha(a, seconds)`, `GetRect`, `Set/GetWindowSize`, `SetWindowSizeRel(rateW, rateH, offW, offH)`, `SetWindowSizeRel43`, `SetAnchor/ClearAnchor/IsAnchored`, `IsDraggable/SetDraggable`, `Enable/DisableWindow`, `SetFocus/IsFocused/ReleaseFocus`, `GetScript`, tooltips, `SetFrameSize/SetResizeFrameSize`, `Move(dx,dy,seconds)/MoveTo/MoveEx/MoveShake`, `NotifyAlarm`, `SetScrollPosition`, `SetSettledWnd`, `SetWindowTitle` (`WindowHandle.uc:6-56`). Demais: operações do controle (ex. `ItemWindowHandle.AddItem/SetItem/DeleteItem/GetSelectedItem/FindItemWithServerID/SwapItems/GetIndexAt/SetRow/SetCol/SetFaded`) |
| API estática por nome | `UIAPI_WINDOW` (35) + `UIAPI_<controle>` (26 classes, 1–14 cada) | mesmas operações endereçando `"Janela.Controle"`; extras de janela: `SetAlwaysOnTop`, `Iconize`, `SetTabOrder`, `SetUITimer/KillUITimer`, `SetWindowTitle(id)/SetWindowTitleByText`, `GetSelectedRadioButtonName(ctrl, groupID)` (`UIAPI_WINDOW.uc:4-44`); `UIAPI_STATUSBARCTRL.SetPoint/SetPointPercent/SetPointExp/SetRegenInfo`; `UIAPI_PROGRESSCTRL.SetProgressTime/Start/Stop/Resume/Reset`; `UIAPI_TREECTRL.InsertNode/InsertNodeItem/...`; `UIAPI_MINIMAPCTRL.AdjustMapView/AddTarget/DrawGridIcon/...`; `UIAPI_RADAR.AddTarget/SetRadarColor` |
| Dados estáticos/cache (somente leitura) | `UIDATA_QUEST` 21, `UIDATA_ITEM` 18, `UIDATA_PET` 17, `UIDATA_TARGET` 15, `UIDATA_RECIPE` 15, `UIDATA_SKILL` 12, `UIDATA_PLAYER` 8, `UIDATA_HUNTINGZONE` 8, `UIDATA_STATICOBJECT` 6, `UIDATA_RAID` 6, `UIDATA_CLAN` 6, `UIDATA_NPC` 5, `UIDATA_HENNA` 3, `UIDATA_USER` 2, `UIDATA_REFINERYOPTION` 2, `UIDATA_MACRO` 2, `UIDATA_GAMETIP` 2, `UIDATA_PARTY` 1 | consultas às tabelas `.dat` do cliente (nomes, ícones, descrições) e ao estado replicado (alvo, pet, jogador) |
| APIs de sistema | `PartyMatchAPI` 11, `RecipeAPI` 10, `RefineryAPI` 6, `EventMatchAPI` 6, `SiegeAPI` 5, `PetAPI` 4, `MacroAPI` 4, `GMAPI` 4, `CommandChannelAPI` 4, `AudioAPI` 4, `QuestAPI` 3, `PetitionAPI` 3, `ActionAPI` 3, `OlympiadAPI` 2, `MiniMapAPI` 2, `HennaAPI` 2, `SSQAPI` 1, `ShortcutAPI` 1, `HeroTowerAPI` 1, `EnchantAPI` 1 | quase tudo `Request*` (§4) |

---

## 2. Resumo do catálogo de eventos (detalhe em `90_catalogo_eventos.md`)
- 322 constantes (319 ativas). 304 registradas por alguma janela; 303 com ponto de tratamento; 200 com chaves lidas via `Parse*`; 16 disparadas pelo script; 18 sem uso em Interface.u (`EV_Test`, `EV_LoginOK`, `EV_LoginFail`, `EV_CardKeyLogin`, `EV_RadarTransitionFinished`, `EV_MagicSkillList`, `EV_InventoryItem`*, `EV_ClanSetAcademyMaster`, `EV_ShortcutPageDown/Up`, `EV_ShowShortcutWnd`, `EV_RadarColor`, `EV_MinimapCursedWeaponTooltipShow/Hide`*, `EV_EventMatchDestroyed`, `EV_FishViewportWndInit/FinalAction`, `EV_PawnViewerWndAddItem`; * = comentados). [I] Os de login (20/30/60) mostram que login é tratado por telas nativas (§3).
- Janelas com mais eventos: MinimapWnd/MinimapWnd_Expand (14), PetWnd (12), InventoryWnd (11), ClanDrawerWnd (10), ClanWnd (9), ShortcutWnd/QuestTreeWnd/DuelManager/TradeWnd (8).
- Eventos de UI "internos" (script→script): `EV_DialogOK/Cancel` (DialogBox), `EV_ShowBBS`, `EV_ShowHelp`, `EV_MacroShowListWnd`, `EV_MacroShowEditWnd`, `EV_RecipeShowRecipeTreeWnd`, `EV_OlympiadBuffShow`, `EV_ShowScreenMessage` (ChatWnd), `EV_EnablePetitionFeedback` e 6 eventos de mansão (`EV_Manor*Wnd*`).
- Eventos de framework relevantes para a recriação: `EV_GamingStateEnter/Exit` (150/160), `EV_ShortcutCommand` (90), `EV_RequestTooltipInfo` (2920), `EV_LanguageChanged` (1900), `EV_ResolutionChanged` (2900, `NewWidth/NewHeight`), `EV_MinFrameRateChanged` (510), `EV_ServerAgeLimitChange` (170), `EV_ChatWndSetFocus` (570).

---

## 3. Fluxo de telas fora do jogo e transições

**Fato central [O]:** as telas de login, EULA, seleção de servidor, lobby/seleção e criação de personagem **não existem em Interface.u nem em Interface.xdat** (nenhuma janela/classe `LoginWnd`, `LobbyWnd`, `ServerSelectWnd` entre as 140 janelas e 142 classes). Elas são **classes C++ do `NWindow.dll`**, desenhadas com texturas `L2UI_CH3.LoginWnd.*`, `L2UI_CH3.Serverselectwnd.*`, `L2UI_CH3.LobbyWnd.*`. Do lado script só existem: `OptionWnd` e `HelpHtmlWnd` (registradas também em `LoginState`), `ReplayListWnd`, `ReplayLogoWnd`, `LoadingWnd`, `GametipWnd`, `TeaserSlideWnd`, `BenchMarkMenuWnd`, `RestartMenuWnd`, `SystemMenuWnd`.
Tudo o que segue sobre as telas nativas vem de nomes de classe/método/textura no binário [O] e da ordem do protocolo (`92_protocolo_opcodes.md`, `engine.dll` logs `(Send)…/(Receive)…`) [I]. Layout, textos e comportamento fino: [N].

### 3.1 Login — `LoginState`
- [O] Classes: `LoginWnd`, `NCAuthWnd` (`OnCreate, ShowWindow, OnPasswordDone, OnOneTimePasswordDone, OnOneTimePasswordHelpBtnClick, OnLoginBtnClick, Clear`), `NCLoginFunctionWnd` (`OnNewAccountBtnClick, OnReplayBtnClick`), `NCLoginServerWnd`, `NCAnnounceWnd`, `NCNoticeInfoWnd`, `VersionWnd`, `UILoginState::OnEnter`. Texturas `L2UI_CH3.LoginWnd.logon_back`, `otplogon_back`, `aboutotpicon(_down)`; ajuda OTP `..\L2text\help_OTP.html`.
- Mostra [I]: campo conta, campo senha (EditBox PASSWORD), campo OTP opcional (`NConsoleWnd::IsUseOTP/GetUserOneTimePassword`), botões Login, Nova conta (abre URL [N]), Replay, ícone de ajuda OTP; avisos/notícias (`ReceiveNotice`); opções (`OptionWnd` pertence ao `LoginState`, `OptionWnd.uc:113`).
- Envia: `NConsoleWnd::RequestAuthLogin` → `UNetworkHandler::RequestAuthLogin(conta, senha, …)`; log `(Send)RequestAuthLogin`; respostas `(Receive)LoginOkPacket`, `(Receive)LoginFailPacket2 errorcode:%d`, `(Receive)OnAuthLoginFail errorcode:%d`; erros de conta `NConsoleWnd::RefuseLogOn/BlockedAccount/BlockedAccountWithMsg/BlockedAccountMerge` [O nomes].
- Script: **nenhum** evento EV_ trata login (`EV_LoginOK/LoginFail/CardKeyLogin` não usados, §2). `RequestAuthCardKeyLogin(uid, value)` existe em `UIScript.uc:15` mas nenhuma classe chama; `NConsoleWnd::CardKeyLoginStart` [O].
- Replay: botão Replay → `ReplaySelectState` (`ReplayListWnd`: lista arquivos `GetFileList`, apagar `EraseReplayFile`, OK → `BeginReplay(file, camInst, chat)` → `ReplayState` com `ReplayLogoWnd`; Cancelar → `SetUIState("LoginState")`, `ReplayListWnd.uc:80-111`) [O].

### 3.2 EULA — `EulaMsgState` (e avisos `ChinaWarnMsgState`/`WarnMsgState`)
- [O] `NCEulaWnd` (`AddEula, ShowWindow, HideWindow, OnOkBtnClick, OnCancelBtnClick, OnTimer, RequestServerList`); dados `FL2GameData::EulaLoad/EulaSave` (engine). Atalho Enter → `EulaWndOKButton` (`_shortcuts.txt`).
- [I] OK → pede a lista de servidores (`NCEulaWnd::RequestServerList` → `UNetworkHandler::RequestServerList`, log `(Send)RequestServerListPacket`); Cancelar → volta ao login/sai. Texto da EULA de arquivo de dados [N].

### 3.3 Seleção de servidor — `ServerListState`
- [O] `NCServerSelectWnd` (`OnLoginBtnClick, OnCancelBtnClick, OnSortBtnClick, Clear`), `NCServerSelectListCtrl`, `NCServerInfoWnd`; texturas `L2UI_CH3.Serverselectwnd.Serverselect_back`, `Serverinfo_back`; Enter → `ServerSelectOKButton`. Recepção: `NConsoleWnd::ReceiveServerList/AddServerList/EndServerList`, log `(Receive)ServerListPacket ServerNum:%d`, `Add ServerID=%d, ServerName=%s`; ping `UNetworkHandler::AddServerPingList/EndServerPingList`.
- Mostra [I]: lista ordenável (nome, status/carga, ping, idade) + painel de info; botões Entrar/Cancelar/Ordenar.
- Envia: `NConsoleWnd::RequestServerLogin` (login server: escolha de servidor); depois o engine conecta ao game server (`UGameEngine::OnAuthServerSelectSuccess/Fail`, `CheckLoginType`), envia `ProtocolVersion` e `AuthLogin` (`92_protocolo_opcodes.md`, estado CONNECTED) [I]. Idade do servidor → `SetServerAgeLimit` → `EV_ServerAgeLimitChange` (170) usado por `LoadingWnd` [O].

### 3.4 Lobby / seleção de personagem — `CharacterSelectState`
- [O] `NCLobbyWnd` (`GameStart, NeedToChangeName, ReceiveCharacterSelectedPacket`), `NCLobbyStartWnd` (`OnGameStartBtnClick`), `NCLobbyFunctionWnd` (`OnNewCharacterBtnClick, OnDelCharacterBtnClick, OnGameCancelBtnClick`), `NCPawnSelectWnd::AddPawn`, `NCPawnInfoWnd`, `UICharacterSelectState::OnEnter`; texturas `L2UI_CH3.LobbyWnd.select1_back, select2_back, lobby_menuback, lobby_startbtnback, lobby3_back`. Cena 3D: `UL2ConsoleWnd::SpawnDefaultCharacter/ShowOnlyOneDefaultCharacter/SelectedCharacterNum/DefaultCharacterTurn/MoveCameraByCharacter/RestoreLobbyMusic/PlayIntroMusic`; `APawn::SetLobbyWaitAnimName`; `UL2NEnvManager::SetTimeToLobbyTime` [O nomes].
- Recepção: `NConsoleWnd::ReceiveCharacterInfo/AddCharacterInfo` (log `(Receive)CharacterSelectionInfo count:%d`), `GetLobbySelectedCharacterInfo/SaveLobbySelectedCharacterInfo` (lembra o último selecionado).
- Ações [O nomes, I mapeamento]: Iniciar → `RequestGameStart` (pacote `CharacterSelected`, log `(Send)CharacterSelect`) → `ReceiveCharacterSelectedPacket`/`AcceptGameStart` → `LoadingState`; Apagar → `RequestCharacterDelete` (`CharacterDelete`) / `AcceptCharacterDelete` ou `(Receive)CharacterDeleteFail`; Restaurar → `RequestCharacterRestore` (`CharacterRestore`); Novo → `RequestNewCharacter` (`NewCharacter`) / `AcceptNewCharacter` → `CharacterCreateState`; Cancelar → `GotoLogin` (volta ao `LoginState`). Troca de nome obrigatória: `OnExNeedToChangeName`, `NCLobbyWnd::NeedToChangeName`, `RequestExChangeName`.

### 3.5 Criação de personagem — `CharacterCreateState`
- [O] `NCPawnCreateWnd`, `NCPawnCreateFunctionWnd` (`OnAccountClick, OnGameCancelClick`), `NCPawnSetupWnd` (aparência), `UL2ConsoleWnd::SetCurrentMakingRace/MoveCameraByCharacter(Race, Class, Gender)`.
- [I] Escolhas: raça, classe base, sexo, cabelo (estilo/cor), rosto, nome; Confirmar → `RequestCharacterCreate` (pacote `CharacterCreate`) → `AcceptCharacterCreate` (volta ao lobby com a lista nova) ou `RefuseCharacterCreate` / `(Receive)OnCharacterCreateFail errorcode:%d`; Cancelar → lobby. Textos de erro de lobby: `SystemMsg_%s.char_lobby` [O string]. [N] layout e validação de nome.

### 3.6 Loading — `LoadingState`
- [O] Janelas de script: `LoadingWnd` (tela cheia 100%×100%, textura `BackTex` = `L2Font.loading02-k` no xdat; o script troca por `LoadingTexture15/18/Free` conforme `EV_ServerAgeLimitChange.ServerAgeLimit` ∈ `SERVER_AGE_LIMIT_15/18/Free`, `LoadingWnd.uc:7-41`) e `GametipWnd` (faixa inferior 100%×20% com dica `GameTipText`, título sysstring 1455 "Useful Information", sombra preta por TextBox duplicado; dados `UIDATA_GAMETIP`, recarrega em `EV_LanguageChanged`) (`layout/LoadingWnd.txt`, `layout/GametipWnd.txt`).
- [O] Nativo: `NConsoleWnd::SetLoadingTex`, RTTI `LoadingWnd` (há também classe C++ homônima), mensagens `1.Authorizing....`, `3.Loading World......`.
- [I] Fim do loading: mapa carregado → `RequestEnterWorldPacket` (`EnterWorld`, estado ENTERING) → `GamingState`; `ChatWnd.OnEnterState(prev=='LoadingState')` limpa o chat (`ChatWnd.uc:341-347`) — prova de que `LoadingState → GamingState` é a borda normal.

### 3.7 Entrada no jogo — `GamingState`
- [O] 106 janelas pertencem a `GamingState` (xdat). `UIGamingState::OnEnter/OnExit/ShowUI`. `EV_GamingStateEnter` (150) → `ObserverWnd` re-mostra se em modo observador (`ObserverWnd.uc:26-28`), `SystemMsgWnd`.
- [I] Primeiro tick: janelas com posição salva são reposicionadas (`ReArrangeSavedWnd`), atalhos do grupo `GamingStateShortcut` ativados, os pacotes iniciais do servidor (UserInfo, ItemList, SkillList, ShortCutInit, QuestList…) viram eventos `EV_*` (ver `91_eventos_nativos.md`).
- Teaser/introdução: `EV_ShowPlaySceneInterface` (3000) → `ResetReady()` (`TeaserSlideWnd.uc:734-736`), que faz `SetUIState("SlideQuestState")` (`:144-206`), toca slides/voz com timers, e `EndShow()` volta com `SetUIState("GamingState")` (`:863-880`) [O].

### 3.8 Morte / reinício no local — `RestartMenuWnd`
- [O] `EV_Die` (50) com `Village, Agit, Castle, BattleCamp, Original` (int > 0 = opção disponível) só guarda as opções (`RestartMenuWnd.uc:132-162`); o menu aparece com `EV_RestartMenuShow` (1430) e some com `EV_RestartMenuHide` (1440) ou `EV_Restart` (40). Botões `btnVillage` 372 "To Village", `btnAgit` 374 "To Clan Hall", `btnCastle` 375 "To Castle", `btnBattleCamp` 373 "To Siege HQ", `btnOriginal` 465 "Fixed" — 96×23 empilhados a cada 24 px (`layout/RestartMenuWnd.txt`). Clique → `RequestRestartPoint(RPT_VILLAGE|RPT_AGIT|RPT_CASTLE|RPT_BATTLE_CAMP|RPT_ORIGINAL_PLACE)` (`UIEventManager.uc` enum `ERestartPointType`; pacote `RequestRestartPoint`) e esconde. Re-mostra em `OnEnterState` se ainda morto (`:49-59`).
- [O] `EV_ShowReplayQuitDialogBox` (310) → `AbnormalStatusWnd`.

### 3.9 Voltar à seleção (Restart) e sair (Quit)
- [O] `SystemMenuWnd`: `btnRestart` → `DialogShow(DIALOG_Warning, GetSystemMessage(126))` "Do you wish to exit to the character select screen?", id 0; `btnQuit` → systemmsg 125 "Do you wish to exit the game?", id 1. No `EV_DialogOK` com `DialogIsMine()`: id 0 → `HideWindow("SystemMenuWnd")` + `ExecRestart()`; senão `ExecQuit()` (`SystemMenuWnd.uc:31-63`). `BenchMarkMenuWnd` `btnExit` → `ExecQuit()` (`BenchMarkMenuWnd.uc:22`).
- [I] `ExecRestart` → `UNetworkHandler::RequestRestart` (pacote `RequestRestart`) → `NConsoleWnd::RestartBegin/RestartEnd` → `GotoCharacterSelect` (`CharacterSelectState`); `ExecQuit` → `Logout` → `AcceptLogOut` → fecha o cliente. [N] confirmar, e o que `RequestExit()` (`UIScript.uc:14`, sem uso no script) faz.
- Desconexão: `(Receive)ServerClosePacket`, `UGameEngine::OnServerClose/ContinueServerClose`, `NConsoleWnd::ServerClose` → `GotoLogin(NextTick)` [O nomes, I fluxo].

### 3.10 Outros estados fora do jogo
- `BenchMarkMenuState` (`BenchMarkMenuWnd`, tela cheia: Play `BeginPlay`, BenchMark `BeginBenchMark`, Opções, Sair) → `BenchMarkPlayState`/`BenchMarkResultState` (`NCBenchMarkResultWnd`) [O].
- `CreditState` (`NCCreditWnd::ShowWindow`, fonte `CreditFont`) [O]. Ferramentas internas: `PawnViewerState` (`NCPawnViewerWnd`…, `RequestLoadAllItem`, `GetPawnFrameCount`), `NpcViewerState`, `MSViewerState`, `DebugState` [O].

---

## 4. Natives que enviam algo ao servidor (por sistema)
"Pacote provável" = nome do pacote cliente→servidor na implementação aCis (`92_protocolo_opcodes.md`) ou do `UNetworkHandler::Request*` do engine (`out/re/engine_network_and_console.txt`) com nome equivalente — **[I] por nome**; [N] confirmar o mapeamento exato no `exec*` de cada native. Parâmetros `string param` usam o formato da §1.5 (chaves montadas pelo script, ex. `ShopWnd.uc:468-488`).

| sistema | native (arquivo:linha) | pacote provável |
|---|---|---|
| Sessão | `ExecRestart()` UIScript:179 · `ExecQuit()` :180 · `RequestExit()` :14 | RequestRestart · Logout · ? |
| Login | `RequestAuthCardKeyLogin(uid, value)` UIScript:15 (sem uso) | (login server) |
| Alvo/combate | `RequestSelfTarget()` :16 · `RequestTargetCancel()` :17 · `RequestAttack(id, loc)` :32 · `RequestAction(id, loc)` :33 · `RequestAssist(id, loc)` :34 · `RequestTargetUser(id)` :35 | Action · RequestTargetCanceld · AttackRequest · Action · Action · Action |
| Ações/skills | `DoAction(id)` :218 · `UseSkill(id)` :219 · `ExecuteCommand(cmd)` :216 · `ExecuteCommandFromAction(cmd)` :217 · `RequestSkillList()` :18 · `ActionAPI.RequestActionList/PetActionList/SummonedActionList` ActionAPI:4-6 | RequestActionUse · RequestMagicSkillUse · (comandos `/x` → Say2/RequestBypass/… ) · RequestSkillList · (lista local [I]) |
| Aprender/encantar skill | `RequestAcquireSkillInfo(id,lvl,type)` :399 · `RequestAcquireSkill` :402 · `RequestExEnchantSkillInfo(id,lvl)` :400 · `RequestExEnchantSkill` :403 | RequestAcquireSkillInfo · RequestAcquireSkill · RequestExEnchantSkillInfo · RequestExEnchantSkill |
| Inventário | `RequestItemList()` :50 · `RequestUseItem(sid)` :45 · `RequestDestroyItem(sid,n)` :46 · `RequestDropItem(sid,n,loc)` :47 · `RequestUnequipItem(sid,slot)` :48 · `RequestCrystallizeItem(sid,n)` :49 · `EnchantAPI.RequestEnchantItem(sid)` EnchantAPI:4 · `SaveInventoryOrder(order)` :420 (local [I]) | RequestItemList · UseItem · RequestDestroyItem · RequestDropItem · RequestUnEquipItem · RequestCrystallizeItem · RequestEnchantItem |
| Troca | `RequestStartTrade(target)` :21 · `AnswerTradeRequest(ok)` :23 · `RequestAddTradeItem(sid,n)` :22 · `RequestTradeDone(done)` :20 | TradeRequest · AnswerTradeRequest · AddTradeItem · TradeDone |
| Loja NPC / armazém / correio | `RequestBuyItem(param)` :25 · `RequestSellItem(param)` :24 · `RequestPreviewItem(param)` :41 · `RequestMultiSellChoose(param)` :43 · `RequestWarehouseDeposit(param)` :36 · `RequestWarehouseWithdraw(param)` :37 · `RequestPackageSendableItemList(target)` :39 · `RequestPackageSend(param)` :40 | RequestBuyItem · RequestSellItem · RequestPreviewItem · MultiSellChoose · SendWarehouseDepositList · SendWarehouseWithdrawList · RequestPackageSendableItemList · RequestPackageSend |
| Loja privada | `SendPrivateShopList(type, param)` :57 (`sell/buy/sellList/buyList`, `PrivateShopWnd.uc:1086-1159`) · `RequestQuitPrivateShop(type)` :56 · `SetPrivateShopMessage(type,msg)` :170 | SetPrivateStoreListSell/Buy, RequestPrivateStoreSell/Buy · RequestPrivateStoreQuitSell/Buy, ManageCancel · SetPrivateStoreMsgSell/Buy |
| Mansão (manor) | `RequestBuySeed(param)` :27 · `RequestProcureCrop(param)` :28 · `RequestSetSeed(param)` :29 · `RequestSetCrop(param)` :30 · `RequestProcureCropList(param)` :424 | RequestBuySeed · RequestBuyProcure · RequestSetSeed · RequestSetCrop · RequestProcureCropList |
| Fabricação | `RecipeAPI.RequestRecipeBookOpen(type)` :9 · `RequestRecipeItemMakeInfo(sid)` :8 · `RequestRecipeItemMakeSelf(id)` :7 · `RequestRecipeItemDelete(sid)` :10 · `RequestRecipeShopMakeInfo(sid, rid)` :4 · `RequestRecipeShopSellList(sid)` :5 · `RequestRecipeShopMakeDo(m, r, adena)` :6 · `RequestRecipeShopManageQuit()` :11 · `RequestRecipeShopMessageSet(msg)` :12 · `RequestRecipeShopListSet(param)` :13 | RequestRecipeBookOpen · RequestRecipeItemMakeInfo · RequestRecipeItemMakeSelf · RequestRecipeBookDestroy · RequestRecipeShopMakeInfo · ? [N] (lista da loja de outro jogador) · RequestRecipeShopMakeItem · RequestRecipeShopManageQuit · RequestRecipeShopMessageSet · RequestRecipeShopListSet |
| Aumento (augment) | `RefineryAPI.ConfirmTargetItem` :4 · `ConfirmRefinerItem` :5 · `ConfirmGemStone` :6 · `RequestRefine` :7 · `ConfirmCancelItem` :9 · `RequestRefineCancel` :10 | RequestConfirmTargetItem · RequestConfirmRefinerItem · RequestConfirmGemStone · RequestRefine · RequestConfirmCancelItem · RequestRefineCancel |
| Henna | `RequestHennaItemList()` :378 · `RequestHennaItemInfo(id)` :377 · `RequestHennaEquip(id)` :379 · `RequestHennaUnEquipList()` :382 · `RequestHennaUnEquipInfo(id)` :381 · `RequestHennaUnEquip(id)` :383 | RequestHennaList · RequestHennaItemInfo · RequestHennaEquip · RequestHennaRemoveList · RequestHennaItemRemoveInfo · RequestHennaRemove |
| Pet/servo | `RequestChangePetName(name)` :38 · `PetAPI.RequestPetInventoryItemList()` :4 · `RequestPetUseItem(sid)` :5 · `RequestGiveItemToPet(sid,n)` :6 · `RequestGetItemFromPet(sid,n,equip)` :7 | RequestChangePetName · (lista [N]) · RequestPetUseItem · RequestGiveItemToPet · RequestGetItemFromPet |
| Party | `RequestInviteParty(name)` :97 | RequestJoinParty |
| Sala de party | `PartyMatchAPI.RequestOpenPartyMatch()` :4 · `RequestPartyRoomList(page, loc, lvl)` :5 · `RequestJoinPartyRoom(n)` :6 · `RequestJoinPartyRoomAuto(…)` :7 · `RequestManagePartyRoom(n, max, min, maxLv, title)` :8 · `RequestDismissPartyRoom(n)` :9 · `RequestWithdrawPartyRoom(n)` :10 · `RequestBanFromPartyRoom(id)` :11 · `RequestPartyMatchWaitList(page, min, max, type)` :12 · `RequestExitPartyMatchingWaitingRoom()` :13 · `RequestAskJoinPartyRoom(name)` :14 | RequestPartyMatchConfig · RequestPartyMatchList · RequestPartyMatchDetail · (idem auto) · RequestPartyMatchList/Manage [I] · RequestDismissPartyRoom · RequestWithdrawPartyRoom · RequestOustFromPartyRoom · RequestListPartyMatchingWaitingRoom · RequestExitPartyMatchingWaitingRoom · RequestAskJoinPartyRoom |
| Canal de comando | `CommandChannelAPI.RequestCommandChannelInfo()` :4 · `…BanParty(name)` :5 · `…Withdraw()` :6 · `…PartyMembersInfo(masterID)` :7 | (info [N]) · RequestExOustFromMPCC · (sair [N]) · RequestExMPCCShowPartyMembersInfo |
| Clã | `RequestClanMemberInfo(type,name)` :64 · `RequestClanGradeList()` :65 · `RequestClanChangeGrade(name, g)` :66 · `RequestClanAssignPupil(m,p)` :67 · `RequestClanDeletePupil(m,p)` :68 · `RequestClanLeave(clan, type)` :69 · `RequestClanExpelMember(type, name)` :70 · `RequestClanAskJoin(id, type)` :71 · `RequestClanDeclareWar*()` :72-74 · `RequestClanWithdrawWar*()` :75-76 · `RequestClanReorganizeMember(…)` :77 · `RequestClanRegister/UnregisterCrest()` :79-80 · `…Emblem()` :81-82 · `RequestClanChangeNickName(n, nick)` :84 · `RequestClanWarList(page, state)` :85 · `RequestClanAuth(grade)` :86 · `RequestEditClanAuth(grade, powers)` :87 · `RequestClanMemberAuth(type, name)` :88 | RequestPledgeMemberInfo · RequestPledgePowerGradeList · RequestPledgeSetMemberPowerGrade · RequestPledgeSetAcademyMaster (×2) · RequestWithdrawPledge · RequestOustPledgeMember · RequestJoinPledge · RequestStartPledgeWar · RequestStopPledgeWar · RequestPledgeReorganizeMember · RequestSetPledgeCrest · RequestExSetPledgeCrestLarge · RequestGiveNickName · RequestPledgeWarList · RequestPledgePower · RequestPledgePower · RequestPledgeMemberPowerInfo (registro de brasão abre diálogo de arquivo nativo [N]) |
| Cerco | `SiegeAPI.RequestCastleSiegeAttackerList(c)` :4 · `…DefenderList(c)` :5 · `RequestJoinCastleSiege(c, atk, reg)` :6 · `RequestConfirmCastleSiegeWaitingList(c, clan, reg)` :7 · `RequestSetCastleSiegeTime(c, t)` :8 | RequestSiegeAttackerList · RequestSiegeDefenderList · RequestJoinSiege · RequestConfirmSiegeWaitingList · RequestSetCastleSiegeTime |
| Quest | `QuestAPI.RequestQuestList()` :4 · `RequestDestroyQuest(id)` :5 · (`SetQuestTargetInfo` :6 é local) | RequestQuestList · RequestQuestAbort |
| Macro | `MacroAPI.RequestMacroList()` :4 · `RequestUseMacro(id)` :5 · `RequestDeleteMacro(id)` :6 · `RequestMakeMacro(id, name, icon, n, desc, cmds)` :7 | (lista [N]) · (execução local de comandos [I]) · RequestDeleteMacro · RequestMakeMacro |
| Atalhos | `ShortcutAPI.SetShortcutPage(p)` :4 (local [I]); registro/remoção pelo nativo (`RequestShortCutReg/Del`) | RequestShortCutReg/Del |
| HTML/NPC/BBS | `RequestBypassToServer(cmd)` :147 (ex. `manor_menu_select?ask=9&state=…`, `ManorCropSellWnd.uc:155`; `_diary?class=…`, `HeroTowerWnd.uc:61`) · `RequestBBSBoard()` :42 · `HtmlHandle.ControllerExecution(bypass)` | RequestBypassToServer · RequestShowBoard · (link/bypass [N]) |
| Chat | `ProcessChatMessage(msg, type)` :347 · `ProcessPetitionChatMessage` :350 · `ProcessPartyMatchChatMessage` :353 · `ProcessCommandChatMessage` :356 · `ProcessCommandInterPartyChatMessage` :357 | Say2 (tipo conforme prefixo/canal) |
| Petição | `PetitionAPI.RequestPetition(msg, type)` :5 · `RequestPetitionCancel()` :4 · `RequestPetitionFeedBack(rate, msg)` :6 | RequestPetition · RequestPetitionCancel · (avaliação [N]) |
| Duelo | `RequestDuelStart(name, type)` :51 · `RequestDuelAnswerStart(type, opt, ans)` :52 · `RequestDuelSurrender()` :53 | RequestDuelStart · RequestDuelAnswerStart · RequestDuelSurrender |
| Olimpíada/observação | `OlympiadAPI.RequestOlympiadObserverEnd()` :4 · `RequestOlympiadMatchList()` :5 · `RequestObserverModeEnd()` UIScript:406 | RequestOlympiadObserverEnd · RequestOlympiadMatchList · ObserverReturn |
| Mapa/radar | `RequestOpenMinimap()` :364 · `MiniMapAPI.RequestCursedWeaponList()` :4 · `RequestCursedWeaponLocation()` :5 · `RequestRaidRecord()` :19 | RequestShowMiniMap · RequestCursedWeaponList · RequestCursedWeaponLocation · RequestGetBossRecord |
| Sete Selos | `SSQAPI.RequestSSQStatus(n)` :4 | RequestSSQStatus |
| Herói | `HeroTowerAPI.RequestWriteHeroWords(w)` :4 | RequestWriteHeroWords |
| Pesca | `RequestFishRanking()` :416 | RequestExFishRanking |
| PC Café | `RequestPCCafeCouponUse(key)` :90 | RequestPCCafeCouponUse |
| GM | `GMAPI.RequestGMCommand(type, param)` :5 · `RequestSnoopEnd(id)` :7 · `BeginGMChangeServer(id, loc)` :4 | RequestGMCommand · SnoopQuit · (troca de servidor GM [N]) |
| Teste/ferramentas | `RequestTest(param)` :8 · `RequestLoadAllItem()` :435 · `BeginReplay/BeginPlay/BeginBenchMark` :391-395 | (sem pacote [I]) |

Nativos de rede chamados **só** pelo código C++ (sem native de script) e que a recriação precisa implementar no lugar das telas nativas [O nomes em `NConsoleWnd::`/`UNetworkHandler::`]: `RequestAuthLogin`, `RequestServerList`, `RequestServerLogin`, `RequestNewCharacter`, `RequestCharacterCreate`, `RequestCharacterDelete`, `RequestCharacterRestore`, `RequestGameStart`, `RequestEnterWorldPacket`, `RequestShortCutReg/Del/Use`, `RequestLinkHtml`, `RequestTutorial*`, `RequestManorList`, `RequestSkillCoolTime`, `RequestAutoSoulShot`, `RequestFriend*`, `RequestBlock`, `RequestRestart`, `RequestGetBossRecord`, além do movimento/validação de posição.

---

## 5. A validar no nativo (consolidado)
1. Serialização de `ParamAdd` e regra de casamento de `Parse*` (substring/case-insensitive à la `FParse::Value`? escape de espaços/aspas) — §1.5.
2. ~~Semântica dos campos `unk` do xdat~~ **resolvido** (§1.2.2, §1.2.4, `out/re/xdat_field_names.json`): os 64 campos sem nome (Window 40, DefaultProperty 11, ListCtrl 8, MultiEdit 2, SliderCtrl 1, Shortcut 2) têm o nome do atributo XML original. Correções: `unk138` = `hookKeyInput` (não "modal"), `unk110` = `saveSize`, `unk112` = `resizeframe`; os "valores aleatórios" são estruturas de nós opcionais não inicializadas.
3. Tratamento de ponto de âncora `NONE` (assumido TOP_LEFT) — §1.2.3.
4. Ordem do ciclo de vida (`OnLoad`/`OnEnterState`/`OnShow`) e se a troca de estado mostra todas as janelas do estado ou só as marcadas — §1.3.2, §1.6.2.
5. Ordem de entrega de eventos entre inscritos e se o emissor de `ExecuteEvent` recebe o próprio evento — §1.4.
6. Valores de `L2ConsoleState` e mapeamento para os estados de UI; quem dispara cada transição nativa (Login→Eula→ServerList→CharacterSelect→Loading→Gaming) — §1.6, §3.
7. Layout, textos e comportamento das telas nativas `LoginWnd/NCAuthWnd/NCLoginFunctionWnd/NCEulaWnd/NCServerSelectWnd/NCServerInfoWnd/NCLobbyWnd/NCLobbyStartWnd/NCLobbyFunctionWnd/NCPawnSelectWnd/NCPawnInfoWnd/NCPawnCreateWnd/NCPawnCreateFunctionWnd/NCPawnSetupWnd/NCCreditWnd/NCWarningWnd/NCAnnounceWnd/NCNoticeInfoWnd/VersionWnd` — §3.
8. Lista de comandos de atalho executados pelo nativo vs. repassados por `EV_ShortcutCommand`; quem chama `DialogBox.DoDefaultAction` no Enter — §1.7.
9. Tooltips: origem do texto quando `popupValue=-9999`, atraso, posicionamento, texturas de fundo — §1.9.
10. Z-order/modalidade (`SetAlwaysOnTop`, `NCDialogBox::DoModal`) e quando aparecem os diálogos nativos (`NCGaraDialogBox`, `NCWarningDialogBox`, `NCKeyCryptWarningDialogBox`) — §1.10.
11. Quando/como `WindowsInfo.ini` é gravado, clamp/escala por resolução, e o que são as seções `[1]..[8]` — §1.11.
12. Tabela `fontType` → fonte/tamanho/efeito; uso do `L2Font.gulim` — §1.12.
13. Escolha das classes de idioma (`LoadingWnd_e`, `TeaserSlideWnd_*`…) e os `defaultproperties` (texturas de loading 15/18/Free) que não vieram no texto exportado — §1.3.1, §3.6.
14. Mapeamento exato native de script → pacote (tabela da §4 é por nome); comportamento de `RequestExit`, `ExecQuit`, `ExecRestart`, `RequestMacroList`, `RequestPetInventoryItemList`, `RequestCommandChannelInfo/Withdraw` — §4, §3.9.
15. Disparo de `EV_UpdateUserInfo` junto com `EV_UpdateHP` (StatusWnd não trata 190) — `90_catalogo_eventos.md`.
