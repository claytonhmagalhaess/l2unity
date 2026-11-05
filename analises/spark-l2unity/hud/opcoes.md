# Janela de Opções (`OptionsWindow`) e configurações (`SparkOpcoes`, `SparkTeclas`, `SparkResolucao`, `SparkApiGrafica`)

Fonte: 414 métodos decompilados (Ghidra 12.1.4 headless, `code/OptionsWindow__*`, `code/SparkOpcoes__*`, `code/SparkTeclas__*`, `code/SparkResolucao__*`, `code/SparkApiGrafica__*`, `code/SparkFps__*`), lambdas mapeados para os campos estáticos de `SparkOpcoes` pelo layout de campos (offset `+0xNN` do bloco estático), arrays de opções recuperados por desmontagem do `.cctor` (capstone) e blobs RVA lidos do `global-metadata.dat` (`fieldRefs` → `<PrivateImplementationDetails>` → `fieldDefaultValues`). Nada foi executado.

A janela **não tem UXML**: é construída inteiramente em código (`BuildWindow` é uma corrotina; o conteúdo real está em `OptionsWindow.<BuildWindow>d__30.MoveNext` @0x1806b6700 e nos métodos `Video/Audio/Jogo/Chat/Interface/Teclas`). Só a moldura usa os elementos padrão (`windows-name-label`, `drag-area`, `btn-close-frame`, `Content`). Texturas em `textures/Opcoes/*` (`Aba`, `Aba_Sobre`, `Aba_Escolhida`, `CheckBox`, `CheckBox_checked`, `EditBox_DF_bg`, `Combobox_DF_Btn`, `Combobox_DF_Btn_Over`, `ComboBox_DF_Dropmenu_Bg`, `combobox_DF_select`, `GroupBox_DF`, `slider_back`, `slider_mark`, `slider_cursor`, `slider_cursor_over`).

## 1. Como abre e fecha

| Evento | O que acontece |
|---|---|
| Botão **Option** do menu de sistema (`SystemMenuWindow.MontaLista`, ícone `Options`) ou tecla do menu de sistema (X / Alt+X) | `ToggleHideWindow` → `SparkOpcoes.Carrega()` (relê PlayerPrefs), reconstrói a aba de teclas (`MostraTeclas`) e mostra |
| Botão **Options** na tela de login (`LoginWindow.MontaBotaoOpcoes`, elemento `SparkOpcoesLogin`) | mesma janela com `SoVideoEAudio = true`: só as abas Video e System/Audio |
| Engrenagem do chat (`ChatWindow.TrocaOpcoes`) | **não** abre esta janela: abre um popup próprio "Chat Options" (Show system message window + filtros por aba + Default), mesmas funções da aba Chat |
| `ShowWindow` | som `window_open`, entra na lista de popups de `L2GameUI` (BringToFront) |
| **X**, **Cancel**, **Esc** (`CloseWindow`) | `HideWindow`: `SparkOpcoes.Recarrega()` (descarta tudo que não foi aplicado) e reaplica áudio, efeitos de pós-processo e interface (`AplicaAudio/AplicaEfeitos/AplicaInterface`) para desfazer as prévias ao vivo; som `window_close`; `L2GameUI.WindowClosed` |
| **Apply** | `Aplica()`: `SparkOpcoes.Salva()` (PlayerPrefs) → `AplicaTela` (resolução/modo/Hz/VSync/FPS) → `AplicaQualidade` (clona o URP asset "(SPARK)", render scale, sombras, AA, texturas, `SparkResolucao`) → `AplicaAudio` → `SparkFps.Atualiza` → mensagem no chat "Options applied."; se o modo detalhe-mínimo estiver ligado avisa "Low detail mode is on: graphics stay at minimum until you press <tecla LowDetail> again." |
| **Apply and Close Window** | `Aplica()` + `HideWindow` |
| **Reset Settings** | `ResetDaAba()`: padrão só da aba atual (`PadraoVideo`, `PadraoAudio`, `PadraoJogo`, `PadraoInterface`, `SparkChatFiltro.VoltaAoPadrao`); na aba Shortcut pede confirmação "Reset every key to the default?" → `SparkTeclas.VoltaAoPadrao` + `SkillbarWindow` reatualiza as teclas dos slots |
| **Reset Window Location** | `L2Window.TodasNaPosicaoPadrao()` + `ChatWindow.Padrao()` + `SparkQuestHud.TamanhoPadrao()` e mensagem "The interface was reset to the default layout." (mesmo efeito de Alt+L) |
| Arrasto | `drag-area` com `DragManipulator` (só botão esquerdo), posição lembrada |

