# HUD do cliente Infinity — extração completa e comportamento de interação

Tudo foi extraído estaticamente dos arquivos do cliente (Unity 6000.3.21f1, UI Toolkit) e do `GameAssembly.dll` decompilado. Nada foi executado. Fontes: `resources.assets`/`sharedassets0.assets` (UXML, USS, texturas), `global-metadata.dat` (nomes), Ghidra headless (2.135 funções decompiladas e anotadas: 1.721 de UI + 414 de opções/configuração).

## O que há nesta pasta

| Caminho | Conteúdo |
|---|---|
| `uxml/` (94 arquivos) | Layouts UXML reconstruídos (hierarquia, `name`, `class`, atributos, `style` inline, templates `ui:Instance`, folhas USS referenciadas) |
| `uss/` (42 arquivos) | Folhas de estilo USS reconstruídas (seletores, propriedades, cores, dimensões, recursos). Os 94 `inlineStyle` foram fundidos como `style="…"` nos UXML |
| `textures/` (1.648 PNG) | Todas as texturas de interface e ícones de `resources.assets`/`sharedassets` (gauges, molduras, botões, abas, ícones de menu, cursores, texto de dano, brasões…) |
| `code/` (2.135 `.c`) | Handlers de interação decompilados e anotados (`MD_` = método, `TI_` = tipo, `MR_` = genérico resolvido, `LIT_` = literal) |
| `events.md` | Fiação completa `RegisterCallback<Evento> → handler` por classe (174 registros), `Button.clicked`, manipulators, uso de Input |
| `code_summaries.md` | Para cada função: sequência de chamadas nomeadas e literais (leitura rápida do que ela faz) |
| `uxml_inventory.md` | Elementos nomeados, templates, USS e textos de cada UXML |
| `index.tsv` | UXML → arquivo/path_id/quantidade de elementos |
| `../tools/parse_uitk.py`, `annotate_decomp.py`, `targets_ui.tsv`, `labels_all.tsv` | Ferramentas que geraram tudo |

## 1. Arquitetura da HUD

- **Dois documentos raiz** (`UIDocument`): `Lineage2_Login` (cena Menu) e `Lineage2_Game` (cena Game). `Lineage2_Game.uxml` define as camadas, de trás para frente: `NameplatesContainer` (nomes sobre entidades), `UIContainer` (janelas), `UIContainerPopup` (popups: `L2PopupWindow`, `NpcHtmlWindow`, confirmações), `UIContainerTooltip` (`L2ToolTip`), `UIContainerSlot` (slot flutuante arrastado) e `Loading`. Todas com `picking-mode="Ignore"` exceto `UIContainer`, para o clique atravessar até o mundo.
- **`L2UI`/`L2GameUI`**: carregam as janelas (`LoadUI`), controlam foco (`BlurFocus`), `MouseOverUI` (bloqueia clique no mundo quando o ponteiro está sobre a UI), `IsTyping` (bloqueia atalhos enquanto o chat tem foco), lista de janelas abertas e os atalhos globais (`CheckUIInputs`).
- **`L2Window`** (base de toda janela): instancia `WindowTemplate.uxml` (moldura `Frame_DF_*`, título, botão fechar), registra `DragManipulator` na barra de título, `MouseOverDetectionManipulator` na janela, guarda e restaura posição/tamanho por chave (`GuardaPosicao`, `GuardaTamanho`, `RestauraQuandoPuder`, `PosicaoPadrao`, `TodasNaPosicaoPadrao`), `BringToFront` ao clicar, `ContemPonto`.
- **`L2PopupWindow`**: `RegisterClickWindowEvent` (MouseDown → traz para frente), `RegisterCloseWindowEvent` (MouseUp no X → `HideWindow`), `CenterWindow`.
- **Slots** (`L2Slot` → `L2ClickableSlot` → `L2DraggableSlot` → `InventorySlot`, `SkillSlot`, `SkillbarSlot`, `ActionSlot`, `GearSlot`, `MacroSlot`, `TradeSlot`, `BasketSlot`, `ProductSlot`, `BuffSlot`): recebem `SlotClickSoundManipulator`, `SlotHoverDetectManipulator`, `SlotDragManipulator`, `TooltipManipulator`, `SlotAnimationManipulator`. O arrasto é coordenado por `L2SlotManager` (um `DraggedSlot.uxml` flutuante em `UIContainerSlot`).
- **Janelas SPARK** (`SparkGmWindow`, `SparkMapaWindow`, `SparkFindWindow`, `SparkHennaWindow`, `SparkCraftWindow`, `SparkQuestWindow`, `SparkRefinoWindow`, `SparkRadarWindow`, `SparkLojaCristalWindow`, `SparkEnchantWindow`, `SparkTutorialWindow`, `SparkDropWindow`…): o UXML é só uma casca (1.176 bytes, `WindowTemplate`); todo o conteúdo é construído em código com `SparkEstilo` (fábrica de painel/moldura/botão/aba/lista/campo/seletor com cores `FUNDO`, `BORDA`, `DOURADO`, `HOVER`…) — por isso seus botões aparecem em `events.md` como lambdas (`_Botao_b__0`).

