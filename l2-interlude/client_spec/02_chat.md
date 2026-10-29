# 02 — Chat e mensagens (ChatWnd, filtros, mensagens de sistema e de tela)

Escopo: janela de chat e suas abas, envio e recebimento, prefixos e tipos de chat, filtros (`ChatFilterWnd` e `chatfilter.ini`), janela de mensagens de sistema (`SystemMsgWnd`), mensagens na tela (`OnScreenMessageWnd1..8`), título de zona (`ZoneTitleWnd`), comandos de barra, atalhos, eventos, natives e pacotes.

**Convenções de evidência**
- **[O] Observado**: está no código ou no dado. A citação diz onde.
- **[I] Inferido**: dedução minha. A origem é dita.
- **[?] A validar no nativo**: o comportamento está em C++ (NWindow.dll/Engine.dll) e eu não o tenho. Ver §8.

**Caminhos-base das citações**
- `X.uc:N` → `export/uc/Interface/X.uc` (as classes de framework estão em `export/uc/NWindow/`).
- `layout/X.txt` → `out/re/layout/X.txt` (árvore do Interface.xdat).
- `strings.json` → `out/re/strings.json`. `ss N` = sysstring N, `sm N` = systemmsg N.
- `nwindow_events.c` → `out/re/nwindow_events.c` (decompilação Ghidra do NWindow.dll; ver `91_eventos_nativos.md`).
- Os dados binários lidos nesta seção foram decifrados com `scripts/l2dec413.py`: `system/commandname-e.dat`, `system/obscene-e.dat` e `export/client_cfg/systemmsg-e.dat.bin`, este com todos os campos do registro (ver §3.6).

---

## 1. Visão geral

| Janela (xdat) | Script | Estado | Papel |
|---|---|---|---|
| `ChatWnd` 348×187 | `ChatWnd.uc` (extends UICommonAPI) | GamingState [O `layout/ChatWnd.txt:1` unk103] + OlympiadObserverState [O `ChatWnd.uc:67`] | 5 abas de chat, campo de digitação, botões de filtro, grupo e MSN, ícone de IME |
| `ChatFilterWnd` 256×300 | `ChatFilterWnd.uc` | GamingState | Filtro por aba, opções da janela de sistema, ocultar texto do Command Channel |
| `SystemMsgWnd` 348×125 | `SystemMsgWnd.uc` | GamingState | Lista só de mensagens de sistema. Fica acima do chat quando ligada |
| `OnScreenMessageWnd1..8` 800×60 | `OnScreenMessageWnd.uc` (script só na Wnd1) | GamingState | Texto grande na tela, com fade, em 8 posições |
| `ZoneTitleWnd` 500×200 | `ZoneTitleWnd.uc` | GamingState | Nome da zona ao entrar nela, por 4 s |
| (outras com chat próprio) | `PartyMatchRoomWnd`, `PetitionWnd`, `GMSnoopWnd` | — | Chat de sala de grupo, chat de petição e espionagem de GM (resumo em §3.8) |

Fluxo resumido:
- **Envio** [O+I]: Enter no `ChatEditBox` → `ProcessChatMessage(texto, índiceDaAba)` (native) → o nativo trata o prefixo e o comando `/` → pacote `Say2` / `BypassUserCmd` / `SendBypassBuildCmd` / outros.
- **Recebimento** [O]: pacote → nativo → `EV_ChatMessage(Type, Msg, ColorR/G/B[, SysType])` → `ChatWnd.CheckFilter` decide em quais das 5 abas e se vai para a `SystemMsgWnd`.

---

## 2. Layout exato

### 2.1 Semântica de âncora (vale para o documento inteiro)

O dump `@A->Ctrl.B(x,y)` imprime o campo `this` como A e `parent` como B (`interface_layout.json`). Para âncoras assimétricas, o script usa a mesma dupla em `SetAnchor(ControlName, AnchorWindowName, RelativePoint, AnchorPoint, x, y)` (`UIAPI_WINDOW.uc:41`). Por exemplo, `SetAnchor("ChatFilterWnd","ChatWnd","TopLeft","BottomLeft",0,-5)` (`SystemMsgWnd.uc:39`) é idêntico ao xdat `ChatFilterWnd @TOP_LEFT->ChatWnd.BOTTOM_LEFT(0,-5)`.

**[I]** Interpretação adotada: `RelativePoint` (impresso primeiro) é o ponto **da janela de referência** e `AnchorPoint` (impresso depois) é o ponto **da própria janela**. Assim, o canto inferior-esquerdo do ChatFilterWnd fica 5 px acima do canto superior-esquerdo do ChatWnd. Há três razões:
- o ChatWnd fica colado na base da tela (`ChatWnd.uc:99`), então a outra leitura poria filtro, SystemMsgWnd e os botões Tutorial/Quest/Mail fora da tela;
- y=-5 só faz sentido como um vão acima;
- `SystemMsgWnd.uc:45-47` anda os botões em x=5/42/79 sobre a mesma borda.

Os rótulos `this`/`parent` do parser estão **invertidos** nas âncoras entre janelas. Dentro do ChatWnd todas as âncoras são simétricas (BOTTOM_LEFT→BOTTOM_LEFT), então não há ambiguidade.

### 2.2 ChatWnd (348×187, `layout/ChatWnd.txt`)

Posição padrão: BOTTOM_LEFT da tela em (0,0) [O xdat e `ChatWnd.uc:99`; `_wnddefpos.txt`: `ChatWnd BOTTOM_LEFT x=0 y=0`]. Coordenadas absolutas: origem no topo-esquerdo da janela, y para baixo, no tamanho padrão.

| Controle | Classe | Tamanho | Âncora (xdat) | Retângulo absoluto (padrão) | Textura / rótulo |
|---|---|---|---|---|---|
| ChatWndHeadTex | Texture Stretch | 348×18 | TL→TL(0,0) | (0,0)-(348,18) | `L2UI_CH3.ChatWnd.Chatting_Back2` → `out/tool/ui/L2UI_CH3/ChatWnd/chatting_back2.png` (512×32; conteúdo 348×18) |
| ChatWndBodyTex | Texture **Tile** uSize=348 vSize=15 | 100%+0 × 100%−82 | TL→TL(0,18) | (0,18)-(348,123) | `Chatting_Back3` (512×16; conteúdo 348×15), repetida na vertical |
| ChatWndBottomTex | Texture Stretch | 348×18 | BL→BL(0,−46) | (0,123)-(348,141) | `Chatting_Back4` (512×32; conteúdo 348×18) |
| ChatWndBottomTex1 | Texture Stretch | 348×46 | BL→BL(0,0) | (0,141)-(348,187) | `Chatting_Back1` (512×64; conteúdo 348×46) |
| NormalChat / TradeChat / PartyChat / ClanChat / AllyChat | ChatWindow lineGap=4 | 100%−5 × 100%−46 | TL→TL(0,0) | (0,0)-(343,141) | — (sobrepostas; o Tab mostra uma) |
| TabBackgroundTexture | Texture Normal, layer Background | 320×23 | BL→BL(23,−23) | (23,141)-(343,164) | `L2UI_CH3.Minimap.MapWnd_back_max` (4×4) |
| ChatTabCtrl | Tab, 5 abas de 64×23, gap 0 | 320×23 | BL→BL(23,−23) | (23,141)-(343,164) | ver 2.3 |
| ChatFilterBtn | Button | 15×15 | BL→BL(5,−51) | (5,121)-(20,136) | normal `Chatting_Option1`, pushed `Chatting_Option2`; tooltip ss 897 "Chat Window Option" |
| MessengerBtn | Button | 15×15 | BL→BL(5,−24) | (5,148)-(20,163) | normal `L2UI_CH3.ChatWnd.Chatting_Msn4`, pushed `..._down`; tooltip ss 996 "MSN Messenger" |
| PartyMatchingBtn | Button | 15×15 | BL→BL(5,−5) | (5,167)-(20,182) | `Chatting.PartyMatchButton` / `_Down`; tooltip ss 389 "Party" |
| LanguageTexture | Texture Stretch, layer Normal | 15×15 | BL→BL(24,−5) | (24,167)-(39,182) | padrão `L2UI_CH3.ChatWnd.Chatting_IMEkr`. O script troca a textura (§3.5) |
| ChatEditBox | EditBox `type=CHAT` `maxLength=100` `chatMarkOn=false` | 303×16 | BL→BL(39,−6) | (39,165)-(342,181) | — |

Notas:
- [O] As texturas são potência de 2 com o conteúdo útil no canto superior-esquerdo. A bbox de alfa foi medida nos PNGs. `uSize/vSize=0` nos Stretch. **[I]** O nativo usa a área do tamanho do controle (348×18 etc.), não a textura inteira. [?] Confirmar no render de `XMLTextureData` (Stretch com uSize=0).
- [O] Existem sprites que o xdat não referencia: `chatting_option1_over`, `chatting_tab2_over`, `chatting_tab3`, `partymatchbutton_over`, `chatting_sizecontrol(_over)` (conteúdo 24×10), `chatting_channel(_light)` (348×145). O NWindow.dll contém a string `L2UI_CH3.ChatWnd.Chatting_sizeControl` (varredura de strings do binário). **[I]** O grip de redimensionamento é desenhado pelo nativo com essa textura. Os campos `unk120=24.0 unk121=10.0` do ChatWnd batem exatamente com 24×10. [?] O uso de `_over`/`tab3` (hover e desabilitado) é nativo.
- [O] `L2UI_CH3.ChatWnd.Chatting_Msn4(_down)` **não existe** no grupo ChatWnd exportado (lá só há msn1 e msn2). Existe em `L2UI_CH3/Msn/chatting_msn4.png`. O script usa o grupo `Msn` (`ChatWnd.uc:959-967`). Para recriar, use `L2UI_CH3.Msn.chatting_msn4` como estado inicial.
- [O] Campos de Window que têm correlação, mas não semântica confirmada:
  - `unk102` = nome do script (ChatWnd, SystemMsgWnd, ChatFilterWnd; nas OnScreenMessageWnd só a Wnd1 tem `unk102=OnScreenMessageWnd`);
  - `unk103` = estado;
  - `unk107` = 0 no ChatWnd e 1 nas janelas que nascem ocultas (filtro, sistema, OnScreen, Zone, Party, Target, botões Tutorial/Quest/Mail) → **[I]** "começa oculta";
  - `unk117=3 unk120=24 unk121=10 unk122=300` no ChatWnd, contra `unk117=2 unk118=166 unk120=10 unk121=<altura> unk122=202` nas janelas redimensionáveis só na largura (Status, Party, Pet, Target) → **[I]** modo e área de redimensionamento, possivelmente com tamanho mínimo. [?]
- [O] `WindowsInfo.ini` tem `[6] width=348 height=187`. **[I]** Isso é o tamanho salvo do ChatWnd: os valores batem e ele é a única janela 348×187. As seções numéricas `[1]..[8]` só com posX/posY têm significado desconhecido [?]. Talvez sejam as abas destacadas, já que `_wnddefpos.txt` também lista `PartyChat BOTTOM_LEFT x=0 y=0`.

### 2.3 Abas (ChatTabCtrl)

| Índice (`CHAT_WINDOW_*`, `ChatWnd.uc:27-33`) | Rótulo (buttonName) | Alvo | movable | Texturas |
|---|---|---|---|---|
| 0 NORMAL | ss 144 "All" | NormalChat | **false** | normal `Chatting_Tab2`, pushed (selecionada) `Chatting_Tab1` |
| 1 TRADE | ss 355 "+Trade" | TradeChat | true | idem |
| 2 PARTY | ss 188 "#Party" | PartyChat | true | idem |
| 3 CLAN | ss 128 "@Clan" | ClanChat | true | idem |
| 4 ALLY | ss 559 "$Alliance" | AllyChat | true | idem |

`movable=true` → a aba pode ser arrastada para fora e vira uma janela independente (eventos `OnTabSplit`/`OnTabMerge`, §3.4). Ordem de criação dos filhos: Normal, Party, Clan, Trade, Ally (`layout/ChatWnd.txt:11-15`). A ordem lógica das abas é a da tabela.

### 2.4 ChatFilterWnd (256×300, `layout/ChatFilterWnd.txt`)

Âncora: fica acima do ChatWnd, em (0,−5) (§2.1). Quando a SystemMsgWnd está visível, fica acima dela (`SystemMsgWnd.uc:32,39`). Fundo: `unk101=L2UI_CH3.ChatWnd.Chatting_Back5` → `chatting_back5.png` (256×512; conteúdo 256×296). **[I]** É a textura de fundo da janela.