Abas (`ABAS`, ordem): **Video · System/Audio · Game Play · Shortcut · Chat · UI**; aba inicial `Video`. Botão de aba (`BotaoDeAba`): imagem `Opcoes/Aba`, `Aba_Sobre` no `MouseEnter`, `Aba_Escolhida` quando selecionada; `ClickEvent` toca `click_01` e chama `Aba(i)` (troca `display` dos painéis). Cada aba começa com a seção "Default Settings" e segue com "Advanced Settings" (Video) ou blocos em `GroupBox_DF`.

## 2. Controles genéricos e seu comportamento com o mouse

| Controle | Construção | Interação |
|---|---|---|
| **Caixa de seleção** (`Marca`) | `Opcoes/CheckBox` / `CheckBox_checked` + rótulo | `MouseDownEvent` (qualquer botão checado em `get_button`) alterna, toca `click_01`, chama o callback e o `_atualiza` da janela |
| **Lista suspensa** (`Escolha` + `AbreSuspensa`) | `EditBox_DF_bg` + botão `Combobox_DF_Btn` (hover → `_Over`), texto da opção atual (ou "-") | `PointerDown` na caixa abre/fecha a lista (`ComboBox_DF_Dropmenu_Bg`, posicionada sob a caixa, log "abriu a lista (N opcoes…)"); item destaca com `combobox_DF_select` no `MouseEnter`; `PointerDown` no item escolhe, toca `click_01`, fecha; `WheelEvent` rola a lista; clique em qualquer outro lugar da janela (`BuildWindow` b__30_0, `PointerDown` no root) fecha a lista (`FechaSuspensa`) |
| **Barra deslizante** (`Barra`/`BlocoBarra`) | `slider_back` + marcas `slider_mark` (passos) + `slider_cursor`, rótulos esquerda/direita ("Min."/"Max.", "Low"/"High", "Very Dark"/"Very Bright", "Near"/"Far") | `PointerDown` com botão esquerdo captura o ponteiro (`pointerId`), cursor vira `slider_cursor_over`; `PointerMove` arrasta (posição local → valor, com passos); `PointerUp` solta e restaura o cursor; `GeometryChanged` reposiciona |
| **Botões de modo de tela** (`ModosDeTela`) | três caixas com o ícone `↖ ↗ / ↙ ↘` e rótulos **Full Screen / Full Window / Window** | `ClickEvent` muda `SparkOpcoes.Modo`, destaca a escolhida (`SparkEstilo.Borda`), `click_01` |
| **Cores da party** (`CoresDaParty`) | 9 quadradinhos coloridos + "X" = "None (no ring)" | `ClickEvent` grava na hora (`SalvaJogo`), borda na cor escolhida |
| **Caixa de tecla** (`CaixaDeTecla`) | `EditBox_DF_bg` com o texto da tecla ("Alt+K", "-" = vazia) | hover muda a borda; `PointerDown` → texto "Press a key..." e `SparkTeclas.Troca` (ver §4) |
| **Linha condicionada** (`Condiciona`/`Desativa`) | linha acinzentada + motivo em texto | usada para "Controlled by Dynamic Resolution.", "Controlled by Vertical Sync.", "Only in Full Screen (windows use the monitor refresh rate).", "Full Window always uses the monitor resolution.", "Requires Shadows on (Performance Settings).", "Requires Character Shadows on.", "Not supported by your GPU.", "FSR is not supported by this graphics card.", "Only with Upscaling FSR 1.0.", "Already running <API>." |
| Tooltip/ajuda | textos longos em `SparkEstilo.Texto` abaixo do controle | — |

Som: todos usam `AudioManager.PlayUISound("click_01")` (literal `'click_'` + sufixo).