## 2. Lista de janelas (UXML ↔ classe C#)

| UXML | Classe | Função |
|---|---|---|
| `StatusWindow` | `StatusWindow` | HP/MP/CP/EXP do jogador, nome, nível; `OnClick`, `ShiftCliqueEmMim` (Shift+clique mira em si mesmo), `OnClickSelf`; `SparkPiscaHp` pisca HP baixo; prévia de poção (`_previaHp/Mp/Cp`) |
| `TargetWindow` | `TargetWindow` | Nome e HP do alvo, cor pela diferença de nível (`CorPelaDiferenca`), modo expandido |
| `SkillbarWindow`, `SkillBarHorizontal`, `SkillBarVertical`, `SkillbarWindowMinimal`, `SkillbarSlot` | `SkillbarWindow`, `SkillbarMain`, `SkillbarMin`, `SkillbarSlot` | Barras de atalho (até 5 páginas × 12 slots), expandir/minimizar, girar, travar, desligar tooltip (`SkillbarMain` botões via `ClickEvent`), teclas por slot (`AtualizaTecla`), cooldown (`CooltimeEnd001..009`) |
| `MenuWindow` | `MenuWindow` | Barra de ícones (Character, Inventory, Skill, Action, Quest, Clan, Map, SystemMenu — texturas `Icon_DF_MenuWnd_*` normal/Over/Down) |
| `InventoryWindow`, `InventoryTab`, `InventoryTabHeader`, `InventorySlot`, `InventoryMin` | `InventoryWindow`, `InventoryTab`, `InventoryGearTab`, `InventorySlot` | Equipamento (paperdoll `Hat1…Lring`), abas (`L2TabView`), peso, adena, botões Organizar (`CriaBotaoOrganizar`), cristalizar, lixeira, expandir/minimizar |
| `CharacterInfoWindow` | `CharacterInfoWindow` | Ficha completa (stats de combate, STR/INT/…, Rep/PvP/Raid/Rec) |
| `SkillWindow`, `SkillTab`, `SkillTabHeader`, `SkillTabSmall`, `SkillSection`, `SkillSlot`, `TabActive`, `TabPassive`, `TabLearn`, `SkillLearnWindow`, `SkillLearnItem`, `SkillLearnDetail`, `SkillLearnRequirement`, `ToolTipSkill` | `SkillWindow`, `SkillTab`, `SkillSlot`, `SkillLearnWindow`, `SparkEnchantSkillWindow` | Lista de skills ativas/passivas/aprender, enchant de skill |
| `ActionWindow`, `ActionSlot`, `ToolTipAction` | `ActionWindow`, `ActionSlot` | Ações básicas/party/token/sociais (arrastáveis para a barra) |
| `BuffWindow`, `DebuffWindow`, `BuffSlot`, `DebuffSlot` | `BuffWindow`, `DebuffWindow`, `BuffSlot` | Buffs/debuffs com duração; **Alt+clique num buff cancela** (`BuffSlot.AltClique` → pacote SPARK) |
| `ChatWindow`, `ChatTab`, `ChatTabHeader`, `SparkChat` | `ChatWindow`, `ChatTab`, `SparkChatFiltro`, `SparkComandos`, `SparkLinkItem`, `SparkBalao` | Chat com abas, filtros por canal, menu da aba, tell rápido, links de item, sugestões de nome, redimensionar (`CantoDoChat`) e altura do sistema (`BordaDoSistema`) |
| `PartyWindow` | `PartyWindow` | Cartões de membros, barras, buffs por membro (`TrocaModoBuff`), menu de membro (`MenuDeMembros`, `FechaMenuFora`), assist |
| `SystemMenuWindow` | `SystemMenuWindow` | Opções, links YouTube/Discord/Facebook, Restart/Exit |
| `ExitWindow`, `RestartLocationWindow` | `ExitWindow`, `RestartLocationWindow` | Resumo da sessão (EXP/Adena/itens), escolha de ponto de retorno |
| `ShopWindow`, `ShopTab`, `ShopTabHeader`, `MultisellWindow`, `PrivateShopWindow`, `FindStoreWindow`, `TradeWindow`, `UnionWindow`, `ClanWindow` | idem + `WarehouseWindow`, `MailWindow`, `ManorWindow`, `FriendWindow`, `VipWindow`, `OlympiadWindow`, `SiegeWindow`, `SevenSignsWindow`, `MacroWindow`, `PetWindow`, `BoardWindow`, `OptionsWindow`, `AutoPotionWindow` | Janelas de loja/troca/clã/aliança (conteúdo em código) |
| — (sem UXML) | `OptionsWindow` + `SparkOpcoes`, `SparkTeclas`, `SparkResolucao`, `SparkApiGrafica` | **Janela de Opções**: 6 abas (Video, System/Audio, Game Play, Shortcut, Chat, UI), todos os controles, campos, chaves PlayerPrefs, padrões e comportamento de mouse/teclado em [`opcoes.md`](opcoes.md) |
| `NpcHtmlWindow`, `HtmlWrapper`, `HtmlTable`, `HtmlRow`, `HtmlCell`, `HtmlHyperlink`, `HtmlStyle.uss` | `NpcHtmlWindow`, `SparkHtml` | Diálogo de NPC renderizado a partir do HTML do servidor (`bypass` em links/botões → `RequestBypassToServer`) |
| `L2Tooltip`, `ToolTipSkill`, `ToolTipAction` | `L2ToolTip`, `SparkDicaItem` | Tooltip de item/skill/ação/link (`UpdateTooltip`, `DisplaySkillTooltip`, `MontaLink`) |
| `Nameplate` | `Nameplate`, `PlayerNameplate`, `NameplatesManagerGame` | Nome/título/brasões/balão sobre entidades; estilo muda ao passar o mouse (`UpdateHoveredNameplateStyle`) e ao mirar (`UpdateTargetedNameplateStyle`); barra de cast do jogador |
| `L2ConfirmWindow`, `L2InputAmountWindow`, `L2Button`, `L2Input`, `L2Dropdown`, `L2ListView`, `L2Scrollview`, `L2Bar`, `L2ArrowInput`, `L2TabView`, `L2SlotContainer`, `DraggedSlot`, `WindowTemplate`, `Frame_DF_Ver` | componentes | Controles reutilizáveis |
| `LoginWindow`, `ServerListWindow`, `ServerElement`, `CharSelectWindow`, `CharCreationWindow`, `LicenseWindow`, `Lineage2_Login` | `LoginWindow`, `ServerSelectWindow`, `CharSelectWindow`, `CharCreationWindow`, `LicenseWindow`, `L2LoginUI`, `SparkEasyLogin` | Fluxo de login (lista de servidores com personagens, criar/apagar/restaurar, girar/zoom do personagem) |
| `DefaultQuest`, `QuestWindow` | `SparkQuestHud`, `SparkQuestWindow`, `SparkQuestInfoWindow` | HUD de rastreio de quests (arrastável, lembra posição e proporção) |