| Controle | Classe | Tamanho | Posição (TL relativo à janela) | Rótulo (titleIndex/sysstring) | Chave / efeito |
|---|---|---|---|---|---|
| CurrentText | TextBox autosize, #dcdcdc | — | (19,17) | dinâmico: `MakeFullSystemMsg(sm 1995 "$s1 channel filtering option", ss <aba>)` (`ChatWnd.uc:812-834`) | ex.: "All channel filtering option" |
| CheckBoxSystem | CheckBox | 100×12 | (23,38) | ss 356 "System" | `system` |
| CheckBoxDamage | CheckBox | 80×12 | (34,57) | ss 357 "Damage" | `damage` (fica desabilitado se System estiver desmarcado) |
| CheckBoxItem | CheckBox | 92×12 | (133,57) | ss 796 "Consumables" | `useitems` (idem) |
| CheckBoxChat | **TextBox** (não é checkbox) | 100×12 | (23,83) | ss 358 "Chat" | título de grupo. Ver nota |
| CheckBoxNormal | CheckBox | 80×12 | (34,102) | ss 383 "General" | `normal` |
| CheckBoxShout | CheckBox | 80×12 | (34,119) | ss 359 "Shout" | `shout` |
| CheckBoxPledge | CheckBox | 80×12 | (34,136) | ss 360 "Clan" | `pledge` |
| CheckBoxParty | CheckBox | 80×12 | (133,102) | ss 361 "Party" | `party` |
| CheckBoxTrade | CheckBox | 80×12 | (133,119) | ss 362 "Trade" | `market` |
| CheckBoxWhisper | CheckBox | 80×12 | (133,136) | ss 363 "Whisper" | `tell` |
| CheckBoxAlly | CheckBox | 80×12 | (34,153) | ss 592 "Alliance" | `ally` |
| CheckBoxHero | CheckBox | 92×12 | (133,153) | ss 1211 "Hero Voice" | `hero` |
| CheckBoxUnion | CheckBox | 80×12 | (34,170) | ss 1484 "Command" | `union` (Command Channel) |
| SystemMsgBox | CheckBox | 160×12 | (16,197) | ss 1197 "System Message Window" | Option.ini `[Game] SystemMsgWnd` |
| DamageBox | CheckBox | 80×12 | (34,219) | ss 357 "Damage" | `[Game] SystemMsgWndDamage` |
| ItemBox | CheckBox | 92×12 | (133,219) | ss 796 "Consumables" | `[Game] SystemMsgWndExpendableItem` |
| CheckBoxCommand | CheckBox | 200×12 | (16,243) | ss 1485 "Hide Command On-screen Text" | `chatfilter.ini [global] command` |
| ChatFilterOK | Button | 76×23 | (51,264) | ss 140 "OK" | salva e fecha |
| ChatFilterCancel | Button | 76×23 | (131,264) | ss 141 "Cancel" | fecha sem salvar |

Botões: normal `L2UI_ch3.button.btn1_normal`, pushed `btn1_normalon` (128×32; conteúdo 76×23). O sprite `Btn1_normalDisable.png` existe.

Nota [O]: `CheckBoxChat` é TextBox no xdat, mas `SaveChatFilterOption` chama `IsChecked("ChatFilterWnd.CheckBoxChat")` (`ChatFilterWnd.uc:123`) e grava `chat=` (`:160`). O `chatfilter.ini` exportado tem `chat=False` com todo o resto True. **[I]** `IsChecked` num controle que não é checkbox devolve false. `bChat` não é usado em `CheckFilter`.

### 2.5 SystemMsgWnd (348×125, `layout/SystemMsgWnd.txt`)

Fica acima do ChatWnd, em (0,−5) (§2.1).

| Controle | Classe | Tamanho | Posição | Textura |
|---|---|---|---|---|
| BackTexture | Texture Normal | 100%×100% | (0,0) | `L2UI_CH3.ChatWnd.chatting_system` (512×128; conteúdo 348×128; **alfa máx. 170**, semitransparente) |
| SystemMsgList | ChatWindow lineGap=4 | 100%×100% | (0,0) | — |

Botões Tutorial/Quest/Mail (32×32): ficam acima da janela de chat visível mais alta, em x=5/42/79 e y=−5 (`SystemMsgWnd.uc:43-48`; xdat `TutorialBtnWnd @TOP_LEFT->ChatWnd.BOTTOM_LEFT(5,-5)` etc.).

### 2.6 OnScreenMessageWnd1..8 (800×60 cada, `layout/OnScreenMessageWnd{1..8}.txt`)

| Wnd | Âncora na tela | Alinhamento | Particularidade |
|---|---|---|---|
| 1 | TOP_LEFT (50,150) | Left | contém o script e os timers |
| 2 | TOP_CENTER (0,150) | Center | filho `texturetype1` 800×30 em TOP_CENTER(0,−40) com `L2UI_CH3.Etc.onscrmsg_pattern01_1` 290×30 (conteúdo 295×30). É mostrado só se BackgroundType=1 |
| 3 | TOP_RIGHT (−50,150) | Right | |
| 4 | CENTER_LEFT (50,0) | Left | |
| 5 | CENTER (0,0) | Center | |
| 6 | CENTER_RIGHT (−50,0) | Right | |
| 7 | BOTTOM_CENTER (0,−150) | Center | |
| 8 | BOTTOM_RIGHT (−50,−150) | Right | |

Filhos de cada WndN (TextBox 800×30, cor padrão #dcdcdc, sombra #000000):
- `TextBoxN` em (0,0) e a sombra `TextBoxN-0` em (+2,+2), offsetY=7: linha 1, fonte "grande";
- `TextBoxN-1` em (0,30) e a sombra `TextBoxN-1-0` em (2,32): linha 2;
- `TextBoxsmN` em (0,0) e `TextBoxsmN-1` em (0,18), offsetY=0: fonte "pequena", sem sombra.

[?] Quais fontes são a "grande" e a "pequena" é decidido pelo nativo (TextBox sem fontType no xdat).

### 2.7 ZoneTitleWnd (500×200, CENTER, `layout/ZoneTitleWnd.txt`)

| Controle | Tamanho | Posição | Detalhe |
|---|---|---|---|
| texZoneTitleFontDeco | 256×256 | (0,0) | `L2ui_ch3.PlayerStatusWnd.fontdeco` |
| textZoneNameBack | 100×40 autosize | (103,83) | cor #000000 (sombra), offsetY 4 |
| textZoneNameFront | 100×40 autosize | (100,80) | cor #f0f0dc, offsetY 4 |

---

## 3. Comportamento e fluxo

### 3.1 Tipos de chat (`EChatType`, `UIEventManager.uc:538-559`) e prefixos

A tabela de prefixos está no NWindow.dll [O]. São 18 pares de ponteiros `wchar_t*` (ASCII, largura cheia) a partir de VA `0x10350e18`, lidos diretamente do binário. O ponteiro `PTR_DAT_10350e28`, usado nas funções de sussurro (`nwindow_events.c` FUN_101398c0), aponta para `"`, que é o 3º par. **[I]** O índice do par é o `EChatType`: o par 1 é `!` (SHOUT), o 2 é `"` (TELL), o 3 é `#` (PARTY), o 4 é `@`, o 8 é `+` e o 9 é `$`, o que bate com o enum, com os rótulos das abas e com o `Say2.java` do aCis.

| Valor | EChatType | Prefixo ASCII / largura cheia [O tabela nativa] | Comentário do enum | Say2 (servidor aCis) | Aba / filtro no ChatWnd |
|---|---|---|---|---|---|
| 0 | CHAT_NORMAL | `~` / `～` | — | ALL | `normal` |
| 1 | CHAT_SHOUT | `!` / `！` | '!' | SHOUT | `shout` |
| 2 | CHAT_TELL | `"` / `”` | '\' | TELL (+ alvo) | `tell` |
| 3 | CHAT_PARTY | `#` / `＃` | '#' | PARTY | `party` |
| 4 | CHAT_CLAN | `@` / `＠` | '@' | CLAN | `pledge` |
| 5 | CHAT_SYSTEM | (vazio) | '' | GM | `system` + SysType |
| 6 | CHAT_USER_PET | `&` / `＆` | '^' | PETITION_PLAYER | sempre exibido |
| 7 | CHAT_GM_PET | `*` / `＊` | '&' | PETITION_GM | sempre exibido |
| 8 | CHAT_MARKET | `+` / `＋` | '+' | TRADE | `market` |
| 9 | CHAT_ALLIANCE | `$` / `＄` | **'%'** | ALLIANCE | `ally` |
| 10 | CHAT_ANNOUNCE | (vazio) | '' | ANNOUNCEMENT | sempre exibido |
| 11 | CHAT_CUSTOM | (vazio) | '' | BOAT | **nunca** exibido no ChatWnd |
| 12 | CHAT_L2_FRIEND | (vazio) | '' | L2FRIEND | nunca |
| 13 | CHAT_MSN_CHAT | (vazio) | '' | MSNCHAT | nunca |
| 14 | CHAT_PARTY_ROOM_CHAT | (vazio) | '' | PARTYMATCH_ROOM | nunca no ChatWnd. Vai para a PartyMatchRoomWnd (§3.8) |
| 15 | CHAT_COMMANDER_CHAT | `` `` `` / `‘‘` | — | PARTYROOM_COMMANDER | `union` + mensagem na tela |
| 16 | CHAT_INTER_PARTYMASTER_CHAT | `` ` `` / `‘` | — | PARTYROOM_ALL | `union` |
| 17 | CHAT_HERO | `%` / `％` | — | HERO_VOICE | `hero` |
| 18 | CHAT_CRITICAL_ANNOUNCE | (fora da tabela) | — | CRITICAL_ANNOUNCE | sempre exibido |

Pontos de atenção:
- [O] O comentário `'%'` da aliança no enum está desatualizado. O prefixo real é `$`, também no rótulo "$Alliance" (ss 559). `%` é o Hero Voice.
- [I] Os nomes `USER_PET` e `GM_PET` querem dizer **petição** (usuário/GM), não pet. A prova é a numeração aCis 6/7 e o nativo, que manda os tipos 6 e 7 para a janela de petição (FUN_1013df30).
- [O] O sussurro tem o formato `"Nome texto`. O script o monta assim em `PartyMatchWaitListWnd.uc:146,179` e `PartyMatchOutWaitListWnd.uc:142,175` (`SetChatMessage("\"" $ nome $ " ")`), e o nativo usa `L"\"%s "` (FUN_10139700, string em 0x1027c8a8).
- [?] `~` em NORMAL: **[I]** provavelmente força o chat normal (escape de prefixo). Não há evidência de uso.
- [?] O texto só vira o tipo do prefixo se o 1º caractere casar. A versão em largura cheia existe para IME CJK. Quem decide é `execGetChatPrefix`/`execIsSameChatPrefix` e o parser nativo.

### 3.2 Envio (texto → servidor)

1. [O] **Enter no ChatEditBox** → `OnCompleteEditBox("ChatEditBox")` (`ChatWnd.uc:129-159`):
   - se o texto estiver vazio, não faz nada;
   - `ProcessChatMessage(texto, m_chatType)`, onde **`m_chatType` é o índice da aba (0..4)**, não um EChatType (`ChatWnd.uc:140`, `UIScript.uc:347`);
   - limpa o campo;
   - se `[Game] OldChatting` (ss 566 "Auto Code") estiver ligado e a aba não for All, reinsere o prefixo da aba com `GetChatPrefix(GetChatTypeByTabIndex())` (`:144-151`). Mapa aba→tipo: 0→NORMAL, 1→MARKET, 2→PARTY, 3→CLAN, 4→ALLIANCE (`:970-996`);
   - se `[Game] EnterChatting` (ss 442 "Enter Chat") estiver ligado, `ReleaseFocus()` devolve o teclado ao jogo (`:154-157`).
2. [O] **Troca de aba** (`HandleTabClick`, `ChatWnd.uc:305-339`): `m_chatType = GetTopIndex()` e o filtro é atualizado. Com OldChatting ligado, remove o 1º caractere se ele for o prefixo de MARKET, PARTY, CLAN ou ALLIANCE (o código assume prefixo de 1 caractere, `:320-328`) e coloca o prefixo da nova aba (exceto em All).
3. [O] **Macro**: `EV_ChatWndMacroCommand(Command)` → `ProcessChatMessage(Command, m_chatType)` (`ChatWnd.uc:379-387`). O nativo dispara o evento a partir do executor de macro FUN_101b45f0 (`91_eventos_nativos.md` linha 73).
4. [O] **Preencher campo de fora**: `EV_ChatWndSetString(String)` → `ChatEditBox.SetString` (`:927-933`). Fontes nativas:
   - `execSetChatMessage` (script);
   - FUN_10139700: `"%s ` com o nome de quem sussurrou por último;
   - FUN_101398c0: percorre a lista de nomes de sussurro com `"%s%s "` e o prefixo `"`, com índice em +0x218 e quantidade em +0x210. Ver §5 e §8.
5. [O] **Foco**: `EV_ChatWndSetFocus` → `SetFocus()` se ainda não tiver foco (`:935-939`).
6. [O+I] **No nativo (ProcessChatMessage)**: as strings do NWindow.dll mostram o caminho `NCChatWnd::ProcessChatLine`, `ProcessNonCommandChatString`, `NCChatWnd::ExecuteCommand`, `ExecuteBuilderUnrealCommand`, `CompleteSentenceWithoutPDV`, `NCChatLimit::*` (IsChatLimit, GetSpeedMark, IsMarkOver), `NCChatMark::*`, `NConsoleWnd::SendChatMsgToServer`. O Engine.dll tem `(Send)Say2`, `(Send)BypassUserCmd`, `(Send)SendBypassBuildCmd`, `UNetworkHandler::Say2(L2ParamStack&)`. **[I]** O fluxo é:
   - `//…` → comando de construtor/GM → `SendBypassBuildCmd` (o script envia assim: `EventMatchGMWnd.uc:366`, `GMWnd.uc:193` via `ExecuteCommand`);
   - `///RELOADUI` é uma string local do NWindow;
   - `/cmd …` → busca em `commandname-e.dat` → ação local, pacote específico ou `BypassUserCmd(id)` (§3.7);
   - caso contrário → prefixo → tipo (sem prefixo: depende da aba [?]); `"` exige `"Nome texto` → `Say2`.
