# 05 — Barra de atalhos (ShortcutWnd), teclado, Ações e Macros

Seção da especificação para recriar o HUD do cliente Lineage II Interlude. Todo o conteúdo vem do cliente instalado em `C:\Program Files (x86)\Lineage II Interlude`, já extraído no projeto.

**Legenda de evidência**
- **[O] Observado**: está no código ou no dado. Cito `arquivo:linha`. Os `.uc` ficam em `export\uc\Interface\` (ou `export\uc\NWindow\` quando indicado). Os layouts ficam em `out\re\layout\` e os INIs decifrados em `export\client_cfg\`. Strings de binário são citadas como `NWindow.dll@0xOFFSET` ou `engine.dll@0xOFFSET`. O offset é do arquivo e a string é UTF-16, salvo indicação em contrário.
- **[I] Inferido**: dedução minha. Digo de onde ela vem.
- **[N] A validar no nativo**: o comportamento está no C++ (NWindow.dll / engine.dll) e não foi decompilado aqui.
- **[R] Referência de servidor**: implementação aCis em `ext\src\acis` (lado servidor). Serve para o formato dos pacotes, não para o comportamento do cliente.

Textos: `sysstring` = ss, `systemmsg` = sm, resolvidos em `out\re\strings.json` (cliente `-e`). Arquivos de dados extras decifrados nesta análise: `actionname-e.dat` e `commandname-e.dat` (Ver413, `scripts\l2dec413.py`), e `L2text\help_macro*.htm` / `help_action*.htm` (Ver111 = XOR 0xAC).

> **Atenção — cliente modificado.** [O] O `Option.ini` tem as seções `[Neophron]`, `[Potions]` e `[AutoEnchant]`, e as chaves `Is3ExpandShortcutWnd`/`Is4ExpandShortcutWnd` (`Option.ini:50-51,82-99`). Nenhum `.uc` nem o NWindow.dll as referencia. A pasta System tem `clmods.dll` (11 MB) e um `engine.dll` de 2026. [I] São de um mod e ficam **fora** do Interlude original. Esta especificação segue o `Interface.u`/`NWindow.dll` (2007).

---

## 1. Visão geral

| Janela | Script | Layout | Estado | Papel |
|---|---|---|---|---|
| `ShortcutWnd` (contêiner 100%×100%) | `ShortcutWnd.uc` (extends UICommonAPI) | `ShortcutWnd.txt` | `GamingState` (unk103) | Hospeda 8 sub-janelas: 3 barras verticais, 3 horizontais, joypad e joypad expandido |
| `Shortcut` (0×0, invisível) | `Shortcut.uc` (extends UIScript) | `Shortcut.txt` | — | Recebe `EV_ShortcutCommand`, os comandos de teclado que o nativo repassa ao script |
| `ActionWnd` | `ActionWnd.uc` | `ActionWnd.txt` | filho de `MainWnd` (unk100=MainWnd), aba 3 | Lista de ações Básicas / Party / Sociais |
| `MacroListWnd` | `MacroListWnd.uc` | `MacroListWnd.txt` | `GamingState` | Lista de macros (até 24) |
| `MacroEditWnd` | `MacroEditWnd.uc` | `MacroEditWnd.txt` | `GamingState` | Criar ou editar macro |
| `MacroInfoWnd` | `MacroInfoWnd.uc` | `MacroInfoWnd.txt` | `GamingState` | Descrição da macro (até 32 caracteres) |

Conclusões principais:
- [O] **Tamanho:** 12 slots por barra e 10 páginas: `MAX_ShortcutPerPage = 12` e `MAX_Page = 10` (`ShortcutWnd.uc:3-4`). Isso dá **120 atalhos** (`ShortcutID` 0..119), com `ShortcutID = página*12 + (slot-1)` (`ShortcutWnd.uc:120-124`).
- [O] **Barras:** até **3 barras** visíveis ao mesmo tempo, a principal mais `_1` e `_2` (`ShortcutWnd.uc:636-674`). Cada barra tem página própria. **As teclas só agem na barra principal** (comentário em `ShortcutWnd.uc:426-427`).
- [O] **Divisão de responsabilidades:** o script cuida só de layout, paginação e expansão. Desenho do slot, drag & drop, uso, cooldown, toggle e soulshot automático ficam no nativo (`NCShortcutItemWnd`, `NCShortcutItemManager`, `NCCooltimeManager`, `NCCoolTimeIcon` no NWindow.dll). `ShortcutWnd.uc` não implementa `OnDropItem` nem `OnClickItem`.
- [O] **Persistência:** os atalhos ficam **no servidor** (pacotes `ShortCutInit`/`ShortCutRegister`/`ShortCutDelete` e `RequestShortCutReg`/`RequestShortCutDel`, `engine.dll@0x58309c, 0x57e7ec, 0x57e924`). A orientação, o lock e a expansão ficam no `Option.ini [Game]`. As posições ficam no `WindowsInfo.ini`.
- [O] **Cooldown e toggle existem no nativo:** `NWindow.dll` contém `L2_SkillTime.Rotation_Type.cooltime` + `%s%d` (@0x23b7a8, 0x23b79c), `L2_SkillTime.CooltimeEnd.CooltimeEnd00%d` (@0x23b748), `L2_SkillTime.ToggleEffect.ToggleEffect001` (@0x23b200) e `itemSound.cooltime_end` (@0x249f98). Logo, o pacote `l2_skilltime` **é usado**, por código C++. Por isso ele não aparece no xdat nem no script (seção 3.7).

---

## 2. Layout exato

Coordenadas em pixels, relativas ao canto superior esquerdo da sub-janela. Notação do dump (versão regenerada): `@A->Ctrl.B(x,y)` = o ponto A deste controle fica preso ao ponto B do alvo (ou do pai), deslocado por (x,y). Todas as âncoras das janelas desta seção usam A = B (TOP_LEFT→TOP_LEFT, CENTER_RIGHT→CENTER_RIGHT, BOTTOM_RIGHT→BOTTOM_RIGHT etc.), então a correção da troca de pontos não altera nenhuma posição aqui. Os slots e rótulos 2..12 aparecem como `@NONE->pai.TOP_LEFT(x,y)`: posição absoluta (x,y) a partir do TOP_LEFT do pai. Fonte: `out\re\layout\ShortcutWnd.txt` e `interface_layout.json` (regenerados).

### 2.1 Hierarquia e ancoragem

| Sub-janela | Tamanho | Fundo (unk101) | Âncora xdat | unk126 / unk129 | Pos. padrão (`_wnddefpos.txt`) |
|---|---|---|---|---|---|
| `ShortcutWndVertical` | 46×504 | `L2UI_CH3.ShortcutWnd.shortcut_backv` (64×512) | CENTER_RIGHT→pai.CENTER_RIGHT(0,0) | 0 / — | CENTER_RIGHT (0,0) (`_wnddefpos.txt:28`) |
| `ShortcutWndVertical_1` | 46×504 | idem | CENTER_RIGHT(0,0) | **1 / ShortcutWndVertical** | — |
| `ShortcutWndVertical_2` | 46×504 | idem | CENTER_RIGHT(0,0) | **1 / ShortcutWndVertical_1** | — |
| `ShortcutWndHorizontal` | 504×46 | `L2UI_CH3.ShortcutWnd.shortcut_back` (512×64) | BOTTOM_RIGHT→**ShortcutWnd.ShortcutWndVertical**.BOTTOM_RIGHT(0,0) | 0 / — | — |
| `ShortcutWndHorizontal_1` | 504×46 | idem | BOTTOM_RIGHT(0,0) | **3 / ShortcutWndHorizontal** | — |
| `ShortcutWndHorizontal_2` | 504×46 | idem | BOTTOM_RIGHT(0,0) | **3 / ShortcutWndHorizontal_1** | — |
| `ShortcutWndJoypad` | 172×82 | `L2UI_CH3.Joypad.joypad_back` (256×128) | CENTER_RIGHT(0,0) | 0 | BOTTOM_CENTER (0,0) (`_wnddefpos.txt:29`) |
| `ShortcutWndJoypadExpand` | 432×82 | `L2UI_CH3.Joypad.joypad2_back` (512×128) | CENTER_RIGHT(0,0) | 0 | BOTTOM_CENTER (0,0) (`_wnddefpos.txt:30`) |

- [O] No JSON, todas as 8 têm `unk4 = "ShortcutWnd"` (o pai real).
- [I] `unk129` é a janela à qual a barra extra se **acopla**, e `unk126` é o lado do acoplamento: 1 = à esquerda, 3 = acima. Evidências:
  - os botões de expandir apontam para esses lados: `shortcut_expandv` é « (esquerda) e `shortcut_expand` é ⌃⌃ (para cima);
  - o `WindowsInfo.ini:169-179` guarda `Vertical` x=1230, `Vertical_1` x=1184 (−46) e `Vertical_2` x=1138 (−46), todos com o mesmo y;
  - `Horizontal_1/_2` não têm posição salva e têm `unk106=0` (as verticais têm 1).
- **Resultado a reproduzir:**
  - modo vertical: as barras 2 e 3 ficam coladas **à esquerda** da principal, a cada −46 px;
  - modo horizontal: ficam **acima** dela, a cada −46 px;
  - [I] as barras extras horizontais não se movem sozinhas e seguem a principal.
- [O] Ao rotacionar, o script ancora a nova orientação no canto BOTTOM_RIGHT da antiga e depois limpa a âncora. Assim o **canto inferior direito se mantém** (`ShortcutWnd.uc:383-394`).
- [O] `ArrangeWnd` evita coordenada negativa: na vertical força y≥0 e na horizontal força x≥0 (`ShortcutWnd.uc:566-577`).

### 2.2 Barra vertical (`ShortcutWndVertical`, 46×504)

```
 x→ 0         46
 y 1  [Expand/Reduce 14x14 @ (8,1)]
  13  [Prev ◄ @(1,13)]      [Next ► @(31,13)]
  16        [PageNum 20x10 @(13,16)]
  32  slot1  (5,32)   rótulo "1"  (4,32)
  69  slot2  (5,69)
 106  slot3  (5,106)
 143  slot4  (5,143)
 185  slot5  (5,185)   ← +5 px de folga entre grupos de 4
 222  slot6 … 259 slot7 … 296 slot8
 338  slot9  (5,338)   ← +5 px
 375  slot10 … 412 slot11 … 449 slot12 (termina em 485)
 489  [Joypad (1,489)] [Rotate (16,489)] [Lock/Unlock (31,489)]   (15x15, BOTTOM_LEFT)