## 3. Comportamento ao interagir (mouse, hover, teclado)

### 3.1 Mouse sobre slots (`L2ClickableSlot.HandleSlotClickDown/Up`, código em `code/L2ClickableSlot__*.c`)
- O slot registra `MouseDownEvent` e `MouseUpEvent` (TrickleDown). `MouseEventBase.button`: 0 = esquerdo, 1 = direito, outro = meio.
- **Esquerdo (down)**: se **Shift** estiver pressionado e o slot for `InventorySlot`, chama `SparkLinkItem.Linka` (insere link do item no chat) e consome o evento. Senão: dispara o virtual de "pressionado" (vtable +0x1a8); se o intervalo desde o último clique for ≤ **300 ms** → `HandleLeftDoubleClick`, senão `HandleLeftClick` (vtable +0x1f8). Guarda o timestamp (`DateTimeOffset.UtcNow`).
- **Direito**: só se o slot permitir (`_rightClickEnabled`, byte +0x69) → `HandleRightClick` (vtable +0x1d8).
- **Meio**: `HandleMiddleClick` (vtable +0x1e8).
- **Up**: dispara "solto" (vtable +0x1b8); se o slot tem dado válido e está marcado como clicado, repete a ação correspondente ao botão.
- Som: `SlotClickSoundManipulator` toca `event:/InterfaceSound/click_03` em todo `PointerDown`; botões comuns usam `ButtonClickSoundManipulator` com `click_01`.
- Por tipo de slot:
  - `InventorySlot`: esquerdo seleciona/destaca o slot (desmarca o anterior), duplo clique `UseItem` (confirmação para receitas: "Register … in your recipe book?" → `GameClientPacketHandler.UseItem`); **meio = destruir item** (`RequestDestroyItemPacket`, som `trash_basket`); arrastar para o paperdoll equipa (`L2SlotManager.HandleGearDrag/Equip`), para fora da janela joga no chão (`PontoDoDrop`, `DropItem`, raio `RAIO_DROP`), para a lixeira destrói, para o botão cristalizar `CrystallizeItem`, para a barra de atalho cria atalho de item (`AddItemToSkillbar`), entre slots reordena (`ChangeItemOrder` → `RequestInventoryUpdateOrder`).
  - `SkillbarSlot`: esquerdo `UseShortcut` (log "Use bar slot {n}"); **direito alterna** (`RequestToggleShortcutItem`) itens de toggle (soulshot, spiritshot, blessed spiritshot, summon shots); arrastar move/remove atalho (`MoveSkillbarSlot`, `RemoveSkillbarSlot` → `RequestShortcutReg/Del`).
  - `SkillSlot`/`ActionSlot`: arrastar para a barra (`AddSkillToSkillbar`, `AddActionToSkillbar`); duplo clique usa.
  - `BuffSlot`: **Alt+clique cancela o buff** (pacote `SparkPacoteLivre` com id do jogador e id do buff).
  - `TradeSlot`/`BasketSlot`/`ProductSlot`: arrastar entre inventário e loja/troca (`HandleProductDrag`, `HandleBasketDrag`).
