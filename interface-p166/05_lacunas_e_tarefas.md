# 05 — Lacunas do Interlude no l2unity e propostas de tarefa

Só entra o que é **Interlude**: classe no `Interface.u` de referência, comportamento nativo do `NWindow.dll` ou pacote do aCis. O que é posterior está no 01 (versão `posterior`) e no 02 §4, e fica fora.

Tamanho: **P** = até 1 dia de sessão; **M** = 2–4 dias; **G** = mais que isso, ou dividir em mais de uma tarefa. Pacotes: opcode do Interlude (spec 92/95), nome do aCis.

Legenda: **[O]** observado, **[I]** inferido, **[V]** a validar.

## 1. Lacunas por impacto no jogo

A ordem considera o quanto a lacuna impede jogar (usar itens, trocar, guardar, lutar com skills e pets) e quanto outras tarefas dependem dela.

| # | Lacuna | Evidência (Interlude) | Estado no l2unity |
|---|---|---|---|
| 1 | **DialogBox completo**: NumberPad (`num0..9`, `numAll`, `numBS`, `numC`, texto por extenso), caixa de texto, barra de progresso, Enter = ação padrão. Todas as perguntas de quantidade (largar, destruir, depositar, vender, trocar, dar ao pet) dependem dele | `IL:DialogBox.uc:150-448`; spec 01 §1.10 | só OK/Cancel (`u:UI/GameUi.Windows.cs:716-757`) |
| 2 | **Inventário**: clique direito usa o item; reordenar arrastando; desequipar arrastando; equipar arrastando para o slot; lixeira (destruir); largar no mundo; cristalizar; confirmação de receita (ss798) e de `PopMsgNum`; Alt = pilha toda | `IL:InventoryWnd.uc:156-383,953-976,1105-1134`; 02 §3.2 | só o duplo clique usa (`u:UI/GameUi.Windows.cs:251-256`); a lixeira só mostra uma mensagem (`u:UI/GameUi.cs:316`) |
| 3 | **Tooltips do original**: tipos `Inventory` (e as 5 variantes de preço), `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text`; mecanismo sem atraso, caixa acima do slot (abaixo se não couber), moldura de 9 partes, cache por item | 02 §1.2 e §2; `IL:ToolTip.uc:24-1700`; `nw:0x10072da0`, `0x10054680`, `0x101b8f10` | só texto, 0,5 s, no cursor (`u:UI/UiTooltip.cs`) |
| 4 | **Barra de atalhos**: o clique direito deve alternar só o soulshot automático, e não apagar; o Ctrl+clique não deve ligar o automático; arrastar slot → slot troca; arrastar para fora apaga; aceitar macro, receita e itens/ações de pet; rótulo de tecla das barras 2 e 3 | 02 §1.6; `nw:0x100477f0`, `0x100478f0`, `0x100480c0`, `0x10149ee0` | clique direito apaga; Ctrl+clique liga o automático (`u:UI/GameUi.Windows.cs:493-497,621-624,657`) |
| 5 | **Comércio de duas listas**: `ShopWnd` do xdat (duplo clique e arrastar entre `TopList`/`BottomList`, NumberPad, tooltip `InventoryPrice1/2`) e `TradeWnd` com arrastar | `IL:ShopWnd.uc:91-120`, `IL:TradeWnd.uc:84-130`; spec 07 §2.2, §5.1–5.2 | janelas genéricas (`u:UI/GameUi.Windows.cs:124-191`, `u:UI/SocialUi.cs:195-314`) |
| 6 | **Armazém** (`WarehouseWnd`): depositar e retirar, NumberPad, Alt | `IL:WarehouseWnd.uc:111-155`; spec 07 §5.5 | falta |
| 7 | **Pet e servo**: `PetStatusWnd`, `SummonedStatusWnd` (o clique seleciona), `PetWnd` (inventário e ações do pet; inventário ↔ pet arrastando), `SummonedWnd` | `IL:PetStatusWnd.uc:190-203`, `IL:SummonedStatusWnd.uc:232-245`, `IL:PetWnd.uc:46-201`, `IL:SummonedWnd.uc:62-71`; spec 06 | falta |
| 8 | **Macros**: `MacroListWnd` (clique executa; arrastar para a lixeira, edição e barra), `MacroEditWnd` (arrastar atalho para a linha), `MacroInfoWnd`, tecla R | `IL:MacroListWnd.uc:83-201`, `IL:MacroEditWnd.uc:139-171`; spec 05 §6.2 | falta (R só registra no log, `u:App.cs:2617`) |
| 9 | **Teclado**: regra do `EnterChatting` (sem a opção, tecla de digitação foca o chat); tabelas dos outros estados; Espaço/Ctrl (voar e nadar); NumLock (correr sem parar); NumPad (zoom e altura); PrintScrn; P (`ApplyMinFrame`); O (petição); teclas de responder ao sussurro | 03 §1–§5; `nw:0x101734e0`, `0x100624e0`, `0x1013bf90` | 03 §2–§4 |
| 10 | **Cliques pequenos que faltam ou divergem**: StatusWnd (clique = `RequestSelfTarget`); MagicSkillWnd (usar com **clique simples**, não duplo); MenuWnd (tooltip com sysstring; Map abre o minimapa, não o radar); TargetStatusWnd (expandir pela moldura; os botões Party/Trade/Friend não existem no original) | `IL:StatusWnd.uc:47-56`, `IL:MagicSkillWnd.uc:45-54`, `IL:MenuWnd.uc`, `IL:TargetStatusWnd.uc:464` | 02 §3.1 e §3.4 |
| 11 | **Loja privada** (montar a própria loja de venda e de compra, mensagem) | `IL:PrivateShopWnd.uc:113-164`; spec 07 §5.3 | só comprar da loja de outro (`u:UI/SocialUi.cs:316-364`) |
| 12 | **Quests**: `QuestTreeWnd` / `QuestListWnd` | spec 07 §3.3 | casca vazia |
| 13 | **Clã**: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd` | `IL:ClanWnd.uc:554-597`, `IL:ClanDrawerWnd.uc:466-495`; spec 07 §3.4–3.6 | casca vazia; `Clan.Show()` nunca é chamado (`u:UI/SocialUi.cs:373-386`) |
| 14 | **Aprender skill e henna**: `SkillTrainListWnd` / `SkillTrainInfoWnd`, `HennaListWnd` / `HennaInfoWnd` | spec 07 §7, §9 | falta |
| 15 | **Mensagens na tela**: `OnScreenMessageWnd1..8` | `IL:OnScreenMessageWnd.uc`; spec 02 | falta |
| 16 | **Moldura**: minimizar (`Iconize`), expandir (`OnFrameExpandClick`) e destacar abas do chat (`OnTabSplit`/`OnTabMerge`) | `IL:MainWnd.uc:18-34`, `IL:ChatWnd.uc:229-300` | falta |
| 17 | **Frete** (`SelectDeliverWnd` + `DeliverWnd`) | `IL:DeliverWnd.uc:70-112`; spec 07 §5.6 | falta |
| 18 | **Fabricação** (`RecipeBookWnd`, `RecipeShopWnd`, `RecipeManufactureWnd`, `RecipeBuyManufactureWnd`, `RecipeBuyListWnd`, `RecipeTreeWnd`) | `IL:RecipeBookWnd.uc:75-90`, `IL:RecipeShopWnd.uc:145-223`; spec 07 §6 | falta |
| 19 | **Melhoria de item**: `ItemEnchantWnd`, `RefineryWnd` (augment, 3 caixas de soltar), `UnrefineryWnd` | `IL:RefineryWnd.uc:363-384`, `IL:UnrefineryWnd.uc:112-121`; spec 07 §4.2–4.4 | falta |
| 20 | **Grupo e listas sociais**: `PartyMatch*` (5), `UnionWnd`/`UnionDetailWnd`, `DuelManager` | 02 §3.5 | falta |
| 21 | **Demais**: `Olympiad*`, `HeroTowerWnd`, `SiegeInfoWnd`, `SSQ*`, `Manor*` (12), `GuideWnd`, `Petition*`, `CalculatorWnd`, `TutorialViewerWnd`/`TutorialBtnWnd`/`QuestBtnWnd`/`MailBtnWnd` | 01 | falta |

## 2. Propostas de tarefa

Uma por vaga. A ordem sugerida é a ordem do §1. As dependências entre tarefas ficam na coluna "Depende de".

| Id | Vaga | Tarefa | Critério de pronto (resumo) | Pacotes (servidor ↔ cliente) | Depende de | Tam. |
|---|---|---|---|---|---|---|
| T1 | ui | DialogBox completo (NumberPad, edit, progresso, Enter = padrão) | os 8 `EDialogType` de `IL:UICommonAPI.uc:4-14` com o layout de `layout/DialogBox.txt`; `EV_DialogOK/Cancel` com `DialogIsMine` | nenhum | — | M |
| T2 | ui + net | Inventário: clique direito, arrastar (reordenar, desequipar, equipar), lixeira, largar no mundo, cristalizar, confirmações, Alt = pilha | os ramos de `IL:InventoryWnd.uc:184-383` e `:1100-1140` reproduzidos; Alt no início do arrasto (`nw:0x1002eb00`) | C→S `RequestUnEquipItem` 0x11, `RequestDropItem` 0x12, `RequestDestroyItem` 0x59, `RequestCrystallizeItem` 0x72; S→C `InventoryUpdate`, `DropItem`, `SystemMessage` | T1 | M |
| T3 | ui | Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text` | §1.2 do 02 (sem atraso, posição, moldura, cache) e a ordem de campos do §2 do 02, com as sysstrings e as cores de `IL:ToolTip.uc` | nenhum (dados de item e skill dos `.dat` do cliente; `GetOperateType`, `GetMpConsume`, `GetCastRange`) | — | G (dividir: mecanismo + item; skill + buff + atalho) |
| T4 | ui | Barra de atalhos igual ao nativo | clique direito = auto-shot só nos ids de `nw:0x10149ee0`; slot → slot troca; para fora apaga; origens macro, receita e pet; rótulos de tecla certos | C→S `RequestShortCutReg` 0x33 (com `UserShortCut` 1/2), `RequestShortCutDel`, `RequestAutoSoulShot` 0xd0:0x05; S→C `ShortCutRegister` 0x44, `ExAutoSoulShot` 0xfe:0x12 | T8 para as macros | P |
| T5 | ui + net | `ShopWnd` e `TradeWnd` pelo xdat, com o padrão de duas listas | duplo clique, arrastar e Alt entre `TopList`/`BottomList`; NumberPad; tooltips `InventoryPrice1/2` | S→C `BuyList` 0x11, `SellList` 0x10, `TradeStart` 0x1e; C→S `RequestBuyItem`, `RequestSellItem`, `AddTradeItem` | T1, T3 | M |
| T6 | ui + net | `WarehouseWnd` (privado e de clã) | depositar e retirar com duas listas, quantidade e Alt; limite de slots | S→C `WarehouseDepositList` 0x41, `WarehouseWithdrawList` 0x42; C→S `SendWarehouseDepositList` 0x31, `SendWarehouseWithdrawList` 0x32 | T1, T5 (reaproveita as listas) | M |
| T7 | ui + net | Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd` | barras e clique de seleção; inventário do pet com uso e arrastar ↔ inventário; ações do pet e do servo; ações de pet arrastáveis para a barra | S→C `PetStatusShow` 0xb0, `PetInfo` 0xb1, `PetItemList` 0xb2, `PetInventoryUpdate` 0xb3, `PetStatusUpdate`; C→S `RequestPetUseItem` 0x8a, `RequestGiveItemToPet` 0x8b, `RequestGetItemFromPet` 0x8c, `RequestActionUse` | T1 | G |
| T8 | ui + net | Macros: `MacroListWnd`, `MacroEditWnd`, `MacroInfoWnd`, tecla R | criar, editar, apagar e executar; arrastar para a barra, a lixeira e as linhas do editor | S→C `SendMacroList` 0xe7; C→S `RequestMakeMacro` 0xc1, `RequestDeleteMacro` 0xc2 | — | M |
| T9 | ui | Teclado igual ao nativo | regra do `EnterChatting` (03 §1); tabelas dos outros estados; P, O, R; teclas de sussurro no chat | nenhum | — | M |
| T10 | world | Teclas de movimento e câmera que faltam do `user.ini` | Espaço/Ctrl sobem e descem voando ou nadando; NumLock corre sem parar; NumPad 7/9/4/6/1/3 zoom e 8/2 altura; PrintScrn captura a tela | C→S `MoveBackwardToLocation`, `ValidatePosition` (já usados) | — | M |
| T11 | ui | Cliques pequenos e divergências do HUD | StatusWnd → `RequestSelfTarget`; MagicSkillWnd com clique simples; MenuWnd com sysstrings e Map → minimapa; TargetStatusWnd sem os botões extras e com modo expandido | `Action` sobre o próprio objectId [V] | — | P |
| T12 | ui + net | Loja privada: montar venda e compra | `PrivateShopWnd` nos modos `PT_Sell`/`PT_BuyList`; título da loja | S→C `PrivateStoreManageListSell` 0x9a, `PrivateStoreManageListBuy` 0xb7; C→S `RequestPrivateStoreManageSell` 0x73, `SetPrivateStoreListSell` 0x74, `RequestPrivateStoreManageBuy` 0x90, `SetPrivateStoreListBuy` 0x91, `SetPrivateStoreMsg*` | T5 | M |
| T13 | ui + net | Quests: `QuestTreeWnd` e `QuestListWnd` | árvore por zona/nível, abandonar, tooltip `QuestList`/`QuestInfo` | S→C `QuestList` 0x80; C→S `RequestQuestList` 0x63, `RequestQuestAbort` | T3 | M |
| T14 | ui + net | Clã: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd` | lista de membros, informações e autoridade, aprendiz | S→C `PledgeShowMemberListAll` 0x53 e os `Pledge*`; C→S `RequestPledgeMemberList` 0x3c, `RequestClanMemberInfo`… | T1 | G |
| T15 | ui + net | Aprender skill e henna | `SkillTrainListWnd`/`SkillTrainInfoWnd`, `HennaListWnd`/`HennaInfoWnd` | S→C `AcquireSkillList` 0x8a, `AcquireSkillInfo` 0x8b, `HennaEquipList` 0xe2, `HennaInfo` 0xe4; C→S `RequestAcquireSkillInfo` 0x6b, `RequestAcquireSkill` 0x6c, `RequestHennaEquip` 0xbc | — | M |
| T16 | ui | `OnScreenMessageWnd1..8` | 8 posições, fade-in e fade-out, uma mensagem por vez (spec 02) | S→C `ExShowScreenMessage` 0xfe:0x38 | — | P |
| T17 | ui | Moldura: minimizar, expandir e destacar abas do chat | `Iconize` com o ícone da aba; `OnFrameExpandClick`; `OnTabSplit`/`OnTabMerge` do chat; seções numéricas do `WindowsInfo.ini` [V] | nenhum | — | M |
| T18 | ui + net | Frete: `SelectDeliverWnd` + `DeliverWnd` | duas listas com Alt | S→C `PackageToList` 0xc2, `PackageSendableList` 0xc3; C→S `RequestPackageSendableItemList` 0x9e, `RequestPackageSend` 0x9f | T5 | P |
| T19 | ui + net | Fabricação: `Recipe*` (6 janelas) | livro de receitas, fabricar, loja de fabricação | S→C `RecipeBookItemList` 0xd6, `RecipeShopManageList` 0xd8 e os `Recipe*`; C→S `RequestRecipeBookOpen` 0xac, `RequestRecipeItemMakeSelf` 0xaf… | T1, T3 | G |
| T20 | ui + net | Melhoria de item: `ItemEnchantWnd`, `RefineryWnd`, `UnrefineryWnd` | enchant com `ChooseInventoryItem`/`EnchantResult`; augment com as 3 caixas de soltar na ordem | S→C `ChooseInventoryItem` 0x6f, `EnchantResult` 0x81, `ExPutItemResultForVariationMake`…; C→S `RequestEnchantItem` 0x58, `RequestConfirmTargetItem`, `RequestRefine`, `RequestRefineCancel` | T2 (arrastar do inventário) | M |
| T21 | ui + net | Busca de grupo, união e duelo | `PartyMatch*`, `UnionWnd`/`UnionDetailWnd`, `DuelManager` (02 §3.5) | `RequestPartyMatchConfig`, `RequestJoinPartyRoom`… (spec 07 §10) | T1 | G |