```
- [O] Slots: `ShortcutItemWindow` de 36×36, `popupType=Shortcut`, `alwaysShowOutline=false`. Passo de 37 px. Entre os slots 4/5 e 8/9 o passo é de 42 px (y = 32, 69, 106, 143, 185, 222, 259, 296, 338, 375, 412, 449).
- [O] Rótulos `F1Tex..F12Tex` de 16×16 em (4, y_slot), texturas `L2UI_CH3.ShortcutWnd.shortcut_f01..f12`. **Apesar do nome "F", o desenho é o número "1".."12"** em dourado (verificado nos PNG em `out\tool\ui\L2UI_CH3\ShortcutWnd\`).
- [O] `PageNumTextBox`: texto inicial "1", centralizado, cor `#dcdcdc`, offsetY=10.
- [O] Botões (normal/pushed; as texturas `_over` existem no pacote mas não são atribuídas no xdat):

| Botão | Textura | Visível em |
|---|---|---|
| ExpandButton | `shortcut_expandv` / `_down` (« duplo) | só na barra principal |
| ReduceButton | `shortcut_minimizev` / `_down` (» duplo), mesma posição | só na barra principal |
| PrevBtn / NextBtn | `shortcut_prev` (◄) / `shortcut_next` (►) | todas (PrevBtn2/NextBtn2 em `_1`, PrevBtn3/NextBtn3 em `_2`) |
| JoypadBtn | `shortcut_joypad` | só na principal, e só se joypad detectado (seção 3.8) |
| RotateBtn | `shortcut_rotate` | só na principal |
| LockBtn / UnlockBtn | `joypad_lock` / `joypad_unlock`, mesma posição | só na principal |

- [O] `ShortcutWndVertical_1` e `_2` têm só Prev/Next, PageNum, 12 rótulos e 12 slots, nas mesmas coordenadas.

### 2.3 Barra horizontal (`ShortcutWndHorizontal`, 504×46)

```
 x: 1   [Expand/Reduce 14x14 @(1,8)]   (shortcut_expand ⌃⌃ / shortcut_minimize ⌄⌄)
 x:13   [Next ▲ shortcut_nextv @(13,1)]  [Prev ▼ shortcut_prevv @(13,31)]
 x:10   [PageNum 20x10 CENTER_LEFT(10,0) → (10,18)]
 slots y=5, x = 32, 69, 106, 143 | 185, 222, 259, 296 | 338, 375, 412, 449   (36x36)
 rótulos y=4, mesmos x
 x:489  [Joypad (489,1)] [Rotate (489,16)] [Lock/Unlock (489,31)]   (TOP_RIGHT)
```
- [O] Na horizontal, "Next" fica em cima (▲) e "Prev" embaixo (▼).
- [O] `Horizontal_1/_2` têm só NextBtn2/PrevBtn2 (ou 3), PageNum, rótulos e slots.
- [O] A textura de fundo `shortcut_back` mostra 12 molduras de slot em 3 grupos de 4, com o grupo central levemente destacado, e uma barra azul à esquerda.

### 2.4 Joypad (`ShortcutWndJoypad`, 172×82) — 4 slots em losango

| Controle | Pos | Obs |
|---|---|---|
| Shortcut1 (esq.) | (39,25) | `alwaysShowOutline=true` (todos os slots do joypad) |
| Shortcut2 (baixo) | (76,43) | |
| Shortcut3 (dir.) | (113,25) | |
| Shortcut4 (cima) | (76,7) | |
| F1Tex..F4Tex | (38,24) (75,42) (112,24) (75,6) | rótulos 1..4 |
| JoypadLButtonTex / JoypadRButtonTex | (38,6) / (130,6), 16×14 | `L2UI_ch3.Joypad.joypad_L` / `joypad_R`, Stretch |
| NextBtn ▲ / PrevBtn ▼ | (13,19) / (13,49) | |
| PageNumTextBox | CENTER_LEFT(10,0) | |
| LockBtn/UnlockBtn | (157,19) | |
| JoypadBtn | (157,34) | volta para a barra normal |
| ExpandBtn | (157,49) | `joypad_change`: alterna para o Joypad Expand |

### 2.5 Joypad expandido (`ShortcutWndJoypadExpand`, 432×82) — 3 losangos (12 slots)
- [O] Losango central: Shortcut1..4 em (169,25) (206,43) (243,25) (206,7).
- [O] Shortcut5..8 ficam ancorados a Shortcut1..4 com dx=−130 (losango esquerdo). Shortcut9..12 usam dx=+130 (losango direito). Os rótulos F1..F12 seguem o mesmo esquema.
- [O] `JoypadButtonBackTex` 128×82 em (158,0), textura `joypad2_back_over1` por padrão. O script a move para x=28 (L), 158 (centro) ou 288 (R) e troca a textura entre `…over1/2/3` (`ShortcutWnd.uc:219-244`).
- [O] JoypadL em (38,6) e JoypadR em (380,6). Next/Prev em (13,19)/(13,49). Lock em (417,19), JoypadBtn em (417,34), ExpandBtn em (417,49).
- [O] **Divergência de grupo:** script e xdat pedem `L2UI_CH3.ShortcutWnd.joypad2_back_over1..3`, mas o exportador achou essas texturas no grupo `L2UI_CH3.Joypad` (`out\tool\ui\L2UI_CH3\Joypad\joypad2_back_over*.png`). [N] Validar se o UE2 resolve o nome com o grupo errado. Senão, o destaque não aparece no cliente original.

### 2.6 Estado padrão
- [O] `OnDefaultPosition`: vertical, só 1 barra (`ShortcutWnd.uc:45-54`).
- [O] O `Option.ini` atual tem `IsShortcutWndVertical=False`, `IsLockShortcutWnd=False`, `Is1ExpandShortcutWnd=True` e `Is2ExpandShortcutWnd=True` (`Option.ini:26-29`). Ou seja: 3 barras horizontais.

---

## 3. Comportamento

### 3.1 Modos e qual sub-janela está ativa
- [O] `m_ShortcutWndName` define a janela ativa (`ShortcutWnd.uc:536-586`):
  - `m_IsJoypad`: `ShortcutWndJoypadExpand` se `m_IsJoypadExpand`, senão `ShortcutWndJoypad`. As 6 barras ficam ocultas. [O] Quirk: a ocultação usa só os nomes principais. Na prática `_1/_2` são acopladas e somem junto [I].
  - Fora do joypad: `ShortcutWndVertical` ou `ShortcutWndHorizontal`, conforme `m_IsVertical`.
- [O] Ao final, `ArrangeWnd` reaplica Lock/Unlock e as páginas das 3 barras (`SetCurPage*`). Depois reaplica o estado do botão Expand/Reduce (`ShortcutWnd.uc:588-611`).

### 3.2 Páginas
- [O] **Barra principal:**
  - Prev/Next chamam `SetCurPage(n)`, que chama `ShortcutAPI.SetShortcutPage(n)` (native, `NWindow\ShortcutAPI.uc:4`).
  - O nativo responde com `EV_ShortcutPageUpdate(ShortcutPage)`.
  - O script então grava `CurrentShortcutPage`, escreve `page+1` no PageNum e chama `UIAPI_SHORTCUTITEMWINDOW.UpdateShortcut(slot_i, page*12+i)` nos 12 slots (`ShortcutWnd.uc:107-127, 421-431`).
  - A troca circula: 0 → 9 → 0 (`ShortcutWnd.uc:303-367`).
- [O] **Barras 2 e 3:** a página é só local (`CurrentShortcutPage2/3`) e não passa pelo nativo (`ShortcutWnd.uc:433-467`). Valores iniciais: 1 e 2, que aparecem como "2" e "3" (`InitShortPageNum`, `ShortcutWnd.uc:100-105`).
- [O] Alt+1..0 / Alt+F1..F10 chamam `SetShortcutPage Num=0..9` (seção 5) e trocam **só** a página da barra principal.
- [O] Joystick: `ShortcutUp`/`ShortcutDown` (`user.ini` Joy13-16). [I] Usam `NCShortcutItemManager::ShortcutPageUp/Down` (`NWindow.dll@0x23f6c0/0x23f710`).
- [O] `EV_ShortcutPageUp/Down` (670/680) e `EV_ShowShortcutWnd` (690) estão declarados (`NWindow\UIEventManager.uc:118-120`) mas ninguém os usa nem dispara (`docs\client_spec\90_catalogo_eventos.md:19`).
- [O] **Quirk de caminho:** existem duas formas de endereçar os controles das barras extras:
  - `SetCurPage2/3` usam o caminho aninhado `ShortcutWnd.<P>.<P>_1.Shortcut<i>` e `ShortcutWnd.<P>.<P>_1.<P>_2.PageNumTextBox` (`ShortcutWnd.uc:442-464`);
  - `HandleShortcutUpdate`/`HandleShortcutClear` usam o caminho plano `ShortcutWnd.<P>_1.Shortcut<i>` (`ShortcutWnd.uc:143-162`).
  - [I] O nativo resolve as duas formas, porque o aninhamento segue a cadeia `unk129`. [N] Confirmar.
- [O] Quirk: em `OnEnterState`, `InitShortPageNum()` roda **depois** de `ArrangeWnd()` quando o estado anterior é `LoadingState`. O PageNum das barras 2/3 pode mostrar o valor antigo até o próximo Arrange (`ShortcutWnd.uc:56-63`).

### 3.3 Expansão (1 → 2 → 3 barras)
- [O] Clicar em `ExpandButton` ou `ReduceButton` chama `OnClickExpandShortcutButton` (`ShortcutWnd.uc:676-690`):
  - 1 barra → `Expand1()`: mostra `Vertical_1` e `Horizontal_1`, grava `Is1ExpandShortcutWnd=true`;
  - 2 barras → `Expand2()`: mostra `_2`, grava `Is2ExpandShortcutWnd=true`;
  - 3 barras → `Reduce()`: oculta `_1/_2` e grava os dois como false.
- [O] Fica visível `ExpandButton` se ainda dá para expandir e `ReduceButton` com 3 barras (`HandleExpandButton`, `ShortcutWnd.uc:692-704`).
- [O] As duas orientações são mostradas ou ocultadas juntas (`ShortcutWnd.uc:642-671`). [I] Só aparece a da orientação ativa, porque as extras estão acopladas à principal, que está oculta.
- [O] Caso de borda: com `Is1=False, Is2=True` no INI, `ExpandWnd` mostra só a barra `_2` (`ShortcutWnd.uc:614-634`). Uma recriação deve normalizar (Is2 ⇒ Is1).

### 3.4 Lock / Unlock
- [O] Os nomes estão invertidos:
  - `Lock()` grava `IsLockShortcutWnd=true` e **mostra `LockBtn`** (cadeado fechado);
  - clicar em `LockBtn` chama `UnLock()`;
  - clicar em `UnlockBtn` chama `Lock()` (`ShortcutWnd.uc:369-377, 478-500`).
  - O botão visível mostra o **estado atual** e o clique alterna.
- [O] O nativo lê a mesma chave: a string `IsLockShortcutWnd` fica junto de `NCShortcutItemManager::DeleteShortcutItem` (`NWindow.dll@0x23f4b8`).
- [I] Com a barra travada, não se arrasta para fora (remover ou mover) e não se solta em cima de um slot. [N] Confirmar se o lock bloqueia só remover ou também registrar, e se bloqueia mover a janela.