- **Hover em slot**: `SlotHoverDetectManipulator` (`PointerOver/Out`) marca `L2SlotManager._hoverSlot` (destino do drop); `TooltipManipulator` (`PointerIn` → `L2ToolTip.UpdateTooltip`, `PointerOut` → `HideWindow`, `SaiuDaTela`) mostra o tooltip do item (`SparkDicaItem.Monta`: grau, bônus, augment, set, encanto) ou da skill (`DisplaySkillTooltip`, custo de MP/HP/itens).

### 3.2 Janelas
- **Arrastar**: `DragManipulator` em `PointerDownEvent` **só com botão 0**; captura o ponteiro, move na `PointerMoveEvent`, solta no `PointerUpEvent` e grava a posição (`L2Window.GuardaPosicao`, chave por janela em `PlayerPrefs`). `DiagonalResizeManipulator`/`HorizontalResizeManipulator` redimensionam pelo canto/borda (também só botão 0).
- **Trazer para frente**: qualquer `MouseDownEvent` na janela (`L2PopupWindow._RegisterClickWindowEvent_b__1_0/1`) → `BringToFront`; `MouseOverDetectionManipulator` (`PointerEnter/Over/Move`) mantém `L2UI.MouseOverUI`, que faz `ClickManager` ignorar cliques no mundo.
- **Fechar**: botão X (`MouseUpEvent` → `HideWindow`), tecla **Esc** (`CloseWindow` → fecha a última janela aberta / cancela cast) ou o mesmo atalho que abriu (`ToggleHideWindow`).
- **Abas** (`L2Tab`): `MouseDownEvent` no cabeçalho troca a aba (`_InitTabHeader_b__13_0`); classes USS `currentlySelectedTab`/`tab-header`.
- **Rolagem** (`L2Scrollable`): `WheelEvent` rola a lista; `MouseUpEvent` nos botões de seta/trilho.
- **Hover em botões**: `MouseEnter/MouseLeave` trocam classe/imagem (`*_Over`, `*_Down`), ex.: `ChatWindow.Botao`, `OptionsWindow.AbreSuspensa`, `SparkRadarWindow.Botao`, `SparkQuestHud.Redesenha`.
- **Chat**: `MouseDown` no texto dá foco ao campo (`MontaChat_b__5`); `PointerDown` na aba abre menu da aba (`AbreMenuDaAba`); `PointerOverLinkTagEvent`/`PointerOutLinkTagEvent` mostram tooltip de link de item (`<link>` no rich text); `CantoDoChat`/`BordaDoSistema` arrastam tamanho (botão 0); `Keyboard.onTextInput` captura digitação quando o campo tem foco (`OuveTexto`, `TextoDigitado`); Enter envia (`SendChatMessage`): `//` = comando GM (`SendGMCommand`), `/` = comando de cliente (`SparkComandos.Executa`), prefixos `+ ! # @ $ %` escolhem o canal (`SparkChatFiltro`), `"nome` = tell.
- **Party**: hover no cartão mostra buffs do membro após atraso (`_buffSobMouseDesde`), clique abre menu do membro (`MenuDeMembros`), clique fora fecha (`FechaMenuFora`).
- **Mapa/Radar/Quest HUD**: `SparkMapaWindow` (zoom por roda, hover em cidades/lojas/bosses com dica, pino do jogador e membros), `SparkRadarWindow` (zoom, botões com hover), `SparkQuestHud` (arrasto por `PointerDown/Up`, lembra posição `CHAVE_POSICAO`).

