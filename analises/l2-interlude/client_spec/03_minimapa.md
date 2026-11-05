# 03 — Minimapa, radar e mapas (Interlude)

Legenda usada em todo o documento:

- **[Obs]** Observado: está no código/dado do cliente (com `arquivo:linha`).
- **[Inf]** Inferido: dedução, com a fonte do raciocínio.
- **[Validar]** Desconhecido / a validar no nativo: o comportamento está em C++ (`NWindow.dll`, `Engine.dll`) que não foi decompilado para esta seção.

Abreviações de caminho:
- `uc/` = `export/uc/Interface/` (scripts da interface), `nw/` = `export/uc/NWindow/` (API nativa declarada), `eng/` = `export/uc/Engine/`.
- `lay/` = `out/re/layout/` (árvore do `Interface.xdat`), `cfg/` = `export/client_cfg/`, `ui/` = `out/tool/ui/` (sprites PNG exportados).
- `SYS/` = `C:\Program Files (x86)\Lineage II Interlude\System\`.

---

## 1. Visão geral

| Janela (xdat) | Classe UC | Função | Estado de exibição |
|---|---|---|---|
| `MinimapWnd` | `MinimapWnd` (`uc/MinimapWnd.uc`) | Mapa “normal” 334×413 com mapa-múndi/mapa de cidade, hora do jogo, sol/lua, status Seven Signs, zona atual, armas amaldiçoadas, botões de navegação | GamingState |
| `MinimapWnd_Expand` | `MinimapWnd_Expand` (`uc/MinimapWnd_Expand.uc`) | Mesmo conteúdo em tela cheia (até 1024×1024), sem botão “World Info.” | GamingState |
| `GuideWnd` | `GuideWnd` (`uc/GuideWnd.uc`) | “Adventurer Guide Book” (abre pelo botão *World Info.*): listas de quest, áreas de caça, raids e regiões; clicar centraliza o minimapa | GamingState; *drawer* acoplado a `MinimapWnd` |
| `RadarContainerWnd` | `RadarContainerWnd` | Contém o controle nativo `Radar` 102×102 (canto superior direito) | GamingState |
| `RadarWnd` | `RadarWnd` | Ícone 16×16 de tipo de zona (só o ícone Seven Signs é usado) + cor do radar | GamingState |
| `movingtext` | (controlado por `RadarWnd`) | Texto com *fade* do tipo de zona (“Peaceful Zone”, “PvP Zone”...) | GamingState |
| `ZoneTitleWnd` | `ZoneTitleWnd` | Nome da zona grande no centro-alto da tela ao entrar numa zona (4 s) | GamingState |
| `TownMapWnd` | `TownMapWnd` | Mapa de cidade “legado” aberto por placas/objetos estáticos (pacote `ShowTownMap`) | GamingState |

Arquitetura **[Obs]**: quase todo o desenho do mapa é nativo. O script só manipula o controle `MinimapCtrl` por `class'UIAPI_MINIMAPCTRL'` (`nw/UIAPI_MINIMAPCTRL.uc:1-15`) e o `Radar` por `class'UIAPI_RADAR'` (`nw/UIAPI_RADAR.uc:1-7`). Os nomes de métodos nativos do controle aparecem como strings em `SYS/NWindow.dll` (classe C++ `NCMinimapWnd`, fonte `.\Src\NMinimapWnd.cpp`): `InitializeMapDisplay, DrawWorldMap, DrawTownMap, DrawGrid, GetGridNum, DrawMyLocation, DrawMinimapTarget, DrawQuestTarget, DrawCursedWeaponIcon, GetWorldmapCoords, GetMinimapPosition, GetPlayerMinimapPosition, GetTargetMinimapPosition, GetMinimapLocationWithException, InitExceptForLocationList, GetExceptLocID, FindMapIndex, GetMapWidth, GetMapHeight, AdjustMapView, InitPosition, RefreshButtonLoc, AdjustReduceBtn, ReduceBtnClick, OnBtnClick, OnLButtonDown, OnLButtonUp, OnMouseMove, OnPaint, SetSSQStatus, SetQuestOn, IsOverlapped, AddTargetLoc, DeleteTargetLoc, Clear, ShowWindow, OnDestroy` (strings de log, encontradas por varredura UTF-16 do DLL).

Fluxo de abertura **[Obs+Inf]**: tecla M/Alt+M ou botão do menu → `RequestOpenMinimap()` (`nw/UIScript.uc:364`) → pacote cliente `RequestShowMiniMap` (0xcd, `docs/client_spec/92_protocolo_opcodes.md:449`; string `(Send)RequestOpenMinimap` no `Engine.dll`) → servidor responde `ShowMiniMap` (0x9d: `D mapId`, `D período Seven Signs`, `ext/src/acis/.../serverpackets/ShowMiniMap.java`) → `UGameEngine::OnShowMinimap(int)` (`Engine.dll`) → `EV_ShowMinimap` com `SSQStatus=n` (`docs/client_spec/91_eventos_nativos.md:194`) → `MinimapWnd.HandleShowMinimap` alterna a janela. **Ou seja, abrir o mapa depende de ida-e-volta ao servidor.** O `mapId` (1665 = mapa normal; itens de mapa enviam o próprio item id, `.../itemhandlers/Maps.java:20`) não chega ao script **[Validar]** se o nativo o usa.

---

## 2. Layout exato

Nota sobre âncoras **[Obs]**: nos arquivos `lay/*.txt` (dump regenerado) a notação `@A->Ctrl.B(x,y)` significa “o ponto A **deste** controle fica preso ao ponto B do controle-alvo (`Ctrl`, ou o pai se `pai`), deslocado por (x,y)”. Ex.: `txtColonSSQ @TOP_LEFT->MinimapWnd.txtSSQ.TOP_RIGHT(2,0)` = “:” começa 2 px à direita do rótulo. As posições absolutas abaixo foram calculadas com essa regra (um dump anterior trocava A e B nos pares assimétricos; as posições desta seção já estavam coerentes com a regra correta e foram revalidadas no dump novo).

### 2.1 `MinimapWnd` (334×413) — `lay/MinimapWnd.txt`

Janela **[Obs]** (`lay/MinimapWnd.txt:1`): 334×413, âncora `CENTER_LEFT` da tela (0,0); `unk101=L2UI_CH3.Minimap.MapBack` (fundo/moldura, 512×512 em `ui/L2UI_CH3/Minimap/mapback.png`); `unk111=447` (“Map”, título **[Inf]**); `unk136=L2UI_CH3.MenuIcon.menuicon3` + `unk137=925` (“Map (Alt+M)”) **[Inf]**: ícone/tooltip de janela minimizada (o mesmo par aparece só em janelas minimizáveis: Inventory, Board, Macro...). Posição padrão real: `_wnddefpos.txt:19` `MiniMapWnd TOP_LEFT x=0 y=200` e `cfg/WindowsInfo.ini:125-127` `[MinimapWnd] posX=0 posY=200`.

| # | Controle | Classe | Tam. | Âncora (xdat) | Pos. absoluta | Textura / propriedades | Rótulo (sysstring) |
|---|---|---|---|---|---|---|---|
| 2 | `Minimap` | MinimapCtrl | 328×328 | TOP_LEFT pai (3,51) | (3,51) | `showTime showTown showGrid showMyLocMark showMyLocText showSSQText` = true | — |
| 3 | `texShadowTop` | Texture | 328×16 | TOP_LEFT (3,51) | (3,51) | `L2UI_CH3.FrameCtrl.Bar_Shadow` Tile | — |
| 4 | `texShadowBottom` | Texture | 329×23 | BOTTOM_LEFT (3,-33) | (3,357) | `L2UI_CH3.Minimap.MapShadow` Tile (512×32) | — |
| 5 | `texSun` | Texture | 25×25 | TOP_LEFT (7,57) | (7,57) | `L2UI_CH3.Minimap.Map_Sun` (32×32) | — |
| 6 | `texMoon` | Texture | 25×25 | TOP_LEFT (7,57) | (7,57) | `L2UI_CH3.Minimap.Map_Moon` (32×32) | — |
| 7 | `txtGameTime` | TextBox | 10×12 autosize | TOP_LEFT → texSun.TOP_RIGHT (0,12) | (32,69) | cor #dcdcdc, alinh. esq., offsetY=1 | (dinâmico) |
| 8 | `btnReduce` | Button | 24×24 | BOTTOM_RIGHT (-6,-37) | (304,352) | `L2UI_CH3.Minimap.MapButton_ZoomOut1` / `_ZoomOut2` | — |
| 9 | `txtSSQ` | TextBox | 50×12 autosize | BOTTOM_LEFT pai (24,-52) | (24,349) | #dcdcdc | 833 “Quest Status” |
| 10 | `txtColonSSQ` | TextBox | 10×12 | TOP_LEFT → txtSSQ.TOP_RIGHT (2,0) | à direita | texto “:” | — |
| 11 | `txtVarSSQType` | TextBox | 60×12 | TOP_LEFT → txtColonSSQ.TOP_RIGHT (2,0) | à direita | #dcdcdc | (dinâmico 973–976) |
| 12 | `txtCurLoc` | TextBox | 50×12 | BOTTOM_LEFT pai (24,-36) | (24,365) | #dcdcdc | 471 “Current Position” |
| 13 | `txtColonCurLoc` | TextBox | 10×12 | TOP_LEFT → txtCurLoc.TOP_RIGHT (2,0) | à direita | “:” | — |
| 14 | `txtVarCurLoc` | TextBox | 60×12 | TOP_LEFT → txtColonCurLoc.TOP_RIGHT (2,0) | à direita | #dcdcdc | (nome da zona) |
| 15 | `ExpandButton` | Button | 76×23 | TOP_LEFT (250,385) | (250,385) | `L2UI_CH3.Button.Btn1_Normal` / `Btn1_NormalOn` | 1474 “Enlarge Map” |
| 16 | `TargetButton` | Button | 76×23 | TOP_LEFT (170,385) | (170,385) | idem | 886 “Target Loc.” |
| 17 | `MyLocButton` | Button | 76×23 (herda de `MinimapWnd.TargetButton`) | `@NONE->pai.TOP_LEFT(10,385)` (ponto próprio herdado) |  (10,385) | idem | 887 “Current Loc.” |
| 18 | `PartyLocButton` | Button | 76×23 (herda de `TargetButton`) | `@NONE->pai.TOP_LEFT(90,385)` (ponto próprio herdado) |  (90,385) | idem | 1223 “Party Member” |
| 19 | `CursedComboBox` | ComboBox | 180×19 | TOP_LEFT (6,27) | (6,27) | — | itens dinâmicos |
| 20 | `Pursuit` | Button | 47×21 | TOP_LEFT (193,25) | (193,25) | `L2UI_CH3.Button.SmallButton1` / `_down` | 1462 “Find” |
| 21 | `OpenGuideWnd` | Button | 76×23 | TOP_LEFT (254,25) | (254,25) | `Btn1_Normal` / `Btn1_NormalOn` | 1461 “World Info.” |

`MyLocButton`/`PartyLocButton` não têm tamanho no xdat; o JSON mostra `superName = "MinimapWnd.TargetButton"` (herança de propriedades) **[Obs]** (`out/re/interface_layout.json`, janela MinimapWnd). A faixa y=0..~22 é a barra de título desenhada pelo frame da janela **[Inf]**.

### 2.2 `MinimapWnd_Expand` (dinâmico) — `lay/MinimapWnd_Expand.txt`

Janela **[Obs]** 0×0 no xdat, âncora TOP_LEFT (0,0); `_wnddefpos.txt:20,25` `MiniMapWnd_Expand TOP_LEFT x=0 y=0`; `unk111=447`. O tamanho é definido em runtime por `ResetMiniMapSize` (`uc/MinimapWnd_Expand.uc:185-222`):

```
const N_MAX_MINI_MAP_RES_X = 1024; N_MAX_MINI_MAP_RES_Y = 1024; N_BUTTON_HEAD_AREA_BUFFER = 90;   // :3-5
janela   = (min(W,1024), min(H,1024))           // só troca se W>1024 / H>1024 (estrito)
mapaW    = W - (W*3)/100   (divisão inteira)  ou 1016 se W>1024
mapaH    = H - 90                              ou 934  se H>1024
m_hMinimapWnd.SetWindowSize(janela); MiniMapCtrl.SetWindowSize(mapaW, mapaH); OnClickMyLocButton();   // :219-221
```
Chamado em `OnShow→CheckResolution` (`:119`, `:168-183`, usa `GetCurrentResolution`) e em `EV_ResolutionChanged` (`NewWidth`,`NewHeight`, `:126-133`). Exemplo 1024×768: janela 1024×768, mapa 994×678 em (15,55); 1600×1200: janela 1024×1024 no canto superior esquerdo, mapa 1016×934 em (4,55).

| # | Controle | Tam. | Âncora | Textura / prop. | Rótulo |
|---|---|---|---|---|---|
| 2 | `MinimapWnd_Expand1` (Texture) | 100% × (100%+20) | TOP_LEFT (0,0) | `L2UI_CH3.Minimap.MapWnd_back_max` (4×4) Tile, layer Background, uSize/vSize 64 | — |
| 3 | `Minimap` (MinimapCtrl) | 0×0 → runtime | CENTER pai (0,10) | mesmos 6 flags = true | — |
| 4/5 | `texSun` / `texMoon` | 25×25 | TOP_LEFT janela (13,57) | Map_Sun / Map_Moon | — |
| 6 | `txtGameTime` | 10×12 autosize | TOP_LEFT → texSun.TOP_RIGHT (0,12) → (38,69) | #dcdcdc | — |
| 7 | `btnReduce` | 24×24 | BOTTOM_RIGHT janela (-30,-50) | MapButton_ZoomOut1/2 | — |
| 8–10 | `txtSSQ` `:` `txtVarSSQType` | 50/10/60×12 | BOTTOM_LEFT → **Minimap**.BOTTOM_LEFT (22,-26); “:” e valor: TOP_LEFT → anterior.TOP_RIGHT (2,0) | #dcdcdc | 833 |
| 11–13 | `txtCurLoc` `:` `txtVarCurLoc` | idem | BOTTOM_LEFT do Minimap (22,-10) | #dcdcdc | 471 |
| 14 | `CursedComboBox` | 180×19 | TOP_RIGHT pai (-61,26) | — | — |
| 15 | `Pursuit` | 47×21 | TOP_RIGHT pai (-8,25) | SmallButton1 | 1462 “Find” |
| 16 | `CollapseButton` | 76×23 | BOTTOM_RIGHT (-6,-7) | Btn1_Normal | 1475 “Minimize” |
| 17 | `TargetButton` | 76×23 | BOTTOM_RIGHT (-86,-7) | idem | 886 |
| 18 | `PartyLocButton` | 76×23 | BOTTOM_RIGHT (-166,-7) | idem | 1223 |
| 19 | `MyLocButton` | 76×23 | BOTTOM_RIGHT (-246,-7) | idem | 887 |

Diferenças em relação ao normal **[Obs]**: sem `OpenGuideWnd` (código comentado em `uc/MinimapWnd_Expand.uc:321-330`), sem sombras, botão `CollapseButton` no lugar de `ExpandButton`.

### 2.3 `GuideWnd` (466×400) — `lay/GuideWnd.txt`

`unk101=L2UI_CH3.Minimap.mapinfo_back`, `unk111=1426` (“Adventurer Guide Book”), `unk129=MinimapWnd` **[Obs]**. `unk129` só aparece em janelas-gaveta (`ClanDrawerWnd→MainWnd.ClanWnd`, `PartyMatchWaitListWnd→PartyMatchRoomWnd`...) **[Inf]**: GuideWnd é gaveta de MinimapWnd (por isso `HideWindow("MinimapWnd.GuideWnd")` em `uc/GuideWnd.uc:188`). Conteúdo: `TabCtrl` 380×23 em (12,8) com 4 abas 95×23 (`L2UI_CH3.GuideWnd.guide_tab2`/`guide_tab1`): 118 “Quest”, 1296 “Hunting Zone”, 1297 “Raid”, 1298 “Region Info”; cada aba tem `text_search` (1309 “Search Area”), ComboBox 128×17 em (80,2) e ListCtrl 445×266 em (5,37) com colunas (Hunting: 1299 Name 166 / 1300 Type 100 / 1304 Affiliated Territory 109 / 922 Level 69; Region: 1303 174 / 412 154 / 1304 119); `CloseButton` 76×23 em (190,365) “Close” (1364). Detalhes de quest/raid ficam para a seção de quests; aqui interessa a integração com o mapa (§3.9).

### 2.4 Radar — `lay/RadarContainerWnd.txt`, `lay/RadarWnd.txt`, `lay/movingtext.txt`

| Janela/controle | Tam. | Âncora | Textura |
|---|---|---|---|
| `RadarContainerWnd` | 102×102 | TOP_RIGHT tela (0,0) | — |
| `RadarContainerWnd.Radar` (classe `Radar`) | 100%×100% | TOP_LEFT (0,0) | nenhuma propriedade no xdat; desenho nativo |
| `RadarWnd` | 16×16 | TOP_RIGHT tela (-10,85) | — |
| `RadarWnd.iconN` (N=1..9), cada um Window 16×16 em (0,0) com Texture `iconNt` 100% | 16×16 | TOP_LEFT (0,0) | `L2UI_CH3.Radar.iconN` (Normal, Background) |
| `movingtext` | 100×20 | TOP_RIGHT tela (-12,86) | — |
| `movingtext.textboxmove` | 300×20 | CENTER (0,0) | texto centralizado #dcdcdc |

**[Obs]** pelos PNGs (`ui/L2UI_CH3/Radar/icon*.png`): `icon1..5, icon7..9` são placeholders com o dígito “1”…“9”; só `icon6` é arte real (símbolo Seven Signs). Texturas nativas do radar: `L2UI.RadarWnd.RadarBack/North/South/East/West/Party/Target/Tutorial1/Tutorial2` e `LineageDecos.radar_back/_arrow/_center/_n/_time/_dot_party/_dot_target/_dot_tutorial1/_dot_tutorial2` (strings em `Engine.dll`); exportadas em `ui/l2ui/RadarWnd/*.png` e `ui/L2UI_CH3/Radar/radar_*.png` (radar_back 128×128, radar_arrow 128×128, dots 8×8).

### 2.5 `ZoneTitleWnd` (500×200) — `lay/ZoneTitleWnd.txt`

| Controle | Tam. | Pos. | Prop. |
|---|---|---|---|
| janela | 500×200 (runtime: TextWidth+100 × 200) | CENTER (0,0) (runtime: MoveTo) | — |
| `texZoneTitleFontDeco` | 256×256 | (0,0) | `L2ui_ch3.PlayerStatusWnd.fontdeco` Stretch |
| `textZoneNameBack` | 100×40 autosize | (103,83) | cor #000000 (sombra), offsetY 4 |
| `textZoneNameFront` | 100×40 autosize | (100,80) | cor #f0f0dc, offsetY 4 |

### 2.6 `TownMapWnd` (334×354) — `lay/TownMapWnd.txt`

| Controle | Tam. | Pos. | Textura |
|---|---|---|---|
| janela | 334×354, CENTER_LEFT (0,0), `unk111=447` | — | — |
| `BackTex` | 334×333 | (0,21) | `L2UI.MinimapWnd.MinimapBack` Normal/Background |
| `ContainerWnd` | 328×328 | (3,21) | — |
| `ContainerWnd.TownMapTex` | 100% | (0,0) | `Default.BlackTexture`, **type=Draggable**, uSize=vSize=512 |
| `ContainerWnd.UserTex` | 32×32 | (0,0), reancorado em runtime | `town_map.icon_i00` Stretch |

---

## 3. Comportamento

### 3.1 Abrir/fechar e alternar normal ↔ expandido

- `EV_ShowMinimap` é registrado **só** por `MinimapWnd` (`uc/MinimapWnd.uc:25`). `HandleShowMinimap` (`:176-225`):
  1. Se `ParseInt(SSQStatus)` → `UIAPI_MINIMAPCTRL.SetSSQStatus("MinimapWnd.Minimap", n)` e guarda `m_SSQStatus` (`:183-189`). **[Obs]** o controle do Expand nunca recebe `SetSSQStatus`.
  2. `m_bExpandState` (só em memória; `false` no `OnLoad`, `:47`) decide qual janela alterna: se expandido, fecha Expand se aberto, senão fecha a normal e `ShowWindowWithFocus("MinimapWnd_Expand")`; se normal, simétrico (`:191-218`). Resultado: M abre/fecha a última variante usada na sessão.
  3. Se alguma das duas ficou visível → `MiniMapAPI.RequestCursedWeaponList()` + `RequestCursedWeaponLocation()` (`:220-224`; pacotes 0xd0:0x22/0x23, `92_protocolo_opcodes.md:483-484`).
- `ExpandButton` (`:320-324`): `SetExpandState(true)`, mostra Expand com foco, esconde a normal.
- `CollapseButton` (`uc/MinimapWnd_Expand.uc:347-357`): `MinimapWnd(GetScript("MinimapWnd")).SetExpandState(false)`, esconde Expand, `ShowWindowWithFocus("MinimapWnd")`.
- Sons **[Obs]**: `OnShow` toca `interfacesound.Interface.map_open_01` (`uc/MinimapWnd.uc:108`, `uc/MinimapWnd_Expand.uc:109`); `OnHide` toca `map_close_01` (`:156` / `:227`). Alternar variantes toca fechar+abrir.
- `OnShow` (normal, `:104-117`): `AdjustMapToPlayerPosition(true)`; reabre GuideWnd se ela estava aberta quando o mapa fechou (`b_IsShowGuideWnd`, `:109-111`, gravado em `OnHide :152-155`); `SetSSQTypeText()`; `SetCurrentLocation()`.
- `OnShow` (Expand, `:103-124`): `AdjustMapToPlayerPosition(true)`, som, `SetSSQTypeText` (lê `m_SSQStatus` do script da janela normal, `:139-142`), `SetCurrentLocation`, `CheckResolution`, pedidos de armas amaldiçoadas.

### 3.2 Centralização, “zoom” e níveis

- Natives **[Obs]** `nw/UIAPI_MINIMAPCTRL.uc:4-5`: `AdjustMapView(ctrl, vector Loc, optional bool a_ZoomToTownMap, optional bool a_UseGridLocation)`; `InitPosition(ctrl)` (só usado em código comentado de GuideWnd).
- `AdjustMapToPlayerPosition(a_ZoomToTownMap)` = `AdjustMapView(ctrl, GetPlayerPosition(), a_ZoomToTownMap)` (`uc/MinimapWnd.uc:347-353`). Chamado com `true` em `OnShow`, `MyLocButton` (`:341-345`) e `EV_MinimapChangeOnTick` (`:78-80`).
- Botões: `MyLocButton` → jogador (com zoom de cidade); `PartyLocButton` → cicla `m_PartyLocIndex = (idx+1) % GetPartyMemberCount()` e centraliza no membro via `GetPartyMemberLocation(idx, out loc)` sem zoom de cidade (`:355-372`; `nw/UIScript.uc:60-61`); `TargetButton` → `GetQuestLocation(loc)` e centraliza (`:333-339`).
- **Níveis de zoom [Inf]**: há exatamente dois — **mapa-múndi** (`int_worldmap*`) e **mapa de cidade/masmorra** (`L2Font-e.TownMap.*`). Evidências: (a) único botão de zoom no xdat é `btnReduce` com textura *ZoomOut*; (b) as texturas `MapButton_ZoomIn1/ZoomIn2` só são referenciadas pelo nativo (`NWindow.dll`, perto de `NCMinimapWnd::InitializeMapDisplay`) e o `ZoneName-e.dat` tem `TownBtnLocX/Y` (posição desses botões “+” sobre o mapa-múndi) para 22 cidades/masmorras (§4.4); (c) `AdjustMapView(..., a_ZoomToTownMap)`. Não há evidência de zoom contínuo nem roda do mouse (nenhum `OnMouseWheel` em `NCMinimapWnd`).
- Botão “−” (`btnReduce`): `EV_MinimapShowReduceBtn` / `EV_MinimapHideReduceBtn` (sem parâmetros) mostram/escondem o botão (`uc/MinimapWnd.uc:91-96`; Expand `:87-92`). Clique → `UIAPI_MINIMAPCTRL.RequestReduceBtn(ctrl)` e esconde o botão (`:325-328`). **[Inf]** o nativo dispara ShowReduceBtn ao entrar no mapa de cidade e `RequestReduceBtn` volta ao mapa-múndi.
- Arrastar **[Inf]**: `NCMinimapWnd::OnLButtonDown/OnLButtonUp/OnMouseMove` sugerem *pan* com o mouse. **[Validar]**.

### 3.3 Hora do jogo, sol/lua

`EV_MinimapUpdateGameTime` (`GameHour`, `GameMinute`), tratado só se `m_bShowGameTime` (sempre true) (`uc/MinimapWnd.uc:97-100`, `:613-655`):

```
SelectSunOrMoon(h): se 6 <= h <= 24 → mostra texSun, esconde texMoon; senão (0..5) → lua   // :657-669
texto: h>=12 → "PM ", h-=12; senão "AM "; se h==0 → h=12;
       h<10 → "0"+h ; + " : " ; m<10 → "0"+m          // ex.: "PM 03 : 07", "AM 12 : 00"
SetText("MinimapWnd.txtGameTime", texto)
```
Comentário legado `CDC->DrawText(29,19,NWhiteColor,*strTime,...,L2FT_BIG)` (`:652`) mostra que antes o nativo desenhava a hora; a flag `showTime` do controle continua true **[Validar]** se o nativo ainda desenha algo.

### 3.4 Seven Signs (SSQ)

`SetSSQTypeText()` (`uc/MinimapWnd.uc:120-140`): `m_SSQStatus` 0→sysstring 973 “Currently Preparing for the Quest Event”, 1→974 “Quest Event Period”, 2→975 “Results Being Tallied”, 3→976 “Seal Validation Period”; grava em `txtVarSSQType` (rótulo 833 “Quest Status”). Origem: segundo `D` do pacote `ShowMiniMap` = `SevenSignsManager.getCurrentPeriod().ordinal()` (aCis `PeriodType`: RECRUITING, COMPETITION, RESULTS, SEAL_VALIDATION) **[Obs no servidor de referência]**. `showSSQText` e `SetSSQStatus` sugerem que o nativo também desenha algo dependente de SSQ **[Validar]**.

### 3.5 Zona atual (“Current Position”)

`SetCurrentLocation()` = `SetText(txtVarCurLoc, GetCurrentZoneName())` (`uc/MinimapWnd.uc:142-148`; native `nw/UIScript.uc:371`), chamado em `OnShow` e em `EV_BeginShowZoneTitleWnd` (o parâmetro do evento é ignorado aqui). Nativo: `FL2GameData::GetCurrentZoneName` / `GetZoneName(float,float,float)` / `GetZoneNameInfo(int,int,int,float)` / `GetZoneNameTexture(int,int)` com formato `L2ZoneName.%d_%d` (`Engine.dll`). Algoritmo em §4.3.

### 3.6 Alvos / marcações

| Evento | Parâmetros | Efeito |
|---|---|---|
| `EV_MinimapAddTarget` | `X`,`Y`,`Z` (**ParseFloat**) | `AddTarget(ctrl, Loc)` + `AdjustMapView(ctrl, Loc, false, false)` (`uc/MinimapWnd.uc:227-242`) |
| `EV_MinimapDeleteTarget` | `X`,`Y`,`Z` (**ParseInt**) | `DeleteTarget(ctrl, Loc)` (`:244-260`) |
| `EV_MinimapDeleteAllTarget` | — | `DeleteAllTarget(ctrl)` (`:262-265`) |
| `EV_MinimapShowQuest` / `HideQuest` | — | `SetShowQuest(ctrl, true/false)` (`:267-279`) |

Ambas as janelas tratam todos esses eventos, cada uma no seu `Minimap`. Ícone do alvo **[Inf]**: `L2UI_CH3.Minimap.MapIcon_Mark` (alfinete 32×32) e `L2UI.MinimapWnd.TargetPos` (bandeira vermelha), referenciados pelo nativo. Origem provável **[Inf]**: pacote `RadarControl` (0xEB; `showRadar` 0=add, 1=delete, 2=delete all; `type`; x,y,z — `ext/src/acis/.../RadarList.java:30-64`), que também alimenta o radar. Quest: `QuestAPI.SetQuestTargetInfo(QuestOn, ShowTargetInRadar, ShowArrow, TargetName, TargetPos, QuestID)` (`nw/QuestAPI.uc`; `uc/QuestTreeWnd.uc:359-366`: se `IsMinimapOnly` → só minimapa, sem radar/seta).

### 3.7 Membros da party

O script só guarda `PartyMemberCount` (`EV_PartyMemberChanged`, `uc/MinimapWnd.uc:159-162`) e cicla a câmera do mapa (§3.2). O desenho dos membros é nativo com `L2UI_CH3.Minimap.minimap_party` (16×16, ponto verde) **[Inf]** (string em `NWindow.dll`).

### 3.8 Armas amaldiçoadas (Zariche / Akamanah)

- `EV_MinimapCursedWeaponList`: `NUM`, `ID<i>`, `NAME<i>` (i=0..NUM-1). Normal (`uc/MinimapWnd.uc:374-403`): limpa o combo, item 0 = sysstring 1463 “- Cursed Weapon -” (reserved 0), depois um item por arma (reserved = item id), seleciona 0, `DeleteAllTarget`. **Quirk [Obs]** no Expand (`uc/MinimapWnd_Expand.uc:413-422`): no `i==0` adiciona o título **e** um item vazio (`ParseInt("ID-1")` falha) → combo fica `["- Cursed Weapon -", "", nomes…]`. No Expand ambos os eventos são ignorados se a janela estiver oculta (`:74-83`).
- `EV_MinimapCursedWeaponLocation`: `NUM`, `ID<i>`, `NAME<i>`, `ISOWNED<i>`, `X<i>`,`Y<i>`,`Z<i>` (ParseInt) (`uc/MinimapWnd.uc:405-582`). Pacote 0xFE:0x46 (`id, activated, x, y, z`; se vazio envia `0,0`). Regras:
  - `NUM==0`: se em modo “Find” → centraliza no jogador; sempre `DeleteAllCursedWeaponIcon(ctrl)`; fim (`:435-441`).
  - Guarda até 2 armas (índices 0 e 1). `Normal(vec)` é chamado sem usar o retorno → **sem efeito** (`:461,472,482`).
  - Modo “Find” (`Pursuit` → `m_AdjustCursedLoc=true` + `RequestCursedWeaponLocation`, `:315-319`): compara o texto selecionado no combo com os nomes e `AdjustMapView(loc, false)`; se nada casar (ex.: título selecionado) → `AdjustMapToPlayerPosition(true)`. Neste caminho os ícones **não** são redesenhados (`:490-507`).
  - Senão, desenha: 1 arma → `DrawCursedWeapon(..., bDropped = ISOWNED==0, bRefresh=true)`; 2 armas → `IsOverlapped(ctrl, x1,y1,x2,y2)`; se sobrepostas, um único ícone `L2UI_CH3.MiniMap.cursedmapicon00` com tooltip `"nome1\nnome2"`; senão dois ícones (2º com `bRefresh=false`) (`:510-539`).
  - `DrawCursedWeapon` (`:584-601`): item 8190 (1464 “Demonic Sword Zariche”) → `cursedmapicon01`; 8689 (1499 “Blood Sword Akamanah”) → `cursedmapicon02`; caída (`ISOWNED==0`) → sufixo `_drop`; chama `DrawGridIcon(ctrl, icone, "L2UI_CH3.MiniMap.cursedmapicon00", loc, bRefresh, 0, -12, nome)`.
  - Assinatura: `DrawGridIcon(ctrl, a_IconName, a_DupIconName, vector a_Loc, bool a_Refresh, optional int a_XOffset, optional int a_YOffset, optional string Tooltip)` (`nw/UIAPI_MINIMAPCTRL.uc:12`). Texturas 64×128 (estandarte; `_drop` em azul-acinzentado) em `ui/L2UI_CH3/Minimap/`.
  - Mensagens 1985 “$s1's drop area ($s2)” / 1986 “$s1's owner ($s2)” só aparecem em código comentado (`:519-523`).
- `OnComboBoxItemSelected("CursedComboBox")` lê o reserved mas não faz nada (`:281-292`).

### 3.9 GuideWnd → minimapa

`OnClickListCtrlRecord` (`uc/GuideWnd.uc:237-292`): para Quest (`UIDATA_QUEST.GetStartNPCLoc`), Hunting Zone e Region Info (`UIDATA_HUNTINGZONE.GetHuntingZoneLoc`), Raid (`UIDATA_RAID.GetRaidLoc`): `AdjustMapView("MinimapWnd.Minimap", loc, false)`, `DeleteAllTarget`, `AddTarget(loc)`. **[Obs]** sempre o controle da janela normal. Listas: aba Hunting mostra `type ∈ {1,2}` (`:338-339`), Region Info `type > 2` (`:1211-1212`), combos com os domínios (`type==0`, `:1349`). Tipos (`:11-20`, sysstrings 1313–1319): 0 domínio, 1 Fields, 2 Dungeon, 3 Castle/Town, 4 Harbor, 5 Clan Hall, 6 Arena, 7 Other. Nível: `min~max`, `min +` (859) ou “None” (866) (`:349-358`).

### 3.10 Radar e tipo de zona

- `RadarContainerWnd` (`uc/RadarContainerWnd.uc`): `EV_RadarAddTarget`/`DeleteTarget` (`X`,`Y`,`Z` ParseInt) → `UIAPI_RADAR.AddTarget/DeleteTarget(ctrl, x,y,z)`; `EV_RadarDeleteAllTarget` → `DeleteAllTarget`. **Bug [Obs]**: o nome do controle está escrito `"RadarContainterWnd.Radar"` (`:34,46,52`), que não existe no xdat — **[Validar]** se o nativo resolve ou se as chamadas falham (o nativo `UGameEngine::OnShowRadar(int×5)`/`OnDeleteRadar` pode alimentar o radar diretamente).
- `RadarWnd` (`uc/RadarWnd.uc`): `EV_SetRadarZoneCode` (`ZoneCode`) (`:149-223`). Sempre: `resetanimloc()`, `onshowstat2=true`, `SetAlpha("movingtext",0)`, `ShowWindow("movingtext")`; depois:

| ZoneCode | Comentário no código | Texto (sysstring) | `SetRadarColor(cor, 2.0 s)` RGB | Ícone |
|---|---|---|---|---|
| 15 | Ordinary Field | 1284 “General Field” | Grey (30,30,30) | nenhum |
| 12 | Peace Zone | 1285 “Peaceful Zone” | Blue (0,0,50) | nenhum |
| 11 | Siege Warfare | 1286 “Siege War Zone” | Orange (60,30,0) | nenhum |
| 9 | Buff Zone (“Green”) | 1287 “Altered Zone” | **Red** (50,0,0) | nenhum |
| 8 | DeBuff Zone | 1288 “Altered Zone” | Red (50,0,0) | nenhum |
| 13 | SSQ Zone | 1289 “Seven Signs Zone” | Grey (30,30,30) | mostra `RadarWnd` + `icon6` |
| 14 | PvP Zone | 1290 “PvP Zone” | Green (0,50,0) | nenhum |
| outro (ex.: 10 = `SIEGEWARZONE1` do aCis) | — | **mantém o texto anterior** (fade roda igual) | sem mudança | — |

  Códigos do servidor: pacote `ExSetCompassZoneCode` (0xFE:0x32, `D zoneType`; aCis: 0x0A/0x0B siege, 0x0C peace, 0x0D seven signs, 0x0E pvp, 0x0F general). `HideAllIcons()` esconde icon1..9 **e o próprio `RadarWnd`** (`:111-123`).
- Fade de `movingtext` por `OnTick` (`:34-81`): fase 1 alpha += 3 por tick até ≥255 (≈85 ticks), fase 2 alpha −= 2 por tick até ≤1 (≈127 ticks), então alpha 0 e esconde. `move_value`/`Move` estão comentados. **[Validar]** frequência do `OnTick` (por frame?) e se ticks rodam com `RadarWnd` oculto (ele é escondido em todo código ≠13).
- `SetRadarColor(Color, float a_Seconds)` (`nw/UIAPI_RADAR.uc:7`) — transição de 2 s **[Inf]**; `EV_RadarColor` (1760) e `EV_RadarTransitionFinished` (80) não têm tratador no script.

### 3.11 Título de zona (`ZoneTitleWnd`)

`EV_BeginShowZoneTitleWnd` (`ZoneName`, `SubZoneName1`, `SubZoneName2`; só ZoneName é usado) (`uc/ZoneTitleWnd.uc:22-29`, `:33-56`):
```
SetText(textZoneNameBack/Front, ZoneName); GetZoneNameTextSize(ZoneName, w, h); GetCurrentResolution(SW, SH)
SetWindowSize("ZoneTitleWnd", w + 100, 200)
MoveTo("ZoneTitleWnd", SW/2 - w/2 - 100, SH/5 - 80)       // texto fica centrado em x e com topo em SH/5
ShowWindow; SetUITimer(TIMER_ID=0, 4000 ms) → OnTimer: KillUITimer + HideWindow   // :58-62
```
Opção `[Game] ShowZoneTitle` (`cfg/Option.ini:43` = False; `uc/OptionWnd.uc:663,1120`, checkbox `ZoneNameBox`). **[Validar]** se o nativo deixa de disparar o evento quando a opção é False — isso também afeta a atualização de “Current Position” no minimapa (que só ocorre nesse evento e no OnShow). **[Validar]** fonte usada por `GetZoneNameTextSize` (provável fonte grande).

### 3.12 `TownMapWnd`

`EV_ShowTownMap` (`TownMapName` string, `UserPosX`, `UserPosY` int) (`uc/TownMapWnd.uc:18-34`): `SetTexture("TownMapWnd.TownMapTex", nome)`, `SetUV(0,0)`, `SetAnchor("TownMapWnd.UserTex", "TownMapWnd.TownMapTex", "TopLeft","TopLeft", UserPosX, UserPosY)`, `ShowWindow`. Pacote `ShowTownMap` (0xDE: `S textura`, `D x`, `D y`); o aCis envia `"town_map." + textura` a partir de objetos estáticos (placas) (`.../instance/StaticObject.java:66`). Texturas: `ui/town_map/Town/town_map_{darkelf,dwarf,elf,orc,talking}_t00.png` (512×512) e marcador `town_map.icon_i00` (32×32). `x,y` são pixels na textura **[Inf]**. Textura do tipo *Draggable* com UV 512 → o usuário arrasta a imagem dentro dos 328×328 **[Inf]**.

---

## 4. Sistema de coordenadas e texturas de mapa

### 4.1 Grade do mundo (regiões “XX_YY”)

- Unidade: unidade Unreal. Região = **32768 × 32768**. Índices **[Obs+Inf]**:
  `tileX = floor(x / 32768) + 20`, `tileY = floor(y / 32768) + 18` → a região 20_18 tem origem (0,0).
  Validação: o centro de cada mapa de cidade (`TownMapX+10240`, `TownMapY+10240`) cai exatamente no `MapX_MapY` declarado no `ZoneName-e.dat` em **22/22** registros (análise local dos dados decifrados).
- Arquivos de mapa `Maps/XX_YY.unr`: X 15..26, Y 10..26 (154 arquivos); `l2zonename.utx` tem 204 tiles `15_10`..`26_26` (12×17) **[Obs]**. `TerrainInfo.MapX/MapY` (`eng/TerrainInfo.uc:165-166`) e `L2SeamlessInfo.MapX/MapY` (`eng/L2SeamlessInfo.uc:8-9`) carregam o mesmo índice; comando de console `MAPLOC` imprime `MapX=%d MapY=%d` (`Engine.dll`).
- Posição do jogador: `GetPlayerPosition()` → `Vector` (`nw/UIScript.uc:387`).

### 4.2 Mapa-múndi (`L2Font-e.Minimap.int_worldmap1..6`)

- **[Obs]** 6 texturas 1024×1024 (`ui/L2Font-e/Minimap/int_worldmap{1..6}.png`) formando uma grade **2 colunas × 3 linhas** (1|2 / 3|4 / 5|6) = tela 2048×3072. Conteúdo útil (bbox não-preto) 0..1811 × 0..2619; worldmap2/4/6 só até x=787 e worldmap5/6 só até y=571 (resto preto).
- Projeção **[Inf, forte]**: `px = (x + 131072) / 200`, `py = (y + 262144) / 200` (origem = canto da região 16_10, **200 unidades/pixel**, 163,84 px por região). Textura: `idx = (py div 1024)*2 + (px div 1024) + 1`, texel `(px mod 1024, py mod 1024)`.
  Evidência: regressão de `TownBtnLocX/Y` (botões “+” das cidades no mapa-múndi, §4.4) contra o centro do mapa da cidade → 199,9 e 200,3 un/px; com a fórmula acima o resíduo médio é (+3,2; −8,1) px, desvio 14/13 px (n=21, posição de botão desenhada à mão). Extensão: 11 regiões × 163,84 = 1802 px (bbox 1812) e 16 × 163,84 = 2621 px (bbox 2620).
- **[Validar]** constantes exatas em `NCMinimapWnd::GetWorldmapCoords`/`FindMapIndex`/`DrawWorldMap`; o nome literal no DLL é `L2Font.Minimap.ch4_worldmap` (há também `%s_minimap` e `Language=int` em `cfg/l2.ini:84`) — **como o nativo chega a `int_worldmap1..6`** e se o desenho é 1:1 (1 texel = 1 pixel de tela) não foi confirmado. `showGrid`/`DrawGrid`/`GetGridNum` indicam linhas da grade de regiões sobre o mapa (**[Validar]** estilo e rótulos).

### 4.3 Nome da zona atual (`l2zonename.XX_YY` + `ZoneName-e.dat`)

- **[Obs]** `SysTextures/l2zonename.utx`: 204 texturas 128×128 com nome `XX_YY` (`ui/l2zonename/*.png`) = **256 unidades/pixel**. São mapas de cores chapadas (lookup), não imagens para exibição. Formato no DLL: `L2ZoneName.%d_%d` (`Engine.dll`, `FL2GameData::GetZoneNameTexture`).
- **[Inf, forte]** o índice de paleta do pixel = campo “ZoneName/id” do `ZoneName-e.dat` para aquele tile. Evidência: as cores usam a paleta estática do Windows nos índices 0–9 e 246–255, e batem com os ids: (0,0,0)=0 “Neutral Waterways” (mar em 17_25); (0,128,0)=2 “Gludio Territory” em 19_21; (0,0,128)=4 “Giran Territory” em 22_22; (128,0,128)=5 “The Dark Forest” em 20_18; (192,220,192)=8 “Aden Territory” em 24_18; branco=255, ciano=254, magenta=253, azul=252 coincidem com os ids 252–255 presentes em cada tile. Ids 0..20 com `MapX=MapY=0` são territórios globais; ids ≥ 21 (tipicamente 244–255) são locais ao tile.
- Algoritmo **[Inf]** (`GetZoneNameInfo(int tileX,int tileY,int idx,float z)` no `Engine.dll`):
  ```
  tile = (floor(x/32768)+20, floor(y/32768)+18)
  u = floor((x - (tileX-20)*32768) / 256); v = floor((y - (tileY-18)*32768) / 256)
  idx = paletteIndex(L2ZoneName.<tileX>_<tileY>, u, v)
  registro = ZoneName-e onde MapX=tileX, MapY=tileY, id=idx e Bottom <= z <= Top  (andares: Tower of Insolence 1..14, Cruma...)
  senão registro global com MapX=MapY=0 e id=idx
  ```
- **Atenção na recriação**: os PNGs exportados são RGB (o índice de paleta foi perdido). É preciso reexportar os P8 com índices ou montar a tabela cor→índice (paleta da própria textura).
- **[O] Conferido no `Engine.dll` (K6 do porte Unity):**
  - Região (`UGameEngine::GetSWMapXY`, corpo `0x105887b0`, desmontado): `tileX = trunc((x + 360448) * 2^-15 + 9)`, `tileY = trunc((y + 294912) * 2^-15 + 9)` (`cvttsd2si`), ou seja `x/32768 + 20` e `y/32768 + 18`.
  - Texel (`processGetZoneNameInfo`, `0x10462970`): origem `ox = trunc((tileX-20)*32768)`, `oy = trunc((tileY-18)*32768)`; `u = trunc((x-ox)*USize * 2^-15)`, `v = trunc((y-oy)*VSize * 2^-15)` (produto inteiro antes); índice = byte `v*USize + u` do mip 0 (`FStaticTexture::GetRawTextureData`); sem textura (`GetZoneNameTexture` `0x104584b0`, `"L2ZoneName.%d_%d"`, guarda as regiões que falharam) o índice é 0.
  - Chave (`FUN_1044bf90`): `id < 200 ? id<<8 : ((MapY<<8 | MapX)<<8 | id)<<8`. Na carga (`ZoneNameListLoad`, `0x10476dd0`) um id ≥ 200 com chave já usada vai para chave+1 (andares); id < 200 é global (sem MapX/MapY). Os 362 registros do arquivo dão 362 chaves.
  - `GetZoneNameInfo(idx, tileX, tileY, z)` (`0x10462780`): chave, chave+1, … (até 256) enquanto houver registro; o primeiro com `Bottom (+0x14) < z < Top (+0x10)` (estrito) vira o atual (`FL2GameData+0x7f9d0`, lido por `GetCurrentZoneName` `0x104485d0`); nenhum na faixa → devolve 0 e o atual não muda. `GetZoneName(FVector)` (`0x104797a0`) consulta e restaura o atual.
  - Quem atualiza: o tique do `ALineagePlayerController` (`FUN_105d5420`, `00027.c:5892-5972`) soma `dt` em dois contadores; com o primeiro > 2,0 s zera-o e consulta a zona do pawn (só se a região tem textura e o pawn existe). Registro novo (ponteiro ≠ `m_pPrevZoneNameInfo`) com o segundo contador > 8,0 s: se o anterior era nulo ou o nome difere (`appStrcmp`), guarda nome e campos do mapa de cidade para o `ZoneTitleWnd`; em todo caso zera o segundo contador e grava o anterior. No tique seguinte o nome é partido em `\n` (até 3 partes = ZoneName, SubZoneName1, SubZoneName2) e vai ao console (virtuais 0x674/0x504). `InvalidateZoneName` zera o anterior.

### 4.4 Mapas de cidade (`L2Font-e.TownMap.*`) e botões de cidade

- **[Obs]** 22 texturas 1024×1024 (`ui/L2Font-e/TownMap/`). Strings nativas: `L2Font.TownMap`, `%s_TownMap`, `pTownMapInfo`, `pZoneNameInfo` (`NWindow.dll`).
- `ZoneName-e.dat` (decifrado com `python -I scripts/l2dec413.py`), ordem de campos confirmada pelas strings de `FL2GameData::ZoneNameListLoad/Save` (`Engine.dll`): `ZoneName, MapX, MapY, Top, Bottom, Name, TownBtnLocX, TownBtnLocY, TownMapX, TownMapY, TownMapWidth, TownMapHeight, TownMapScale, TownMapTex`. Layout binário **[Obs]**: `UINT count` (=362) e por registro `INT seq` (único), `INT id(cor)`, `INT MapX`, `INT MapY`, `FLOAT Top`, `FLOAT Bottom`, `ASCF Name`, `INT TownBtnLocX`, `INT TownBtnLocY`, `INT TownMapX`, `INT TownMapY`, `INT TownMapWidth`, `INT TownMapHeight`, `FLOAT TownMapScale`, `ASCF TownMapTex` (sem mapa: −1 nos 6 ints, 0.0 e string vazia). ASCF = índice compacto UE + bytes com `\0`.
- Projeção do mapa de cidade **[Inf]**: `px = (x − TownMapX) * TownMapScale`, `py = (y − TownMapY) * TownMapScale`; todos têm `Scale=0.05` (20 un/px) e 1024×1024 → cobrem 20480×20480 unidades. `AdjustMapView(..., a_ZoomToTownMap=true)` abre o mapa da cidade quando a posição cai num desses retângulos **[Inf]**.
- `TownBtnLocX/Y` = pixel do botão “+” (`MapButton_ZoomIn1/ZoomIn2`) sobre o mapa-múndi **[Inf]** (casa com a projeção §4.2).
- Registros com mapa (seq, MapX_MapY, nome, TownBtnLoc, TownMapX/Y, textura):

| seq | tile | Nome | BtnLoc | TownMapX,Y | TownMapTex |
|---|---|---|---|---|---|
| 20 | 19_21 | Town of Gludio | 592,1932 | -19968,117504 | map_gludio_castle_town |
| 21 | 17_22 | Gludin Village | 269,2079 | -89344,145792 | map_gludin_village |
| 32 | 21_25 | Elven Ruins (z −6874..−4874) | 106,2485 | 34830,235950 | dungeon_map_elven_ruin |
| 35 | 17_25 | Talking Island Village | 242,2536 | -90624,236416 | map_talkin_island_village |
| 43 | 22_22 | Giran Castle Town | 1080,2053 | 73536,140032 | map_giran_castle_town |
| 48 | 20_22 | Town of Dion | 763,2042 | 11840,138432 | map_dion_castle_town |
| 58 | 20_23 | Floran Village | 739,2156 | 11840,165120 | map_floran_village |
| 60 | 20_14 | Cave of Trials (z −3952..−1952) | 745,765 | 7400,-124192 | dungeon_map_dungeon_of_trial |
| 62 | 18_14 | Orc Village | 438,743 | -52736,-120832 | map_orc_village |
| 64 | 23_12 | Dwarven Village | 1253,401 | 110144,-187968 | map_dwarven_village |
| 66 | 24_12 | Abandoned Coal Mines (z −2704..3424) | 1388,453 | 134800,-182650 | dungeon_map_abaodoned_mime |
| 74 | 23_20 | Hunters Village | 1260,1706 | 111104,70016 | map_hunters_village |
| 77 | 24_18 | Town of Aden | 1410,1446 | 139264,16384 | map_town_of_aden |
| 101 | 22_19 | Town of Oren | 1086,1595 | 75136,48768 | map_town_of_oren |
| 107 | 20_18 | Dark Elf Village | 721,1394 | 768,9344 | map_dark_elven_village |
| 110 | 18_19 | School of Dark Arts | 444,1572 | -57500,39808 | dungeon_map_black_magic_laboratory |
| 113 | 21_19 | Elven Village | 907,1568 | 39168,42688 | map_elven_village |
| 114 | 20_20 | Elven Fortress (z −4416..−3200) | 794,1687 | 8320,68086 | dungeon_map_elven_underground_fortress |
| 118 | 23_24 | Heine | 1227,2436 | 101504,212608 | map_heine |
| 269 | 24_16 | Town of Goddard | 1401,1038 | 140256,-64320 | map_godard_castle_town |
| 291 | 21_16 | Rune Township | 852,1062 | 29760,-55808 | map_rune_village |
| 326 | 22_13 | Town of Schuttgart | 1104,605 | 77344,-147392 | map_town_of_schuttgart |

  Elven Ruins é a exceção: coordenadas no tile 21_25 (geometria subterrânea) mas botão em Talking Island (106,2485) → é o que `InitExceptForLocationList/GetExceptLocID/GetMinimapLocationWithException` devem remapear **[Inf]**; **[Validar]** a lista de exceções (hardcoded no DLL).

### 4.5 Outras texturas de mapa

- `L2Font-e.AgitMap.map_agit_{aden,dion,giran,gludin,gludio,godard,rune,schuttgart}` (512×512): **nenhuma** referência no xdat, no UC nem nos DLLs **[Obs]** → provavelmente usadas por HTML do servidor (`<img src=...>`) **[Inf]**.
- Marcadores nativos (strings no `NWindow.dll`): `L2UI.MinimapWnd.MinimapPos` (seta dourada do jogador, 32×32), `L2UI.MinimapWnd.TargetPos` (bandeira), `L2UI.MinimapWnd.MinimapBack`, `L2UI_CH3.Minimap.MapIcon_Mark`, `L2UI_CH3.Minimap.minimap_party`. Existem ainda `mapicon_mark_light`, `mapbutton_zoomin1_over`, `mapbutton_zoomout1_over`, `cursedweapon1_dropped/_owner` (128×128) sem referência encontrada **[Validar]**.

### 4.6 Dados `.dat` — precisam ser decifrados?

Todos são `Lineage2Ver413` (RSA+zlib) e **são decifrados** por `scripts/l2dec413.py`:
- `ZoneName-e.dat` — **necessário** (nome da zona, mapas de cidade, botões). Layout em §4.4.
- `huntingzone-e.dat` — necessário para GuideWnd (220 registros): `UINT count`; por registro `INT id, INT type, INT minLevel, INT maxLevel, FLOAT x, FLOAT y, FLOAT z, ASCF description(vazio), INT zone (id do domínio pai), ASCF name` (natives `nw/UIDATA_HUNTINGZONE.uc:4-11`). Contagem por tipo: 0:10, 1:87, 2:43, 3:35, 4:6, 5:6, 6:5, 7:28.
- `raiddata-e.dat` (aba Raid, `UIDATA_RAID`) e `castlename-e.dat` (53 castelos/feudos; cerco) — fora do minimapa; o minimapa não desenha castelos nem cercos no script (só o código de zona 11 do radar).
Saídas de análise: `out/re/zonename.tsv` e `out/re/huntingzone.tsv`, geradas por `scripts/zonename_parse.py` e `scripts/huntingzone_parse.py` a partir de `export/client_cfg/ZoneName-e.bin` e `huntingzone-e.bin` (decifrados com `scripts/l2dec413.py`).

---

## 5. Opções e persistência

| Item | Onde | Valor / comportamento |
|---|---|---|
| Posição de `MinimapWnd` | `cfg/WindowsInfo.ini:125-127` | `posX=0 posY=200` (salvo pelo nativo; sem width/height) |
| Posição padrão | `lay/_wnddefpos.txt:19-20,25` | MiniMapWnd (0,200) TOP_LEFT; MiniMapWnd_Expand (0,0) |
| Variante expandida | `m_bExpandState` em memória (`uc/MinimapWnd.uc:16,47`) | **não persiste** entre sessões |
| GuideWnd reaberta com o mapa | `b_IsShowGuideWnd` em memória (`:109-111,152-155`) | só na sessão |
| Título de zona | `cfg/Option.ini:43` `[Game] ShowZoneTitle=False` | `GetOptionBool/SetOptionBool("Game","ShowZoneTitle")` (`uc/OptionWnd.uc:663,1120`) |
| Seta 3D de quest | `[Game] ArrowMode` (`uc/OptionWnd.uc:659,1104`) | relacionada a `SetQuestTargetInfo(..., ShowArrow)` **[Inf]** |
| Flags do MinimapCtrl | xdat (`showTime showTown showGrid showMyLocMark showMyLocText showSSQText`) | fixas = true nas duas janelas; sem API de script para mudar |
| Radar | console `RadarTime` / `UL2ConsoleWnd::IsShowRadarTime` (`Engine.dll`) | **[Validar]** |

Nenhuma chave de minimapa/radar em `user.ini` ou `l2.ini` **[Obs]** (grep).

## 6. Atalhos

| Tecla | Ação | Fonte |
|---|---|---|
| `M` | `RequestOpenMinimap` | `lay/_shortcuts.txt:56` (GamingStateShortcut) |
| `Alt+M` | `RequestOpenMinimap` | `lay/_shortcuts.txt:75` |
| botão `MenuWnd.BtnMap` (34×34, tooltip 925 “Map (Alt+M)”) | `ToggleOpenMinimapWnd()` → `RequestOpenMinimap()` | `uc/MenuWnd.uc:17-18,54-57`; `lay/MenuWnd.txt:7` |
| `Alt+H` / `Alt+W` | HideAllWindow / CloseAllWindow (genéricos) | `lay/_shortcuts.txt:70-71` |

Não há atalho para expandir/recolher nem para GuideWnd. `Escape` = `TargetCancel` (`:42`); **[Validar]** se Esc fecha a janela focada.

## 7. Eventos e natives

### 7.1 Eventos (`nw/UIEventManager.uc`)

| Id | Evento | Parâmetros (Parse*) | Tratado em |
|---|---|---|---|
| 80 | EV_RadarTransitionFinished | — | ninguém |
| 110 | EV_SetRadarZoneCode | ZoneCode:int | RadarWnd.uc:149-151 |
| 130 | EV_ShowGuideWnd | — | GuideWnd.uc:298-299 (ShowWindow) |
| 520 | EV_PartyMemberChanged | PartyMemberCount:int | MinimapWnd.uc:161, _Expand.uc:232 |
| 1730/1740 | EV_RadarAddTarget / EV_RadarDeleteTarget | X,Y,Z:int | RadarContainerWnd.uc:30-52 |
| 1750 | EV_RadarDeleteAllTarget | — | RadarContainerWnd.uc:50-53 |
| 1760 | EV_RadarColor | — | ninguém |
| 1770 | EV_ShowTownMap | TownMapName:string, UserPosX, UserPosY:int | TownMapWnd.uc:24-30 |
| 1780 | EV_ShowMinimap | SSQStatus:int | MinimapWnd.uc:183 (só a normal) |
| 1790 | EV_MinimapAddTarget | X,Y,Z:**float** | MinimapWnd.uc:232-234, _Expand.uc:240-242 |
| 1800 | EV_MinimapDeleteTarget | X,Y,Z:int | MinimapWnd.uc:251-253, _Expand.uc:259-261 |
| 1810 | EV_MinimapDeleteAllTarget | — | ambos |
| 1820/1830 | EV_MinimapShowQuest / HideQuest | — | ambos |
| 1840 | EV_MinimapChangeOnTick | — | ambos → AdjustMapToPlayerPosition(true) |
| 1850 | EV_MinimapCursedWeaponList | NUM; ID<i>, NAME<i> | MinimapWnd.uc:382-395, _Expand.uc:407-418 |
| 1860 | EV_MinimapCursedWeaponLocation | NUM; ID<i>, NAME<i>, ISOWNED<i>, X<i>, Y<i>, Z<i> | MinimapWnd.uc:429-455, _Expand.uc:452-476 |
| 1861/1862 | EV_MinimapCursedWeaponTooltipShow/Hide | — | comentados (`UIEventManager.uc:241-242`) |
| 1870/1880 | EV_MinimapShowReduceBtn / HideReduceBtn | — | ambos |
| 1890 | EV_MinimapUpdateGameTime | GameHour, GameMinute:int | MinimapWnd.uc:620-621, _Expand.uc:645-646 |
| 2420 | EV_BeginShowZoneTitleWnd | ZoneName, SubZoneName1, SubZoneName2:string | ZoneTitleWnd.uc:25-27; minimapas (sem ler parâmetros) |
| 2900 | EV_ResolutionChanged | NewWidth, NewHeight:int | MinimapWnd_Expand.uc:130-131 |

Emissores nativos e chaves por evento: `docs/client_spec/91_eventos_nativos.md:189-205,263,330`.

### 7.2 Natives usadas

| Native | Declaração | Uso |
|---|---|---|
| `UIAPI_MINIMAPCTRL.AdjustMapView(ctrl, vector, opt bool ZoomToTownMap, opt bool UseGridLocation)` | `nw/UIAPI_MINIMAPCTRL.uc:4` | centralizar |
| `.InitPosition(ctrl)` | `:5` | não usado (só comentado) |
| `.AddTarget / .DeleteTarget(ctrl, vector)`, `.DeleteAllTarget(ctrl)` | `:6-8` | marcações |
| `.SetShowQuest(ctrl, bool)` | `:9` | alvo de quest |
| `.SetSSQStatus(ctrl, int)` | `:11` | Seven Signs |
| `.DrawGridIcon(ctrl, icon, dupIcon, vector, bool refresh, opt int dx, opt int dy, opt string tooltip)` | `:12` | armas amaldiçoadas |
| `.RequestReduceBtn(ctrl)` | `:13` | voltar ao mapa-múndi |
| `.IsOverlapped(ctrl, int x1,y1,x2,y2) : bool` | `:14` | ícones sobrepostos |
| `.DeleteAllCursedWeaponIcon(ctrl)` | `:15` | limpar ícones |
| `MiniMapAPI.RequestCursedWeaponList()`, `.RequestCursedWeaponLocation()` | `nw/MiniMapAPI.uc:4-5` | pacotes 0xd0:0x22/0x23 |
| `UIAPI_RADAR.AddTarget/DeleteTarget(ctrl, x,y,z)`, `.DeleteAllTarget(ctrl)`, `.SetRadarColor(ctrl, Color, float s)` | `nw/UIAPI_RADAR.uc:4-7` | radar |
| `RequestOpenMinimap()` | `nw/UIScript.uc:364` | abrir |
| `GetCurrentZoneName()`, `GetZoneNameWithZoneID(int)` | `nw/UIScript.uc:370-371` | zona |
| `GetPlayerPosition() : Vector` | `nw/UIScript.uc:387` | posição |
| `GetPartyMemberCount()`, `GetPartyMemberLocation(int, out Vector)` | `nw/UIScript.uc:60-61` | party |
| `GetQuestLocation(Vector)` — **sem `out`** | `nw/UIScript.uc:432` | ver §8 |
| `GetZoneNameTextSize(string, out w, out h)`, `GetCurrentResolution(out w, out h)`, `GetResolutionList(out array)` | `nw/UIScript.uc:133,163,196` | título/Expand |
| `UIDATA_HUNTINGZONE.*`, `UIDATA_RAID.GetRaidLoc`, `UIDATA_QUEST.GetStartNPCLoc/GetTargetLoc/IsMinimapOnly` | `nw/UIDATA_HUNTINGZONE.uc:4-11`, `nw/UIDATA_RAID.uc:4-9`, `nw/UIDATA_QUEST.uc:7,12,14` | GuideWnd/quest |
| `QuestAPI.SetQuestTargetInfo(...)` | `nw/QuestAPI.uc` | alvo de quest (radar/seta/minimapa) |
| `AudioAPI.PlaySound`, `UIAPI_TEXTBOX.SetText`, `UIAPI_COMBOBOX.*`, `UIAPI_WINDOW.SetAlpha/SetAnchor/MoveTo/SetWindowSize/SetUITimer/KillUITimer`, `UIAPI_TEXTURECTRL.SetTexture/SetUV` | — | genéricas |

---

## 8. Lacunas — a validar no nativo

1. **Desenho do `MinimapCtrl`** (`NCMinimapWnd::OnPaint/DrawWorldMap/DrawTownMap/DrawGrid/DrawMyLocation/DrawMinimapTarget/DrawQuestTarget/DrawCursedWeaponIcon`): ordem das camadas, escala de exibição do mapa-múndi (1:1?), clipping, estilo da grade (`showGrid`), o que `showMyLocText`/`showTime`/`showSSQText` desenham, rotação da seta do jogador.
2. **Constantes de projeção** em `GetWorldmapCoords`/`FindMapIndex`/`GetMapWidth/Height`: confirmar `(x+131072)/200`, `(y+262144)/200` e a grade 2×3.
3. **Resolução do nome da textura** do mapa-múndi: o DLL contém `L2Font.Minimap.ch4_worldmap` e `%s_minimap`, mas as texturas são `L2Font-e.Minimap.int_worldmap1..6`.
4. **Regra de zoom para cidade** em `AdjustMapView(a_ZoomToTownMap)`: teste de retângulo `TownMapX/Y + 1024/Scale`? usa Top/Bottom? papel de `a_UseGridLocation`.
5. **Botões “+” de cidade** (`RefreshButtonLoc`, `OnBtnClick`, `ZoomIn1/ZoomIn2`) e **lista de exceções** (`InitExceptForLocationList`, `GetExceptLocID`, `GetMinimapLocationWithException`), ex.: Elven Ruins.
6. **Quando o nativo dispara** `EV_MinimapChangeOnTick`, `EV_MinimapShowReduceBtn/HideReduceBtn`, `EV_MinimapUpdateGameTime` (frequência) e `EV_MinimapAddTarget` (não há emissor no NWindow.dll segundo `91_eventos_nativos.md:195`).
7. **Pan com mouse** (`OnLButtonDown/Up`, `OnMouseMove`): limites e se re-centraliza.
8. **Desenho dos membros da party** (`minimap_party`): todos? com nome? tooltip?
9. **`GetQuestLocation(Vector Location)` sem `out`** (`nw/UIScript.uc:432`): em UnrealScript o valor não voltaria ao script → `TargetButton` centralizaria em (0,0,0). Confirmar se o nativo escreve no parâmetro.
10. **`DrawGridIcon`**: semântica de `a_DupIconName` e `a_Refresh`, área do tooltip, `IsOverlapped` (distância em pixels de tela?).
11. **Radar**: desenho (`UCanvas::DrawRadarBack(FColor)`, `DrawRadarTarget(int,int)`, `DrawRadarEtc`, `AL2Radar`), alcance/escala, quando `RadarContainerWnd` fica visível, efeito do nome com typo `RadarContainterWnd.Radar`, transição de cor de `SetRadarColor` e `EV_RadarTransitionFinished`.
12. **`OnTick`**: frequência e se roda com a janela oculta (afeta o fade de `movingtext`).
13. **`ShowZoneTitle=False`** suprime o evento 2420 (e com ele a atualização de “Current Position”)?
14. **Lookup de zona**: confirmar que o pixel do `l2zonename` é índice de paleta e a regra de fallback/andar (`GetZoneNameInfo(int,int,int,float)`); `InvalidateZoneName` e cache `m_pPrevZoneNameInfo` (`Engine.dll`) — quando o título é disparado.
15. **`mapId` do `ShowMiniMap`** (itens de mapa): o nativo muda algo?
16. Campos `unkNNN` das janelas (ex.: `unk104`, `unk107`, `unk108`, `unk136/137`).

## 9. Checklist para recriar

- [ ] Dados: decifrar `ZoneName-e.dat` e `huntingzone-e.dat` (`scripts/l2dec413.py`) e gerar JSON com os layouts de §4.4/§4.6; reexportar `l2zonename` preservando índices de paleta.
- [ ] Converter mundo→região (`/32768 +20/+18`), mundo→mapa-múndi (`(x+131072)/200`, `(y+262144)/200`, mosaico 2×3 de `int_worldmap1..6`), mundo→mapa de cidade (`(x−TownMapX)*0.05`).
- [ ] `MinimapWnd` 334×413 com os 20 filhos da tabela §2.1 (fundo `MapBack`, sombras, sol/lua, hora, SSQ, zona, 4 botões inferiores, combo + Find + World Info).
- [ ] `MinimapWnd_Expand` com `ResetMiniMapSize` exato (3% / 90 px / teto 1024) e reaplicar em mudança de resolução.
- [ ] Toggle por M/Alt+M/BtnMap via ida-e-volta `RequestShowMiniMap`→`ShowMiniMap` (ou emulação local), lembrando a variante na sessão; sons `map_open_01`/`map_close_01`.
- [ ] Dois níveis (mundo/cidade): botões “+” em `TownBtnLoc` no mundo, botão “−” `btnReduce` no de cidade; auto-zoom para cidade ao centralizar no jogador.
- [ ] Botões: Current Loc. (jogador + zoom cidade), Party Member (ciclo), Target Loc. (alvo de quest), Enlarge/Minimize.
- [ ] Hora AM/PM `"PM 03 : 07"` + sol (6–24h) / lua (0–5h).
- [ ] Texto SSQ (973–976) e zona atual (`GetCurrentZoneName` via lookup §4.3).
- [ ] Armas amaldiçoadas: combo (com o item vazio extra no Expand, se fidelidade total), Find, ícones `cursedmapicon01/02[_drop]`, ícone combinado `cursedmapicon00` com tooltip de dois nomes, offset (0,−12).
- [ ] Marcações `AddTarget/DeleteTarget/DeleteAll` (ícone `MapIcon_Mark`) e alvo de quest.
- [ ] GuideWnd acoplada (lista → centraliza e marca no minimapa normal).
- [ ] Radar 102×102 no canto superior direito + `RadarWnd` (ícone Seven Signs) + `movingtext` com fade (+3/−2 alpha por tick) e tabela de cores/textos §3.10 (incluindo “mantém texto anterior” em códigos desconhecidos).
- [ ] `ZoneTitleWnd`: texto com sombra (+3,+3), centrado, topo em H/5, 4 s, respeitando `ShowZoneTitle`.
- [ ] `TownMapWnd` legado (textura arrastável 512 + marcador `icon_i00` em `UserPosX/Y`).
- [ ] Persistir só a posição de `MinimapWnd` (`WindowsInfo.ini`).

---

## Apêndice A — NCMinimapWnd conferido no NWindow.dll (K6 do porte Unity)

Leitura do pseudocódigo e da desmontagem (os operandos x87 somem no Ghidra). Substitui as inferências de §3.2 e §4.1–4.5 onde diverge: a projeção é `int((x+131072)*0.0050048828125)` (164 px por região, não 163,84), o mapa de cidade vem do registro de zona achado no ponto (não de retângulo), a grade é de 61 px e o `a_ZoomToTownMap` chega invertido (`keep`) ao nativo. Constantes extraídas para o golden por `Docs/tools/gen_golden.py minimap` no porte Unity.

### Labels and sources

- **[O]**: read in the Ghidra pseudocode. `nw:13.c:L` means `out/re/decomp_all/nwindow/00013.c` at line L (the line where the function starts, `// ==== addr`). `eng:N.c:L` means `decomp_all/engine/0000N.c`.
- **[O\*]**: read in the **disassembly of the same address** in `System/NWindow.dll` (or `engine.dll`). Ghidra drops x87 operands: every call to `FUN_101c19e0` is MSVC `_ftol`, which truncates toward zero and pops ST0, so float constants and float expressions are not in the pseudocode. I disassembled with capstone using `scratchpad/tools/dis.py` (output in `scratchpad/mm.txt`). The disassembly is the same function at the same address, so its findings are not inferences.
- **[I]**: inferred.
- Notation. `W = (int)ctrl.width` (float at `this+0x88`) and `H = (int)ctrl.height` (`+0x8c`). `(wx,wy)` = the control's screen position (`+0x80/+0x84`). All drawing is relative to the control origin: OnPaint sets the device origin to `(wx,wy)`.
- "int()" means truncation toward zero, which is what `_ftol` does.

#### Object fields used below [O]/[O\*] (ctor `1018bcc0` nw:13.c:17288, OnCreate `1018bac0` nw:13.c:17198)

| off | meaning |
|---|---|
| +0x1cc..+0x1e0 | 6 world-map textures (`int_worldmap1..6`) |
| +0x1e4 | FArray<NCButton*>: town "+" buttons |
| +0x1f0 | FArray (stride 0x3c, TooltipInfo); only emptied by Clear, never drawn |
| +0x1fc | FArray<{int x,y,z}>: targets (stride 12) |
| +0x208 | TMap zoneKey → TownMapInfo* {UTexture* tex} |
| +0x21c | FArray of grid icons (cursed weapons), stride 0x28: {tex, x, y, gridX, gridY, w, h, FString tooltip} |
| +0x228..+0x22d | bytes showTime, showTown, showGrid, showMyLocMark, showMyLocText, showSSQText |
| +0x234 / +0x238 / +0x23c | textures MinimapPos / TargetPos / MapIcon_Mark |
| +0x240 | SSQ status (written only) |
| +0x244 | quest shown flag |
| +0x248 / +0x24c | hover flags: own marker / quest marker |
| +0x250 | current map id (0 = world map, else the zone key of a town map) |
| +0x254/+0x258 | last player marker position (control-relative) |
| +0x25c/+0x260 | **view origin** (viewX, viewY) in map pixels (the top-left of the visible part) |
| +0x264/+0x268 | saved world-map view (restored by the reduce button) |
| +0x26c/+0x270 | last mouse position (control-relative) |
| +0x274..+0x290 | 8 party-member NCButtons |
| +0x294 | last game minute sent |
| +0x298..+0x2ac | cursed-weapon tooltip rect / NCTooltip* / visible flag |
| +0x2b0 | FArray of exception rectangles (stride 0x20) |

---

### 0. Creation and flags

- **XMLMinimapCtrlData::Process** `100e1160` (nw:7.c:9659) [O] reads the xdat keys `showtime`, `showtown`, `showgrid`, `showmylocmark`, `showmyloctext`, `showssqtext` into data+0x88..0x9c. A value of −1 (missing) becomes 0.
- **Create** `100e13f0` (nw:7.c:9797) → `NCMinimapWnd(showTime, showTown, showGrid, showMyLocMark, showMyLocText, showSSQText)` [O]. The ctor stores them at +0x228..+0x22d in that order [O\*] (`1018bda5..1018be0b`).
- **Which flags are read**: I grepped every `[reg+0x228..0x22d]` access in 0x10186f70–0x1018bf60. Only these are read [O\*]:
  - `showTown` +0x229 in FindMapIndex.
  - `showGrid` +0x22a in OnPaint.
  - `showMyLocMark` +0x22b in OnPaint.
  - **`showTime`, `showMyLocText` and `showSSQText` are never read. They have no native effect.**
- **SetSSQStatus** `10186fd0` (nw:13.c:13276) [O] only stores +0x240. That field is never read in the class, so **the native code draws nothing for SSQ**.
- **OnCreate** `1018bac0` (nw:13.c:17198) [O\*] does the following:
  - It loads `L2UI.MinimapWnd.MinimapPos` (+0x234), `L2UI.MinimapWnd.TargetPos` (+0x238) and `L2UI_CH3.Minimap.MapIcon_Mark` (+0x23c).
  - It creates an NCTooltip.
  - It creates 8 NCButtons: `NCButton("L2UI_CH3.Minimap.minimap_party","…minimap_party",2)`, with SetPosition(0,0,**16,16**), child id 0x22, hidden.
  - Then it calls `InitExceptForLocationList()` and `InitializeMapDisplay()`.
  - The initial view is (0,0) and curMap is 0 (ctor).

### 1. World map

#### 1.1 Textures [O\*] (InitializeMapDisplay `1018b050` nw:13.c:16701)

```
base = GConfig.GetString(Section=GCountryName, Key=sprintf("%s_minimap", GCountryName), File="localization.ini")
       default "L2Font.Minimap.ch4_worldmap"
tex[i] = LoadTexture(sprintf("%s%d", base, i+1))  for i = 0..5   -> this+0x1cc+4*i
```

`System/localization.ini` is Lineage2Ver111 (XOR 0xAC). It has `[LanguageSet] Language=1`, and section `[English]` contains `English_Minimap=L2Font-e.Minimap.int_worldmap` and `English_TownMap=L2Font-e.TownMap`. So in the English client `GCountryName="English"` [I, consistent], which gives **`L2Font-e.Minimap.int_worldmap1..6`**. This explains the `ch4_worldmap` default (that is the Korea entry).

#### 1.2 Projection — GetMinimapPosition `10187c10` (nw:13.c:14001) [O\*]

```
mapId == 0 (world):
  px = int((x + 0x20000) * 0.0050048828125)    // 131072; double at 0x1028e030 = 41/8192
  py = int((y + 0x40000) * 0.0050048828125)    // 262144
  => 199.8049 units/px, exactly 164 px per 32768-unit region; origin = region 16_10 corner
mapId != 0 (town): rec = GL2GameData.ZoneMap(+0x7f9cc)[mapId]
  not found -> px = py = -1
  px = int((x - rec.TownMapX) * rec.TownMapScale); py = int((y - rec.TownMapY) * rec.TownMapScale)
```

ZoneName record layout in memory (0x4c bytes) [O] (ZoneNameListLoad eng:6.c:30966):

| offset | field |
|---|---|
| +0 | id |
| +4 | Color |
| +8 | MapX |
| +0xc | MapY |
| +0x10 | Top (float) |
| +0x14 | Bottom (float) |
| +0x18 | Name (FString) |
| +0x24 | TownBtnLocX |
| +0x28 | TownBtnLocY |
| +0x2c | TownMapX |
| +0x30 | TownMapY |
| +0x34 | TownMapWidth |
| +0x38 | TownMapHeight |
| +0x3c | TownMapScale (float) |
| +0x40 | TownMapTex (FString) |

The offsets from +0x2c onward are confirmed by their uses in this class [O\*].

#### 1.3 Map size — GetMapWidth `10187e90` / GetMapHeight `10187f50` (nw:13.c:14133/14185) [O\*]

- World map (or a record without TownMapTex): **1804 × 2624** (0x70c × 0xa40) = 11 × 16 regions × 164 px. The textures are 2048×3072, and the rest is never shown.
- Town map: `rec.TownMapWidth × rec.TownMapHeight`.

#### 1.4 Tiling — DrawWorldMap `10187910` + GetWorldmapCoords `10187760` (nw:13.c:13802/13707) [O\*]

The grid is 2 columns × 3 rows of 1024×1024 tiles. Texture index = `col + 2*row`, so `int_worldmap{col+2*row+1}`. The map is drawn **1:1** (1 texel = 1 screen px).

```
for col in 0..1: for row in 0..2:
  // X (Y identical with row, H, viewY)
  t0 = col*1024
  if t0 <= viewX < t0+1024:  u = viewX - t0; w = min(W, 1024 - u); dstX = 0
  elif t0-1024 <= viewX < t0: w = int(viewX + W - t0); dstX = int(W - w); u = 0
  else w = 0
  if w > 0 and h > 0: DrawTexture(dstX, dstY, w, h, u, v, w, h, tex[col+2*row], alpha 255)
```

DrawTexture signature: `(x, y, w, h, u, v, uL, vL, tex, alpha, style)` (`10021a00` nw:1.c:4368).

Limitation [O\*]: only a tile that starts at most one tile before viewX is considered. With a control wider than 1024 px, a third column would not be drawn. This does not matter with 2 columns.

#### 1.5 Choosing and clamping the view (InitPosition `1018a480` nw:13.c:16165, AdjustMapView `1018a680` nw:13.c:16263, OnBtnClick `1018a9f0` nw:13.c:16427) [O\*]

The same centering formula is used each time (constant 0.5 = double at 0x1022f270):

```
center(px, py, mapW, mapH):
  viewX = (px < W*0.5) ? 0 : (px > mapW - W*0.5) ? int(mapW - W) : int(px - W*0.5)
  viewY = (py < H*0.5) ? 0 : (py > mapH - H*0.5) ? int(mapH - H) : int(py - H*0.5)
```

The control size is the MinimapCtrl's own W/H from the xdat: 328×328 in MinimapWnd, and the size set by script in _Expand. Clamping happens only in these functions and in the drag (§6). The Draw* functions never clamp.

### 2. Town and dungeon maps

#### 2.1 Building the list — InitializeMapDisplay `1018b050` [O\*]

1. For every ZoneName record whose `TownMapTex != ""`, add `this.townMaps[zoneKey] = new {tex=null}`. The order is the iteration order of GL2GameData+0x7f9cc, which is the file load order [I].
2. `pkg = localization.ini [GCountryName] "%s_TownMap"`, default `"L2Font.TownMap"`. That gives `L2Font-e.TownMap` [I as above].
3. For entry index `i` (counting **all** entries in townMaps):
   - If `rec.TownBtnLocX != -1`, create `NCButton("L2UI_CH3.Minimap.MapButton_ZoomIn1", "L2UI_CH3.Minimap.MapButton_ZoomIn2", 0)` with control id `0xB01000 + i`. Position it with `SetPosition(BtnLocX - viewX, BtnLocY - viewY, 26, 26)` (top-left corner, **not centered**) and append it to +0x1e4.
   - Then `tex = LoadTexture(sprintf("%s.%s", pkg, rec.TownMapTex))`.
4. Clicks: OnCommand `10186f70` (nw:13.c:13256) routes msg 0x501 with `id-0xB01000 < 0x21` to OnBtnClick.

#### 2.2 Which map applies at a position — FindMapIndex `101881c0` (nw:13.c:14358) [O\*]

```
if !showTown: return 0
id = (FVector(x,y,z) == playerPos) ? GetCurrentZoneID() : GetZoneID(x,y,z)
if id == -1: return 0
rec = ZoneMap[id]; if rec && rec.TownMapTex == "": return 0
return id
```

The zone lookup (engine) works like this [O] (GetZoneNameInfo eng:4.c:22512, key helper `1044bf90` [O\*]):

```
key = (Color < 200) ? Color<<8 : ((((MapY<<8)|MapX)<<8)|Color)<<8
```

It then probes `key, key+1, …` (up to 256) and takes the first record with **Bottom < z < Top** (strict). The record's key is the zone id. `Color` is the pixel index in `L2ZoneName.X_Y` (previous spec §4.3).

So no rectangle test is applied on TownMapX/Y. A town map is chosen purely by the zone record found at the position, which includes its z range.

#### 2.3 Town-map drawing — DrawTownMap `10189130` (nw:13.c:15310) [O\*]

`DrawTexture(0, 0, W, H, u=viewX, v=viewY, W, H, info.tex, 255)` is drawn 1:1. The projection is in §1.2 (Scale 0.05, which is 20 units/px for all 22 maps). Map size is TownMapWidth/Height (1024).

#### 2.4 Exception list — InitExceptForLocationList `1018ae40` (nw:13.c:16646), GetExceptLocID `10187590` (nw:13.c:13597), GetMinimapLocationWithException `10188010` (nw:13.c:14237) [O\*]

The 8 entries are hard-coded, and their ids are their order:

| id | X range | Y range | Z range | → world-map pixel |
|---|---|---|---|---|
| 0 | 40459..50172 | 241581..251111 | −6874..−4874 | (100, 2478) — Elven Ruins (Talking Island), matches §4.4 [I name] |
| 1 | −58000..−40000 | −256000..−236000 | −9000..−3780 | (875, 2034) |
| 2 | −27000..−6600 | −254000..−238000 | −9000..−3780 | (1042, 1704) |
| 3 | 8000..24000 | −250000..−243000 | −10000..−3780 | (1229, 1731) |
| 4 | −24556..−8340 | −57286..−34817 | −10890..−9174 | (842, 1053) |
| 5 | −98304..−65536 | −229377..−196609 | −5000..0 | (552, 1203) |
| 6 | −98304..−65536 | −262145..−229377 | −5000..0 | (552, 1203) |
| 7 | −131072..−98304 | −229377..−196609 | −5000..0 | (552, 1203) |

Places I could not identify [I]:
- Ids 1–3 are underground zones in the unused top row (region Y=10). They are probably Seven Signs catacombs/necropolises, redirected to their surface entrance.
- Id 4 is underground near Rune.
- Ids 5–7 are regions 16_10/17_10/16_11 (an empty map corner), all sent to (552,1203). They are probably the Olympiad arenas.

```
GetExceptLocID(x,y,z,useZ): first i with minX<=x<=maxX && minY<=y<=maxY && (!useZ || minZ<=z<=maxZ); none -> 8
GetMinimapLocationWithException(&x,&y,&z,useZ,mapId):
  id = GetExceptLocID(...)
  if mapId==0 && 0<=id<=7: (x,y) = except[id].pixel        // fixed world-map pixel, no projection
  else GetMinimapPosition(&x,&y,mapId)
```

- Player (GetPlayerMinimapPosition `10188300`): useZ = **1**, with int-truncated pawn position [O\*].
- Targets, party, quest, grid icons (GetTargetMinimapPosition `10188400`): useZ = **0** (z = 0), so the test is XY only [O\*].

#### 2.5 Switching world ↔ town

**AdjustMapView** `1018a680` [O\*]. The exec `1010ce30` (nw:9.c:8159) [O\*] calls `AdjustMapView(int X, int Y, int Z, keep = (a_ZoomToTownMap == 0), a_UseGridLocation)`. When omitted, a_ZoomToTownMap defaults to 1 and UseGrid to 0.

```
if x==0 && y==0 && z==0: return
id = FindMapIndex(x,y,z)
if keep:                      // script passed a_ZoomToTownMap = false
   if curMap != id: curMap = 0     // stay on town map only if same town, else world map
else:                         // a_ZoomToTownMap = true
   if curMap == 0: savedView = view
   curMap = id                // town map if the point is in a town zone, else world (0)
mapW,mapH = GetMapWidth/Height(curMap); if <=0 return
AdjustReduceBtn()
GetMinimapLocationWithException(&x,&y,&z,useZ=1,curMap)
if a_UseGridLocation: x = (x/61)*61 + 30; y = (y/61)*61 + 30      // centre of a 61-px grid cell (any map)
center(x,y,mapW,mapH); RearrangeOpenTownMapButton(curMap)
```

**Other entry points**

- **InitPosition** `1018a480` (exec `1010cfc0` first zeroes savedView) [O\*]:
  - `curMap = FindMapIndex(player)`.
  - Then AdjustReduceBtn, center on GetPlayerMinimapPosition, and RearrangeOpenTownMapButton.
- **AdjustReduceBtn** `101880f0` (nw:13.c:14292) [O\*]: fires `EV_MinimapHideReduceBtn` (1880) if curMap == 0, otherwise `EV_MinimapShowReduceBtn` (1870), with an empty param.
- **ShowWindow** `10187b50` [O\*]: NCWnd::ShowWindow, then always fires 1880 (Hide).
- **ReduceBtnClick** `1018a8d0` (exec RequestReduceBtn) [O\*]:
  - If curMap != 0: curMap = 0 and view = savedView.
  - Then `AdjustMapView(player, keep=1, grid=0)` (re-centers on the player on the world map) and RearrangeOpenTownMapButton.
  - SetFocus.
  - There is no event, but AdjustMapView calls AdjustReduceBtn, which fires Hide.
- **OnBtnClick** `1018a9f0` ("+" click) [O\*]:
  - Takes the i-th townMaps entry, sets `curMap = key`, `savedView = view`, hides all "+" buttons and fires `EV_MinimapShowReduceBtn`.
  - Projects the player with GetMinimapPosition (no exceptions).
  - If `0<=px<=TownMapWidth && 0<=py<=TownMapHeight`, it centers on the player. Otherwise `view = (0,0)`.
  - SetFocus.

#### 2.6 "+" buttons — RearrangeOpenTownMapButton `10188ba0` (nw:13.c:14986), RefreshButtonLoc `1018a330` (nw:13.c:16092) [O\*]

```
Rearrange(map): if map != 0: hide every shown button; return
  show every hidden button
  for i, entry in townMaps:  (button index = i, counts every entry)
     rec = ZoneMap[key]; skip if !rec || BtnLocX == -1 || entry.info == null
     bx = BtnLocX - viewX; by = BtnLocY - viewY
     if bx<0 || by<0 || bx>W || by>H: bx = by = 9999        // parked off-screen
     button[i].SetPosition(bx, by, 26, 26)
RefreshButtonLoc() (called while dragging, only if curMap==0): ShowWindow + SetPosition(BtnLocX-viewX, BtnLocY-viewY, 26, 26), no 9999 test
```

Possible issue [O\*]: the button index assumes that every townMaps entry has a button. All 22 records have a BtnLoc, so it holds.

### 3. Grid — DrawGrid `10187130` (nw:13.c:13359), GetGridNum `10189060` (nw:13.c:15257) [O\*]

DrawGrid runs only on the world map (curMap == 0) when showGrid is set, after the cursed icons.

```
cell = 61 px (0x3d)  (= 12188 world units; NOT the 164-px region)
x = 61 - viewX%61; labX = viewX/61 + 20
for i = 0 .. int(W/61):                       // inclusive
   if labX >= 0: s = sprintf("%d", labX); (tw,th) = GetTextSize(s); if x > 15: DrawText(x - tw/2, 2, 0xFFDCDCDC, s)
   DrawLine(x, th, x, H, color 0x40000000, 1)   // starts below the label height
   x += 61; labX++
y = 61 - viewY%61; labY = viewY/61 + 20
for i = 0 .. int(H/61):
   if labY >= 0: s = sprintf("%d", labY + 1); (tw,th) = GetTextSize(s); if y > 20: DrawText(0, y - th/2, 0xFFDCDCDC, s)
   DrawLine(tw, y, W, y, 0x40000000, 1)         // starts right of the label width
   y += 61; labY++
```

- Line color: ARGB **0x40000000** (black, alpha 64) [O\*]. Other callers of `FUN_10020e80` pass ARGB colours in this slot (0xffdcdcdc, 0xffff0000), so it is a colour. The last arg (1) is the only non-zero use [I: blend/alpha flag].
- Labels: default font (font args 0), colour #DCDCDC.
- Result: the line at map px 61·k is labelled `k+19` horizontally and `k+20` vertically.
- `GetGridNum(x,y)` = `(GetTargetMinimapPosition(x,y,map 0)) / 61` (C integer division; magic 0x4325c53f>>4).

### 4. Player marker — DrawMyLocation `10189240` (nw:13.c:15368) [O\*]

```
(px,py) = GetPlayerMinimapPosition(curMap) - view     // stored in +0x254/+0x258
if tex(+0x234) && 12<=px<=W-12 && 12<=py<H-12: NCGDevice::DrawMinimapLoc(px, py, MinimapPos, 255)
```

**Rotation** [O\*] (UCanvas::DrawMinimapLoc `1055a460`, engine thunk `1030d9f4` eng:7.c:26430; DrawCompassTile eng:3.c:23340):
- `yaw = int(Canvas.Viewport.Actor(+0x3c) [+0x1cc])` (Unreal units, 65536 = 360°).
- The quad is 32×32, centered on (px,py), with radius `16*sqrt(2)`.
- Corners: `P(a) = c + r*(cos a, sin a)` in screen space (y down). Each corner gets a UV:

| corner | angle | UV |
|---|---|---|
| P1 | yaw−8192 | (0,0) |
| P2 | yaw−24576 (= c − r·dir(yaw+8192)) | (0,1) |
| P3 | opposite of P1 | (1,1) |
| P4 | yaw+8192 | (1,0) |

- Effect: the texture's **top edge faces the heading direction**, which is (cos yaw, sin yaw) with world +X = screen right and world +Y = screen down. A sprite pointing up therefore gets a clockwise screen rotation of `yaw*360/65536 + 90°`.
- [I] Actor+0x1cc is the PlayerController's Rotation.Yaw, so the arrow follows the camera/controller and not necessarily the pawn. This was not verified against the AActor layout.

**Hover text (this is what "MyLocText" does, but the flag is not checked)** [O\*]:
- OnMouseMove `1018b5d0` (nw:13.c:16965) sets +0x248 = 1 when the marker is inside the 12-px margin and `|mx-px|<=10 && |my-py|<=10`.
- The post-paint (virtual 100) `101899f0` (nw:13.c:15747), dispatched on message 0x50a, then draws:

```
s = player name (User::GetName); (tw,th) = GetTextSize(s)   // default font
bx = px; by = py + 10
if bx + tw + 16 > W-5: bx = int(W - 21 - tw)
if by + th + 16 > H-5: by = int(H - 21 - th)
9-slice frame from NCWnd+0xd4 (if non-null): corners 8x8, edges tiled, box size (tw+16)x(th+16) at (bx,by)
DrawText(bx+8, by+8, 0xFFDCDCDC, s)
```

[I] The frame textures are whatever NCWnd+0xd4 holds (the window's background set). For a bare MinimapCtrl it is probably null, which gives text only. I could not resolve this.

### 5. Targets, quest, party, cursed weapons

#### 5.1 Targets (AddTarget/DeleteTarget/DeleteAllTarget) [O\*]

- **AddTargetLoc** `101884c0` (nw:13.c:14548): the exec passes int(X), int(Y), int(Z). The target is added only if **x≠0 && y≠0 && z≠0**. There is no duplicate check.
- **DeleteTargetLoc** `10188570`: removes entries with an exact int x,y,z match. It does not adjust the index, so the element right after a removed one is skipped.
- **DeleteAllTarget** → `Clear` (vslot 0x174) `10188630`: empties +0x1f0 and +0x1fc.
- **DrawMinimapTarget** `10189340` (nw:13.c:15434):
  ```
  for each t: (px,py) = GetTargetMinimapPosition(t.x,t.y,curMap) - view
     if 12<=px<=W-12 && 12<=py<H-12: DrawTexture(px-16, py-31, 32, 32, 0,0,32,32, TargetPos)   // tip at bottom-centre
  ```

#### 5.2 Quest [O\*]

- **SetShowQuest** → SetQuestOn `101876a0` (nw:13.c:13664) sets +0x244. On false it also zeroes NCDataManager(+0x5110)+0x64/68/6c (the quest target XYZ floats).
- **DrawQuestTarget** `10189490` (nw:13.c:15506) runs if +0x244 is set and the quest XYZ is not all zero. It draws `DrawTexture(px, py-20, 32, 32, …, MapIcon_Mark)`, with **no x offset and no bounds test**, so only the clip rect limits it.
- **Hover**: if `5<=px<=W-5 && 5<=py<H-5 && px<=mx<=px+20 && py-20<=my<=py`, then +0x24c = 1. The post-paint then draws a box:
  - Line 1 is `console->vfunc[0x688]()` (FString; [I] quest target name).
  - Line 2 is `GetQuestName(console->vfunc[0x698]())`, drawn only if the id is > 0.
  - Box w = max(w1,w2), h = h1+h2+2.
  - `bx = max(px-5, 5)`; `by = (py-5 < 5) ? 5 : py+5`. The right/bottom clamp is `W-21-w` / `H-21-h`.
  - Line 1 is at (bx+8, by+8) and line 2 at (bx+8, by+h1+10), both #DCDCDC.

#### 5.3 Party members — OnPaint `101895c0` (nw:13.c:15568) [O\*]

```
list = global(+0x50)->(+0x60)->vfunc[0xd4]()   // TMap of {creatureID, x, y}
n = 0
for m in list: skip if (m.x,m.y)==(-1,-1) or no PartyMemberInfo(creatureID)
   (px,py) = GetTargetMinimapPosition(m.x,m.y,curMap) - view
   if n<=8 && 12<=px<=W-12 && 12<=py<H-12:
       button[n].MoveWindow(dx,dy) so that its top-left = control origin + (px,py)   // 16x16, NOT centred
       button[n].Show(); button[n].SetToolTip(member name); n++
hide button[n..7]
```

The guard `n<=8` allows an index of 8 against 8 buttons, which is an off-by-one in the original [O\*]. The tooltip is the standard button tooltip.

#### 5.4 Cursed weapons — DrawGridIcon `10188d90` (nw:13.c:15075), DrawCursedWeaponIcon `10187d60` (nw:13.c:14064), IsOverlapped `1018b4f0` (nw:13.c:16905) [O\*]

```
DrawGridIcon(icon, dupIcon, loc, refresh, xOff, yOff, tooltip):
  if refresh: icons.Empty()
  (px,py) = GetTargetMinimapPosition(int loc.x, int loc.y, map 0)   // always world map
  gx = int(px/61.0); gy = int(py/61.0)
  e = {x = gx*61 + xOff, y = gy*61 + yOff, gridX=gx, gridY=gy, w = 61 - 2*xOff, h = 61 - 2*yOff}
  dup = any existing icon with same (gridX,gridY) -> those are removed (index not adjusted)
  e.tex = LoadTexture(dup ? dupIcon : icon); e.tooltip = GetNewLineString(tooltip)
  if e.tex: icons.Add(e)
DrawCursedWeaponIcon (world map only):
  for e: rx = e.x - viewX; ry = e.y - viewY
     if -61<=rx<W+61 && -61<=ry<H+61: DrawTexture(rx, ry, e.w, e.h, 0,0, e.w, e.h, e.tex, 255)   // unscaled crop
IsOverlapped(x1,y1,x2,y2) = GetGridNum(x1,y1) == GetGridNum(x2,y2)    // same 61-px cell
```

- With the script's offsets (0,−12), the icon is drawn at `(gx*61, gy*61-12)` with a 61×85 crop of the 64×128 texture (no scaling).
- **Tooltip** (OnMouseMove, world map only): the hit box is `[rx, rx+61) × [ry, ry+61)`. The first hit sets the tooltip origin to (rx,ry), size 61×61 and width = text width. The post-paint draws it with `NCTooltip::DrawTooltip`.
- **DeleteAllCursedWeaponIcon** `10188fd0` empties the list.

### 6. Mouse [O\*]

- **OnLButtonDown** `101873b0` (nw:13.c:13472): if `0<mx<=W && 0<my<=H`, it stores (mx,my) in +0x26c/+0x270, calls `SetL2Cursor(3,0,0)` and sets the global cursor lock `DAT_1039e520 = 1`. While the lock is set, the cursor cannot change.
- **OnLButtonUp** `101874a0`: clears the lock. There is no click action (no recentre, no target).
- **OnMouseMove**: if MK_LBUTTON is held and `1<=mx<=W && 1<=my<=H`, it **pans** the map:

  ```
  dx = lastX - mx; dy = lastY - my              // drag-to-scroll (content follows the mouse)
  dx>0: viewX += dx; if viewX > mapW - W: viewX = int(mapW - W)   else: viewX -= |dx|; if viewX < 0: viewX = 0
  (same for Y with mapH, H);  RefreshButtonLoc()
  ```

  lastX/lastY are updated on **every** move. Panning works on both world and town maps, within `[0, mapSize - ctrlSize]`. There is no wheel or zoom handler in the class.

### 7. Time and SSQ [O\*]

- No time is drawn natively. OnPaint reads game time as a double of hours from `global+0x50 → +0x6c → +0x134`, then computes:
  - `h = int(t)`
  - `m = int((t-h)*60)`
  - if m ≥ 60: m −= 60 and h++
- If `m != last(+0x294)`, it fires **EV_MinimapUpdateGameTime (1890)** with params `GameHour=h`, `GameMinute=m`. This only happens while the control is painted.
- SSQ: nothing is drawn (§0).

### 8. OnPaint order and clipping — `101895c0` [O\*]

1. Device origin = (wx,wy). `SetClip(wx, wy, W, H)`, so everything is clipped to the control.
2. If `townMaps[curMap]` exists, DrawTownMap. Otherwise DrawWorldMap.
3. If curMap == 0: DrawCursedWeaponIcon. Then, if showGrid: DrawGrid (so the grid lines are drawn over the cursed icons).
4. Position, show, tooltip or hide the party buttons. They are child windows and are drawn by the child pass [I].
5. If showMyLocMark: DrawMyLocation.
6. DrawMinimapTarget (always).
7. If questOn: DrawQuestTarget.
8. Game-time event.
9. Restore the clip and reset the origin to 0.

**Post-paint pass** (virtual 100 `101899f0`, message 0x50a) [O\*]: origin = (wx,wy), clip = control rect. It draws the player-name hover box, then the quest hover box, then the cursed-weapon tooltip, then restores the clip.

### 9. Unresolved

- **The yaw field** (Viewport.Actor+0x1cc): I took it as PlayerController Rotation.Yaw [I] and did not check it against the AActor layout. Whether the source sprite points up was not checked against the PNG either.
- **NCWnd+0xd4 hover-box frame textures**: the source and contents are unknown (set by the base NCWnd/XML). They may be null for the MinimapCtrl.
- **Cursor id 3** (OnLButtonDown): its meaning, probably a grab/hand cursor, was not looked up.
- **The names of exception entries 1–7**: these are guesses.
- **The flag argument of FUN_10020e80** (=1 for the grid only): I did not trace the canvas vtable 0xa4.
- **The source of the party-member list and quest data**: these come from the packet handlers and were not traced. `EV_MinimapChangeOnTick` is not emitted in this class.
- **The child-window draw order** relative to steps 5–8, and whether "+" buttons that hang past the right or bottom edge are clipped, are both [I].