## 3. Conteúdo de cada aba, campo gravado e efeito

Legenda: **campo** = `SparkOpcoes.<campo>`; **pref** = chave em `PlayerPrefs`; *padrão* = valor usado por `Carrega()` quando a chave não existe. "Custom" = qualquer mudança em opção coberta pelo preset força `Preset = Custom`.

### 3.1 Video (`Video()`, 110 lambdas `<Video>b__37_*`)

**Default Settings → Display Settings**

| Controle | Opções | Campo / pref / padrão | Efeito |
|---|---|---|---|
| Modo de tela | Full Screen, Full Window (borderless), Window (`MODOS` = Windowed, Borderless, Fullscreen) | `Modo` / `spark.opt.modo` / 0 | no Apply (`AplicaTela` → `Screen.SetResolution`) |
| Resolution (lista) | `Screen.resolutions` formatadas "{w}*{h} 32bit" | `Largura`,`Altura` / `spark.opt.w`,`.h` / resolução atual | desabilitada em Full Window ("Full Window always uses the monitor resolution.") |
| Refresh Rate (lista) | "Auto" + "N Hz" (`Taxas()` lê `Screen.resolutions`) | `Hz` / `spark.opt.hz` / 0=Auto | só em Full Screen |
| Brightness (barra Very Dark…Very Bright) | contínua | `Brilho` / `spark.opt.brilho` / 0 | **prévia ao vivo**: cria `SparkOpcoesVolume` (URP Volume global com Bloom, DepthOfField, ChromaticAberration, ScreenSpaceLensFlare, ColorAdjustments) e ajusta a exposição |
| View Distance (barra Near…Far) | passos de `DISTANCIAS` | `Distancia` / `spark.opt.dist` / 2 | `Preset=Custom`; `SparkOpcoes.Executor.Update` aplica `Camera.main.farClipPlane` a cada frame |

**Advanced Settings → Graphic quality**: barra Low…High com os presets `PRESETS` = Low, Medium, High, Ultra, Custom (`Preset` / `spark.opt.preset` / 3=Ultra). `UsaPreset(p)` define de uma vez Escala, Sombras, Aa, Distancia, Texturas, Bloom, Profundidade, Cinema. Caixa "Lower Detail" (`Escala` + Custom).

**Resolution**: Render Scale (lista `ESCALAS` = 50, 67, 75, 85, 100 %, `Escala` / `spark.opt.escala` / 100; mostra "N% (auto)" e fica "Controlled by Dynamic Resolution." quando a resolução dinâmica está ligada) · Upscaling (`UPSCALERS` = Off (Bilinear), FSR 1.0; `Upscaler` / `spark.opt.upscaler` / 0; "FSR is not supported by this graphics card." se `SparkResolucao.FsrDisponivel` for falso) · FSR Sharpness (`NITIDEZES` Low/Medium/High = 0.55/0.75/0.92; `NitidezFsr` / `spark.opt.fsrnitidez` / 2; "Only with Upscaling FSR 1.0.") · Dynamic Resolution (`RES_DINAMICA` = Off, 30 FPS, 45 FPS, 60 FPS, Auto (monitor); `ResDinamica` / `spark.opt.resdin` / 0; texto explicativo: "Lowers the 3D resolution only when needed to hold the FPS target. The interface always stays sharp." + "Uses the native dynamic resolution of <API>" ou "Adjusts the Render Scale (no native dynamic resolution in <API>, upscaled by FSR 1.0)" conforme `SparkResolucao.ApiTemNativa`) · **Graphics API (restart required)** (lista `SparkApiGrafica.NOMES` = DirectX 11, DirectX 12, Vulkan; `ApiGrafica`; texto "Running: <API atual>. A new choice is used on the next start (launcher or the button below)."; botão **Apply and restart** → `AplicaEReinicia`: confirma "The game will restart and disconnect. Continue?", grava `grafico.txt` (`api=dx11|dx12|vulkan`), reabre `L2.exe` com `-force-d3d11|-force-d3d12|-force-vulkan` e fecha; se não achar o exe: "Could not restart the game. Close it and open it again to use <API>."; "Already running <API>." desabilita o botão).