### 3.3 Mouse no mundo (`ClickManager.Update`, `TargetManager`, `CameraController`)
- Clique esquerdo (ação `LeftClick` = `<Mouse>/leftButton`) com o ponteiro fora da UI: `Camera.ScreenPointToRay` + `RaioDoClique`; pela layer do collider: **Player/Monster/Npc → `OnClickOnEntity` → `TargetManager.SetTarget`** (envia `RequestSetTarget`; se já é o alvo, segundo clique ataca/interage conforme `AttackAction.NpcAtacavel`/`SparkLoja.TipoDe` para lojas); **Pickup (item no chão)** → `SparkItensNoChao.Pega`; **chão → `OnClickToMove`** (`AndaPara`, marcador `PlaceLocator`, nado `DestinoNadando`). Segurar **Shift** com "Stay in place on ground click (hold)" evita andar; `EhMortoSemShift`.
- Cursor muda por alvo (`CursorManager.ChangeCursor`: `CursorType` normal/atacar/falar/pegar/loja…).
- Botão direito (ação `RightClick`) segurado + mouse = girar câmera (`CameraAxis` = `<Mouse>/delta`, "Mouse X/Y"); roda = zoom (`ZoomAxis` = `<Mouse>/scroll/y`, `UpdateZoom`, limites em `SparkOpcoes`). Enquanto gira, `L2GameUI.DisableMouse` esconde o cursor; ao soltar `EnableMouse`.
- Hover sobre entidade: `NameplatesManagerGame.ProcessHoveredEntity` destaca o nameplate; alvo atual: `ProcessTargetedEntity` (`HeadDisplay_DF_Target_*`).