Fora desta lista, por ora: Olimpíada, Manor, Seven Signs, cerco, herói, guia, petição, calculadora, tutorial e GM. Todos são Interlude e estão no 01; entram depois que T1–T21 andarem.

## 3. Correções feitas na `client_spec` (commit em `analises`)

| Seção | Antes | Agora | Evidência |
|---|---|---|---|
| 07 §2.2 e §20, item 3 | "qual tecla define `AllItemCount`: [N]" | **Alt** ao começar o arrasto de um item com quantidade > 1 | `NCItemWnd` slot 104, `nw:0x1002eb00` (`GetAsyncKeyState(0x12)`) |
| 05 §3.5 | troca entre slots [N]; remover [I] | slot → slot **troca**; soltar fora de qualquer janela **remove** | `NCShortcutItemWnd::OnDropItem` `nw:0x100480c0`; `OnDragButton` `nw:0x100478f0` |
| 05 §3.10 e §8, item 6 | clique direito: só shot? [N] | só soulshot/spiritshot; em outros atalhos não faz nada; lista dos ids | `NCShortcutItemWnd::OnRButtonDown` `nw:0x100477f0`; `FUN_10149ee0` |
| 05 §5.6 ("Chat × dígitos") | [I]/[N] | [O]: com `EnterChatting=False`, tecla de digitação sem Alt foca o chat; com `True`, vai para a tabela | `NConsoleWnd::HandleKeyboardInput` `nw:0x101734e0`; `NWndUtil::IsTypingKey` `nw:0x100624e0` |
| 01 §1.9 | atraso, posição e texto com `popupValue=-9999`: [N] | sem atraso; caixa acima do controle ou slot; texto de `SetTooltipText` | `nw:0x10072da0`, `0x10054680`, `0x1005da50` |
| 02 §8, item 3 | teclas de `FUN_1013bf90` [N] | códigos 3, 4 e 5 identificados (responder ao último sussurro, percorrer os nomes); a tecla de cada código continua a validar | `nw:0x1013bf90`, `0x10139700`, `0x101398c0` |