**Character Settings**: Character Shadows (`SOMBRAS_PERSONAGEM` = All, Nearby, Off; `SombraPersonagem` / `spark.opt.sombrapers` / 1; exige Shadows ≠ Off) · Name Distance (`DISTANCIAS_NOME` Near/Medium/Far; `DistanciaNome` / `spark.opt.distnome` / 1) · Character Detail Distance (`DETALHES` Near/Medium/Far; `DetalhePersonagem` / `spark.opt.detalhepers` / 1) · Character LOD (caixa; `LodPersonagem` / `spark.opt.lodpers2` / 0) · Simplified character shadows (caixa; `SombraSimples` / `spark.opt.sombrasimples` / 0; exige Character Shadows) · GPU Crowd Rendering (caixa; `MultidaoGpu` / `spark.opt.multidaogpu` / 0; "Not supported by your GPU." via `SparkMultidao.HardwareSuporta`).

**Effect Settings**: Show Effects (`MOSTRA_EFEITOS` = All, Mine + Party, Mine Only; `MostraEfeitos` / `spark.opt.efeitos.mostra` / 0) · qualidade (`QUALIDADES_EFEITO` High/Low; `QualidadeEfeitos` / `spark.opt.efeitos.qualidade` / 0) · distância (`DISTANCIAS_EFEITO` Near/Medium/Far; `DistanciaEfeitos` / `spark.opt.efeitos.dist` / 1) · Water ripples (caixa; `OndasNaAgua` / `spark.opt.ondas` / 1; "Not supported by your GPU." via `SparkAguaInterativa.HardwareSuporta`).

**Performance Settings**: Anti-Aliasing (`AAS` = Off, FXAA, SMAA; `Aa` / `spark.opt.aa` / 2) · Texture (`TEXTURAS` = High, Low; `Texturas` / `spark.opt.tex` / 0) · Shadows (`SOMBRAS` = Off, Low, Medium, High; `Sombras` / `spark.opt.sombras` / 3) · FPS Limit (`FPS` = 30, 60, 75, 120, 144, 165, 240, Unlimited(0); `Fps` / `spark.opt.fps` / 60; "Controlled by Vertical Sync." quando VSync ligado; `spark.opt.fps60` é a chave antiga) · Background FPS (`FPS_SEM_FOCO` = 5, 10, 15, 30, 60; `FpsSemFoco` / `spark.opt.fpssemfoco` / 30) · Terrain Range (`DISTANCIAS`; `Distancia`) · Vertical Sync (caixa; `VSync` / `spark.opt.vsync` / 0). Todos marcam Custom.

**Visual Effect Settings**: Glow Effects (Bloom) (`Bloom` / `spark.opt.bloom` / 1) · Use Out Focusing Effects (`Profundidade` / `spark.opt.dof` / 1) · Cinematic Effects (`Cinema` / `spark.opt.cinema` / 1; aberração cromática + lens flare). Caixas; prévia ao vivo pelo mesmo Volume.

**Misc. Settings → Misc.**: Show FPS (`MostraFps` / `spark.opt.mostrafps` / 0) · Show Ping (`MostraPing` / `spark.opt.mostraping` / 0) · Text Color (`NOMES_CORES_INFO` = Beige, White, Yellow, Green, Cyan, Orange, Red, Pink; `CorInfo` / `spark.opt.corinfo` / 0) · Text Size (`TAMANHOS_INFO` = Small, Medium, Large, Extra Large = fontes 11/14/17/21; `TamanhoInfo` / `spark.opt.tamanhoinfo` / 0). Mudam na hora o rótulo `SparkFps` ("FPS N   Ping N ms"; ping medido por pacote próprio, `SparkFps.PedePing/Resposta`).

