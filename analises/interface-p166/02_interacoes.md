# 02 — Interações de mouse por janela (Interlude) e o que falta no l2unity

Para cada janela do Interlude: o que acontece ao passar o mouse, nos cliques (esquerdo, direito, duplo), ao arrastar e soltar, com Shift/Ctrl/Alt, com a roda e ao mover/redimensionar. Cada linha traz o handler na fonte do Interlude e o estado no l2unity.

Legenda: **[O]** observado, **[I]** inferido, **[V]** a validar.

Fontes e convenções:
- `IL:Arquivo.uc:linha`: fonte UnrealScript do Interlude, exportada do `reference\l2-interlude\client\system\Interface.u` para `tools\l2anim\export\uc\Interface\`.
- `P166:Arquivo.uc:linha`: `analises\Interface_P166\Interface\Classes\`.
- `nw:0x…`: função do `NWindow.dll` do Interlude. O pseudocódigo do `system_Tryskell_RE\nwindow.c` tem **os mesmos endereços** do `NWindow.dll` de referência (ver 00 §2), e os nomes vêm de `analises\l2-interlude\re\function_map_nwindow.json`.
- `u:Arquivo.cs:linha`: `l2unity\Assets\L2Web\Scripts\` no `main`.

---

## 1. Mecanismos nativos (valem para todas as janelas)

O script do Interlude recebe poucos eventos de mouse. `UIScript.uc` (IL, linhas 287-339) declara `OnLButtonDown/Up`, `OnLButtonDblClick`, `OnRButtonDown/Up/DblClick`, `OnDropItem`, `OnDragItemStart/End`, `OnDropItemSource` e os eventos por controle (`OnClickItem`, `OnDBClickItem`, `OnRClickItem`, `OnClickListCtrlRecord`…) [O]. **Não existem** `OnMouseOver`, `OnMouseOut`, `OnMouseMove`, `OnMButtonDown/Up`, `OnRClickButton`, `OnDropWnd` nem `OnKeyDown/Up` com handle de janela. Todos esses aparecem só na P166 (`P166 NWindow\Classes\UIScript.uc:467-494`) [O]. No Interlude, hover, tooltip, início de arrasto e roda são inteiramente nativos.

### 1.1 Slots virtuais de mouse do `NCWnd`

[O] Da tabela de vtables do `function_map_nwindow.json` (método `<virtual N>` com string de guard):

| Slot | Método | Classes que sobrescrevem (exemplos) |
|---|---|---|
| 102 / 103 | `OnKeyDown` / `OnKeyUp` | `NCEditBox`, `NCHtmlViewer`, `NCScrollWnd`, `NConsoleWnd` |
| 104 | `OnMouseMove` | 29 classes, entre elas `NCItemWnd` (`nw:0x1002eb00`), `NCShortcutItemWnd`, `NCStatusIconCtrl`, `NCMinimapWnd`, `NCResizeFrame`, `NCFrameCtrl` |
| 105 / 106 | `OnLButtonDown` / `OnLButtonUp` | 35 / 26 classes |
| 107 / 108 | `OnRButtonDown` / `OnRButtonUp` | `NCShortcutItemWnd` (107), `NCItemWnd` (108), `NCInvenItemWnd`, `NCEquipItemWnd` |
| 111 / 112 | `OnLButtonDblClick` / `OnRButtonDblClick` | `NCItemWnd`, `NCListCtrl`, `NCEditBox`, `NCSliderCtrl`, listas do Messenger |
| 113 | `OnMouseWheel` | `NCItemWnd`, `NCListBox`, `NCListCtrl`, `NCMultiEdit`, `NCHtmlViewer`, `NCScrollWnd`, `NCTreeCtrl`, `NCXMLTreeCtrl`, `NConsoleWnd` |
| 118 / 119 | `OnDragItem` / `OnDragItemEnd` | `NCButton`, `NCEditBox`, `NCWnd` |
| 120 | `OnDropItem` | `NCShortcutItemWnd` (`nw:0x100480c0`) |

### 1.2 Tooltip: quando aparece, onde e com o quê

- [O] **Sem atraso.** Depois de desenhar as janelas, `NCVirtualWndMain::PostDrawChildWindow` (`nw:0x10072da0`) acha a janela sob o cursor (`FindPointingWindow`). Em seguida sobe pelos pais até achar uma visível com o bit `0x20` e manda a ela a mensagem `0x50a`, que vira `OnPostPaint` (slot 100). Isso roda **a cada quadro**, e nenhum timer é consultado no caminho. O tooltip aparece no primeiro quadro em que o mouse está sobre o controle.
- [O] **Não aparece durante um arrasto.** `PostDrawChildWindow` só envia quando `(+0x960 & 2) == 0` no objeto do console. O `OnPostPaint` do `NCItemWnd` exige `GetDragDropState() == 0` (`nw:0x1002fb30`, chamada a `FUN_10147a60`).
- [O] **Conteúdo com cache.** `NCTooltipManager::MakeTooltipInfo` (`nw:0x101b8f10`) só dispara `EV_RequestTooltipInfo` (0xb68 = 2920) quando o item ainda não tem `TooltipInfo` ou quando a versão de idioma mudou (`TooltipInfo::IsExistTooltipInfo`, `GetLanguageVer`). O param leva `SourceType=1` (item), `TooltipType` e os campos do item. O script responde com `ReturnTooltipInfo`, e o resultado fica guardado no item. A cada quadro só se desenha o que já está pronto.
- [O] **Tooltip de texto** (`NCWnd::OnPostPaint`, `nw:0x1005da50`): se o campo `+0x170` (o `popupValue` do xdat) for ≥ 0, o texto é a sysstring daquele id. Senão é a string `+0x174`, gravada por `SetTooltipText`. Isso resolve a pendência da spec 01 §1.9 (texto quando `popupValue = -9999`).
- [O] **Posição** (`NCTooltip::DrawTooltip`, `nw:0x10054680`):
  - O ponto de referência é o canto superior esquerdo do controle. No `NCItemWnd` é o do **slot** sob o mouse: coluna × (largura + espaço), linha × (altura + espaço) (`nw:0x1002fb30`).
  - A caixa fica **acima** desse ponto (`y − altura`). Se sair pelo topo, desce para `y + 32 + altura`.
  - Na horizontal: se passar da borda direita, recua o excesso; se sair pela esquerda, encosta em x = 0.
  - Moldura de 9 partes com cantos de 8×8 (texturas `local_18[0..8]`). O conteúdo começa em (+5, +5).
- [O] Há duas formas de desenho: `NCTooltip::DrawTooltip` (completa) e `DrawSimpleTooltip` (`nw:0x100549b0`). O `NCItemWnd` usa a simples quando o slot não está selecionado e não há estado especial (`+0xa5`, `+0xa7`). [V] O que muda visualmente entre as duas.
- **l2unity** (`u:UI/UiTooltip.cs`): atraso de 0,5 s (`:58-63`), posição no cursor + (12, 18) (`:94-101`), caixa única com fundo `#0a0a0c` e uma string só (`:73-89`). **Diverge** em atraso, posição, moldura e conteúdo (ver §2).