### 3.5 Drag & drop
- [O] Origens aceitas. A lista de nomes de controle fica logo após `NCShortcutItemWnd::OnDropItem` (`NWindow.dll@0x23fc18..0x23fd28`): `RecipeItem`, `SummonedActionWnd`, `PetActionWnd`, `ActionSocialItem`, `ActionPartyItem`, `ActionBasicItem`, `SkillItem`, `MacroItem`, `PetInvenWnd`, `EquipItem`, `InventoryItem`.
  - [I] É a lista branca de `ItemInfo.DragSrcName`.
  - Consequências: **skills passivas** (`MagicSkillWnd.PSkill.PItemWnd`) e **itens de quest** (`QuestItem`) não vão para a barra.
- [O] Tipo do atalho = `ItemInfo.ItemSubType` (`EShortCutItemType`: `SCIT_NONE`=0, `ITEM`=1, `SKILL`=2, `ACTION`=3, `MACRO`=4, `RECIPE`=5, `NWindow\UIEventManager.uc:615-623`). Quem preenche:

| Origem | Preenchimento |
|---|---|
| Ações | `SCIT_ACTION` (`ActionWnd.uc:118`, `PetWnd.uc:532`, `SummonedWnd.uc:240`) |
| Skills | `SCIT_SKILL` (`MagicSkillWnd.uc:105`) |
| Macros | `SCIT_MACRO` (`MacroListWnd.uc:173`) |
| Receitas | `SCIT_RECIPE` (`RecipeBookWnd.uc:133`) |
| Itens | nativo |

- [O] Ao soltar, o pacote enviado é `RequestShortCutReg Type=%d RoomNum=%d ID=%d UserShortCut=%d` (`engine.dll@0x57e7ec`, ASCII):
  - `RoomNum` = `ShortcutID` (página*12+slot);
  - `UserShortCut` = 1 jogador / 2 pet [R] (`characterType` em `RequestShortCutReg.java`).
  - Para item, ID = objectId do item. Para skill, o servidor completa o nível [R].
  - O servidor responde `ShortCutRegister`, que gera `EV_ShortcutUpdate(ShortcutID)`.
- [O] Remover = arrastar o ícone do slot e soltar **fora de qualquer janela** (o ponto solto, com margem de 30 px, também não pode cair na própria barra). `NCShortcutItemWnd::OnDragButton` (`NWindow.dll@0x100478f0`) chama `DeleteItem` (`@0x100472e0`), que envia `RequestShortCutDel RoomNum` (`engine.dll@0x57e924`, `NConsoleWnd::RequestShortCutDel` @0x27ec50). [?] O valor de `[Game] IsLockShortcutWnd` é lido na entrada, mas o desvio não aparece no pseudocódigo (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`).
- [O] **Troca entre slots** (`NCShortcutItemWnd::OnDropItem`, `NWindow.dll@0x100480c0`, ramo em que a origem é um `NCShortcutItemWnd`): registra o atalho de origem no slot de destino (`RequestShortCutReg`). Se o destino estava ocupado, registra o atalho antigo do destino no slot de origem (troca); se estava vazio, apaga a origem (move). Nos dois lados, reenvia o soulshot automático quando o atalho estava com ele ligado. Ações 0–14 vão com `UserShortCut=1` e 15–27 com `2`, e o inventário do pet também com `2` (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`).
- [O] O macro editor aceita atalhos soltos nas linhas e copia `ItemInfo.MacroCommand` (`MacroEditWnd.uc:139-149`). Ao começar o drag ele destaca o EditBox (`MacroEditWnd.uc:151-171`).

### 3.6 O que aparece no slot
- [O] Contorno: `NCShortcutItemWnd` carrega `L2UI_CH3.Etc.menu_outline` e `menu_outline_down` (`NWindow.dll@0x23f9b4, 0x23f8e0`). É uma moldura dourada de ~36×36 numa textura 64×64.
  - `alwaysShowOutline=true` só no joypad (layout).
  - [I] Nas barras normais o contorno aparece só em hover ou clique.
- [O] Receita: sobreposição `L2UI_ch3.ShortcutWnd.shortcut_recipeicon` (32×32, martelo no canto inferior direito, `NWindow.dll@0x23f920`).
- [O] Macro: ícone `L2UI.MacroWnd.Macro_Icon%d` (`NWindow.dll@0x23f5c0`), 7 ícones de 32×32 em `out\tool\ui\l2ui\MacroWnd\`. O acrônimo (até 4 caracteres) é desenhado sobre o ícone (`ETextAlign.TA_MacroIcon`, `NWindow\UIEventManager.uc:412`).
- [I] Item: ícone do item, **quantidade** para empilháveis (`ItemInfo.ItemNum`/`bShowCount`) e marca de grau. [N] Confirmar posição, fonte e cor da contagem, e se o grau aparece no slot. As strings `grades/gradea/gradeb/gradec/graded` estão em `NCConsole` (@0x27de0c), mas o destino não foi confirmado.
- [O] Skill bloqueada: `ItemInfo.bIsLock` vem de `EV_SkillList Lock` (`MagicSkillWnd.uc:107-114`). [N] Falta confirmar como isso aparece no slot.
- [O] Tooltip `popupType=Shortcut` → `ToolTip.uc:1259-1397`:

| Tipo | Linhas do tooltip |
|---|---|
| `SCIT_ITEM` | +enchant, nome (com refino), grau, quantidade (`:1292-1303`) |
| `SCIT_SKILL` | nome; se houver, nome do enchant em RGB(255,217,105); " Lv " (ss88) em RGB(163,163,163); nível em RGB(176,155,121); " (MP:custo)" (ss91) (`:1305-1375`) |
| `SCIT_ACTION` / `MACRO` / `RECIPE` | só o nome (`:1377-1386`) |

### 3.7 Cooldown (recarga) e toggle — pacote `l2_skilltime`
- [O] **Dados:** `out\tool\ui\l2_skilltime\`:
  - `Rotation_Type\cooltime0..359.png` (360 quadros de 32×32). Exemplo: no quadro 90 o quadrante superior direito está livre e o resto está escurecido. É uma "varredura de relógio", 1 quadro por grau;
  - `CooltimeEnd\CooltimeEnd001..009.png` (9 quadros, brilho final);
  - `ToggleEffect\ToggleEffect001..013.png` (13 quadros de moldura animada).
- [O] **Código:**
  - NWindow.dll: `NCCooltimeManager` (`CoolTimeAddItem`, `CoolTimeStart`, `CoolTimeReset`, `CoolTimeClear`, `CoolTimeFindItem`, `GetCoolTimeMap`, @0x296dc8-0x296f78) e `NCCoolTimeIcon` (`SetTime`, `StartCoolTime`, `PreSetMaterial`, `StaticExit`, @0x23b120-0x23b7f0);
  - `NCShortcutItemManager::GetShortcutDelay` (@0x23ee68), `FDelayInfo::SetMaxTime` (@0x23ec64), `NCItemWnd::UseCoolTime` (@0x23b080);
  - `NConsoleWnd::RequestSkillCoolTime` / `ResetSkillCoolTime` / `StartCoolTime` (@0x27f4b8-0x27f540);
  - engine.dll: `(Receive) SkillCoolTimePacket`, `OnSkillCoolTimeReset`, `(Send)RequestSkillCoolTime`, `AttackinCoolTime` (@0x583d64, 0x57fde0, 0x586210).
- [O] O nativo passa `pShortcutDelay` no `EV_ShortcutUpdate` (`docs\client_spec\91_eventos_nativos.md:78`).
- [O] No xdat, `useCoolTime` só vale 1 em `MagicSkillWnd.ASkill.SkillItem` (`interface_layout.json`). `ShortcutItemWindow` não tem a propriedade. [I] A barra desenha o cooldown sempre.
- [R] `SkillCoolTime` (0xC1) traz `{skillId, level, reuse(s), remaining(s)}` e chega no EnterWorld (`SkillCoolTime.java`, `EnterWorld.java:312`). `ShortCutInit` traz, para itens, `sharedReuseGroup`, `remaining` e `reuse` (`ShortCutInit.java`). Grupos compartilhados: `ReuseDelayShareGroupID` (`NWindow.dll@0x245ce8`).
- **Especificação de desenho:**
  - [I] durante a recarga: sobrepor `cooltime<N>` com N = floor(360 × decorrido / total). Montagem: `"L2_SkillTime.Rotation_Type.cooltime" + "%d"`;
  - [I] no fim: tocar `CooltimeEnd001..009` (`"…CooltimeEnd00%d"`, 1..9) e o som `itemSound.cooltime_end` (`EInterfaceSoundType.IFST_COOLTIME_END`, `UIEventManager.uc:526`).
  - [N] Validar: velocidade do CooltimeEnd; se há texto de segundos restantes (não há string de formato de tempo próxima); e se o sentido da varredura é horário a partir das 12h (o quadro 90 sugere que sim).
- **Toggle:** `NCItem::IsToggleSkill` / `ResetIsToggleSkill` (@0x23aeec, 0x23b4cc), `NMagicSkillDataManager::IsToggleSkill` (@0x299830), `NConsoleWnd::IsToggleOn` (@0x27f3f8). Só `ToggleEffect001` é referenciado por nome.
  - [I] Com o toggle ativo, desenhar o `ToggleEffect` animado em loop (001→013) sobre o ícone. Provavelmente a cadeia usa `AnimNext` do UTX.
  - [N] Confirmar FPS, se é loop, e se a mesma moldura marca o **soulshot automático**.

### 3.8 Joypad
- [O] O `JoypadBtn` só aparece se o nativo enviar `EV_ShortcutJoypad(OnOff=1)` (`ShortcutWnd.uc:172-189, 582-585`). [I] O evento vem com o joystick detectado.
- [O] Clicar em `JoypadBtn` alterna `m_IsJoypad`. `ExpandBtn` alterna Joypad ↔ JoypadExpand (`ShortcutWnd.uc:409-419, 511-534`).
- [O] Mapa dos 4 slots do joypad (`ShortcutWnd.uc:211-255`):

| Estado | Slots mostrados | Visual |
|---|---|---|
| Normal (`EV_JoypadLButtonUp` / `RButtonUp`) | `page*12+0..3` | fundo `over2` em x=158 |
| Botão L seguro (`EV_JoypadLButtonDown`) | `+4..7` | `over1` em x=28, `joypad_L_HOLD` |
| Botão R seguro (`EV_JoypadRButtonDown`) | `+8..11` | `over3` em x=288, `joypad_R_HOLD` |

- [O] `user.ini:121-136`: Joy1..4 = `JOYPAD ShortcutUse num=1..4`, com Extend1 → 5..8 e Extend2 → 9..12. Joy7 = Extend1 (L) e Joy8 = Extend2 (R). Joy5/6 = alvo anterior/próximo (NPC/party) e TargetCancel. Joy9 = Status, Joy10 = Inventário, Joy11 = Ctrl, Joy12 = câmera padrão, Joy13-16 = página ±, eixos X/Y = movimento, Z/V = câmera.
- [O] Quirks:
  - `HandleShortcutUpdate` atualiza `ShortcutWndJoypad.Shortcut<id%12+1>`, que só existe para 1..4. Com L ou R seguro, o slot mostrado não recebe a atualização (`ShortcutWnd.uc:129-149`);
  - `HandleShortcutPageUpdate` tenta Shortcut1..12 no Joypad, mas só 1..4 existem.
  - Na recriação, corrigir (mapear pelo offset ativo).

### 3.9 Uso do atalho
- [O] Teclas e cliques do slot ficam no nativo:
  - `NConsoleWnd::UseShortcut` e `HookShortCutKey` (@0x288400-0x288c00);
  - `NCShortcutItemWnd::OnClickButton` / `OnRButtonDown` (@0x23fb58, 0x23fa60);
  - comando xdat `UseShortcutItem Num=n`, com n = slot 0..11 da **página atual da barra principal**.
- [I] O pacote enviado depende do tipo:

| Tipo | Envio |
|---|---|
| Item | `UseItem` (`RequestUseItem`) |
| Skill | `RequestMagicSkillUse` (skill, ctrl, shift) |
| Ação | `RequestActionUse : %d` (`engine.dll@0x57ee90`) |
| Macro | execução local da macro (seção 6.2) |
| Receita | abre a receita |

- [O] Também existe `(Send)RequestShortCutUse` (`engine.dll@0x57e88c`). [N] Validar se é usado.
- [I] **Ctrl/Shift:** Ctrl+F1..F12, Shift+F1..F12 e Ctrl+1..0 têm o mesmo comando (seção 5). O nativo lê o modificador e aplica "force" (Ctrl) ou "stand" (Shift), a mesma semântica de `/useskillforce` e `/useskillstand` (`help_macro_edit.htm`). Shift+número não está mapeado, porque Shift+dígito produz símbolos no chat.
- [O] Clique nos slots das barras 2 e 3: usa o atalho do `ShortcutID` mostrado (`UpdateShortcut(…, id)`).

### 3.10 Soulshot / spiritshot automático
- [O] Nativo: `NCShortcutItemManager::SetAutoSoulShot` e `IsAutoEquipItem` (@0x23eeb8, 0x23efe0), `NConsoleWnd::OnExAutoSoulShot` (@0x280414), `(Send)RequestAutoSoulShot` / `(Receive)ExAutoSoulShot` (engine.dll @0x57e70c, 0x584eb4) e `NCShortcutItemWnd::OnRButtonDown`.
- [I] Fluxo: **clique direito** num soulshot/spiritshot na barra envia `RequestAutoSoulShot(itemId, 1|0)`. O servidor responde `ExAutoSoulShot(itemId, type)` [R], e o cliente marca ou desmarca todos os slots desse item.
- [R] O servidor também desliga sozinho quando o item acaba (`Player.java:6914-6943`). Mensagens: "Use of $s1 will be auto" e "No servitor…".
- [O] No inventário, o clique direito **usa** o item (`InventoryWnd.uc:161-165`) e não liga o automático.
- [O] O clique direito na barra (`NCShortcutItemWnd::OnRButtonDown`, `NWindow.dll@0x100477f0`) só age se o item for um shot (`FUN_10149ee0`: ids 1463–1467, 1835, 2509–2514, 3947–3952, 5789–5790, 6535–6540, 6645–6647). Envia `(itemId, !automático)`; em qualquer outro atalho não faz nada (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`). [N] Validar o efeito visual do automático (ToggleEffect? moldura?).