### 3.2 System/Audio (`Audio()`)
Default Settings: **Mute All Sounds** (caixa, `Mudo` / `spark.opt.mudo` / 0). Global Volume Settings: **Total Sound** (barra Min.…Max., `Geral` / `spark.opt.vol.geral` / 1.0). Advanced Settings → Specific Volume Settings: **Music Vol.** (`Musica` / `spark.opt.vol.musica` / 0.5), **SFX Vol.** (`Efeitos` / `spark.opt.vol.efeitos` / 1.0), **Environmental Sound** (`Ambiente` / `spark.opt.vol.ambiente` / 1.0), **Interface Sound** (`Interface` / `spark.opt.vol.interface` / 1.0); **Mute when the game is in the background** (`MudoSemFoco` / `spark.opt.mudosemfoco` / 1). Cada mudança chama `AudioManager` na hora (prévia); Cancel/X desfaz (`Recarrega` + `AplicaAudio`). A tecla `.` (`Mute`) alterna `Mudo` por fora da janela (`TrocaMudo`: "Sound muted. Press . again." / "Sound on.").

### 3.3 Game Play (`Jogo()`)
Gravação **imediata** (`Grava`/`SalvaJogo`/`GravaControles`), não depende do Apply.
- **Party**: *Party loot* (lista `LOOTS` = Finders Keepers, Random, Random including Spoil, By Turn, By Turn including Spoil; `LootDaParty` / `spark.opt.lootparty` / 0). `TrocaLoot`: fora de party grava e avisa "Your next party will use: X."; em party só o líder pode ("Only the party leader can change the loot.") e envia o bypass `spk_loot N` ao servidor com aviso "Asking the party to accept: X." (`SparkAvisoNaTela`). *Party effect (ring under your party members)* (caixa, `EfeitoDeParty` / `spark.opt.party` / 1) e *Party effect color* (grade de `NOMES_CORES_PARTY` = Blue, Cyan, Green, Yellow, Orange, Red, Pink, Purple, White + None; `CorDaParty` / `spark.opt.corparty` / 0). Texto: "Shows the same ring of duels and events under every member of your party, only on your screen." / "Without a party: the loot your next party starts with. In a party: the leader asks for a change and every member must accept it."
- **Controls**: *Invert camera Y axis* (`InverteY` / `spark.opt.invertey` / 0), *Invert mouse wheel* (`InverteRoda` / `spark.opt.inverteroda` / 0; "The mouse wheel option only changes the camera zoom.").
- **Interface** (só texto): "Alt+H hides the whole interface, Alt+J hides the chat, "." mutes the sound. The keys can be changed in Shortcut."

### 3.4 Chat (`Chat()`)
- **Chat input**: caixa *Enter chat* (`EnterChat` / `spark.opt.enterchat` / 1, gravação imediata). Ajuda: "Enter chat on: press Enter to type and single keys are shortcuts. Off: just type to chat - letters, numbers and symbols become text; F1-F12, Alt/Ctrl shortcuts, Tab, Space and Esc still work."
- **System messages**: caixa *Show system message window* (`SparkChatFiltro.JanelaDeSistema`, pref `spark_chat_janela_sistema`); ao desligar mostra na tela "System messages are hidden now. To see them in the chat, turn on Damage, System, Drops... in the chat filters (chat gear or Options > Chat)." Texto: "The window above the chat with damage, items, XP/SP and system messages…"
- **Chat Tab Filters → Channels by tab**: matriz abas × canais (`SparkChatFiltro.MontaFiltros`; abas General, Trade, Party, Clan, Ally, Hero, Drops; canais Normal, Shout, Trade, Party, Clan, Ally, Hero, Whisper, Union, Announce, GM, Dano, Sistema, Drops, Itens, XP/SP, Party/loot), bit por canal gravado em `SparkChatFiltro.Grava`. Ajuda: "Right-click a chat tab to change it… the chat gear button opens the same settings. Reset Settings puts the tabs and filters back to the default."