### 1.3 Arrastar e soltar

- [O] **Início:** no `OnMouseMove` do `NCItemWnd` (`nw:0x1002eb00`, slot 104), com o botão esquerdo apertado sobre um slot ocupado (`+0x9f` = índice apertado) e sem arrasto em curso (`GetDragDropState() == 0`). O código não testa distância mínima: o primeiro movimento já inicia o arrasto [I].
- [O] **Alt ao arrastar = pilha inteira.** Se a quantidade (`+0x1e64`) for maior que 1 e `GetAsyncKeyState(VK_MENU)` estiver apertado, `ItemInfo.AllItemCount` (`+0x1f0c`) recebe `min(quantidade, +0x1e90)` e o estado de arrasto vai a 2, com a contagem desenhada junto ao ícone (`FUN_10062590` → `MakeTooltipInfo`). Sem Alt, `AllItemCount = 0` e o estado é 1 (`NConsoleWnd::SetDragDropState`, `nw:0x10147950`). Isso **resolve a pendência da spec 07 §2.2 e §20** ("qual tecla define `AllItemCount`"): é **Alt**. Todas as janelas que testam `info.AllItemCount > 0` movem a pilha toda sem perguntar a quantidade: `IL:InventoryWnd.uc:235,310,357`, `IL:ShopWnd.uc:112,118`, `IL:WarehouseWnd.uc:147,153`, `IL:PrivateShopWnd.uc:153,162`, `IL:TradeWnd.uc:111`, `IL:PetWnd.uc:52`, `IL:DeliverWnd.uc:104,110`.
- [O] **Soltar:** o destino recebe `OnDropItem(controle, info, x, y)`. Se o item for solto fora de qualquer janela, a origem recebe `OnDropItemSource("Console", info)` (spec 01 §1.8; `IL:InventoryWnd.uc:347-383`).
- [O] Durante o arrasto, `NCVirtualWndMain::SetIconMoveCursor` (`nw:0x10071b70`) troca o cursor pelo ícone.
- **l2unity:** só existe arrastar para a barra de atalhos (`u:UI/GameUi.Windows.cs:338-377`). A imagem fantasma segue o ponteiro com 80% de alfa, e Alt não faz nada. Ver §3 para cada par origem → destino.

### 1.4 Roda do mouse