## 4. A validar

| Item | Onde olhar |
|---|---|
| Qual tecla do campo de chat gera os códigos 3, 4 e 5 de `NCChatWnd::OnChatEditBox` | quem chama o slot 130 do `NCChatWnd` a partir do `NCEditBox` (teclado, slot 102) |
| Se o caractere que fez o chat ganhar foco (EnterChatting desligado) entra no texto | `ChatWnd.uc:361` (`EV_ChatWndSetFocus`) e `NCEditBox::OnGotFocus` |
| Efeito de `[Game] IsLockShortcutWnd` no arrasto de um slot | `NCShortcutItemWnd::OnDragButton` `nw:0x100478f0`: o valor é lido, mas o desvio não aparece no pseudocódigo (ver a desmontagem) |
| Diferença visual entre `DrawTooltip` e `DrawSimpleTooltip` | `nw:0x10054680` × `nw:0x100549b0` |
| Valor de `TOOLTIP_MINIMUM_WIDTH` e regra de quebra de linha do tooltip | `IL:ToolTip.uc:3`; `TooltipInfo::CalculateSize` `nw:0x10054120` |
| Passo da roda em `NCItemWnd`, `NCListCtrl` e `NCHtmlViewer` | slot 113 dessas classes |
| Se `RequestUseItem` manda o Ctrl ao servidor (`UseItem` do aCis tem `ctrlPressed`) | `UUIScript::execRequestUseItem` |
| O que o nativo fecha no Alt+W antes de repassar ao script | `ExecuteShortcutCommand` `nw:0x10172350` |
| Pacote do `RequestSelfTarget` (clique no StatusWnd) | `UUIScript::execRequestSelfTarget` |
| Se o `engine.unpacked.dll` do Tryskell tem as mesmas funções do `engine.dll` de referência | comparar `function_map_engine.json` com o `engine.c` do Tryskell |
| Equivalência de Home/PgUp/PgDn do l2unity com `FixedDefaultCamera` | spec 05 §5.6 × `u:App.cs:2588-2592` |
| Mouse para canhoto (`GIsLeftHandedMouse`): onde se liga | `WinDrv.c:3455-3470`; `Option.ini` |

## 5. O que o l2unity tem a mais (não existe no Interlude)

- Botões Party/Trade/Friend na janela do alvo (`u:UI/GameUi.cs:405-423`).
- Segurar o botão esquerdo por 300 ms para seguir o cursor (`u:App.cs:2492-2516`).
- Caixa de ajuda (H) e caixa de informação (`u:UI/GameUi.Hud.cs:262-271,318-325`). O texto da ajuda descreve teclas erradas: M "música", R "andar/correr", X "sentar".
- `SettingsUi` (`u:UI/SettingsUi.cs`), uma janela própria do port.

São escolhas do port. Este levantamento não pede que saiam, mas a ajuda deveria descrever as teclas reais (03 §2).