### 3.4 Teclado — ações e teclas padrão
Fonte: `InputActionAsset` "Inputs" (`raw/InputActionAsset_strings.txt`), `SparkTeclas` (teclas extras do SPARK, remapeáveis em Opções → Shortcut; salvas em `PlayerPrefs` `spark.opt.teclas` / `spark.opt.binds`) e `L2GameUI.CheckUIInputs`.

| Ação | Tecla padrão | Efeito |
|---|---|---|
| Move | W A S D / setas | andar (`InputManager`, "Move" Vector2) |
| Jump / FlyUp, FlyDown | Space / Z | pular; em voo (Wyvern) subir/descer |
| FlyForward/Back/Left/Right | W/S/A/D ou setas | voo |
| Attack | F (opção "atacar sem F": `spark.opt.teclas.atacarsemf`) | ataca o alvo; "Force attack (hold)" = Ctrl |
| NextTarget | (sem padrão; `TargetManager.NextTarget/PreviousTarget`) | próximo alvo visível |
| TargetSelf | T | mira em si |
| Sit | , (vírgula) | sentar/levantar |
| Inventory | I (e Tab, Alt+V) | abre/fecha inventário |
| CharacterStatus | Alt+T | ficha do personagem |
| Skills | K / Alt+K | janela de skills |
| Actions | C / Alt+C | ações |
| SystemMenu | X / Alt+X | menu de sistema |
| Quest | U / Alt+U | quests |
| Clan | N / Alt+N | clã |
| Friends | Y / Alt+Y | amigos |
| Map | M / Alt+M | mapa (Alt+M também troca andar em masmorras) |
| Radar | Alt+O | radar |
| Board | Alt+B | community board |
| Macro | Alt+R | macros |
| Gm | Alt+G | painel GM |
| PartyBuffs | Alt+F | mostra buffs na janela de party |
| HideUI | Alt+H | esconde toda a interface (`TrocaInterface`) |
| HideChat | Alt+J | esconde o chat |
| LowDetail | Alt+P | modo mínimo de detalhe (`SparkOpcoes.TrocaMinimo`) |
| Mute | . (ponto) | silencia tudo |
| ResetLayout | Alt+L | todas as janelas na posição padrão ("The interface was reset to the default layout.") |
| BarPage | Alt+F1…F5 | página da barra de atalho (`SparkTeclas.PaginaPedida` → `SkillbarWindow.OnPageChanged`) |
| Shortcut1-1…12 | F1…F12 | slots da barra 1 |
| Shortcut2-1…12 | 1…0, -, = | slots da barra 2 |
| Shortcut3/4/5-x | (sem padrão) | barras 3–5 |
| Validate | Enter / NumpadEnter | confirma diálogos, envia chat |
| CloseWindow | Esc | fecha janela / cancela cast |
| ArrowUp/ArrowDown | ↑ / ↓ | mensagem anterior/próximo whisper no chat |
| Shift / Ctrl | Shift / Ctrl | modificadores (link no chat, ataque forçado, ficar parado) |
| Test | ` (backquote) | debug |
| Chat | Enter (modo "Enter chat on") | abre o chat; com a opção desligada, qualquer letra digita (ver literal "Enter chat on: …") |

Regras: atalhos são ignorados enquanto `L2GameUI.IsTyping` (campo de chat/texto com foco, `HighlightedInputFieldManipulator` Focus/Blur) ou enquanto `SparkTeclas.Trocando` (captura de nova tecla em Opções: "Press a key…", Esc cancela, Backspace limpa; teclas que digitam no chat são recusadas: "That key types text in the chat…"). Os atalhos de barra repetem segurando (`PlayerShortcuts.ComecaRepeticao/Repete`). Combinações com Alt/Ctrl/Shift usam `OneModifier`/`TwoModifiers` do InputSystem (`SparkTeclas.MontaBindings`).

### 3.4b Janela de Opções
Ver [`opcoes.md`](opcoes.md): abertura/fechamento (Apply, Cancel, Reset Settings, Reset Window Location), caixas/listas/barras/caixas de tecla e cada opção com campo, chave e efeito (prévia ao vivo e reversão no Cancel).

### 3.5 Comandos de chat (`SparkComandos`)
`/attack /assist /target /targetnext /pickup /sit /stand /sitstand /walk /run /walkrun /mount /dismount /mountdismount /unstuck /loc /time /trade /invite /dismiss /leave /changepartyleader /partyinfo /partyduel /duel /friendinvite /frienddel /friendlist /block /unblock /blocklist /clan /pledge /clanwarstart /clanwarstop /clanwarsurrender /allyleave /channelinvite /channelkick /channelleave /channelinfo /channeldelete /channellistupdate /buy /sell /vendor /packagesale /findstore /findprivatestore /dwarvenmanufacture /generalmanufacture /withdraw /equip /useskill /useskillforce /useskillstand /useshortcut /useshortcutforce /useshortcutstand /delay /evaluate /offline /gm /gmlist /gmcancel /nick /sparkfind /attacklist /underattacklist /warlist /siegestatus /olympiadstat /clanpenalty /pet* /summon* /servitormove /social* (hello, bow, applause, dance, laugh, charm, shyness, victory, waiting, no, yes, sad, unaware, propose, provocation, beauty, charge) /couple* (bow, dance, highfive)`. `/action <nome>` executa uma ação da `ActionWindow`. `//comando` vai para o servidor como comando GM.