---

## 4. Eventos, parâmetros e natives

### 4.1 Eventos (ids em `NWindow\UIEventManager.uc`)

| id | Evento | Parâmetros | Quem trata | Ação |
|---|---|---|---|---|
| 90 | `EV_ShortcutCommand` | `Command` | `Shortcut.uc:43-69`, `EventMatchObserverWnd.uc:343-405` | comandos de teclado que o nativo não executa (seção 5) |
| 572 | `EV_ChatWndMacroCommand` | `Command` | `ChatWnd.uc:379-387` | linha de macro enviada como chat no tipo de chat atual |
| 590/600 | `EV_JoypadLButtonDown/Up` | — | `ShortcutWnd.uc:75-80` | joypad L/centro |
| 610/620 | `EV_JoypadRButtonDown/Up` | — | `ShortcutWnd.uc:81-86` | joypad R/centro |
| 630 | `EV_ShortcutUpdate` | `ShortcutID` (o nativo também passa `pItem`, `pShortcutDelay`, `pShortcutItem`, `pShortcutItemInfo`) | `ShortcutWnd.uc:129-149` | atualiza o slot nas 3 barras se o id estiver na página delas |
| 640 | `EV_ShortcutPageUpdate` | `ShortcutPage` (0..9) | `ShortcutWnd.uc:107-127` | redesenha a barra principal |
| 650 | `EV_ShortcutClear` | — | `ShortcutWnd.uc:90-95, 151-170` | limpa os 7×12 + 4 slots e reorganiza; [I] chega antes de `ShortCutInit` |
| 660 | `EV_ShortcutJoypad` | `OnOff` | `ShortcutWnd.uc:172-189` | mostra ou oculta `JoypadBtn` |
| 670/680/690 | `EV_ShortcutPageDown/Up`, `EV_ShowShortcutWnd` | — | ninguém | sem uso |
| 1230 | `EV_MacroShowListWnd` | — | `MacroListWnd.uc:114-128` | alterna a lista (tecla R/Alt+R, SystemMenu `SystemMenuWnd.uc:86`) |
| 1240 | `EV_MacroUpdate` | — | `MacroListWnd.uc:109-112` | pede a lista de novo |
| 1250 | `EV_MacroList` | `Max`, `ID_i`, `IconName_i` (acrônimo), `MacroName_i`, `Description_i`, `TextureName_i` | `MacroListWnd.uc:135-187` | preenche a grade |
| 1260 | `EV_MacroShowEditWnd` | `MacroID` opcional | `MacroEditWnd.uc:247-295` | editar (com id) ou criar (sem id, alterna) |
| 1270 | `EV_MacroDeleted` | `MacroID` | `MacroEditWnd.uc:236-245` | fecha o editor se ele mostra a macro apagada |
| 1300/1310 | `EV_ActionListStart` / `EV_ActionList` | `Type`, `ActionID`, `Name`, `IconName`, `Description`, `Command` | `ActionWnd.uc:81-140` | preenche as 3 grades |
| 1320-1350 | `EV_ActionPet*` / `EV_ActionSummoned*` | idem | `PetWnd.uc:509-540`, `SummonedWnd.uc` | ações de pet e servo |
| 1280/1290 | `EV_SkillListStart` / `EV_SkillList` | `Type`, `ClassID`, `Level`, `Lock`, `Name`, `IconName`, `Description`, `EnchantName`, `Command` | `MagicSkillWnd.uc:72-123` | origem de skills |

### 4.2 Natives (script → C++)

| Native | Arquivo | Uso |
|---|---|---|
| `ShortcutAPI.SetShortcutPage(int)` | `NWindow\ShortcutAPI.uc:4` | página da barra principal (a das teclas) |
| `UIAPI_SHORTCUTITEMWINDOW.UpdateShortcut(id, shortcutID)` / `Clear(id)` | `NWindow\UIAPI_SHORTCUTITEMWINDOW.uc:4-5` | faz o slot exibir o atalho N |
| `MacroAPI.RequestMacroList / RequestUseMacro(id) / RequestDeleteMacro(id) / RequestMakeMacro(id, name, acronym, iconNum, desc, cmds[12]) : bool` | `NWindow\MacroAPI.uc:4-7` | macros |
| `UIDATA_MACRO.GetMacroInfo(id, out MacroInfo) / GetMacroCount()` | `NWindow\UIDATA_MACRO.uc:4-5` | `MacroInfo{ID, Name, IconName, IconTextureName, Description, CommandList[12]}` (`UIEventManager.uc:921-929`) |
| `ActionAPI.RequestActionList / RequestPetActionList / RequestSummonedActionList` | `NWindow\ActionAPI.uc:4-6` | listas de ação (dados locais `actionname-e.dat`) |
| `DoAction(int)`, `UseSkill(int)`, `RequestUseItem(serverID)`, `ExecuteCommand(str)` | `NWindow\UIScript.uc:218, 219, 45, 216` | uso direto |
| `Get/SetOptionBool("Game", …)` | `NWindow\UIScript.uc:223-227` | persistência local |
| `UIAPI_WINDOW.SetAnchor/ClearAnchor/GetRect/MoveTo/SetFocus/Show/Hide/IsShowWindow` | `NWindow\UIAPI_WINDOW.uc:4-42` | layout |
| `UIAPI_TEXTURECTRL.SetTexture/SetAnchor`, `UIAPI_TEXTBOX.SetText` | — | joypad e número da página |
| `UIAPI_ITEMWINDOW.*` / `ItemWindowHandle` | `NWindow\UIAPI_ITEMWINDOW.uc`, `NWindow\ItemWindowHandle.uc` | grades de Ação e Macro |

Eventos de script: `OnLoad`, `OnEvent`, `OnEnterState`, `OnDefaultPosition`, `OnClickButton`, `OnClickItem`, `OnDropItem`, `OnDragItemStart/End`, `OnChangeEditBox` (`NWindow\UIScript.uc:273-340`).

---

## 5. Atalhos de teclado (tabela completa)

Fonte: seção Shortcut do `Interface.xdat` → `out\re\layout\_shortcuts.txt` (`interface_layout.json.shortcuts`). Cada entrada tem `key_1` (tecla) e `key_2`/`key_3` (modificadores Ctrl/Alt/Shift) mais `action`.

O nativo carrega a tabela (`XMLShortcutData`/`XMLShortcutItemData`, `NWindow.dll@0x265464-0x265bfc`) e a executa por estado em `NConsoleWnd::HookShortCutKey` → `ExecuteShortcutCommand` (@0x288400-0x288c00).

Coluna **Exec**:
- **N** = comando conhecido pelo nativo (a string está na tabela de `ExecuteShortcutCommand`);
- **S** = não está no nativo e é tratado no script via `EV_ShortcutCommand`;
- **—** = ninguém trata neste cliente.

[I] A classificação vem de cruzar as strings do NWindow.dll com os `case` dos `.uc`.

### 5.1 GamingState (118 entradas)

