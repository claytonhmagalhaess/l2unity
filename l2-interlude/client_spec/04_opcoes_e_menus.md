# 04 — Menu de Configurações (OptionWnd) e Menus do Jogo

Seção da especificação para recriar o HUD do cliente Lineage II Interlude. Todo o conteúdo vem do cliente instalado em `C:\Program Files (x86)\Lineage II Interlude`, já extraído no projeto.

**Legenda de evidência**
- **[O] Observado**: está no código ou no dado. Cito `arquivo:linha`. Os `.uc` ficam em `export\uc\Interface\` (ou `export\uc\NWindow\` quando indicado), os layouts em `out\re\layout\` e os INIs em `export\client_cfg\`.
- **[I] Inferido**: dedução minha. Digo de onde ela vem.
- **[N] A validar no nativo**: o comportamento está no C++ (NWindow.dll / Engine.dll), e esse código não está disponível aqui.

Textos de `sysstring` (ss) e `systemmsg` (sm) foram resolvidos em `out\re\strings.json`, cliente em inglês (`-e`).

---

## 1. Visão geral

| Janela | Classe `.uc` | Layout | Estado(s) | Papel |
|---|---|---|---|---|
| `OptionWnd` | `OptionWnd.uc` (extends UIScript) | `OptionWnd.txt` + `VideoTab.txt`, `AudioTab.txt`, `GameTab.txt` | `GamingState` e `LoginState` (`OptionWnd.uc:112-113`) | Opções com 3 abas: Video, Audio, Game |
| `SystemMenuWnd` | `SystemMenuWnd.uc` | `SystemMenuWnd.txt` | `GamingState` (unk103) | Menu do sistema (7 itens) |
| `MenuWnd` | `MenuWnd.uc` | `MenuWnd.txt` | `GamingState` | Barra de 4 botões no canto inferior direito |
| `RestartMenuWnd` | `RestartMenuWnd.uc` | `RestartMenuWnd.txt` | `GamingState` | Pontos de reinício ao morrer |
| `QuestBtnWnd` / `TutorialBtnWnd` / `MailBtnWnd` | `*.uc` homônimos | `*.txt` homônimos | `GamingState` | Botões piscantes de notificação, acima do chat |
| `BenchMarkMenuWnd` | `BenchMarkMenuWnd.uc` | `BenchMarkMenuWnd.txt` | `BenchMarkMenuState` | Menu do modo benchmark |
| `DialogBox` | `DialogBox.uc` + API em `UICommonAPI.uc` | `DialogBox.txt` | `GamingState` | Diálogo modal genérico (Restart/Exit usam este) |

Principais conclusões:
- [O] O OptionWnd de Interlude tem **só 3 abas**: Video (ss206), Audio (ss207) e Game (ss208) (`OptionWnd.txt`, TabCtrl). **Não existe aba de teclado/atalhos.** Os atalhos são fixos: vêm do `Interface.xdat` (`_shortcuts.txt`) e do `user.ini [Engine.Input]` (seção 7.4).
- [O] Toda persistência do OptionWnd passa por `Get/SetOption{Bool,Int,Float}(seção, chave)` (`NWindow\UIScript.uc:223-230`). Todas as seções e chaves usadas existem no `Option.ini` (seção 7.1). [I] Portanto essas natives leem e gravam o `Option.ini`.
- [O] OK, Cancelar e Aplicar se repetem em cada aba, mas o efeito é global: OK e Aplicar de **qualquer** aba aplicam Video + Audio + Game (`OptionWnd.uc:1191-1206`).

---

## 2. OptionWnd

### 2.1 Layout

[O] `OptionWnd.txt` e páginas de aba:

```
OptionWnd 256x480  âncora CENTER->pai.CENTER(0,0)   (unk111=146 "Options" -> [I] título da janela)
├─ Texture TabBackTex 256x28 @ (0,20)  L2UI_ch3.SSQWnd.ssq_back  layer=Background
├─ Tab TabCtrl 224x23 @ (12,25)  3 botões de aba 74x23, gap 1 (o último gap 0)
│     normalTex=l2ui_ch3.tabbutton.normal_tab_on  pushedTex=l2ui_ch3.tabbutton.normal_tab
│     aba0 ss206 "Video" -> VideoTab | aba1 ss207 "Audio" -> AudioTab | aba2 ss208 "Game" -> GameTab
├─ VideoTab 256x432 @ (0,48)  fundo L2ui_ch3.OptionWnd.option1_back
├─ AudioTab 256x432 @ (0,48)  fundo L2ui_ch3.OptionWnd.option2_back
└─ GameTab  256x432 @ (0,48)  fundo L2ui_ch3.OptionWnd.option3_back
```

- [O] Botões de rodapé em cada aba, todos 76x23 com `L2UI_CH3.BUTTON.BTN1_normal` / `BTN1_normalon`: OK (ss140) em (11,402), Cancel (ss141) em (91,402) e Apply (ss218) em (171,402).
  - [O] Nomes: `VideoOKBtn/VideoCancelBtn/VideoApplyBtn`, `AudioOKBtn/AudioCancelBtn/`**`VideoApplyBtn`** (bug de nome no xdat da AudioTab, inofensivo porque o handler é comum) e `GameOKBtn/GameCancelBtn/GameApplyBtn`.
- [O] Rótulos da aba Video: TextBox 98x19 em x=0, `textAlign=Right`, cor `#ffdcdcdc`. Combos 125x17 em x=107.
- [O] Os sprites `option{1,2,3}_back.png` medem 256x512 (`out\tool\ui\L2UI_CH3\OptionWnd\`). O conteúdo útil é 256x432: quatro painéis escuros separados por faixas cinza, com o rodapé dos botões. [I] A textura é desenhada 1:1 a partir de (0,0) (uSize/vSize=0) e o excesso fica fora da janela.
- [O] `_wnddefpos.txt:2`: posição padrão `OptionWnd CENTER x=0 y=0`. `WindowsInfo.ini:149-151` guarda a última posição (`posX=731 posY=278`).

### 2.2 Ciclo de vida e fluxo

1. **OnLoad** (`OptionWnd.uc:98-226`):
   - registra `EV_MinFrameRateChanged`, `EV_PartyMemberChanged`, `EV_PartyMatchRoomStart` e `EV_PartyMatchRoomClose`;
   - registra os estados `GamingState` e `LoginState`;
   - lê a versão de shader e a lista de resoluções; preenche ResBox, RefreshRateBox, AABox, LanguageBox e HDRBox (as opções extras de HDR);
   - chama `InitVideoOption`, `InitAudioOption` e `InitGameOption`.
   - [O] **Peculiaridade:** a linha 120 executa `SetOptionBool("Game","HideDropItem",false)` em todo carregamento. "Hide Dropped Item(s)" volta a `False` a cada início do cliente.
2. **OnShow** (`:775-789`): relê **todas** as opções do INI com `Init*Option`. Abrir a janela sempre mostra o estado persistido.
3. **OK** (`:1191-1199`): `ApplyVideoOption` + `ApplyAudioOption` + `ApplyGameOption`, depois `SetOptionInt("FirstRun","FirstRun",2)` e `HideWindow("OptionWnd")`.
4. **Aplicar** (`:1200-1206`): as mesmas três chamadas `Apply*`, sem fechar e sem gravar FirstRun.
5. **Cancelar** (`:1178-1190`): grava `FirstRun=2` e reverte **só o áudio**, chamando `OnModifyCurrentTickSliderCtrl` com os ticks guardados (`m_iPrev*Tick`). Depois fecha. Vídeo e Jogo não precisam de reversão porque só são gravados em OK ou Aplicar e o `OnShow` relê o INI.
   - [O] Efeito colateral: se o tick anterior de Música era 0, a reversão grava `MusicVolume=0.005`, não 0 (`:1345-1346`).
6. **Pré-visualização de áudio** (`:1333-1356`): arrastar um slider já chama `SetOptionFloat("Audio",...)` com `GetVolumeFromSliderTick` (tick 0..5 → 0.0/0.2/0.4/0.6/0.8/1.0, `:1214-1240`). Durante o arrasto, música 0 vira 0.005 "para a música não parar enquanto o slider se move" (comentário coreano decodificado). [I] `SetOptionFloat("Audio",...)` aplica o volume na hora, senão não haveria preview nem reversão no Cancelar. [N]
7. **ApplyVideoOption** termina com `InitVideoOption()` (`:985`), que relê o estado.
8. **Eventos** (`:1292-1319`):
   - `EV_MinFrameRateChanged`: relê `Video.IsKeepMinFrameRate`, ajusta o FrameBox, habilita ou desabilita controles e **chama `ApplyVideoOption()`**, que reaplica todas as opções de vídeo, inclusive `SetResolution`.
     - [I] O evento vem do atalho `P`/`Alt+P` = `ApplyMinFrame` (`_shortcuts.txt:58,77`). sm1283 e sm1284 ("The minimum frame option has been activated/deactivated") devem ser emitidas pelo nativo. [N]
   - `EV_PartyMemberChanged`, `EV_PartyMatchRoomStart` e `EV_PartyMatchRoomClose` chamam `RefreshLootingBox()`: o combo de loot fica desabilitado quando há party (`GetPartyMemberCount()>0`) ou quando o jogador está em sala de party matching (`:228-234`).
9. **OnComboBoxItemSelected("ResBox", i)** chama `ResetRefreshRate(w,h)`: repovoa as taxas de atualização daquela resolução e seleciona a **última** da lista (`:83-96`, `:1321-1330`).

### 2.3 Aba Video — tabela completa

INI = `Option.ini`. "Valor exportado" é o valor atual do `Option.ini` extraído, **não** necessariamente o padrão de instalação limpa ([N]).

| # | Controle (nome, pos) | Rótulo | Tipo | Valores (índice → significado) | Persistência (seção.chave) | Leitura → Gravação | Efeito / native chamada | Valor exportado |
|---|---|---|---|---|---|---|---|---|
| 1 | `ResBox` (107,11) | ss209 Resolution | Combo | Montado em runtime: `"W*H Cbit"` para cada item de `GetResolutionList` (`:118-126`) | [I] nativo grava `Video.GamePlayViewportX/Y`, `ColorBits` | `GetResolutionIndex()` (`:257-258`) → `SetResolution(resIdx, rateIdx)` (`:921-925`) | `SetResolution` (native, `UIScript.uc:198`), chamada **em todo OK/Aplicar**, mesmo sem mudança | `GamePlayViewportX=1718`, `Y=1031`, `ColorBits=32` (`Option.ini:2-3,17`) |
| 2 | `RefreshRateBox` (107,30) | ss351 Refresh Rate | Combo | `GetRefreshRateList(..., w, h)` → `"NHz"` | `Video.RefreshRate` | seleciona o item igual a `GetOptionInt("Video","RefreshRate")` (`:261-273`) → índice passado a `SetResolution` | idem | `75` (`:18`) |
| 3 | `GammaBox` (107,49) | ss210 Gamma | Combo (5) | 0 ss1233 Very High=1.2 · 1 ss1234 High=1.0 · 2 ss1235 Average=0.8 · 3 ss1236 Low=0.6 · 4 ss1237 Very Low=0.4 | `Video.Gamma` (float) | faixas `>=1.2→0`, `[1.0,1.2)→1`, `[0.8,1.0)→2`, `[0.6,0.8)→3`, `<0.6→4` (`:275-286`) → `SetOptionFloat` (`:846-866`) | só SetOption (sem setter dedicado) [N] | `1.000000` (`:11`) |
| 4 | `TextureBox` (107,68) | ss211 Texture | Combo (3) | 0 ss224 High · 1 ss225 Average · 2 ss226 Low | `Video.TextureDetail` | `Clamp(0..2)` (`:311-313`) → `:826-828` | `SetTextureDetail(n)` (`:973`); com MinFrame, `SetTextureDetail(2)` (`:959`) | `0` |
| 5 | `ModelBox` (107,87) | ss594 Modeling Detail | Combo (2) | 0 High · 1 Low (ss224/226) | `Video.ModelDetail` | `:315-317` → `:830-832` | `SetModelingDetail` (`:974`; MinFrame→1) | `0` |
| 6 | `AnimBox` (107,106) | ss607 Motion Detail | Combo (2) | 0 High · 1 Low | `Video.SkipAnim` | `:319-321` → `:834-836` | `SetMotionDetail` (`:975`; MinFrame→1) | `1` |
| 7 | `TerrainBox` (107,139) | ss214 Terrain Range | Combo (5) | 0 ss1238 Very Wide · 1 ss1239 Wide · 2 ss1240 Average · 3 ss1241 Narrow · 4 ss1242 Very Narrow | `Video.TerrainClippingRange` (índice) | `:292-294` → `:842-844` | `SetTerrainClippingRange` (`:978`; MinFrame→4) | `0` |
| 8 | `CharBox` (107,158) | ss215 PC/NPC Range | Combo (5) | mesmos valores do #7 | `Video.PawnClippingRange` | `:288-290` → `:838-840` | `SetPawnClippingRange` (`:979`; MinFrame→4) | `0` |
| 9 | `PawnBox` (107,177) | ss540 PC/NPC Limit | Combo (6) | 0 ss27 None→6 · 1 Very High→5 · 2 High→4 · 3 Average→3 · 4 Low→2 · 5 Very Low→1 | `Video.RenderActorLimited` | `>=6→0 … <=1→5` (`:349-362`) → `:888-911` | só SetOption [N] | `6` (= sem limite) |
| 10 | `FrameBox` (25,199) | ss370 Lower Detail ("manter quadro mínimo") | Checkbox (maxWidth 100) | bool | `Video.IsKeepMinFrameRate` | `:378-384` → `:953-955` | Ligado: força Texture=2, Model=1, Motion=1, Shadow=off, Deco=off, Terrain=4, Pawn=4, Reflection=0, HDR=0, Weather=0 via setters nativos (`:956-969`), **sem** gravar esses valores no INI, e desabilita os combos (`MinFrameRateOn`, `:1244-1259`). Ao clicar, só alterna o enable (`:741-746`) | `True` (`:21`) |
| 11 | `ReflectBox` (107,229) | ss352 Reflections | Combo (3) | 0 ss27 None · 1 ss353 All · 2 ss354 Sky | `L2WaterEffect.EffectType` + `L2WaterEffect.IsUseEffect` | `!IsUseEffect→0`, senão o `EffectType` (1/2) (`:323-343`) → `EffectType=idx`, `IsUseEffect=(idx!=0)` (`:880-886`) | `SetReflectionEffect(idx)` (`:980`). **Desabilitado e forçado a 0 se `PixelShader<12` (1.2)** (`:324-328`) | `EffectType=0`, `IsUseEffect=False` (`:61-62`) |
| 12 | `AABox` (107,248) | ss868 Anti-Aliasing | Combo (dinâmico) | `GetMultiSample()`: 0→[ss869 None] desabilitado · 1→[None, ss870 2X] · 2→[None, 2X, ss871 4X] (`:138-156`) | `Video.AntiAliasing` | só habilita se `MultiSample>0` **e** `PostProc` fora de 3..5 (HDR); senão fica 0 e desabilitado (`:364-376`) → `:913-915` | só SetOption [N] (provável reset de device) | `0` |
| 13 | `ShadowBox` (25,270) | ss212 Shadows | Checkbox | bool | `Video.PawnShadow` | `:307-309` → `:876-878` | `SetShadow(b)` (`:976`) | `False` |
| 14 | `DecoBox` (135,270) | ss213 Ground Detail | Checkbox | bool | `Video.RenderDeco` | `:296-298` → `:872-874` | `SetBackgroundEffect(b)` (`:977`) | `False` |
| 15 | `GPUAnimationCheckBox` (25,287) | ss1417 GPU Animation | Checkbox | bool | `Video.GPUAnimation` | `:397-404`; **desabilitado e falso se `VertexShader<20` (2.0)** → `:949-951` | só SetOption [N] | `True` |
| 16 | `TriBox` (135,287) | ss464 Texture Filter | Checkbox | bool (trilinear) | `Video.UseTrilinear` | `:345-347` → `:822-824` | só SetOption [N] | `True` |
| 17 | `CaptureBox` (107,317) | ss979 Screenshot | Combo (4) | 0 ss980 Bitmap · 1 ss981 High · 2 ss982 Average · 3 ss983 Low | `Game.ScreenShotQuality` (seção **Game**) | `:386-388` → `:917-919` | só SetOption. [I] BMP ou JPEG com qualidade decrescente; a tecla `PrintScrn=OnRelease shot` (`user.ini:138`) | `1` |
| 18 | `HDRBox` (107,336) | ss1229 Shader | Combo (3 ou 6) | do xdat: 0 ss869 None · 1 ss867 Glow Effect A · 2 ss1246 Glow Effect B; se `CanUseHDR()`, mais 3 ss1230 HDR Rendering A · 4 ss1231 B · 5 ss1232 C (`:214-219`) | `Video.PostProc` | se fora de 0..5 → 0 (`:300-305`) → `:868-870` | `SetHDR(idx)` (`:981`). `MinFrameRateOff` só habilita se `PS>=20 && VS>=20`, senão força 0 (`:1283-1289`) | `0` |
| 19 | `WeatherEffectComboBox` (107,355) | ss1418 Weather Effects | Combo (4) | 0 ss869 None · 1 ss224 High · 2 ss225 Average · 3 ss226 Low | `Video.WeatherEffect` | `:393-395` → `:930-947` (mapeamento 1:1) | `SetWeatherEffect` (`:982`; MinFrame→0) | `0` |

**Ordem de aplicação** [O] (`:822-984`): TriBox, Texture, Model, Anim, Char, Terrain, Gamma, HDR, Deco, Shadow, Reflect, Pawn, AA, Capture, `SetResolution`, Weather, GPU, FrameBox + setters, `InitVideoOption`.

**Opções de vídeo ausentes da UI** [O]: não há controle de modo janela/tela cheia, VSync, brilho ou contraste.
- `Video.StartupFullScreen=False` (`Option.ini:4`) existe, mas nenhum `.uc` o grava.
- [I] Alternância de janela/tela cheia é nativa (Alt+Enter do engine UE2) [N].
- Brilho, contraste e gama finos existem só como aliases de console no `user.ini` (seção 7.4).

### 2.4 Aba Audio

| Controle (pos) | Rótulo | Tipo | Valores | Persistência | Leitura → Gravação | Efeito | Exportado |
|---|---|---|---|---|---|---|---|
| `EffectVolumeSliderCtrl` (107,11) 128x16 | ss216 SFX Vol. | Slider, `numOfTick=6`, `currTick=2` no xdat | tick 0..5 ↔ 0.0..1.0 em passos de 0.2 | `Audio.SoundVolume` | float→tick por faixas de 0.2 (`:433-450`) → `:1005-1009` | preview ao arrastar (`:1341-1343`) | `0.200000` |
| `MusicVolumeSliderCtrl` (107,30) | ss217 Music Vol. | Slider 6 ticks | idem (tick 0 = 0.005 durante o arrasto) | `Audio.MusicVolume` | `:453-470` → `:1011-1015` | idem | `0.200000` |
| `SystemVolumeSliderCtrl` (107,49) | ss977 System Voice | Slider 6 ticks | idem | `Audio.WavVoiceVolume` | `:472-489` → `:1017-1021` | idem | `0.200000` |
| `TutorialVolumeSliderCtrl` (107,68) | ss978 Tutorial Voice | Slider 6 ticks | idem | `Audio.OggVoiceVolume` | `:492-509` → `:1023-1027` | idem | `0.200000` |
| `mutecheckbox` (40,91) 150x25 | ss1444 Mute all sounds. | Checkbox | bool | `Audio.AudioMuteOn` | `:420-428` → `:1036-1047` | Marcado: desabilita os 4 sliders (`:747-771`). No OK/Aplicar chama `SetSoundVolume(0)`, `SetMusicVolume(0)`, `SetWavVoiceVolume(0)` e `SetOggVoiceVolume(0)` (`UIScript.uc:264-267`). **Os volumes dos sliders continuam gravados.** O `OnShow` com mute ativo também zera (`:526-545`) | `True` |

- [O] Se `!CanUseAudio()`, os sliders são desabilitados (`:516-522`) e `ApplyAudioOption` retorna sem fazer nada (`:1002-1003`).
- [O] **Bug:** o ramo "mute desligado" (`:547-557`) reabilita os sliders mesmo sem dispositivo de áudio.
- [O] Ao desmutar, o script não restaura os volumes por setter: o bloco que fazia isso está comentado em `:1049-1057`. [I] A restauração depende de `SetOptionFloat("Audio",...)` aplicar o volume, o que ocorre nas linhas `:1008-1026`, antes do teste de mute. [N]
- [O] Slider (xdat): `backTexture=L2UI_CH3.Button.slider_back` (128x16), `thumbBtnNormalTexture=…slider_cursor` (8x16), `thumbBtnDownTexture=…slider_cursor_down`, `tickTexture=…slider_mark`, `thumbBtnWidth=8`, `thumbBtnHeight=16`, `pushBtnAutoHitTime=300`.

### 2.5 Aba Game

| Controle (pos, tam) | Rótulo | Tipo | Valores | Persistência | Leitura → Gravação | Efeito / consumidor | xdat `checked` | Exportado |
|---|---|---|---|---|---|---|---|---|
| TextBox (8,15) | ss478 Interface | rótulo | — | — | — | — | — | — |
| `WindowInitBtn` (87,11) 66x21, `smallbutton2` / `_down` | ss479 Initialize | Botão | — | [I] reescreve `WindowsInfo.ini` | — | `SetDefaultPosition()` (native, `:1207-1209`): [I] reposiciona as janelas conforme `_wnddefpos.txt` [N] | — | — |
| `OpacityBox` (164,15) 100x12 | ss927 Transparent | Checkbox | bool | `Game.TransparencyMode` | `:567-569` → `:1098-1100` | só SetOption. Nenhum `.uc` lê a chave → [N] transparência de janelas no nativo | true | `False` |
| TextBox (0,49) + `LanguageBox` (87,46) | ss329 Language | Combo (1–2) | por `GetLanguage()` (`:158-212`): idioma nativo (Korean/Japanese/"Chinese(Taiwan)"/China/Thai) + "English"; em `LANG_English` e `LANG_Philippine` só "English". Habilitado só se `IsEnableEngSelection()` | `Game.IsNative` | `IsNative→idx0`, senão idx1 (`:571-576`) → `:1066-1071` | só SetOption. [I] dispara `EV_LanguageChanged` (1900, nativo `10164610`), que faz SystemMenuWnd e outros recarregarem textos [N] | — | `True` |
| TextBox (0,82) | ss435 Display | rótulo | — | — | — | — | — | — |
| `NameBox0` (84,82) | ss436 Player | Checkbox | bool | `Game.MyName` | `:578-580` → `:1073-1075` | nativo (nameplates) | true | `True` |
| `NameBox1` (84,96) | ss437 Monsters | Checkbox | bool | `Game.NPCName` | `:582-584` → `:1077-1079` | nativo | true | `True` |
| `NameBox2` (84,113) | ss438 Other PCs | Checkbox (mestre) | bool | `Game.GroupName` | `:586-588` → `:1093-1096` (gravado **por último**, de propósito, segundo o comentário) | habilita ou desabilita NameBox3-5 (`:602-613`, `:715-728`) | true | `True` |
| `NameBox3` (95,130) | ss439 Clan | Checkbox (filho) | bool | `Game.PledgeMemberName` | `:590-592` → `:1081-1083` | nativo | true | `True` |
| `NameBox4` (95,147) | ss440 Party | Checkbox (filho) | bool | `Game.PartyMemberName` | `:594-596` → `:1085-1087` | nativo | true | `True` |
| `NameBox5` (95,164) | ss441 General | Checkbox (filho) | bool | `Game.OtherPCName` | `:598-600` → `:1089-1091` | nativo | true | `True` |
| `ZoneNameBox` (25,199) | ss1196 Show Region | Checkbox | bool | `Game.ShowZoneTitle` | `:662-664` → `:1118-1120` | nenhum `.uc` lê → [N] ZoneTitleWnd/nativo | true | `False` |
| `GametipBox` (135,199) | ss1456 **Disable** Game Tips | Checkbox | bool (**invertido**: marcado = dicas ocultas) | `Game.ShowGameTipMsg` | `:666-668` → `:1122-1124` | `GametipWnd.uc:152`: se `false`, mostra "Useful Information" (ss1455) e a dica; se `true`, limpa | true | `False` |
| `CursorBox` (25,218) | ss305 Graphic Cursor | Checkbox | bool | `Video.UseColorCursor` (seção **Video**) | `:654-656` → `:1141-1143` | nativo | true | `True` |
| `ArrowBox` (135,218) | ss928 3D Arrow | Checkbox | bool | `Game.ArrowMode` | `:658-660` → `:1102-1104` | nativo. [I] seta 3D de destino do clique | true | `True` |
| `EnterChatBox` (25,251) | ss442 Enter Chat | Checkbox | bool | `Game.EnterChatting` | `:615-617` → `:1110-1112` | `ChatWnd.uc:154-157`: após enviar, `ReleaseFocus()` (o chat só recebe digitação depois de Enter). [I] também libera atalhos de tecla única (`_shortcuts.txt:44-60`) [N] | true | `True` |
| `OldChatBox` (135,251) | ss566 Auto Code | Checkbox | bool | `Game.OldChatting` | `:619-621` → `:1114-1116` | `ChatWnd.uc:144-151` e `:315`: re-insere o prefixo do canal (`!`, `#`, `@`…) após enviar, fora da aba Normal | true | `True` |
| `KeyboardBox` (25,268) 100x17 | ss926 Key Security | Checkbox | bool | **não usa Option.ini**: `SetKeyCrypt(b)` | se `IsUseKeyCrypt()`: check=`IsCheckKeyCrypt()`, enable=`IsEnableKeyCrypt()`; senão falso e desabilitado (`:623-640`) → `:1164-1169` | native `SetKeyCrypt`. `l2.ini:32 L2UseKeyCrypt=true` | true | — |
| `JoypadBox` (135,268) | ss606 Game Pad | Checkbox | bool | `Game.UseJoystick` | `:642-648` (habilita se `CanUseJoystick()`) → `:1157-1162` (só grava se puder) | nativo. Binds `Joy*` em `user.ini:236-257` | true | (ausente no Option.ini) |
| `CameraBox` (25,302) | ss463 Tracking | Checkbox | bool | `Game.AutoTrackingPawn` | `:650-652` → `:1106-1108` | nativo. Ver `user.ini:381 bUseAutoTrackingPawn` e aliases `UseAutoTrackingPawnOn/Off` (`user.ini:10-11`) | true | `False` |
| `DuelBox` (135,302) 120x12 | ss1476 Decline Duels | Checkbox | bool | `Game.IsRejectingDuel` | `:670-672` → `:1126-1128` | `DuelManager.uc:110-118`: se `true`, responde `RequestDuelAnswerStart(type,1,0)` automaticamente | false | `False` |
| `DropItemBox` (25,320) 120x12 | ss1472 Hide Dropped Item(s) | Checkbox | bool | `Game.HideDropItem` | `:674-676` → `:1130-1132` | nativo. **Resetado a false em todo OnLoad** (`:120`) | false | `False` |
| TextBox (0,377) + `LootingBox` (87,374) | ss486 Party Loot | Combo (5) | 0 ss487 Finders Keepers · 1 ss488 Random · 2 ss798 Random including spoil · 3 ss799 By turn · 4 ss800 By turn including spoil | `Game.PartyLooting` | `:703-706` → só grava se o combo estiver habilitado (`:1134-1139`) | [I] enviado como `itemDistribution` em `RequestJoinParty` (aCis `RequestJoinParty.java:20-21`; a ordem coincide com `enums/LootRule.java:7-11`) [N] | — | `0` |

**Opções fantasma** [O]: `ApplyGameOption` também grava `Game.SystemMsgWnd`, `SystemMsgWndDamage` e `SystemMsgWndExpendableItem` lendo `OptionWnd.SystemMsgBox`, `DamageBox` e `ItemBox` (`:1145-1155`). **Esses controles não existem** no layout do OptionWnd: existem só em `ChatFilterWnd` (`ChatFilterWnd.uc:135-145`, `ChatWnd.uc:796-806`). A leitura em `InitGameOption` está comentada (`:678-701`). [N] Falta saber o que `UIAPI_CHECKBOX.IsChecked` devolve para um controle inexistente: se for `false`, todo OK do OptionWnd desliga a janela de mensagens de sistema. O `Option.ini` exportado tem `SystemMsgWnd=True`, o que sugere que não. **Ao recriar: não gravar essas chaves a partir do OptionWnd.**

### 2.6 Exige reinício?

- [O] Nenhum `.uc` do OptionWnd mostra aviso de reinício nem chama `ExecRestart`. sm2191 ("To apply selected options, the game needs to be reloaded…") existe no `systemmsg`, mas **não é referenciada** em nenhum `.uc`.
- [I] Aplicação imediata, porque um setter nativo é chamado logo após gravar a opção: resolução/refresh, texture, model, motion, shadow, deco, terrain/pawn range, reflection, HDR, weather, volumes e KeyCrypt.
- [I] Aplicação imediata, porque o script lê a chave no momento do uso: `EnterChatting`, `OldChatting`, `ShowGameTipMsg` (na próxima dica) e `IsRejectingDuel` (no próximo pedido).
- [N] Só `SetOption*`, sem setter dedicado, com efeito desconhecido: Gamma, RenderActorLimited, AntiAliasing, UseTrilinear, GPUAnimation, ScreenShotQuality, TransparencyMode, nomes, ShowZoneTitle, ArrowMode, AutoTrackingPawn, UseColorCursor, HideDropItem, UseJoystick, PartyLooting e IsNative. [I] A aplicação vale para TextureDetail no cliente oficial porque `SetTextureDetail` é chamado, mas pode exigir reupload de texturas.

---

## 3. SystemMenuWnd (menu do sistema)

[O] Layout `SystemMenuWnd.txt`:
- janela 172x295, âncora `BOTTOM_RIGHT->pai.BOTTOM_RIGHT(0,-46)`, logo acima do MenuWnd, que tem 46 px de altura;
- fundo `L2UI_CH3.SystemMenuWnd.systemmenu_back` (unk101; sprite 256x512, área útil ~172x275 com 7 faixas alternadas);
- [I] título: unk111=446 = ss446 "System Menu";
- [I] ícone do título: unk136=`L2UI_CH3.MenuIcon.Menuicon4`;
- padrão em `_wnddefpos.txt:32`.

Cada item é um botão 36x36 em x=13 (texturas `systemiconN` / `systemiconN_down`; existe também `_over`, não referenciado) mais um TextBox 121x25 em x=51, alinhado à esquerda, cor `#ffdcdcdc`. Passo vertical de 37 px.

| y botão | Botão | Ícone | Rótulo (TextBox) | Ação (`SystemMenuWnd.uc`) |
|---|---|---|---|---|
| 29 | `btnBBS` | systemicon1 | `txtBBS` ss387 "Community" + **"(Alt+B)"** (`:122`) | `ExecuteEvent(EV_ShowBBS, "Init=1")` (`:70-75`). `BoardWnd.uc:64-89`: com `Init>0`, alterna a janela; ao abrir, trava a página e chama `RequestBBSBoard()` |
| 66 | `btnMacro` | systemicon2 | `txtMacro` ss711 "Macro" + **"(Alt+R)"** (`:123`) | `ExecuteEvent(EV_MacroShowListWnd)` → `MacroListWnd` (`MacroListWnd.uc:51-53`) |
| 103 | `btnHelpHtml` | systemicon3 | ss145 "Help" | `ExecuteEvent(EV_ShowHelp, "FilePath=..\\L2text\\help.htm")` (`:77-82`). `HelpHtmlWnd.uc:38-58`: alterna e carrega o HTML local |
| 140 | `btnPetition` | systemicon4 | ss470 "Petition" | alterna `UserPetitionWnd` com `PlayConsoleSound(IFST_WINDOW_OPEN/CLOSE)` e `SetFocus` (`:89-102`) |
| 177 | `btnOption` | systemicon5 | ss146 "Options" | alterna `OptionWnd` com som e foco (`:104-117`) |
| 214 | `btnRestart` | systemicon6 | ss147 "Restart" | `DialogHide()`, `DialogShow(DIALOG_Warning, sm126 "Do you wish to exit to the character select screen?")`, `DialogSetID(0)` (`:31-35`) |
| 251 | `btnQuit` | systemicon7 | ss148 "Exit Game" | `DialogHide()`, `DialogShow(DIALOG_Warning, sm125 "Do you wish to exit the game?")`, `DialogSetID(1)` (`:36-40`) |

- [O] Confirmação (`:44-63`): em `EV_DialogOK` com `DialogIsMine()`, ID 0 → `HideWindow("SystemMenuWnd")` + `ExecRestart()`; outro ID → `ExecQuit()`. Cancelar não tem handler: o diálogo só fecha.
- [I] `ExecRestart` envia `RequestRestart` (C→S 0x46, sem corpo; aCis `RequestRestart.java:16-18`) e espera `RestartResponse` (S→C 0x5f, `writeD(ok)`) para voltar à seleção de personagem. `ExecQuit` envia `Logout` (0x09) e fecha. O engine tem `UNetworkHandler::RequestRestart` e `SendLogOutPacket` (`out\re\engine_network_and_console.txt:249,307`). [N]
- [O] `EV_LanguageChanged` chama `SetMenuString()` de novo (`:64-67`).
- [O] `Shortcut.uc:207-210`: o comando `CloseAllWindow` (Alt+W) esconde o SystemMenuWnd. [N] As outras janelas são fechadas pelo nativo.
- [O] Abertura: `MenuWnd.BtnSystemMenu` ou os atalhos `X`/`Alt+X` = `ShowSystemMenuWindow` (`_shortcuts.txt:51,67`). [N] O comando é tratado no nativo; nenhum `.uc` o processa.

---

## 4. MenuWnd (barra do canto inferior direito)

[O] `MenuWnd.txt`:
- janela 173x46, âncora `BOTTOM_RIGHT->pai.BOTTOM_RIGHT(0,0)` (padrão `_wnddefpos.txt:4`);
- fundo em 3 fatias: `Smallwindow_back1` 16x46 em x=12, `Smallwindow_back2` 129x46 em x=28 (Stretch, uSize 16, vSize 46) e `Smallwindow_back3` 16x46 em x=157. Os sprites medem 16x64.
- botões 34x34 em y=6 com texturas `L2UI_CH3.MenuIcon.menuButtonN`, `_down` (pushed) e `_over` (highlight); tooltip `popupType=Text`.

| x | Botão | Tooltip (popupValue) | Ação (`MenuWnd.uc`) | Som | Atalho equivalente (`_shortcuts.txt`) |
|---|---|---|---|---|---|
| 20 | `BtnCharInfo` (defaultSoundOn=0) | ss434 "Character Status (Alt+I)" | alterna `MainWnd` (`ShowWindowWithFocus` / `HideWindow`) (`:26-38`) | `InterfaceSound.charstat_open_01` / `charstat_close_01` | `I`/`Alt+I` ShowMainWindow (`:55,74`); `T`/`K`/`C`/`U`/`N` (+Alt) abrem as abas Status, Skill, Action, Quest e Pledge (`:46-50,62-66`) |
| 57 | `BtnInventory` | ss195 "Inventory (Alt+V)" | alterna `InventoryWnd` (`:40-52`) | `inventory_open_01` / `inventory_close_01` | `V`/`Alt+V` (`:45,61`); `Tab` = TabShowInventoryWindow (`:44`) |
| 94 | `BtnMap` | ss925 "Map (Alt+M)" | `RequestOpenMinimap()` (native, `:54-57`) | (nativo) | `M`/`Alt+M` RequestOpenMinimap (`:56,75`) |
| 131 | `BtnSystemMenu` | ss193 "System (Alt+X)" | alterna `SystemMenuWnd` (`:60-72`) | `system_open_01` / `system_close_01` | `X`/`Alt+X` (`:51,67`) |

- [O] Os outros atalhos de janela do `GamingStateShortcut` ficam em `_shortcuts.txt:42-79`. Todos são comandos nativos, exceto `CloseAllWindow`, `ShowChatWindow`, `SetPrevChatType` e `SetNextChatType`, tratados em `Shortcut.uc:43-69` via `EV_ShortcutCommand` (90):
  - `Escape` TargetCancel
  - `Enter` FocusChatWindow
  - `B`/`Alt+B` ShowBoardWindow
  - `R`/`Alt+R` ShowMacroListWindow
  - `G`/`Alt+G` ShowGMWindow
  - `O`/`Alt+O` ShowGMPetitionWindow
  - `F`/`Alt+F` ShowPartyBuff
  - `P`/`Alt+P` ApplyMinFrame
  - `Y`/`Alt+Y` ShowMessengerWindow
  - `Alt+J` ShowChatWindow
  - `Alt+H` HideAllWindow
  - `Alt+W` CloseAllWindow
  - `Alt+1..0` / `Alt+F1..F10` SetShortcutPage
  - `Alt+PageUp/PageDown` troca o tipo de chat
- [O] Existem também `menuicon1..4` 32x32 em `MenuIcon`, não usados pelo MenuWnd. O `menuicon4` é o ícone de título do SystemMenuWnd.

---

## 5. RestartMenuWnd (morte e reinício)

[O] `RestartMenuWnd.txt`:
- janela 128x128, `CENTER->pai.CENTER(0,0)` (padrão `_wnddefpos.txt:54`), fundo `L2UI_CH3.SystemMenuWnd.system2_back` (128x128);
- 5 botões 96x23 `L2UI_CH3.button.bigbutton` / `bigbutton_down`, âncora `TOP_CENTER` com x=0, empilhados a cada 24 px.

| y | Botão | Rótulo | Enum enviado | Visível se (EV_Die param > 0) |
|---|---|---|---|---|
| 6 | `btnVillage` | ss372 "To Village" | `RPT_VILLAGE` = 0 | `Village` |
| 30 | `btnAgit` | ss374 "To Clan Hall" | `RPT_AGIT` = 1 | `Agit` |
| 54 | `btnCastle` | ss375 "To Castle" | `RPT_CASTLE` = 2 | `Castle` |
| 78 | `btnBattleCamp` | ss373 "To Siege HQ" | `RPT_BATTLE_CAMP` = 3 | `BattleCamp` |
| 102 | `btnOriginal` | ss465 "Fixed" | `RPT_ORIGINAL_PLACE` = 4 | `Original` |

Enum em `NWindow\UIEventManager.uc:633-640`.

**Fluxo** [O] (`RestartMenuWnd.uc`):
1. `EV_Die` (50) chama `HandleDie(param)` (`:132-162`): faz `ParseInt` de `Village`, `Agit`, `Castle`, `BattleCamp` e `Original` e guarda os flags. **Não mostra a janela.**
2. `EV_RestartMenuShow` (1430) chama `ShowMe()` (`:179-208`): mostra a janela e faz `Show`/`Hide` de cada botão conforme os flags. Os botões ocultos **não** são reempilhados: as posições do xdat são fixas, então sobram buracos.
3. Clique: `RequestRestartPoint(tipo)` (`UIScript.uc:44`) e `HideMe()` (`:104-129`).
4. `EV_Restart` (40) ou `EV_RestartMenuHide` (1440) chamam `HideMe()`.
5. `OnEnterState` (`:49-59`): se `m_bRestartON`, mostra de novo. O menu sobrevive a uma troca de estado enquanto o jogador está morto.

**Pacotes** [I], cruzando com o servidor aCis (`ext\src\acis\...`):
- S→C `Die` 0x06: `writeD(objId)`, depois `toVillage=1`, `toClanHall`, `toCastle`, `toSiegeHQ`, `sweepable` e `fixed` (`serverpackets/Die.java`).
- [I] O nativo `101512c0` (`91_eventos_nativos.md`) monta o EV_Die com Village, Agit, Castle, BattleCamp e Original a partir desses campos, ignorando `sweepable`. [N] Falta confirmar o mapeamento e o filtro "só o meu personagem".
- C→S `RequestRestartPoint` 0x6d: `readD(type)`, com 0 = vila, 1 = clan hall, 2 = castelo, 3 = QG de cerco, 4 = fixo (só GM ou participante do festival) e 27 = prisão, imposto pelo servidor (`clientpackets/RequestRestartPoint.java:27,70-135`).
- **Fortaleza não existe em Interlude.** Ela não aparece no enum, no layout nem no pacote.
- Ressurreição por skill ou item (pedido de confirmação "X quer ressuscitá-lo") **não** está em nenhum `.uc` (nenhuma ocorrência de "resur/revive"). [N] É um diálogo nativo (ConfirmDlg).
- [N] Falta saber quando o nativo dispara `EV_RestartMenuShow`: logo após o Die ou com atraso.

---

## 6. Outros menus e diálogos

### 6.1 QuestBtnWnd / TutorialBtnWnd / MailBtnWnd

[O] São três janelas 32x32, cada uma com um `EffectButton` 32x32:
- texturas `L2UI_ch3.ConsoleBtn.{Quest,Tutorial,Mail}Btn`, `_down` e `_light` (highlight);
- `effectTex1/2` = `l2ui_ch3.etc.glowbtn1` / `glowbtn2`;
- `type` = 1 Quest, 0 Tutorial, 2 Mail.

| Janela | Âncora (xdat) | Evento | Param | Ação |
|---|---|---|---|---|
| `TutorialBtnWnd` | `ChatWnd` (5,-5) | `EV_ArriveNewTutorialQuestion` (1510) | `QuestionID` | `ShowWindowWithFocus` + `BeginEffect(btn, id)` (`TutorialBtnWnd.uc:8-21`) |
| `QuestBtnWnd` | `ChatWnd` (42,-5) | `EV_ArriveShowQuest` (1520) | `QuestID` | idem + `ShowWindow(btnQuest)` (`QuestBtnWnd.uc:8-22`) |
| `MailBtnWnd` | `ChatWnd` (79,-5) | `EV_ArriveNewMail` (1530) | `IdxMail` | idem (`MailBtnWnd.uc:8-21`) |

- [O] Clicar só esconde a própria janela (`OnClickButton` → `HideWindow`).
- [N] Abrir a janela de destino (TutorialViewerWnd, QuestTree, correio) é responsabilidade do nativo, possivelmente pelo `type` do EffectButton.
- [O] As âncoras mudam para `SystemMsgWnd` quando ela fica visível (`SystemMsgWnd.uc:30-48`): `SetAnchor(btn, alvo, "TopLeft", "BottomLeft", x, -5)`.
- [I] Pela assinatura `SetAnchor(Control, AnchorWnd, RelativePoint, AnchorPoint, ...)` (`NWindow\UIAPI_WINDOW.uc:41`), o canto inferior esquerdo do botão se prende ao canto superior esquerdo do alvo, 5 px acima. Os botões ficam sobre o chat. A notação `@TOP_LEFT->ChatWnd.BOTTOM_LEFT` do dump lista os pontos nessa ordem.

### 6.2 BenchMarkMenuWnd

[O] Janela 100%x100% com fundo `L2UI_CH3.BenchMarkWnd.BenchMark_Title` (Stretch, uSize 1024, vSize 768). Painel `BenchMarkFunctionWnd` 120x138 em `BOTTOM_RIGHT(-26,-98)` com fundo `L2UI_CH3.LobbyWnd.lobby_menuback`. Botões 96x23 `BigButton` / `BigButton_down` em x=13:

| y | Botão | Rótulo | Ação |
|---|---|---|---|
| 20 | `btnPlay` | ss1023 "Regeneration" ([I] má tradução de 재생 = "reproduzir") | `BeginPlay()` |
| 45 | `btnBenchMark` | ss1022 "Benchmark" | `BeginBenchMark()` |
| 70 | `btnOption` | ss156 "Options" | alterna OptionWnd |
| 95 | `btnExit` | ss153 "Exit" | `ExecQuit()` |

Natives em `UIScript.uc:394-395`.
- [N] O OptionWnd registra só `GamingState` e `LoginState`. Falta confirmar se aparece em `BenchMarkMenuState`.

### 6.3 DialogBox (usado por Restart/Exit)

[O] `DialogBox.txt`:
- janela 434x128 com fundo `Calculate12_back` (Stretch 100%);
- corpo `DialogBody` 306x128: `DialogText` 258x50 em (41,9), `DialogReadingText` 306x12 em (0,57) com cor `#ffe4ca7f`, `DialogBoxEdit` 156x17 e `DialogProgress` 222x6;
- botões 76x23: `OKButton` (-40,100), `CancelButton` (40,100) e `CenterOKButton` (0,100);
- `NumberPad` 128x128 em (306,0), só no tipo NumberPad.

Comportamento:
- Rótulos dos botões: ss1337 "Confirm" e ss1342 "Cancel" (`DialogBox.uc:155`).
- `DIALOG_Warning` mostra OK + Cancel e redimensiona a janela para o tamanho do corpo, 306x128 (`:293-297`). É centralizado (`:336`); só o tipo Progress fica ancorado embaixo (`:332`).
- OK → `EV_DialogOK` (1710). Cancel → `EV_DialogCancel` (1720) (`:352-370`).
- Enter sem `DialogSetDefaultOK()` age como **Cancelar** (comentário decodificado em `UICommonAPI.uc:40-42`).
- Só um diálogo pode estar ativo: `m_bInUse` (`DialogBox.uc:25-29`). Por isso o SystemMenuWnd chama `DialogHide()` antes de abrir o seu.
- O dono do diálogo é identificado por `string(Self)` (`UICommonAPI.uc:25-30`, `:50-57`).

### 6.4 PartyWndOption (opção fora do OptionWnd)

[O] Grava `Game.SmallPartyWnd` (`PartyWndOption.uc:72-82`), lido por `PartyWnd.uc:249` e `PartyWndCompact.uc:232`. A chave não aparece no `Option.ini` exportado. [I] `GetOptionBool` de uma chave ausente devolve `false`. [N]

---

## 7. Persistência

### 7.1 `Option.ini` (texto plano)

[O] Seções e chaves no arquivo exportado (`export\client_cfg\Option.ini`):

| Seção (linhas) | Chaves | Quem lê/grava (script) |
|---|---|---|
| `[Video]` (1-22) | GamePlayViewportX, GamePlayViewportY, StartupFullScreen, UseTrilinear, TextureDetail, ModelDetail, SkipAnim, PawnClippingRange, TerrainClippingRange, Gamma, PostProc, RenderDeco, PawnShadow, RenderActorLimited, AntiAliasing, ColorBits, RefreshRate, WeatherEffect, GPUAnimation, IsKeepMinFrameRate, UseColorCursor | OptionWnd (seção 2.3). Viewport, StartupFullScreen e ColorBits: [I] só o nativo |
| `[Game]` (24-51) | HideDropItem, IsShortcutWndVertical, IsLockShortcutWnd, Is1ExpandShortcutWnd, Is2ExpandShortcutWnd, ScreenShotQuality, IsNative, MyName, NPCName, PledgeMemberName, PartyMemberName, OtherPCName, GroupName, TransparencyMode, ArrowMode, AutoTrackingPawn, EnterChatting, OldChatting, ShowZoneTitle, ShowGameTipMsg, IsRejectingDuel, PartyLooting, SystemMsgWnd, SystemMsgWndDamage, SystemMsgWndExpendableItem, Is3ExpandShortcutWnd, Is4ExpandShortcutWnd | OptionWnd; `ShortcutWnd.uc:37-40,481-666` (barra de atalhos); `ChatFilterWnd.uc:135-145` (SystemMsg*); DuelManager; GametipWnd; ChatWnd |
| `[Audio]` (53-58) | SoundVolume, MusicVolume, WavVoiceVolume, OggVoiceVolume, AudioMuteOn | OptionWnd |
| `[L2WaterEffect]` (60-62) | EffectType, IsUseEffect | OptionWnd (ReflectBox) |
| `[ClippingRange]` (64-69) | Terrain=4.0, Actor=4.0, StaticMesh=2.0, StaticMeshLod=4.0, Pawn=1.0 (floats) | nenhum `.uc`. [I] o nativo deriva esses valores dos índices Terrain/PawnClippingRange (há locais `f*ClippingRange` comentados em `OptionWnd.uc:808-812`) [N] |
| `[FirstRun]` (71-72) | FirstRun=2 | OptionWnd grava 2 no OK e no Cancelar. [I] o nativo abre as opções no primeiro uso se ≠2 [N] |
| `[Key]` (74-80) | UseFPad, UseNumpad, UseQwerty, Panel1..3 | **nenhum `.uc`** → nativo ou modificação |
| `[AutoEnchant]`, `[Neophron]`, `[Potions]` (82-99) | Delay_*, DisplayAdena, AbnormalSize, ShowCount, ShowEvent, ShowDamage, SkillCastingBox, ShowClassLabels, ModernParty, ShowNoble, ChatTransparency, Type_HP | **nenhum `.uc`**. [I] vêm de interface ou patch de terceiros, não do Interlude oficial. `Is3/Is4ExpandShortcutWnd` também não aparecem em nenhum `.uc` (só Is1/Is2) |

- Formato: INI Windows. Booleanos `True`/`False`; floats com 6 casas (`1.000000`); CRLF.
- [I] As natives `Get/SetOption*` gravam aqui. Os exports `UUIScript::execGet/SetOption{Bool,Int,Float,String}` estão em `out\re\nwindow_exports.txt`. [N] Falta confirmar o momento do flush para disco (a cada Set ou ao sair).
- [O] O arquivo exportado vem de um cliente modificado: seções acima e sm102 com texto não oficial. **Não usar seus valores como padrão oficial.**

### 7.2 `l2.ini` (decifrado de Ver413)

Configuração do engine UE2, só leitura pela UI ([O] nenhum `.uc` referencia). Seções relevantes à UI:

| Seção | Conteúdo relevante |
|---|---|
| `[URL]` (1-35) | `IsL2Console=True`, `L2UseKeyCrypt=true` (KeyboardBox), `L2UseReplayManager=true`, `IsUseXMLUI=True`, `EnableSecondWindow=true`, `ForceAspectRatio/AspectRatio`, `IsUseCommand`, `ServerAddr` |
| `[L2WaterEffect]` (37-39) | ColorReference, EffectResolution=512 (complementa Option.ini) |
| `[LanguageSet]` (41-42) | Language=0 |
| `[FontSet]` (44-48) | Font=L2Font.gulim, Glyph=gulim.gly |
| `[CharacterDisplay]` (50-52) | Name=true, Dist=1000 |
| `[ClippingRange]` (54-63) | PawnMax, PawnMin, AntiPortal, Terrain, StaticMesh, Projector, StaticMeshLod, Pawn, Actor. [I] limites base do recorte |
| `[AutoLogOn]` (65-69) | IsL2AutoLogOn ("Ture", erro de grafia no original), L2ID, L2Passwd, L2Slot. Configuração de desenvolvimento, com credenciais de teste no arquivo |
| `[FirstRun]` (71-72) | FirstRun=2110 (diferente do Option.ini) [N] |
| `[Engine.Engine]` (74-101) | RenderDevice=D3DDrv, AudioDevice=ALAudio, `Console=Engine.Console`, `L2Console=NWindow.ConsoleWnd`, `L2Font=NWindow.L2Font`, `DefaultPlayerController=Engine.LineagePlayerController` |
| `[WinDrv.WindowsClient]` (147-178) | WindowedViewportX/Y, FullscreenViewportX/Y, Brightness, Contrast, Gamma, UseJoystick, StartupFullscreen=True, `MinDesiredFrameRate=35`, TextureDetail* |
| `[D3DDrv.D3DRenderDevice]` (307-331) | UseTrilinear, UseVSync=False, DesiredRefreshRate=60, LevelOfAnisotropy, UseTripleBuffering, ReduceMouseLag |
| `[ALAudio.ALAudioSubsystem]` (218-233) | Channels=32, MusicVolume=0.1, SoundVolume=1.0, UseEAX, Use3DSound |
| `[Engine.Console]` (430-431) | ConsoleKey=9 (Tab) |
| `[WindowPositions]` (433-434) | GameLog=(X,Y,XL,YL) — janela de log do engine, **não** do HUD |

O restante (Core.System, rede, editor e seções UT legadas) é irrelevante para o HUD.

### 7.3 `WindowsInfo.ini` (posições de janela)

[O] Formato (`export\client_cfg\WindowsInfo.ini`):
```
[<NomeDaJanela>]
width=<int>      ; só em janelas redimensionáveis (PartyWnd, StatusWnd, TargetStatusWnd, DuelManager, PetStatusWnd, SummonedStatusWnd, [6])
height=<int>
posX=<int>       ; pixels de tela, canto superior esquerdo [I]
posY=<int>
```
- [O] Contém 55 seções: janelas de topo (AbnormalStatusWnd … UnrefineryWnd), subjanelas da barra de atalhos por nome próprio (`ShortcutWndVertical`, `_1`, `_2`, `ShortcutWndHorizontal`, `ShortcutWndJoypad`, `ShortcutWndJoypadExpand`) e **seções numéricas `[1]`..`[8]`**.
- [I] `[6] width=348 height=187` coincide com o tamanho do `ChatWnd` (`ChatWnd.txt`). As seções numéricas parecem ser janelas gravadas por ID interno, não por nome. [N]
- [O] Valores fora da tela também aparecem (`[UnionDetailWnd] posX=16898 posY=12413`, `:221-223`). [N] O nativo precisa reposicionar ou clamp ao carregar.
- **Quem grava:** nenhum `.uc` referencia `WindowsInfo.ini`. [I] O nativo grava ao mover/redimensionar ou ao sair, e lê no carregamento.
- [I] Todas as janelas presentes têm `unk108=1` no xdat. Janelas fixas (MenuWnd, ChatWnd por nome, RestartMenuWnd) não aparecem. Mesmo assim, o SystemMenuWnd tem `unk108=1` e não está presente, talvez por nunca ter sido movido. A correlação é fraca. [N]
- **Reset:** `WindowInitBtn` → `SetDefaultPosition()` ([N] provavelmente reaplica `_wnddefpos.txt`: nome, ponto de âncora, x, y, w, h=-9999 para "não alterar" e moveParent).

### 7.4 `user.ini` (decifrado) — seções e binds

| Seção (linhas) | Propósito |
|---|---|
| `[DefaultPlayer]` (1-7) | legado UT (Name, Class=LineageWarrior.MFighter, skin) |
| `[Engine.Input]` (9-371) | **aliases e binds de tecla/mouse/joystick do engine** (movimento e câmera; os atalhos de UI vêm do `Interface.xdat`) |
| `[Engine.PlayerController]` (375-377) | DesiredFOV=75, DefaultFOV=75 |
| `[Engine.LineagePlayerController]` (379-415) | câmera: `bUseAutoTrackingPawn=true` (relacionado ao CameraBox), `AutoTrackingPawnSpeed=0.4`, `bUseHitCheckCamera`, `HitCheckCameraMinDist=300`, `MaxZoomingDist=65535`, `MinZoomingDist=-100`, `FixedDefaultViewNum=3` e 3 presets `FixedDefaultCamera{Yaw,Pitch,Dist,ViewHeight,HidePlayer,DisableZoom}[0..2]` |
| `[Engine.HUD]` (417-419), `[Warriors.ChallengeHUD]` (421-436), `[Warriors.ChallengeBotInfo]` (439-506) | legado UT, sem uso no HUD L2 [I] |

**Aliases** [O] (`user.ini:10-67`):
- `CameraRotationModeOn` = `CameraRotationOn | UseAutoTrackingPawnOff | StopMouse`;
- `CameraRotationModeOff` = `OnRelease CameraRotationOff | OnRelease UseAutoTrackingPawnOn | OnRelease MoveMouse`;
- `rmd1`/`rmd2` (rmode 5/1), `1`/`7` (rmode 5/6);
- `brtm3..brtp3` (brightness 0.2..0.8), `cntm3..cntp3` (contrast), `gamm6..gamp6` (gamma 0.70..1.30) e `coldefs` (reset);
- 34-39 vazios.
- [O] Linhas separadoras `_____` (14, 19) são lixo. [I] O parser ignora.

**Binds ativos** [O]:

| Tecla | Comando | Linha |
|---|---|---|
| LeftMouse | `PlayerPawnMoveTo` | 272 |
| RightMouse | `CameraRotationModeOn \| CameraRotationModeOff` | 273 |
| MiddleMouse | `rmd2` (alterna rmode, debug) | 278 |
| Left/A, Right/D | `Left/RightTurningStart \| …Finish OnRelease` | 280-281, 284-285 |
| Up/W, Down/S | `KeyboardMoveStart Dir=1/4 \| KeyboardMoveFinish OnRelease` | 282-283, 286-287 |
| NumLock | `KeyboardPermanentMove` | 288 |
| Space / Ctrl | `KeyboardMoveStart Dir=16/32` (câmera livre) + `PauseReplay` | 291-292 |
| GreySlash/GreyStar/GreyPlus/GreyMinus | velocidade da câmera aérea; `Inc/DecReplaySpeed` | 293-296 |
| Escape | `CameraModeSelectingCancel` | 297 |
| MouseX / MouseY | `CameraYaw/CameraPitch Speed=+3800` | 315-316 |
| MouseWheelDown/Up | `ZoomInPress/ZoomOutPress Speed=50` | 345-346 |
| NumPad7/9/4/6/1/3 | Zoom out/in com Speed 2.0 / 0.1 / 0.01 | 347-352 |
| NumPad8/2 | `CameraViewHeightAdjust ±20` | 359-360 |
| PrintScrn | `OnRelease shot` | 138 |
| Joy1..16, JoyX/Y/Z/V | `JOYPAD ShortcutUse/NPCTargetPrev/Next/Extend1/2/StatusOpen/InventoryOpen/…`, movimento e câmera | 236-257 |
| Debug: Backspace=FLUSH, End=stat fps, PageUp=1, PageDown=show PARTICLES, Home=Show fog, Delete=Stat Net, NumPadPeriod=show radii | — | 336-341, 362 |
| Enter | vazio (a UI trata FocusChatWindow) | 342 |

[I] Vários binds são de desenvolvedor (rmode, stat, show), assim como `IsL2Console` e `AutoLogOn`. Um cliente de jogador final não deve copiá-los. [N] Também falta saber a precedência entre `[Engine.Input]` e os atalhos do xdat quando a mesma tecla aparece nos dois (ex.: Escape = `CameraModeSelectingCancel` no user.ini e `TargetCancel` no xdat).

### 7.5 Outros INIs

- [O] `chatfilter.ini`: gravado por `ChatFilterWnd.uc:157-172` e lido por `ChatWnd.uc:641-685`. Seções `entire_tab`, `pledge_tab`, `party_tab`, `market_tab` e `ally_tab` (`ChatWnd.uc:60-64`), com chaves system, damage, useitems, chat, normal, party, shout, market, pledge, tell, ally, hero e union, mais `[global] command`. Detalhes na seção de chat.
- [O] `s_info.ini`: `[1]`,`[2]`,`[3]` `Time=0` e `[Date] Time=740478`. Nenhum `.uc` referencia. [N]
- `Lineage2us.ini`: ainda cifrado. [N]

---

## 8. Eventos e natives usados

### 8.1 Eventos (`NWindow\UIEventManager.uc`)

| ID | Evento | Quem registra (nesta seção) | Origem nativa (`91_eventos_nativos.md`) |
|---|---|---|---|
| 40 | EV_Restart | RestartMenuWnd | — |
| 50 | EV_Die | RestartMenuWnd | `101512c0` (keys Village/Agit/Castle/BattleCamp/Original) |
| 90 | EV_ShortcutCommand | Shortcut | — |
| 150 | EV_GamingStateEnter | SystemMsgWnd | — |
| 510 | EV_MinFrameRateChanged | OptionWnd | não encontrada [N] |
| 520 | EV_PartyMemberChanged | OptionWnd | `1015e640`… (key PartyMemberCount) |
| 1190 | EV_ShowBBS | BoardWnd (disparado por SystemMenuWnd) | `100065e0`, `1013dc20` |
| 1210 | EV_ShowHelp | HelpHtmlWnd | `10181970` |
| 1230 | EV_MacroShowListWnd | MacroListWnd | `1013ddd0` |
| 1430 / 1440 | EV_RestartMenuShow / Hide | RestartMenuWnd | `10151580` / `10151500` |
| 1510 / 1520 / 1530 | EV_ArriveNewTutorialQuestion / ShowQuest / NewMail | botões de notificação | `1015f790` / `10153b50` / `10164170` |
| 1550 / 1560 | EV_PartyMatchRoomStart / Close | OptionWnd | `10168370` / `10168830` |
| 1710 / 1720 | EV_DialogOK / Cancel | SystemMenuWnd | disparados por script (`DialogBox.uc:362,369`) |
| 1900 | EV_LanguageChanged | SystemMenuWnd | `10164610` |

### 8.2 Natives (`NWindow\UIScript.uc`)

- **Opções:** `Get/SetOption{Bool,Int,Float,String}` (223-230), `Get/SetINI*` + `RefreshINI` (246-255).
- **Vídeo:** `GetResolutionList`, `GetRefreshRateList(w,h)`, `GetResolutionIndex`, `SetResolution(res,rate)`, `GetMultiSample`, `GetShaderVersion(out ps, out vs)` (versões ×10: 12 = 1.2, 20 = 2.0), `CanUseHDR`.
- **Setters de vídeo:** `SetTextureDetail`, `SetModelingDetail`, `SetMotionDetail`, `SetShadow`, `SetBackgroundEffect`, `SetTerrainClippingRange`, `SetPawnClippingRange`, `SetReflectionEffect`, `SetHDR`, `SetWeatherEffect` (196-213).
- **Áudio:** `CanUseAudio`, `Set{Sound,Music,WavVoice,OggVoice}Volume` (188, 264-267).
- **Entrada e idioma:** `CanUseJoystick`, `IsUseKeyCrypt`, `IsCheckKeyCrypt`, `IsEnableKeyCrypt`, `SetKeyCrypt`, `IsEnableEngSelection`, `GetLanguage` (ELanguageType, `UIEventManager.uc:18-28`).
- **Janelas:** `SetDefaultPosition` (202).
- **Sessão:** `ExecRestart`, `ExecQuit` (179-180), `RequestRestartPoint(ERestartPointType)` (44), `RequestOpenMinimap` (364), `BeginPlay`, `BeginBenchMark` (394-395), `GetPartyMemberCount`.
- **UI:** `PlayConsoleSound(EInterfaceSoundType)` (143; IFST_WINDOW_OPEN=5, CLOSE=6), `PlaySound("InterfaceSound.*")`, `ExecuteEvent`, `RegisterEvent`, `RegisterState`.
- **Callbacks UIScript:** `OnClickButton`, `OnClickCheckBox` (321), `OnComboBoxItemSelected` (336), `OnModifyCurrentTickSliderCtrl` (367), `OnEnterState` (280), `OnShow`, `OnHide`.
- **UIAPI:** `UIAPI_COMBOBOX` (Clear, AddString, SYS_AddString, Get/SetSelectedNum), `UIAPI_CHECKBOX` (SetCheck, IsChecked), `UIAPI_SLIDERCTRL` (Get/SetCurrentTick), `UIAPI_WINDOW` (Show/Hide/Enable/Disable/IsEnableWindow/SetFocus/SetAnchor), `UIAPI_EFFECTBUTTON.BeginEffect`.

---

## 9. Lacunas: a validar no nativo

1. Destino real de `Get/SetOption*`: `Option.ini`, momento do flush e valores padrão quando a chave falta (instalação limpa).
2. `UIAPI_CHECKBOX.IsChecked` de controle inexistente (SystemMsgBox, DamageBox e ItemBox no OptionWnd): o OK zera as opções de SystemMsg?
3. Quais `SetOption*` aplicam efeito imediato (Gamma, RenderActorLimited, AntiAliasing, UseTrilinear, GPUAnimation, TransparencyMode, nomes, ArrowMode, AutoTrackingPawn, UseColorCursor, HideDropItem, ShowZoneTitle, UseJoystick, IsNative) e quais exigem reinício.
4. `SetResolution`: grava GamePlayViewport, ColorBits e RefreshRate? Vira no-op quando nada muda? Como alterna janela e tela cheia (StartupFullScreen não tem controle na UI)?
5. Origem de `EV_MinFrameRateChanged` (atalho ApplyMinFrame), emissão de sm1283/1284 e relação com `MinDesiredFrameRate=35` (l2.ini).
6. `SetDefaultPosition`: algoritmo exato (uso de `_wnddefpos.txt`, w/h=-9999, moveParent) e se reescreve `WindowsInfo.ini`.
7. Gravação e leitura do `WindowsInfo.ini`: quando grava, por que existem seções numéricas `[1]..[8]`, critério de inclusão das janelas e clamp de posições fora da tela.
8. `ExecRestart` / `ExecQuit`: pacotes enviados (RequestRestart 0x46, Logout 0x09), espera de `RestartResponse` e bloqueios (sm102 "cannot restart while in combat").
9. Mapeamento `Die` 0x06 → parâmetros do `EV_Die` (inclusive o filtro "meu personagem") e momento/condição de `EV_RestartMenuShow`.
10. Diálogo de ressurreição por skill/item: nativo, sem `.uc`.
11. `PartyLooting`: confirmar que vai como `itemDistribution` no RequestJoinParty.
12. `SetKeyCrypt`, `IsUseKeyCrypt` e afins: o que a "segurança de teclado" faz.
13. `IsNative` e troca de idioma: disparo de `EV_LanguageChanged` e se a troca exige recarga.
14. Comandos de atalho nativos (ShowSystemMenuWindow, ShowMainWindow Tab=…, HideAllWindow etc.), atalhos de tecla única só com "Enter Chat" ligado e precedência entre `user.ini` e xdat.
15. Abertura do OptionWnd em `LoginState` (de onde) e em `BenchMarkMenuState`.
16. Clique nos EffectButtons Quest/Tutorial/Mail: qual janela o nativo abre.
17. `[ClippingRange]` do Option.ini (floats) versus os índices; `[FirstRun]`; `[Key]`; `s_info.ini`; `Lineage2us.ini` cifrado.
18. Campos `unk1xx` do xdat (título unk111, fundo unk101, ícone unk136, flags unk104/107/108): semântica inferida, não confirmada.
19. TabCtrl: `normalTex=normal_tab_on` / `pushedTex=normal_tab` — qual textura corresponde à aba selecionada.

---

## 10. Checklist para recriar

**OptionWnd**
- [ ] Janela 256x480 centralizada, título "Options" (ss146), faixa `ssq_back` em y=20 e TabCtrl de 3 abas 74x23 em (12,25). Páginas 256x432 em y=48 com `option{1,2,3}_back`.
- [ ] Aba Video: 19 controles nas posições da tabela 2.3. Combos 125x17 em x=107, rótulos à direita em 98x19.
- [ ] Popular ResBox ("W*H Cbit") e RefreshRateBox ("NHz"); trocar a resolução repovoa as taxas e seleciona a última.
- [ ] AABox dinâmico por MultiSample. HDRBox com 3 opções fixas + 3 se `CanUseHDR`.
- [ ] Desabilitar ReflectBox se PS<1.2, GPUAnimation se VS<2.0 e HDRBox se PS ou VS <2.0. Desabilitar AA quando PostProc ∈ 3..5.
- [ ] FrameBox desabilita Texture, Model, Anim, Shadow, Deco, Terrain, Char, Reflect, HDR e Weather. Ao aplicar, força os valores mínimos **só no renderer**, sem gravar no INI.
- [ ] Mapeamentos não triviais: Gamma (idx→1.2/1.0/0.8/0.6/0.4 e faixas inversas), PawnBox (idx→6..1) e ReflectBox (EffectType + IsUseEffect).
- [ ] Aba Audio: 4 sliders de 6 ticks (0.2 por tick) com preview ao arrastar (música 0 → 0.005 durante o arrasto); Mute desabilita os sliders e zera os volumes no OK/Aplicar sem perder os valores.
- [ ] Aba Game: 19 controles da tabela 2.5. NameBox2 controla NameBox3-5. GametipBox tem lógica invertida. LootingBox fica desabilitado com party ou sala de matching e só grava se habilitado. KeyboardBox usa a API KeyCrypt, não o INI.
- [ ] `HideDropItem=false` forçado no carregamento (fidelidade) — decidir se manter.
- [ ] OK/Aplicar de qualquer aba aplicam as 3 categorias. OK e Cancelar gravam `FirstRun=2`. Cancelar reverte só o áudio. OnShow relê tudo.
- [ ] Botão Initialize → reset das posições de janela.
- [ ] Não gravar SystemMsg* pelo OptionWnd (pertence ao ChatFilterWnd).

**Menus**
- [ ] MenuWnd 173x46 no canto inferior direito, 3 fatias de fundo e 4 botões 34x34 (MainWnd, InventoryWnd, Minimap e SystemMenuWnd) com tooltips e sons `InterfaceSound.*_open_01/_close_01`.
- [ ] SystemMenuWnd 172x295 ancorado em (0,-46) do canto inferior direito, 7 itens (ícone 36x36 + texto) com passo de 37 px. Textos com "(Alt+B)" e "(Alt+R)" acrescentados por código.
- [ ] Restart/Exit via DialogBox Warning (sm126 e sm125, "Confirm"/"Cancel", Enter = Cancelar) → ExecRestart (esconde o menu antes) / ExecQuit.
- [ ] RestartMenuWnd 128x128 centralizado, 5 botões fixos (sem reempilhar), visibilidade pelos flags do EV_Die, exibido só em EV_RestartMenuShow, persistente entre estados. Clique → `RequestRestartPoint(0..4)` e esconde. Sem fortaleza.
- [ ] Botões Tutorial/Quest/Mail (32x32, brilho por `BeginEffect`) a 5/42/79 px, acima do ChatWnd (ou do SystemMsgWnd quando visível). Clique esconde.
- [ ] Atalhos de `_shortcuts.txt` (estado GamingState) com as variantes de letra e Alt+letra.

**Persistência**
- [ ] Leitor/gravador de `Option.ini` com as seções [Video], [Game], [Audio], [L2WaterEffect], [FirstRun] (e preservar seções desconhecidas).
- [ ] `WindowsInfo.ini`: `[Nome] posX/posY` (+ width/height em janelas redimensionáveis), com clamp na carga e defaults de `_wnddefpos.txt`.
- [ ] `user.ini [Engine.Input]`: aliases + binds de movimento e câmera (sem os binds de debug), tratados separadamente dos atalhos de UI.