## 4. Estilo visual
- Tema: `L2Theme.tss` (ThemeStyleSheet) + `L2StyleSheet.uss` (base), fontes `Lineage2`, `Font_StatusNumber`, `tahoma Light`.
- Padrão de molduras: `Frame_DF_Hor/Ver_*` (fatias esquerda/centro/direita), botões `Button_DF_*` com estados `_Over`/`_Down`/`_Disable`, gauges `Gauge_DF_{HP,MP,CP,Exp,Weight}_*` (left/center/right + bg), abas `ChatTab*`, `Aba/Aba_Sobre/Aba_Escolhida` (SPARK), ícones `Icon_DF_MenuWnd_*`, cabeças `HeadDisplay_DF_*`, cursores em `CursorManager.CursorType`, números de dano `DamageTextNumbers` + sprites por tipo (`Critical_*`, `Evaded_*`, `Immune_*`, `CriticalHeal_*`).
- USS por janela em `uss/` (ex.: `L2ListView.uss`: `.l2-list-view-item:hover { background-color: rgba(40,40,40,…) }`, `.alternated`).

## 5. Limites
- UXML/USS foram reconstruídos de um formato binário sem typetree; os atributos vêm de `m_Properties` (name, text, class, picking-mode, etc.) — atributos serializados só no `UxmlSerializedData` (ex.: valores numéricos de sliders) não foram expandidos.
- Comportamentos descritos a partir de código decompilado sem execução; offsets de campos (botão do mouse em `+0x88`/`+0x94`) foram confirmados pelos getters genéricos resolvidos (`MouseEventBase<MouseDownEvent>.get_button`, `get_shiftKey`, `get_altKey`).
- Janelas construídas em código (SPARK) têm o conteúdo descrito pelos métodos e literais, não por UXML.
