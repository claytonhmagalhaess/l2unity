# 07 — Catálogo das demais janelas (inventário, comércio, skills, quests, clã, grupo, GM, eventos e utilidades)

Esta seção da especificação serve para recriar do zero a interface do cliente Lineage II Interlude. Ela cobre **todas as janelas que as outras seções não cobrem**. Ficam de fora: chat/SystemMsg/OnScreenMessage, minimapa/radar/TownMap, OptionWnd/SystemMenu/RestartMenu/MenuWnd, atalhos/ações/macros, HUD de status/party/pet/olimpíada/SSQ/duelo/pesca, login/lobby/loading e o framework. Toda a evidência vem do cliente instalado em `C:\Program Files (x86)\Lineage II Interlude`, que já foi extraído no projeto.

**Legenda de evidência**
- **[O] Observado**: está no código ou no dado, com `arquivo:linha`. `X.uc:N` quer dizer `export\uc\Interface\X.uc` linha N. `NWindow\X.uc:N` quer dizer `export\uc\NWindow\X.uc`. `lay/X.txt` quer dizer `out\re\layout\X.txt`.
- **[I] Inferido**: dedução minha, com a base indicada.
- **[N] A validar no nativo**: o comportamento depende do C++ (NWindow.dll/Engine.dll) ou do servidor, e esse código não está aqui.

Textos: `ssN` = sysstring N e `smN` = systemmsg N, resolvidos em `out\re\strings.json`. Sprites: `out\tool\ui\<pacote>\<grupo>\<nome>.png` (por exemplo `L2UI_CH3.TradeWnd.Trade_Back` → `out\tool\ui\L2UI_CH3\TradeWnd\trade_back.png`).

> **[O] Aviso sobre textos.** Alguns `systemmsg` deste cliente foram **alterados por terceiros**, com palavrões. Exemplos: sm71, sm73, sm74, sm100 (`strings.json`; o sm74 virou "Do you wish to destroy your fucking $s1?!"). Na recriação, use os textos oficiais. Aqui só cito os IDs.

---

## 0. Como ler os campos de layout (Interface.xdat)

Os `.txt` de layout trazem `classe nome LxA @A->Ctrl.B(x,y)` e vários campos `unkNNN`. A âncora quer dizer: o ponto **A deste controle** fica preso ao ponto **B do controle-alvo** (`Ctrl`, ou o pai quando vazio), deslocado por (x,y). Exemplo: `DialogBox.num2 = TOP_LEFT -> num1.TOP_RIGHT (1,0)` monta o teclado 3x3. Nas tabelas abaixo, `@P(x,y)` abrevia `@P->pai.P(x,y)` (mesmo ponto nos dois lados). `@NONE->pai.P` aparece nos filhos que herdam de outro controle (superName). Os layouts foram relidos depois da correção do dump de âncoras. Alguns deles foram identificados por correlação. Valem para todas as tabelas abaixo:

| Campo | Significado | Evidência |
|---|---|---|
| `unk102` | Nome da classe UnrealScript ligada à janela | [O] é sempre igual ao nome do `.uc`. Vem vazio nas janelas sem script: `CropInfoWnd`, `SeedInfoWnd`, `DefaultInfoWnd`, `EventMatchGMCommandWnd`, `SubWndNormal/Enchant` (`interface_layout.json`) |
| `unk103` | Estado de UI em que a janela existe (`GamingState`, `LoadingState`, `EventMatchObserverState`…) | [I] os valores casam com os estados de `_shortcuts.txt` |
| `unk111` | ID da sysstring do **título** da moldura | [I] InventoryWnd=138 "Inventory", TradeWnd=445 "Exchange", BoardWnd=387 "Community" |
| `unk101` | Textura de fundo da moldura (janelas sem `BackTexture` filho) | [I] por exemplo `ClanWnd`→`L2UI_CH3.BloodHoodWnd.bloodhood_back` |
| `unk100` | Janela-hospedeira da aba (filha de um Tab) | [I] `ClanWnd/MagicSkillWnd/QuestTreeWnd` → `MainWnd`, e `MainWnd.txt` lista esses alvos no TabCtrl |
| `unk129` (+`unk108`,`unk126`) | Janela "drawer" acoplada a outra | [I] `ClanDrawerWnd`→`MainWnd.ClanWnd`, `GuideWnd`→`MinimapWnd`, `PartyMatchWaitListWnd`→`PartyMatchRoomWnd`, `PartyMatchOutWaitListWnd`→`PartyMatchWnd`, `UnionDetailWnd`→`UnionWnd`. O lado e o offset (`unk126`, `unk122`, `unk127`) são **[N]** |
| `unk136` | Ícone usado quando a janela é minimizada | [I] InventoryWnd→`L2UI_CH3.MenuIcon.Menuicon2`, BoardWnd→`board_icon` |
| `superName` | Herança de layout: o filho copia todos os controles do pai | [O] `GMInventoryWnd`→`InventoryWnd`, `GMWarehouseWnd`→`WarehouseWnd`, `ManorShopWnd`→`ShopWnd`. Os `InnerWnd` das janelas GM herdam `ClanWnd/DetailStatusWnd/MagicSkillWnd/QuestTreeWnd` (`interface_layout.json`) |

Há também uma tabela de posição padrão em `lay/_wnddefpos.txt`. Às vezes ela **diverge** da âncora do xdat. Exemplo: InventoryWnd no xdat é `CENTER_RIGHT(0,-70)` e em `_wnddefpos.txt:31` é `CENTER_RIGHT x=-46 y=-50`. A precedência entre as duas é **[N]**.

---

## 1. Índice

| Janela | Sistema | Como abre | Script |
|---|---|---|---|
| MainWnd | Contêiner de abas (Status/Skill/Ação/Clã/Quest) | atalhos `T K C N U I` / `Alt+…` (`_shortcuts.txt:46-55`), MenuWnd | MainWnd.uc |
| MagicSkillWnd | Lista de skills (aba de MainWnd) | aba 1 do MainWnd; `K` | MagicSkillWnd.uc |
| QuestTreeWnd | Diário de quests (aba) | aba 4 do MainWnd; `U` | QuestTreeWnd.uc |
| ClanWnd | Clã (aba) | aba 3 do MainWnd; `N` | ClanWnd.uc |
| ClanDrawerWnd | Painéis do clã (drawer) | botões do ClanWnd | ClanDrawerWnd.uc |
| InviteClanPopWnd | Convite ao clã/subunidade | ClanWnd "Invite" | InviteClanPopWnd.uc |
| InventoryWnd | Inventário, equipamento, henna, lixeira, cristalizar | `Tab`/`V`/`Alt+V` (`_shortcuts.txt:44-45,61`), MenuWnd, evento do servidor | InventoryWnd.uc |
| ItemEnchantWnd | Escolher item para encantar | servidor (uso de scroll) | ItemEnchantWnd.uc |
| RefineryWnd | Augment | servidor (NPC) | RefineryWnd.uc |
| UnrefineryWnd | Remover augment | servidor (NPC) | UnrefineryWnd.uc |
| TradeWnd | Troca P2P | servidor (pedido aceito) | TradeWnd.uc |
| ShopWnd | Loja de NPC (compra/venda/provar) | servidor (NPC) | ShopWnd.uc |
| ManorShopWnd | Loja de sementes (Manor) | servidor (NPC) | ManorShopWnd.uc (extends ShopWnd) |
| PrivateShopWnd | Loja privada (4 modos) | servidor | PrivateShopWnd.uc |
| MultiSellWnd | Multisell | servidor (NPC) | MultiSellWnd.uc |
| WarehouseWnd | Armazém (privado/clã/castelo/outro) | servidor (NPC) | WarehouseWnd.uc |
| SelectDeliverWnd | Escolha do destinatário do frete | servidor (NPC) | SelectDeliverWnd.uc |
| DeliverWnd | Envio de frete | servidor | DeliverWnd.uc |
| RecipeBookWnd | Livro de receitas | servidor | RecipeBookWnd.uc |
| RecipeManufactureWnd | Fabricar (próprio) | servidor | RecipeManufactureWnd.uc |
| RecipeTreeWnd | Árvore de materiais | botão nas janelas de fabricação | RecipeTreeWnd.uc |
| RecipeShopWnd | Montar loja de fabricação | servidor | RecipeShopWnd.uc |
| RecipeBuyListWnd | Lista da loja de fabricação alheia | servidor | RecipeBuyListWnd.uc |
| RecipeBuyManufactureWnd | Pedir fabricação a outro jogador | servidor | RecipeBuyManufactureWnd.uc |
| SkillTrainListWnd | Lista de skills aprendíveis | servidor (NPC) | SkillTrainListWnd.uc |
| SkillTrainInfoWnd (+SubWndNormal/SubWndEnchant) | Detalhe e aprender | servidor | SkillTrainInfoWnd.uc |
| QuestListWnd | Lista de quests do NPC | servidor | QuestListWnd.uc |
| QuestBtnWnd / TutorialBtnWnd / MailBtnWnd | Botões piscantes acima do chat | servidor | *.uc homônimos |
| TutorialViewerWnd | HTML do tutorial | servidor | TutorialViewerWnd.uc |
| HennaListWnd / HennaInfoWnd | Desenhar ou remover símbolo | servidor (NPC) | *.uc homônimos |
| PartyMatchWnd | Busca de grupo: lista de salas | servidor | PartyMatchWnd.uc |
| PartyMatchMakeRoomWnd | Criar/editar sala | botões | PartyMatchMakeRoomWnd.uc |
| PartyMatchRoomWnd | Sala de grupo + chat | servidor | PartyMatchRoomWnd.uc |
| PartyMatchWaitListWnd / PartyMatchOutWaitListWnd | Lista de espera (drawer) | botões / servidor | *.uc homônimos |
| UnionWnd / UnionDetailWnd | Canal de comando | servidor | *.uc homônimos |
| BoardWnd | Comunidade (BBS) | `B`/`Alt+B` (`_shortcuts.txt:52,69`), SystemMenu, ClanWnd, servidor | BoardWnd.uc |
| HelpHtmlWnd | Ajuda HTML local | SystemMenu, MacroWnds | HelpHtmlWnd.uc |
| GuideWnd | Guia do aventureiro (drawer do mapa) | servidor / MinimapWnd | GuideWnd.uc |
| UserPetitionWnd / PetitionWnd / PetitionFeedBackWnd | Petição ao GM | SystemMenu, `O` (`_shortcuts.txt:54`) [I], servidor | *.uc homônimos |
| ManorInfoWnd (+SeedInfoWnd/CropInfoWnd/DefaultInfoWnd) | Informação do Manor | servidor (NPC) | ManorInfoWnd.uc |
| ManorSeedInfoSettingWnd / ManorSeedInfoChangeWnd | Configurar sementes (castelão) | servidor | *.uc |
| ManorCropInfoSettingWnd / ManorCropInfoChangeWnd | Configurar compra de colheita | servidor | *.uc |
| ManorCropSellWnd / ManorCropSellChangeWnd | Vender colheita | servidor | *.uc |
| SiegeInfoWnd | Inscrição em cerco | servidor (NPC) | SiegeInfoWnd.uc |
| HeroTowerWnd | Monumento dos heróis | servidor (NPC) | HeroTowerWnd.uc |
| CalculatorWnd | Calculadora | servidor (comando/item) | CalculatorWnd.uc |
| ZoneTitleWnd | Nome da zona ao entrar | evento nativo | ZoneTitleWnd.uc |
| ObserverWnd | Botão "Return" no modo observador | servidor | ObserverWnd.uc |
| PCCafeEventWnd / CouponEventWnd | Pontos PC Bang / cupom | servidor | *.uc |
| GMWnd + GMDetailStatus/GMInventory/GMWarehouse/GMMagicSkill/GMQuest/GMClan/GMSnoop | Ferramentas de GM | `G`/`Alt+G` (`_shortcuts.txt:53,72`), servidor | *.uc |
| EventMatchGMWnd / GMFenceWnd / GMCommandWnd / GMMsgWnd / SpecialMsgWnd / ObserverWnd | Partidas de evento (GM e transmissão) | servidor / GM | *.uc (CommandWnd não tem script) |
| GametipWnd, ReplayListWnd, ReplayLogoWnd(_xx), BenchMarkMenuWnd, TeaserSlideWnd(_xx) | Fronteira (estados fora do jogo) | estados próprios | *.uc |
| *(sem janela no xdat)* NPC HTML, Messenger | Diálogo de NPC, amigos | servidor / `Y` | **nativo** (§18) |

---

## 2. Padrões comuns (valem para várias janelas)

### 2.1 Diálogo modal (DialogBox)
- [O] API em `UICommonAPI.uc:25-152`: `DialogShow(tipo, texto)`, `DialogSetID`, `DialogSetReservedInt/2/3`, `DialogSetParamInt` (máximo do NumberPad, ou duração do Progress), `DialogSetDefaultOK`, `DialogSetEditType("number")`, `DialogSetEditBoxMaxLength`, `DialogSetString`. Leitura com `DialogIsMine()`, `DialogGetID()`, `DialogGetString()` e `DialogGetReservedInt*()`. Os tipos são `DIALOG_OKCancel, OK, OKCancelInput, OKInput, Warning, Notice, NumberPad, Progress` (`UICommonAPI.uc:4-13`).
- [O] O resultado chega como `EV_DialogOK` (1710) ou `EV_DialogCancel` (1720), disparados pelo próprio DialogBox (`DialogBox.uc:362,369`). Toda janela que usa diálogo registra `EV_DialogOK` e checa `DialogIsMine()`.
- [I] O DialogBox é **um só e compartilhado**. A "posse" fica com o script que chamou `DialogShow` por último. Por isso a mesma regra se repete: clicar na lista de cima fecha o diálogo pendente (`WarehouseWnd.uc:125-137`, `PrivateShopWnd.uc:127-139`).