7. [O] **Pacote Say2** (cliente→servidor, opcode 0x38, conforme `92_protocolo_opcodes.md`): `S text, D type, S target (somente type==2 TELL)`. O servidor rejeita texto vazio ou com mais de 100 caracteres (`ext/src/acis/.../clientpackets/Say2.java` readImpl/runImpl). Isso casa com `maxLength=100` do EditBox. Os tipos 10 e 18 só são aceitos de GM.
8. [O] **Chat bloqueado (flood)**: o EditBox tem `chatMarkOn`. No ChatWnd é `false`; na sala de grupo é `true` (`layout/PartyMatchRoomWnd.txt:21`). Lá, `OnChatMarkedEditBox` imprime sm 966 ("Chatting is currently prohibited…") na cor (176,155,121) (`PartyMatchRoomWnd.uc:499-510`). [?] Como o ChatWnd aplica o limite nativo `NCChatLimit`.

### 3.3 Recebimento (servidor → abas)

1. [O] `EV_ChatMessage` (540). Parâmetros lidos (`ChatWnd.uc:389-417`): `Type` (EChatType), `Msg`, `ColorR`, `ColorG`, `ColorB` (A forçado a 255), e `SysType` (ESystemMsgType) só se Type==5.
   - Emissor nativo: FUN_101392c0(msg, corARGB, tipo, sysType) (`nwindow_events.c`). Monta Type, Msg (chave em 0x1027c6f8 = "Msg"), ColorR=(c>>16)&ff, G=(c>>8)&ff, B=c&ff e, se tipo==5, `SysType`.
   - [O] Se `GL2TextCapture==2`, grava a linha no arquivo de captura (§6).
2. [O] **Formatação** (FUN_1013df30, chamada pelo tratador de fala):
   - em geral, texto = `"%s: %s"` (nome: mensagem);
   - tipo 18 (CRITICAL_ANNOUNCE) usa `"%s"`;
   - tipos 6/7 (petição) → `EV_ShowPetitionWnd` + `EV_PetitionChatMessage(Message, ColorR/G/B/A)`, sem passar pelo ChatWnd; no tipo 6 a cor é forçada a 0xFFDCDCDC;
   - tipo 14 → `EV_PartyMatchChatMessage(Msg, ColorR/G/B/A)`;
   - os outros → EV_ChatMessage.
   - [?] A cor por tipo vem de quem chama (FUN_10141760/FUN_10163d90), que não está decompilado.
3. [O] **Roteamento** (`CheckFilter`, `ChatWnd.uc:535-630`): para cada janela w ∈ {Normal, Party, Clan, Trade, Ally, Sistema}, nesta ordem (`:419-431`):

| Tipo recebido | Regra |
|---|---|
| MARKET / NORMAL / CLAN / PARTY / SHOUT / TELL / ALLIANCE / HERO | vai para w se o flag dela estiver ligado (`bTrade/bNormal/bClan/bParty/bShout/bWhisper/bAlly/bHero`) |
| ANNOUNCE, CRITICAL_ANNOUNCE, USER_PET, GM_PET | **sempre**, em todas as w, **inclusive a SystemMsgWnd** (`:575-578`) |
| COMMANDER_CHAT, INTER_PARTYMASTER_CHAT | se `bUnion` |
| SYSTEM, SysType SERVER(2) ou PETITION(6) | sempre, em todas as w |
| SYSTEM, w = SystemMsgWnd | DAMAGE(3) → opção `SystemMsgWndDamage`; USEITEMS(7) → `SystemMsgWndExpendableItem`; BATTLE(1) e NONE(0) → sim; POPUP(4) e ERROR(5) → **não** |
| SYSTEM, w = aba | se `bSystem`: DAMAGE → `bDamage`, USEITEMS → `bUseItem`, outros (incl. POPUP/ERROR) → sim. Sem `bSystem` → não |
| CUSTOM, L2_FRIEND, MSN_CHAT, PARTY_ROOM_CHAT | nunca |

   O `m_filterInfo[5]` (sistema) é todo zero (`:771-783`), então a SystemMsgWnd só recebe o que a tabela libera explicitamente. Ligar a SystemMsgWnd **não** tira as mensagens de sistema das abas; isso só depende do filtro `system` da aba.
4. [O] **Command Channel na tela**: se `Type==CHAT_COMMANDER_CHAT` e `m_NoUnionCommanderMessage==0`, o ChatWnd chama `ShowUnionCommanderMessgage` (`:434-479`). A função quebra o texto em 35 caracteres inserindo `#` (`CHAT_UNION_MAX=35`, `:35,451-456`) e chama `ExecuteEvent(EV_ShowScreenMessage, …)` com:
   - MsgType=1, WindowType=8, FontType=0, BackgroundType=0;
   - LifeTime=5000, AnimationType=1;
   - MsgColor=(255,150,149).
5. [O] **Bug reproduzível**: em `OnEvent`, o `case EV_ChatMessage` não tem `break` e cai em `HandleIMEStatusChange()` (`ChatWnd.uc:353-356`). Cada mensagem recebida refaz o ícone de IME. Não muda nada visível.

**Cores**: [O] as cores vêm prontas do nativo no evento. A paleta que o próprio cliente usa no UC, em `GMSnoopWnd.GetColorByType` (`GMSnoopWnd.uc:183-229`), é a melhor evidência local:

| Tipo | RGB |
|---|---|
| NORMAL | 220,220,220 |
| SHOUT | 255,114,0 |
| TELL | 255,0,255 |
| PARTY | 0,255,0 |
| CLAN | 125,119,255 |
| MARKET | 234,165,245 |
| ALLIANCE | 119,255,153 |

Outras cores observadas:
- sistema padrão (176,155,121) = 0xFFB09B79 (`PetWnd.uc:239-245`, nativo FUN_10170860/FUN_101b7cd0, 2147 dos 2380 registros do systemmsg);
- chat de petição do sistema (128,255,255) = 0xFF80FFFF (FUN_1013e640).

[?] HERO, ANNOUNCE, CRITICAL_ANNOUNCE, COMMANDER e INTER_PARTYMASTER no ChatWnd.

### 3.4 Abas: seleção, destacar e reintegrar, estado desabilitado

- [O] `OnClickButton("ChatTabCtrl0..4")` → `HandleTabClick` (`ChatWnd.uc:192-198`).
- [O] `OnTabSplit(aba)`, que ocorre quando a aba é arrastada para fora (`ChatWnd.uc:229-264`): seleciona a aba e, no ChatWindow dela, faz:
  - `SetWindowSizeRel(-1,-1,0,0)`, que desliga o tamanho relativo;
  - `SetSettledWnd(true)`;
  - `EnableTexture(true)`, para que a janela destacada desenhe o próprio fundo.
  - [?] Qual textura `EnableTexture` usa (string `Default.ChatBack` no NWindow.dll).
- [O] `OnTabMerge(aba)` (`:266-303`):
  - `MoveTo(NormalChat.rect.x, y)`;
  - `SetWindowSize(w, h-46)`, onde h é a altura do NormalChat, que já é 100%−46;
  - `SetWindowSizeRel(1,1,0,-46)`;
  - `SetSettledWnd(false)` e `EnableTexture(false)`.
- [O] `OnDefaultPosition` (`:91-101`): reintegra as abas 1-4, seleciona a 0, ancora o ChatWnd em BottomLeft(0,0) e faz `HandleTabClick`.
- [O] `EV_ChatWndStatusChange` (sem parâmetros) → `GetPlayerInfo` (`:910-925`). A aba Clan fica desabilitada se `nClanID<=0`; a aba Ally, se `nAllianceID<=0`. Party e Trade nunca são desabilitadas. O emissor nativo é FUN_10163ab0. O Engine.dll tem `UGameEngine::UpdateChatWndStatus`.

### 3.5 IME, MSN e botões

**IME** [O] (`ChatWnd.uc:481-533`): é refeito em `OnShow`, em `EV_IMEStatusChange` (sem parâmetros) e, por causa do fallthrough, a cada EV_ChatMessage. `GetCurrentIMELang()` (`UIScript.uc:144`) define `ChatWnd.LanguageTexture`:

| EIMEType | Textura |
|---|---|
| KOR | `L2UI.ChatWnd.IME_kr` |
| ENG | `IME_en` |
| JPN | `IME_jp` |
| CHN | `IME_jp` (sic) |
| TAIWAN_CHANGJIE | `IME_tw2` |
| TAIWAN_DAYI | `IME_tw3` |
| TAIWAN_NEWPHONETIC | `IME_tw1` |
| CHN_MS | `IME_cn1` |
| CHN_JB | `IME_cn2` |
| CHN_ABC | `IME_cn3` |
| CHN_WUBI e CHN_WUBI2 | `IME_cn4` |
| THAI | `IME_th` |
| NONE, TAIWAN_BOSHAMY | `Default.BlackTexture` |

Os sprites estão em `out/tool/ui/l2ui/ChatWnd/` (16×16). O pacote é `L2UI`, diferente do padrão do xdat, que é `L2UI_CH3`.

**MSN** [O]:
- `MessengerBtn` → `ToggleMsnWindow()` (`ChatWnd.uc:210-212`, `UIScript.uc:429`).
- `EV_ChatWndMsnStatus(status)` troca a textura com `SetTexture(normal, pushed, "")` (`:950-968`):

| status | Textura |
|---|---|
| online | `L2UI_CH3.Msn.chatting_msn1` |
| berightback, idle, away, lunch | `msn2` |
| busy, onthephone | `msn3` |
| offline, invisible | `msn4` |
| none | `msn5` |

O emissor nativo é FUN_100c1ad0 (strings online…none). A MsnWnd é inteira nativa (protocolo MSNP8, strings `Msn::*`, `MsnWnd::*`; Engine `RequestSendMsnChatLog`). O serviço está extinto. **[I]** Na recriação, use um stub (botão + estado "none" ou "offline").

**PartyMatchingBtn** [O] (`:213-223`): se a `PartyMatchWnd` estiver visível, esconde e chama `PartyMatchWnd.OnSendPacketWhenHiding()`; senão, `PartyMatchAPI.RequestOpenPartyMatch()`.

**ChatFilterBtn** [O] (`:199-209`): alterna a ChatFilterWnd. Antes de mostrar, chama `SetChatFilterButton()` para carregar os checkboxes da aba atual.

### 3.6 Mensagens de sistema (SystemMessage → chat / janela / tela / popup)

**Registro do `systemmsg-e.dat`** [O]. O parser completo consome o arquivo inteiro (2380 registros; sobra o rodapé "SafePackage"). Layout:

```
int32 id
int32 unk           // sempre 1
cstr  message
int32 group         // = ESystemMsgType
u8[4] color         // B,G,R,A
cstr  sound
cstr  voice
int32 windowType
int32 fontType
int32 lifeTimeSec
int32 animationType
int32 backgroundType
cstr  onScreenMsg
cstr  typeName
```

- `group` ↔ `typeName`: 0 none (e siege), 1 battle, 2 server, 3 damage, 4 popup, 5 error, 6 petition, 7 useitems. A ordem é a de `ESystemMsgType` (`UIEventManager.uc:561-570`).
- A ordem dos 5 ints é a de `SystemMsgData` (`UIEventManager.uc:1148-1161`). Isso foi confirmado pela distribuição dos valores:
  - win ∈ {0, 2, 8};
  - font sempre 0;
  - life ∈ {0, 3, 4, 5, 10};
  - anim ∈ {0, 1, 11};
  - bkg ∈ {0, 1}.
- 84 mensagens têm `windowType≠0`, isto é, aparecem na tela. Exemplos:

| id | Janela | Duração | Texto na tela |
|---|---|---|---|
| 1 | win 8 | 3 s | "Exit Game: $s1 second(s)", cor (0,255,255) |
| 17 | win 2 | — | "Begin the Siege!", som `ItemSound3.sys_siege_start` |
| 96 | win 2 | — | "You Have a Level Up." |
| 288 | win 2 | — | "Destroy the castle gate!", anim 11 |
| 1687 | win 2 | — | "Flying is Prohibited Here", bkg 1 |

- Lista por grupo:
  - damage: 35, 36, 37, 296, 297, 333, 812, 1014-1016, 1026, 1027;
  - useitems: 342, 344, 533, 534, 936, 1019, 1576, 1577;
  - battle: 41-44, 111, 361, 1017, 1028;
  - server: 0, 1, 183.
- [I] O arquivo tem ids até 6104 e textos de fortaleza. Ele parece atualizado ou customizado pelo servidor (o `Option.ini` também tem a seção não-original `[Neophron]`).

**Fluxo nativo** [O] (FUN_101b7cd0, tratador do pacote SystemMessage 0x64):
1. Monta o texto substituindo `$sN`/`$cN` e grava cada parâmetro como `ParamN` no evento.
2. Se o id não existe ou é maior que 2999 → texto "알 수 없는 System Message format : %d" na cor (176,155,121).
3. Se `group==4` (popup) → abre um diálogo modal. **Não vai para o chat.**
4. Senão → FUN_1013e640(texto, group, cor). Com group 6 (petição) vai para `EV_ShowPetitionWnd` + `EV_PetitionChatMessage` (cor 128,255,255); com os outros, para `EV_ChatMessage(Type=5, SysType=group, cor do registro)`.
5. Toca `sound` e `voice`.
6. Dispara `EV_SystemMessage(Index, Param1, Param2…)` (580).

Outro caminho (FUN_1013e510, mensagem local por índice) envia SysType=0 e só `Index`.