### 3.5 UI (`Interface()`)
Barras com efeito **imediato** nas janelas (e desfeito no Cancel):
- **Chat → Chat Background Opacity** (`OpacidadeChat` / `spark.opt.chatfundo` / 0.682; `ChatWindow.AplicaFundo`). "Darkens the background of the chat and of the system message window above it."
- **Shortcut Bar → Shortcut Bar and Auto Potion Size** (`EscalaAtalhos` / `spark.opt.escalaatalhos` / 1.0; `SkillbarWindow.AplicaEscala`). "Changes only the size of the shortcut bar and of the auto potion bar on it, not the number of bars or slots. Default: Min."
- **Buff Bar → Buff Icon Size** (`TamanhoBuff` / `spark.opt.tamanhobuff` / 30; `AbstractEffectWindow.PoeTamanho` em Buff/Debuff/Song). "Size of the buff and debuff icons, 12 per row at any size. Min. is the Interlude size. Default: Max."
- **Damage Text** (`BlocoTextoDano`): "Shows floating numbers and words over the characters, besides the message in the chat." Quatro grupos (`GrupoTextoDano`, cada um com botão **All On** e caixas por item; `MouseDown` alterna, imagem `Combobox_DF_Btn`/`_Over`): **Player** (Recover HP, Recover MP, Acquire XP, Acquire SP, Normal Damage, DOT Damage, Crit. Rate, Immunity, Resistance, Block, Evasion), **Attack Target** (Normal Damage, DOT Damage, Crit. Rate, Over-hit, Immunity, Resistance, Block, Evasion), **Recovery Target** (Recover HP, Recover MP, Crit. Rate, Immunity), **Servitor** (Recover HP, Recover MP, Acquire XP, Normal Damage, DOT Damage, Crit. Rate, Immunity, Resistance, Evasion). Chaves `CHAVES_TEXTO_DANO` (32: `PlayerHealBox`, `PlayermanaBox`, … `PetEvasionBox`) gravadas como `spark.opt.dano.<chave>`; botão **Reset Settings** local → `PadraoTextoDano`.
- **Sky** (lista `CEUS` = Auto (Server time), Morning, Noon, Evening, Night = minutos −1/420/720/1110/0; `Ceu` / `spark.opt.ceu` / 0; `MudaCeu` imediato, evento `CeuMudou`). "Only changes the sky on your screen. Auto (Server time) follows the game time; the other modes keep the sky fixed while the game time keeps running."
- **Weather** (lista `CLIMAS` = Clear, Rain, Snow, Storm, Light Rain, Snowy; `Clima` / `spark.opt.clima3` (antigas `clima`, `clima2`) / `LeClima`; `MudaClima` imediato, `ClimaMudou`). "Only changes the weather on your screen: rain with wet ground and puddles, a storm with lightning and thunder, light rain, snow covering the ground with footprints, or snowy ground without snowfall."

### 3.6 Shortcut (`Teclas()` / `MostraTeclas()`)
Texto: "Click a box and press the key or combination (Alt, Ctrl and Shift work). Esc cancels, Backspace clears the box." Lista `SparkTeclas.MontaLista()` em grupos, cada ação com duas caixas (**Shortcut 1**, **Shortcut 2**):

| Grupo | Ações (rótulo → ação interna) |
|---|---|
| Windows | Inventory, Character status (`CharacterStatus`), Actions, Skills, System menu (`SystemMenu`), Quest, Clan, Friends, Map, Radar, Macro, Community board (`Board`), GM window (`Gm`) |
| Interface | Hide all interface (`HideUI`), Hide chat (`HideChat`), Party buffs display (`PartyBuffs`), Reset window positions (`ResetLayout`), Low detail mode (`LowDetail`), Mute all sound (`Mute`) |
| Character | Attack, Sit / stand (`Sit`), Target yourself (`TargetSelf`), Next target (`NextTarget`), Force attack (hold) (`Ctrl`), Stay in place on ground click (hold) (`Shift`), Close window / cancel cast (`CloseWindow`) |
| Wyvern | Fly forward/back, Turn left/right, Fly up/down (`FlyForward/FlyBack/FlyLeft/FlyRight/FlyUp/FlyDown`) |
| Chat | Open chat / send (`Validate`), Previous message / whisper (`ArrowUp`), Next message / whisper (`ArrowDown`) |
| Bar pages | Bar 1 - page 1…5 (`BarPage`, Alt+F1…F5) |
| Shortcut bar 1…5 | Bar N - slot 1…12 (`ShortcutN-M`) |