- [O] `NCListBox` (chat e listas de texto): 1 linha por entalhe de 120 (spec 02, `nw:0x10032c50`).
- [O] `NCScrollWnd::OnMouseWheel` (`nw:0x10044c80`): `passo × 3` por entalhe (`(short)HIWORD(wParam) / 120 × (+0x1e0) × 3`), limitado ao topo e ao fim. É a base das janelas com rolagem (MultiSellItemInfo, HTML).
- [O] Também rolam com a roda: `NCItemWnd` (grades de itens, skills, ações), `NCListCtrl`, `NCMultiEdit`, `NCHtmlViewer`, `NCTreeCtrl` e `NCXMLTreeCtrl` (slot 113). Fora da UI, `NConsoleWnd` repassa a roda ao `user.ini` (zoom da câmera, spec 05 §5.6).
- [V] O passo exato de `NCItemWnd`, `NCListCtrl` e `NCHtmlViewer` (os métodos existem, mas o passo não foi lido).
- **l2unity:** chat a 120 por entalhe (`u:UI/L2Log.cs:253-260`, certo). Grades e HTML usam `ScrollRect` com sensibilidade 20 (`u:UI/L2Wnd.cs:433-437`, `u:UI/UiKit.cs:352`), MultiSell 45 px (`u:UI/MultiSellView.cs:30-35`). Os passos não foram conferidos com o original.

### 1.5 Shift, Ctrl e Alt

- [O] **O script do Interlude nunca lê modificadores.** Não há `IsKeyDown(IK_Shift|IK_Ctrl|IK_Alt)` em nenhum dos 142 `.uc` (varredura `scripts\scan_uc.py`, campo `keys` vazio). Tudo é nativo:

| Modificador | Onde | Efeito | Evidência |
|---|---|---|---|
| Alt | arrastar item empilhável | move a pilha toda (`AllItemCount`) | `nw:0x1002eb00` |
| Ctrl | `UseSkill` (clique em skill, atalho de skill) | 2º parâmetro do pedido = `IsPKMode()` ("force") | `UUIScript::execUseSkill` `nw:0x10105ea0`; `execIsPKMode` `nw:0x100f5560` (vfunc `+0x590` do console) |
| Shift | `UseSkill` | 3º parâmetro = `UInput::KeyDown(0x10)` ("não se mover") | idem |
| Ctrl | clique num membro do grupo ou da união | `RequestAttack` em vez de `RequestAction` | `IL:PartyWnd.uc:659-667`, `IL:UnionDetailWnd.uc:77-84` |
| Shift | clique no mundo / `Attack` | flag Shift do `Action` | spec 05 §5.7 |
| Ctrl | atalhos F1–F12 / 1–0 | mesmo comando, com Ctrl | xdat, spec 05 §5.1 |
| Shift+Ctrl+Tab | qualquer estado, com autoridade de builder | alterna uma janela de builder (GM) | `NConsoleWnd::HandleKeyboardInput` `nw:0x101734e0`, `GetBuilderAuthority` `nw:0x1014e820` [I] |