**SystemMsgWnd** [O]:
- visível se `[Game] SystemMsgWnd` estiver ligado: no `EV_GamingStateEnter` (`SystemMsgWnd.uc:8-27`), no `ChatWnd.OnShow` (`ChatWnd.uc:172-184`) e ao salvar o filtro (`ChatFilterWnd.uc:147-154`);
- Alt+J esconde e mostra junto com o ChatWnd (`Shortcut.uc:71-89`);
- em `OnShow`/`OnHide`, reancora o ChatFilterWnd e os botões Tutorial/Quest/Mail na janela visível mais alta (`SystemMsgWnd.uc:29-48`).

**Na tela** [O] (`OnScreenMessageWnd.ValidateSystemMsg`, `:409-455`): com `GetSystemMsgInfo(Index)` e `WindowType≠0`, monta:
- texto = `MakeFullSystemMsg(OnScrMsg, Param1, Param2)`;
- duração = `LifeTime*1000` ms;
- cor do registro, trocada por branco se for (0,0,0) ou (176,155,121).

Depois chama `ShowMsg`.

**API de script** [O]:
- `AddSystemMessage(texto, cor)` (`UIScript.uc:174`), usado em `GMWnd.uc:228`, `PetWnd.uc:245` e `PetitionFeedBackWnd.uc:68`;
- `AddSystemMessageParam`/`EndSystemMessageParam` para formatar.

### 3.7 Comandos de barra (`commandname-e.dat`, 114 entradas)

Formato [O]: `int32 n; n × {int32 seq, int32 id, cstr nome}`. Lista com os **ids** reais:

```
0 loc · 1 GM · 2 Gmcancel · 3 gmlist · 4 sit · 5 stand · 6 walk · 7 run · 8 attack · 9 attackforce · 10 attackstand
11 trade · 12 target · 13 targetnext · 14 pickup · 15 assist · 16 Invite · 17 Leave · 18 Dismiss · 19 vendor
20 partymatching · 21 socialhello · 22 socialvictory · 23 socialcharge · 24 useskill · 25 useskillforce
26 useskillstand · 27 useshortcut · 28 useshortcutforce · 29 useshortcutstand · 30 allyinvite · 31 allyleave
32 allydismiss · 33 allydissolve · 34 allycrest · 35 allyinfo · 36 friendinvite · 37 friendlist · 38 frienddel
39 buy · 40 allywarstart · 41 allywarstop · 42 allywarsurrender · 43 blocklist · 44 block · 45 unblock
46 socialno · 47 socialyes · 48 socialbow · 49 socialunaware · 50 socialwaiting · 51 sociallaugh · 52 unstuck
53 remaintime · 54 socialapplause · 55 socialdance · 56 socialsad · 57 sitstand · 58 walkrun
59 dwarvenmanufacture · 60 mountdismount · 61 mount · 62 dismount · 63 pethold · 64 petattack · 65 petstop
66 petcollect · 67 petrevert · 68 petspecialskill · 69 summonhold · 70 summonattack · 71 summonstop
72 summonsiege · 73 summonpoison · 74 summoncorpse · 75 evaluate · 76 delay · 77 Time · 78 allblock
79 allunblock · 80 equip · 81 partyinfo · 82 clanwarinfo · 83 allywarinfo · 84 findprivatestore
85 changepartyleader · 86 clanwarstart · 87 clanwarstop · 88 attacklist · 89 underattacklist · 90 warlist
91 deletealliancecrest · 92 channelcreate · 93 channeldelete · 94 channelinvite · 95 channelkick
96 channelleave · 97 channelinfo · 98 nick · 99 siegestatus · 100 clanpenalty · 101 generalmanufacture
102 fatiguetime · 103 start_videorecording · 104 end_videorecording · 105 startend_videorecording
106 petmove · 107 servitormove · 108 unsummon · 109 olympiadstat · 110 graduatelist · 111 duel
112 withdraw · 113 partyduel
```

Classificação [O] (`FUN_101358a0` + `FL2GameData::GetCommandType`, Engine.dll 0x10301d5c): a 1ª palavra decide.
`///x` = 0x10000001 (local, depuração), `//x` = 0x10000000 (`FUN_101382a0` → console+0x360 com o texto depois das duas
barras = `SendBypassBuildCmd` 0x5b), `/x` = id do `TMap<FString>` (sem diferenciar maiúsculas); desconhecido = −1, e o
`default` do switch só trata id < 0x10000001 sem sinal, então nada acontece. `／x` passa no `FUN_101358a0`, mas o
`GetCommandType` só aceita 0x2f, então também não faz nada [O; conferir no original].

Parser [O] (`FParser` do Engine.dll; conferido no assembly): `SetString` copia os separadores padrão `DAT_1089881c` =
`" \u3000\n\t\r={}$"`, o que desfaz o `SetSperator(" ,\t\n")` do construtor do NWindow (`FUN_10135770`). `[` e `]`
agrupam: dentro deles o separador faz parte do token e os colchetes saem. O token termina no separador seguinte, que
também é consumido; `GetRemainStr` devolve o resto sem pular mais nada (nulo se vazio). Os argumentos usam três formas:
- `FUN_10135980` (só a palavra): `/invite`, `/findprivatestore`, `/changepartyleader`, `/channelinvite`, `/channelkick`;
- palavras + macro (`FUN_10135a20` em cada uma) juntadas com `" "`: `/target`, `/dismiss`, `/useskill*`, `/friendinvite`,
  `/frienddel`, `/block`, `/unblock`, e as duas palavras de `/useshortcut*` e `/equip` (`appAtoi`);
- `GetRemainStr` (resto da linha, sem macro): `/gm`, `/nick`, `/duel`, `/partyduel`.

Despacho [O] (`FUN_1013a320`, `switch(id)`; o golden `commands.json` do Unity é extraído deste pseudocódigo, com o slot
da vtable do `UNetworkHandler` (0x108b2224) → pedido do `request_table.json`). "alvo jogador" = `User+8 == 0`.
Sysmsg 1256 = FString em `GL2GameData+0x4044c` = (0x4044c − 0x240e8 − 4) / 0x5c.

| id | comando | efeito |
|---|---|---|
| 1 | gm | `EV_ShowUserPetitionWnd` (0x781) com `Message` = resto |
| 2, 3 | gmcancel, gmlist | `RequestPetitionCancel` 0x80, `RequestGMList` 0x81 |
| 4, 5 / 6, 7 | sit, stand / walk, run | `ChangeWaitType` 0x1d d 0/1 / `ChangeMoveType` 0x1c d 0/1 |
| 8, 10 | attack, attackstand | com alvo: `FUN_1014ca10` → `Action` 0x04 (alvo, posição própria, shift 0/1) |
| 9 | attackforce | com alvo: `Atk` = `AttackRequest` 0x0a |
| 11 | trade | com alvo: `RequestTrade` 0x15 |
| 12 | target nome | sem nome: sysmsg 1256; `GetUser(nome)` → `Action` 0x04 |
| 13, 14, 15 | targetnext, pickup, assist | locais: `GetNextEnemy(200, alvo)`, `GetNearestItem(200)`, alvo do alvo → `Action` |
| 16 | invite [nome] | palavra ou alvo jogador → `RequestJoinParty` 0x29 (nome, `GL2PartyLooting`); senão sysmsg 185 |
| 17, 18 | leave, dismiss | 0x2b; `RequestOustPartyMember` 0x2c (palavras ou alvo jogador; senão sysmsg 187) |
| 19, 39 | vendor, buy | `RequestPrivateStoreManage` 0x73, `RequestPrivateStoreBuyManage` 0x90 |
| 20 | partymatching | `RequestListPartyWaiting` 0x6f (1, −1, 1) e `EV_PartyMatchCommand` (0x65e) |
| 21–23, 46–51, 54–56 | social* | `SocialAction` 0x1b d 2–4, 5–10, 11–13 |
| 24, 25, 26 | useskill, …force, …stand | sem nome: 1256; `GetMSCommandData(nome)` → `RequestMagicSkillUse` 0x2f (id, 0/1, 0/1); skill de tipo 0xc entra no estado 6 do pawn |
| 27, 28, 29 | useshortcut página slot | `FUN_10171680(slot − 13 + página·12, ctrl, shift)` (página 1–10, slot 1–12) |
| 30 | allyinvite | alvo jogador: sysmsg 510 + `RequestJoinAlly` 0x82; senão 511 |
| 31–34, 86, 87 | ally*, clanwarstart/stop | diálogos das sysmsg 512–515, 1531, 1532 |
| 35, 37, 53 | allyinfo, friendlist, remaintime | 0x8e, `RequestFriendList` 0x60, `RequestRemainTime` 0xa9 |
| 36, 38 | friendinvite, frienddel | sem nome: 1256; 0x5e / 0x61 |
| 43, 44, 45, 78, 79 | blocklist, block, unblock, allblock, allunblock | `RequestBlock` 0xa0 tipo 2, 0 (+nome; palavras ou alvo jogador, senão 1256), 1 (+nome), 3, 4 |
| 57, 58, 60, 63–65, 67, 69–71, 75, 105–108 | sitstand, walkrun, mountdismount, pet*, summon*, evaluate, … | `DoAction` (FUN_10170860) 0, 1, 38, 15–17, 19, 21–23, 40, 55, 54, 53, 52 |
| 59, 101 | dwarven/generalmanufacture | `RequestActionUse` 0x45 (37 / 51, 0, 0) |
| 66 | petpickup | local `FUN_10144c60(200, −1)` |
| 80 | equip página slot | `FUN_1015a2d0`: atalho de item → `RequestUseItem` 0x14 |
| 84 | findprivatestore | local `SetMatchedStore(palavra)` |
| 85 | changepartyleader | palavra ou alvo jogador → 0xd0/0x04; senão sysmsg 1400 |
| 91 | deletealliancecrest | `RequestSetAllyCrest` 0x87 (0, nulo) |
| 94, 95 | channelinvite, channelkick | palavra ou alvo jogador → 0xd0/0x0d, 0xd0/0x0f; senão sysmsg 1530 |
| 98 | nick título | palavrão: sysmsg 204; mais de 16: sysmsg 80; `RequestGiveNickName` 0x55 (o próprio nome, título) |
| 103, 104 | start/end_videorecording | `FL2ReplayManager` (local) |
| 111, 113 | duel, partyduel | resto ou alvo jogador (até 11 caracteres) → `RequestDuelStart` 0xd0/0x27 (nome, 0/1) |
| 112 | withdraw | `RequestDuelSurrender` 0xd0/0x30 |
| 40–42, 68, 97 | allywar*, summonattack, channelinfo | nada |
| outros (0 loc, 52 unstuck, 61, 62, 72–74, 76 delay, 77 time, 81–83, 88–90, 92, 93, 96, 99, 100, 102, 109, 110) | | `default` = `BypassUserCmd` = `RequestUserCommand` 0xAA d id |

`DoAction` nos ids acima: 40 (evaluate) sem alvo = sysmsg 242, alvo jogador = `VoteSociality` 0xb9 (d alvo), outro = 144; 55
= replay (local); os demais caem no `default` = `RequestActionUse` 0x45. Mensagem local (`FUN_10170650`): o 2º argumento
(0xffb09b79) é ignorado; grupo 4 do registro abre diálogo, senão vai ao chat com a cor, o som e a voz do registro.
`RequestBlock` tem os tipos 0 block, 1 unblock, 2 blocklist, 3 allblock, 4 allunblock (aCis `RequestBlock.java`).

### 3.8 Outras janelas com chat (resumo)

| Janela | Entrada | Envio | Detalhe |
|---|---|---|---|
| PartyMatchRoomWnd | `EV_PartyMatchChatMessage(Msg, ColorR/G/B/A)` → `PartyRoomChatWindow.AddString` | `ProcessPartyMatchChatMessage` | Pisca (`NotifyAlarm`) se estiver minimizada (`PartyMatchRoomWnd.uc:374-396,485-497`) |
| PetitionWnd | `EV_PetitionChatMessage(Message, ColorR/G/B/A)` | `ProcessPetitionChatMessage` e depois `Clear` | `PetitionWnd.uc:40-85` |
| GMSnoopWnd | `EV_GMSnoop(SnoopID, CharacterName, SnoopName, CreatureID, Type, ChatMessage)` | — | `"Nome: msg"` com a paleta da §3.3 (`GMSnoopWnd.uc:82-100`) |
| Command Channel | — | `ProcessCommandChatMessage`, `ProcessCommandInterPartyChatMessage` (natives `UIScript.uc:356-357`) | nenhum `.uc` os chama |

### 3.9 OnScreenMessageWnd (animação)

1. [O] `EV_ShowScreenMessage` (`OnScreenMessageWnd.uc:365-396`): lê MsgType, MsgNo, WindowType, FontSize, FontType, MsgColor, MsgColorR/G/B (padrão 255), ShadowType, BackgroundType, LifeTime (ms), AnimationType e Msg.
   - MsgType 1 → texto literal; MsgType 0 → `GetSystemMessage(MsgNo)`.
   - **FontSize, MsgColor e ShadowType são lidos e ignorados.**
   - Pelo `91_eventos_nativos.md` linha 28, o nativo (FUN_101696b0) não envia MsgColorR/G/B. Com o servidor como origem, o texto sai branco; só o aviso de Command Channel do ChatWnd é colorido.
2. [O] `ShowMsg` (`:111-300`):
   - `ResetAllMessage()` esconde as 8 janelas e volta as cores para branco, então **só uma mensagem por vez**;
   - remove os caracteres `` ` `` e quebra a linha no primeiro `#`;
   - FontType 0 usa os TextBox grandes com sombra; FontType 1 usa os `sm`;
   - BackgroundType 1 só tem efeito na Wnd2 (`texturetype1`);
   - velocidade de alfa por tick ("droprate"): anim 0=255 (instantâneo), 1=25, 11=15, 12=25, 13=35.
