# 06 — HUD de status (personagem, alvo, buffs, grupo, pet/invocação, Olimpíada, duelo, pesca, Seven Signs)

Seção da especificação para recriar a interface do cliente Lineage II Interlude. Todo comportamento abaixo está classificado como:

- **Observado**: está no script/dado extraído do cliente (cita `arquivo:linha`).
- **Inferido**: dedução minha, com a origem indicada.
- **A validar no nativo**: o comportamento está em C++ (NWindow.dll/Engine.dll) e não foi possível ler por inteiro.

Fontes usadas:

| Sigla | Caminho |
|---|---|
| `.uc` | `export/uc/Interface/*.uc` (scripts de janela) e `export/uc/NWindow/*.uc` (API nativa) |
| layout | `out/re/layout/<Janela>.txt` / `out/re/interface_layout.json` (Interface.xdat) |
| defpos | `out/re/layout/_wnddefpos.txt` |
| atalhos | `out/re/layout/_shortcuts.txt` |
| str | `out/re/strings.json` (`sysstring` = S#, `systemmsg` = M#) |
| nativo | `out/re/native_events.json` e `out/re/nwindow_events.c` (decompilação Ghidra do NWindow.dll, ver `91_eventos_nativos.md`) |
| cfg | `export/client_cfg/Option.ini`, `WindowsInfo.ini` |
| aCis | `ext/src/acis` (servidor de referência, **só para inferir** o pacote de origem; ver `92_protocolo_opcodes.md`) |

Os textos de S#/M# estão em inglês (cliente -e). Valores de cor `#AARRGGBB`.

---

## 0. Convenções comuns a todas as janelas de HUD

### 0.1 Campos de Window no Interface.xdat (interpretação)

| Campo | Exemplo | Interpretação | Classe |
|---|---|---|---|
| `unk100` | `DetailStatusWnd unk100=MainWnd` | janela-mãe (filha de outra janela) | Inferido (DetailStatusWnd é aba de MainWnd, `MainWnd.txt:4`) |
| `unk101` | `DetailStatusWnd unk101=…myinfo_back` | textura de fundo da janela | Inferido |
| `unk102` | `StatusWnd unk102=StatusWnd` | classe de script associada | Inferido (coincide com o nome do `.uc`) |
| `unk103` | `GamingState` / `OlympiadObserverState` | estado do console em que a janela existe | Inferido (casa com `OnEnterState`) |
| `unk107` | `TargetStatusWnd unk107=1`, `StatusWnd unk107=0` | 1 = começa oculta | Inferido (BackTex=0 visível, BackExpTex=1 oculta, `TargetStatusWnd.txt:2,6`) |
| `unk111` | `PetWnd 494`, `SummonedWnd 495`, `PartyWndOption 1487`, `FishViewportWnd 1112` | título (S#) | Inferido (S494 "Pet Interface", S495 "Summon Interface", S1112 "Fishing") |
| `unk117/118/122` | `StatusWnd 2/166/202`, mesmo em PartyWnd/PetStatusWnd/TargetStatusWnd/DuelManager | 2 = redimensionável na horizontal, largura mín. 166, máx. 202 | Inferido (todas as janelas de 176 px de largura têm o par 166/202; WindowsInfo.ini guarda `width=176`) — **a validar** |
| `unk120/121` | `StatusWnd 10.0/88.0`, `PartyWnd 10.0/368.0` | tamanho da "resize frame" (largura, altura) | Inferido: o script chama `SetResizeFrameSize(10, …)` com os mesmos valores (`PartyWnd.uc:256`) |
| `unk123/124/125` | `TargetStatusWnd 1/46/76`, `OlympiadPlayer1Wnd 1/46/126` | 1 = tem botão de expandir (frame expand); altura recolhida; altura expandida | Inferido (dispara `OnFrameExpandClick`, `UIScript.uc:283`) — **a validar** |
| demais `unkNNN` | — | desconhecidos | Desconhecido |

### 0.2 Âncoras
Formato do layout: `@<pontoA>-><controle>.<pontoB>(x,y)`; `pai` = janela-mãe. Para as grades de buff do grupo/pet o script usa `SetAnchor(janelaRef, "TopRight", "TopLeft", -3, 5)` (`PartyWnd.uc:73`), e o layout do pet tem `@TOP_RIGHT->PetStatusWnd.TOP_LEFT(-3,5)` (`PetStatusWnd.txt:11`). Efeito (Inferido): o canto TOP_LEFT da grade fica no TOP_RIGHT da janela de referência, com deslocamento (-3,+5), ou seja, **os ícones aparecem à direita da janela**. Os rótulos `this/parent` do JSON (`interface_layout.json`) precisam ser confirmados com captura de tela.

### 0.3 "Frame" lateral de 12 px
Toda janela pequena de HUD reserva os 12 px da esquerda: os fundos começam em x=12 (`StatusWnd.txt:2`, `TargetStatusWnd.txt:2`, `PartyWnd.txt:4`). Os cliques de alvo só valem com `X > rect.nX + 13` e `X < rect.nX + width - 10` (`StatusWnd.uc:52`, `PartyWnd.uc:654`, `PetStatusWnd.uc:196`). A AbnormalStatusWnd define `NSTATUSICON_FRAMESIZE = 12` e chama `SetFrameSize(12, h)` (`AbnormalStatusWnd.uc:3,385`). Inferido: essa faixa é a alça nativa de arrastar a janela ("stuckable"/ímã, comentário em `OlympiadPlayerWnd.uc:276`). O desenho e o comportamento magnético são **a validar no nativo**.

### 0.4 Controles nativos usados

| Controle | API de script | Observações |
|---|---|---|
| `StatusBar` | `UIAPI_STATUSBARCTRL.SetPoint(ctl,cur,max)`, `SetPointPercent`, `SetPointExp(ctl,curExp,level)`, `SetRegenInfo(ctl,duration,ticks,amount)` (`UIAPI_STATUSBARCTRL.uc`) | layout: `title`, `textureWidth/Height`, `foreTexture`, `backTexture`, `warnTexture`, `regenTexture`. Texto, piscar e regeneração são desenhados no nativo |
| `BarCtrl` | `BarHandle.SetValue(max,cur)`, `GetValue`, `Clear` (`BarHandle.uc`) | barra fina sem texto; `uSize/vSize` = região UV da textura |
| `StatusIconCtrl` | `StatusIconHandle.AddRow/AddCol/InsertRow/InsertCol/GetRowCount/GetColCount/GetItem/SetItem/DelItem/SetIconSize/Clear` (`StatusIconHandle.uc`) | grade de ícones; item = `StatusIconInfo` (`UIEventManager.uc:1081`) |
| `NameCtrl` | `SetName(nome, NCT_Normal, TA_*)`, `SetNameWithColor(…, cor)` (`UIAPI_NAMECTRL.uc`) | cor padrão quando sem `WithColor`: **a validar** |
| `Progress` | `UIAPI_PROGRESSCTRL.SetProgressTime(ms)/SetPos(ms)/Start/Stop/Reset/Resume` | dispara `OnProgressTimeUp` |
| `InvenWeight` | `UIAPI_INVENWEIGHT.AddWeight/ReduceWeight/ZeroWeight` | indicador de peso nativo (ver §14) |
| `FishViewportWindow` | só eventos | janela de pesca nativa (ver §12) |

`StatusIconInfo` (`UIEventManager.uc:1081-1097`): `Name, IconName, Size, Description, BackTex, RemainTime, ClassID, Level, bShow, bShortItem, bEtcItem, bDeBuff`.

`UserInfo` (`UIEventManager.uc:798-855`): `nID, Name, strNickName, nLevel, nClassID, nSubClass, nSP, nCurHP/nMaxHP, nCurMP/nMaxMP, nCurCP/nMaxCP, nCurExp(INT64), nUserRank, nClanID, nAllianceID, nCarryWeight, nCarringWeight`, atributos de combate, `nStr…nMen`, `nCriminalRate(karma), nDualCount(PvP), nPKCount, nSociality, nRemainSulffrage, bHero, bNobless, bNpc, bPet, bCanBeAttacked, Loc`.

`PetInfo` (`UIEventManager.uc:886-921`): `nID, Name, nLevel, nSP, HP/MP, nCurExp/nMaxExp/nMinExp, nCarryWeight/nCarringWeight`, atributos, `nMovingSpeed, nSoulShotCosume, nSpiritShotConsume, nFatigue, nMaxFatigue`.

### 0.5 Sprites (tamanho real do PNG em `out/tool/ui/L2UI_CH3/...`)

| Pacote.grupo | Sprite | PNG | Uso |
|---|---|---|---|
| PlayerStatusWnd | `ps_cpbar/_back`, `ps_hpbar/_back`, `ps_mpbar/_back`, `ps_expbar/_back`, `ps_hpbarwarn1/2`, `ps_hpbarfill`, `ps_foodbar`, `ps_weightbar1..5` | 8×16 (usa 8×12) | StatusWnd, DetailStatusWnd, PetWnd |
| PlayerStatusWnd | `ps_levelback` 32×32; `ps_sizecontrol1` 8×128; `ps_sizecontrol2(_over)` 16×16; `myinfo_back` 256×512; `myinfo_heroicon`/`myinfo_nobleicon` 16×16 | | |
| SmallWnd | `hpbar/mpbar/cpbar/fatiguebar(+_back)` 8×8 (usa 8×6); `smallwindow_back1/2/3` 16×64; `smallwindow_back3_ex` 32×64; `smallwindow2_back1/2/3` 16×128; `smallwindow2_back3_ex` 32×128; `smallwindow3_back*` 16×128 | | janelas pequenas |
| PARTYWND | `party_buffbutton(_down/_over)`, `party_optionbutton(...)`, `party_leadericon` 16×16; `smallwindow_party_compact_back1/2/3` 16×32; `partywindow_option_back` 256×256 | | |
| Etc | `pet_button(_down/_over)` 16×16 | | |
| l2ui.EtcWndBack | `AbnormalBack`, `AbnormalFrame1..3` | | fundo do ícone de buff |

`ps_weightbar5` e `ps_hpbarwarn2` existem mas nenhum script os usa (`grep` em `export/uc`). Inferido: são usados pelo nativo (piscar da barra de HP / InvenWeight) — **a validar**.

---

## 1. StatusWnd — barra do personagem (CP/HP/MP/EXP)

### 1.1 Layout (`StatusWnd.txt`)
Janela 176×84, âncora TOP_LEFT (0,0) (defpos `StatusWnd TOP_LEFT x=0 y=0 w=176`), estado GamingState, redimensionável na horizontal (§0.1).

| Controle | Classe | Tamanho | Posição (rel. ao pai) | Recurso / atributos |
|---|---|---|---|---|
| StatusWndLeftTex | Texture Stretch | 16×84 | TL(12,0) | `SmallWnd.Smallwindow2_back1`, UV 16×76 |
| StatusWndCenterTex | Texture Stretch | (100%-32)×100% | TL(28,0) | `SmallWnd.Smallwindow2_back2`, UV 16×76 |
| StatusWndRightTex | Texture Stretch | 4×84 | TR(-4,0) | `PlayerStatusWnd.ps_sizecontrol1`, UV 4×76 (alça de redimensionar) |
| StatusWnd_LevelTextBox_back | Window | 22×20 | TL(15,6) | fundo `ps_levelback` |
| └ StatusWnd_LevelTextBox | TextBox | 22×20 | TL(1,0) | centro, `offsetY=10`, `fontType=6`, cor `#ffb09b79` |
| CPBar | StatusBar | (100%-26)×(100%-72) = 150×12 | TL(16,27) | `title=CP`, tex 8×12, fore `ps_cpbar`, back `ps_cpbar_back` |
| HPBar | StatusBar | 150×12 | TL(16,41) | `title=HP`, fore `ps_hpbar`, back `ps_hpbar_back`, **warn `ps_hpbarwarn1`**, **regen `ps_hpbarfill`** |
| MPBar | StatusBar | 150×12 | TL(16,55) | `title=MP`, fore `ps_mpbar`, back `ps_mpbar_back` |
| EXPBar | StatusBar | 150×12 | TL(16,69) | sem `title`, fore `ps_expbar`, back `ps_expbar_back` |
| UserName | NameCtrl | (100%-50)×(100%-162) | TL(40,9) | altura negativa no xdat (84-162); Inferido: NameCtrl ignora a altura |

### 1.2 Comportamento
- Eventos registrados (`StatusWnd.uc:9-19`): `EV_RegenStatus`, `EV_UpdateUserInfo`, `EV_UpdateHP`, `EV_UpdateMaxHP`, `EV_UpdateMP`, `EV_UpdateMaxMP`, `EV_UpdateCP`, `EV_UpdateMaxCP`.
- Ao entrar no estado: `m_bReceivedUserInfo=false` e `UpdateUserInfo()` (`StatusWnd.uc:22-26`).
- `UpdateUserInfo()` (`StatusWnd.uc:28-44`): `GetPlayerInfo(userinfo)` e então
  - `SetPoint(CPBar, nCurCP, nMaxCP)`, `SetPoint(HPBar, nCurHP, nMaxHP)`, `SetPoint(MPBar, nCurMP, nMaxMP)`;
  - `SetPointExp(EXPBar, nCurExp, nLevel)`: o percentual é calculado no nativo a partir da tabela de EXP por nível;
  - `SetName(UserName, Name, NCT_Normal, TA_Left)` (sem cor explícita);
  - `SetInt(LevelTextBox, nLevel)`.
- `EV_UpdateMaxHP/MP/MaxMP/CP/MaxCP` → `HandleUpdateInfo`: lê `ServerID` e só atualiza se for o próprio jogador **ou** se ainda não recebeu UserInfo (`StatusWnd.uc:88-98`).
- **`EV_UpdateHP` é registrado, mas o `switch` não tem `case EV_UpdateHP`** (`StatusWnd.uc:58-86`). Observado. A barra de HP só é reescrita pelo script em `EV_UpdateUserInfo` ou nos outros eventos de status. A forma como o HP corrente do jogador chega à barra entre dois `UserInfo` é **a validar no nativo**.
- Regeneração (`StatusWnd.uc:100-117`): `EV_RegenStatus{Type, Duration, Ticks, Amount(float)}`; só trata `Type==1` ("mostra o estado de regeneração de HP; hoje o servidor só manda 1", comentário decodificado em `StatusWnd.uc:109`) → `SetRegenInfo(HPBar, Duration, Ticks, Amount)`. Emissor nativo `FUN_10166b20` (`nwindow_events.c:17375`) com as mesmas chaves. Inferido (aCis `ExRegenMax`: `D 1, D count, D time, F hpRegen`): Duration=count, Ticks=time, Amount=HP por tick. O desenho de `ps_hpbarfill` (HP previsto) é **a validar**.
- Clique esquerdo dentro de (nX+13, nX+w-10) → `RequestSelfTarget()` (`StatusWnd.uc:47-56`).
- Barra "warn" (pisca com HP baixo): só existe o atributo `warnTexture` no xdat. O limiar, a frequência e a alternância `ps_hpbarwarn1/2` são **a validar**.
- Texto "atual/máximo" e o título "CP/HP/MP" são desenhados pelo StatusBar nativo. Fonte, alinhamento e formato (por exemplo `1234/1500`) e o texto do EXP (por exemplo `45.67%`) são **a validar**.
- Peso e fome: **não existem** na StatusWnd do Interlude (Observado: layout sem esses controles). O peso fica na InventoryWnd/DetailStatusWnd (§9, §14). A fome só existe para pet (§6).

---

## 2. TargetStatusWnd — janela do alvo

### 2.1 Layout (`TargetStatusWnd.txt`)
176×46, âncora TOP_CENTER (0,0) (defpos TOP_CENTER), começa oculta, botão de expandir (`unk123=1`, alturas 46/76, Inferido).

| Controle | Classe | Tamanho | Pos. | Recurso |
|---|---|---|---|---|
| BackTex | Window | (100%-12)×100% | TL(12,0) | modo recolhido |
| └ BackTex1/2/3 | Texture Tile | 16×46 / (100%-36)×46 / 19×46 | (0,0)/(16,0)/TR(-1,0) | `SmallWindow_Back1/Back2/Back3_ex` |
| BackExpTex | Window (oculta) | idem | TL(12,0) | modo expandido |
| └ BackExpTex1/2/3 | Texture Tile | 16×126 / … / 19×126 | idem | `SmallWindow2_Back1/2/3_ex` |
| btnClose | Button | 15×15 | TR(-10,6) | `FrameCtrl.FrameCloseBtn` / `FrameCloseOnBtn` |
| UserName | NameCtrl | (100%-33)×14 | TL(12,9) | |
| RankName | NameCtrl | (100%-33)×14 | TL(12,27) | ocupa a mesma faixa das barras (é exclusiva com elas, ver 2.2) |
| txtPledge | TextBox auto | — | TL(20,43) | S604 "Clan", `#ffa3a3a3` |
| texPledgeCrest | Texture | 16×12 | TL(45,43) | |
| txtPledgeName | TextBox auto | — | TL(63,43) | `#ffb09b79` |
| txtAlliance | TextBox auto | — | TL(20,59) | S605 "Ally" |
| texPledgeAllianceCrest | Texture | 8×12 | TL(53,59) | |
| txtPledgeAllianceName | TextBox auto | — | TL(63,59) | |
| NpcInfo | TreeCtrl | 158×33 | TL(18,40) | ícones de propriedades do NPC |
| barHP | BarCtrl | (100%-26)×6 = 150×6 | TL(16,26) | `SmallWnd.HpBar`/`HpBar_back`, UV 8×6 |
| barMP | BarCtrl | 150×6 | TL(16,33) | `SmallWnd.MpBar`/`MpBar_back` |

### 2.2 Comportamento (`HandleTargetUpdate`, `TargetStatusWnd.uc:114-461`)
1. `TargetID = UIDATA_TARGET.GetTargetID()`; se `<1`, a janela é ocultada (`:167-172`). `IsTargetChanged = (m_TargetID != TargetID)`.
2. Valores padrão: clã = S431 "No Clan", aliança = S591 "No alliance", cores (128,128,128) (`:183-190`).
3. Cor do nome = `UIDATA_TARGET.GetTargetNameColor(m_TargetLevel)` (`:193`), em que `m_TargetLevel` vem de `EV_ReceiveTargetLevelDiff{LevelDiff}` (`:108-111`; emissor `FUN_1015a920`). Inferido (aCis `MyTargetSelected`: `D objectId, H color`): LevelDiff = diferença de nível enviada pelo servidor. **A tabela diferença → cor é nativa e precisa ser validada.**
4. Ramos:
   - **Objeto estático do servidor** (porta etc., `IsServerObject()`, `:197-219`): nome = `GetStaticObjectName(GetServerObjectNameID(id))`; barra de HP só se `GetServerObjectType==SOT_DOOR` e `GetStaticObjectShowHP(id)`, com `GetServerObjectHP/MaxHP`.
   - **Sem nome** (`Len(info.Name)<1`, `:223-230`): assume membro do grupo distante, nome = `UIDATA_PARTY.GetMemberName(id)`, sem barras.
   - **Mob atacável, o próprio jogador, o próprio pet ou NPC de HP visível** (`IsHPShowableNPC` = "quartel de cerco/공성진지", comentário decodificado `:127`) (`:241-244`):
     - ClassID em `IsAllWhiteID` {12778, 13031-13036} (monstros de evento: "porco gigante", "baú do alquimista"…, `:617-635`): nome sem cor (`SetName`), barra de HP exceto se `IsNoBarID` {13036} (`:638-650`), sem MP.
     - Senão: `SetNameWithColor(UserName, Name, cor)` (`:266`), barra de HP sempre; barra de MP **só quando não é mob atacável** (`:274-278`), ou seja, aparece para o próprio jogador, o pet e o quartel.
   - **Outro PC ou NPC não atacável** (`:282-295`): nome sem cor; `RankName = GetUserRankString(nUserRank)` para PC, vazio para NPC; **sem barras**.
5. Modo expandido (`m_bExpand`, `:300-380`):
   - NPC: `UIDATA_NPC.GetNpcProperty(classID, arr)`; a árvore só é reconstruída quando o alvo muda ("senão pisca quando só o HP muda", `:309-311`). `UpdateNpcInfoTree` (`:502-575`): `arr` = pares (SkillID, Level); 8 ícones por linha, `nOffSetX = ((i/2)%8)*18`, primeira linha OffSetY 0, linhas seguintes 3, mesmo da linha -15; ícone 15×15 (UV 32×32) = `UIDATA_SKILL.GetIconName`; tooltip = nome + descrição (cor 178,190,207; largura mínima 144) (`:577-614`).
   - PC: mostra clã/aliança. Nome do clã `UIDATA_CLAN.GetName`, cor (176,152,121); se `GetClanType==CLAN_ACADEMY` → (209,167,2); senão, se `GetNameValue>0` → (0,130,255); se `<0` → (255,0,0) (`:317-344`). Brasão: com textura, txtPledgeName em x=63; sem textura, x=45 (`:347-355`, `:419-428`). Aliança cor (176,155,121) e brasão 8×12, mesma regra de x 63/45 (`:358-377`, `:430-439`). Posições aplicadas com `MoveTo(rect.nX+63, rect.nY+43)` e `+59`.
6. Se a janela estava oculta: `ShowWindow` e `SetExpandMode(m_bExpand)` (`:383-387`). Barras e blocos são mostrados ou ocultados conforme as flags (`:390-460`).
- Atualizações de HP/MP: `EV_UpdateHP/MP/MaxHP/MaxMP{ServerID, Current*/Max*}` → se a janela está visível e `ServerID==m_TargetID`, refaz tudo (`:93-105`). O nativo também dispara `EV_TargetUpdate` (sem parâmetros) quando o objeto atualizado é o alvo atual (`FUN_101588f0`, `nwindow_events.c:9341`).
- `EV_TargetHideWindow` → oculta (`:49-52`).
- Fechar: `btnClose` → `RequestTargetCancel()` + `PlayConsoleSound(IFST_WINDOW_CLOSE)` (`:75-90`). Atalho `Escape → TargetCancel` (atalhos, GamingState).
- Expandir: `OnFrameExpandClick(bIsExpand)` → `SetExpandMode`: zera `m_TargetID`, reprocessa e alterna BackTex/BackExpTex (`:464-487`).
- `SetValue(barHP, MaxHP, HP)`: argumentos na ordem (max, cur) (`:490-499`).
- Cor por karma/PvP: **o script não aplica** (Observado). Se o NameCtrl nativo colore PCs (karma vermelho, PvP roxo) é **a validar**.

---

## 3. AbnormalStatusWnd — buffs/debuffs/toggles do jogador

### 3.1 Layout (`AbnormalStatusWnd.txt`)
Janela 38×26, TL(176,0) (logo à direita da StatusWnd; defpos `x=176 y=0`). Filho `StatusIcon` StatusIconCtrl 26×26 em TL(12,0), `popupType=AbnormalStatus`, `noClip=false`, `noTooltip=false`. A janela é redimensionada pelo script.

### 3.2 Modelo de dados e ordem
Constantes: `NSTATUSICON_FRAMESIZE=12`, `NSTATUSICON_MAXCOL=12` (`AbnormalStatusWnd.uc:3-4`). Item: `Size=24`, `BackTex="L2UI.EtcWndBack.AbnormalBack"`, `bShow=true` (`:187-191`).

Há três categorias, cada uma vinda de um evento com `Max` e, para cada `i`, `SkillID_i, SkillLevel_i, RemainTime_i, Name_i, IconName_i, Description_i` (`:194-202`):

| Evento | Categoria | Disposição | Origem do pacote (Inferido, aCis) | RemainTime |
|---|---|---|---|---|
| `EV_AbnormalStatusNormalItem` (950) | Normal (buffs/debuffs) | 12 por linha, quantas linhas forem precisas, a partir da linha 0 (`:206-213`) | `AbnormalStatusUpdate` (0x7f: H count; D skillId, H level, D duração em s ou -1) | segundos, -1 = infinito |
| `EV_AbnormalStatusShortItem` (970) | Short (buff curto, por exemplo poção) | **uma linha** depois das Normal; inserido no **início** da linha (`InsertCol` col 0..n) (`:316-356`) | `ShortBuffStatusUpdate` (0xF4: D id, D lvl, D duração) | segundos |
| `EV_AbnormalStatusEtcItem` (960) | Etc (estado: cargas, penalidade de peso/grade, zona de perigo, Charm of Courage, death penalty) | mesma linha das Short, **depois** delas (`AddCol`) (`:252-289`) | `EtcStatusUpdate` (0xF3) | o nativo envia **-1** (`nwindow_events.c:~20509`) |

Ordem final: `[linhas Normal…] [Short…, Etc…]`. Quando muda o número de linhas Normal, as linhas Etc/Short são re-indexadas para `m_NormalStatusRow+1` (`:220-227`). Cada evento primeiro apaga só a sua categoria (`ClearStatus(bEtc,bShort)`, `:114-166`).

Nativo (Observado): em `OlympiadObserverState` o emissor de Normal **não** dispara o evento (`FUN_1016caa0`, `nwindow_events.c:20273`). Existem emissores que mandam `Max=0` para limpar (`FUN_1015a560/a610/a6c0`, `nwindow_events.c:10362-10464`). Nome, ícone e descrição são resolvidos pelo nativo a partir do SkillID/Level.

### 3.3 Visibilidade e tamanho
`UpdateWindowSize()` (`:362-391`): se há linhas, mostra (somente se `m_bOnCurState`, isto é, dentro do GamingState), `SetWindowSize(gradeW + 12, gradeH)` e `SetFrameSize(12, gradeH)`; sem linhas, oculta. `OnShow` volta a ocultar se a grade estiver vazia ("impede que só a moldura apareça quando a UI é forçada a aparecer", `:103-111`).

### 3.4 Eventos de ciclo de vida
- `EV_Restart` → limpa tudo (`:85-88`).
- `EV_Die` → limpa Normal e Short; **Etc permanece** (`:91-95`).
- `EV_ShowReplayQuitDialogBox` → oculta (`:97-100`).
- `EV_LanguageChanged` → reescreve Name/Description com `UIDATA_SKILL.GetName/GetDescription` (`:394-417`).

### 3.5 Tooltip (`ToolTip.uc:1001-1134`, `TooltipType=="AbnormalStatus"`)
O nativo pede o tooltip com `EV_RequestTooltipInfo{TooltipType, SourceType, …}` (2920). O conteúdo é montado assim: nome; `AdditionalName` (encantamento) em (255,217,105) com nível convertido por `GetEnchantSkillLevel`; " " + S88 "Lv" (163,163,163) + " nível" (176,155,121); se **não** for debuff (`IsDebuff`) e `Reserved>=0`: nova linha S1199 "Remaining Time" + " : " + `MakeBuffTimeStr(Reserved)` com `Condition Type=RemainTime`; descrição (178,190,207). Largura mínima 144 (`ToolTip.uc:3`). Inferido: `Reserved` = `RemainTime` do ícone, e `Condition=RemainTime` faz o nativo atualizar a contagem enquanto o tooltip está aberto — **a validar**. O script não desenha tempo, mas o **nativo desenha** [O] (`NCStatusIconCtrl`, `FUN_1004db50`): com `RemainTime` em [0, 60) e skill que não é debuff (`+0x1f7c` = `FUN_10164a20` = IsDebuff), `"%d"` em 0xffdcdcdc com `DrawSpecialDigit` (alfa 0xCC) em (x+7, y+10) com um dígito e (x+2, y+10) com dois; com o bit 1 das flags do item, fonte normal centrada em y+8. Debuff ganha a moldura `L2UI_CH3.PlayerStatusWnd.debuff` (UV 26×26) sobre o ícone. O fundo (`BackTex`) mede Size+2 (26) e o ícone vai em +1; os itens ficam lado a lado sem espaço (passo = tamanho do fundo).

### 3.6 Remover buff com clique direito
**Não existe no Interlude** (Observado): AbnormalStatusWnd não tem `OnRButton*`, e não há native de dispel (`grep -i dispel` em `export/uc` só acha um comando de GM, `EventMatchGMWnd.uc:663`).

---

## 4. PartyWnd / PartyWndCompact / PartyWndOption — grupo

### 4.1 Layout PartyWnd (`PartyWnd.txt`)
176×368, TL(0,152) no xdat; defpos `TOP_LEFT x=0 y=84` (logo abaixo da StatusWnd). Começa oculta.

| Controle | Classe | Tamanho | Pos. | Recurso |
|---|---|---|---|---|
| btnBuff | Button | 11×13 | TL(1,7) | `PartyWnd.party_buffbutton/_down`, tooltip dinâmico |
| btnCompact | Button | 11×13 | TL(1,20) | `party_optionbutton/_down`, tooltip S1487 "Party Window Options" |
| PartyStatusWnd0..7 | Window | (100%-12)×46 | (12, 46·i) | 1..7 herdam os filhos de 0 (`superName=PartyStatusWnd0`) |
| └ BackTex1/2/3 | Texture Tile | 16×46 / (100%-36)×46 / 19×46 | | `SmallWindow_Back1/2/3_ex` |
| └ PlayerName | NameCtrl | (100%-14)×14 | TL(8,8) | centralizado |
| └ ClassIcon | Texture | 11×11 | TL(4,8) | tooltip "Classe - Tipo" |
| └ LeaderIcon | Texture | 11×11 | TC(0,8) → reposicionado | `party_leadericon`, tooltip = modo de loot |
| └ barCP/barHP/barMP | BarCtrl | (100%-14)×5 | TL(4,21)/(4,28)/(4,35) | `SmallWnd.cpBar/HpBar/MpBar` + `_back`, UV 8×6 |
| └ StatusIconBuff / StatusIconDebuff | StatusIconCtrl | 0×0 | reancorado | `noClip=true`, **`noTooltip=true`** |

### 4.2 Layout PartyWndCompact (`PartyWndCompact.txt`)
71×26, TL(0,152); defpos `x=0 y=84`. btnBuff 11×13 TL(1,6); btnOption 11×13 TL(18,0) (tooltip S1487). PartyStatusWnd0..7 59×26 em (12, 26·i), cada um com: BackTex1/2/3 `PARTYWND.SmallWindow_party_compact_back1/2/3` (16×26 / (100%-32)×26 / 16×26 em TR(0,0)); ClassIcon 11×11 TL(6,7) (o slot 0 é movido com `Move(0,7)`, `PartyWndCompact.uc:74`); barCP/HP/MP 34×5 em TL(21,6)/(21,11)/(21,16); grades de buff/debuff. **Sem nome nem ícone de líder**: o nome vai no tooltip da janela.

### 4.3 Layout PartyWndOption (`PartyWndOption.txt`)
256×131, TL(200,131), fundo `PARTYWND.Partywindow_option_back`, título S1487, começa oculta. Title TextBox TL(26,17) S1487 `#ffdcdcdc`; CheckBox `ShowSmallPartyWndCheck` 300×25 TL(28,55) S1488 "Small Party Window"; Button `okbtn` 76×23 BC(0,-10) `Button.Btn1_Normal/_NormalOn`, S1337 "Confirm".

### 4.4 Comportamento comum (PartyWnd e PartyWndCompact têm scripts quase idênticos)
Constantes: `NSTATUSICON_MAXCOL=12`, `NPARTYSTATUS_HEIGHT=46` (compacta 26), `NPARTYSTATUS_MAXCOUNT=8` (`PartyWnd.uc:7-9`, `PartyWndCompact.uc:8`). Até 8 slots: Inferido, os outros membros de um grupo de 9 (o próprio jogador não entra na lista; está na StatusWnd).

- Eventos (`PartyWnd.uc:38-46`): `EV_ShowBuffIcon`, `EV_PartyAddParty`, `EV_PartyUpdateParty`, `EV_PartyDeleteParty`, `EV_PartyDeleteAllParty`, `EV_PartySpelledList`, `EV_Restart`.
- **Add** `{ID, Name, CurCP, MaxCP, CurHP, MaxHP, CurMP, MaxMP, ClassID, Level, MasterID, RoutingType}` → `m_CurCount++`, `ResizeWnd`, grava no slot `m_CurCount-1` (`PartyWnd.uc:295-308`). Inferido (aCis `PartySmallWindowAdd`: leaderId, distribution, …): MasterID = líder, RoutingType = modo de loot.
- **Update** `{ID, Name, Cur/Max CP/HP/MP, ClassID, Level}` **sem MasterID** ("na atualização não vem a info de líder", `PartyWndCompact.uc:369`; emissor nativo `FUN_1015eaf0`, `nwindow_events.c:12993`, chaves Name/CurCP/…/Level e o ID por constante) → `FindPartyID` + `UpdateStatus` (`PartyWnd.uc:311-322`).
- **Delete** `{ID}` → desloca os slots seguintes com `CopyStatus(i, i+1)` (`:325-346`). Defeito observado: chama `ClearStatus(m_CurCount)` **antes** de decrementar (`:341`), ou seja, limpa o índice seguinte ao último em vez do último. O último slot fica com dados antigos, mas oculto pelo `ResizeWnd`. Com 8 membros o índice 8 fica fora do array: **observado** no `Core.dll` (`execArrayElement`, `00004.c:13225`), o VM loga "Accessed array out of bounds" e usa o índice limitado a [0, 7] (`thunk_FUN_101146b0`), então limpa o slot 7. Outro defeito em `CopyStatus`: mede `GetTextSize` do **nome da textura** do ícone de líder, e não do nome do jogador (`:196`), então o ícone pode ficar mal posicionado depois de uma remoção.
- **DeleteAll** / **Restart** → `Clear()` de todos os slots e `ResizeWnd` (`:127-142`, `:349-352`).
- `UpdateStatus` (`PartyWnd.uc:355-419`):
  - Nome centralizado.
  - Líder: se veio `MasterID` e `MasterID==ID`: textura `L2UI_CH3.PartyWnd.party_leadericon`, tooltip `GetRoutingString(RoutingType)` e âncora `SetAnchor(slot,"TopCenter","TopLeft", -(larguraNome/2)-18, 8)`, ou seja, à esquerda do nome centralizado (`:391-402`). Se não for líder, limpa a textura (`:403-407`).
  - Ícone de classe: `GetClassIconName(ClassID)`, tooltip `GetClassStr(ClassID) $ " - " $ GetClassType(ClassID)` (`:412-413`).
  - Barras `SetValue(max,cur)` (`:416-418`, `:629-644`).
  - Compacta: o tooltip da janela do slot = `Name` ou `Name(S408 "Leader")`; tooltip do ícone de classe em 2 linhas (nome[+(Leader)]; classe em (128,128,128)) (`PartyWndCompact.uc:374-413`). A compacta guarda `m_MasterID` entre eventos (`:370-371`).
- `ResizeWnd` (`PartyWnd.uc:242-278`): `bOption = GetOptionBool("Game","SmallPartyWnd")`. Com membros: `SetWindowSize(w, 46*n)`, `SetResizeFrameSize(10, 46*n)`; a PartyWnd aparece se `!bOption`, a compacta se `bOption` (`PartyWndCompact.uc:241`); os slots `<n` ficam visíveis. Sem membros: oculta.
- **Buffs do grupo** (sem emissor neste build, 96 §; as grades ficam vazias e o btnBuff só alterna o modo) `EV_PartySpelledList{ID, Max, SkillID_i, Level_i}` (`PartyWnd.uc:422-493`). Inferido: pacote aCis `PartySpelled` tipo 0. Limpa as duas grades; ícone `UIDATA_SKILL.GetIconName(id, lvl)`, `Size=16` (compacta **10**, `PartyWndCompact.uc:457`); classifica por `IsDebuff(id,lvl)`; 12 por linha em cada grade. Sem tempo e sem tooltip (`noTooltip=true`).
- Âncora das grades: `SetAnchor(slot,"TopRight","TopLeft",-3,5)` na PartyWnd (`:71-75`) e `(1,3)` na compacta (`PartyWndCompact.uc:70-71`): à direita de cada slot.
- **Modo de exibição de buffs** `m_CurBf` 0→1→2→0 (`PartyWnd.uc:577-626`): 0 = nada; 1 = só buffs; 2 = só debuffs. O tooltip do btnBuff mostra o **próximo** modo: 0→S1496 "View Buffs", 1→S1497 "View Debuffs", 2→S1498 "Disable Buff/Debuff" (`:691-704`). O clique em btnBuff numa janela chama também `OnBuffButton()` da outra (`:532-535`), para manter as duas sincronizadas. `EV_ShowBuffIcon` também avança o ciclo e **ignora** o parâmetro `Show` (`:496-523`). Esse evento vem do atalho `F`/`Alt+F` = `ShowPartyBuff` (atalhos; nativo `FUN_10172350` → `FUN_10165d00`, que alterna uma flag e manda `Show`, `nwindow_events.c:16835`). Ao entrar no estado, `m_CurBf=0` (`:85-91`).
- **Cliques**:
  - PartyWnd, botão esquerdo dentro de (nX+13, nX+w-10): `idx=(Y-nY)/46`; se `IsPKMode()` → `RequestAttack(id, meuLoc)`, senão `RequestAction(id, meuLoc)` (seleciona; segundo clique interage) (`:647-670`). `IsPKMode` = Ctrl (93 §8.3). **Observado no nativo:** `RequestAction` (`FUN_1014c9b0`) e `RequestTargetUser` (`FUN_1014c6a0`) mandam `Action(id, posição do próprio pawn, Shift)` (`UInput::KeyDown(0x10)`).
  - Compacta, botão esquerdo com X > nX+30 → `RequestTargetUser(id)` (`PartyWndCompact.uc:642-653`).
  - Ambas, botão direito solto → `RequestAssist(id, meuLoc)` (assistir) (`PartyWnd.uc:673-688`). **Observado:** `FUN_1014c870` acha o ator do membro (`FUN_10145910`), pega o alvo dele (pawn+0x204 → +0x14d8 → virtual 0x35c, id em +0x60) e manda `Action(alvo, posição do próprio pawn, Shift)`; sem ator ou sem alvo conhecido, nada. O alvo dos outros personagens vem do `TargetSelected` (0x29). `/assist` (`FUN_1015a770`) faz o mesmo com o alvo atual.
- **Opções**: btnCompact (PartyWnd) / btnOption (compacta) → `PartyWndOption.ShowPartyWndOption()` (alterna) e ancora a opção ao slot 0 em TopRight(+5,+5) (`PartyWnd.uc:543-549`). OnShow da opção: marca o checkbox com `GetOptionBool("Game","SmallPartyWnd")` e foca (`PartyWndOption.uc:25-30`). OK → `SetOptionBool("Game","SmallPartyWnd", marcado)`, `SwapBigandSmall()` (ancora a compacta no TopLeft da grande e chama `ResizeWnd` nas duas) e oculta (`:61-92`, `:45-58`). A chave não existe no `Option.ini` exportado; o cliente a cria ao gravar (comentário `PartyWndOption.uc:75-76`); o padrão é falso.
- **Distribuição de loot**: escolhida fora destas janelas, em OptionWnd (aba Jogo) `LootingBox` (`GameTab.txt:30`): S487 "Finders Keepers", S488 "Random", S798 "Random including spoil", S799 "By turn", S800 "By turn including spoil" → `SetOptionInt("Game","PartyLooting", i)` (`OptionWnd.uc:1136-1139`); desabilitada com grupo ativo (`OptionWnd.uc:228-234`). Na PartyWnd ela só aparece como tooltip do ícone de líder (`GetRoutingString`). Inferido: os mesmos 5 textos — **a validar**.

---

## 5. PetStatusWnd e SummonedStatusWnd — barrinha do pet/servo

### 5.1 Layout (`PetStatusWnd.txt`, `SummonedStatusWnd.txt`)
176×46, TL(0,84); WindowsInfo grava `posY=247`. Iguais, exceto pela 3ª barra:

| Controle | Classe | Tamanho | Pos. | Recurso |
|---|---|---|---|---|
| BackTex(1/2/3) | Window/Texture Tile | como TargetStatusWnd | TL(12,0) | `SmallWindow_Back1/2/3_ex` |
| btnBuff | Button | 11×13 | TL(1,6) | `Etc.pet_button/_down`, tooltip S881 |
| PetName | NameCtrl | (100%-26)×14 | TL(16,6) | centralizado |
| barHP | BarCtrl | 150×6 | TL(16,19) | `SmallWnd.HpBar` |
| barMP | BarCtrl | 150×6 | TL(16,26) | `SmallWnd.MpBar` |
| **Pet:** barFATIGUE | BarCtrl | 150×6 | TL(16,33) | `SmallWnd.FATIGUEBAR/_BACK` (fome) |
| **Servo:** progFATIGUE | Progress | 150×6 | TL(16,33) | back `FATIGUEBAR_BACK`, bar `FATIGUEBAR`, gap 0 (tempo de invocação restante) |
| StatusIcon | StatusIconCtrl | 0×0 | à direita (-3,5) | `noTooltip=true` |

### 5.2 Comportamento
- Discriminação: `UIDATA_PET.GetIsPetOrSummoned()`: **2 = pet**, **1 = servo/invocação**. A janela se oculta no `OnShow` se `GetPetID()<0` ou se o tipo não for o seu (`PetStatusWnd.uc:23-39`, `SummonedStatusWnd.uc:25-43`). O SummonedStatusWnd chama `OnShow()` no `OnEnterState` (`:50-57`).
- Mostrar: `EV_PetStatusShow` / `EV_SummonedStatusShow` → `Clear()`, `ShowWindow`, `SetFocus` (`PetStatusWnd.uc:124-129`). Inferido: pacote aCis `PetStatusShow` (0xb0).
- Fechar: `EV_PetSummonedStatusClose` → oculta + som de fechar (`PetStatusWnd.uc:86-90`); o servo também para e zera a barra de tempo (`SummonedStatusWnd.uc:126-131`, `:288-293`).
- `EV_UpdatePetInfo` → `GetPetInfo(info)`: nome, `SetValue(HP)`, `SetValue(MP)`; pet também `SetValue(barFatigue, nMaxFatigue, nFatigue)` (`PetStatusWnd.uc:93-121`).
- Servo: `EV_SummonedStatusRemainTime{RemainTime, MaxTime}` (emissor `FUN_1015fa50`, `nwindow_events.c:13636`; Inferido aCis `SetSummonRemainTime`). Na 1ª vez: limpa os buffs, `SetProgressTime(MaxTime)`, `Start()`. Depois: `SetPos(RemainTime)` (`SummonedStatusWnd.uc:104-124`). Unidade (ms vs s): a assinatura diz `Millitime`, mas a unidade do valor do pacote é **a validar**.
- Buffs: `EV_PetStatusSpelledList` / `EV_SummonedStatusSpelledList{Max, SkillID_i}` (Inferido: `PartySpelled` tipo 1/2). `Size=16`, **10 por linha** (`PetStatusWnd.uc:3`), ícone `GetIconName(id, 1)`: **nível 1 fixo**, o nível do pacote é ignorado (`:157`). A grade só aparece se `m_bBuff` estiver ligado.
- Botão btnBuff alterna `m_bBuff` (`:205-231`); `EV_ShowBuffIcon{Show}` força `Show==1` (`:176-188`) (atalho `F`). `OnEnterState` zera para oculto.
- Clique esquerdo (nX+13, nX+w-10) → `RequestAction(m_PetID, meuLoc)` (seleciona o pet) (`:190-203`).

---

## 6. PetWnd e SummonedWnd — janela de detalhes do pet/servo

### 6.1 Layout PetWnd (`PetWnd.txt`)
256×229, TL(172,76), título S494 "Pet Interface", começa oculta (`unk114=3`: janela com moldura, Inferido). Fundos `PetWnd.Petinterface_back1` (256×95 em 0,20) e `back2` (256×23 em 0,115). `btnName` 76×23 TL(167,28) S497 "Name". Cabeçalho S88 "Lv" TL(15,35) + `txtLvName` TL(33,35).
Barras (Texture Stretch redimensionada pelo script, altura 12): `texHP` TL(35,51) `ps_HPbar`; `texMP` TL(35,65) `ps_MPbar`; `texExp` TL(35,79) `ps_ExPbar`; `texFatigue` TL(35,93) `ps_foodbar`; `texWeight` TL(156,51) `ps_weightbar1`. Textos centralizados sobre elas: `txtHP`/`txtMP` 85×12 (`#ffdcdcdc`), `txtWeight` 85×12 TL(156,53), `txtSP` 85×12 TL(156,67) (`#ffb09b79`), `txtExp`/`txtFatigue` 206×12 (`#ffb4b4b4`).
Abas `TabCtrl` 224×22 TL(12,115): S491 "Information"→`PetWnd_Status`, S492 "Action"→`PetWnd_Action`, S493 "Items"→`PetWnd_Inventory` (74×23, `petinterface_tab2/tab1`). Cada sub-janela 256×91 em TL(0,138):
- Status (`petinterface_back31`): 12 pares rótulo/valor; rótulos em x=17 e x=132 (S94 P.Atk, S95 P.Def, S96 Accuracy, S113 Crit.Rate, S111 Atk.Spd, S404 Soulshot Used / S98 M.Atk, S99 M.Def, S97 Evasion, S432 Speed, S112 Casting Spd, S496 Spiritshot Used); valores 32×12 em x=73 e x=198, y=3,17,31,45,59,73.
- Action: ItemWindow `PetActionWnd` 219×69, 6×2, máx. 15, ícones 32, gap 5/3.
- Inventory: ItemWindow `PetInvenWnd` 235×69, 6×2, máx. 160.

SummonedWnd (`SummonedWnd.txt`): 256×201, título S495; só HP/MP (barras de **125 px**, `SummonedWnd.uc:3`), abas Information/Action (sem inventário nem nome).

### 6.2 Comportamento PetWnd
- `EV_PetWndShow` → `Clear`, `HandlePetInfoUpdate`, som de abrir, mostra, foca e aplica a visibilidade do botão de nome (`PetWnd.uc:387-397`). `OnShow` → `PetAPI.RequestPetInventoryItemList()` + `ActionAPI.RequestPetActionList()` (`:40-44`).
- `HandlePetInfoUpdate` (`:292-384`): `txtLvName = Level $ " " $ Name`; `txtHP/MP = "cur/max"`; `txtSP`; `txtExp = GetPetEXPRate() $ "%"` (sem ×100, ao contrário do jogador: escala **a validar**); fome `100*Fatigue/MaxFatigue $ "%"`; peso `100*Carring/Carry $ "%"`.
- Barras: largura = `85*cur/max` (HP, MP, peso) ou `206*cur/max` (EXP com `int(rate)`/100, fome); 0 se max≤0; cheia se cur≥max (`:400-461`).
- Peso (`:464-499`): % ≤50 → `ps_weightbar1`; (50, 66.66] → 2; (66.66, 80] → 3; >80 → 4.
- Nome: `btnName` → diálogo `DIALOG_OKCancelInput` M535 "Enter a name for your pet." → `RequestChangePetName` (`:163-167`, `:141-145`). Falha `EV_PetWndRegPetNameFailed{ErrMsgNo}` → mensagem de sistema em (176,155,121) e reabre o diálogo; se MsgNo==80, repõe o nome digitado (`:234-253`). `EV_PetWndShowNameBtn{Show}` alterna a visibilidade do botão (`:256-282`).
- Ações: `EV_ActionPetListStart` limpa; `EV_ActionPetList{Type, ActionID, Name, IconName, Description, Command}` adiciona se `Type==ACTION_PET` (`:509-541`); clique → `DoAction(ClassID)` (`:170-179`).
- Inventário: `EV_PetInventoryItemStart/List/Update{WorkType}`; item equipado recebe `ForeTexture="l2ui_ch3.PetWnd.petitem_click"` (`:3`, `:551-601`); duplo clique/clique direito → `RequestPetUseItem` (`:182-201`); arrastar do inventário → `RequestGiveItemToPet` (com NumberPad M72 se for empilhável) (`:46-69`).
- SummonedWnd: análogo (`SummonedWnd.uc:8-249`), `RequestSummonedActionList()` no OnShow (`:23-26`).

---

## 7. DetailStatusWnd — aba "Status" da MainWnd (Alt+T)

### 7.1 Abertura
Atalhos `T` e `Alt+T` → `ShowMainWindow Tab=Status` (atalhos, GamingState). MainWnd 256×401 CENTER_LEFT(0,-70); aba 0 `MainTabCtrl` → `DetailStatusWnd`, botão 45×41 `MainWndTabBtn1/On`, tooltip S194 (`MainWnd.txt:3-4`). DetailStatusWnd 256×335 TL(0,65) dentro da MainWnd, fundo `PlayerStatusWnd.myinfo_back`.

### 7.2 Layout (`DetailStatusWnd.txt`) e origem de cada valor

| Controle | Pos. | Rótulo (S#) | Valor (de `UserInfo`/API) | Ref. |
|---|---|---|---|---|
| txtName1 / txtName2 | (15,9) | — | sem título (nickname): Name1=Name. Com título: Name1=título (162,249,236), Name2=Name movido para x=15+larguraTítulo+6; se somadas >220 px, corta em 8 caracteres o que tiver >109 px | `DetailStatusWnd.uc:315-343` |
| cor do nome | — | — | karma c=min(karma,255); se c>0, c=Clamp(c, 100+c/16, 255); cor=(255, 255-c, 255-c) | `:297-309` |
| txtHeadPledge / texPledgeCrest 16×12 / txtPledge | (15,25)/(68,25)/(88 ou 68,25) | S430 Clan | `UIDATA_CLAN.GetName(nClanID)` (176,155,121) ou S431 "No Clan" (branco); x=88 com brasão, x=68 sem | `:356-384` |
| texHero 13×15 | (231,10) | — | `bHero`→`myinfo_heroicon`; senão `bNobless`→`myinfo_nobleicon`; senão vazio | `:387-395` |
| txtLvHead/txtLvName | (15,46)/(33,46) | S88 Lv | `nLevel $ " " $ GetClassType(nSubClass)` | `:242,345` |
| txtHeadRank/txtRank | (150,46)/(188,46) | S1432 | `GetUserRankString(nUserRank)` | `:245,346` |
| texHP/texMP/texExp (85 px máx., altura 12) | (35,59)/(35,73)/(35,87) | — | `85*cur/max`; EXP = `int(GetPlayerEXPRate()*100)` de 100 | `:498-554` |
| texCP / texWeight | (156,59)/(156,73) | — | idem; peso com as cores do §6.2 | `:557-608` |
| txtHP/txtMP/txtCP | sobre as barras | — | `"cur/max"` | `:347-350` |
| txtExp | (35,89) | — | `GetPlayerEXPRate()*100 $ "%"` | `:158-161,349` |
| txtWeight | (156,75) | — | `100*nCarringWeight/nCarryWeight $ "%"` | `:352-353` |
| txtSP | (156,89) | — | `nSP` | `:351` |
| Combate (S93): P.Atk S94, P.Def S95, Accuracy S96, Crit S113, Atk.Spd S111 / M.Atk S98, M.Def S99, Evasion S97, Speed S432, Casting S112 | rótulos x=16/137, y=132..192 passo 15; valores 49×12 à direita em x=65/186 | | `nPhysicalAttack` etc.; velocidade = `GetMovingSpeed` | `:482-491` |
| Básico (S103): STR S104, DEX S105, CON S106 / INT S107, WIT S108, MEN S109 | y=236/251; x=16/96/177; valores 70×12 em x=30/113/194 | | `nStr…` + bônus de tatuagem `"N(+x)"` / `"N(-x)"` | `:398-480` |
| Social (S100): Karma S101 / PvP-PK S102 / Eval.Score S709 / Rec.Remaining S710 | y=294/310 | | karma (`"999999+"` se ≥999999), `"nDualCount / nPKCount"`, `nSociality`, `nRemainSulffrage` | `:285-292,493-496` |

- Velocidade (`:118-156`): `MoveType=GetPlayerMoveType()`, `Env=GetPlayerEnvironment()`; FAST → `nGroundMaxSpeed` (água `nWaterMaxSpeed`, ar `nAirMaxSpeed`); SLOW → versões Min; vezes `fNonAttackSpeedModifier`; truncado para int; `MVT_NONE` → 0.
- Tatuagem: `EV_UpdateHennaInfo{HennaID, ClassID, Num, Fee, CanUse, INTnow, INTchange, STRnow, STRchange, CONnow, CONchange, MENnow, MENchange, DEXnow, DEXchange, WITnow, WITchange}` guardado em `m_HennaInfo` (`:92-111`). O emissor nativo `FUN_10159350` não teve as chaves resolvidas; se o evento traz o total ou um evento por tatuagem é **a validar**.
- Atualização: `EV_UpdateUserInfo`, `OnShow`, `OnEnterState`; `EV_UpdateMaxHP/MP/MaxMP/CP/MaxCP` com `ServerID` próprio (`:46-89`). **Também não trata `EV_UpdateHP`** (registrado em `:19`, sem `case`).
- `m_WindowName` nunca é atribuído no `.uc` exportado (`defaultproperties` não exportadas). Inferido: valor padrão `"DetailStatusWnd"`; `GMDetailStatusWnd` herda a classe (`GMDetailStatusWnd.uc:1`).
- Formato de `float $ "%"` (casas decimais) segue a conversão float→string do UnrealScript: **a validar**.

---

## 8. HUD de Olimpíada

### 8.1 Janelas e estados

| Janela | Estado | Tamanho/posição | defpos | Papel |
|---|---|---|---|---|
| OlympiadPlayer1Wnd | OlympiadObserverState | 348×46, TL(0,0) | TOP_LEFT | jogador 1, visto pelo espectador |
| OlympiadPlayer2Wnd | OlympiadObserverState | 348×46, TR(0,0) | TOP_RIGHT | jogador 2 |
| OlympiadBuff1Wnd | OlympiadObserverState | 38×26, TL(0,47) | (WindowsInfo 0,123) | buffs do jogador 1 |
| OlympiadBuff2Wnd | OlympiadObserverState | 38×26, TR(-310,47) | | buffs do jogador 2 |
| OlympiadControlWnd | OlympiadObserverState | 102×56, TC(0,0) | TOP_CENTER | botões do espectador |
| OlympiadTargetWnd | **GamingState** | 172×46, TL(0,152) | (WindowsInfo 0,473) | adversário, visto pelo participante |

### 8.2 OlympiadPlayerWnd (base de Player1/2; `SetPlayerNum(1|2)`, `OlympiadPlayer1Wnd.uc:3-7`)
Layout (`OlympiadPlayer1Wnd.txt`): BackTex 336×80 (`Smallwindow_back1` 16×46, `back2` 304×46 Stretch, `back3` 16×46); BackExpTex 336×126 (`Smallwindow3_back1/2/3`) que contém `txtMsg4..txtMsg0` em (6,45/60/75/90/105), brancos; `txtName` (25,6) branco; `texCPBack`/`texHPBack` 326×6 em (16,26)/(16,33); `texCP`/`texHP` 0×6 (largura via script). Expansível (alturas 46/126).
- `EV_OlympiadUserInfo{IsPlayer, PlayerNum, ID, Name, ClassID, MaxHP, CurHP, MaxCP, CurCP}` (emissor `FUN_10156350`). Só aceita `IsPlayer==1` e `PlayerNum==m_PlayerNum` (`OlympiadPlayerWnd.uc:88-126`). Inferido (aCis `ExOlympiadUserInfo`: C side, D id, S name, D class, D hp, D maxHp, D cp, D maxCp).
- Barras: largura `326*cur/max` (0 se max≤0), altura 6 (`:220-244`).
- Se mudou o ID do jogador: `ExecuteEvent(EV_OlympiadBuffShow, "PlayerNum=…&PlayerID=…")` (evento gerado pelo **script**) (`:118-125`).
- Log de 5 linhas (só aparece expandido; `txtMsg*` são filhos de BackExpTex), buffer circular; o mais recente vai em `txtMsg0` (embaixo) (`:204-217`):
  - `EV_ReceiveMagicSkillUse{AttackerID, SkillID}`, se o atacante é o jogador e 0≤SkillID≤1999 → M46 "You use $s1." com parâmetro SMPT_SKILLID (`:129-156`);
  - `EV_ReceiveAttack{AttackerID, AttackerName, DefenderID, Critical, Miss, ShieldDefense}`: crítico do jogador → M44; jogador esquivou → M42 com o nome do atacante; escudo → M111 (`:159-201`).
- `EV_OlympiadMatchEnd` → `Clear` (zera e redesenha) (`:59-62`).
- Expandir: alterna BackTex/BackExpTex e move a janela de buff (`MoveEx 0,±80`) se ela estava encostada (rect.nY+46/47 ou +126/127) (`:254-290`).

### 8.3 OlympiadBuffWnd (base de Buff1/2)
- `EV_OlympiadBuffShow{PlayerNum, PlayerID}` grava o PlayerID (`OlympiadBuffWnd.uc:54-65`).
- `EV_OlympiadBuffInfo{PlayerID, Max, SkillID_i, SkillLevel_i, RemainTime_i, Name_i, IconName_i, Description_i}` (Inferido: `ExOlympiadSpelledInfo`) → limpa, 12 por linha, `Size=24`, `BackTex=AbnormalBack`; mostra e redimensiona como a AbnormalStatusWnd (+12 de frame) (`:68-124`). StatusIcon com tooltip (`popupType=AbnormalStatus`).
- `EV_OlympiadMatchEnd` / `OnEnterState` → limpa e oculta.

### 8.4 OlympiadTargetWnd (`OlympiadTargetWnd.txt`)
172×46: TargetBackTex1/2/3 (16 / 128 Stretch / 16 ×46), `txtName` (25,6), barras de fundo 150×6 em (16,26)/(16,33), `texCP`/`texHP`.
- `EV_OlympiadTargetShow{PlayerNum}` → `Clear`, grava PlayerNum, mostra (`OlympiadTargetWnd.uc:20-31`).
- `EV_OlympiadUserInfo` só com `IsPlayer==0` e PlayerNum igual (`:65-91`); barras `150*cur/max` (`:94-118`). Só CP e HP (sem MP).
- `EV_OlympiadMatchEnd` → `Clear` (o emissor nativo `FUN_10156650` referencia `OlympiadTargetWnd` e os estados).

### 8.5 OlympiadControlWnd (`OlympiadControlWnd.txt`)
102×56 TC(0,0); `texBack` 90×56 `Olympiad.olympiad_back`; `btnStop` 76×23 (19,5) S611 "Return" → `OlympiadAPI.RequestOlympiadObserverEnd()`; `btnOtherGame` 76×23 (19,29) S1252 "Move to Arena" → `RequestOlympiadMatchList()` (`OlympiadControlWnd.uc:7-17`).

---

## 9. DuelManager — barras do duelo

### 9.1 Layout (`DuelManager.txt`)
176×368, CENTER_RIGHT(0,0), oculta, redimensionável como a PartyWnd. `PartyStatusWnd0..8` (9 slots, 46 px; 1..8 herdam de 0): fundos `SmallWindow_Back1/2/3_ex`, `PlayerName` (100%-14)×14 em **(0,8)**, `ClassIcon` 11×11 (4,8), `LeaderIcon` (não usado pelo script), barCP/HP/MP (100%-14)×5 em y=21/28/35.

### 9.2 Comportamento
- `EV_DuelAskStart{userName, type}` (`DuelManager.uc:104-132`): se `GetOptionBool("Game","IsRejectingDuel")` (Option.ini `IsRejectingDuel=False`) → `RequestDuelAnswerStart(type, 1, 0)` automático; senão, diálogo `DIALOG_Progress` de **10 s** (`DialogSetParamInt(10*1000)`) com M1938 "$c1 has challenged you to a duel!" (type 0, individual) ou M1939 (type 1, grupo). OK → `RequestDuelAnswerStart(type, opção, 1)`; Cancelar → `(…, 0)` (`:134-162`).
- `EV_DuelReady{type}` → `m_bDuelState=true`; `EV_DuelStart` ignorado; `EV_DuelEnd` → limpa e oculta (`:73-85`).
- `EV_DuelUpdateUserInfo{userName, ID, class, level, currentHP, maxHP, currentMP, maxMP, currentCP, maxCP}` (só com `m_bDuelState`): procura o ID nos slots; se for novo, ocupa o próximo slot livre, mostra e `Resize(n)`; preenche nome, ícone/tooltip de classe e barras (`:166-226`). O emissor nativo `FUN_1015cdd0` lista as demais chaves, mas não "ID" (Inferido: chave por constante compartilhada).
- `EV_DuelEnemyRelation{userName, bEnemy}`: ignorado pelo script (`:89-90`). O efeito nativo (cor do nome?) é **a validar**.
- Clique esquerdo X > nX+13 → `RequestTargetUser(m_memberInfo[(Y-nY)/46])` (`:252-265`).
- Inferido: mostra os adversários (até 9 = grupo inimigo).

---

## 10. SSQMainBoard (Seven Signs): SSQStatusWnd / SSQMainEventWnd / SSQSealStatusWnd

Não é HUD fixo, é um painel que o servidor abre. Resumo:
- SSQMainBoard 256×401 CENTER, título S882 "The Historical Record of the Seven Seals", fundo de abas `SSQWnd.ssq_back`. Abas: S824 "General"→SSQStatusWnd, S825 "Festival"→SSQMainEventWnd, S826 "Seal Status"→SSQSealStatusWnd (`SSQMainBoard.txt:3-6`). Sub-janelas 256×353 em (0,48).
- Abre com `EV_SSQStatus{SuccessRate, Period, MsgNum1, MsgNum2, SSQTeam, SelectedSeal, Contribution, SealStoneAdena, Team1/2HuntingMark, Team1/2MainEventMark, Team1/2Per, Team1/2TotalMark}` → preenche e mostra (`SSQMainBoard.uc:162-188`). Inferido: pacote `SSQStatus` (0xf5) respondendo ao uso do item "Record of Seven Signs".
- Requests: `SSQAPI.RequestSSQStatus(n)` com 1=STATUS, 2=MAINEVENT, 3=SEALSTATUS, 4=PREINFO (`:9-12`). Botões: `s_btnRenew` (renova 1 ou 4), `s_btnPreview` (alterna S937 "Projection" / S939 "Back"), `ss_btnRenew`/`me_btnRenew` S938 "Refresh"; as abas 1 e 2 pedem os dados só na primeira vez (`:270-318`).
- Equipes: 1 = Dusk (Revolutionaries), 2 = Dawn (Lords) (`:16-17`). Barras `texDawnValue/texDuskValue` com largura `Per*150/100`, altura 11 (`:390`).
- Se `MsgNum1==1183` (período de preparação), a aba de selos é preenchida localmente com 3 selos vazios em vez de consultar o servidor (`:1009-1014`).
- Detalhes de árvore (TreeCtrl) estão fora do escopo desta seção (`SSQMainBoard.uc:594-1440`).

---

## 11. FishViewportWnd — pesca

- Layout (`FishViewportWnd.txt`): 256×276, TL(300,100) (defpos CENTER x=-100), título S1112 "Fishing", oculta. Filho nativo `FishViewportWindow` 256×276 com texturas: `texBack=FishingWnd.fishing_back`, `texClock=fishing_clockicon`, `texFishHPBar=fishing_bar1`, `texFishHPBarBack=fishing_bar2`, `texFishFakeHPBarWarning=PlayerStatusWnd.ps_hpbarwarn1`, `texFishingEffect=fishing_effect`, `texIconPumping=Icon.skill_i.skill1313`, `texIconReeling=Icon.skill_i.skill1314`. `btnRanking` 66×21 em (179,212) relativo ao viewport, `smallbutton2(_down)`, S1428 "Results".
- Script (`FishViewportWnd.uc:3-51`): `EV_FishViewportWndShow` → mostra e foca; `EV_FishViewportWndHide` → oculta; `EV_FishRankEventButtonShow/Hide` → mostra/oculta `btnRanking`; clique → `RequestFishRanking()`. `EV_FishViewportWndInit/FinalAction` estão comentados ("não usado", 2006-11-27, `:21-32`).
- HP do peixe, relógio, efeitos e os ícones de bombear/recolher são inteiramente **nativos**. Inferido: alimentados por `ExFishingStart/StartCombat/HpRegen/End` (aCis 0xfe:13-16) — **a validar**.

---

## 12. Outros elementos de estado

### 12.1 InvenWeight (peso)
Controle nativo `InvenWeight` 85×12 em InventoryWnd TL(117,372) (`InventoryWnd.txt:29`). Variantes 70×12 em ShopWnd/PrivateShopWnd/DeliverWnd/TradeWnd, alimentadas por `AddWeight/ReduceWeight/ZeroWeight` para prever o peso de uma compra (`ShopWnd.uc:46,166,214`, `PrivateShopWnd.uc:1044,1056`). No inventário nenhum script o atualiza (Observado): ele lê o peso do jogador sozinho no nativo. Cores e texto: **a validar** (Inferido: mesmas `ps_weightbar1..5`).

### 12.2 Ícones de herói/nobre
Só aparecem na DetailStatusWnd (§7, `DetailStatusWnd.uc:387-395`). A StatusWnd não mostra (Observado).

### 12.3 Penalidades de estado
Peso, grade, cargas, zona de perigo e death penalty aparecem como ícones **Etc** da AbnormalStatusWnd (§3.2, Inferido pelo EtcStatusUpdate).

---

## 13. Tabela consolidada de eventos

| ID | Evento | Parâmetros (chaves) | Emissor nativo | Tratado por |
|---|---|---|---|---|
| 40 | EV_Restart | — | não resolvido | AbnormalStatusWnd, PartyWnd(Compact) |
| 50 | EV_Die | Agit, BattleCamp, Castle, Original, Village | 101512c0 | AbnormalStatusWnd (limpa Normal/Short) |
| 70 | EV_RegenStatus | Type, Duration, Ticks, Amount(float) | 10166b20 | StatusWnd |
| 180 | EV_UpdateUserInfo | — | 101679b0 | StatusWnd, DetailStatusWnd |
| 190 | EV_UpdateHP | ServerID, CurrentHP | 101583a0 | TargetStatusWnd (Status/Detail registram, mas não tratam) |
| 200 | EV_UpdateMaxHP | ServerID, MaxHP | 101585c0 | Status, Detail, Target |
| 210 | EV_UpdateMP | ServerID, CurrentMP | 10158290 | Status, Detail, Target |
| 220 | EV_UpdateMaxMP | ServerID, MaxMP | 101584b0 | Status, Detail, Target |
| 230 | EV_UpdateCP | ServerID, CurrentCP | 101586d0 | Status, Detail |
| 240 | EV_UpdateMaxCP | ServerID, MaxCP | 101587e0 | Status, Detail |
| 250 | EV_UpdatePetInfo | — (lê via `GetPetInfo`) | 1015fd20, 10167a70 | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd |
| 260 | EV_UpdateHennaInfo | HennaID, ClassID, Num, Fee, CanUse, {STR,DEX,CON,INT,WIT,MEN}{now,change} | 10159350 (chaves não resolvidas) | DetailStatusWnd |
| 280 | EV_ReceiveAttack | AttackerID, AttackerName, DefenderID, Critical, Miss, ShieldDefense | 10167770 | OlympiadPlayerWnd |
| 290 | EV_ReceiveMagicSkillUse | AttackerID, SkillID | 10167620 | OlympiadPlayerWnd |
| 300 | EV_ReceiveTargetLevelDiff | LevelDiff | 1015a920 | TargetStatusWnd |
| 310 | EV_ShowReplayQuitDialogBox | — | 1016e950 | AbnormalStatusWnd |
| 740 | EV_SSQStatus | ver §10 | 10166050 | SSQMainBoard |
| 750/760/770 | EV_SSQMainEvent / SealStatus / PreInfo | ver `SSQMainBoard.uc:191-262` | 10166400 / 10166800 / 10165e70 | SSQMainBoard |
| 900 | EV_OlympiadTargetShow | PlayerNum | não resolvido | OlympiadTargetWnd |
| 910 | EV_OlympiadMatchEnd | — | 10156650, 10156920 | Olympiad* |
| 920 | EV_OlympiadUserInfo | IsPlayer, PlayerNum, ID, Name, ClassID, MaxHP, CurHP, MaxCP, CurCP | 10156350 | OlympiadPlayerWnd, OlympiadTargetWnd |
| 930 | EV_OlympiadBuffShow | PlayerNum, PlayerID | **script** (`OlympiadPlayerWnd.uc:124`) | OlympiadBuffWnd |
| 940 | EV_OlympiadBuffInfo | PlayerID, Max, SkillID_i, SkillLevel_i, RemainTime_i, Name_i, IconName_i, Description_i | 1016b560 | OlympiadBuffWnd |
| 950 | EV_AbnormalStatusNormalItem | Max, SkillID_i, SkillLevel_i, RemainTime_i, Name_i, IconName_i, Description_i | 1016caa0 (+1015a560 Max=0) | AbnormalStatusWnd |
| 960 | EV_AbnormalStatusEtcItem | idem (RemainTime=-1) | 1016cf50 (+1015a6c0) | AbnormalStatusWnd |
| 970 | EV_AbnormalStatusShortItem | idem | 1016d310 (+1015a610) | AbnormalStatusWnd |
| 980 | EV_TargetUpdate | — | 1014fe90, 101588f0 | TargetStatusWnd |
| 990 | EV_TargetHideWindow | — | não resolvido | TargetStatusWnd |
| 1000 | EV_ShowBuffIcon | Show | 10165d00 (atalho ShowPartyBuff) | PartyWnd(Compact) (ciclo), PetStatusWnd/SummonedStatusWnd (Show) |
| 1010 | EV_PetWndShow | — | 1015f8f0 | PetWnd |
| 1020 | EV_PetWndShowNameBtn | Show | 1015fc60 | PetWnd |
| 1030 | EV_PetWndRegPetNameFailed | ErrMsgNo | 10108d00 | PetWnd |
| 1040 | EV_PetStatusShow | — | 1015f9a0 | PetStatusWnd |
| 1050 | EV_PetStatusSpelledList | Max, SkillID_i | não resolvido | PetStatusWnd |
| 1060/1070/1080 | EV_PetInventoryItemStart/List/Update | item + WorkType | 1015fdb0/1015fe40/1015ff10 | PetWnd |
| 1090 | EV_SummonedWndShow | — | não resolvido | SummonedWnd |
| 1100 | EV_SummonedStatusShow | — | não resolvido | SummonedStatusWnd |
| 1110 | EV_SummonedStatusSpelledList | Max, SkillID_i | 1015e410 | SummonedStatusWnd |
| 1120 | EV_SummonedStatusRemainTime | RemainTime, MaxTime | 1015fa50 | SummonedStatusWnd |
| 1130 | EV_PetSummonedStatusClose | — | 1015fb40, 1015fbd0 | Pet/Summoned Status/Wnd |
| 1140 | EV_PartyAddParty | ID, Name, Cur/Max CP/HP/MP, ClassID, Level, MasterID, RoutingType | não resolvido | PartyWnd(Compact) |
| 1150 | EV_PartyUpdateParty | ID, Name, Cur/Max CP/HP/MP, ClassID, Level | 1015eaf0 | PartyWnd(Compact) |
| 1160 | EV_PartyDeleteParty | ID | não resolvido | PartyWnd(Compact) |
| 1170 | EV_PartyDeleteAllParty | — | não resolvido | PartyWnd(Compact) |
| 1180 | EV_PartySpelledList | ID, Max, SkillID_i, Level_i | não resolvido | PartyWnd(Compact) |
| 1320/1330 | EV_ActionPetListStart / List | Type, ActionID, Name, IconName, Description, Command | —/1011ace0 | PetWnd |
| 1340/1350 | EV_ActionSummonedListStart / List | idem | —/1011b190 | SummonedWnd |
| 1710/1720 | EV_DialogOK / Cancel | — | script (DialogBox) | PetWnd, DuelManager |
| 1900 | EV_LanguageChanged | — | 10164610 | AbnormalStatusWnd, PetWnd, SummonedWnd |
| 2470/2480 | EV_FishViewportWndShow / Hide | — | 10167e50 / 10167ee0, 101ab9f0 | FishViewportWnd |
| 2510/2520 | EV_FishRankEventButtonShow / Hide | — | 101ab8c0 / — | FishViewportWnd |
| 2700 | EV_DuelAskStart | userName, type | 1015ca70 | DuelManager |
| 2710/2720/2730 | EV_DuelReady / Start / End | type | 1015cb90/cc50/cd10 | DuelManager |
| 2740 | EV_DuelUpdateUserInfo | userName, ID, class, level, current/max HP/MP/CP | 1015cdd0 | DuelManager |
| 2750 | EV_DuelEnemyRelation | userName, bEnemy | 1015d090 | (ignorado) |
| 2920 | EV_RequestTooltipInfo | TooltipType, SourceType, … | 101b8ab0… | ToolTip (AbnormalStatus) |

### 13.1 Requests ao servidor disparados por estas janelas

| Origem | Chamada | Ref. |
|---|---|---|
| StatusWnd clique | `RequestSelfTarget()` | `StatusWnd.uc:54` |
| TargetStatusWnd fechar / Esc | `RequestTargetCancel()` | `TargetStatusWnd.uc:88` |
| PartyWnd clique | `RequestAttack` / `RequestAction(id, loc)` | `PartyWnd.uc:659-667` |
| PartyWndCompact / DuelManager clique | `RequestTargetUser(id)` | `PartyWndCompact.uc:651`, `DuelManager.uc:263` |
| Party (ambas) botão direito | `RequestAssist(id, loc)` | `PartyWnd.uc:685` |
| Pet/Summoned status clique | `RequestAction(petID, loc)` | `PetStatusWnd.uc:200` |
| PetWnd | `RequestPetInventoryItemList`, `RequestPetActionList`, `RequestChangePetName`, `RequestPetUseItem`, `RequestGiveItemToPet`, `DoAction` | `PetWnd.uc:42-43,144,189,54,177` |
| SummonedWnd | `RequestSummonedActionList`, `DoAction` | `SummonedWnd.uc:25,69` |
| DuelManager | `RequestDuelAnswerStart(type, opt, answer)` | `DuelManager.uc:117,144,159` |
| Olympiad | `RequestOlympiadObserverEnd`, `RequestOlympiadMatchList` | `OlympiadControlWnd.uc:12,15` |
| SSQ | `RequestSSQStatus(1..4)` | `SSQMainBoard.uc:277-317,627,1017` |
| Fish | `RequestFishRanking()` | `FishViewportWnd.uc:48` |

---

## 14. Lacunas — a validar no nativo

1. **StatusBar**: formato e posição do texto "atual/máximo" e do título; fonte; formato do EXP (casas decimais) e cálculo de `SetPointExp` (tabela de EXP por nível); limiar e frequência do piscar (`warnTexture`, `ps_hpbarwarn1/2`); desenho da regeneração (`SetRegenInfo`: Duration, Ticks, Amount); uso de `textureWidth/Height` 8×12 sobre sprites 8×16.
2. **HP do jogador**: StatusWnd e DetailStatusWnd registram `EV_UpdateHP` mas não o tratam. É preciso confirmar se o nativo atualiza a barra direto ou se emite `EV_UpdateUserInfo` a cada StatusUpdate.
3. **`GetTargetNameColor(LevelDiff)`**: tabela diferença de nível → cor.
4. **NameCtrl**: cor padrão de `SetName` e se aplica cores de karma/PvP/grupo/clã para PCs (StatusWnd, TargetStatusWnd, PartyWnd).
5. **StatusIconCtrl**: espaçamento e padding entre ícones; desenho de `BackTex`; se `DelItem` remove a linha que fica vazia; contagem regressiva de `RemainTime` (e mapeamento para `Reserved` no tooltip); comportamento com `noClip`/`noTooltip`.
6. **`IsDebuff(id,lvl)`**, `GetUserRankString(rank)`: tabelas nativas. **Resolvidos (K4):** `GetClassIconName` = `FUN_1014eb90`: estilo da classe (`FUN_10147480`, 16 valores) → `L2UI_CH3.PartyWnd.party_styleicon1..7`, `1_1`, `1_2`, `1_3`..`7_3`; `GetClassStr` = `FUN_1014e370`: estilo → sysstring 874..880 (7 = 175 "Fighter", 8 = 176 "Mystic", 9..15 = 874..880); `GetClassType` = `FUN_101460d0`: nome da classe = sysstring 247 + id (id < 88) ou 1071 + id; `GetRoutingString` (`0x10100df0`): `"S489 : S"` com 0 = 487, 1 = 488, 2 = 798, 3 = 799, 4 = 800, outro valor = "" ("Loot Dist. : Finders Keepers"). Sysstring em `GL2GameData+off`, índice `(off-0x6A8DC)/12`.
7. **Frame de janela**: faixa de arrasto de 12 px, ímã "stuckable", limites de redimensionamento (interpretação de `unk117/118/122/120/121`), botão de expandir (`unk123/124/125`) e sua textura/posição.
8. **`EV_ShowBuffIcon`**: valores das strings `Show` (DAT_10233714 / DAT_102468e4) e a flag alternada em `DAT_103663bc+0x5110+0x74`.
9. **Emissores não resolvidos**: `EV_PartyAddParty/DeleteParty/DeleteAllParty/SpelledList`, `EV_PetStatusSpelledList`, `EV_SummonedStatusShow`, `EV_OlympiadTargetShow`, `EV_TargetHideWindow`, `EV_Restart` (chaves e quando disparam); confirmar que o próprio jogador não entra na lista do grupo.
10. **`IsPKMode()`**: condição exata (Ctrl?).
11. **`GetPetEXPRate()`**: escala (0..1 ou 0..100); formato float→string em `$ "%"`.
12. **`EV_UpdateHennaInfo`**: um evento agregado ou um por tatuagem.
13. **Progress do servo**: unidade de `MaxTime/RemainTime`, direção do preenchimento e `OnProgressTimeUp`.
14. **InvenWeight**: desenho, cores e limiares.
15. **FishViewportWindow**: todo o comportamento (barra do peixe, relógio, efeitos, ícones de ação).
16. **DuelManager**: chave do ID em `EV_DuelUpdateUserInfo`; efeito de `EV_DuelEnemyRelation`.
17. **`UIDATA_TARGET.IsHPShowableNPC`** (quartel de cerco) e `UIDATA_STATICOBJECT.GetStaticObjectShowHP`: regras.
18. **Âncoras**: confirmar com captura de tela a semântica `this/parent` das grades de buff à direita.
19. **Default de `m_WindowName`** na DetailStatusWnd (defaultproperties não exportadas).

---

## 15. Checklist para recriar

- [ ] Infra: janelas com faixa de arrasto de 12 px à esquerda, redimensionamento horizontal 166–202 px para as janelas de 176 px, botão de expandir com alturas recolhida/expandida, `OnEnterState` por estado (GamingState / OlympiadObserverState).
- [ ] Controles: StatusBar (fore/back/warn/regen + título + texto), BarCtrl (max,cur), StatusIconCtrl (linhas/colunas, Insert/Add/Del, `Size` por item, BackTex, tooltip AbnormalStatus), NameCtrl, Progress, InvenWeight.
- [ ] StatusWnd 176×84 em (0,0): 4 barras 150×12 em y=27/41/55/69, nível em (15,6) sobre `ps_levelback`, nome em (40,9); clique = self-target; regen do HP por `EV_RegenStatus Type=1`.
- [ ] TargetStatusWnd 176×46 TOP_CENTER: árvore de decisão do §2.2 (objeto estático / membro distante / mob-self-pet-quartel / outros), listas brancas por ClassID, MP só para não-mob, expandido com propriedades do NPC (8 por linha, 18 px) ou clã/aliança com as cores do §2.2, fechar = TargetCancel (Esc).
- [ ] AbnormalStatusWnd em (176,0): ícones de 24 px, 12 por linha, ordem Normal → [Short, Etc]; morrer limpa Normal/Short; restart limpa tudo; largura = grade + 12; tooltip com nível e "Remaining Time" (exceto debuff/Etc); **sem** remoção por clique direito.
- [ ] PartyWnd 176×(46·n) em (0,84) com até 8 slots (nome, classe, líder + tooltip de loot, CP/HP/MP 5 px); variante compacta 71×(26·n); opção "Small Party Window" em `Game.SmallPartyWnd`; botão de buff de 3 estados (tooltips S1496/1497/1498) sincronizado com F/Alt+F; buffs 16 px (compacta 10 px) à direita, separados por IsDebuff; clique (Action/Attack ou TargetUser), botão direito = Assist.
- [ ] Pet/SummonedStatusWnd 176×46: HP/MP + fome (pet) ou tempo de invocação (servo); buffs 16 px, 10 por linha, nível 1, alternáveis; clique seleciona o pet.
- [ ] PetWnd/SummonedWnd: barras de 85/206 (servo 125) px, peso com 4 cores (50/66.66/80%), abas Information/Action/Items, renomear pet (M535), ações via DoAction, inventário do pet.
- [ ] DetailStatusWnd (aba 0 da MainWnd, T/Alt+T): todos os campos do §7.2 com as fórmulas (cor por karma, velocidade por MoveType/Env, bônus de tatuagem, herói/nobre, 999999+).
- [ ] Olimpíada: Player1/2 (barras de 326 px, log de 5 linhas no modo expandido, buff window que acompanha), Buff1/2 (24 px, 12 por linha), Target (150 px, GamingState), Control (Return / Move to Arena).
- [ ] DuelManager: diálogo de 10 s ou recusa automática (`Game.IsRejectingDuel`), até 9 slots, clique = TargetUser.
- [ ] SSQMainBoard: 3 abas, requests 1..4, barras Dawn/Dusk de 150 px.
- [ ] FishViewportWnd: mostrar/ocultar, botão Results → RequestFishRanking; viewport nativo.
- [ ] Reproduzir (ou corrigir conscientemente) os defeitos observados: `ClearStatus(m_CurCount)` na remoção de membro (`PartyWnd.uc:341`), `GetTextSize` sobre o nome da textura (`PartyWnd.uc:196`), `EV_UpdateHP` não tratado.