| Tecla(s) | Comando | Exec | Significado / alvo |
|---|---|---|---|
| F1..F12 | `UseShortcutItem Num=0..11` | N | usa o slot 1..12 da página atual da barra principal |
| 1..9, 0, Minus, Equals | `UseShortcutItem Num=0..11` | N | idem (1→slot1 … 0→slot10, `-`→11, `=`→12). [I] Só valem com o chat sem foco, ver 5.6 |
| Ctrl+1..Ctrl+0 | `UseShortcutItem Num=0..9` | N | idem, com Ctrl ("force") |
| Ctrl+F1..Ctrl+F12 | `UseShortcutItem Num=0..11` | N | idem, com Ctrl (force: atacar ou usar em alvo não hostil) |
| Shift+F1..Shift+F12 | `UseShortcutItem Num=0..11` | N | idem, com Shift ("stand": usar sem se mover) |
| Alt+1..Alt+0 | `SetShortcutPage Num=0..9` | N | página 1..10 da barra principal → `EV_ShortcutPageUpdate` |
| Alt+F1..Alt+F10 | `SetShortcutPage Num=0..9` | N | idem (não há Alt+F11/F12) |
| Escape | `TargetCancel` | N | cancela o alvo. Ver conflito com `user.ini` (5.6) |
| Enter | `FocusChatWindow` | N | foca o chat (`EV_ChatWndSetFocus`, `ChatWnd.uc:361`) |
| Tab | `TabShowInventoryWindow` | N | [I] alterna o inventário (`EV_InventoryToggleWindow`, `InventoryWnd.uc:120`) |
| V / Alt+V | `ShowInventoryWindow` | N | [I] abre ou alterna o inventário (`EV_InventoryOpenWindow`/`Toggle`) |
| T / Alt+T | `ShowMainWindow Tab=Status` | N | MainWnd, aba 1 (Status, ss194 "Status (Alt+T)") |
| K / Alt+K | `ShowMainWindow Tab=Skill` | N | MainWnd, aba 2 (ss196) |
| C / Alt+C | `ShowMainWindow Tab=Action` | N | MainWnd, aba 3 = ActionWnd (ss197) |
| U / Alt+U | `ShowMainWindow Tab=Quest` | N | MainWnd, aba 5 = QuestTreeWnd (ss198) |
| N / Alt+N | `ShowMainWindow Tab=Pledge` | N | MainWnd, aba 4 = ClanWnd (ss895) |
| I / Alt+I | `ShowMainWindow` | N | [I] alterna MainWnd na última aba |
| X / Alt+X | `ShowSystemMenuWindow` | N | SystemMenuWnd |
| B / Alt+B | `ShowBoardWindow` | N | Community Board (`EV_ShowBBS`) |
| G / Alt+G | `ShowGMWindow` | N | GMWnd (`EV_ShowGMWnd`). [I] Só GM |
| O / Alt+O | `ShowGMPetitionWindow` | N | janela de petição |
| M / Alt+M | `RequestOpenMinimap` | N | mapa (`EV_ShowMinimap`) |
| F / Alt+F | `ShowPartyBuff` | N | cicla buff/debuff na PartyWnd (`EV_ShowBuffIcon`, `PartyWnd.uc:116`) |
| P / Alt+P | `ApplyMinFrame` | N | [I] alterna "manter FPS mínimo" (`Option.ini IsKeepMinFrameRate`) |
| Y / Alt+Y | `ShowMessengerWindow` | N | Messenger (MSN) |
| R / Alt+R | `ShowMacroListWindow` | N | `NCConsole::ShowMacroListWnd` (@0x27d1e4) → `EV_MacroShowListWnd` |
| Alt+J | `ShowChatWindow` | S | `Shortcut.uc:71-89`: alterna ChatWnd e também SystemMsgWnd se `[Game] SystemMsgWnd=True` |
| Alt+H | `HideAllWindow` | N | oculta toda a UI (alterna) |
| Alt+W | `CloseAllWindow` | S | `Shortcut.uc:207-210`: no script só oculta SystemMenuWnd. [N] O nativo pode fechar outras janelas antes de repassar |
| Alt+PageUp | `SetPrevChatType` | S | aba de chat anterior (`Shortcut.uc:91-147`) |
| Alt+PageDown | `SetNextChatType` | S | próxima aba de chat (`Shortcut.uc:149-204`) |

- [O] Quirk em `SetPrevChatType`, caso CLAN: o código faz merge de CLAN em vez de ALLY e vai para a aba 2 (`Shortcut.uc:127-135`). Assim, Alt+PageUp vindo de Clan vai para Party, o comportamento esperado.
- [O] O nativo também conhece `ShowOptionWindow`, `ShowShortcutWnd`, `ShowWindow` e `ShowTestWindow`, e nenhum está ligado a uma tecla.

### 5.2 Telas de login (pré-jogo)

| Estado | Tecla | Comando |
|---|---|---|
| `EulaMsgState` | Enter | `EulaWndOKButton` (N) |
| `ChinaWarnMsgState` | Enter | `ChinaWarnMsgOKButton` (N) |
| `ServerListState` | Enter | `ServerSelectOKButton` (N) |

### 5.3 BroadcastObserverState (13)

| Tecla / Alt+ | Comando | Exec |
|---|---|---|
| P | `BroadcastShowPartyWindow` | — |
| L | `BroadcastLockPosition` | — |
| I | `BroadcastInitPosition` | — |
| N | `BroadcastToggleShowClassOrName` | — |
| M | `BroadcastToggleTargetName` | — |
| G | `BroadcastSwitchMessageMode` | — |
| Alt+J | `ShowChatWindow` | S |

- [O] Nenhum `.uc` trata `Broadcast*` e não há `BroadcastObserverWnd.uc`. O engine tem `UCanvas::Start/FinishBroadcastObserverMode` e `L2UI_CH3.BroadcastObs.br_party1_%d` (`engine.dll@0x5b6934-0x5b6e7c`). [I] Neste cliente as teclas não fazem nada. Se for implementar, use como modelo o EventMatch (5.4).

### 5.4 EventMatchObserverState (13) — `EventMatchObserverWnd.uc:343-405`

| Tecla / Alt+ | Comando | Efeito |
|---|---|---|
| P | `EventMatchShowPartyWindow` | alterna as janelas Party1/Party2 e atualiza os times |
| L | `EventMatchLockPosition` | alterna o draggable de PlayerWnd[0..1], BuffCover e Party1/2 |
| I | `EventMatchInitPosition` | reposiciona: Player1 TopLeft(0,98), Player2 TopRight(0,98), buffs abaixo, Party1 TopLeft(0,340), Party2 TopRight(0,340) |
| N | `EventMatchToggleShowClassOrName` | alterna classe ↔ nome |
| M | `EventMatchToggleTargetName` | N (está na tabela nativa e não no script) |
| G | `EventMatchSwitchMessageMode` | cicla Normal → LeftRight → Off |
| Alt+J | `ShowChatWindow` | S |

### 5.5 DebugState e GMCameraState