3. [O] `OnTick`: fade-in de +droprate por tick até 255. Depois, `SetUITimer("OnScreenMessageWnd1", m_TimerCount, LifeTime)`. No `OnTimer`, faz o fade-out de −droprate por tick e, ao chegar em 0, `ResetAllMessage` (`:34-62,303-343`). O timer fica sempre registrado na Wnd1. [?] A frequência do OnTick (por frame?) define a duração real do fade.

### 3.10 ZoneTitleWnd

[O] `EV_BeginShowZoneTitleWnd(ZoneName, SubZoneName1, SubZoneName2)` (só ZoneName é usado) (`ZoneTitleWnd.uc:16-61`):
- `GetZoneNameTextSize(ZoneName, w, h)`;
- tamanho da janela = (w+100, 200);
- `MoveTo(scrW/2 − w/2 − 100, scrH/5 − 80)`, o que põe o texto centrado em x e em y = scrH/5;
- esconde depois de 4000 ms (timer 0).

A `MinimapWnd` também escuta o evento para atualizar o local. [?] A opção `[Game] ShowZoneTitle` (GameTab `ZoneNameBox`, ss 1196 "Show Region") não é checada no script, então quem filtra é o nativo.

---

## 4. Filtros e opções

### 4.1 `chatfilter.ini` (pasta `system`)

Seções por aba (`ChatWnd.uc:59-64`). [O] **Atenção, os nomes estão trocados**: a aba Trade grava em `[pledge_tab]` e a aba Clan em `[market_tab]`. Uma recriação compatível deve manter isso.

| Aba | Seção |
|---|---|
| 0 All | `[entire_tab]` |
| 1 Trade | `[pledge_tab]` |
| 2 Party | `[party_tab]` |
| 3 Clan | `[market_tab]` |
| 4 Ally | `[ally_tab]` |

Chaves (bool `True`/`False`) e padrões quando ausentes (`SetDefaultFilterValue`, `ChatWnd.uc:698-787`). `*` = forçado a 1 depois de ler o ini (`SetDefaultFilterOn`, `:690-696`) e com o checkbox desabilitado na UI (`:890-906`; `ChatFilterWnd.uc:93-109`).

| Chave | Campo | All | Trade | Party | Clan | Ally |
|---|---|---|---|---|---|---|
| system | bSystem | 1 | 1 | 1 | 1 | 1 |
| chat | bChat (não usado) | 1 | 1 | 1 | 1 | 1 |
| normal | bNormal | 1 | 0 | 0 | 0 | 0 |
| shout | bShout | 1 | 1 | 1 | 1 | 1 |
| pledge | bClan | 1 | 0 | 0 | **1\*** | 0 |
| party | bParty | 1 | 0 | **1\*** | 0 | 0 |
| market | bTrade | 0 | **1\*** | 0 | 0 | 0 |
| tell | bWhisper | 1 | 1 | 1 | 1 | 1 |
| damage | bDamage | 1 | 1 | 1 | 1 | 1 |
| ally | bAlly | 0 | 0 | 0 | 0 | **1\*** |
| useitems | bUseItem | 0 | 0 | 0 | 0 | 0 |
| hero | bHero | 0 | 0 | 0 | 0 | 0 |
| union | bUnion | 1 | 0 | 0 | 0 | 0 |

- `[global] command` = `m_NoUnionCommanderMessage` (padrão 0). Com 1, esconde o aviso de Command Channel na tela (`ChatWnd.uc:684-686`).
- Leitura: `GetINIBool(seção, chave, out int, "chatfilter.ini")`. Só sobrescreve o padrão se a chave existir (`:633-687`).
- Escrita: só da aba atual, ao clicar OK, com `SetINIBool` (`ChatFilterWnd.uc:157-172`).
- Exemplo real exportado (`export/client_cfg/chatfilter.ini`): `[entire_tab]` com tudo True exceto `chat=False`, e `[global] command=True`.

### 4.2 Lógica da ChatFilterWnd

- [O] Ao abrir (`SetChatFilterButton`, `ChatWnd.uc:790-908`):
  - carrega `SystemMsgBox`/`DamageBox`/`ItemBox` do Option.ini;
  - preenche `CurrentText` e os 12 checkboxes da aba atual (o Chat está comentado);
  - desabilita Damage e Item se System estiver desmarcado;
  - habilita os 9 de chat e desabilita o do próprio tipo da aba.
  - [O] O estado habilitado de `DamageBox`/`ItemBox` em relação ao `SystemMsgBox` **não** é ajustado na abertura, só no clique (`ChatFilterWnd.uc:69-81`).
- [O] Clique em `CheckBoxSystem` → alterna `SetDisable` de Damage e Item. Clique em `SystemMsgBox` → `EnableWindow`/`DisableWindow` de DamageBox e ItemBox. Todo clique reaplica as regras de habilitação dos 9 checkboxes de chat (`ChatFilterWnd.uc:18-110`).
- [O] OK (`:112-176`):
  - copia os checkboxes para `m_filterInfo[aba]` e `m_NoUnionCommanderMessage`;
  - `SetOptionBool("Game", "SystemMsgWnd" / "SystemMsgWndDamage" / "SystemMsgWndExpendableItem")`;
  - mostra ou esconde a SystemMsgWnd;
  - grava o ini e fecha.
- Cancel fecha sem salvar. Mudanças já salvas valem para as próximas mensagens; as linhas existentes não são refiltradas.

### 4.3 Option.ini `[Game]` ligadas ao chat

| Chave | UI | Rótulo | Padrão xdat (`checked`) | Exportado | Efeito |
|---|---|---|---|---|---|
| EnterChatting | GameTab `EnterChatBox` (25,251) | ss 442 "Enter Chat" | true | True | soltar o foco depois de enviar (§3.2). [?] O roteamento de teclas sem foco é nativo (globais `GIsEnterChatting` no NWindow e no Engine) |
| OldChatting | GameTab `OldChatBox` (135,251) | ss 566 "Auto Code" | true | True | prefixo automático da aba (§3.2). Global `GIsOldChat` |
| SystemMsgWnd | ChatFilterWnd `SystemMsgBox` | ss 1197 | — | True | mostra a SystemMsgWnd |
| SystemMsgWndDamage | `DamageBox` | ss 357 | — | True | dano na SystemMsgWnd |
| SystemMsgWndExpendableItem | `ItemBox` | ss 796 | — | True | consumíveis na SystemMsgWnd |
| ShowZoneTitle | GameTab `ZoneNameBox` (25,199) | ss 1196 "Show Region" | true | False | título de zona [?] |
| TransparencyMode | GameTab `OpacityBox` (164,15) | ss 927 "Transparent" | true | False | [?] Transparência das janelas, possivelmente o fundo do chat. Só é lida e gravada em `OptionWnd.uc:567-569,1098-1100` |

[O] Risco: `OptionWnd.ApplyGameOption` grava SystemMsgWnd, SystemMsgWndDamage e SystemMsgWndExpendableItem a partir de `OptionWnd.SystemMsgBox/DamageBox/ItemBox` (`OptionWnd.uc:1145-1155`). Esses controles **não existem** no xdat de OptionWnd/GameTab; o código de leitura deles está comentado (`:679-701`). [?] Se `IsChecked` de um controle inexistente devolver false, aplicar as opções do jogo desliga a janela de sistema.

Fonte do chat [O]: `l2.ini [FontSet] Font=L2Font.gulim`, `Glyph=gulim.gly` (`l2.ini:44-48`). Os glifos exportados estão em `out/tool/ui/L2Font-e/`.

---

## 5. Atalhos de teclado (`layout/_shortcuts.txt`)

| Tecla | Comando | Estado | Tratamento |
|---|---|---|---|
| Enter | `FocusChatWindow` | GamingState | nativo [?]. **[I]** Gera o foco no ChatEditBox (EV_ChatWndSetFocus), mas o `91_eventos_nativos.md` não acha emissor para o 570 no NWindow |
| Alt+J | `ShowChatWindow` | Gaming, BroadcastObserver, EventMatchObserver, Debug, GMCamera | `Shortcut.uc:71-89`: alterna ChatWnd e, se a opção estiver ligada, a SystemMsgWnd |
| Alt+PageUp | `SetPrevChatType` | Gaming | `Shortcut.uc:91-147`: aba anterior (0→4→3→2→1→0). Antes, `MergeTab` em quase todas as abas |
| Alt+PageDown | `SetNextChatType` | Gaming | `Shortcut.uc:149-204`: aba seguinte (0→1→…→4→0) |
| Y, Alt+Y | `ShowMessengerWindow` | Gaming | nativo (MSN) |
| O, Alt+O | `ShowGMPetitionWindow` | Gaming | nativo (petição) |
| R, Alt+R | `ShowMacroListWindow` | Gaming | macros (fonte de EV_ChatWndMacroCommand) |
| Alt+W | `CloseAllWindow` | Gaming | `Shortcut.uc:207-210`: só esconde a SystemMenuWnd |
| (no EditBox) | navegar pelos nomes de sussurro | — | [O] FUN_10139700 / FUN_101398c0 (chamadas por FUN_1013bf90). [?] Quais teclas são |

[O] Peculiaridade de `Shortcut.uc`: quase sempre chama `MergeTab` em todas as abas exceto a atual. Nos casos CLAN (`:127-135`, `:185-193`), porém, a exceção é a ALLY, e a CLAN é reintegrada. Reproduza, se o objetivo for paridade.

[O] `user.ini` tem só `;T=Talk` e `;Y=TeamTalk` comentados (linhas 105 e 156). O chat não tem bindings ativos ali.

---

## 6. Variações e estados

| Estado | Efeito |
|---|---|
| Entrar em GamingState vindo de LoadingState | `Clear()` esvazia o EditBox, as 5 abas e a SystemMsgList (`ChatWnd.uc:341-347,161-170`). Ao voltar de outro estado (câmera especial etc.) **não** limpa |
| OlympiadObserverState | ChatWnd ativo também (`ChatWnd.uc:67`) |
| Sem clã / sem aliança | aba Clan / Ally desabilitada (§3.4) |
| Aba destacada | ChatWindow vira janela solta com textura própria. `OnDefaultPosition` reintegra |
| SystemMsgWnd ligada ou desligada | muda a âncora do filtro e dos botões Tutorial/Quest/Mail |
| OldChatting | o EditBox ganha e troca prefixos automaticamente |
| EnterChatting | o foco é solto depois de cada envio |
| IME | 13 ícones (§3.5) |
| MSN | 5 ícones (§3.5) |
| Text capture | [O] `GL2TextCapture==2` grava cada EV_ChatMessage (FUN_101392c0). Strings: `NCChatWnd::OpenTextCapture/CloseTextCapture`, cabeçalho `[ L2 Text Capture] [ %02d/%02d %02d:%02d:%02d ]`, arquivo `L2_%02d_%02d_%02d_%02d.log`. [?] Como liga |
| Palavrões | [O] `obscene-e.dat` tem 13 entradas (923, bitch, chink, chutney, cock, cunt, fag, fuck, gay, gook, nickelback, nigger, shit). O Engine.dll tem `FL2GameData::ObsceneDataLoad`. [O] **Mascara**: cada ocorrência (substring, sem diferenciar maiúsculas em A–Z) é trocada pela sysstring 740 (`-_-ㆀ`); isso é aplicado ao chat recebido, a nomes e a comandos, não ao enviado (93 §8.1). |
| Balões de fala | [O] Engine `UCanvas::DrawChatting`, `FDynamicActor::DrawChat`, texturas `L2UI_ch3.ChatBack.balloon1_1..2_4`. Fora do HUD do chat; pertence à seção de nomes e títulos sobre personagens [?] |

---

## 7. Eventos, natives e pacotes

### 7.1 Eventos (`UIEventManager.uc`)

| ID | Evento | Parâmetros | Quem trata | Emissor nativo |
|---|---|---|---|---|
| 140 | EV_ShowScreenMessage | MsgType, MsgNo, WindowType, FontSize, FontType, MsgColor, MsgColorR/G/B, ShadowType, BackgroundType, LifeTime(ms), AnimationType, Msg | OnScreenMessageWnd | FUN_101696b0. Também `ChatWnd.uc:477` |
| 150 | EV_GamingStateEnter | — | SystemMsgWnd | — |
| 540 | EV_ChatMessage | Type, Msg, ColorR, ColorG, ColorB, [SysType se Type=5] | ChatWnd | FUN_101392c0 |
| 550 | EV_ChatWndStatusChange | — | ChatWnd | FUN_10163ab0 |
| 560 | EV_ChatWndSetString | String | ChatWnd | execSetChatMessage, FUN_10139700, FUN_101398c0 |
| 570 | EV_ChatWndSetFocus | — | ChatWnd | [?] |
| 571 | EV_ChatWndMsnStatus | status | ChatWnd | FUN_100c1ad0 |
| 572 | EV_ChatWndMacroCommand | Command | ChatWnd | FUN_101b45f0 |
| 580 | EV_SystemMessage | Index, Param1, Param2 (ParamN) | OnScreenMessageWnd | FUN_101b7cd0, FUN_1013e510 |
| 1500 | EV_IMEStatusChange | — | ChatWnd | FUN_1002a840, FUN_1002a8e0, FUN_1006fb10 |
| 1600 | EV_PartyMatchChatMessage | Msg, ColorR/G/B/A | PartyMatchRoomWnd | FUN_1013df30 (tipo 14) |
| 1920 | EV_ShowPetitionWnd | — | PetitionWnd | FUN_1013e640, FUN_1013df30 |
| 1921 | EV_ShowUserPetitionWnd | Message | UserPetitionWnd | FUN_1013a320 (`/gm`) |
| 1930 | EV_PetitionChatMessage | Message, ColorR/G/B/A | PetitionWnd | FUN_1013e640, FUN_1013df30 |
| 2410 | EV_GMSnoop | SnoopID, CharacterName, SnoopName, CreatureID, Type, ChatMessage | GMSnoopWnd | FUN_10163b30 |
| 2420 | EV_BeginShowZoneTitleWnd | ZoneName, SubZoneName1, SubZoneName2 | ZoneTitleWnd, MinimapWnd(_Expand) | — |
| 90 | EV_ShortcutCommand | Command (`ShowChatWindow`, `SetPrevChatType`, `SetNextChatType`, `CloseAllWindow`) | Shortcut | — |