- [O] **Não existe no Interlude:** Shift+clique para link de item no chat (`P166:InventoryWnd.uc:659` `SetItemTextLink`; o aCis não tem pacote de link de item, e `clientpackets\` não tem `RequestExRqItemLink`), Alt+duplo clique para mover tudo (`P166:ShopWnd.uc:493,517`, `P166:WarehouseWnd.uc:279,293`, `P166:PrivateShopWnd.uc:279,312`; no Interlude o duplo clique passa `false`, `IL:ShopWnd.uc:95,99`) e Alt nas janelas de fabricação (`P166:RecipeManufactureWnd.uc:235`).
- **l2unity:** Ctrl/Shift na skill estão certos (`u:UI/GameUi.Windows.cs:313`). Ctrl+clique no membro do grupo também (`u:UI/PartyWnd.cs:418-442`). **Diverge:** Ctrl+clique num atalho de item liga o soulshot automático (`u:UI/GameUi.Windows.cs:621-624`); no Interlude isso é o **clique direito** (§1.6). Alt ao arrastar não existe.

### 1.6 Barra de atalhos (nativo, `NCShortcutItemWnd`)

| Ação | Interlude | l2unity |
|---|---|---|
| Clique esquerdo | usa o atalho (`OnClickButton`, `nw:0x10047e70`; spec 05 §3.9) | feito (`u:UI/GameUi.Windows.cs:492,618-629`) |
| Clique direito | [O] **só** em soulshot/spiritshot: alterna o automático (`RequestAutoSoulShot(itemId, !auto)`). Em qualquer outro atalho não faz nada (`OnRButtonDown` `nw:0x100477f0`). Ids de shot: `FUN_10149ee0` = 1463–1467, 1835, 2509–2514, 3947–3952, 5789–5790, 6535–6540, 6645–6647 | **diverge**: apaga o atalho (`u:UI/GameUi.Windows.cs:493-497`) |
| Arrastar slot → outro slot | [O] **troca**: registra o atalho de origem no destino e, se o destino estava ocupado, o antigo do destino na origem; se estava vazio, apaga a origem. Reativa o automático dos shots dos dois lados (`OnDropItem` `nw:0x100480c0`, ramo `IsA(NCShortcutItemWnd)`) | falta |
| Arrastar slot → fora de qualquer janela | [O] apaga (`DeleteItem` → `RequestShortCutDel`) quando o ponto solto, com margem de 30 px, não cai dentro da própria barra (`OnDragButton` `nw:0x100478f0`). [V] O efeito de `[Game] IsLockShortcutWnd`: o valor é lido, mas o desvio não aparece no pseudocódigo | falta |
| Soltar vindo do inventário, pet, skill, macro, ação ou receita | [O] `RequestShortCutReg`. Ações 0–14 vão com `UserShortCut = 1` (jogador), 15–27 com `2` (pet). Inventário do pet também com `2` (`nw:0x100480c0`) | parcial: item, skill e ação (`u:UI/GameUi.Windows.cs:255,314,330`); macro, receita e pet faltam |
| Passar o mouse | tooltip `Shortcut` (§2) e contorno `menu_outline` (spec 05 §3.6) | parcial: texto com rótulo de tecla errado para as barras 2 e 3 (`u:UI/GameUi.Windows.cs:657`) |

Isso resolve a spec 05 §3.5 (troca entre slots e remoção) e a §8, item 6 (clique direito).

### 1.7 Mover, redimensionar, minimizar e fechar

- [O] `NCFrameCtrl` (barra de título, botões fechar, minimizar e expandir), `NCResizeFrame` (faixa de redimensionamento), `Iconize` (minimizar para ícone, `IL:MainWnd.uc:18-34`) e `OnFrameExpandClick` (`IL:TargetStatusWnd.uc:464`, `IL:OlympiadPlayerWnd.uc:247`). Posição salva em `WindowsInfo.ini` (spec 01 §1.11).
- **l2unity:** mover, trazer para frente, redimensionar o chat e salvar a posição estão feitos (`u:UI/L2Wnd.cs:695-911`). **Falta** minimizar (`Iconize`) e expandir pela moldura (`OnFrameExpandClick`: modo expandido do `TargetStatusWnd`).

---

## 2. Conteúdo do tooltip por tipo (`IL:ToolTip.uc`)

[O] `HandleRequestTooltipInfo` (`IL:ToolTip.uc:24-128`) escolhe o tipo por `TooltipType`. São 22 tipos no Interlude, contra cerca de 50 na P166 (`P166:Tooltip.uc:99-294`). Os tipos que só a P166 tem estão no §4.

| Tipo | Quem usa (popupType do xdat, spec 01 §1.9) | Conteúdo, na ordem | Handler | l2unity |
|---|---|---|---|---|
| `Inventory` e variantes `InventoryPrice1`, `InventoryPrice2`, `InventoryPrice1HideEnchant`, `InventoryPrice1HideEnchantStackable`, `InventoryPrice2PrivateShop` | 36 ItemWindow (inventário, lojas, armazém, troca) | 1) `+N` do enchant (exceto `HideEnchant*`); 2) nome com o nome do augment; 3) ícone de grau; 4) quantidade (exceto `HideEnchantStackable`); 5) adena: valor por extenso; 6) preço: `Price1` = ss322 + valor + por extenso (cor de adena), `Price2` = ss322/ss468 com preço e total; `PrivateShop` + qtd reservada ss808; 7) por tipo: **arma**: tipo/slot, bloco ss1489 com P.Atk ss94, M.Atk ss98, Velocidade ss111, Soulshot ss404 "X n", Spiritshot ss496, Peso ss52, MP ss320; augment ss1490, até 3 linhas por opção na cor do refino, fecho ss1491. **Escudo**: ss95, ss317, ss97, peso. **Armadura mágica**: slot, ss388, ss95, peso. **Outra armadura**: slot, ss95, peso. **Acessório**: slot, ss99, peso. **Quest**: slot. **Etc**: coleira (ss969, ss88), ticket do lorde ss972, loteria ss670/671, ticket de corrida ss670/671/744, peso; 8) durabilidade (item sombra): ss1492 `atual/máx`, em vermelho quando ≤ 5; 9) descrição em RGB(178,190,207); 10) peças do conjunto: cinza (112,115,123), claras (176,185,205) quando equipadas | `:213-822` | **falta** (só o texto `+N nome (qtd)`, `u:UI/GameUi.Windows.cs:247`) |
| `Skill` | 3 (MagicSkillWnd) | nome; nome do enchant; " "; "Lv" ss88 em RGB 163; nível; tipo de operação (`GetOperateType`); HP ss1195; MP ss320; alcance ss321; descrição | `:868-999` | falta (só `Nome Nv L`, `u:UI/GameUi.Windows.cs:306`) |
| `Shortcut` | 88 (ShortcutItemWindow) | item: enchant, nome, grau, qtd; skill: nome, enchant, "Lv", nível, "(MP:custo)" ss91; ação, macro e receita: só o nome (spec 05 §3.6) | `:1259-1397` | parcial (texto e rótulo de tecla, `u:UI/GameUi.Windows.cs:657`) |
| `AbnormalStatus` | 3 (AbnormalStatusWnd) | nome; enchant em RGB(255,217,105); "Lv" ss88 + nível; se não for debuff: ss1199 "Remaining Time" com a contagem; descrição (spec 06 §3.5) | `:1001-1134` | parcial (só `Nome Nv L`, `u:UI/GameUi.Hud.cs:159`) |
| `Action` | 6 (ActionWnd) | nome; descrição em RGB(178,190,207) | `:824-866` | parcial (só o nome) |
| `Text` / `Description` | Button 29, TextBox 14, Window 9, Texture 7 | sysstring do `popupValue` ou texto de `SetTooltipText` (§1.2) | `:157-211` | parcial (só alguns botões; MenuWnd com texto fixo em português, `u:UI/GameUi.cs:368-372`) |
| `NormalItem` | 1 | nome (com enchant e grau) e descrição | `:1137-1180` | falta |
| `Recipe` / `RecipePrice` | 2 + 1 (RecipeBookWnd, RecipeShop) | nome, grau; `RecipePrice`: preço ss641 + valor por extenso; peso ss52; descrição | `:1181-1258` | falta (janelas faltam) |
| `RecipeManufacture` | 2 | nome, grau; ss736 (`Reserved`) e ss737 (`ItemNum`): quantidade pedida e quantidade que se tem [I] | `:1399-1450` | falta |
| `ClanInfo` | 2 (ClanWnd) | classe do membro (ss391, `GetClassType`) | `:1451-1471` | falta |
| `PartyMatch` | 4 | classe do jogador (ss391) | `:1472-1492` | falta |
| `QuestList` / `QuestInfo` | 1 + 1 | ss1200 nome, ss1202 tipo; `QuestInfo` acrescenta ss1201 e ss922 (colunas da linha) | `:1493-1529`, `:1564-1631` | falta |
| `RaidList` | 1 (GuideWnd) | o texto `szReserved` da linha (descrição do chefe) | `:1530-1563` | falta |
| `ManorSeedInfo`, `ManorCropInfo`, `ManorSeedSetting`, `ManorCropSetting`, `ManorDefaultInfo`, `ManorCropSell` | Manor* | colunas da linha (`ParamToRecord`) | `:1632-1700` | falta |

- [O] Nenhuma janela de status (HP/MP/CP), alvo ou membro de grupo tem `popupType` de dados no Interlude. O grupo só tem tooltip de texto nos ícones de classe e de líder (spec 06 §4). Um "tooltip de alvo" seria invenção.
- [I] Largura: `MinimumWidth = TOOLTIP_MINIMUM_WIDTH` e `bLargeWidth` quando há descrição ou conjunto (`IL:ToolTip.uc:713,816`). [V] Valor da constante e quebra de linha.

---

## 3. Por janela (Interlude)

Colunas: **Mouse em cima** (tooltip ou realce); **Esq.** (clique esquerdo); **Dir.** (clique direito); **Duplo** (duplo clique); **Arrastar** (arrastar e soltar); **Mod.** (modificadores); **Roda/moldura**. "—" = nada no original. Os estados do l2unity remetem a `01_janelas.md`.

### 3.1 HUD

| Janela | Mouse em cima | Esq. | Dir. | Duplo | Arrastar | Mod. | Roda/moldura | Handler IL | l2unity |
|---|---|---|---|---|---|---|---|---|---|
| StatusWnd | — | `RequestSelfTarget` se x ∈ (13, largura−10) | — | — | — | — | move, posição salva | `StatusWnd.uc:47-56` | **falta** o clique (nenhum handler, `u:UI/GameUi.cs:209`) |
| TargetStatusWnd | — | — | — | — | — | — | botão expandir da moldura (`SetExpandMode`) | `TargetStatusWnd.uc:464-467` | parcial: `btnClose` cancela o alvo; **a mais**: botões Party/Trade/Friend que o original não tem (`u:UI/GameUi.cs:405-423`); **falta** expandir |
| AbnormalStatusWnd | tooltip `AbnormalStatus` | — | — | — | — | — | — | nativo (StatusIconCtrl) | parcial (tooltip só com nome e nível). Cancelar buff com clique é **posterior** (§4) |
| PartyWnd | tooltip de texto nos ícones de classe e de líder; botão de buff com 3 estados | membro: `RequestAction`; com Ctrl (`IsPKMode`), `RequestAttack`. Faixa x ∈ (13, largura−10), linha = (y−topo)/46 | `RequestAssist` (no **soltar** do botão direito) | — | — | Ctrl | move | `PartyWnd.uc:647-688` | feito (`u:UI/PartyWnd.cs:418-442`) |
| PartyWndCompact | idem | `RequestTargetUser` se x > 30, linha = (y−topo)/26 | `RequestAssist` | — | — | — | move | `PartyWndCompact.uc:642-671` | feito |
| PetStatusWnd | — | `RequestAction(petId)` se x ∈ (13, largura−10) | — | — | — | — | move | `PetStatusWnd.uc:190-203` | **falta** (janela falta) |
| SummonedStatusWnd | — | idem, com o servo | — | — | — | — | move | `SummonedStatusWnd.uc:232-245` | **falta** |
| ShortcutWnd | tooltip `Shortcut`, contorno | usar | auto-shot (só shots) | — | ver §1.6 | Ctrl/Shift = force/stand | botões expandir, girar, travar, página | nativo; `ShortcutWnd.uc` | parcial (§1.6) |
| ChatWnd | tooltips ss897/996/389 nos botões | abas; botões | — | — | aba destacável: `OnTabSplit`/`OnTabMerge` | — | roda 1 linha por entalhe; redimensiona para cima | `ChatWnd.uc:129-159,229-300` | parcial: **falta** destacar abas (`OnTabSplit`/`Merge`); roda e redimensionar feitos |
| SystemMsgWnd | — | — | — | — | — | — | roda | `SystemMsgWnd.uc` | feito |
| MinimapWnd / _Expand | ícone do membro do grupo: nome; arma amaldiçoada: nome; o próprio: nome | arrastar move o mapa; botões | — | — | — | — | — | `MinimapWnd.uc`; nativo `NCMinimapWnd` `nw:0x101873b0/0x1018b5d0` | feito (`u:UI/MinimapView.cs`) |
| MenuWnd | tooltip `Text` com sysstring (ex. 925 "Map (Alt+M)") | abre a janela | — | — | — | — | — | `MenuWnd.uc` | parcial: tooltip com texto fixo, não sysstring; Map alterna o radar em vez do minimapa (`u:UI/GameUi.cs:364-372`) |
| ZoneTitleWnd, OnScreenMessageWnd1..8 | — | — | — | — | — | — | — | `ZoneTitleWnd.uc`, `OnScreenMessageWnd.uc` | Zone feito; OnScreenMessage **falta** |

### 3.2 Inventário e itens

| Janela | Mouse em cima | Esq. | Dir. | Duplo | Arrastar | Mod. | Roda/moldura | Handler IL | l2unity |
|---|---|---|---|---|---|---|---|---|---|
| InventoryWnd | tooltip `Inventory` (§2) | seleciona; limpa a seleção dos slots de equipamento (`OnSelectItemWithHandle`) | **usa** o item (`UseItem`) | usa o item | inventário→inventário: reordena (`GetIndexAt` + `SwapItems`, só no cliente); equipado→inventário: `RequestUnequipItem`; pet→inventário: `RequestGetItemFromPet` (pergunta a qtd ou Alt); inventário→slot de equipamento: `RequestUseItem` (exceto etcitem); pet→equipamento: pega do pet e equipa; →**lixeira**: destrói com confirmação (ss74) ou pede a qtd (ss73), Alt = tudo; →**cristalizar**: se tem a habilidade e o item é cristalizável, confirma (ss336); →**mundo** (`Console`): larga no chão em `GetClickLocation()`, confirma (ss400) ou pede a qtd (ss71), Alt = tudo (ss1833) | Alt (pilha) | rola a grade | `InventoryWnd.uc:156-383`; `UseItem` `:953-976` (receita → confirma ss798; `PopMsgNum` → confirma) | parcial: duplo clique usa; **falta** clique direito, reordenar, desequipar arrastando, lixeira (só mensagem, `u:UI/GameUi.cs:316`), cristalizar, largar no chão, confirmação de receita e `PopMsgNum`, Alt |
| ItemEnchantWnd | — | botões | — | — | — | — | — | `ItemEnchantWnd.uc` (só `OnClickButton`) | **falta** |
| RefineryWnd (augment) | — | — | — | — | soltar arma na caixa 1, life stone na 2, gemstone na 3, nessa ordem (`ValidateFirstItem/Second/Gemstone`) | — | — | `RefineryWnd.uc:363-384` | **falta** |
| UnrefineryWnd | — | — | — | — | soltar o item em `ItemUnrefine` | — | — | `UnrefineryWnd.uc:112-121` | **falta** |
| PetWnd (inventário e ações do pet) | tooltip `Inventory` | ação do pet: `DoAction` | item: `RequestPetUseItem` | item: `RequestPetUseItem` | inventário→pet: `RequestGiveItemToPet` (qtd ou Alt) | Alt | — | `PetWnd.uc:46-69,170-201` | **falta** |
| SummonedWnd | — | ação: `DoAction` | — | — | — | — | — | `SummonedWnd.uc:62-71` | **falta** |

### 3.3 Comércio

Padrão de duas listas (spec 07 §2.2): o duplo clique move um item entre `TopList` e `BottomList` e pergunta a quantidade se for empilhável. Arrastar entre as listas faz o mesmo, e com Alt move tudo.

| Janela | Mouse em cima | Esq. | Dir. | Duplo | Arrastar | Mod. | Handler IL | l2unity |
|---|---|---|---|---|---|---|---|---|
| ShopWnd | `InventoryPrice1/2` | — | — | move entre listas | entre listas; Alt = tudo | Alt | `ShopWnd.uc:91-120` | parcial: janela genérica com caixa de quantidade (`u:UI/GameUi.Windows.cs:124-191`); **falta** o padrão de duas listas, arrastar e tooltip de preço |
| WarehouseWnd | `Inventory` | clique na lista de cima fecha o DialogBox se for dele | — | move | entre listas; Alt | Alt | `WarehouseWnd.uc:111-155` | **falta** |
| PrivateShopWnd (vender, comprar, montar a loja) | `InventoryPrice2PrivateShop` | idem Warehouse | — | move | entre listas (busca por `ServerID` ou `ClassID` conforme o tipo) | Alt | `PrivateShopWnd.uc:113-164` | parcial: só comprar da loja de outro (`u:UI/SocialUi.cs:316-364`); **falta** montar a própria loja |
| TradeWnd | `Inventory` | — | — | inventário: `RequestAddTradeItem` (pede a qtd) | inventário → `MyList`; Alt = tudo | Alt | `TradeWnd.uc:84-130` | parcial: clique simples na linha oferece o item (`u:UI/SocialUi.cs:255-266`); **falta** arrastar e Alt |
| MultiSellWnd | `Inventory` | seleciona a entrada e preenche ingredientes e produtos | — | — | — | — | `MultiSellWnd.uc:86-142` | feito (`u:UI/MultiSellView.cs:245-249`) |
| DeliverWnd / SelectDeliverWnd (frete) | `Inventory` | idem Warehouse | — | move | entre listas; Alt | Alt | `DeliverWnd.uc:70-112` | **falta** |
| RecipeShopWnd (montar loja de fabricação) | `Recipe` | — | — | livro → loja: pede o preço; loja: remove | livro ↔ loja | — | `RecipeShopWnd.uc:145-223` | **falta** |
| RecipeBuyManufactureWnd / RecipeManufactureWnd | `RecipeManufacture` | botões | — | — | — | — | (só botões) | **falta** |
| ManorShopWnd, Manor* (castelo) | `Manor*` | — | — | linha: abre a edição (`OnChangeBtn`) | — | — | `ManorCropSellWnd.uc:54`, `ManorCropInfoSettingWnd.uc:160`, `ManorSeedInfoSettingWnd.uc:183` | **falta** |

### 3.4 Skills, ações e macros

| Janela | Mouse em cima | Esq. | Dir. | Duplo | Arrastar | Mod. | Handler IL | l2unity |
|---|---|---|---|---|---|---|---|---|
| MagicSkillWnd | `Skill` | **usa** a skill (`UseSkill`) | — | — | ativa → barra; passiva não arrasta (spec 05 §3.5) | Ctrl/Shift (§1.5) | `MagicSkillWnd.uc:45-54` | **diverge**: usa no **duplo** clique (`u:UI/GameUi.Windows.cs:313`); no original é clique simples |
| ActionWnd | `Action` | **usa** (`DoAction`) | — | — | → barra | — | `ActionWnd.uc:46-67` | feito (`u:UI/GameUi.Windows.cs:329`) |
| MacroListWnd | `Text` | **usa** a macro (`RequestUseMacro`) | — | — | macro → barra; macro → `btnTrash` apaga; macro → `btnEdit` edita | — | `MacroListWnd.uc:83-92,190-201` | **falta** |
| MacroEditWnd | — | — | — | — | atalho → linha `txtEdit*` copia `MacroCommand`; realça a linha enquanto arrasta | — | `MacroEditWnd.uc:139-171` | **falta** |
| SkillTrainListWnd / SkillTrainInfoWnd | — | árvore e botões | — | — | — | — | (botões, `OnClickButton`) | **falta** |
| HennaListWnd / HennaInfoWnd | — | botões | — | — | — | — | (botões) | **falta** |

### 3.5 Social, quests e listas

| Janela | Esq. | Duplo | Mod. | Handler IL | l2unity |
|---|---|---|---|---|---|
| ClanWnd | membro: `RequestClanMemberInfo` ou `RequestClanMemberAuth`, conforme o painel aberto, e abre o `ClanDrawerWnd` | — | — | `ClanWnd.uc:554-597` | **falta** (casca) |
| ClanDrawerWnd | — | lista de autoridade: edita o grau; aprendiz: `RequestClanAssignPupil` | — | `ClanDrawerWnd.uc:466-495` | **falta** |
| PartyMatchWnd | — | sala: `RequestJoinPartyRoom` | — | `PartyMatchWnd.uc:224-235` | **falta** |
| PartyMatchWaitListWnd / OutWaitList | — | jogador: põe `"nome ` no chat (sussurro) | — | `PartyMatchWaitListWnd.uc:171-180`, `PartyMatchOutWaitListWnd.uc:167-176` | **falta** |
| PartyMatchRoomWnd | Enter no chat da sala: `ProcessPartyMatchChatMessage`; marca de chat ss966 | — | — | `PartyMatchRoomWnd.uc:487-510` | **falta** |
| UnionWnd | — | lista: `RequestPartyMember` | — | `UnionWnd.uc:95-99` | **falta** |
| UnionDetailWnd | — | membro: `RequestAction`, ou `RequestAttack` com Ctrl | Ctrl | `UnionDetailWnd.uc:62-88` | **falta** |
| DuelManager | membro: `RequestTargetUser` se x > 13, linha = (y−topo)/altura | — | — | `DuelManager.uc:252-265` | **falta** |
| HeroTowerWnd | — | herói: diário | — | `HeroTowerWnd.uc:28-36` | **falta** |
| GuideWnd | quest, área ou chefe: centraliza o minimapa no local e marca o alvo | — | — | `GuideWnd.uc:237-292` | **falta** |
| QuestTreeWnd / QuestListWnd | árvore; botões | — | — | (botões) | **falta** |
| ReplayListWnd | — | abre o replay | — | `ReplayListWnd.uc:74-77` | **falta** |
| OlympiadPlayerWnd | botão expandir da moldura | — | — | `OlympiadPlayerWnd.uc:247-251` | **falta** |
| HTML de NPC (nativo `NCHtmlViewer`) | links, botões e bypass; roda; teclado (slot 102) | — | — | `nw:0x100816c0`, `nw:0x10086d00`, `nw:0x10081790` | parcial (`u:UI/L2Html.cs`): `<select>` alterna a cada clique em vez de abrir a lista (`u:UI/L2Html.cs:625-639`) |
| BoardWnd (BBS) | links | — | — | `BoardWnd.uc` | parcial |
| EventMatchObserverWnd, GM* | clique em jogador e listas | — | — | `EventMatchObserverWnd.uc:257` | **falta** (fora do escopo do jogador) |

### 3.6 Menus e diálogos

| Janela | Comportamento | Handler IL | l2unity |
|---|---|---|---|
| DialogBox | OK, Cancel, NumberPad (`num0..9`, `numAll`, `numBS`, `numC`), caixa de texto, progresso; Enter = ação padrão (spec 01 §1.10) | `DialogBox.uc:150-448` | parcial: só OK/Cancel (`u:UI/GameUi.Windows.cs:716-757`). **Falta o NumberPad**, de que dependem todos os "pede a quantidade" do §3.2–3.3 |
| SystemMenuWnd | 7 itens | `SystemMenuWnd.uc` | parcial: Macro, Ajuda e Petição desligados (`u:UI/GameUi.cs:395-399`) |
| RestartMenuWnd | 5 pontos | `RestartMenuWnd.uc` | feito |
| OptionWnd | 3 abas; `OnModifyCurrentTickSliderCtrl` | `OptionWnd.uc:1333` | parcial |

---

## 4. Interações que só a P166 tem (posteriores, fora das tarefas)

Todas marcadas [O] na P166. Nenhuma tem par no `.uc` do Interlude nem pacote no aCis.

| Interação | Fonte P166 | Por que não é Interlude |
|---|---|---|
| Clique no buff para cancelar (`RequestDispel`) | `AbnormalStatusWnd.uc:936-968` | o aCis não tem `RequestDispel` em `clientpackets\` (191 pacotes) |
| Shift+clique no item: link no chat (`SetItemTextLink`) | `InventoryWnd.uc:659` | sem pacote de link de item no aCis |
| Alt+duplo clique move a pilha toda (lojas, armazém, loja privada) | `ShopWnd.uc:493,517`; `WarehouseWnd.uc:138,279,293`; `PrivateShopWnd.uc:279,312,388` | o Interlude passa `false` no duplo clique (`IL:ShopWnd.uc:95,99`) |
| Clique direito no alvo, no próprio status ou no grupo abre um menu de contexto | `TargetStatusWnd.uc:2466-2503`, `StatusWnd.uc:1309`, `ContextMenu.uc` | `OnRButtonDown` com handle e `ContextMenu` não existem no Interlude |
| Passar o mouse num botão do alvo mostra os buffs do alvo | `TargetStatusWnd.uc:2129-2152` (`TargetStatusBuff1/2Wnd`) | sem `OnMouseOver` no Interlude; buffs do alvo são posteriores |
| Arrastar um membro do grupo para reordenar (`OnDropWnd`) | `PartyWnd.uc:2942` | sem `OnDropWnd` no Interlude |
| Clique direito em aba do chat | `ChatWnd.uc:544-558` | sem `OnRClickButton` no Interlude |
| Esc fecha a janela de cima (`OnReceivedCloseUI`, em 149 classes) | ex. `InventoryWnd.uc:5701` | no Interlude, Esc = `TargetCancel` (spec 05 §5.1) |
| Arrastar item de enchant/fabricação, item para o correio, ensoul, alquimia… | `ItemEnchantWnd.uc:1531-1576`, `RecipeManufactureWnd.uc:313-340`, `PostWriteWnd.uc` | janelas posteriores ou reescritas |
| Tooltips novos: `Macro`, `InventoryWithIcon`, `QuestItem`, `ClanWarInfo`, `PostInfo`, `CursedWeapon`, `FriendInfo`, `UserList`, `RoomList`, `EnsoulSlot`… | `Tooltip.uc:114-294` | ausentes no `IL:ToolTip.uc:43-125` |
| `OnMouseOver`/`OnMouseOut`/`OnMouseMove`, `OnMButtonDown/Up`, `OnSetFocus` no script | `P166 UIScript.uc:467-485` | ausentes no `IL UIScript.uc:287-339` |