Comportamento ao clicar numa caixa (`CaixaDeTecla` b__2/b__3): texto vira "Press a key...", `SparkTeclas.Troca` cria o componente `SparkTeclas.Captura` (`Trocando = true` → todos os atalhos do jogo ficam bloqueados). `Captura.Update` varre o `Keyboard` do InputSystem a cada frame: **Esc** cancela; **Backspace** limpa a caixa; Alt/Ctrl/Shift sozinhos esperam a próxima tecla e viram prefixo (`alt+<Keyboard>/x`); uma tecla que digita texto no chat (letras, números, símbolos) é recusada com "That key types text in the chat. Use another key, or Alt/Ctrl + key." quando a ação não é "só com chat" (`SoComChat`); teclas aceitas são gravadas por `SparkTeclas.Grava(item, slot, atalho)` em `spark.opt.teclas` (lista `acao/slot=atalho`, bindings do jogo em `spark.opt.binds`; flags `spark.opt.teclas.atacarsemf`, `.statussemp` migram os padrões antigos F/P). A caixa mostra `TextoDe(atalho)` ("Alt+K"); conflitos aparecem em "Keys in use: …" (`QuemUsa`/`EmUso`); `SkillbarWindow.AtualizaTeclas` reescreve as teclas nos slots da barra. Voo e barra podem dividir tecla (`VooEBarra`). `MontaBindings` traduz para `OneModifier`/`TwoModifiers` do InputSystem.

## 4. Persistência e carregamento

- `SparkOpcoes.Carrega()` lê todas as chaves `spark.opt.*` (lista e padrões acima; `Le`/`LeF` = `PlayerPrefs.GetInt/GetFloat`), `SparkApiGrafica.LeEscolha()` lê `grafico.txt`; `Recarrega()` relê para descartar mudanças. `Salva()` grava tudo; `SalvaJogo()` (party/loot/cor) e `GravaControles()` (invertey/inverteroda/enterchat) gravam fora do Apply. `AplicaTudo(tela)` na entrada do jogo aplica tela, qualidade, câmera, efeitos, interface, áudio e cria `SparkDetalhePersonagem`.
- Inicializadores do `.cctor`: `NitidezFsr=2`, `DistanciaEfeitos=1`, `OndasNaAgua=true`. `CORES_PARTY`/`CORES_INFO` são `Color[]` com os RGB listados no `.cctor` (ex.: Blue = 0.25,0.55,1).
- `SparkOpcoes.Executor` (GameObject `SparkOpcoes`): em `Update` aplica `farClipPlane` (Distancia) e AA na câmera principal quando ela muda.
- `SparkOpcoes.TrocaMinimo()` (tecla Alt+P `LowDetail`): guarda uma cópia (`_copia`) e põe tudo no mínimo (`PoeMinimo`: preset Low, sombras de personagem Off, detalhe Near, efeitos Low, ondas off), `spark.opt.minimo`; mensagem "Low detail mode: on. Press Alt+P again to restore your settings." / "off.".
- `SparkResolucao` (GameObject `SparkResolucao`): controlador da resolução dinâmica — degraus `DEGRAUS`, janela de medição `JANELA`, espera entre trocas `ESPERA_TROCA`, usa `ScalableBufferManager` nativo em DX12/Vulkan (`QuerNativo`/`ApiTemNativa`) ou cai para `renderScale` do URP ("native scaling not accepted/had no effect - using render scale"), alvo `AlvoFps()` = FPS da opção ou taxa do monitor (Auto).
- `SparkApiGrafica`: `NOMES` = DirectX 11/DirectX 12/Vulkan, `CHAVES` = dx11/dx12/vulkan, `ARGUMENTOS` = `-force-d3d11/-force-d3d12/-force-vulkan`; `AoAbrir` cria `Conferente` que após `CONFIRMA_APOS` segundos apaga `grafico_teste.txt`; `Confere` avisa "<API> could not start on this PC. The game is back on DirectX 11." quando o launcher reverteu.

## 5. Limites
- Rótulos e ordem vêm das literais na ordem de construção; valores de largura (`LARGURA`/`ALTURA`) e cores (`CINZA_TITULO`, `DOURADO_GRUPO`, `TEXTO_LINHA`) não foram transcritos.
- O efeito exato de cada lambda foi inferido pelo campo estático que ela escreve (layout calculado por alinhamento natural, confirmado por `ModoMinimo` em `+0x69` e `Preset`/`Escala` nos lambdas do preset); nenhum valor foi observado em execução.