| Estado | Tecla | Comando | Efeito |
|---|---|---|---|
| DebugState | Alt+J | `ShowChatWindow` | S |
| GMCameraState | Alt+J | `ShowChatWindow` | S |
| GMCameraState | RightBracket / LeftBracket | `Perspective speed=±1.0` | N, [I] FOV |
| GMCameraState | Shift+] / Shift+[ | `CameraSpeed speed=±0.04` | N |
| GMCameraState | Shift+E / Shift+C | `Cameraviewheightadjust speed=±1.0` | N, altura da câmera |
| GMCameraState | Alt+H | `SetGamingState` | N, sai da câmera de GM |

- [O] Não há tabela para `LoginState`, `CharacterSelectState`, `OlympiadObserverState` etc. A string `OLYMPIADOBSERVERSTATE` fica junto de `HookShortCutKey`. [N] Talvez o observador da Olimpíada use a tabela do GamingState ou um caso especial.

### 5.6 Ligações do `user.ini [Engine.Input]` (decifrado) e precedência

> **Correção (agente de paridade do Unity, 2026-10-28):** a tabela abaixo veio do `user.ini` do cliente **instalado**, que
> é modificado. No `user.ini` da cópia `Lineage II Interlude_back` (oficial), as teclas de câmera são
> `Home=FixedDefaultCamera`, `PageUp=FixedDefaultCamera Down`, `PageDown=FixedDefaultCamera Up`, `End=TurnBack` e
> `MiddleMouse=TurnBack`. Os comandos de depuração (`stat fps`, `Show fog`, `show PARTICLES`, `rmd2`, `Stat Net`, `FLUSH`)
> só existem no instalado.

Teclas ligadas (`export\client_cfg\user.ini:120-200`):

| Tecla | Ligação |
|---|---|
| LeftMouse | `PlayerPawnMoveTo` (clique para andar) |
| RightMouse | `CameraRotationModeOn \| CameraRotationModeOff` (aliases 0/1: segurar o direito gira a câmera) |
| MiddleMouse | `rmd2` |
| W/Up, S/Down | `KeyboardMoveStart Dir=1` / `Dir=4` (+ `KeyboardMoveFinish OnRelease`) |
| A/Left, D/Right | `LeftTurningStart` / `RightTurningStart` (+ Finish OnRelease) |
| Space / Ctrl | `KeyboardMoveStart Dir=16` / `Dir=32` (voo/nado sobe/desce); Space também `PauseReplay` |
| NumLock | `KeyboardPermanentMove` (auto-run) |
| MouseWheelDown/Up | `ZoomInPress` / `ZoomOutPress Speed=50` |
| NumPad7/9, 4/6, 1/3 | zoom ±2.0, ±0.1, ±0.01 |
| NumPad8/2 | `CameraViewHeightAdjust ±20` |
| GreySlash/GreyStar, GreyPlus/GreyMinus | aceleração e velocidade de voo; GreyPlus/Minus também velocidade do replay |
| Escape | `CameraModeSelectingCancel` |
| PrintScrn | `OnRelease shot` |
| End | `stat fps` |
| Delete | `Stat Net` |
| Home | `Show fog` |
| PageDown | `show PARTICLES` |
| PageUp | `1` (alias: `rmode 6`, alterna com `7`) |
| Backspace | `FLUSH` |
| NumPadPeriod | `show radii` |
| Joy1..Joy16, JoyX/Y/Z/V | joypad (ver 3.8) |
| Enter | vazio |

- [O] Os aliases 2..33 (brilho, contraste e gama em Period/Slash/SemiColon/SingleQuote/[ ]) só se ligam a uma tecla depois que o alias roda. No arquivo estão órfãos (dev).
- [O] **Não há** ligação de F1..F12 nem de dígitos no `user.ini`. Essas teclas vêm só do xdat.
- **Precedência:**
  - [I] `UIEventManager` estende `Interactions` (`NWindow\UIEventManager.uc:1`). No UE2, `InteractionMaster.Process_KeyEvent` (`Engine\InteractionMaster.uc:196-215`) entrega a tecla às Interactions **antes** das ligações do `PlayerInput`, e uma Interaction que retorna true consome a tecla. Logo, **o xdat prevalece** quando há comando no estado atual.
  - Único conflito real: **Escape** (`TargetCancel` × `CameraModeSelectingCancel`). [N] Validar se o nativo consome o Escape ou deixa os dois rodarem.
  - Teclas sem entrada no xdat (WASD, setas, Space, mouse, numpad) caem no `user.ini`.
- **Chat × dígitos:**
  - [O] `[Game] EnterChatting` (padrão True no INI) faz o chat perder o foco após cada envio (`ChatWnd.uc:154-157`, `OptionWnd.uc:1112`);
  - [O] o nativo exporta `GIsEnterChatting` (`NWindow.dll` ASCII @0x324d64);
  - [O] `NConsoleWnd::HandleKeyboardInput` (`NWindow.dll@0x101734e0`): sem Alt, em `GAMINGSTATE`/`OLYMPIADOBSERVERSTATE`, se a tecla é de digitação (`NWndUtil::IsTypingKey` `@0x100624e0`: tudo menos F1–F12, Tab, Esc e NumLock), não há EditBox com foco e `GIsEnterChatting == 0`, dispara `EV_ChatWndSetFocus` (570) e **não** executa atalho;
  - [O] logo, com EnterChatting=True, letras, dígitos e `-`/`=` sem Alt vão para a tabela do xdat, e Enter foca o chat; com False, toda tecla de digitação sem Alt foca o chat, e só F-teclas, Tab, Esc, NumLock e Alt+tecla funcionam como atalho (correção #0024, 2026-11-03; `analises\interface-p166\02_interacoes.md`).
  - [N] Se o caractere que causou o foco entra no texto.

### 5.7 `PlayerPawnMoveTo`, `Attack` e a trava de pedido (`UGameEngine+0x64`)

Achado da vaga world (tarefa #4, 2026-10-29), por desmontagem do `engine.dll` (capstone) e pela decompilação em `re/decomp_all/engine`.

O cliente não manda um novo pedido de clique enquanto o anterior não teve resposta. A trava é o int `+0x64` do `UGameEngine` (global `DAT_10c51044`; `+0x60` é o `UNetworkHandler`, `+0x228` o ponto clicado, `+0x244` o ator sob o cursor).

**Quem liga a trava.** Os dois comandos ficam no exec das ligações de entrada (`FUN_105a9600`, que o Ghidra não decompila: timeout).
- [O] **`PLAYERPAWNMOVETO`** (string em `0x105aeb87`, ligado ao LeftMouse):
  - Em `0x105af019`, com `GIsL2NetLogin` ligado, o comando só segue se `GEngine+0x64 == 0` e se o controller e o pawn permitem (`+0x9b4 & 3`, `+0x41c & 1`, pawn `+0x3bc` ≠ 0, `+0xa08 & 5`). Senão retorna sem fazer nada: **com a trava ligada, o clique é ignorado**.
  - Depois de enviar, liga a trava (`mov [GEngine+0x64], 1`) em três saídas:
    - `0x105af1ff`: ator com id de servidor (`+0x60 ≠ -1`) e `+0xb8 > 0`. Envia pelo slot `+0x100` do `UNetworkHandler` com (id, posição do pawn `+0x1bc`, Shift = `IsKeyDown(0x10)`). [I] É o `Action` (0x04 `cddddc`, ver 95).
    - `0x105af391`: o outro ramo do ator, pelo mesmo slot `+0x100`.
    - `0x105af49b`: chão, com o ponto `GEngine+0x228`. [I] É o `MoveBackwardToLocation` (0x01).
  - Sem `GIsL2NetLogin` (`0x105af4c6`), o pawn anda localmente e a trava não é usada.
- [O] **`ATTACK`** (string em `0x105aa2b2`):
  - **Não consulta** a trava.
  - Se o alvo atual do controller (vfunc `+0x35c`) tem id de servidor, envia o mesmo slot `+0x100` (alvo, posição do pawn, Shift).
  - Depois liga a trava **sempre** (`0x105aa3fe`), mesmo quando não enviou nada.
  - Ignorado com a tecla `0xd2` apertada e com o estado do controller (`+0x3c → +0x435`) em 0, 2 ou 4.
- [?] Os dois envios pulam o alvo quando `0x1031405b(0x10bdc628, alvo)` é verdadeiro. Não identificado.
- [O] Fora do `FUN_105a9600`, nenhum acesso pelo `DAT_10c51044` escreve `+0x64`. [?] Não há prazo: sem resposta do servidor, a trava fica ligada.

**Quem desliga a trava** (`*(this+0x64) = 0`). O "eu" é o pawn do controller do viewport (`Client(+0x54) → Viewports(+0x38)[0] → Actor(+0x3c) → Pawn(+0x3bc)`).

| pacote | método (endereço) | condição |
|---|---|---|
| 0x25 ActionFailed | `OnActionFail` (`0x10314376`), tratador `FUN_10400d70` | nenhuma: só zera a trava |
| 0x08 AttackOutofRange | `OnAttackOutofRange` (`0x1030bfa5`), tratador `FUN_10425b80` (vtable `+0x148`) | o `User` existe, tem pawn e o pawn é o meu |
| 0x09 AttackinCoolTime | `OnAttackinCoolTime` (`0x10305a1f`), tratador `FUN_10425c30` (`+0x14c`) | idem |
| 0x0a AttackDeadTarget | `OnAttackDeadTarget` (`0x1030c1bc`), tratador `FUN_10425ce0` (`+0x150`) | idem |
| 0x01 MoveToLocation | `OnMoveToLocation` (`0x1030f1e1`) | o objeto sou eu e o flag `+0x564 & 0x40000` do controller está desligado |
| 0x60 MoveToPawn | `OnMoveToPawn` (`0x1031407e`), `OnMoveToActor` (`0x103047aa`) | idem (o flag `0x40000` está no `+0x564`) |
| 0xc5 FlyToLocation | `OnFlyToLocation` (`0x103137e6`) | idem |
| 0x71 MoveToLocationInVehicle | `OnMoveToLocationInVehicle` (`0x10301118`) | o objeto sou eu |
| 0x05 Attack | `OnAttack` (`0x10313d81`), `OnAttacked` (`0x10303d82`, `0x1030fa74`), `OnAttackCanceled` (`0x10302d51`) | o atacante sou eu (`OnAttack`) ou o `User` passado sou eu (`OnAttacked`/`OnAttackCanceled`) |
| 0x29 TargetSelected | `OnTargetSelected` (`0x10313b2e`) | o objeto que selecionou sou eu |
| 0x2a TargetUnselected | `OnTargetUnselected` (`0x1030e520`) | o objeto sou eu |
| 0xa6 MyTargetSelected | `OnMyTargetSelected` (`0x1030bb09`) | nenhuma |
| 0x12 DeleteObject | `OnDeleteUser` (`0x10307914`), `OnDeleteItem` (`0x10314f6a`), `OnDeleteStaticObject` (`0x1030ad12`) | o objeto apagado é o alvo atual (vfunc `+0x35c` do pawn/controller) |
| [?] (pacote não mapeado no 96) | `OnMoveBackwardToLocation` (`0x10301208`) | o objeto sou eu e o bit `+0x41c & 1` está desligado |

- [O] Nos quatro pacotes sem campos (0x08, 0x09, 0x0a, 0x25), **zerar a trava é o único efeito**. O tratador procura o próprio objeto no mapa de objetos (`FUN_104226e0`, com a chave `DAT_10b1f530`, gravada pelo UserInfo em `FUN_104342f0`), chama o método e registra no log de rede.
- [O] Esses pacotes não param o ataque automático, não mudam a animação, não cancelam o movimento nem a skill, e não mostram mensagem: a mensagem de sistema vem em outro pacote.
- [I] O ActionFailed do servidor (aCis manda `ActionFailed.STATIC_PACKET` sempre que recusa uma ação) existe para reabrir o clique.

---

## 6. Ações e Macros

### 6.1 ActionWnd (aba "Actions" do MainWnd)

**Layout** (256×335, TOP_LEFT(0,65) dentro de MainWnd, fundo `L2UI_CH3.ActionWnd.Action_Back`; `ActionWnd.txt`):

| Controle | Pos/tamanho | Propriedades |
|---|---|---|
| txtBasic "Basic" (ss129) | (22,11) | #dcdcdc |
| `ActionBasicItem` | (18,25) 219×104 | ItemWindow col=6 row=3 maxItemNum=18, ícone 32×32, gap 5/3, `popupType=Action`, `buttonClick=1` |
| txtBasic "Party" (ss130) | (22,141) | |
| `ActionPartyItem` | (18,155) 219×69 | col=6 row=2 max=12 |
| txtBasic "Social" (ss204) | (22,235) | |
| `ActionSocialItem` | (18,250) 219×69 | col=6 **row=3** max=12. [O] Inconsistente: a altura de 69 só comporta 2 linhas, e 12 itens cabem em 2 |

**Comportamento** (`ActionWnd.uc`):
- [O] `OnShow` chama `RequestActionList()` (`:18-22`).
- [O] `EV_ActionListStart` limpa as grades e cada `EV_ActionList` adiciona um item na grade de `Type` (1 → Basic, 2 → Party, 3 → Social; outros são ignorados; `:93-140`). O `ItemInfo` recebe: `ClassID=ActionID`, `Name`, `IconName`, `Description`, `ItemSubType=SCIT_ACTION` e `MacroCommand=Command`.
- [O] `EV_LanguageChanged` refaz a lista (`:76-79`). As barras de rolagem ficam ocultas (`:69-74`).
- [O] **Clique** chama `DoAction(ClassID)` (`:46-67`). Bug: clique fora de um item conhecido chama `DoAction(0)` com o `infItem` vazio (`:66`). Corrigir.
- **Para a barra:** arrastar o ícone (DragSrcName `ActionBasicItem` / `ActionPartyItem` / `ActionSocialItem`) até um slot envia `RequestShortCutReg Type=3`. **Para a macro:** soltar numa linha de comando copia `MacroCommand`.
- Tooltip `Action`: nome e descrição em RGB(178,190,207) (`ToolTip.uc:824-866`).

**Dados** — `System\actionname-e.dat` (Ver413), 102 registros:
- registro = `{int 1, int ActionID, int SocialAnimIdx (−1 se não for social), int Category, compact n + int[n] npcIds (−2 = qualquer), str Name, str Icon, str Description, int bytes + UTF-16 Command}`;
- Category segue `EActionCategory`: 0 None, 1 Basic, 2 Party, 3 Social, 4 Pet, 5 Summon (`UIEventManager.uc:491-499`).

| Grupo | ID: nome (ícone, comando) |
|---|---|
| Basic (17) | 0 Sit/Stand (`icon.action001`, `sitstand`) · 1 Walk/Run (002, `walkrun`) · 2 Attack (003, `attack`) · 3 Exchange (005, `trade`) · 4 Next Target (007, `targetnext`) · 5 Pick Up (008, `Pickup`) · 6 Assist (010, `assist`) · 10 Private Store - Sell (018, `vendor`) · 28 Private Store - Buy (028, `buy`) · 37 Dwarven Manufacture (042, `manufacture`) · 38 Mount/Dismount (036, `mountdismount`) · 40 Recommend (040, `commend`) · 51 General Manufacture (043, `manufacture2`) · 55 Start/End Recording Replay (044, `recstartstop`) · 57 Find Store (046, `storefind`) · 58 Duel (047, `challenge`) · 59 Withdraw (048, `cancelchallenge`) |
| Party (7) | 7 Invite (011, `partyinvite`) · 8 Leave Party (012) · 9 Dismiss Party Member (013) · 11 Party Matching (019) · 50 Change of Party Leader (041, `leaderchange`) · 56 Command Channel Invitation (045, `invitechannel`) · 60 Party Duel (049, `partychallenge`) |
| Social (12) | 12 Greeting (015) · 13 Victory (016) · 14 Advance (017) · 24 Yes (024) · 25 No (025) · 26 Bow (026) · 29 Unaware (029) · 30 Social Waiting (030) · 31 Laugh (031) · 33 Applaud (032) · 34 Dance (033) · 35 Sorrow (034) |
| Pet (4) | 15 Change Movement Mode · 16 Attack · 17 Stop · 18 Pickup · 19 Unsummon Pet · 54 Move · 1001, 1003-1006 (skills de pet) |
| Summon (5) | 21-23, 32, 36, 39, 41-48, 52, 53, 1000, 1007-1040 (skills de servo, filtradas por npcId) |

- [I] O ícone é a textura `icon.actionNNN` (pacote Icon).
- [I] A ordem nas grades é a do arquivo (por ID). [N] Confirmar se o nativo reordena.
- [N] Confirmar se o `Command` do evento já vem com "/" (no .dat não tem; o help mostra `/sitstand`).
- Pet e servo: `PetWnd.PetWnd_Action.PetActionWnd` e `SummonedWnd…SummonedActionWnd` (6×2, max 15), clique → `DoAction` (`PetWnd.uc:177`, `SummonedWnd.uc:69`). Também podem ir para a barra (DragSrcName na lista branca). [R] O pacote leva `characterType` 2.

### 6.2 Macros

**Limites:**

| Limite | Valor e fonte |
|---|---|
| Quantidade | 24 macros (`MACRO_MAX_COUNT`, `MacroListWnd.uc:3`, `MacroEditWnd.uc:3`; help "up to 24"; [R] aCis `> 24`). [O] A sm797 diz "You may create up to **48** macros", mas é ela que aparece ao atingir 24 (`MacroEditWnd.uc:277-287`). Use o limite 24 e mostre a sm797 |
| Nome | 12 caracteres (`txtName maxLength=12`) |
| Acrônimo | 4 caracteres (`txtShortName maxLength=4`) |
| Descrição | 32 caracteres: validada no OK do MacroInfoWnd, que trunca e mostra a sm837 (`MacroInfoWnd.uc:49-64`). [R] O servidor também valida |
| Linhas | 12 (`MACROCOMMAND_MAX_COUNT`, `MacroEditWnd.uc:4`), EditBox `maxLength=256`. O help fala em 32 caracteres por linha; [R] o servidor rejeita se a soma das linhas passar de 255 (sm810 "Invalid macro") |
| Ícones | 7: `L2UI.MacroWnd.Macro_Icon1..7` (`MacroEditWnd.uc:5-6`) |

**MacroListWnd** (256×401, CENTER_LEFT(0,−56), fundo `l2ui_ch3.macrownd.macro2_back`, título ss711 "Macro"):
- [I] Ícone minimizado `L2UI_CH3.MacroWnd.MacroListIcon` com tooltip ss1190 (unk136/137).
- `txtHead` "Macro List" (ss655) em (11,32); `txtCount` "(NN/24)" em (200,32), com zero à esquerda (`MacroListWnd.uc:180-186`).
- `MacroItem`: grade 6×8, max 80, ícone 32, gap 5/3, offset 3/3, `noSelectItem=1`, `buttonClick=1`, `popupType=Action`, em (6,45) 244×285.
- Botões:
  - `btnAdd` "Add" (ss654) em (11,347) e `btnHelp` "Help" (ss145) em (11,372), 76×23 `btn1_normal`;
  - `btnEdit` 34×34 em (169,347), tooltip ss656, textura `macro_edit`, `dropTex=macro_edit_Drag`;
  - `btnTrash` 34×34 em (208,347), tooltip ss892, `Inventory_trash` / `_Drag`.

Fluxo da lista:
- [O] `OnEnterState` → `RequestMacroList`. `EV_MacroUpdate` → `RequestMacroList` (`:21-24, 109-112`).
- [O] `EV_MacroList` monta o `ItemInfo`: `ClassID=ID`, `Name=MacroName`, `AdditionalName=acrônimo`, `IconName=TextureName`, `ItemSubType=SCIT_MACRO` (`:135-178`).
- [O] **Clique** no ícone → `RequestUseMacro(ID)`, que executa a macro (`:83-92`).
- [O] **Soltar sobre btnTrash** → diálogo de aviso com a sm828 "Are you sure you wish to delete the $s1 macro?". No OK → `RequestDeleteMacro`. Se era a última macro, a lista é redesenhada à mão (`:63-79, 204-216`).
- [O] **Soltar sobre btnEdit** → `EV_MacroShowEditWnd(MacroID)` (`:219-231`).
- [O] **Add** → limpa a MacroInfoWnd e executa `EV_MacroShowEditWnd` sem id (`:103-107`). **Help** → `EV_ShowHelp FilePath=..\L2text\help_macro.htm` (`:95-100`).
- **Para a barra:** arrastar da `MacroItem` (DragSrcName `MacroItem`) envia `RequestShortCutReg Type=4 ID=MacroID`.

**MacroEditWnd** (256×401, CENTER_LEFT(0,−56), def pos CENTER(100,0), fundo `macro1_back`):

| Controle | Pos | Detalhe |
|---|---|---|
| txtHead "Macro Edit" (ss656) | (11,32) | |
| texMacro 32×32 + txtMacroName (TA_MacroIcon) | (17,55) | prévia: ícone com o acrônimo por cima |
| btnLeft / btnRight 15×15 | (16,93) / (36,93) | troca o ícone 1..7 de forma circular (`:185-204`) |
| "Name" (ss50) + `txtName` 148×17 | (65,63) / (93,60) | max 12 |
| "Acronym" (ss653) + `txtShortName` 54×17 | (65,86) / (117,83) | max 4; ao digitar, atualiza a prévia (`:175-212`) |
| `btnInfo` "More Info." (ss657) 66×21 | (177,82) | alterna a MacroInfoWnd (`:99-112`) |
| ScrollArea `areaEdit` 242×239 | (7,125), conteúdo 318 de altura | 12 linhas: rótulo "00".."11" em (2, 11+26k) e `txtEdit0..11` 202×17 em (20, 7+26k), max 256 |
| `btnHelp` / `btnSave` "Save" (ss658) / `btnCancel` (ss141) | (11,372) / (91,372) / (171,372) | |

Fluxo do editor:
- [O] Tab circula Name → Acronym → linha 0..11 → Name (`:79-95`).
- [O] **Criar:** sem id, se `GetMacroCount() >= 24` mostra a sm797 e não abre (`:266-294`). Se a janela já está aberta, o comando a fecha.
- [O] **Editar:** com id, `SetMacroID` preenche nome, acrônimo, ícone (`int(Right(IconTextureName,1))`), descrição (via MacroInfoWnd) e as 12 linhas (`:299-328`).
- [O] **Salvar** → `RequestMakeMacro(m_CurMacroID, Name, Acronym, m_CurIconNum-1, Description, 12 linhas)` (`:332-358`). O ícone é enviado com base 0 (0..6). Se o retorno for true, a janela fecha.
  - [I] Com id 0 cria uma macro e com id > 0 substitui a existente.
  - [R] Pacote `RequestMakeMacro` (0xC1) = `{d id, S name, S desc, S acronym, c icon, c count, count×{c entry, c type(1 skill, 3 action, 4 shortcut, [I] 0 texto), d d1, c d2, S cmd}}`. O nativo converte cada linha em type/d1/d2.
- [O] `EV_MacroDeleted` fecha o editor se ele estava mostrando a macro apagada (`:236-245`).
- [O] **Drag para as linhas:** soltar skill, ação ou atalho num `txtEdit*` copia `infItem.MacroCommand` (`:139-149`). O help diz que um item só entra numa macro via atalho (`/useshortcut`).

**MacroInfoWnd** (256×161, CENTER_LEFT(20,−150), fundo `macro3_back`, título ss657):
- "Description" (ss57) em (11,32) e MultiEdit `txtInfo` 238×77 em (9,48).
- OK (ss140) em (51,132) valida até 32 caracteres e fecha. Cancel (ss141) em (131,132) restaura o texto anterior (`MacroInfoWnd.uc:49-72`).

**Comandos de macro** — `System\commandname-e.dat`, 114 entradas, nomes em inglês:

| Grupo | Comandos |
|---|---|
| Uso | `/useskill <nome>` · `/useskillforce` · `/useskillstand` · `/useshortcut <página> <slot>` (exemplo do help: `/useshortcut 3 2`) · `/useshortcutforce` · `/useshortcutstand` |
| Alvo e combate | `/target <nome\|%self\|%target\|%pet\|%party1..8>` · `/targetnext` · `/attack` · `/attackforce` · `/attackstand` · `/assist` · `/pickup` |
| Espera | `/delay <segundos>` |
| Ações | `/sit` · `/stand` · `/sitstand` · `/walk` · `/run` · `/walkrun` · `/trade` · `/vendor` · `/buy` · `/dwarvenmanufacture` · `/generalmanufacture` · `/mount` · `/dismount` · `/mountdismount` · `/evaluate` · `/duel` · `/withdraw` · `/partyduel` |
| Party | `/Invite` · `/Leave` · `/Dismiss` · `/partymatching` · `/changepartyleader` |
| Social | `/social*` |
| Pet e servo | `/pet*` · `/summon*` · `/servitormove` · `/unsummon` |
| Clã e aliança | `/ally*` · `/clanwar*` · `/channel*` |
| Amigos e bloqueio | `/friend*` · `/block` · `/unblock` · `/blocklist` · `/allblock` · `/allunblock` |
| Outros | `/loc` · `/Time` · `/remaintime` · `/unstuck` · `/partyinfo` · `/olympiadstat` · `/siegestatus` · `/nick` · `/start_videorecording` · `/end_videorecording` · `/startend_videorecording` · `/fatiguetime` · `/equip` · `/graduatelist` · `/GM` · `/gmlist` · `/Gmcancel` |

[N] Validar se `/useshortcut` conta página e slot a partir de 1.

**Execução:**
- [O] O engine tem `FCommandMacro` (`GetToken`, `TagCommand`, `RunCommand`, `IsWaiting`, `IsFinished`) e `UGameEngine::StartCommandMacro`/`TickCommandMacro` (`engine.dll@0x5c2780-0x5c3684`). [I] A macro roda **no cliente**, linha a linha por tick, e `IsWaiting` cobre o `/delay`.
- [O] Linhas que não são comando vão como chat: `EV_ChatWndMacroCommand(Command)` → `ChatWnd.ProcessChatMessage(Command, m_chatType)` (`ChatWnd.uc:379-387`), no tipo de chat da aba ativa.
- [O] Regras do help (`help_macro_caution.htm`):
  - uma macro não chama outra;
  - executar uma macro interrompe a anterior;
  - qualquer outra ação, até mover, interrompe;
  - um comando que falha encerra a macro;
  - skills especiais de pet ou servo não podem ser registradas;
  - em chat, aplica-se o atraso normal anti-flood, e `%self`/`%target`/`%pet`/`%partyN` precisam de espaço antes ou depois.
- [N] O tempo entre linhas sem `/delay` e a ordem exata dos testes de falha são nativos.

---

## 7. Persistência

| O quê | Onde | Fonte |
|---|---|---|
| Conteúdo dos 120 slots (tipo, id, nível, characterType) | **Servidor**. `ShortCutInit` (0x45) no login, `ShortCutRegister` (0x44), `ShortCutDelete` (0x46); o cliente envia `RequestShortCutReg` (0x33) e `RequestShortCutDel` (0x35) | `engine.dll@0x58309c-0x5831e4, 0x57e7ec, 0x57e924`; [R] `ShortCutInit.java`, `RequestShortCutReg.java`; opcodes em `docs\client_spec\92_protocolo_opcodes.md:59-61, 331-333` |
| Página atual da barra principal | memória do nativo (`NCShortcutItemManager::GetShortcutPage`). [I] Não é salva: no login volta à página 0 e as barras 2/3 voltam a 1/2 (`InitShortPageNum`) | `ShortcutWnd.uc:100-105` |
| Orientação, lock, expansão | `Option.ini [Game]`: `IsShortcutWndVertical`, `IsLockShortcutWnd`, `Is1ExpandShortcutWnd`, `Is2ExpandShortcutWnd` | `ShortcutWnd.uc:37-40, 481, 493, 505, 640, 652, 665-666` |
| Posições | `WindowsInfo.ini`: `[ShortcutWndVertical]`, `[ShortcutWndVertical_1]`, `[ShortcutWndVertical_2]`, `[ShortcutWndHorizontal]`, `[ShortcutWndJoypad]`, `[ShortcutWndJoypadExpand]` (posX/posY). `Horizontal_1/_2` não são salvas | `WindowsInfo.ini:169-191` |
| Soulshot automático | servidor (lista `autoSoulShot`), avisado por `ExAutoSoulShot` (0xFE:0x12); cliente pede com `RequestAutoSoulShot` (0xD0:0xD0) | [R] `Player.java:6858-6943` |
| Cooldowns | servidor → `SkillCoolTime` (0xC1) no EnterWorld e quando o cliente pede (`RequestSkillCoolTime`); os itens vêm no `ShortCutInit` | [R] `EnterWorld.java:312` |
| Macros | servidor → `SendMacroList` (0xE7, uma macro por pacote com `rev` e `count`); cliente envia `RequestMakeMacro` (0xC1) e `RequestDeleteMacro` (0xC2); cache local consultado por `UIDATA_MACRO` | `engine.dll@0x584520, 0x57e9bc, 0x57ea44`; [R] `SendMacroList.java` |
| Lista de ações | arquivo local `actionname-e.dat` | seção 6.1 |

---

## 8. Lacunas — a validar no nativo

1. ~~**Drag slot→slot**~~ **resolvido** (§3.5): troca; remove ao soltar fora de qualquer janela.
2. **Lock:** bloqueia remover, registrar, mover entre slots e/ou arrastar a janela?
3. **Cooldown:** confirmar o mapeamento quadro=ângulo (0..359, sentido horário desde as 12h). Confirmar FPS e duração do `CooltimeEnd001..009`. Ver se existe número de segundos. Ver se o escurecimento cobre o ícone inteiro e se o slot fica desabilitado.
4. **ToggleEffect:** animação (AnimNext? FPS? loop?), onde se aplica (toggle skills, soulshot automático, ambos?).
5. **Contagem e grau no slot:** posição, fonte e cor da quantidade; se o grau aparece; aparência de skill bloqueada ou indisponível (`bIsLock`, `bDisabled`).
6. ~~**Clique direito no slot**~~ **resolvido** (§3.10): só soulshot/spiritshot.
7. **Uso do atalho:** qual pacote vai por tipo (`RequestShortCutUse` é usado?). Como Ctrl e Shift são passados (force/stand).
8. ~~**Dígitos × chat**~~ **resolvido** (§5.6): regra de `HandleKeyboardInput`.
9. **Precedência Escape:** `TargetCancel` (xdat) × `CameraModeSelectingCancel` (`user.ini`). Os dois rodam?
10. **Resolução de caminho** de controles nas barras extras: plano (`ShortcutWnd.X_1.ShortcutN`) × aninhado (`ShortcutWnd.X.X_1.ShortcutN`). Semântica de `unk126`/`unk129` (acoplamento lateral/superior).
11. **`joypad2_back_over1..3`:** grupo `ShortcutWnd` (no código) × `Joypad` (no pacote). Confirmar se o destaque do joypad expandido aparece no cliente original.
12. **Quando o nativo dispara `EV_ShortcutJoypad`** (detecção de joystick) e `EV_ShortcutClear` (antes de cada `ShortCutInit`?).
13. **Comandos repassados ao script:** confirmar que o nativo envia `EV_ShortcutCommand` para todo comando que não conhece (`CloseAllWindow`, `ShowChatWindow`, `Set*ChatType`, `EventMatch*`), e o que `CloseAllWindow` fecha além do SystemMenuWnd. `Broadcast*` não tem tratador.
14. **Comandos `ShowMainWindow` sem Tab, `ShowInventoryWindow` × `TabShowInventoryWindow`, `ApplyMinFrame`, `HideAllWindow`:** efeito exato (alternar ou só abrir; qual aba).
15. **Macros:** execução (intervalo padrão entre linhas, condição de parada); conversão de linha → `{type,d1,d2}`; base de `/useshortcut p s`; prefixo "/" no `Command` de `EV_ActionList`/`EV_SkillList`; ordem das ações na ActionWnd.
16. **Joypad:** comportamento com a barra 2/3 (o joypad usa só a página principal) e o quirk de atualização com L/R seguro.

---

## 9. Checklist para recriar

**Barra**
- [ ] Contêiner `ShortcutWnd` em `GamingState` com 8 sub-janelas nos tamanhos e coordenadas da seção 2. Slots de 36×36, passo 37, folga de +5 a cada 4. Rótulos "1".."12" a partir de `shortcut_f01..f12`.
- [ ] Modelo de dados: `ShortcutID = página*12 + slot` (0..119); página principal (0..9) controlada pelo nativo/teclado; páginas 2/3 locais, iniciando em 1 e 2; PageNum mostra página+1; Prev/Next circulares.
- [ ] Expansão 1→2→3→1 com Expand/Reduce. Barras extras acopladas: à esquerda (−46 px) na vertical e acima (−46 px) na horizontal.
- [ ] Rotação que preserva o canto inferior direito e corrige coordenada negativa. Persistir `IsShortcutWndVertical`, `Is1/Is2ExpandShortcutWnd` (normalizar Is2⇒Is1) e `IsLockShortcutWnd` no `Option.ini [Game]`. Posições no `WindowsInfo.ini`.
- [ ] Lock/Unlock com o ícone do estado atual; bloquear drag quando travado.
- [ ] Default (`OnDefaultPosition`): vertical, 1 barra, CENTER_RIGHT.

**Slots**
- [ ] Drag & drop aceitando só as 11 origens da lista branca; `RequestShortCutReg(type, id, slotId, characterType)`; arrastar para fora → `RequestShortCutDel`; reagir a `ShortCutInit`/`Register`/`Delete` atualizando as 3 barras.
- [ ] Desenho: ícone, contorno `menu_outline` (hover/press; sempre no joypad), quantidade para empilháveis, sobreposição de receita, ícone de macro com acrônimo, tooltip por tipo (`ToolTip.uc:1259-1397`).
- [ ] Cooldown: overlay `Rotation_Type/cooltime0..359` pelo progresso; no fim, `CooltimeEnd001..009` + som `cooltime_end`; grupos de reuse compartilhado para itens; dados de `SkillCoolTime` e `ShortCutInit`.
- [ ] Toggle e soulshot automático: `ToggleEffect001..013` em loop; clique direito no shot → `RequestAutoSoulShot`; estado vindo de `ExAutoSoulShot`.
- [ ] Uso por clique e por tecla, com Ctrl = force e Shift = stand.

**Teclado**
- [ ] Tabela por estado exatamente como na seção 5 (118 entradas no GamingState). F1..F12 / 1..0, -, = / Ctrl / Shift → slots; Alt+1..0 e Alt+F1..F10 → páginas; letras → janelas. Comandos "S" despachados ao script.
- [ ] Ligações de movimento e câmera do `user.ini` (5.6) com prioridade menor que a tabela da UI. Dígitos só como atalho quando o chat não tem foco (EnterChatting).
- [ ] Joypad: 4 slots em losango; L/R mudam o bloco (0-3, 4-7, 8-11); modo expandido com 3 losangos e destaque móvel; botão Joypad só com joystick.

**Ações**
- [ ] ActionWnd como aba 3 do MainWnd: 3 grades (6×3/18, 6×2/12, 6×2/12) com os rótulos ss129/130/204; dados de `actionname-e.dat` (categorias 1/2/3); clique → `RequestActionUse(id)`; arrastar → barra (type 3) ou linha de macro (`/command`).

**Macros**
- [ ] MacroListWnd (grade 6×8, "(NN/24)", Add, Help, soltar no Edit ou no Trash com confirmação sm828), clique → executa.
- [ ] MacroEditWnd (nome 12, acrônimo 4, 7 ícones, 12 linhas com rolagem, drag de skill/ação/atalho para a linha, Save → `RequestMakeMacro` com ícone em base 0, limite 24 → sm797).
- [ ] MacroInfoWnd (descrição 32 → sm837).
- [ ] Executor local de macro: comandos de `commandname-e.dat`, `/delay`, `%self/%target/%pet/%partyN`, texto → chat do tipo ativo, interrupção por qualquer ação.
- [ ] Macro na barra: type 4, ícone `Macro_Icon(n+1)` + acrônimo.

**Corrigir na recriação** (quirks observados no original)
- [ ] `DoAction(0)` em clique vazio (`ActionWnd.uc:66`).
- [ ] Atualização do joypad com L/R seguro (`ShortcutWnd.uc:129-149`).
- [ ] `InitShortPageNum` depois do Arrange (`ShortcutWnd.uc:58-62`).
- [ ] sm797 (diz 48) contra o limite real de 24.
- [ ] Linha de macro com 256 caracteres no EditBox contra 255 no total do servidor.