### 2.2 Padrão "duas listas" (Top/Bottom)
Usado por Warehouse, Shop, ManorShop, PrivateShop e Deliver. Layout típico: 256x401; `TopList` 239x139 com 6x4 ícones de 32 px em (9,48); `BottomList` 239x104 com 6x3 em (9,215); `UpButton`/`DownButton` 15x15 em (112,194)/(130,194); OK/Cancel 76x23 em (51,372)/(131,372); `PriceText`/`AdenaText` em (158,332)/(158,351); `InvenWeight` em (28,331) (`lay/ShopWnd.txt`, `lay/WarehouseWnd.txt`).
- [O] Duplo clique ou botão move de uma lista para a outra. Arrastar entre listas também move, e `info.AllItemCount > 0` significa "mover tudo" sem perguntar quantidade (`ShopWnd.uc:104-120`).
- [O] Item empilhável com quantidade > 1 abre `DIALOG_NumberPad` com sm72 ("How many … move?"). Os IDs são `DIALOG_TOP_TO_BOTTOM=111` e `DIALOG_BOTTOM_TO_TOP=222` (`ShopWnd.uc:3-4`, `WarehouseWnd.uc:7-8`). Itens empilháveis iguais (mesmo ClassID) se somam na lista de destino (`WarehouseWnd.uc:175-185`).
- [O] O controle `InvenWeight` simula o peso com `AddWeight/ReduceWeight/ZeroWeight` (`NWindow\UIAPI_INVENWEIGHT.uc`, usado em `ShopWnd.uc:162-216`).
- [O] "Mover tudo" (`AllItemCount`) é definido pelo nativo quando o arrasto começa com **Alt** apertado e a pilha tem mais de 1: `AllItemCount = min(quantidade, +0x1e90)` (`NCItemWnd` slot 104, `NWindow.dll@0x1002eb00`, `GetAsyncKeyState(VK_MENU)`). Vale para qualquer `ItemWindow` (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`).

### 2.3 Fechamento que avisa o servidor
- [O] `OnSendPacketWhenHiding()` é chamado quando o usuário fecha a janela (X/Esc) e serve para mandar o cancelamento: TradeWnd→`RequestTradeDone(false)` (`TradeWnd.uc:19-22`); PrivateShopWnd→`RequestQuitPrivateShop` (`PrivateShopWnd.uc:38-41,182-192`); RecipeShopWnd→`RequestRecipeShopManageQuit` (`RecipeShopWnd.uc:130`); PartyMatchWnd→`RequestExitPartyMatchingWaitingRoom` (`PartyMatchWnd.uc:27-30`); PartyMatchRoomWnd→sai ou dissolve a sala (`PartyMatchRoomWnd.uc:32-45`). [N] É preciso confirmar se o nativo chama isso só no fechamento pelo usuário, ou também no `HideWindow` do script.

### 2.4 Exclusividade das janelas de comércio
- [O] Ao abrir, Warehouse, Shop, PrivateShop, MultiSell, Deliver e Trade **fecham o InventoryWnd** (`WarehouseWnd.uc:351-354`, `ShopWnd.uc:360-363`, `PrivateShopWnd.uc:870-873`, `MultiSellWnd.uc:295-298`, `DeliverWnd.uc:270-273`). O TradeWnd fecha também Warehouse, PrivateShop, Shop e MultiSell (`TradeWnd.uc:184-203`).
- [O] O pedido de alternar o inventário é **ignorado** quando Warehouse, Trade, Shop, MultiSell ou Deliver estão abertos, ou quando PrivateShop está aberto em modo `PT_Sell` (`InventoryWnd.uc:1173-1213`).

### 2.5 Formato de parâmetros
- [O] Os eventos e boa parte das natives usam uma string "param" escrita com `ParamAdd(param, chave, valor)` e lida com `ParseInt/ParseString/ParseInt64`. Listas são indexadas pelo sufixo: `num`, `classID0`, `count0`, … (`ShopWnd.uc:468-476`). `ParamToItemInfo(param, info)` monta um `ItemInfo` a partir das chaves padrão do item. [I] O formato serializado exato (separadores) é **[N]**; ver a seção do framework.

### 2.6 Origem provável dos eventos (pacotes do servidor)
[I] Os nomes casam com os pacotes de `docs/client_spec/92_protocolo_opcodes.md` (referência aCis). Exemplos: `ItemList 0x1b`→Inventory*, `TradeStart 0x1e`→`EV_TradeStart`, `WarehouseDepositList/WithdrawList 0x41/0x42`→`EV_WarehouseOpenWindow`, `ChooseInventoryItem 0x6f`→`EV_EnchantShow`, `ExShowVariationMakeWindow FE:50`→`EV_ShowRefineryInteface`, `MultiSellList 0xd0`→`EV_MultiSell*`. Cito a correspondência em cada janela como [I]. O mapeamento real pacote→evento está no NWindow.dll (`91_eventos_nativos.md`).

---

## 3. MainWnd e suas abas (Skill, Quest, Clã)

### 3.1 MainWnd — contêiner de abas
| Item | Valor |
|---|---|
| Layout | 256x401, `@CENTER_LEFT(0,-70)`; `MainWndTex` 256x46 `L2UI_CH3.Button.MainWndTabBack` em (0,20); `MainTabCtrl` 224x41 em (12,25), 5 abas de 45x41 (`lay/MainWnd.txt`) |
| Abas | [O] alvos `DetailStatusWnd`, `MagicSkillWnd`, `ActionWnd`, `ClanWnd`, `QuestTreeWnd`. Texturas `L2UI_CH3.TabButton.MainWndTabBtn1..5`(`On`). Tooltips ss194/196/197/895/198 ("Status (Alt+T)"…) (`lay/MainWnd.txt`) |
| Abre | [O] `ShowMainWindow Tab=Status/Skill/Action/Quest/Pledge` (`_shortcuts.txt:46-50,62-66`); `I`/`Alt+I` sem aba (`:55,74`); MenuWnd `ShowWindowWithFocus("MainWnd")` (`MenuWnd.uc:35`) |
| Título por aba | [O] ss433/119/127/439/118 (`MainWnd.uc:36-69`). Ao trocar de aba esconde `ClanDrawerWnd`. Na aba Clã chama `ClanWnd.getmyClanInfo()` e `NoblessMenuValidate()` |
| Minimizar | [O] `Iconize` com `L2UI_CH3.TABBUTTON.MainWndTabIcon1..5` + tooltip da aba ativa (`MainWnd.uc:18-34`) |
| Abas filhas | [O] 256x335 `@TOP_LEFT(0,65)`, `unk100=MainWnd` (`lay/ClanWnd.txt`, `lay/QuestTreeWnd.txt`, `lay/MagicSkillWnd.txt`) |

[N] A troca de aba feita pelo TabCtrl (mostrar o alvo e esconder os outros) é nativa. Os scripts só reagem a `OnClickButton("MainTabCtrlN")`.

### 3.2 MagicSkillWnd — skills aprendidas
| Item | Valor |
|---|---|
| Layout | Tab "Active/Passive" 189x23 em (12,8). Subjanelas `ASkill` e `PSkill` 239x280 em (9,40), cada uma com ItemWindow 6x8 (máx. 80) `popupType=Skill` (`lay/MagicSkillWnd.txt`). Fundo `L2UI_CH3.SkillWnd.skill_back` (unk101) |
| Eventos | `EV_SkillListStart` (limpa as duas listas), `EV_SkillList`, `EV_LanguageChanged` (pede a lista de novo) (`MagicSkillWnd.uc:28-43`) |
| Parâmetros | `Type` (ESkillCategory; `SKILL_Passive` vai para PSkill), `ClassID`, `Level`, `Lock`, `Name`, `IconName`, `Description`, `EnchantName`, `Command` (`MagicSkillWnd.uc:89-97`) |
| Requests | `RequestSkillList()` no `OnShow` (`:17-20`). Clique simples numa skill ativa chama `UseSkill(ClassID)` (`:45-54`) |
| Regras | [O] `ItemSubType=SCIT_SKILL` e `bIsLock` quando `Lock>0` (`:104-118`). [I] O arraste para a barra de atalhos é nativo e usa o `ItemSubType`. |
| Origem | [I] `SkillList 0x58` |

### 3.3 QuestTreeWnd — diário de quests
| Item | Valor |
|---|---|
| Layout | `MainTree` (TreeCtrl) 242x274 em (7,27); `btnClose` 77x23 ss385 "Abort" em (91,306); `chkNpcPosBox` em (10,310); `txt324` ss324 "Accepted quests"; `txtQuestNum` em (190,12); `QuestToolTip` 15x15 (`lay/QuestTreeWnd.txt`). Fundo `L2UI_CH3.QUESTWND.QuestWndBack` |
| Eventos | `EV_QuestListStart/List/End`, `EV_QuestSetCurrentID`, `EV_InventoryAddItem/UpdateItem` (atualizam a contagem de itens de quest), `EV_DialogOK`, `EV_LanguageChanged` (`QuestTreeWnd.uc:152-196`) |
| Parâmetros | `QuestID`, `Level`, `Completed` (`:129-131`); `classID` dos eventos de inventário (`:166`) |
| Requests | `QuestAPI.RequestQuestList()` no `OnShow` (`:41-44,92-95`); `QuestAPI.RequestDestroyQuest(id)` (`:176`); `QuestAPI.SetQuestTargetInfo(on, radar, seta, nome, pos, id)` (`:362-379`) |
| Regras | [O] Máximo exibido de **25** quests, texto "(n/25)" (`:3,269-272`). A árvore tem nós `root.<QuestID>`, filhos por nível do diário e ícones de tipo `QuestWndInfoIcon_1..4` (11x11) conforme `GetQuestType` (`:439-560`). "Abort" sem quest expandida mostra sm1201 (Notice). Com quest expandida mostra sm182 (Warning) e, no OK, destrói a quest e remove o nó (`:398-437,169-190`). O checkbox controla o marcador de destino: desmarcado chama `SetQuestOff()`; se `IsMinimapOnly` o marcador vai só no minimapa, senão vai em radar + seta (`:275-375`). `EV_QuestSetCurrentID` expande a quest recém-recebida e o último nó do diário (`:198-230`) |
| Origem | [I] `QuestList 0x80` |

### 3.4 ClanWnd — clã
| Item | Valor |
|---|---|
| Layout | 256x335. Textos de cabeçalho ss1321/342/343/88; `ComboboxMainClanWnd` 188x19 (escolhe a subunidade); `ClanMemberList` ListCtrl 237x137 com colunas ss50 (127 px), ss537 (30), ss391 (30), ss346 (50); 13 botões 76x23 `L2UI_ch3.button.btn1_normal` em 4 linhas (y=230/253/280/303): MemInfo/Hero, MemAuth, Board, Info, Penalty, Quit, WarInfo, WarDeclare, WarCancel, AskJoin, AuthEdit, TitleManage (`lay/ClanWnd.txt`) |
| Eventos | `EV_ClanInfo`, `EV_ClanInfoUpdate`, `EV_ClanDeleteAllMember`, `EV_ClanAddMember`, `EV_ClanMemberInfoUpdate`, `EV_ClanAddMemberMultiple`, `EV_ClanDeleteMember`, `EV_ClanMyAuth`, `EV_ClanSubClanUpdated`, `EV_GamingStateEnter/Exit` (`ClanWnd.uc:127-141`) |
| Parâmetros principais | ClanInfo: `ClanID, ClanType, ClanName, ClanMasterName, CrestID, SkillLevel, CastleID, AgitID, ClanRank, ClanNameValue, Status, Guilty, AllianceID, AllianceName, AllianceCrestID, InWar` (`:987-1006`). Membro: `Name, Level, Class, Gender, Race, ID, HaveMaster` (`:1111-1117`). MyAuth: `ClanMaster, Join, NickName, ClanCrest, War, Grade, ManageMaster, OustMember` (`:1672-1685`) |
| Requests | `RequestClanMemberInfo`, `RequestClanMemberAuth`, `RequestClanLeave(nome,tipo)`, `RequestClanWarList(0,0)`, `RequestClanDeclareWar()`, `RequestClanWithdrawWar()`, `RequestClanGradeList()`, `ExecuteCommandFromAction("pledgepenalty")`, e `EV_ShowBBS` com `Index=3` (aba Clan do BBS) (`:318-480`) |
| Regras | [O] Cada botão de painel alterna o painel correspondente do `ClanDrawerWnd` e reseta os outros (`m_currentactivestatus1..8`). O botão habilita conforme estar no clã, nível do clã e permissões (`resetBtnShowHide`, `:651-923`). Sem clã, quase tudo fica desabilitado (`:658-673`). "Invite" exige alvo e abre `InviteClanPopWnd` (`:1652-1670`). Subunidades por índice da combo: 0 MAIN, 1-6 KNIGHT1..6, 7 ACADEMY (`:143-180`) |
| Origem | [I] `PledgeShowMemberListAll/Add/Update/Delete 0x53-0x56`, `PledgeInfo 0x83`, `ManagePledgePower 0x30` |

### 3.5 ClanDrawerWnd — painéis do clã (drawer)
| Item | Valor |
|---|---|
| Layout | 256x512, drawer acoplado a `MainWnd.ClanWnd` (`unk129`, `lay/ClanDrawerWnd.txt` com 197 linhas). Subpainéis 100%x90% em (0,20): `ClanMemberInfoWnd` (com sub-diálogos 241x173 em (8,172): ChangeMemberName, ChangeMemberGradeName, ChangeMemberKnightHood, AssignApprentice), `ClanMemberAuthWnd`, `ClanInfoWnd` (organograma com 8 ícones 32x32), `ClanPenaltyWnd`, `ClanAuthManageWnd`, `ClanAuthEditWnd`, `ClanEmblemManageWnd`, `ClanWarManagementWnd` (abas Declared/GotDeclared 240x310), `ClanHeroWnd` |
| Estados | [O] `SetStateAndShow("ClanMemberInfoState" / "ClanMemberAuthState" / "ClanInfoState" / "ClanAuthManageWndState" / "ClanEmblemManageWndState" / "ClanWarManagementWndState" / "ClanAuthEditWndState" / "ClanHeroWndState")` mostra um painel e esconde os outros (`ClanDrawerWnd.uc:93-185`) |
| Eventos | `EV_ClanAuthGradeList, EV_ClanWarList, EV_ClanCrestChange, EV_ClanMemberInfo, EV_ClanSkillList, EV_ClanSkillListAdd, EV_ClanAuth, EV_ClanAuthMember, EV_GamingStateExit, EV_ClanClearWarList` (`:663-700`) |
| Requests | `RequestInviteParty`, `RequestClanExpelMember`, `RequestClanDeletePupil`, `RequestClanChangeNickName`, `RequestClanChangeGrade`, `RequestClanAssignPupil`, `RequestClanRegister/UnregisterCrest`, `RequestClanRegister/UnregisterEmblem`, `RequestClanWarList`, `RequestClanDeclareWarWidhClanName`, `RequestClanWithdrawWarWithClanName`, `RequestClanReorganizeMember`, `RequestEditClanAuth(grade, powers[])`, `RequestClanAuth` (`:187-465,1097-1145,1601-1700`) |
| Regras | [O] A edição de permissões valida as dependências entre checkboxes (`Proc_AuthValidation`, `:980-1037`) e desativa permissões para a Academia (`:1794-1853`). [I] O registro de brasão/emblema sem argumento abre um seletor de arquivo nativo **[N]** |

### 3.6 InviteClanPopWnd
256x180 `@BOTTOM_CENTER(0,-45)`, fundo `L2UI_CH3.LoginWnd.logon_back` 256x120, título ss1427, combo 128x19 e botões ss1337/ss1342 (`lay/InviteClanPopWnd.txt`). [O] OK chama `RequestClanAskJoin(targetID, reserved da combo)` (`InviteClanPopWnd.uc:38-71`). A combo é preenchida com as subunidades em `InitializeComboBox` (`:73`). Fecha em `EV_GamingStateExit` (`:26-32`).

---

## 4. Inventário e melhorias de item

### 4.1 InventoryWnd
| Item | Valor |
|---|---|
| Layout | 256x401 `@CENTER_RIGHT(0,-70)`, título ss138, ícone `Menuicon2`. `BackTexture` 256x381 `L2UI_CH3.InventoryWnd.Inventory_Back` em (0,20). 15 slots de equipamento `EquipItem_*` 34x34. `HennaItem` 26x84 em (223,39). `InventoryItem`/`QuestItem` 236x139, 6x4, máx. 250, em (9,188). `InventoryTab` "Item/Quest" em (12,159). `CrystallizeButton` 34x34 (14,351) com tooltip ss891 (`Inventory_recipe`). `TrashButton` 34x34 (208,351) com tooltip ss890 (`Inventory_trash`). `AdenaIcon` + `AdenaText` em (110,356). `InvenWeight` 85x12 em (117,372). `ItemCount` em (241,162) (`lay/InventoryWnd.txt`) |
| Abre | [O] `EV_InventoryOpenWindow` mostra e dá foco (`InventoryWnd.uc:732-738`). `EV_InventoryToggleWindow` alterna, chama `RequestItemList()` e toca `IFST_INVENWND_OPEN/CLOSE` (`:1153-1169`). `EV_InventoryHideWindow`. [I] Os atalhos `Tab`/`V` geram o Toggle (`_shortcuts.txt:44-45`) **[N]** |
| Eventos | `EV_InventoryClear, OpenWindow, HideWindow, AddItem, UpdateItem (type=add/update/delete), ItemListEnd, AddHennaInfo, EV_UpdateHennaInfo, ToggleWindow, EV_DialogOK, EV_UpdateUserInfo` (`:92-132`) |
| Requests | `RequestUseItem`, `RequestUnequipItem(serverID, slotBitType)`, `RequestDropItem(serverID, n, loc)`, `RequestDestroyItem`, `RequestCrystallizeItem(serverID,1)`, `PetAPI.RequestGetItemFromPet`, `RequestItemList`, `SaveInventoryOrder/LoadInventoryOrder` (`:229-1164`) |

**Slots de equipamento** [O] (`InventoryWnd.uc:14-29,547-730`; posições em `lay/InventoryWnd.txt`):

| Slot (índice) | Pos. | SlotBitType que o ocupa | Observação |
|---|---|---|---|
| Underwear 0 | (137,36) | 1 UNDERWEAR, 8192 BACK | — |
| Head 1 | (53,36) | 64 | Desabilitado com ícone Ex1 quando ALLDRESS |
| Hair 2 | (14,36) | 65536 HAIR, 524288 HAIRALL | — |
| Hair2 3 | (92,36) | 262144 | HAIRALL replica o item aqui, desabilitado |
| Neck 4 | (176,36) | 8 | — |
| RHand 5 | (14,74) | 128, 16384 RLHAND | — |
| Chest 6 | (53,74) | 1024, 32768 ONEPIECE, 131072 ALLDRESS | — |
| LHand 7 | (92,74) | 256 | Com RLHAND mostra o item desabilitado (`Icon_dualcap`). Mantém flecha se a arma for arco ou vara (WeaponType 6/10) |
| REar 8 / LEar 9 | (137,74)/(176,74) | 2/4/6 | O lado vem de `GetAccessoryServerID` (`:1215-1230`) |
| Gloves 10 / Legs 11 / Feet 12 | (14/53/92,112) | 512/2048/4096 | ONEPIECE ocupa Legs (IconNameEx2). ALLDRESS ocupa Head/Gloves/Legs/Feet (Ex1..Ex4), todos desabilitados |
| RFinger 13 / LFinger 14 | (137/176,112) | 16/32/48 | Mesma lógica dos brincos |

**Regras** [O]:
- Duplo clique ou clique direito chama `UseItem`. Se for receita, pede confirmação (sm798, `DIALOG_USE_RECIPE=1111`). Se `PopMsgNum>0`, mostra esse sm antes (`DIALOG_POPUP=2222`). Caso contrário, `RequestUseItem` (`:156-165,953-976`).
- Drag & drop (`:184-344`): dentro da mesma lista reordena (SwapItems em cascata). De `EquipItem*` para a lista desequipa. De `PetInvenWnd` busca do pet (com NumberPad se empilhável). Para `EquipItem*` equipa, exceto ETCITEM. Para `TrashButton` destrói: sm74 Warning; empilhável pede quantidade sm73 (NumberPad); "tudo" vai direto ao sm74. Para `CrystallizeButton` cristaliza com sm336, só se `HasCrystallizeAbility() && IsCrystallizable(ClassID)`.
- Soltar no mundo (`strTarget=="Console"`) larga o item no ponto do clique (`GetClickLocation`). Item único usa sm400. Empilhável pede quantidade com sm71 (0 vira 1). "Tudo" usa sm1833 (`:347-383,1103-1116`). Os IDs de diálogo são 3333-10000 (`:3-12`).
- O botão de cristalizar só aparece se o personagem tem a habilidade (`:134-148`).
- Contador "(n/limite)" soma inventário + quest + equipados, com limite de `UIDATA_PLAYER.GetInventoryLimit()` (`:1071-1088`).
- Ordem dos itens é salva localmente por ClassID ao fechar (`SaveInventoryOrder`) e reaplicada ao fim da lista (`OrderItem`): itens novos vão para o começo (`:979-1069`). Um `update type=add` também põe o item na frente (`:770-793`).
- Henna: a linha do `HennaItem` tem `ClassStep` (1..3) entradas (`SetRow`); o símbolo inativo aparece como `bDisabled` (`:889-940`).
- Adena: `MakeCostString(GetAdena())` com tooltip `ConvertNumToText` (`:942-951`). Sons de destruir/cristalizar: `IFST_TRASH_BASKET` (`:1120-1135`).
- Variante **GMInventoryWnd** (herda o layout): esconde Crystallize/Trash/Weight, preenche com `EV_GMObservingInventory*` e alterna com `GMAPI.RequestGMCommand(GMCOMMAND_InventoryInfo, nome)` (`GMInventoryWnd.uc:16-63`).

### 4.2 ItemEnchantWnd
| Item | Valor |
|---|---|
| Layout | 256x401 `@CENTER_RIGHT(-256,-70)` (à esquerda do inventário). Fundo `L2UI_CH3.InventoryWnd.itemenchant_back`. `txtTitle` ss1221; `ItemWnd` 240x318, 6x9, máx. 250; OK/Cancel (`lay/ItemEnchantWnd.txt`) |
| Eventos | `EV_EnchantShow` (`ClassID` do pergaminho), `EV_EnchantHide`, `EV_EnchantItemList` (um item candidato por evento), `EV_EnchantResult` (`ItemEnchantWnd.uc:19-37`) |
| Requests | OK → `EnchantAPI.RequestEnchantItem(serverID)` do item selecionado. Cancel → `RequestEnchantItem(-1)` e fecha (`:52-66`) |
| Regras | [O] Título = ss1220 + "(" + nome do pergaminho + ")" (`:73-83`). Fecha com qualquer resultado (`:98-103`). [I] Origem: `ChooseInventoryItem 0x6f` / `EnchantResult 0x81` |

### 4.3 RefineryWnd — augment
| Item | Valor |
|---|---|
| Layout | 266x244 `@CENTER(0,0)`, título ss1477, fundo `L2UI_ch3.RefineryWnd.RefineWnd_back`. Três `ItemDragBoxN` 32x32 em (77,51)/(157,51)/(117,91), cada um com `DropHighlight` e `SelectedItemHighlight` 40x45. Resultado `ItemRefined` em (116,80). Animações `RefineResult1..3` 128x128 (`refinegrade1..3_00`) e `RefineLoadingAnim` 256x256 (`refineloading_01`). `RefineryProgress` 250x5 em (8,200). `btnRefine`/`btnClose` 65x20 `smallbutton2` ss1477/ss908 (`lay/RefineryWnd.txt`) |
| Eventos | `EV_ShowRefineryInteface`, `EV_RefineryConfirmTargetItemResult`, `…RefinerItemResult`, `…GemStoneResult`, `EV_RefineryRefineResult`, `EV_DialogOK` (`RefineryWnd.uc:317-354`) |
| Máquina de estados | [O] 1) soltar arma no Box1 → `RefineryAPI.ConfirmTargetItem(id)`; resultado `Result=1` aceita (`:387-422`). 2) soltar Life Stone no Box2 → `ConfirmRefinerItem`; resposta traz `GemStoneCount` e `GemStoneClassID`; texto sm1959 com nome e quantidade (`:217-255,425-465`). 3) soltar gemstones no Box3 → `ConfirmGemStone(...,count)`; a quantidade vem de `AllItemCount` ou do NumberPad sm72 (`:468-524,676-692`). 4) "Augment" toca a animação de loading + progresso; ao fim da animação, os boxes deslizam até o resultado em 1,5 s e é enviado `RequestRefine(alvo, refinador, gem, qtd)` (`:559-629,730-757`). 5) `Result=1` mostra o item com `RefineryOp1/2` e anima pela qualidade `UIDATA_REFINERYOPTION.GetQuality(Option2)`, limitada a 1..4 (o 4 toca as três animações) (`:632-728`). `Result=0` cancela |
| Textos | sm1957 → sm1958 → sm1959 → sm1984 → sm1962 (`:166,206,245,280,310`) |
| Sons | `ItemSound2.smelting.Smelting_dragin/smelting_loding/smelting_dragout/smelting_finalB/C/D` (`:179,330-341,533,547,704-721`) |
| Regras | [O] `OnShow` abre o inventário junto (`InventoryWndScript.HandleOpenWindow()`, `:130-134`). Cada box só aceita item na sua etapa (`:363-384`). [I] Origem: `ExShowVariationMakeWindow FE:50`, `ExConfirmVariation* FE:52-54`, `ExVariationResult FE:55` |

### 4.4 UnrefineryWnd — remover augment
266x244 `@CENTER(200,0)`, título ss1478. Box `ItemUnrefine` em (116,80), `UnRefineryProgress`, botões ss1479/ss908 (`lay/UnrefineryWnd.txt`).
[O] Soltar o item chama `ConfirmCancelItem(serverID)`. A resposta traz `Option1/2`, `Adena` (int64) e `Result`, e mostra o custo. Sem adena suficiente, o botão fica desabilitado com sm279 (`UnrefineryWnd.uc:112-183,246-263`). "Remove" roda a animação + progresso. No fim do progresso (`OnProgressTimeUp`) envia `RequestRefineCancel(serverID)` (`:216-296`). `Result=1` zera as opções e mostra sm1965 (`:299-328`). [I] Origem: `ExShowVariationCancelWindow FE:51`, `ExConfirmCancelItem FE:56`, `ExVariationCancelResult FE:57`.

---

## 5. Comércio

### 5.1 TradeWnd — troca P2P
| Item | Valor |
|---|---|
| Layout | 256x471 `@CENTER(0,0)`, título ss445, `Trade_Back`. `InventoryList` 239x139 6x4 em (9,35); `MoveButton` 15x15 `downbutton` em (140,181); `InvenWeight` em (180,182); `MyList` 239x108 6x3 em (9,202), com label ss1435 "My …"; `TargetName` em (11,313); `OtherList` 239x108 em (9,329) (`noItemDrag` nas duas últimas); OK/Cancel em y=442 (`lay/TradeWnd.txt`) |
| Eventos | `EV_TradeRequestStartExchange` (`targetID`), `EV_TradeStart` (`targetId`), `EV_TradeAddItem` (`destination=inventoryList/myList/otherList` + item), `EV_TradeUpdateInventoryItem` (`type`), `EV_TradeOtherOK`, `EV_TradeDone`, `EV_DialogOK/Cancel` (`TradeWnd.uc:29-61`) |
| Requests | `AnswerTradeRequest(bool)`, `RequestAddTradeItem(serverID, n)`, `RequestTradeDone(bool)` |
| Regras | [O] Pedido recebido: `DIALOG_Progress` de **10 s** com sm100 (`:309-320`). OK aceita e Cancel recusa (`:322-354`). Ao abrir mostra `nome - clã` do alvo (`:208-222`). O item só entra em `MyList` depois de confirmado pelo servidor (`RequestAddTradeItem` não move localmente, `:132-144`). Peso: myList reduz e otherList soma (`:238-249`). OK esmaece `MyList` e envia `RequestTradeDone(true)`. `EV_TradeOtherOK` esmaece `OtherList` (`:66-71,276-279`). `EV_TradeDone` fecha. Fechar com X envia `RequestTradeDone(false)` |
| Origem | [I] `SendTradeRequest 0x5e`, `TradeStart 0x1e`, `TradeOwnAdd/OtherAdd 0x20/0x21`, `TradeItemUpdate 0x74`, `TradePressOtherOk 0x7c`, `SendTradeDone 0x22` |

### 5.2 ShopWnd — loja de NPC
| Item | Valor |
|---|---|
| Layout | Padrão duas listas (§2.2), 256x401 `@CENTER_LEFT(0,0)`, `L2UI_CH3.StoreWnd.Store1_back`, listas com máx. 300 (`lay/ShopWnd.txt`). `_wnddefpos.txt:9` diz `TOP_LEFT 200,150` |
| Eventos | `EV_ShopOpenWindow` (`type=buy/sell/preview`, `merchant`, `adena`, `npc`), `EV_ShopAddItem`, `EV_DialogOK` (`ShopWnd.uc:49-65,331-402`) |
| Modos | [O] buy: Top ss137 / Bottom ss139 / preço ss142; tooltips `InventoryPrice1HideEnchantStackable` e `InventoryPrice1`. sell: Top ss138 / Bottom ss137 / ss143; tooltips `InventoryPrice2`. preview: título ss847, Top ss811 / Bottom ss812 / ss813 (`:367-401`) |
| Requests | `RequestBuyItem(merchant,num,classID#,count#)`, `RequestSellItem(merchant,num,serverID#,classID#,count#)`, `RequestPreviewItem(merchant,npc,num,classID#)` (`:430-502,309-327`) |
| Regras | [O] Itens de estoque limitado (`ItemNum>0` na lista de cima) não podem ser comprados acima do limite: sm1338 e aborta (`:441-465`). Provar pede confirmação sm1157 (`:492-499`). O total usa INT64 e, se ficar negativo, vira 0 (`:415-428`). Na compra, o peso soma ao descer. Na venda, a quantidade do inventário é ajustada (`:135-216`) |
| Origem | [I] `BuyList 0x11`, `SellList 0x10`, `ShopPreviewList 0xef` |

**ManorShopWnd** (herda o layout de ShopWnd): eventos `EV_ManorShopWndOpen/AddItem`, título ss738, tooltip `InventoryPrice1HideEnchant`. Compra via `RequestBuySeed(param)` e venda via `RequestProcureCrop(param)` (o comentário diz que a venda não é usada no Manor) (`ManorShopWnd.uc:1-197`). [I] Origem: `BuyListSeed 0xe8`.

### 5.3 PrivateShopWnd — loja privada
| Item | Valor |
|---|---|
| Layout | Duas listas (§2.2) + `StopButton` ss385, `MessageButton` ss1096, `OKButton`, `BottomCountText`, `CheckBulk` (checkbox "venda em pacote") em (11,350); fundo `L2UI_CH3.Wnd.Store1_back` (`lay/PrivateShopWnd.txt`). **[O] Esta textura não existe nos sprites exportados** (ver §19) |
| Eventos | `EV_PrivateShopOpenWindow` (`type`, `adena`, `userID`, `bulk`), `EV_PrivateShopAddItem` (`target=topList/bottomList` + item), `EV_SetMaxCount` (`privateShopSell`, `privateShopBuy`), `EV_DialogOK` (`PrivateShopWnd.uc:54-74,823-984,1167-1171`) |
| Modos | [O] `PT_SellList` (montar minha venda): Top ss1 / Bottom ss137, botão ss428, mostra Stop/Message/Bulk, título "ss498(ss1157)". `PT_BuyList` (montar minha compra): Top ss1 / Bottom ss502, título "ss498(ss1434)". `PT_Buy` (comprar de outro): Top ss137 / Bottom ss139, título "ss498(ss1157 ou ss1198 se bulk) - nome". `PT_Sell` (vender para a compra de outro): Top ss503 / Bottom ss137, título "ss498(ss1434) - nome" (`:877-963`) |
| Requests | `SendPrivateShopList("sellList"\|"buyList"\|"buy"\|"sell", param)`, `RequestQuitPrivateShop("buy"\|"sell")`, `SetPrivateShopMessage("sell"\|"buy", msg)` (`:1059-1165,182-192,553`) |
| Fluxo de preço | [O] Ao descer item em SellList/BuyList: NumberPad de preço (sm322 / sm585). Preço ≥ 2.000.000.000 dá sm1369. Preço fora de (DefaultPrice/5, DefaultPrice×5) pede confirmação sm569. Depois vem a quantidade com sm72 (`:194-225,489-547,1173-1179`) |
| Regras | [O] Mensagem da loja com no máximo **29** caracteres (`DIALOG_OKCancelInput` sm334, `:99-110`). Em PT_Buy com `bulk`, qualquer movimento leva **tudo** (`:231-240`). Em PT_Sell, item sem procura (`ItemNum==0`) fica desabilitado e não move (`:228-229,974-975`). Quantidade acima do pedido dá sm1036 (`:734-737`). No OK de PT_Buy/PT_Sell, preço anormal pede confirmação final sm569 (`:1098-1110,1141-1156`). O contador "(n/máx)" usa `EV_SetMaxCount` (`:1019-1037`). Fechar a loja envia Quit |
| Params enviados | sellList: `bulk,num,serverID#,count#,price#`. buy: `merchantID,num,serverID#,count#,price#`. buyList: `num,classID#,enchanted#,damaged#,count#,price#`. sell: `merchantID,num,serverID#,classID#,enchanted#,damaged#,count#,price#` (`:1067-1161`) |
| Origem | [I] `PrivateStoreManageListSell/ListSell/ManageListBuy/ListBuy 0x9a/0x9b/0xb7/0xb8`, `ExStorageMaxCount FE:2e` |

### 5.4 MultiSellWnd
| Item | Valor |
|---|---|
| Layout | 512x401 `@CENTER_LEFT(0,-70)`, título ss136, `multicell_back`. `ItemList` 240x314 6x9 máx. 800 em (9,48); `MultiSellItemInfo` 244x150 em (262,45); `MultiSellNeededItem` 244x150 em (262,217); rótulos ss562/564/565/808; `ItemCountEdit` 63x17 COUNT em (165,374); OK/Cancel em (307/387,372) (`lay/MultiSellWnd.txt`). `_wnddefpos.txt:17` diz `TOP_LEFT 220,170` |
| Eventos | `EV_MultiSellShopID` (`shopID`, limpa), `EV_MultiSellItemList`, `EV_MultiSellNeededItemList`, `EV_MultiSellItemListEnd` (mostra), `EV_DialogOK` (`MultiSellWnd.uc:40-62`) |
| Parâmetros | ItemList: `classID, index, type, ID, slotBitType, itemType, itemCount, OutputRefineryOp1/2` (`:176-187`). Needed: `ID, refineryOp1/2, ClassID, count, enchant, inputRefineryOp1/2` (`:239-246`) |
| Requests | `RequestMultiSellChoose(ShopID, ItemID, RefineryOp1, RefineryOp2, ItemCount)` depois da confirmação sm1383 (`:317-351`) |
| Regras | [O] As entradas são agrupadas pelo `ID` da receita + opções de refino. `index>0` adiciona mais produtos à mesma entrada (`:195-232`). Ingrediente `ClassID=-100` = pontos PC Bang (ss1277, ícone `etc_pccafe_point_i00`). `-200` = reputação de clã (ss1311, `etc_bloodpledge_point_i00`) (`:248-263`). `type=0` fixa a quantidade em 1 e desabilita o campo; `type=1` permite editar (`:120-129`). Durabilidade sempre cheia na exibição (`:190-191`). [I] Origem: `MultiSellList 0xd0` |

### 5.5 WarehouseWnd
| Item | Valor |
|---|---|
| Layout | Duas listas (§2.2) máx. 200, `TopCountText`/`BottomCountText`, rótulo "Fee" ss135; fundo `L2UI_CH3.Wnd.Store1_back` (ausente nos sprites) (`lay/WarehouseWnd.txt`). `_wnddefpos.txt:53` diz `CENTER -100,0` |
| Eventos | `EV_WarehouseOpenWindow` (`type=deposit/withdraw`, `category` 1..4, `adena`), `EV_WarehouseAddItem`, `EV_SetMaxCount` (`warehousePrivate`), `EV_DialogOK` (`WarehouseWnd.uc:66-85,309-374,457-461`) |
| Título por categoria | [O] 1 Private ss1216, 2 Clan ss1217, 3 Castle ss1218, 4 Etc ss131 (`:325-341`) |
| Textos por tipo | [O] deposit: Top ss138 / Bottom ss132. withdraw: Top ss132 / Bottom ss133 (`:358-373`) |
| Requests | `RequestWarehouseDeposit(num,dbID#,count#)` / `RequestWarehouseWithdraw(...)`. `dbID` = `ItemInfo.Reserved` (`:421-455`) |
| Regras | [O] Taxa exibida = itens na lista de baixo × **30** (`KEEPING_PRICE`, só no depósito, `:3,386-397`). Limite exibido: privado vem de `EV_SetMaxCount`, os outros são **200** fixos (`:5,399-419`). O peso só é simulado na retirada (`:188-189,225-226`). [N] Quem cobra a taxa real é o servidor |
| Variante | **GMWarehouseWnd** (herda o layout): esconde OK/Cancel e preenche com `EV_GMObservingWarehouseItemList*` (`GMWarehouseWnd.uc:5-78`) |

### 5.6 SelectDeliverWnd + DeliverWnd — frete
- **SelectDeliverWnd**: 256x201 `@TOP_LEFT(0,100)`, título ss558, fundo `L2UI_ch3.DeliverWnd.Warehouse_back`, combo 178x17 e OK/Cancel (`lay/SelectDeliverWnd.txt`). [O] `EV_SelectDeliverClear` limpa e mostra. `EV_SelectDeliverAddName` (`name`,`id`) adiciona com reserved. OK chama `RequestPackageSendableItemList(id)` (`SelectDeliverWnd.uc:9-60`).
- **DeliverWnd**: duas listas, 256x401 `@CENTER_LEFT(0,-50)`, título ss557, textos ss138/ss560/ss561/ss134 (`lay/DeliverWnd.txt`). [O] `EV_DeliverOpenWindow` (`adena`, `destinationID`) e `EV_DeliverAddItem` (`DeliverWnd.uc:259-289`). Custo exibido = itens × **1000** (`:291-299`). OK chama `RequestPackageSend(targetID,num,dbID#,count#)` (`:301-321`).
- [I] Origem: `PackageToList 0xc2`, `PackageSendableList 0xc3`.

---

## 6. Manufatura (Recipe*)

| Janela | Layout (`lay/*.txt`) | Eventos | Requests / regras [O] |
|---|---|---|---|
| RecipeBookWnd | 256x401 `@CENTER_RIGHT(-558,-52)`, título ss663, `Recipe2_Back`; `RecipeItem` 6x8 máx. 160 `popupType=Recipe`; `txtCount`; `btnTrash` 32x32 tooltip ss890 | `EV_RecipeShowBookWnd` (`Type` 1=comum ss1214, senão anão ss1215), `EV_RecipeAddBookItem` (`RecipeID`), `EV_SetMaxCount` (`recipe`, `dwarvenRecipe`), `EV_DialogOK` (`RecipeBookWnd.uc:19-73`) | Duplo clique chama `RequestRecipeItemMakeInfo(id)`. Lixeira (botão ou arraste) pede sm74 e chama `RequestRecipeItemDelete(serverID)` (`:75-106,174-181`). Abre na posição do RecipeManufactureWnd (`:27-28`). Contador "(n/máx)" (`:155-172`) |
| RecipeManufactureWnd | 256x401 `@CENTER_RIGHT(-302,-51)`, `Recipe4_Back`: ícone+nome, MP (ss320), sucesso (ss642), resultado (ss647), materiais ss742 (ItemWnd 6x3 `popupType=RecipeManufacture`), barra MP `ps_mpbar`, "Number made" ss648, `btnRecipeTree` 32x32 (tooltip ss662), Create ss645 / Back ss543 / Close ss646 | `EV_RecipeItemMakeInfo` (`RecipeID, CurrentMP, MaxMP, MakingResult, Type`), `EV_UpdateMP`, `EV_InventoryAdd/UpdateItem` (`RecipeManufactureWnd.uc:23-70`) | Create chama `RequestRecipeItemMakeSelf(id)`. Back chama `RequestRecipeBookOpen(tipo)`. Tree alterna o RecipeTreeWnd via `ExecuteEvent(EV_RecipeShowRecipeTreeWnd)` (`:72-104`). As quantidades de material são recontadas com o inventário (`:236-256`) |
| RecipeTreeWnd | 256x401 `@CENTER_RIGHT(-558,-51)`, título ss662, `Recipe5_Back`, TreeCtrl 242x254 | `EV_RecipeShowRecipeTreeWnd` (`RecipeID`, `SuccessRate`) (`RecipeTreeWnd.uc:8-19`) | Árvore recursiva de materiais com `UIDATA_RECIPE.*By2Condition` e contagem do inventário (`:57-364`) |
| RecipeShopWnd | 256x401 `@CENTER`, `Recipe1_Back`; `BookItemWnd` e `ShopItemWnd` (6x4, `popupType=RecipePrice`); setas `ScrollBarUp/DownBtn`; End ss385 / Msg ss384 / Start ss428 | `EV_RecipeShopShowWnd` (`Type` 1→ss1212, senão ss1213), `EV_RecipeShopAddBookItem`, `EV_RecipeShopAddShopItem` (`RecipeID, CanbeMade, MakingFee`), `EV_DialogOK` (`RecipeShopWnd.uc:48-128`) | Adicionar pede o preço (NumberPad sm963); ≥ 2.000.000.000 dá sm1369 (`:96-126,322-330`). Msg: `OKCancelInput` sm334, máx. 29 caracteres, chama `RequestRecipeShopMessageSet` (`:29-33,100-103`). Start chama `RequestRecipeShopListSet(Max,ServerID_i,Price_i)` (`:391-417`). End/fechar chama `RequestRecipeShopManageQuit` |
| RecipeBuyListWnd | 256x401 `@CENTER_RIGHT(-46,-51)`, `Recipe3_Back`; título da receita ss643; MP do fabricante ss644 + `ps_mpbar`; adena; TreeCtrl 238x254; Close | `EV_RecipeShowBuyListWnd` (`ServerID, CurrentMP, MaxMP, Adena`), `EV_RecipeShopSellItem` (`RecipeID, CanbeMade, MakingFee`), `EV_UpdateMP` (`RecipeBuyListWnd.uc:21-66`) | Clicar num nó chama `RequestRecipeShopMakeInfo(merchant, recipeID)`; o ID vem de `Mid(strID,5)` (`:68-83`) |
| RecipeBuyManufactureWnd | Igual ao RecipeManufactureWnd (`Recipe4_Back`) | `EV_RecipeShopItemInfo` (`MerchantID, RecipeID, CurrentMP, MaxMP, MakingResult, Adena`), `EV_UpdateMP`, inventário (`RecipeBuyManufactureWnd.uc:23-72`) | Create chama `RequestRecipeShopMakeDo(merchant, recipe, adena)`. Back chama `RequestRecipeShopSellList(merchant)` (`:74-106`) |

[I] Origens: `RecipeBookItemList 0xd6`, `RecipeItemMakeInfo 0xd7`, `RecipeShopManageList 0xd8`, `RecipeShopSellList 0xd9`, `RecipeShopItemInfo 0xda`. `_wnddefpos.txt:11-16` põe todas em `CENTER`, o que conflita com as âncoras do xdat **[N]**.

---

## 7. Treino de skills

### 7.1 SkillTrainListWnd
256x401 `@CENTER`, fundo `L2UI_CH3.SkillTrainWnd.SkillTrain1`, `txtSkillList` ss364, TreeCtrl 238x273, `txtSP` em (140,345) (`lay/SkillTrainListWnd.txt`).
- [O] Tipos: 0 NORMAL, 1 FISHING, 2 CLAN, 3 ENCHANT (`SkillTrainListWnd.uc:6-9`).
- [O] Eventos: `EV_SkillTrainListWndShow` (`Type`), `EV_SkillTrainListWndAddSkill` (`strIconName, strName, iID, iLevel, iSPConsume, strEnchantName`), `EV_SkillTrainListWndHide` (`:75-116`).
- [O] Título: ss477 (normal/pesca/encantamento) ou ss1436 (clã). O rótulo do recurso é ss92 "SP" ou ss1372 (reputação de clã, valor de `GetClanNameValue`). No encantamento, o SP fica oculto (`:118-181`).
- [O] Clicar num nó `"id,level"` chama `RequestAcquireSkillInfo(id,lv,tipo)` ou `RequestExEnchantSkillInfo(id,lv)`, e a lista fecha (`:30-68`).

### 7.2 SkillTrainInfoWnd (+SubWndNormal / SubWndEnchant)
256x401 `@CENTER`; `texBack` `SkillTrain2`, trocado por `skillenchant_back` no modo encantamento; ícone 32x32 com contorno `Inventory_OutLine`; Learn ss368 / List ss369 (`lay/SkillTrainInfoWnd.txt`). `SubWndNormal`: Lv, tipo de operação, MP ss320, alcance ss321, descrição, "Learning conditions" ss367, SP necessário ss365, item necessário. `SubWndEnchant`: chance ss642 %, EXP ss1219 e SP necessários, item (`lay/SubWndNormal.txt`, `lay/SubWndEnchant.txt`).
- [O] Eventos: `EV_SkillTrainInfoWndShow` (`Type, strIconName, strName, iID, iLevel, strOperateType, iMPConsume, iCastRange, iSPConsume, strDescription, iEXPConsume, strEnchantName, strEnchantDesc, iPercent`), `…AddExtendInfo` (`iNumOfItem` + item necessário), `…Hide` (`SkillTrainInfoWnd.uc:60-127`).
- [O] Learn chama `RequestAcquireSkill(id,lv,tipo)` ou `RequestExEnchantSkill(id,lv)` (`:44-58`). List volta para a lista (`:37-39`). No encantamento, mostra a EXP atual menos a EXP do nível (`:160-167`). O alcance fica oculto quando não se aplica (`:233-242`).
- [I] Origens: `AcquireSkillList 0x8a`, `AcquireSkillInfo 0x8b`, `ExEnchantSkillList/Info FE:17/18`.

---

## 8. Quests, tutorial e notificações

| Janela | Layout | Eventos / parâmetros | Ações [O] |
|---|---|---|---|
| QuestListWnd | 600x326 `@CENTER`, título ss1204, `questinfo_back`; `lstQuest` ListCtrl 586x237 com colunas ss1200/1201/922/1202/1203; botão Location ss860; `QuestToolTip` (`lay/QuestListWnd.txt`) | `EV_QuestInfoStart`, `EV_QuestInfo` (`QuestID, QuestName, QuestRequirement, QuestLevel, QuestType, QuestNpcName, QuestDecription`) (`QuestListWnd.uc:22-98`) | Ícone de repetibilidade `QuestWndInfoIcon_1` (tipos 0/2) ou `_2` (1/3). "Location" marca o NPC inicial via `QuestAPI.SetQuestTargetInfo` (`:100-130`). [I] origem `ExQuestInfo FE:19` |
| QuestBtnWnd | EffectButton 32x32 `L2UI_ch3.ConsoleBtn.QuestBtn`. Âncora `@BOTTOM_LEFT->ChatWnd.TOP_LEFT(42,-5)`: o canto inferior esquerdo do botão fica no canto superior esquerdo do ChatWnd, 42 px à direita e 5 px acima, ou seja, **logo acima do chat** (`lay/QuestBtnWnd.txt`) | `EV_ArriveShowQuest` (`QuestID` = número do efeito) | Mostra e chama `BeginEffect`. O clique só esconde (`QuestBtnWnd.uc:8-31`). [N] O que o clique dispara no servidor |
| TutorialBtnWnd | EffectButton 32x32 `TutorialBtn`, `@BOTTOM_LEFT->ChatWnd.TOP_LEFT(5,-5)` (acima do chat, x=5) | `EV_ArriveNewTutorialQuestion` (`QuestionID`) | Idem (`TutorialBtnWnd.uc:8-31`). [N] o clique deve enviar `RequestTutorialQuestionMark` |
| MailBtnWnd | EffectButton 32x32 `MailBtn`, `@BOTTOM_LEFT->ChatWnd.TOP_LEFT(79,-5)` (acima do chat, x=79). [O] Os três botões ficam lado a lado, em x = 5/42/79 | `EV_ArriveNewMail` (`IdxMail`) | Idem (`MailBtnWnd.uc:8-31`). [I] origem `ExMailArrived FE:2d` |
| TutorialViewerWnd | 310x401 `@TOP_RIGHT`, título ss448; texturas `tutorial_back1/2/3` (2 em Tile); `HtmlTutorialViewer` 295x201 `viewType=Tutorial` | `EV_TutorialViewerWndShow` (`HtmlString`), `EV_TutorialViewerWndHide` | A altura acompanha o HTML: `clamp(FrameMaxHeight,256,672)+40`; redimensiona o fundo e reposiciona `back3` (`TutorialViewerWnd.uc:9-47`). [I] origem `TutorialShowHtml/CloseHtml 0xa0/0xa3` |

---

## 9. Henna (símbolos)

- **HennaListWnd**: 256x401 `@CENTER_RIGHT`, fundo `henna1_back`, `txtList`, `HennaListTree` 238x309, `txtAdena` (`lay/HennaListWnd.txt`). [O] `EV_HennaListWndShowHideEquip`/`…UnEquip` (`Adena`) define o modo e o título (ss651/ss659 ou ss652/ss660). `EV_HennaListWndAddHennaEquip/UnEquip` (`Name, Description, IconName, HennaID, ClassID, NumOfItem, Fee`) adiciona nós. Clicar chama `RequestHennaItemInfo(id)` ou `RequestHennaUnEquipInfo(id)` (`HennaListWnd.uc:25-133`).
- **HennaInfoWnd**: 256x401, fundo `Henna2_back`, subjanelas `HennaInfoWndEquip`/`…UnEquip` (ícone do corante, nome, taxa, adena; ícone do símbolo, nome, bônus), comparação "antes → depois" de STR/DEX/CON/INT/WIT/MEN (ss104-109, ss640), Back ss543 / OK ss140 (`lay/HennaInfoWnd.txt`). [O] `EV_HennaInfoWndShowHideEquip/UnEquip` com `Adena, DyeIconName, DyeName, HennaID, ClassID, NumOfItem, Fee, TattooIconName, TattooName, TattooAddName, {STR,DEX,CON,INT,WIT,MEN}{now,change}` (`HennaInfoWnd.uc:61-131`). Qualquer botão fecha. Back chama `RequestHennaItemList()` / `RequestHennaUnEquipList()`. OK chama `RequestHennaEquip(id)` / `RequestHennaUnEquip(id)` (`:16-35`).
- [I] Origens: `HennaEquipList 0xe2`, `HennaItemInfo 0xe3`, `HennaRemoveList 0xe5`, `HennaItemRemoveInfo 0xe6`. `_wnddefpos.txt:41-42` diz `CENTER_RIGHT -100,-50`.

---

## 10. Busca de grupo e canal de comando

| Janela | Layout (`lay/*.txt`) | Eventos | Requests / regras [O] |
|---|---|---|---|
| PartyMatchWnd | 550x486 `@TOP_LEFT(0,76)`, título ss389, ícone `PartyMatchIcon`, `PartyMatch1_Back`. Combos de local (17 itens, reserved −2..15 e 100) e de nível (ss1045/1046); ListCtrl 535x304 com colunas ss416/413/408/1029/1030/1036; Prev/Next, Refresh, Waiting List ss1378, Create ss1040, Auto ss1041 | `EV_PartyMatchStart`, `EV_PartyMatchList` (`PageNum, RoomCount, RoomNum_i, Leader_i, ZoneID_i, MinLevel_i, MaxLevel_i, CurMember_i, MaxMember_i, RoomName_i`), `EV_PartyMatchRoomStart` (esconde) (`PartyMatchWnd.uc:37-135`) | `RequestPartyRoomList(page, localFilter=reserved, levelFilter=índice)`, `RequestJoinPartyRoom(n)` (duplo clique), `RequestJoinPartyRoomAuto` (`:162-250`). Os botões ficam desabilitados durante o timer (`OnButtonTimer`, `:78-94`). Fechar chama `RequestExitPartyMatchingWaitingRoom`. Criar sala preenche o título com sm1398, 12 membros e nível ±5 (`:195-222`) |
| PartyMatchMakeRoomWnd | 356x141 `@CENTER`, `PartyMatch3_Back`; título EditBox 236x17; combo 2..12; níveis mín./máx. 26x17 | — | OK chama `RequestManagePartyRoom(roomNo, combo+2, clamp(min,1,MAX), clamp(max,1,MAX), título)`; se veio de convite, depois `RequestAskJoinPartyRoom(nome)` (`PartyMatchMakeRoomWnd.uc:40-62`) |
| PartyMatchRoomWnd | 550x486 `@TOP_LEFT(0,76)`, `PartyMatch2_Back`; info da sala; membros ListCtrl 536x172 (colunas ss393/391/392/1029/1031); chat TextListBox 536x127 + EditBox CHAT 436x17; WaitList / SetRoom / Kick / Invite / Exit | `EV_PartyMatchRoomStart` (`RoomNum, MaxMember, MinLevel, MaxLevel, LootingMethodID, ZoneID, RoomName`), `…RoomClose`, `…RoomMember` (`MyMembershipType, MemberCount, MemberID_i…`), `…RoomMemberUpdate` (`UpdateType…`), `EV_PartyMatchChatMessage` (`Msg, ColorR/G/B/A`), `EV_PartyMatchCommand`, `EV_Restart` (`PartyMatchRoomWnd.uc:56-86`) | Sair: membro chama `RequestWithdrawPartyRoom`, líder (`MyMembershipType=1`) chama `RequestDismissPartyRoom` (`:93-107`). Kick chama `RequestBanFromPartyRoom(memberID)`. Invite chama `RequestInviteParty(nome)`. O chat usa `ProcessPartyMatchChatMessage`; chat proibido mostra sm966 (`:412-511`). Mostra o nome da zona e o método de loot (`GetZoneNameWithZoneID`, `GetLootingMethodName`) |
| PartyMatchWaitListWnd / PartyMatchOutWaitListWnd | 246x466, `PartyMatch4_Back`, drawers de RoomWnd/MatchWnd; ListCtrl (ss393/391/392); Prev/Next/Whisper/Invite (ss1381)/Refresh (`disableTime=5000`)/Close. A versão Out tem filtro de nível + Search | `EV_PartyMatchWaitListStart` (`AllCount, Count`), `EV_PartyMatchWaitList` (`Name, ClassID, Level`) | `RequestPartyMatchWaitList(page, min, max, tipo)`; Whisper preenche o chat com `SetChatMessage`; Invite chama `RequestAskJoinPartyRoom(nome)` (WaitList) ou abre a criação de sala primeiro (Out) (`PartyMatchWaitListWnd.uc:94-180`, `PartyMatchOutWaitListWnd.uc:78-226`). O rótulo de nível é aproximado (`PartyMatchWndCommon.uc:4`) |
| UnionWnd | 226x271 `@TOP_LEFT(200,200)`, título ss1494, `Herochat1_back`; dono ss1265, loot ss1382, ListCtrl de partys (ss408/1036); Refresh/Ban ss681/Quit ss1268/Member ss200 (65x20) | `EV_CommandChannelStart/End/Info` (`OwnerName, RoutingType, PartyNum, PartyMemberNum`), `…PartyList` (`MasterName, MasterID`), `…PartyUpdate` (`MemberCount, Type`), `…RoutingType` (`UnionWnd.uc:66-93`) | `CommandChannelAPI.RequestCommandChannelInfo/BanParty(nome)/Withdraw/PartyMembersInfo(masterID)` (`:136-208`). Ban e Out começam desabilitados (`:210-221`). Reaparece ao reentrar no estado se o canal está aberto (`:54-63`) |
| UnionDetailWnd | 226x251, drawer do UnionWnd, ListCtrl de membros, Close | `EV_CommandChannelPartyMember` (`MemberCount, Name_i, ClassID_i, ServerID_i`) | Duplo clique no membro chama `RequestAttack` (se PK mode) ou `RequestAction` (`UnionDetailWnd.uc:62-89`) |

[I] Origens: `PartyMatchList/Detail 0x96/0x97`, `ExPartyRoomMember/ExClosePartyRoom/ExManagePartyRoomMember FE:0e-10`, `ExListPartyMatchingWaitingRoom FE:35`, `ExOpenMPCC/ExCloseMPCC FE:25/26`, `ExMultiPartyCommandChannelInfo FE:30`, `ExMPCCShowPartyMemberInfo FE:4a`.

---

## 11. Comunidade, ajuda e guia (HTML)

### 11.1 BoardWnd — BBS
| Item | Valor |
|---|---|
| Layout | 646x530 `@CENTER`, título ss387, ícone `board_icon`; `board_back1` 646x28 + `board_back2` 646x482; Tab 538x23 com 7 abas 74x23 (`Board_tab1/2`): Top ss377, Favorite ss379, Region ss381, Clan ss382, Memo ss403, Mail ss905, Friends ss904; `btnBookmark` 66x21 ss380; `HtmlViewer` 633x474 `viewType=BBS` (`lay/BoardWnd.txt`) |
| Eventos | `EV_ShowBBS` (`Index`, `Init`) e `EV_ShowBoardPacket` (`OK, Command1..8, Address`) (`BoardWnd.uc:26-36`) |
| Regras | [O] `Init>0` alterna: se aberto fecha; se fechado trava a página, volta à aba 0 e chama `RequestBBSBoard()` (`:64-91`). `Index` sem `Init` abre direto a aba (`:93-100`). Resposta `OK<1` fecha. Senão carrega `Address` com `SetHtmlBuffData` e mostra (`:103-138`). Cada aba executa um bypass no HtmlCtrl: `_bbshome`, `_bbsgetfav`, `_bbsloc`, `_bbsclan`, `_bbsmemo`, `_maillist_0_1_0_`, `_friendlist_0_` (`:140-185`). "Add Fav." executa `Command8` (`:187-198`). Abas são ignoradas com a janela minimizada |
| Abre | [O] SystemMenu com `Init=1` (`SystemMenuWnd.uc:70-75`); ClanWnd com `Index=3` (`ClanWnd.uc:378-382`). [I] `B` = `ShowBoardWindow` (`_shortcuts.txt:52`) → `EV_ShowBBS Init=1`. Origem do conteúdo: `ShowBoard 0x6e` |

### 11.2 HelpHtmlWnd
310x311 `@CENTER_LEFT(0,-97)`, título ss145, `Npc2_back`, HtmlCtrl 296x274 (`lay/HelpHtmlWnd.txt`). [O] `EV_ShowHelp` (`FilePath`) alterna: abre com `LoadHtml(arquivo local)`. `EV_LoadHelpHtml` (`HtmlString`) carrega a partir de string (`HelpHtmlWnd.uc:38-69`). O SystemMenu usa `..\L2text\help.htm` (`SystemMenuWnd.uc:77-82`).

### 11.3 GuideWnd — Adventurer's Guide
466x400, drawer do `MinimapWnd` (`unk129`), título ss1426, `mapinfo_back`. Abas Quest / Hunting Zone / Raid / Region Info, cada uma com combo de busca (ss1309) e ListCtrl 445x266; Raid mostra ranking ss1320 e pontos ss1307; Close ss1364 (`lay/GuideWnd.txt`).
- [O] `EV_ShowGuideWnd` mostra; `EV_RaidRecord` (`RaidRank, SeasonPoint, Count, MonsterID_i, CurrentPoint_i, TotalPoint_i`) preenche a aba Raid (`GuideWnd.uc:294-311,458-560`).
- [O] Os dados das abas vêm de tabelas locais (`UIDATA_QUEST`, `UIDATA_HUNTINGZONE`, `UIDATA_RAID`, `UIDATA_NPC`). A aba Raid pede `RequestRaidRecord()` com trava de 5 s (`TIMER_DELAY=5000`, `:8-9,82-89,118-124`).
- [O] Clicar numa linha centraliza o minimapa e põe um alvo (`AdjustMapView`, `AddTarget` em `MinimapWnd.Minimap`) (`:237-292`). Close esconde `MinimapWnd.GuideWnd` (`:188`).
- [I] Origem: `ExShowAdventurerGuideBook FE:37`, `ExGetBossRecord FE:33`.

---

## 12. Petição / GM

| Janela | Layout | Eventos | Ações [O] |
|---|---|---|---|
| UserPetitionWnd | 256x401 `@CENTER_LEFT`, título ss470, `petition1_back`; combo de tipo (ss695…), HtmlCtrl de ajuda 240x141, MultiEdit 240x124, Submit ss694 / Cancel ss473 (`lay/UserPetitionWnd.txt`) | `EV_ShowUserPetitionWnd` (`Message`), `EV_LoadPetitionHtml` (`HtmlString`) | Trocar o tipo carrega `..\L2text\<link>` (`UserPetitionWnd.uc:54-61`). Validação: tipo 0 dá sm804; < 5 caracteres dá sm386; ≥ 255 dá sm971. Depois `PetitionAPI.RequestPetition(msg,tipo)` e eco "ss708 : msg" no PetitionWnd (`:76-112`). Cancel chama `RequestPetitionCancel` |
| PetitionWnd | 310x412 `@TOP_CENTER(106,0)`, `petition2_back`; TextListBox 294x312; EditBox CHAT; Cancel ss473 / Evaluate ss849 | `EV_ShowPetitionWnd`, `EV_PetitionChatMessage` (`Message, ColorR/G/B/A`), `EV_EnablePetitionFeedback` (`Enable`) | Se minimizada, `NotifyAlarm` em vez de abrir (`PetitionWnd.uc:55-64`). O chat usa `ProcessPetitionChatMessage` (`:40-53`). Cancel chama `RequestPetitionCancel` (`:119-123`) |
| PetitionFeedBackWnd | 256x401 `@BOTTOM_RIGHT`, título ss848; 5 RadioButtons ss850-854; MultiEdit 240x199; OK | — | `RequestPetitionFeedBack(nota, texto)` (`PetitionFeedBackWnd.uc:34-72`); ao fechar dispara `EV_EnablePetitionFeedback Enable=0` (`:19-22`) |

---

## 13. Manor (castelo)

Toda a navegação entre telas do Manor passa por bypass `manor_menu_select?ask=N&state=S&time=T` [O]:

| ask | Uso | Fonte |
|---|---|---|
| 1 | Comprar sementes (botão BuySeed) | `ManorInfoWnd.uc:390` |
| 2 | Vender colheita (SellCrop) | `:393` |
| 3 / 4 | Info de sementes / colheitas do manor e período selecionados | `:422,427,490,496` |
| 5 | Info padrão (aba 3) | `:402` |
| 9 | Abrir a mudança de venda para `CropID` | `ManorCropSellWnd.uc:155` |

| Janela | Layout | Eventos e parâmetros | Ações [O] |
|---|---|---|---|
| ManorInfoWnd (+SeedInfoWnd/CropInfoWnd/DefaultInfoWnd, filhas 600x280 sem script) | 600x326 `@CENTER`, título ss738; abas "Current Seeds/Current Crops/Basic Info"; cada filha tem ListCtrl 586x199, combo de período (ss1116/1117) e de manor, botão BuySeed ss1119 / SellCrop ss1130 (`lay/ManorInfoWnd.txt`, `lay/SeedInfoWnd.txt`…) | `EV_ManorInfoWnd{Seed,Crop,Default}Show` (`MerchantOrChamberlain, ManorID, ManorName`), `…Add` (Seed: `SeedID, SeedName, SeedRemainCnt, SeedTotalCnt, SeedPrice, SeedLevel, RewardType1/2`; Crop: `CropID, CropName, CropRemainCnt, CropTotalCnt, CropPrice, ProcureType, CropLevel`) (`ManorInfoWnd.uc:57-82,86-380`) | Combos e abas disparam bypass (tabela acima). Os botões de compra/venda só aparecem para o mercador (`:134-146,261-263,331-337`). A lista de manors vem de `GetManorCount/GetManorIDInManorList/GetManorNameInManorList` |
| ManorSeedInfoSettingWnd | 600x326, `manor2_back`; ListCtrl (ss1120/1137/1138/1139/1140); total ss1141; Edit / Set Today ss1143 / Reset ss1144 / OK / Cancel | `…Show` (`ManorID, ManorName`), `…AddItem` (`SeedID…DefaultSeedPrice`), `…AddItemEnd`, `…ChangeValue` (`TomorrowSalesVolume, TomorrowPrice`) | Set Today pede sm1601 e Reset pede sm1600 (Warning). OK chama `RequestSetSeed(ManorID,SeedCnt,SeedID_i,TomorrowSalesVolume_i,TomorrowPrice_i)` (`ManorSeedInfoSettingWnd.uc:193-249`). Edit abre a ChangeWnd via `ExecuteEvent` (`:251-269`) |
| ManorSeedInfoChangeWnd | 256x201, `manor4_back`; volume e preço de amanhã (COUNT), limite | `…Show` (`SeedName, TomorrowVolumeOfSales, TomorrowLimit, TomorrowPrice, MinCropPrice, MaxCropPrice`) | Valida a faixa; erro em Notice montado com `AddSystemMessageParam`. OK devolve `EV_ManorSeedInfoSettingWndChangeValue` (`ManorSeedInfoChangeWnd.uc:73-117`) |
| ManorCropInfoSettingWnd / ManorCropInfoChangeWnd | Análogas, 600x326 e 256x201; combo de recompensa 1/2 | `…Show/AddItem/AddItemEnd/ChangeValue` com `CropID…MaxCropTotalCnt, DefaultCropPrice` | OK chama `RequestSetCrop(ManorID,CropCnt,CropID_i,BuyCnt_i,Price_i,ProcureType_i)` (`ManorCropInfoSettingWnd.uc:198-227`) |
| ManorCropSellWnd | 600x326, `manor2_back`; ListCtrl com 7 colunas (ss1124/1153/1154/1126/1127/1155/1156); Edit / Sell ss1157 / Cancel | `…Show`, `…AddItem` (`CropName, ManorName, CropRemainCnt, CropPrice, ProcureType, MyCropCnt, CropLevel, RewardType1/2, ManorID, CropID, CropServerID`), `…SetCropSell` | Sell envia só as linhas com quantidade > 0: `RequestProcureCropList(CropCnt, CropServerID_i, CropID_i, ManorID_i, SellCount_i)` (`ManorCropSellWnd.uc:82-134`) |
| ManorCropSellChangeWnd | 336x306, `manor3_back`; ListCtrl de territórios; combo; quantidade + "Max" ss1158 | `…Show`, `…AddItem` (`ManorName, CropRemainCnt, CropPrice, ProcureType, ManorID`), `…SetCropNameAndRewardType` | Max calcula o mínimo entre o que tenho e o que resta (`ManorCropSellChangeWnd.uc:122-152`). OK devolve `EV_ManorCropSellWndSetCropSell` (`:154-180`) |

[I] Origens: `ExShowSeedInfo/CropInfo/ManorDefaultInfo/SeedSetting/CropSetting/SellCropList/ProcureCropDetail FE:1c-22`, `ExSendManorList FE:1b`. `_wnddefpos.txt:35,37` diz `ManorInfoWnd TOP_LEFT 100,100` (a entrada aparece duplicada).

---

## 14. Cerco e herói

### 14.1 SiegeInfoWnd
256x401 `@CENTER_LEFT`, título ss593; topo `Siege_Back1` (castelo, lord ss588, clã ss589, aliança ss590, com crests); abas "Siege Date/Attack Info./Defense Info" sobre `Siege_Back2`. Data: combo `cboTime` + hora atual ss582 / do cerco ss583. Ataque: ListCtrl (ss580/571) + Participate ss572 / Withdraw ss573. Defesa: ListCtrl (ss580/581) + Participate / Withdraw / Cancel ss575 / Approve ss574 (`lay/SiegeInfoWnd.txt`).
- [O] Eventos: `EV_SiegeInfo` (`CastleID, IsOwner, OwnerName, ClanID, ClanName, AllianceID, AllianceName, NowTime, SiegeTime`), `EV_SiegeInfoClanListStart` (`Type`), `…ClanList` (inclui `Status`), `…ClanListEnd`, `EV_SiegeInfoSelectableTime` (`TimeID`) (`SiegeInfoWnd.uc:118-138,378-656`).
- [O] As abas pedem `RequestCastleSiegeAttackerList/DefenderList(castelo)` (`:358-376`). Toda ação confirma em `DIALOG_OKCancel`. IDs de diálogo: 1 ataque/registrar (sm667), 2 ataque/cancelar (sm669), 3 defesa/registrar (sm668), 4 defesa/cancelar (sm669), 5 recusar clã defensor (sm670), 6 aprovar (sm671), 7 definir hora (sm663). Viram `RequestJoinCastleSiege(c, isAttacker, isRegister)`, `RequestConfirmCastleSiegeWaitingList(c, clan, 0|1)` e `RequestSetCastleSiegeTime(c, timeID)` (`:140-192,196-356`).
- [I] Origem: `SiegeInfo/SiegeAttackerList/SiegeDefenderList 0xc9-0xcb`.

### 14.2 HeroTowerWnd
600x326 `@CENTER`, título ss1222, `herotower1_back`; `lstHero` com colunas ss393/391/604/605/1191; `txtDiary` 405x16 + Message ss1192; View ss1193 (`lay/HeroTowerWnd.txt`).
- [O] `EV_HeroShowList` (`Max, Name_i, ClassId_i, PledgeName_i, PledgeCrestId_i, AllianceName_i, AllianceCrestId_i, WinCount_i`) mostra a lista com crests (`HeroTowerWnd.uc:9-19,92-209`).
- [O] Ver o diário (duplo clique ou botão) chama `RequestBypassToServer("_diary?class=<classe>&page=1")` (`:53-65`). Só herói vê o campo e o botão de mensagem (`IsHero()`, `:67-83`). Registrar chama `HeroTowerAPI.RequestWriteHeroWords(texto)` (`:45-48`). `EV_HeroRecord` é registrado mas não é tratado (`:6`).
- [I] Origem: `ExHeroList FE:23`.

---

## 15. Utilidades e HUD menor

| Janela | Layout | Comportamento [O] |
|---|---|---|
| CalculatorWnd | 256x211 `@CENTER`, título ss669, `calculate2_back`; EditBox COUNT 188x17; botões 35x24 `L2UI_CH3.Calculate.Calculate2_<tecla>` (+`_down`), `00` 73x24; Close ss646 (`lay/CalculatorWnd.txt`) | `EV_CalculatorWndShowHide` mostra com foco (`CalculatorWnd.uc:179-187`). Estados `INSERT_OP1/OP1/OP/INSERT_OP2`; operações + − × ÷ =; divisão por 0 dá 0; overflow (> 1e20 ou negativo em soma/mult de positivos) reinicia (`:3-15,114-153`); CE, C, BS (`:319-386`). Só local, sem request. [I] origem `ShowCalculator 0xdc` |
| ZoneTitleWnd | 500x200, `fontdeco` 256x256, dois TextBox (sombra +3 px) | `EV_BeginShowZoneTitleWnd` (`ZoneName, SubZoneName1/2`; só ZoneName é usado). Largura = texto + 100. Posição X = tela/2 − texto/2 − 100, Y = altura/5 − 80. Some depois de **4000 ms** (`ZoneTitleWnd.uc:1-63`) |
| ObserverWnd | 102x32 `@TOP_CENTER`, `broadcast_back`, botão Return ss611 | `EV_ObserverWndShow/Hide`. Reaparece em `EV_GamingStateEnter` se estava em modo observador. Return chama `RequestObserverModeEnd()` (`ObserverWnd.uc:14-41`). [I] `ObservationMode/Return 0xdf/0xe0` |
| PCCafeEventWnd | 83x55 `@TOP_RIGHT(-22,100)`, `wnd_pcpoint_back`; título ss1277; pontos; `HelpButton` 14x14 (`icn_aboutpoint_down`, **ausente nos sprites**) | `EV_PCCafePointInfo` (`TotalPoint, AddPoint, PeriodType, RemainTime, PointType`). Visível só com `PeriodType>0`. O ganho aparece em amarelo (normal), ciano (bônus) ou vermelho (perda), com fade (`PCCafeEventWnd.uc:45-127`). [I] `ExPCCafePointInfo FE:31` |
| CouponEventWnd | 300x261 `@CENTER_LEFT(120,0)`, título ss1448; 5 EditBox 37x17; Confirm ss1337 / Initialize ss479; avisos | `EV_ShowPCCafeCouponUI` mostra. Cada campo exige **4** caracteres e avança o foco sozinho. Confirm só habilita com os 5 completos e chama `RequestPCCafeCouponUse(20 chars)` (`CouponEventWnd.uc:37-150`). [I] `ShowPCCafeCouponShowUI FE:43` |

---

## 16. Ferramentas de GM

| Janela | Layout | Comportamento [O] |
|---|---|---|
| GMWnd | 256x276 `@BOTTOM_RIGHT(0,-51)`, fundo `siege_back31`; EditBox "Name" 180x14; 17 botões 54x18 `sek.cbui91` (herdam TeleButton): Go, Move, Summon, Status, Inventory, Skills, Quest, Info, Warehouse, Clan, Petition, Escape, NPC/Item/Skill Search, Forced Petition, Server Transfer (`lay/GMWnd.txt`) | `EV_ShowGMWnd` alterna (`GMWnd.uc:64-74`). Comandos: `//teleportto N`, `//instant_move`, `//recall N` (confirma sm1220), `//debug N`, `//add_peti_chat N`, `//sendhome N` (confirma sm1221), `//force_peti N <sm1528>` (`:187-430`). Status/Inv/Skill/Quest/Warehouse/Clan alternam as janelas GM*. As buscas varrem `UIDATA_NPC/ITEM/SKILL` pelo nome e mostram "ClassID:… Name:…" (`:340-420`). Server Transfer chama `GMAPI.BeginGMChangeServer(id, pos)` (`:431-445`). [I] `G`/`Alt+G` → `ShowGMWindow` |
| GMDetailStatusWnd / GMMagicSkillWnd / GMQuestWnd / GMClanWnd | 256x355 `@TOP_LEFT(0,100)` com `InnerWnd` herdando o layout das janelas normais (superName) | `GMAPI.RequestGMCommand(GMCOMMAND_StatusInfo/SkillInfo/QuestInfo/ClanInfo, nome)`. Preenchem com `EV_GMObserving*` (`GMDetailStatusWnd.uc:33-90`, `GMMagicSkillWnd.uc:21-62`, `GMQuestWnd.uc:15-91`, `GMClanWnd.uc:41-93`). O GMQuestWnd esconde Abort e o checkbox |
| GMInventoryWnd / GMWarehouseWnd | Herdam InventoryWnd/WarehouseWnd | Ver §4.1 e §5.5 |
| GMSnoopWnd | 100%x100% transparente; 4 subjanelas `SnoopWnd1..4` 300x301, cada uma com TextListBox 282x195, Cancel e 7 checkboxes de filtro de canal | `EV_GMSnoop` (`SnoopID, CharacterName, SnoopName, CreatureID, Type, ChatMessage`). Sem slot livre mostra sm802 (`GMSnoopWnd.uc:60-101`). Cancel chama `GMAPI.RequestSnoopEnd(id)` (`:46-58`). [I] `Snoop 0xd5` |

Enum `GMCOMMAND_*` em `NWindow\UIEventManager.uc:9-15`. [I] Os pacotes `GMView* 0x8f-0x95` e `GMViewHennaInfo 0xea` correspondem aos `EV_GMObserving*`.

---

## 17. EventMatch (partidas de evento / transmissão)

| Janela | Resumo [O] |
|---|---|
| EventMatchGMWnd | 700x500, título ss1104, fundo `Default.BlackTexture`. Campos de nomes e líderes dos times, arquivos de opção e comando (INI), placar, anúncio, ListCtrls dos times (`lay/EventMatchGMWnd.txt`). Eventos `EV_ShowEventMatchGMWnd`, `EV_EventMatchCreated` (`MatchID`), `EV_EventMatchUpdateTeamInfo` (`TeamID`), `EV_EventMatchManage` (`MatchStat, FenceStat, Team1/2Name, Team1/2Stat`) (`EventMatchGMWnd.uc:153-170`). Tudo vira comandos `//eventmatch create/lock/unlock/leader/msg/start/pause/end/dispelall/fence/remove/score/firecracker` (`:366-1129`). As regras de skill, item e buff são lidas de INI (`RefreshINI/GetINI*`, erros sm1415-1427, `:198-870`). É uma máquina de estados UnrealScript (`BeginState`, `:287-636`) |
| EventMatchGMFenceWnd | 500x170, título ss1105; X/Y/Z + comprimentos; "My Location" usa `GetPlayerPosition()`. Valida 100..5000 (sm1414) (`EventMatchGMFenceWnd.uc:41-85`) |
| EventMatchGMCommandWnd | 310x401, título ss444, `Npc1_back`, HtmlCtrl. **Sem script**: o GMWnd gera um HTML com links `<a cmd="…">` a partir do INI (`EventMatchGMWnd.uc:186-221`) |
| EventMatchGMMsgWnd / EventMatchSpecialMsgWnd | Faixas 720x88 e 720x320 (estado `EventMatchObserver`), texturas `br_msg2_back1..3` / `br_msg1_*`. `EV_EventMatchGMMessage` (`Type, Message`) mostra e esconde depois de **5 s** (`EventMatchGMMsgWnd.uc:40-55`, `EventMatchSpecialMsgWnd.uc:39-101`) |
| EventMatchObserverWnd | HUD de tela cheia do estado `EventMatchObserverState`: placar (TopWnd), mensagens (MsgWnd), Player1/2 520x144, buffs, Party1/2 280x630 com 9 membros (superName). Eventos `EV_StartEventMatchObserver`, `…UpdateScore/TeamName/TeamInfo/UserInfo`, `EV_ReceiveMagicSkillUse`, `EV_ShortcutCommand` (atalhos `EventMatch*` de `_shortcuts.txt:140-153`: P party, L travar posição, I posição inicial, N classe/nome, G modo de mensagem) (`EventMatchObserverWnd.uc:194-415`). Os dados vêm de `EventMatchAPI.GetEventMatchData/GetScore/GetTeamName/GetUserData` |

---

## 18. Fronteira e janelas que **não** estão no Interface.xdat

### 18.1 Estados fora do jogo (descrição mínima; detalhes nas seções de lobby/loading)
- **GametipWnd** (`LoadingState`, 100%x20% `@BOTTOM_CENTER`): dica aleatória de `UIDATA_GAMETIP` com título ss1455 e sombras de ±1 px; recarrega em `EV_LanguageChanged` (`GametipWnd.uc:9-60`).
- **ReplayListWnd** (`ReplaySelectState`, 316x350): lista arquivos de replay (`GetFileList`); OK chama `BeginReplay(arquivo, câmera, chat)`; Delete chama `EraseReplayFile` (`ReplayListWnd.uc:19-123`). **ReplayLogoWnd(_cn/_e/_j/_k/_th/_tw)**: logos `L2Font.replay_logo-k` / `mini_logo-k` no estado `ReplayState`.
- **BenchMarkMenuWnd** (`BenchMarkMenuState`): Play ss1023 chama `BeginPlay()`; Benchmark ss1022 chama `BeginBenchMark()`; Options; Exit chama `ExecQuit()` (`BenchMarkMenuWnd.uc:8-40`).
- **TeaserSlideWnd(_xx)** (`SlideQuestState`): slideshow do teaser Kamael (texturas `Slideshow.Kamael_teaserquest.*`, **ausentes nos sprites**), com música (`AudioAPI.PlayMusic`), `EV_ShowPlaySceneInterface` e `EV_ResolutionChanged` (`TeaserSlideWnd.uc:79-923`). [I] Não é usado em Interlude e pode ser omitido.

### 18.2 Janelas sem definição no xdat → nativas
- [O] **Não existe** janela de diálogo HTML de NPC no `Interface.xdat` (as 140 janelas de `interface_layout.json` estão listadas no §1) nem classe `.uc` para ela. Apesar disso, o pacote `NpcHtmlMessage 0x0f` existe (`92_protocolo_opcodes.md`). [I] O diálogo de NPC é uma janela **nativa** do NWindow.dll; as texturas `L2UI_ch3.NpcWnd.Npc1_back/Npc2_back` (usadas por EventMatchGMCommandWnd e HelpHtmlWnd) devem ser o fundo dela. **[N]**
- [O] O atalho `Y`/`Alt+Y` = `ShowMessengerWindow` (`_shortcuts.txt:59,78`) não tem janela no xdat. [I] Messenger e lista de amigos são nativos. **[N]**
- [O] `ItemDragBox` não é uma janela própria: são os slots `ItemDragBox1..3` do RefineryWnd (§4.3). O ícone que segue o cursor no arraste é do ItemWindow nativo **[N]**. "Container" corresponde a `RadarContainerWnd`, que é da seção do radar.

---

## 19. Sprites ausentes nos exportados

[O] Verifiquei 265 texturas citadas pelos layouts desta seção contra `out\tool\ui`. Estas **não existem** nos sprites exportados:
- `L2UI_CH3.Wnd.Store1_back` (fundo de WarehouseWnd e PrivateShopWnd; existe só `L2UI_CH3.StoreWnd.store1_back`, usado por Shop/Deliver).
- `L2UI_CH3.Button.MainWndTabBack` (MainWnd).
- `L2UI_CH3.icn_aboutpoint_down` (PCCafeEventWnd; está sem grupo).
- `Default.BlackTexture` (fundo dos ícones de Henna e das janelas EventMatch GM).
- `L2Font.replay_logo-k`, `L2Font.mini_logo-k`, todo o pacote `Slideshow.Kamael_teaserquest.*`.

[N] É preciso confirmar se o cliente original também não tem essas texturas (nesse caso aparece fundo vazio) ou se elas estão em pacotes que não foram exportados.

---

## 20. Lacunas "a validar no nativo"

1. **Atalhos → eventos**: qual `EV_*` cada comando nativo gera (`TabShowInventoryWindow`, `ShowInventoryWindow`, `ShowMainWindow Tab=…`, `ShowBoardWindow`, `ShowGMWindow`, `ShowGMPetitionWindow`, `ShowMessengerWindow`, `HideAllWindow`, `CloseAllWindow`), e se `Tab` difere de `V`.
2. **OnSendPacketWhenHiding**: em que condições o nativo chama (só fechamento pelo usuário? Esc? `CloseAllWindow`?).
3. ~~**"Mover tudo" (`AllItemCount`)**~~ **resolvido**: Alt no início do arrasto, em qualquer ItemWindow (§2.2) (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`).
4. **Precedência `_wnddefpos` × âncora do xdat** (vários conflitos: Inventory, MultiSell, Shop, Recipe*, Henna, Warehouse) e persistência das posições movidas pelo usuário.
5. **Drawers (`unk129`/`unk126`/`unk122`/`unk127`)**: lado de acoplamento, offset e se acompanham o movimento do dono (ClanDrawer, Guide, PartyMatch WaitLists, UnionDetail).
6. **TabCtrl**: troca automática de alvo e preservação do estado das abas do MainWnd.
7. **Diálogo HTML de NPC e Messenger**: janelas nativas fora do xdat (layout, tamanho, links/bypass, botões).
8. **Botões EffectButton** (Quest/Tutorial/Mail): o que o clique envia ao servidor (o script só esconde) e a semântica dos números de efeito.
9. **DialogBox Progress (troca)**: o que acontece quando os 10 s acabam (gera `EV_DialogCancel`?).
10. **Registro de brasão/emblema** (`RequestClanRegisterCrest/Emblem()` sem argumentos): seletor de arquivo nativo e formato BMP.
11. **Taxa real de armazém e frete**: o script mostra 30/slot e 1000/item fixos. O servidor pode cobrar outro valor.
12. **Formato serializado do `param`** e lista exata das chaves de `ParamToItemInfo`.
13. **Mapeamento pacote → evento** (as origens marcadas [I] em cada janela vêm só da semelhança de nomes).
14. **Textos systemmsg originais** (este cliente tem textos alterados: sm71/73/74/100…).
15. **Sprites ausentes** (§19).
16. **Cristalização**: o script manda `RequestCrystallizeItem(id,1)` com quantidade fixa 1; confirmar se o servidor ignora a quantidade.

---

## 21. Checklist de prioridade para recriar

**P0 — essencial para jogar**
- [ ] DialogBox compartilhado (NumberPad, Warning, OKCancel, Progress, Input) com ID/reserved (§2.1).
- [ ] InventoryWnd completo: slots com todas as regras de SlotBitType, usar/equipar/desequipar, destruir, dropar, peso, adena, contador, ordem local (§4.1).
- [ ] MainWnd + MagicSkillWnd (usar skill, arrastar para atalho) + QuestTreeWnd (§3.1-3.3).
- [ ] ShopWnd (compra e venda) e WarehouseWnd (depósito e retirada) com o padrão duas listas (§2.2, §5.2, §5.5).
- [ ] TradeWnd (§5.1).
- [ ] SkillTrainList/InfoWnd (aprender skills no NPC) (§7).
- [ ] Diálogo HTML de NPC nativo (§18.2): sem ele não dá para interagir com NPCs.
- [ ] ZoneTitleWnd (simples, mas faz parte do feedback básico).

**P1 — importante para o jogo normal**
- [ ] PrivateShopWnd nos 4 modos, com validação de preço (§5.3).
- [ ] MultiSellWnd (§5.4).
- [ ] ItemEnchantWnd (§4.2).
- [ ] ClanWnd + ClanDrawerWnd + InviteClanPopWnd (§3.4-3.6).
- [ ] Recipe* (fabricação e loja de anões) (§6).
- [ ] HennaList/InfoWnd (§9).
- [ ] BoardWnd (BBS: clã, correio, amigos) e HelpHtmlWnd (§11.1-11.2).
- [ ] PartyMatch* (§10).
- [ ] Botões de notificação Quest/Tutorial/Mail + TutorialViewerWnd + QuestListWnd (§8).
- [ ] RefineryWnd e UnrefineryWnd (§4.3-4.4).

**P2 — secundário**
- [ ] SelectDeliver/DeliverWnd (§5.6), ManorShopWnd e o conjunto Manor (§13), SiegeInfoWnd (§14.1), HeroTowerWnd (§14.2).
- [ ] UnionWnd/UnionDetailWnd (§10), GuideWnd (§11.3), petições (§12).
- [ ] CalculatorWnd, ObserverWnd, PCCafeEventWnd, CouponEventWnd (§15).

**P3 — só para GM/eventos, ou fora do escopo de Interlude**
- [ ] GMWnd e janelas GM* (§16), EventMatch* (§17).
- [ ] Replay, BenchMark e TeaserSlide (§18.1).

---

## Apêndice A — MultiSellItemInfo / MultiSellNeededItem conferidos no NWindow.dll (K8 do porte Unity)

Também conferido no Engine.dll (FUN_104183a0): o MultiSellList lê "ddddd" (lista, página, fim, tamanho, entradas), "dddchh" por entrada, "hdhdhdd" por produto e "hhdhdd" por ingrediente; o ShopID só sai na página 1, o fim só com o 3º campo = 1; `index` do EV_MultiSellItemList é a posição do produto na entrada e `type` o c da entrada; os h vão com sinal (−100 pontos do PC cafe, −200 reputação do clã).

Labels: [O] means read from the pseudocode or disassembly (VA plus `file:line`, where files are `out/re/decomp_all/nwindow/NNNNN.c`). [I] means inferred.
Coordinates are in control-local pixels. All colours are ARGB. Every text colour is ANDed with the window alpha (`color & (alpha<<24 | 0xFFFFFF)`, `NCGDevice::DrawTextW` 0x100217a0, `00001.c:4276-4280`) [O].
`DrawTexture(x,y,w,h,u,v,uw,vh,tex,0xFF,1)` = `FUN_10021a00` [O].

### 0. Class mapping

| xdat type | XML class | Create | native class | size | vtable |
|---|---|---|---|---|---|
| MultiSellItemInfo | XMLMultiSellItemInfo | 0x100e1cb0 (`00007.c`) allocates 0x3b0 and calls ctor 0x101851a0 | **NCVIPShopItemInfoWnd** (source `NLuxuryShopWnd.cpp`, assert at `00013.c:10875`) | 0x3b0 | 0x1028cf7c |
| MultiSellNeededItem | XMLMultiSellNeededItem | 0x100e2070 (`00007.c:10633-10683`) allocates 0x2f8 and calls ctor 0x10185090 | **NCVIPShopNeededItemWnd** | 0x2f8 | 0x1028cd74 |

- [O] Both classes derive from `NCScrollWnd`: the ctor calls `FUN_10044de0`, which writes `NCScrollWnd::vftable` (`00013.c:11634,11699`; `00002.c:7405-7434`).
- [O] XML `Process` (0x100e1ba0) and `Serialize` (0x100e1ab0) handle only the default properties. There are no control-specific xdat attributes.
- [O] Only the following vtable slots are overridden (vtable diff, `vt.py 1028cf7c 1028cd74`). Every other slot is inherited from NCScrollWnd/NCWnd.

| slot | meaning | ItemInfo | NeededItem |
|---|---|---|---|
| 38 | OnCreate | 0x10184040 | 0x10182510 |
| 39 | OnDestroy | 0x10182640 | 0x10184490 |
| 78 | ShowWindow | 0x10182700 | (base) |
| 93 | Clear | 0x10184410 | 0x101847c0 |
| 99 | OnPaint | 0x10184100 | 0x10183e30 |
| 113 | OnMouseWheel | 0x101843e0 | 0x10182610 |
| 125 | OnUpBtnClick | 0x10184370 | 0x101825a0 |
| 126 | OnDownBtnClick | 0x10184390 | 0x101825c0 |
| 127 | OnScrollMove | 0x101843b0 | 0x101825e0 |

- **No mouse-move, click or double-click override** (slots 104-112 are NCWnd's). [O]
- So there is **no selection and no hover highlight**, and the parent controls show no tooltip of their own.
- Tooltips come only from the `NCNameCtrl` children (§3).

### 1. Shared NCScrollWnd behaviour (both controls)

- [O] **State.** Scroll offset (x, y) is at `+0x1cc/+0x1d0`, with y ≤ 0. The delta since the last move is at `+0x1d8`. The scroll step `+0x1e0` is **15** (ctor `in_ECX[0x78]=0xf`, `00002.c:7426`). The minimum y is at `+0x1e4`.
- [O] **SetMaxHeight(content)** (0x10043d00, disassembly 0x10043d35-0x10043d74):
  - if `content > height(+0x8c)`, then `minY = ftol(height - content)`;
  - otherwise `minY = 0` and the range is 0;
  - in both cases it then updates the slider at `+0x1fc`.
- [O] **Up / Down buttons:** `y = clamp(y ± 15, minY, 0)` (0x10044970, `00002.c:7174-7183`).
- [O] **Mouse wheel:** `y += (wheelDelta/120) * 15 * 3`, so 45 px per notch, clamped (0x10044c80, `00002.c:7351-7370`).
- [O] **Slider drag:** `y = -ceil(pos/15)*15`, clamped (0x10044b80, `00002.c:7293-7301`).
- [O] **Scrollbar children** (OnCreate 0x100440c0, disassembly 0x100441f8-0x1004445d), all at the right edge:
  - Up button `L2UI_CH3.ScrollBar.ScrollBarUpBtn` / `...UpOnBtn`, 15×15, at (w-15, 0) [I: y];
  - Down button `...ScrollBarDownBtn` / `...DownOnBtn`, 15×15, at (w-15, h-15);
  - Slider `SliderBarTop` / `SliderBarCenter` / `SliderBarBottom`, at (w-15, 15), size 15 × (h-30) (constants 15.0 @0x10230fc0 and 30.0 @0x1023cb08).
- [I] The scrollbar is visible only when content > height. The base `ShowWindow` 0x100444d0 calls `FUN_10043c10(0)` when `+0x1e8==0`; this was not traced further.
- [O] **Paint frame** (both controls):
  - set the canvas origin to the window (x, y) (`FUN_10002f40`);
  - `SetClip(x, y, w, h)`;
  - push the origin offset (`+0x1cc`, `+0x1d0`) (`FUN_10023790`, an additive push: 0x10023700 `00001.c:6149-6180`);
  - draw;
  - pop (`FUN_10023160`), then ReleaseClip.
- [O] **Neither control draws a background or frame.** The only texture loaded in OnCreate is `L2ui_ch3.etc.iconbox` (`00013.c:10852`, `10272`).
- [O] The window background comes from the parent xdat: `MultiSellWndTex` `L2UI_CH3.MultiSellWnd.multicell_back`, Stretch (`out/re/layout/MultiSellWnd.txt`).
- [O] The headers are separate TextBoxes in MultiSellWnd: ss564 at (267,32) above ItemInfo, and ss565 at (267,203) above NeededItem.
- **Font metric H.** [O] `FUN_100216e0(&sz,'A',font 0)` returns the cell of glyph 'A' (`00001.c:4202-4233`), and `H = sz.h`. [I] H = **13** for `L2Font-r.SmallFont-r` (see 02_chat.md §5, a weak glyph parse).

### 2. MultiSellItemInfo (NCVIPShopItemInfoWnd)

#### 2.1 Fields
- [O] `m_Item[50]` (NCItem, class DAT_10363f50) is at `+0x214`; all 50 are allocated in OnCreate (`00013.c:10859-10879`).
- [O] `count` is at `+0x2dc`, the iconbox texture at `+0x2e4`, and the `NCNameCtrl*` children `[50]` at `+0x2e8`.

#### 2.2 SetItemInfo(ctrl, index, ItemInfo)
Source: `execSetItemInfo` 0x1010dec0 (`00009.c:9204-9264`), which calls 0x10184e20, which calls 0x10184860.

1. [O] Convert the script `ItemInfo` to an NCItem (0x1002dee0, `00001.c:15666-15770`).
   - Field map (NCItem offset ← ItemInfo field):

     | NCItem | ItemInfo field | NCItem | ItemInfo field |
     |---|---|---|---|
     | +0x4c | Name | +0x1e78 | WeaponType |
     | +0xa4c | Description | +0x1e80 | Enchanted |
     | +0x1e50 | ItemType | +0x1e9c | Durability |
     | +0x1e5c | ClassID | +0x1ea0 | CrystalType |
     | +0x1e64 | ItemNum | +0x1eb0 | AttackSpeed |
     | +0x1e6c | SlotBitType | +0x1eb8 | ArmorType |
     | +0x1e70 | Weight | +0x1ebc | AvoidModify |
     | +0x1ec4 / +0x1ec8 | PhysicalDamage / MagicalDamage | +0x1ee4 | MpBonus |
     | +0x1ecc / +0x1ed0 | PhysicalDefense / MagicalDefense | +0x1ee8 / +0x1eec | Soulshot / SpiritshotCount |
     | +0x1ed4 / +0x1ed8 | ShieldDefense / ShieldDefenseRate | +0x1efc / +0x1f00 | RefineryOp1 / Op2 |

   - Icon textures: `LoadTexture(IconName)` goes to `+0x34`, and IconNameEx1..4 go to `+0x38..+0x44`, each only when the string is non-empty (`00013.c:11487-11530`).
2. [O] If `index < 50`:
   - `count++`. This happens on **every** call: it is not `max(index+1)`, and the count is incremented even if the later lookup fails.
   - `CopyItem` into `m_Item[index]` (`00013.c:11298-11301`).
   - Otherwise the call is silently ignored.
3. [O] If `ClassID ≥ 0` and the item-data lookup (`FUN_10187a60`) succeeds (`00013.c:11302-11400`), the item is rebuilt from the client data tables, not from the script:
   - `Name = GetItemName(ClassID)`;
   - `AdditionalName = GetItemAdditionalName` (when it exists);
   - `Description = GetItemDescription(ClassID)`;
   - only ItemType, SlotBitType, Enchanted and RefineryOp1/2 are kept from the script.
   - The data kind `*(data+4)` decides which fields are reloaded:

     | data kind | fields reloaded from the data table |
     |---|---|
     | 0 (weapon) | Weight, Material, WeaponType, P/M dmg, ShieldDef/Rate, Durability, CrystalType, RandomDmg, Critical, HitModify, AtkSpeed, MpConsume, Avoid, Soulshot, Spiritshot |
     | 1 (armor or jewel) | Weight, Material, Durability, CrystalType, ArmorType, Avoid, PDef, MDef, MpBonus |
     | 2 (etc) | Weight, Material, Durability, ConsumeType, `bArrow` = (etcType 2 or 0x10) |

   - It then creates an **NCNameCtrl** child:
     - position (46, index·36+10), size 180×14 (`00013.c:11403-11413`);
     - `SetNameData(mode 1)` with (Name, ClassID, ItemType, Enchanted, CrystalType, ItemNum) (`:11414-11422`).
   - [O] If the lookup fails, no name ctrl is created, but the row is still counted and its icon is still drawn.
   - [O] Calling the same index twice overwrites the child pointer without unregistering the old child (leak / stale child).

#### 2.3 OnPaint (0x10184100, `00013.c:10884-10928`)

#### count == 1: detail view
`FUN_10182730(canvas, m_Item[0], x0=10, y0=4)` (`00013.c:10426-10757`), then SetMaxHeight(its return value). [O]

Slot and icon [O] (`:10460-10462`):
- iconbox 34×34 at (9,3);
- item icon `+0x34`, 32×32, at (10,4).

Name [O]:
- drawn by the NCNameCtrl child at (46,10) (§3);
- the detail function itself draws no name and no count.

Pre-computed values [O]:
- `desc` = Description (`+0xa4c`) passed through `GetNewLineString` (`:10464-10468`);
- `type` = `GetSlotTypeString(ItemType, SlotBitType, ArmorType)` (0x10145ba0, `00011.c:14142-14266`).

Cursor [O]:
- `y = y0 + 8 + H` (`:10474`), so [I] about 25;
- `xL` = 46 until a type branch runs.

**Stat line** [O] (pattern repeated at `:10483-10498` etc.):
1. `label` in **0xFFA3A3A3** at (10, y);
2. `" : "` (DAT_1028cbe0) in **0xFFDCDCDC** at (10 + w(label), y);
3. `value` in **0xFFB09B79** at (10 + w(label + " : "), y);
4. then `y += 4 + H`.

**Header line** [O]:
- drawn in 0xFFB09B79 at (46, y), then `y += 20`.

**By ItemType `+0x1e50` (the server multisell itemType):**

**0 weapon** [O] (`:10476-10560`):

| line | label (sysstring) | value |
|---|---|---|
| header | — | `"%s / %s"` = WeaponTypeString / type, e.g. "Sword / One Handed" |
| stat | ss94 "P. Atk." | `PAtk(WeaponType, Slot, Crystal, Enchant, PhysicalDamage)` `%d` |
| stat | ss98 "M. Atk." | `MAtk(...)` `%d` |
| stat | ss111 "Atk. Spd." | `AtkSpdString(AttackSpeed)` `%s` |
| stat | ss404 "Soulshot Used" | `"X %d"` SoulshotCount |
| stat | ss496 "Spiritshot Used" | `"X %d"` SpiritshotCount |

- WeaponType strings: 1 Sword ss43, 2 Blunt 44, 3 Dagger 45, 4 Pole 46, 5 Fist 47, 6 Bow 48, 7 Etc 49, 8 Double Blades 504.
- For a weapon, `type` is ss242 "One Handed" when the slot is 0x80 or 0x100, and ss243 "Two Handed" when it is 0x4000.

**1 armor** [O] (`:10562-10663`):
- header line: `type`.
- If `(Slot & 0x100)==0` and `(Slot & 0x80)==0`:
  - if IsMagicalArmor(ClassID), i.e. data ArmorType==3 robe (0x10164d80):
    - ss388 "MP Increase" : MpBonus `%d`;
    - then ss95 "P. Def." : Def(Crystal, Enchant, PhysicalDefense);
  - otherwise only ss95 "P. Def." : Def(Crystal, Enchant, PhysicalDefense).
- Else (shield): ss95 "P. Def." : Def(Crystal, Enchant, **ShieldDefense**); ss317 "DEF Rate" : ShieldDefenseRate `%d`; ss97 "Evasion" : AvoidModify `%d`.

**2 accessory** [O] (`:10664-10686`):
- header line: `type`;
- ss99 "M. Def." : Def(Crystal, Enchant, MagicalDefense).

**Tail, by ItemType** [O] (`:10687-10748`):
- **0, 1, 2:** ss52 "Weight" : Weight `%d` at (10, y). If `desc` is non-empty: `y += 4+H`, draw `desc` at (10, y) in **0xFFB2BECF**, wrapped at **200 px**, then `y += wrappedHeight(desc, 200)`.
- **3 (quest):** `type` (ss240 "Quest Item") in 0xFFB09B79 at (**46**, y), then `desc` as above.
- **5 (etc):** Weight line at x = **46** (`xL` was never reset), then `desc` at x = 10.
- **4 (adena) and any other value:** only `desc`, at y + 4 + H, which leaves one empty line.
- Return value = final y. Without a description it is the top of the last line (its height is not added). This value is the content height given to SetMaxHeight.

**Stat formulas** [O] (0x1014e1f0, 0x1014e290, 0x1014e330, 0x10146910, 0x101469a0; tables read from the file):
- `f(e) = e ≤ 3 ? e : 2e−3` (weapon) and `g(e) = e ≤ 3 ? e : 3e−6` (defence).
- `PAtk = ftol(base + T[crystal]·f(enchant))`, with T chosen by WeaponType:

  | WeaponType | T table (crystal 0-5) | address |
  |---|---|---|
  | 1 or 2 when slot ≠ 0x4000; 3, 4, 7 | {0,2,3,3,4,5} | @0x1027df48 |
  | 1 or 2 with slot 0x4000; 5, 8 | {0,2,4,4,5,6} | @0x1027df78 |
  | 6 (bow) | {0,4,6,6,8,10} | @0x1027dfa8 |
  | any other | 0 | — |

- `MAtk`: same structure, but all three tables are {0,2,3,3,3,4} (@0x10351020/50/80, .data). [I] No writer to these tables was found in the decompilation.
- `Def(c,e,b) = ftol(b + {0,1,1,1,1,1}[c]·g(e))` (@0x1027dfd8).
- `AtkSpdString(v)` (0x10145ed0, `00011.c:14269-14292`):

  | AttackSpeed v | string |
  |---|---|
  | < 260 | ss310 "Very Slow" |
  | < 309 | ss309 "Slow" |
  | < 352 | ss308 "Normal" |
  | < 406 | ss307 "Fast" |
  | otherwise | ss306 "Very Fast" |

**Slot-type strings** [O] (0x10145ba0):

| ItemType | slot | string |
|---|---|---|
| 1 | 0x1 | ss229 Underwear |
| 1 | 0x40 | ss230 Headgear |
| 1 | 0x80, 0x100 | ss231 Shield |
| 1 | 0x200 | ss232 Gloves |
| 1 | 0x1000 | ss233 Boots |
| 1 | 0x2000 | ss234 Cloak |
| 1 | 0x10000, 0x40000, 0x80000 | ss1024 Hair Accessory |
| 1 | 0x400 / 0x800 / 0x8000 | ss235 Upper Body / ss236 Lower Body / ss542 Upper and Lower Body, followed by `" / "` and the ArmorType suffix |
| 2 | 0x2, 0x4 | ss237 Earring |
| 2 | 0x8 | ss238 Necklace |
| 2 | 0x10, 0x20 | ss239 Ring |
| 3 | — | ss240 Quest Item |
| 4 | — | ss241 Money |

- ArmorType suffix: 1 ss245 Light, 2 ss246 Heavy, 3 ss244 Robe; any other value leaves just `" / "`.

#### count > 1: product list (`00013.c:10911-10921`)
- [O] Row i (0 ≤ i < count), with a **36 px pitch**:
  - iconbox 34×34 at (10, 36i+5);
  - icon 32×32 at (11, 36i+6);
  - the NCNameCtrl child at (46, 36i+10), 180×14, which shows "+N Name", the grade and "x%d" (§3).
- [O] No stats are drawn for the products.
- [O] SetMaxHeight(36·count+5). Rows visible in 150 px: [I] 4 (4·36+5 = 149 fits, so scrolling starts at 5 products).
- [O] **Quirk:** this branch pushes the scroll origin **twice** (`call 0x10023790` at 0x10184188 and again at 0x101841ce, popped twice at 0x10184258/0x10184261).
  - [I] As a result the icons scroll at 2× the speed of the name children, which move by 1× through `FUN_101842c0`. This only shows with 5 or more products.
- [O] **Child visibility after a scroll** (0x101842c0):
  - each child is moved by (0, −delta) through `MoveWindow`;
  - it is shown if `childY ≤ height(+0x8c)` and `childY + childH ≥ 0`, and hidden otherwise.
  - So partially visible names stay visible. [I] They may draw outside the 150 px box, because the children have their own clip.
- [O] ShowWindow (0x10182700) resets the offset (0,0) and the slider to 0, but does **not** move the children back.

#### 2.4 Clear (slot 93, 0x10184410, `00013.c:11046-11079`)
- [O] Calls `NCItem::Clear` ×50 and unregisters and nulls all 50 name children.
- [O] Resets `count=0`, scroll `y=0` (`+0x1d0`), slider pos 0, and delta `+0x1d8=0`.
- [O] Does not reset the x offset `+0x1cc` or the `minY`/max height; the next paint with count ≥ 1 sets the latter.
- [O] OnDestroy calls Clear and then deletes the 50 NCItems.

### 3. NCNameCtrl child (shared by both lists)
- **Constructor** (0x1004c370, `00002.c:14133-14157`) [O]: `+0x340 = 1` (tooltip flag) and `+0x344 = 1` (show stack number).
  - [O] NeededItem calls `SetShowStackNumber(0)` (`00013.c:11201`); ItemInfo leaves it at 1.
- **SetNameData(mode 1)** (0x1004b310, `00002.c:13173-13243`) [O]:
  - stores name, ClassID, ItemType, Enchant, CrystalType and Count (ParamStack in FIFO order);
  - builds a temporary NCItem from them and calls `NCTooltipManager::MakeTooltipInfo(item, "Inventory", this+0x304)` (disassembly 0x1004b448-0x1004b472).
- **Paint** (0x1004b510, which calls `DrawItemName` 0x1004a790, `00002.c:12588-12715`). Clip = the control rect; all parts at y = 0.
  - **Main text** [O]:
    - `"+%d %s"` (enchant, name) if `Enchant ≥ 1` and `ItemType ∈ {0,1,2,3}`, otherwise `"%s"`;
    - colour **0xFFDCDCDC**, at x = 0.
  - **Additional name** [O], only if `GetItemAdditionalName(ClassID)` exists and is not "NAME_None":
    - colour **0xFFFFD969**, at x = w(main) + 2.
  - **Grade** [O], only for `CrystalType` 1..4 (`< 5` and > 0):
    - text `` "`%s`" `` with graded / gradec / gradeb / gradea (table @0x10350f70), drawn with `DrawTextW` param 9 = 1, which makes `` `…` `` a symbol-texture escape (see 02_chat.md §5);
    - reserves 14 px, at x = (end of name / additional name) + 2.
    - **S grade (5) has no icon** [O: `local_a34 < 5`].
  - **Count** [O], only if the stack flag is set and `Count > 0`:
    - `"x%d"` (DAT_102407d0, no space), colour 0xFFDCDCDC, at x = end of the grade + 2.
  - **Truncation** [O]: if the total width is greater than the control width, the main text loses characters from the end and gets `".."` appended, until it fits. The other parts shift left by the same amount.
- **Tooltip** (OnPostPaint 0x1004b600, `00002.c:13314-13353`) [O]:
  - if `+0x340` and `+0xd4` are set, it calls `NCTooltip::DrawSimpleTooltip(tooltip@+0x304, …, ctrl rect)`;
  - the tooltip is placed above the control, flipped below it if it would go above the screen top, and clamped horizontally to the screen.
  - [I] `+0xd4` is the NCWnd mouse-over/tooltip-active state. So hovering a name shows the "Inventory" item tooltip, built from only name, id, type, enchant, crystal and count.

### 4. MultiSellNeededItem (NCVIPShopNeededItemWnd)

#### 4.1 Fields
- [O] `TArray<Entry*>` at `+0x214` (count `+0x218`), iconbox at `+0x224`, `NCNameCtrl*[50]` at `+0x228`.
- [O] Entry layout (0x318 bytes, `00009.c:9389-9433`):

  | offset | contents |
  |---|---|
  | +0 | ID |
  | +4 | Name (wchar[256]) |
  | +0x204 | Num |
  | +0x208 | icon texture |
  | +0x30c | Enchant |
  | +0x310 | CrystalType |
  | +0x314 | ItemType |

#### 4.2 AddData(ctrl, param)
`execAddData` 0x1010e0a0 (`00009.c:9326-9450`), which calls 0x10185050 and then 0x10184570.

- [O] Parses the keys `Name`, `ID`, `Num`, `Icon`, `Enchant`, `CrystalType` and `ItemType`. A missing key is 0 or empty.
- [O] `Icon` is passed to `LoadTexture(name, 1)`. When the load fails the icon stays null (`00013.c:11600-11617`).
- [O] The entry is appended (`00013.c:11161-11185`). There is **no 50-row limit** check.
  - Child pointers are written at `+0x228 + 4(n−1)`. Row 51 and later overwrite `+0x2f0`/`+0x2f4` and then memory past the object. [I] Treat 50 as the hard maximum.
- [O] It creates an NCNameCtrl:
  - position (46, 36(n−1)+10), size **170×14**;
  - `SetShowStackNumber(0)`;
  - `SetNameData(mode 1)` with (Name, ID, ItemType, Enchant, CrystalType, Num) (`00013.c:11198-11221`).
- The name gets `+N` (when Enchant ≥ 1 and ItemType 0..3), the additional name and the grade icon, but **no** count.
  - [I] The script sends ItemType = `GetItemDataType`, so PC-cafe points and clan reputation (ItemType −1, ID 0) get no prefix (`MultiSellWnd.uc:248-282`).

#### 4.3 OnPaint (0x10183e30, `00013.c:10760-10808`)
- [O] If count > 0: single origin push, then for each row i:
  - iconbox 34×34 at (10, 36i+5);
  - icon (`+0x208`) 32×32 at (11, 36i+6);
  - `"x %d"` (with a space) of Num in **0xFFDCDCDC** at (**46, 36i+25**). This is drawn unconditionally, so "x 0" is possible.
- [O] Then SetMaxHeight(36·count+5).
- [I] The name sits at y = 36i+10 (its height is 14) and the count at 36i+25, both 15 px right of the slot.
- [I] 4 full rows fit in 150 px; with 5 or more rows the scrollbar appears.
- [O] Scroll handlers move the children by −delta (0x10182550) with **no** hide/show test, unlike ItemInfo.
  - [I] So names of scrolled-out rows can still draw outside the box.

#### 4.4 Clear (slot 93, 0x101847c0, `00013.c:11228-11269`)
- [O] Frees every entry, empties the array, and unregisters and nulls all 50 children.
- [O] Zeroes `+0x2f0`/`+0x2f4`, scroll y, slider pos and delta.
- [O] OnDestroy (0x10184490) frees the entries and calls Clear.

### 5. Script context (MultiSellWnd.uc)
- [O] `OnClickItem` (`:85-130`):
  - first `Clear()`s both controls;
  - then calls `AddData` once per ingredient;
  - then calls `SetItemInfo(i, ItemInfoList[i])` for `i < NeededItemNum` (the number of products in the entry);
  - so `index > 0` means extra products of the same recipe.
- With 1 product the ItemInfo shows the detail view; with 2 or more it shows the icon + name list.

### 6. Unresolved
1. Exact H (height of glyph 'A'). Checked: `FUN_100216e0`. The value depends on the runtime font (SmallFont-r, gly parse = 13, per 02_chat.md). Not verified in-game.
2. `+0xd4` semantics: whether it is hover or tooltip-shown. Checked: no NCNameCtrl mouse override; the only writer found is in `FUN_10061e90` (`00003.c:10435`, which resets it). Tooltip delay and position not traced.
3. NCWnd `SetPosition` (vtable +0xc0) argument meaning, assumed to be (x, y, w, h) relative to the parent; and the exact up-button y.
4. Whether the parent clip also clips child windows. This determines whether out-of-box names show after a scroll.
5. The content and layout of `MakeTooltipInfo("Inventory")` (0x101b8f10) for this reduced NCItem. Not followed.
6. Glyph and texture for `` `graded` `` etc.: the symbol-texture lookup in Engine `DrawTextToCanvas` was not traced.
7. Whether the double origin push in multi-product mode is visible in practice: only with 5 or more products.