### 7.2 Natives usados

| Native | Declaração | Uso |
|---|---|---|
| `ProcessChatMessage(string, int type)` | `UIScript.uc:347` | envio. `type` = índice da aba |
| `GetChatPrefix(EChatType)`, `IsSameChatPrefix(EChatType, string)` | `UIScript.uc:166-167` | OldChatting |
| `SetChatMessage(string)` | `UIScript.uc:385` | preenche o EditBox (via EV 560) |
| `ProcessPartyMatchChatMessage`, `ProcessPetitionChatMessage`, `ProcessCommandChatMessage`, `ProcessCommandInterPartyChatMessage` | `UIScript.uc:350-357` | chats auxiliares |
| `ExecuteCommand(string)`, `ExecuteCommandFromAction(string)` | `UIScript.uc:216-217` | comandos `/` e `//` |
| `AddSystemMessage(string, Color)`, `AddSystemMessageParam`, `EndSystemMessageParam` | `UIScript.uc:174-176` | mensagens locais |
| `GetSystemMessage(id)`, `GetSystemString(id)`, `GetSystemMsgInfo(id, out SystemMsgData)`, `MakeFullSystemMsg(msg, a1, a2)` | `UIScript.uc:125-130` | textos |
| `GetCurrentIMELang()` | `UIScript.uc:144` | ícone de IME |
| `ToggleMsnWindow()` | `UIScript.uc:429` | MSN |
| `GetOptionBool`/`SetOptionBool` | `UIScript.uc:223,227` | Option.ini |
| `GetINIBool`/`SetINIBool` | `UIScript.uc:247,252` | chatfilter.ini |
| `GetPlayerInfo(out UserInfo)` | `UIScript.uc:106` | nClanID e nAllianceID (`UIEventManager.uc:816-817`) |
| `GetZoneNameTextSize`, `GetCurrentResolution` | `UIScript.uc:133,163` | ZoneTitle |
| `ExecuteEvent(id, param)`, `ParamAdd` | `UIEventManager.uc:1177-1180` | aviso de Command Channel |
| `PartyMatchAPI.RequestOpenPartyMatch()` | `PartyMatchAPI.uc:4` | botão de grupo |
| `ChatWindowHandle.EnableTexture(bool)`, `SetScrollBarPosition(x, y, height)` | `ChatWindowHandle.uc` | chamado com (5,10,−25) em todas as abas (`ChatWnd.uc:120-127`) |
| `TextListBoxHandle.AddString(text, Color)`, `Clear()` | `TextListBoxHandle.uc` | linhas |
| `TabHandle.GetTopIndex`, `SetTopOrder(i, bSend)`, `SetDisable(i, b)`, `MergeTab(i)` | `TabHandle.uc` | abas |
| `EditBoxHandle.GetString/SetString/AddString/Clear/SetFocus/IsFocused/ReleaseFocus` | `EditBoxHandle.uc`, `WindowHandle.uc:33-35` | campo |
| `WindowHandle.SetWindowSizeRel`, `SetSettledWnd`, `MoveTo`, `GetRect`, `SetWindowSize` | `WindowHandle.uc:18-56` | destacar e reintegrar |
| `UIAPI_WINDOW.SetAnchor/SetAlpha/SetUITimer/KillUITimer/ShowWindow/HideWindow/IsShowWindow` | `UIAPI_WINDOW.uc` | posição e fade |
| `UIAPI_CHECKBOX.SetCheck/IsChecked/SetDisable/EnableWindow/DisableWindow` | `UIAPI_CHECKBOX.uc` | filtro |

### 7.3 Pacotes (Engine.dll `UNetworkHandler`, opcodes em `92_protocolo_opcodes.md`)

| Direção | Pacote | Uso no chat |
|---|---|---|
| C→S | `Say2` 0x38: `S text, D type, [S target se type=2]` | chat comum |
| C→S | `RequestUserCommand` 0xAA: `D id` (nome nativo `BypassUserCmd`) | `/loc`, `/unstuck`, … [I] |
| C→S | `SendBypassBuildCmd` 0x5b | `//cmd` |
| C→S | `RequestBlock` 0xA0: `D tipo, [S nome]` | `/block`, `/unblock`, `/blocklist`, `/allblock`, `/allunblock` |
| C→S | `RequestFriendInvite` 0x5e, `RequestFriendList` 0x60, `RequestFriendDel` 0x61, `RequestSendFriendMsg` 0xcc (`RequestSendL2FriendSay`) | amigos |
| C→S | `RequestPetition` 0x7f, `RequestPetitionCancel` 0x80, `SnoopQuit` 0xab, `RequestWriteHeroWords` 0xd0:0x0c | petição, snoop, herói |
| S→C | `CreatureSay` 0x4a (`OnSay2`) | chat recebido. [?] O aCis escreve também um `D npcString`; confirmar o layout Interlude |
| S→C | `NpcSay` 0x02 | fala de NPC |
| S→C | `SystemMessage` 0x64 | §3.6 |
| S→C | `ExShowScreenMessage` 0xFE:0x38: `D type, D sysMsgId, D position, D hide, D size, D unk2, D unk3, D effect, D time, D fade, S text` (aCis) | → EV_ShowScreenMessage [?] |
| S→C | `Snoop` 0xd5, `L2FriendSay` 0xfd, `ExHeroList` 0xFE:0x23 | snoop, amigos, heróis |

---

## 8. Lacunas a validar no nativo

1. ~~**`UUIScript::execProcessChatMessage`**~~ **resolvido** em 93 §8.1. Resumo: o tipo padrão sai da aba (0 → geral, 1 → comércio 8, 2 → party 3, 3 → clã 4, 4 → aliança 9); o prefixo tem 1 caractere (ASCII ou largura total) ou 2 no caso das duas crases; `~` força o geral; o alvo do sussurro vai até o primeiro espaço; o limite de 100 caracteres é só do EditBox. O anti-flood funciona por pontuação: 60/caractere + 100/mensagem + 10%, 2000 por repetição, bloqueio acima de 20000, decaimento de 200/s, liberação em ≤ 10000, mensagens de sistema 964/1078/966/965. O filtro de `obscene-e.dat` mascara substrings **no chat recebido** (e em nomes e comandos), não no enviado.
2. **`execGetChatPrefix` / `execIsSameChatPrefix`**: confirmar que a tabela em VA `0x10350e18` (refs de código nos offsets de arquivo 0x139eab/0x13a1a3) é indexada por EChatType. Qual elemento do par (ASCII ou largura cheia) `GetChatPrefix` devolve? Depende da língua?
3. **FUN_1013bf90** (teclado do EditBox de chat): quais teclas chamam FUN_10139700 (responder ao último sussurro) e FUN_101398c0 (percorrer os nomes); tamanho máximo da lista (`AddWhisperName`/`ChangeWhisperName`); se existe histórico das linhas enviadas (setas).
4. **Cor e formato por tipo no recebimento**: quem chama FUN_1013df30 (FUN_10141760, FUN_10163d90). Falta a tabela de cores de HERO, ANNOUNCE, CRITICAL_ANNOUNCE, COMMANDER e INTER_PARTYMASTER, e o formato do sussurro enviado ("->Nome"?).
5. **`NCChatListBox`** (ChatWindow): limite de linhas no buffer, quebra de linha, rolagem e roda do mouse, texturas e semântica da scrollbar em `SetScrollBarPosition(5,10,-25)`, uso de `lineGap`, textura de `EnableTexture` (`Default.ChatBack`?), fonte (`L2Font.gulim`?).
6. **Redimensionamento**: semântica dos campos `unk117/118/120/121/122` do Window (ChatWnd 3/0/24/10/300), posição do grip `Chatting_sizeControl` (24×10), tamanho mínimo e máximo, persistência em `WindowsInfo.ini` (seções numéricas `[1]..[8]`).
7. ~~**Âncoras**~~ **resolvido** (93 §2): o 1º ponto é o do próprio controle, e o 2º o da janela de referência.
8. **EnterChatting / OldChatting**: uso de `GIsEnterChatting`/`GIsOldChat` (NWindow e Engine) no roteamento de teclas para o jogo ou para o chat quando o EditBox não tem foco; emissor do `EV_ChatWndSetFocus` (Enter = `FocusChatWindow`).
9. **TransparencyMode** (`OpacityBox`): o que fica transparente e quanto.
10. **Text capture**: como liga `GL2TextCapture` (comando? opção?), formato do arquivo `L2_%02d_%02d_%02d_%02d.log`.
11. **Despacho de comandos** FUN_1013a320: confirmar que FUN_101453e0(id) envia `RequestUserCommand(0xAA, id)`; o ramo comum dos ids 40, 41, 42, 68 e 97; o comportamento de cada `case` (ações sociais, `/invite nome`, `/friendinvite`, `/channel*`, `/nick`, `/delay`, `/evaluate`, `/duel`…); os callers FUN_1013c310 e FUN_10148bd0.
12. **SystemMessage**: confirmar o tipo de diálogo do grupo 4 (FUN_1016e1b0 com 0x1f); a ordem dos argumentos de FUN_1013e640 no fallback de id>2999; por que FUN_1013e510 envia SysType=0.
13. **EV_ShowScreenMessage** (FUN_101696b0): mapeamento dos campos do `ExShowScreenMessage` (position→WindowType, size→FontType, effect→BackgroundType, fade→AnimationType?).
14. **ShowZoneTitle**: onde o nativo ou o Engine bloqueia o EV 2420 quando a opção está desligada; fonte usada por `GetZoneNameTextSize`.
15. **Frequência do `OnTick`** (por frame ou fixa), que define a duração dos fades da OnScreenMessage.
16. **`IsChecked`** em TextBox ou controle inexistente → false? (afeta `chat=` e o risco de `OptionWnd.ApplyGameOption`).
17. **`CreatureSay` 0x4a no Interlude**: o layout tem ou não o `D npcString` que o aCis escreve?

---

## 9. Checklist para recriar

**Layout**
- [ ] ChatWnd 348×187 na base esquerda: 4 faixas de fundo (Back2, Back3 em tile, Back4, Back1) nas alturas 18/105/18/46.
- [ ] 5 ChatWindows sobrepostas de (W−5)×(H−46), lineGap 4.
- [ ] Tab de 320×23 em (23, H−46) com 5 abas de 64×23 (Tab2 normal, Tab1 selecionada) e rótulos ss 144/355/188/128/559. Abas 1-4 destacáveis.
- [ ] EditBox 303×16 em (39, H−22), máximo 100 caracteres.
- [ ] Botões 15×15: filtro (5, H−66), MSN (5, H−39), grupo (5, H−20). Ícone de IME 15×15 em (24, H−20). Tooltips ss 897/996/389.
- [ ] Redimensionável. Grip `Chatting_sizeControl` (§8.6). Tamanho salvo em WindowsInfo.

**Envio**
- [ ] Enter → `ProcessChatMessage(texto, aba)`; limpa o campo; OldChatting reinsere o prefixo; EnterChatting solta o foco.
- [ ] Parser: tabela de prefixos da §3.1 (com largura cheia); `"Nome texto` para sussurro; `/cmd` pela tabela da §3.7 (UserCmd, Block, DoAction…); `//` para GM.
- [ ] Pacote `Say2(text, type, target)`.

**Recebimento e filtro**
- [ ] `EV_ChatMessage` → `CheckFilter` exatamente como na tabela da §3.3, incluindo os "sempre exibe" e o ramo da SystemMsgWnd.
- [ ] Cores vindas do evento. Paleta de referência na §3.3.
- [ ] COMMANDER_CHAT também na tela (Wnd8, cor 255/150/149, 5 s, quebra em 35 caracteres com `#`), a menos que `[global] command=1`.

**Abas**
- [ ] Clan e Ally desabilitadas sem clã ou aliança (EV 550).
- [ ] Alt+PageUp e Alt+PageDown ciclam as abas.
- [ ] Destacar e reintegrar (§3.4). OnDefaultPosition reintegra tudo e seleciona All.

**Filtros**
- [ ] ChatFilterWnd 256×300 acima do chat (ou da SystemMsgWnd), com os controles e posições da §2.4.
- [ ] Padrões e forçados da §4.1, com as **seções trocadas** `pledge_tab` (Trade) e `market_tab` (Clan).
- [ ] OK salva só a aba atual e as 3 opções de Option.ini. Cancel descarta.
- [ ] Regras de habilitação (System → Damage e Item; SystemMsgBox → DamageBox e ItemBox; checkbox da própria aba desabilitado).

**Mensagens de sistema**
- [ ] SystemMsgWnd 348×125 (fundo `chatting_system` semitransparente), ligada por `[Game] SystemMsgWnd`.
- [ ] Ao mostrar ou esconder, reancora o filtro e os botões Tutorial/Quest/Mail (x 5/42/79).
- [ ] Ler `systemmsg-e.dat` com o layout completo da §3.6.
- [ ] Grupo 4 → diálogo. Grupo 6 → janela de petição. Os outros → chat com SysType = grupo.
- [ ] Tocar sound e voice.
- [ ] `windowType≠0` → OnScreenMessage.

**Tela**
- [ ] 8 âncoras da §2.6; uma mensagem por vez.
- [ ] `#` quebra a linha e `` ` `` é removido; FontType 0 (com sombra 2,2) ou 1 (pequena); BackgroundType 1 só na Wnd2.
- [ ] Fade por droprate {0:255, 1:25, 11:15, 12:25, 13:35} por tick; espera LifeTime; fade-out.
- [ ] Branco se a cor for (0,0,0) ou (176,155,121).

**Zona**
- [ ] ZoneTitleWnd: texto com sombra (+3,+3), centrado em x, y = H/5, decoração `fontdeco`, 4 s.

**Outros**
- [ ] IME: 13 ícones (§3.5).
- [ ] MSN: stub com 5 estados.
- [ ] PartyMatchingBtn alterna a PartyMatchWnd.
- [ ] Limpar o chat ao sair do LoadingState.
- [ ] Alt+J alterna ChatWnd e SystemMsgWnd.

**Paridade de bugs (opcional)**
- [ ] Fallthrough de EV_ChatMessage para o IME.
- [ ] `GetChatTypeByTabIndex` ignora o argumento.
- [ ] CHN mostra o ícone JP.
- [ ] Merge inconsistente nos casos CLAN do Shortcut.
- [ ] Estado inicial de DamageBox/ItemBox não sincronizado.
- [ ] `chat=False` sempre gravado.

---

## Apêndice A — NCChatListBox conferido no NWindow.dll (H3 do porte Unity)

Leitura do pseudocódigo e da desmontagem. Corrige: a fonte do chat no cliente inglês é `L2Font-r.SmallFont-r` (Localization.ini `[English] English_Font`), não `L2Font.gulim`; as linhas quebradas têm recuo fixo de 12 px; a aba encaixada não desenha fundo próprio; a barra fica à esquerda com as setas sempre visíveis. Constantes no golden `Docs/tools/gen_golden.py chat_list` do porte Unity.

Labels: **[O]** read in pseudocode or disassembly (function VA, file:line). **[I]** inferred. **[?]** not determined.
Paths: `nw/X.c` = `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\decomp_all\nwindow\X.c`; `en/X.c` = `...\decomp_all\engine\X.c`.
"asm @VA" = capstone disassembly of `C:\Program Files (x86)\Lineage II Interlude\System\NWindow.dll`, used where x87 constants are missing from the pseudocode.
Object offsets are relative to the C++ object (`this`). `W` = `this+0x88` (float width), `H` = `this+0x8c` (float height).

### 0. Class map

| xdat type | Native class | vtable | Created by |
|---|---|---|---|
| `ChatWindow` | `NCChatListBox` : `NCTextListBox` : `NCListBox` : `NCWnd` | 0x1027cb1c | `XMLChatWindowData::Create` 0x100d4e90 |
| `TextListBox` | `NCTextListBox` : `NCListBox` | 0x1023c4fc | `XMLTextListBoxData::Create` 0x100ece80 |
| scroll thumb | `NCSliderBar` | 0x10240414 | ctor 0x1004a180 |
| up/down arrows | `NCPushButton` (ctor 0x10007150) | — | `NCTextListBox::OnCreate` 0x10033250 |

- [O] `NCChatListBox` overrides only these slots of `NCTextListBox` (vtable diff, script `vt.py`): 3, 26, 32 `SetWindowStyle`, 38 `OnCreate`, 39 `OnDestroy`, 99 `OnPaint`, 124 `CreateScriptHandle`. These are inherited unchanged: AddString (slot 132, 0x100339c0), SetScrollBarPosition (131, 0x10032f10), ShowWindow (78, 0x10032530), mouse wheel (113, 0x10032c50), Up/Down (128/129), Clear (93, 0x10033700).
- [O] Script path: `TextListBoxHandle.AddString(text, Color)` → `UTextListBoxHandle::execAddString` 0x10131a80 calls `AddString(text, ARGB, -1, 12)` (`nw/00010.c:17809-17816`). `UUIAPI_TEXTLISTBOX::execAddString` 0x10119d00 calls it with the same `(…, -1, 12)` (`nw/00009.c:20852-20860`). `ChatWnd.uc:419-431` feeds all 5 tabs and `SystemMsgList` through this path.

#### 0.1 Fields (NCListBox / NCTextListBox / NCChatListBox)

| Offset | Meaning | ChatWindow value | Source |
|---|---|---|---|
| 0x2e8/0x2ec | FArray of line entries / count | — | [O] |
| 0x2f4 / 0x2f8 / 0x2fc | up button / down button / slider | — | [O] `nw/00001.c:20013,20055,20083` |
| 0x300 | visible rows | ctor 9, then `(int)((H-10)/15)` on each paint | [O] ctor `asm @100d4eee` (push 9); paint `asm @1013809a-101380d5` |
| 0x304 | **maximum stored lines** | **200** (0xc8) | [O] `asm @100d4ef0` push 0xc8 → `FUN_10034070` `nw/00001.c:20621` |
| 0x308 | index of the first visible line (scroll top) | — | [O] |
| 0x30c | line count (copied from 0x2ec) | — | [O] `FUN_100324e0` `nw/00001.c:19155-19157` |
| 0x314 / 0x318 | text origin x / y | **23 / 14** | [O] `NCChatListBox::OnCreate` `nw/00011.c:878-879` (`in_ECX[0xc5]=0x17`, `[0xc6]=0xe`) |
| 0x31c | lineGap | ctor 17 (0x11); xdat `lineGap` overrides unless it is -9999. The ChatWnd xdat sets **4** | [O] `nw/00011.c:4036`, `nw/00006.c:29479-29481`, `XMLChatWindowData::Process` reads `L"lineGap"` `nw/00006.c:29409-29413` |
| 0x324 | "has scrollbar" flag | 1 (ctor arg 0xf ≠ 0) | [O] `nw/00011.c:4036`, `nw/00001.c:20716` |
| 0x35c | EnableTexture flag | 0 (constructor) | [O] `nw/00011.c:3949-3952`, `4038-4041` |
| 0x360/0x364/0x368 | background textures top/mid/bottom | loaded on EnableTexture(true) | [O] `FUN_10137420` `nw/00011.c:207-231` |

For TextListBox (not chat): ctor `(maxRow, showRow, isShowScroll!=0, lineGap)` (`asm @100ecedc-100ecefe`). It sets **0x304 = maxRow** (the line cap) and **0x300 = showRow** (rows drawn) [O]. The xdat values look swapped next to their names: for example `PartyRoomChatWindow maxRow=8 showRow=40` gives an 8-line cap and 40 drawn rows. [I] Either the names are inverted or those windows really keep only `maxRow` lines. This does not affect ChatWindow.

### 1. Line wrapping

#### 1.1 Where the split happens: AddString (0x100339c0, `nw/00001.c:20284-20426`)
1. [O] `NWndUtil::GetNewLineString` (0x10064640, `nw/00003.c:12383-12403`) replaces each literal two-character sequence `\n` (backslash, n) with CR LF (strings at 0x1024265c and 0x1023d1c8).
2. [O] First line: `FUN_100223d0(text, (int)(W - 22.0), font 0)` (`nw/00001.c:20314-20316`; constant 22.0 at `asm @10033a18`, ROUND = x87 rounding). If the result is NULL (empty text), nothing is added. The first line is stored with x offset 0 (`FUN_1004f780` zeroes +0x10, `nw/00002.c:17117-17128`).
3. [O] Continuation lines: the loop calls `FUN_10022850((int)(W - 16.0 - 6.0 - indent), 0)` until it returns NULL (`nw/00001.c:20360-20363, 20416-20418`; constants 16.0 and 6.0 at `asm @10033b81/10033b89`). Each continuation line stores `x offset (+0x10) = indent` (`nw/00001.c:20384`).
4. [O] **The indent is a constant: 12 px.** Both script natives pass it (§0). The continuation width is `W - 34`; the first-line width is `W - 22`.
5. [O] Each wrapped piece is a separate entry, so it counts separately against the 200-line cap (§4).

#### 1.2 Split algorithm
- [O] `FUN_100223d0` / `FUN_10022850` (`nw/00001.c:4980-5216`, `5219-5454`) branch on `GLanguageType`:
  - **1 or 6 → `FL2TextAlignParser`** (Engine.dll): word wrap. `SetParserParam(text, width, font, 0, 0, 1, 0, NULL, 0)` (`nw/00001.c:5034-5036`), then `GetLineBuffer`. Each continuation line calls `SetWidthParam(newWidth)` first (`nw/00001.c:5269-5271`).
  - **5 (Thailand)** → Thai cluster path (`UCanvas::MakeThaiCharArray`).
  - **anything else** → greedy **character** wrap. Glyph advances (`UL2Font` vfunc 0x74, glyph+4) are added until `sum > width`, and that character starts the next line. CR is copied and LF ends the line (`nw/00001.c:5061-5096`).
- [O] This client: `Localization.ini [LanguageSet] Language=1`, with `1=English`, `5=Thailand`, `6=Philippine` (decoded Ver111, file `System\Localization.ini`). **The word-wrap path is the one in use.**
- [O] `FL2TextAlignParser` (Engine.dll):
  - Tokenizer `GetNextTokenBuffer` (`en/00007.c:610-687`): word = run of non-space, non-LF characters (width = sum of glyph+4); space = **one** space character (width = space glyph advance); LF = newline token. Tokens are split only on U+0020 and LF; hyphens and punctuation do not break a line.
  - Line building `GetLineBuffer` (`en/00002.c:32736-33051`), with x starting at 0 on every line:
    - **space**: `x += spaceW`. If `x >= width`, the line ends and the space is dropped. Otherwise it is appended.
    - **word**: `x += wordW`. If `x >= width` (note: **>=**):
      - (a) Line empty and the word alone is too wide (`width <= wordW`): `DivideTokenWithWidth` cuts the word at a character boundary that fits. The rest carries to the next line (`en/00002.c:32883-32905`).
      - (b) Line has no space tokens yet: the word is appended anyway and overflows (`:32908-32913`).
      - (c) Otherwise the word moves to the next line, **except** when the overflow fits in `nSpaces * (spaceW - (spaceW/2+2))`. Then the word stays and the parser shrinks the per-space widths (`:32915-33015`; min space `spaceW/2+2`, `SetParserParam` `en/00007.c:12264-12268`).
      - [O] For the chat font, the space advance is 3 [I, from `SmallFont-r.gly`, §5], so `3 - (1+2) = 0` and rule (c) never keeps a word. **Implement plain greedy word wrap with the `>=` test.**
    - **LF**: ends the line.
    - Trimming: with `param_5 = 0` (`+0x60 = 0`), leading and trailing spaces are not trimmed. A line can end with a trailing space. Continuation lines never start with a space, because a space that hits the limit is dropped.
- [O] Measuring: `UL2Font` vfunc 0x74 (glyph record), `+4` = advance width and `+0xc` = height (`FUN_100216e0` `nw/00001.c:4222-4231`). There is no kerning and no extra letter spacing in measuring. At draw time `param_20 = -1` means "advance by glyph width" (`en/00007.c:27509-27525`).
- [I] `DrawNormalText` re-runs `FL2TextAlignParser` with the same clip width (§1.3, `en/00007.c:27219-27225`). Lines that are already wrapped stay on one row.

#### 1.3 Geometry (NCChatListBox::OnPaint 0x10137f00, `nw/00011.c:909-1040`)
- [O] Text x = `23 + lineXOffset`: 23 for the first line, **35** for continuation lines (`nw/00011.c:1029`).
- [O] Row y (relative to the control top) = `14 + (lineGap + 11) * row` (`asm @1013820d-1013822d`: `edx=[0x31c]; add edx,0xb; imul row; add [0x318]`). With lineGap=4 the **pitch is 15 px**.
- [O] Clip/width passed to DrawText = `(int)(W - 16 - 6 - lineXOffset)` (`asm @101381bf-101381f7`). The clip rect is the control rect (`SetClip(x, y, W, H)`, `nw/00011.c:945-948`).
- [O] Visible rows = `(int)((H - 10) / 15)`, truncated (`asm @1013809a-101380d0`: fsub 10.0, fdiv 15.0, `_ftol`). The constant 15 is **not** derived from lineGap.
- [I] Effective margins:
  - left 23 px (the scrollbar sits at x 5..20);
  - top 14 px;
  - bottom ≥ 10 px;
  - right: the text box ends at `23 + (W-22) = W+1`, i.e. 1 px past the control, so the control clip cuts it at W. There is **no right margin** inside the control; the ChatWnd gap comes from the control being `100%-5` wide.
- [I] Numbers for the default sizes:

| Control | Size | Rows | First-line width | Continuation width |
|---|---|---|---|---|
| ChatWnd tabs | 343×141 | 8 | 321 px | 309 px |
| SystemMsgList | 348×125 | 7 | 326 px | 314 px |

- [O] If the row count changes (resize), the scroll top snaps to `count - rows` (bottom) (`nw/00011.c:989-997`). If `count < rows`, top = 0 (`:999-1001`).
- [O] Other TextListBox controls (`NCTextListBox::OnPaint` 0x10033050, `nw/00001.c:19808-19891`) use different geometry, for comparison: x = `2 + offset`; y = `lineGap*row + 0x318 - hA/2 + 9`, where `hA` = glyph height of 'A' (`:19851-19879`); DrawText param_9 = 1.

### 2. Background
- [O] `NCChatListBox::OnPaint` draws its own background **only when EnableTexture is on** (`this+0x35c`, `nw/00011.c:949-987`; constants from `asm @10137f84-10138095`). Calls are `DrawTexture(x, y, w, h, u, v, uL, vL, tex, alpha=0xFF, 1)`:
  - top `L2UI_CH3.ChatWnd.Chatting_Back2`: (0, 0, 348, 18), src (0, 0, 348, 18);
  - middle `Chatting_Back3`: one 348×15 tile at y = 18 + 15·i for i < `(int)((H-36)/15)`, then one last piece at y = 18 + 15n, height `H - 18 - y`, src 348×15 (stretched);
  - bottom `Chatting_Back4`: (0, H-18, 348, 18).
  - The width is **always 348**, a constant that does not follow the control width.
  - Textures are loaded by `FUN_10137420` (`nw/00011.c:215-229`).
- [O] `ChatWnd.uc` turns this on only for a tab torn out into its own window (`OnTabSplit` → `EnableTexture(true)`, `:262`) and off on merge (`:301`). A docked tab draws **no** background of its own; what shows is the ChatWnd window's xdat Textures (`ChatWndHeadTex/BodyTex/BottomTex/BottomTex1`, alpha -9999 = default).
- [O] `Default.ChatBack` (the spec's guess) is **not** chat. It is used by `NCIcon`, `NCItemWnd`, `NCEquipItemWnd::OnPaint` and `NCSkillItemWnd` only (`nw/00001.c:6835,15965`; `nw/00013.c:385,12594,12671`).
- [O] Alpha pipeline: `alpha=0xFF` in DrawTexture/DrawText goes to `NCGDevice::GetFinalAlpha` 0x10021590 (`nw/00001.c:4111-4128`). It returns the device alpha (`+0x74`), and **half of it** (`>>1`) when the device transparency flag `+0x70` is set. Text color is `ARGB & (finalAlpha<<24 | 0xFFFFFF)` (`nw/00001.c:4276-4279`).
- [O] Option `[Game] TransparencyMode` (`GIsTransparencyMode`, parsed `nw/00002.c:3543,3597,3961`) is used only in `NCVirtualWndMain::DrawChildWindow` 0x10071170 (`nw/00004.c:391-418`). For each top-level window drawn while `TransparencyMode != 0`, the window is drawn at **half its alpha** unless:
  - the window is the head child (`IsChildHead`, vtable slot 62), or
  - the window has style bit 0x2000000, or
  - the gate `DAT_103663bc+0x50ac && param==GetHandle()` is false.
  
  Per window: `SetAlpha(GetAlpha())`, draw, `SetAlpha(0xFF)`. [I] "Head child" = the front-most window, so the focused window stays opaque. [?] The meaning of the gate `+0x50ac` and which windows set style 0x2000000.
- [O] There is no separate chat-alpha option in the stock code. `ChatAlpha` and `TransparencyValue` do not appear in any decompiled module. `Option.ini [Neophron] ChatTransparency=False` is not found as an ASCII or UTF-16 string in any `.dll/.exe/.u/.int` in `System\` (search script above). [I] It belongs to a third-party add-on (the `.u` packages are encrypted, so a script use cannot be excluded).

### 3. Scrollbar
- [O] Parts (`NCTextListBox::OnCreate` base 0x10033250, `nw/00001.c:19935-20092`; `NCChatListBox::OnCreate` calls it first, `nw/00011.c:876`):

| Part | Size | Textures | Control id |
|---|---|---|---|
| Up | 15×15 (`SetWindowSize(15.0,15.0)`, 0x41700000) | normal `L2UI_CH3.ScrollBar.ScrollBarUpBtn`, pushed `...ScrollBarUpOnBtn` | 0xf0f01406 |
| Down | 15×15 | `...ScrollBarDownBtn` / `...ScrollBarDownOnBtn` | 0xf0f01407 |
| Slider | — | `L2UI_CH3.ScrollBar.SliderBarTop` / `SliderBarCenter` / `SliderBarBottom` | 0xf0f01408 |

  - Button argument order confirmed at `asm @10033318-1003335c`.
  - Hover texture: `<normal>_over`, loaded by the `NCPushButton` ctor unless style bit 2 is set (`nw/00000.c:6356-6362`).
  - Base default placement (TextListBox): right side, anchors 3 (TOP_RIGHT) and 9 (BOTTOM_RIGHT) at (0,0); slider anchor 3 at (0,15) with size rel (0, 1.0, 15, -30) (`nw/00001.c:20037,20071,20087-20088`).
- [O] `SetScrollBarPosition(x, y, bottom)` (0x10032f10, `nw/00001.c:19773-19778`):
  - up: anchor 1 (TOP_LEFT) at (x, y), 15×15;
  - slider: anchor 1 at (x, y+15), size `SetWindowSizeRel(0, 1.0, 15, bottom - y - 30)`, i.e. width 15 and height `H + bottom - y - 30`;
  - down: anchor 7 (BOTTOM_LEFT) at (x, bottom), 15×15.
  - [I] Anchor ints follow the xdat `Alignment` enum (NONE=0, TOP_LEFT=1, …, BOTTOM_LEFT=7, BOTTOM_RIGHT=9; `ext/src/xdat_schema_ct0/Alignment.groovy`). The geometry closes exactly (slider bottom = down-button top), which confirms it.
- [O] ChatWindow uses the **left side**. `NCChatListBox::OnCreate` calls `SetScrollBarPosition(5, 10, 0)` (`nw/00011.c:877`). `ChatWnd.uc:120-127` (called from `:72`) re-sets the 5 tabs to `(5, 10, -25)`. `SystemMsgList` keeps `(5, 10, 0)`.

| Control | Up | Slider | Down |
|---|---|---|---|
| ChatWnd tabs, H=141 | x 5..20, y 10..25 | y 25..101 (H-65 = 76) | y 101..116 |
| SystemMsgList, H=125 | x 5..20, y 10..25 | y 25..110 (height H-40 = 85) | y 110..125 |
- [O] Visibility (`ShowWindow` slot 78, 0x10032530, `nw/00001.c:19183-19190`): if `0x324 == 0`, all three parts are hidden. For ChatWindow `0x324 = 1`, so **the up/down arrows are always shown** with the list. The slider is shown **only when `count > visibleRows`** and hidden otherwise (`FUN_10049a00`, `nw/00002.c:11803-11820`).
- [O] Thumb (`FUN_10049a00`, `asm @10049a1b-10049abd`; `NCSliderBar::OnPaint` 0x10049ec0, `nw/00002.c:12124-12136`):
  - thumb height = `(int)(visible * sliderH / count)`, minimum 15; travel = `sliderH - thumbH`; thumb y = `travel * top / (count - visible)` (`FUN_10049b50` `nw/00002.c:11882-11891`);
  - drawn as Top cap 15×8 at thumbY, Bottom cap 15×8 at `thumbY + thumbH - 8`, Center stretched 15×(thumbH-16) from a 15×8 source;
  - **no groove/track texture** is drawn.
- [O] Up/Down click (`nw/00001.c:19623-19631`, `19676-19684`): ±1 line, clamped to [0, count-visible]; only active when `count > visible`. `FUN_10032ea0` → `FUN_10032e70(200)` writes 200 into both buttons' `+0x340` (`nw/00001.c:19719-19725`). The named `NCScrollWnd::SetScrollButtonTime` writes the same field (`nw/00002.c:6664-6666`). [I] 200 is the held-button repeat interval in ms.
- [O] Mouse wheel (`NCListBox` slot 113, 0x10032c50, `nw/00001.c:19578-19602`; `asm @10032c50-10032c6c`): `n = (short)HIWORD(wParam) / 120`, truncated toward 0, so **1 line per 120-unit notch**.
  - Forward (n > 0): top -= n, clamped at 0.
  - Backward: top += |n|, clamped at `count - visible`; if count ≤ visible, top = 0.
- [O] No keyboard scrolling: slot 102 is plain `NCWnd::OnKeyDown`.
- [I] Dragging the slider sets top through slot 130 (`FUN_10032390`: `top = param`).
- [O] Mouse hit test (slot 126, 0x10032b60) uses pitch `lineGap + 12` (`nw/00001.c:19547`). That is one more than the paint pitch; it only feeds the selection index 0x310. NCChatListBox's inherited OnPostPaint draws a highlight only when the entry's +0xc ≠ 0, and AddString never sets it (`nw/00001.c:19482-19489`). [I] Chat has no selection highlight.

### 4. Capacity and auto-scroll
- [O] Max stored lines per ChatWindow: **200 wrapped lines** (`0x304`). Each of the 5 tabs and `SystemMsgList` has its own buffer.
- [O] Adding a line (`nw/00001.c:20339-20355` and `20386-20411`, `asm @10033ada-10033b00`):
  - not full: `count++`; if `count > visible`, then `top++`;
  - full: delete entry 0 (the oldest) and keep `top`.
- [O] There is **no "follow only when at bottom" check** in this path. The flag at `+0x320` is tested only by the other add function 0x100337f0.
- [I] Effect: the distance from the bottom (`count - top - visible`) stays constant.
  - At the bottom, the view keeps following new lines.
  - Scrolled up by k lines, it stays k lines above the newest, so the displayed text shifts up one line per new wrapped line. The view is **not** frozen.
  - Once full, eviction is per wrapped line, so the oldest message can lose its first line while its continuation lines remain.
- [O] `Clear` (slot 93, 0x10033700, `nw/00001.c:20173-20190`) empties the buffer, sets top = 0 and selection = -1, and resets the slider.

### 5. Font, color, shadow
- [O] Font slot 0 is used both for measuring (`FUN_100223d0(...,0)`) and for drawing (`DrawTextToCanvas` L2FontType 0 → `UCanvas::DrawNormalText` uses `this+0x13c+type*4`, `en/00007.c:27203`).
- [O] Slot 0 is loaded at canvas init from `<GCountryName>_Font` / `<GCountryName>_Glyph`, defaulting to `L2Font.smallfont` / `smallfont.gly`; slot 1 is `_Font2` (LargeFont) (`en/00025.c:6895-6966`).
- [O] With `Language=1` → `[English] English_Font=L2Font-r.SmallFont-r`, `English_Glyph=SmallFont-r.gly` (`System\Localization.ini`).
- [I] So **chat = `L2Font-r.SmallFont-r`, bitmap**. This contradicts the spec's `l2.ini [FontSet] Font=L2Font.gulim`: no code reading `FontSet` was found in the Engine/NWindow/Core decompilations.
- [I] The TrueType path (`GIsTrueFontUse`) only toggles through a console exec (`en/00005.c:11937`); default assumed off.
- [I] Weak parse of `System\SmallFont-r.gly`: header `(1024, 128, 2, 0, 256, -1)`, 4-int records `(y, h, x, w)`; cell height 13, space width 3, 'A' width 7. Verify before relying on it.
- [O] No shadow or outline: `DrawNormalText` emits one `FCanvasUtil::DrawTile` per glyph (`en/00007.c:27500-27502`) and nothing else.
- [O] The ChatListBox draw call uses:
  - `param_11 = 0`, so backticks are literal (in TextListBox, param 1 makes `` `…` `` a symbol-texture escape, `en/00007.c:27254-27315`);
  - `param_9 = 0`, so no extra +6 px between wrapped lines (`:27259-27260`);
  - `param_12 = 0`, so no underline;
  - `param_20 = -1`, so proportional advance.
- [O] Color is the ARGB passed to AddString (`ChatWnd.uc` forces A=255), masked with the final alpha. Special case: if color == 0xFF000000, the canvas sets `+0x64 = 0xFF555555` (`en/00007.c:27204-27206`). [?] Purpose unknown; it does not matter for chat colors.

### 6. Not determined / what was checked
- [?] Glyph metrics: only the weak `.gly` parse above. There is no NWindow-side constant for font height, and the row pitch (15) and visible-row formula (/15) are hard-coded instead.
- [?] `SetWindowStyle` forces style bit 8 on NCChatListBox (`nw/00011.c:247`). Meaning unknown.
- [?] The `DrawChildWindow` transparency gate `DAT_103663bc+0x50ac`, and which windows carry style 0x2000000.
- [?] Whether `[Neophron] ChatTransparency` (a third-party key) changes anything. It is absent from all stock binaries; the encrypted `.u` packages were not checked.
- [?] The exact held-button repeat semantics of `+0x340 = 200`.
- Checked:
  - function map (ChatWindow/TextList/NCChat/ScrollBar/NCScroll/ChatListBox);
  - vtable diffs 0x1027cb1c vs 0x1023c4fc;
  - XML creators and readers;
  - the script natives (`UChatWindowHandle::execEnableTexture` 0x1012be90 `nw/00010.c:11584-11587`, `execSetScrollBarPosition` 0x1012bf80 `:11663-11666`, `UTextListBoxHandle::execAddString`);
  - the Engine `FL2TextAlignParser`, `UCanvas::DrawTextToCanvas` (`en/00008.c:30611-30692`), `DrawNormalText` and the font init;
  - Option/Localization/l2.ini;
  - `ChatWnd.uc`.

Helper scripts (scratchpad): `fn.py` (extract a function with file:line), `asm.py` (capstone + x87 constants), `vt.py` (NWindow vtable dump/diff), `vt2.py` (Engine disassembly).

