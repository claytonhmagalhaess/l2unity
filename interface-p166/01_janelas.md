# 01 — Janelas: P166 × Interlude × l2unity

Uma linha por classe de `Interface_P166\Interface\Classes` (460), mais as 15 classes do `Interface.u` do Interlude que não existem na P166 e as 21 janelas do `Interface.xdat` do Interlude que não têm classe própria. Ao todo são 496 linhas.

Legenda: **[O]** observado, **[I]** inferido, **[V]** a validar. Os caminhos do l2unity são relativos a `l2unity\Assets\L2Web\Scripts\` (`main` em 2026-11-03).

## 1. Como a versão foi decidida

- **Interlude** [O]: existe uma classe com o mesmo nome (sem diferenciar maiúsculas) no `Interface.u` do Interlude de referência. As 142 classes foram exportadas do `reference\l2-interlude\client\system\Interface.u` para `tools\l2anim\export\uc\Interface\` (spec `00_indice.md`, "Como as evidências foram geradas"). Entram aqui também as 21 janelas do xdat sem classe (`analises\l2-interlude\re\interface_layout.json`, 140 janelas).
- **Interlude (equivalente)** [I]: a classe da P166 tem outro nome, mas cumpre o papel de uma janela ou tela nativa do Interlude. São as variantes `*Classic`, `Tooltip`, `NPCDialogWnd` (o HTML de NPC, que no Interlude é nativo, spec 07 §18.2, pacote `NpcHtmlMessage` no aCis), `RadarMapWnd`, `SkillLearnWnd` e as telas de login e lobby, que no Interlude são C++ (spec 89). Mapa em `scripts\classify_windows.py`, dicionário `EQUIV`.
- **Posterior** [O]: não há classe nem janela do xdat com esse nome no Interlude. As 73 classes `janela GFx` estendem `L2UIGFxScript`, `GFxUIScript` ou `L2UIGFxScriptNoneContainer`, ou seja, Scaleform. O Interlude não tem GFx: não há `GFx*` no `NWindow.u` exportado (`tools\l2anim\export\uc\NWindow`, 87 classes).
- **Tipo:** `janela` (tem `OnLoad`), `janela GFx`, `idioma` (variante de `LoadingWnd`/`ReplayLogoWnd` sem corpo), `apoio` (script sem `OnLoad` ou biblioteca), `ferramenta` (editor, depuração, visualizadores internos), `só IL` e `só xdat IL`.
- **Estado no l2unity:** `feito` (a janela existe e faz o papel do original), `parcial` (existe, mas com lacunas: ver 02 e 05), `falta` (não existe, ou existe só como casca vazia) e `—` (posterior ou apoio). Levantamento feito no `main` (inventário da UI, 2026-11-03): 31 das 140 janelas do xdat são instanciadas, 2 delas sem dados (`ClanWnd`, `QuestTreeWnd`), e 8 janelas genéricas (`UiWindow`) substituem em parte `ShopWnd`, `BoardWnd`, `TradeWnd` e `PrivateShopWnd`.

Para regenerar: `python -I analises\interface-p166\scripts\classify_windows.py <workspace> <saida.md>`.

## 2. Resumo

| Grupo | Linhas |
|---|---|
| Interlude: janelas de jogo (`janela`, `janela GFx`, `só IL`, `só xdat IL`, equivalentes) | 163 |
| … das quais `feito` / `parcial` / `falta` | 13 / 33 / 117 |
| Interlude: apoio, idioma e ferramenta | 16 |
| Posterior: janelas (`janela` 175 + `janela GFx` 73) | 248 |
| Posterior: apoio, idioma e ferramenta | 69 |
| **Total** | **496** |

As janelas do Interlude que faltam e pesam mais no jogo, por ordem de uso (spec 07 §21), estão em 05 §2: `WarehouseWnd`, `MacroListWnd`/`MacroEditWnd`/`MacroInfoWnd`, `PetWnd`/`PetStatusWnd`, `SummonedWnd`/`SummonedStatusWnd`, `QuestTreeWnd`/`QuestListWnd`, `ClanWnd`/`ClanDrawerWnd`, `SkillTrainListWnd`/`SkillTrainInfoWnd`, `OnScreenMessageWnd1..8`, `Recipe*`, `HennaListWnd`/`HennaInfoWnd`, `PartyMatch*`, `ItemEnchantWnd`, `RefineryWnd`/`UnrefineryWnd`, `DeliverWnd`/`SelectDeliverWnd`, `Olympiad*` e `Manor*`.

## 3. Observações por janela (o que a tabela não mostra)

- [O] **Tooltip:** a classe `ToolTip` do Interlude (1.936 linhas, 22 tipos) e a `Tooltip` da P166 (6.843 linhas, cerca de 50 tipos) tratam o mesmo evento, mas com ids diferentes: `EV_RequestTooltipInfo` = 2920 no Interlude (`tools\l2anim\export\uc\NWindow\UIEventManager.uc`) e 2960 na P166 (`Interface_P166\NWindow\Classes\UIEventManager.uc`). Ver 04 §3.
- [O] **MainWnd** existe só no Interlude. Na P166, `DetailStatusWnd`, `MagicSkillWnd`, `ActionWnd`, `QuestTreeWnd` e `ClanWnd` são janelas soltas, abertas por comandos próprios no `Shortcut.uc` da P166 (`case "DetailStatusWnd"`, `"MagicSkillWnd"`, `"ActionWnd"`, linhas 262-296). No Interlude são abas do `MainWnd` (spec 07 §3.1).
- [O] **MinimapWnd_Expand, RadarWnd, RadarContainerWnd, ChatFilterWnd, MacroInfoWnd e GuideWnd** existem só no Interlude. Na P166 o mapa expandido virou parte da `MinimapWnd`, o radar virou `RadarMapWnd` (GFx) e o filtro de chat foi para dentro da `ChatWnd`.
- [O] As variantes `*Classic` (`ClanWndClassic`, `DetailStatusWndClassic`, `SummonedWndClassic`, `InviteClanPopWndClassic`, `UnionDetailWndClassic`, `ClanDrawerWndClassic`) confirmam que a P166 é um cliente "Classic": a pasta de origem no `System\UCC.log:6` é `fafurion classic secret of empire166`, compilação `May 14 2016` (`UCC.log:5`). O comportamento da variante Classic **não** vale como evidência de Interlude sem conferir o `.uc` do Interlude.
- [I] Uma classe com o mesmo nome nas duas versões não quer dizer o mesmo comportamento. A P166 reescreveu quase todas: o `InventoryWnd` tem 5.711 linhas na P166 e 1.261 no Interlude. O 02 descreve o que faz a versão do Interlude e lista à parte o que só a P166 faz.

## 4. Tabela

| Classe (P166) | Tipo | Versão | Evidência | Estado no l2unity | Arquivo do l2unity |
|---|---|---|---|---|---|
| AbilityWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AbnormalStatusWnd | janela | Interlude | `AbnormalStatusWnd.uc` no Interface.u IL | parcial | UI/GameUi.Hud.cs:113-190 |
| ActionWnd | janela | Interlude | `ActionWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:319-336 |
| AdenaDistributionResultWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AdenaDistributionWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AgeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AgitDecoDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AgitDecoWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AITimerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AlchemyItemConversionWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AlchemyMixCubeWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AlchemyOpener | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AlchemySkillCollectionWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AlchemySkillLearnWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AlchemySkillWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AlterSkill | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AlterSkillJump | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AnniveEvent | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AnniveEventLauncher | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| AnnounceMessage | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ArchiveHotLinkWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ArchiveViewWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ArenaCharacterInfoWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| ArenaDualManager | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaMapGuidance | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaMatchGroupWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaMatchWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaPickWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaRankingWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaRevivalWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaScoreBoardHUD | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaScoreBoardWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaSkillUpgrade | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ArenaTutorialWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ArmorEnchantEffectTestWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ArmyTrainingCenterBottomWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ArmyTrainingCenterWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ArtifactEnchantSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ArtifactEnchantWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ArtifactItemListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AttendCheckWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AttributeEnchantWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AttributeRemoveWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AuctionNextWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AuctionWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AutoShotItemWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| AwakeViewWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| BeautyShop | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| BenchMarkMenuWnd | ferramenta | Interlude | `BenchMarkMenuWnd.uc` no Interface.u IL | falta | — |
| BirthdayAlarmBtn | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BirthdayAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BlockCounter | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BlockCurTriggerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BlockCurWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BlockEnterWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BoardWnd | janela | Interlude | `BoardWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:79-122 (janela genérica) |
| BOTsystemWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_CampaignAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_CampaignTopContributorListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_CashShopAPI | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_CashShopBtnWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_CashShopReceiverListAddWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventChristmasWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventDefaultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventFastivalInkWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventFireWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventHalloweenTodayWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventHalloweenWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventHtmlWndA | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventHtmlWndB | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_EventHtmlWndC | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_MiniGameRankWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_MyShopWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_NewBuyingWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_NewCashShopReceiverListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_NewCashShopWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_NewPresentBuyingWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BR_PathWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| BuilderCmdWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CalculatorWnd | janela | Interlude | `CalculatorWnd.uc` no Interface.u IL | falta | — |
| CampaignAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CampaignTopContributorListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CardDrawEventWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| CardExchange | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| CardExchangeB | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| CardExchangeC | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| CardExchangeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CharacterCreateMenuWnd | janela GFx | Interlude (equivalente) | (nativo) criação de personagem: spec 89 | feito | UI/LobbyCreateScreen.cs |
| CharacterPasswordHelpHtmlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CharacterPasswordWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ChatAlertMessage | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| ChatFontsizeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ChatWnd | janela | Interlude | `ChatWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:220-247,536-611; UI/L2Log.cs |
| ClanDrawerWnd | janela | Interlude | `ClanDrawerWnd.uc` no Interface.u IL | falta | — |
| ClanDrawerWndClassic | janela | Interlude (equivalente) | ClanDrawerWnd: variante "Classic" | falta | — |
| ClanGfxWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ClanPledgeBonusDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ClanPledgeBonusDrawerWndClassic | janela | posterior | bônus de clã: posterior | — | — |
| ClanRaidsWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ClanSearch | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ClanShopEditWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ClanShopWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ClanWnd | janela | Interlude | `ClanWnd.uc` no Interface.u IL | falta | UI/GameUi.cs:317 (casca vazia) |
| ClanWndClassic | janela | Interlude (equivalente) | ClanWnd: variante "Classic" do ClanWnd | falta | UI/GameUi.cs:317 (casca vazia) |
| CleftCounter | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CleftCurTriggerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CleftCurWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| CleftEnterWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ColorNickNameWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ConsoleWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ContainerHUD | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ContainerWindow | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ContextMenu | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| CostumeWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| CouponEventWnd | janela | Interlude | `CouponEventWnd.uc` no Interface.u IL | falta | — |
| Credit | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| CrystallizationWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| DamageText | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| DebugWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| DeliverWnd | janela | Interlude | `DeliverWnd.uc` no Interface.u IL | falta | — |
| DepthOfField | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| DetailStatusWnd | janela | Interlude | `DetailStatusWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:502-534 |
| DetailStatusWndClassic | janela | Interlude (equivalente) | DetailStatusWnd: variante "Classic" | parcial | UI/GameUi.cs:502-534 |
| DialogBox | janela | Interlude | `DialogBox.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:716-757 (só OK/Cancel) |
| DominionWarInfoWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| DuelManager | janela | Interlude | `DuelManager.uc` no Interface.u IL | falta | — |
| EffectTester | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| ElementalSpiritWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| EnsoulExtractSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EnsoulExtractWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EnsoulSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EnsoulWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EnvTestWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ErtheiaTestWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EventBalthus | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| EventChristmasWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| EventInfoWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| EventKalie | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| EventMatchGMFenceWnd | janela | Interlude | `EventMatchGMFenceWnd.uc` no Interface.u IL | falta | — |
| EventMatchGMMsgWnd | janela | Interlude | `EventMatchGMMsgWnd.uc` no Interface.u IL | falta | — |
| EventMatchGMWnd | janela | Interlude | `EventMatchGMWnd.uc` no Interface.u IL | falta | — |
| EventMatchObserverWnd | janela | Interlude | `EventMatchObserverWnd.uc` no Interface.u IL | falta | — |
| EventMatchSpecialMsgWnd | janela | Interlude | `EventMatchSpecialMsgWnd.uc` no Interface.u IL | falta | — |
| ExpBar | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| FactionWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| FestivalSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FestivalWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FileListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FileRegisterWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FileWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| Fishing | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| FishViewportWnd | janela | Interlude | `FishViewportWnd.uc` no Interface.u IL | falta | — |
| FlightShipCtrlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FlightTeleportWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| FlightTransformCtrlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| GametipWnd | janela | Interlude | `GametipWnd.uc` no Interface.u IL | parcial | UI/GameTip.cs; UI/LoadingScreen.cs:136-145 |
| GfxDialog | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| GfxScreenMessage | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| GfxScreenMessageBG | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| GMClanWnd | janela | Interlude | `GMClanWnd.uc` no Interface.u IL | falta | — |
| GMDetailStatusWnd | janela | Interlude | `GMDetailStatusWnd.uc` no Interface.u IL | falta | — |
| GMFindTreeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| GMFindTreeWndItem | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| GMInventoryWnd | janela | Interlude | `GMInventoryWnd.uc` no Interface.u IL | falta | — |
| GMMagicSkillWnd | janela | Interlude | `GMMagicSkillWnd.uc` no Interface.u IL | falta | — |
| GMQuestWnd | janela | Interlude | `GMQuestWnd.uc` no Interface.u IL | falta | — |
| GMSnoopWnd | janela | Interlude | `GMSnoopWnd.uc` no Interface.u IL | falta | — |
| GMWarehouseWnd | janela | Interlude | `GMWarehouseWnd.uc` no Interface.u IL | falta | — |
| GMWnd | janela | Interlude | `GMWnd.uc` no Interface.u IL | falta | — |
| HairshopWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| HDRRenderTestWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| HelpHtmlWnd | janela | Interlude | `HelpHtmlWnd.uc` no Interface.u IL | falta | UI/NpcHtmlWnd.cs usa o layout como molde |
| HelpWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| HennaInfoPremiumWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| HennaInfoWnd | janela | Interlude | `HennaInfoWnd.uc` no Interface.u IL | falta | — |
| HennaListWnd | janela | Interlude | `HennaListWnd.uc` no Interface.u IL | falta | — |
| HeroTowerWnd | janela | Interlude | `HeroTowerWnd.uc` no Interface.u IL | falta | — |
| HeroTowerWndWorld | apoio | posterior | script de apoio sem OnLoad | — | — |
| InfoWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| IngameNoticeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| IngameShopWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| IngameWebWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| InstancedZoneHistoryWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| InventoryViewer | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| InventoryWnd | janela | Interlude | `InventoryWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:222-294 |
| InventoryWndCharacterView | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| InviteClanPopWnd | janela | Interlude | `InviteClanPopWnd.uc` no Interface.u IL | falta | — |
| InviteClanPopWndClassic | janela | Interlude (equivalente) | InviteClanPopWnd: variante "Classic" | falta | — |
| ItemAttributeChangeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemDescWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemEnchantWnd | janela | Interlude | `ItemEnchantWnd.uc` no Interface.u IL | falta | — |
| ItemJewelEnchantSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemJewelEnchantWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemLockSubWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemLockWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemLookChangeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ItemUpgrade | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScriptNoneContainer`); o Interlude não tem GFx | — | — |
| JobChangeWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| JobTreeWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| KillpointCounterWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| KillpointRankTrigger | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| KillPointRankWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| L2UIGFxScript | apoio | posterior | script de apoio sem OnLoad | — | — |
| L2UIGFxScriptNoneContainer | apoio | posterior | script de apoio sem OnLoad | — | — |
| L2UIToolTip | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| L2Util | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingAniWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd | janela | Interlude | `LoadingWnd.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_cn | idioma | Interlude | `LoadingWnd_cn.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_de | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_e | idioma | Interlude | `LoadingWnd_e.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_eu | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_fr | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_id | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_j | idioma | Interlude | `LoadingWnd_j.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_k | idioma | Interlude | `LoadingWnd_k.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_ph | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_pl | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_ru | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_th | idioma | Interlude | `LoadingWnd_th.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LoadingWnd_tr | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| LoadingWnd_tw | idioma | Interlude | `LoadingWnd_tw.uc` no Interface.u IL | parcial | UI/LoadingScreen.cs |
| LobbyMenuWnd | janela GFx | Interlude (equivalente) | (nativo) lobby: spec 89 | feito | UI/LobbyCharsScreen.cs |
| Login | janela GFx | Interlude (equivalente) | (nativo) tela de login: no Interlude é C++ (spec 89) | feito | UI/LobbyLoginScreen.cs |
| LogInEula | janela GFx | Interlude (equivalente) | (nativo) EULA: spec 89 | falta | — |
| LogInLoading | janela GFx | Interlude (equivalente) | (nativo) login: spec 89 | falta | — |
| LogInMenu | janela GFx | Interlude (equivalente) | (nativo) tela de login: spec 89 | feito | UI/LobbyLoginScreen.cs |
| LoginServerSelect | janela GFx | Interlude (equivalente) | (nativo) seleção de servidor: spec 89 | feito | UI/LobbyServerScreen.cs |
| LoginSystemMessageWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| LuckyGame | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| MacroEditWnd | janela | Interlude | `MacroEditWnd.uc` no Interface.u IL | falta | — |
| MacroListWnd | janela | Interlude | `MacroListWnd.uc` no Interface.u IL | falta | — |
| MacroPresetWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MagicSkillDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MagicskillGuideWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MagicSkillWnd | janela | Interlude | `MagicSkillWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:297-317 |
| MailBtnWnd | janela | Interlude | `MailBtnWnd.uc` no Interface.u IL | falta | — |
| MainMenu | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| ManorCropInfoChangeWnd | janela | Interlude | `ManorCropInfoChangeWnd.uc` no Interface.u IL | falta | — |
| ManorCropInfoSettingWnd | janela | Interlude | `ManorCropInfoSettingWnd.uc` no Interface.u IL | falta | — |
| ManorCropSellChangeWnd | janela | Interlude | `ManorCropSellChangeWnd.uc` no Interface.u IL | falta | — |
| ManorCropSellWnd | janela | Interlude | `ManorCropSellWnd.uc` no Interface.u IL | falta | — |
| ManorInfoWnd | janela | Interlude | `ManorInfoWnd.uc` no Interface.u IL | falta | — |
| ManorSeedInfoChangeWnd | janela | Interlude | `ManorSeedInfoChangeWnd.uc` no Interface.u IL | falta | — |
| ManorSeedInfoSettingWnd | janela | Interlude | `ManorSeedInfoSettingWnd.uc` no Interface.u IL | falta | — |
| ManorShopWnd | janela | Interlude | `ManorShopWnd.uc` no Interface.u IL | falta | — |
| Menu | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| MenuWnd | janela GFx | Interlude | `MenuWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:281,362-372 |
| MiniGame1Wnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MiniMapGfxWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| MinimapMissionWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MinimapWnd | janela | Interlude | `MinimapWnd.uc` no Interface.u IL | feito | UI/MinimapView.cs:336-610; UI/MinimapModel.cs |
| MonsterArenaResultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MonsterBookDetailedInfo | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MonsterBookWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| MovieCaptureWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MovieCaptureWnd_Expand | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MSProfilerWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MSViewerWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MultiSellWnd | janela | Interlude | `MultiSellWnd.uc` no Interface.u IL | parcial | UI/MultiSellView.cs:172-289 |
| MultiTimer | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MysteriousMansionControlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MysteriousMansionMenuWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MysteriousMansionResultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MysteriousMansionRoomListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| MysteriousMansionStatusWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| NewPetitionFeedBackResultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NewPetitionFeedBackWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NewPetitionFeedBackWnd_2nd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NewPetitionWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NewUserPetitionDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NewUserPetitionWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| NoticeWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| NPCDialogWnd | janela | Interlude (equivalente) | (nativo) HTML de NPC: no Interlude é nativo (NCHtmlViewer, spec 07 §18.2); pacote NpcHtmlMessage no aCis | parcial | UI/NpcHtmlWnd.cs; UI/L2Html.cs |
| NPCViewerWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ObserverWnd | janela | Interlude | `ObserverWnd.uc` no Interface.u IL | falta | — |
| OlympiadArenaListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| OlympiadBuff1Wnd | janela | Interlude | `OlympiadBuff1Wnd.uc` no Interface.u IL | falta | — |
| OlympiadBuff2Wnd | janela | Interlude | `OlympiadBuff2Wnd.uc` no Interface.u IL | falta | — |
| OlympiadBuffWnd | janela | Interlude | `OlympiadBuffWnd.uc` no Interface.u IL | falta | — |
| OlympiadControlWnd | janela | Interlude | `OlympiadControlWnd.uc` no Interface.u IL | falta | — |
| OlympiadGuideWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| OlympiadPlayer1Wnd | janela | Interlude | `OlympiadPlayer1Wnd.uc` no Interface.u IL | falta | — |
| OlympiadPlayer2Wnd | janela | Interlude | `OlympiadPlayer2Wnd.uc` no Interface.u IL | falta | — |
| OlympiadPlayerWnd | janela | Interlude | `OlympiadPlayerWnd.uc` no Interface.u IL | falta | — |
| OlympiadResultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| OlympiadScoreBoardHUD | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| OlympiadTargetWnd | janela | Interlude | `OlympiadTargetWnd.uc` no Interface.u IL | falta | — |
| OlympiadWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| OnScreenMessageWnd | janela | Interlude | `OnScreenMessageWnd.uc` no Interface.u IL | falta | — |
| OptionWnd | janela GFx | Interlude | `OptionWnd.uc` no Interface.u IL | parcial | UI/OptionWnd.cs:10-408 |
| PacketTest | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PartyMatchMakeRoomWnd | janela | Interlude | `PartyMatchMakeRoomWnd.uc` no Interface.u IL | falta | — |
| PartyMatchOutWaitListWnd | janela | Interlude | `PartyMatchOutWaitListWnd.uc` no Interface.u IL | falta | — |
| PartyMatchRoomWnd | janela | Interlude | `PartyMatchRoomWnd.uc` no Interface.u IL | falta | — |
| PartyMatchWaitListWnd | janela | Interlude | `PartyMatchWaitListWnd.uc` no Interface.u IL | falta | — |
| PartyMatchWnd | janela | Interlude | `PartyMatchWnd.uc` no Interface.u IL | falta | — |
| PartyMatchWndCommon | apoio | Interlude | `PartyMatchWndCommon.uc` no Interface.u IL | — | — |
| PartyWnd | janela | Interlude | `PartyWnd.uc` no Interface.u IL | parcial | UI/PartyWnd.cs:321-579 |
| PartyWndArena | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PartyWndCompact | janela | Interlude | `PartyWndCompact.uc` no Interface.u IL | parcial | UI/PartyWnd.cs |
| PartyWndOption | janela | Interlude | `PartyWndOption.uc` no Interface.u IL | feito | UI/PartyWnd.cs:363-380 |
| PCViewerWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PersonalConnectionsDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PersonalConnectionsWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PetitionFeedBackWnd | janela | Interlude | `PetitionFeedBackWnd.uc` no Interface.u IL | falta | — |
| PetitionWnd | janela | Interlude | `PetitionWnd.uc` no Interface.u IL | falta | — |
| PetStatusWnd | janela | Interlude | `PetStatusWnd.uc` no Interface.u IL | falta | — |
| PetWnd | janela | Interlude | `PetWnd.uc` no Interface.u IL | falta | — |
| PlayerAgeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PlayerSkillGauge | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| PledgeCreateWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostBoxWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostDetailWnd_General | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostDetailWnd_SafetyTrade | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostEffectTestWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostReceiverListAddWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostReceiverListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PostWriteWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PremiumItemAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PremiumItemGetWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PrivateMarketWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PrivateShopWnd | janela | Interlude | `PrivateShopWnd.uc` no Interface.u IL | parcial | UI/SocialUi.cs:316-364 (só comprar de outro) |
| PrivateShopWndHistory | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PrivateShopWndReport | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ProductInventoryHelpHtmlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ProductInventoryWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ProgressBox | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PVBuilderCmdWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PVPCounter | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PVPCounterTrigger | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PVPDetailedWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| PVShortcutWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuestAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuestBtnWnd | janela | Interlude | `QuestBtnWnd.uc` no Interface.u IL | falta | — |
| QuestHTMLWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuestListWnd | janela | Interlude | `QuestListWnd.uc` no Interface.u IL | falta | — |
| QuestTreeDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuestTreeWnd | janela | Interlude | `QuestTreeWnd.uc` no Interface.u IL | falta | UI/GameUi.cs:317 (casca vazia) |
| QuestTutorialWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuitReportDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| QuitReportWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| RadarMapWnd | janela GFx | Interlude (equivalente) | RadarWnd / RadarContainerWnd: radar reescrito | falta | — |
| RecipeBookWnd | janela | Interlude | `RecipeBookWnd.uc` no Interface.u IL | falta | — |
| RecipeBuyListWnd | janela | Interlude | `RecipeBuyListWnd.uc` no Interface.u IL | falta | — |
| RecipeBuyManufactureWnd | janela | Interlude | `RecipeBuyManufactureWnd.uc` no Interface.u IL | falta | — |
| RecipeManufactureWnd | janela | Interlude | `RecipeManufactureWnd.uc` no Interface.u IL | falta | — |
| RecipeShopWnd | janela | Interlude | `RecipeShopWnd.uc` no Interface.u IL | falta | — |
| RecipeTreeWnd | janela | Interlude | `RecipeTreeWnd.uc` no Interface.u IL | falta | — |
| RecommendBonusHelpHtmlWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| RecommendBonusWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| RefineryWnd | janela | Interlude | `RefineryWnd.uc` no Interface.u IL | falta | — |
| ReplayListWnd | janela | Interlude | `ReplayListWnd.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd | janela | Interlude | `ReplayLogoWnd.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_cn | idioma | Interlude | `ReplayLogoWnd_cn.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_de | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_e | idioma | Interlude | `ReplayLogoWnd_e.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_eu | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_fr | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_id | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_j | idioma | Interlude | `ReplayLogoWnd_j.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_k | idioma | Interlude | `ReplayLogoWnd_k.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_ph | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_pl | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_ru | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_th | idioma | Interlude | `ReplayLogoWnd_th.uc` no Interface.u IL | falta | — |
| ReplayLogoWnd_tr | idioma | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ReplayLogoWnd_tw | idioma | Interlude | `ReplayLogoWnd_tw.uc` no Interface.u IL | falta | — |
| RestartMenuWnd | janela | Interlude | `RestartMenuWnd.uc` no Interface.u IL | feito | UI/GameUi.Windows.cs:21-56 |
| Sample | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| SceneClipView | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| SceneEditorSlideWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SceneEditorWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SeedShopWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SelectDeliverWnd | janela | Interlude | `SelectDeliverWnd.uc` no Interface.u IL | falta | — |
| SellingAgencyWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ShaderBuild | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SheathingWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ShopDailyLcoinWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ShopWnd | janela | Interlude | `ShopWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:124-191 (janela genérica) |
| Shortcut | janela | Interlude | `Shortcut.uc` no Interface.u IL | parcial | UI/GameUi.Hud.cs:37-96; App.cs:2569-2621 |
| ShortcutWnd | janela | Interlude | `ShortcutWnd.uc` no Interface.u IL | parcial | UI/GameUi.Windows.cs:379-689 |
| ShortcutWndArena | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SiegeInfoWnd | janela | Interlude | `SiegeInfoWnd.uc` no Interface.u IL | falta | — |
| SiegeReportWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SkillLearnWnd | janela | Interlude (equivalente) | SkillTrainListWnd: aprendizado de skill reescrito | falta | — |
| SkillTrainClanTreeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SkillTrainInfoWnd | janela | Interlude | `SkillTrainInfoWnd.uc` no Interface.u IL | falta | — |
| SkillTrainListWnd | janela | Interlude | `SkillTrainListWnd.uc` no Interface.u IL | falta | — |
| SSAOWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| SSQMainBoard | janela | Interlude | `SSQMainBoard.uc` no Interface.u IL | falta | — |
| StatusWnd | janela | Interlude | `StatusWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:209,471-534 |
| SummonedStatusWnd | janela | Interlude | `SummonedStatusWnd.uc` no Interface.u IL | falta | — |
| SummonedWnd | janela | Interlude | `SummonedWnd.uc` no Interface.u IL | falta | — |
| SummonedWndClassic | janela | Interlude (equivalente) | SummonedWnd: variante "Classic" | falta | — |
| SystemMenuWnd | janela | Interlude | `SystemMenuWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:282,373-399 |
| SystemMsgWnd | janela | Interlude | `SystemMsgWnd.uc` no Interface.u IL | feito | UI/GameUi.cs:223,742-747 |
| TargetStatusBuff1Wnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| TargetStatusBuff2Wnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| TargetStatusWnd | janela | Interlude | `TargetStatusWnd.uc` no Interface.u IL | parcial | UI/GameUi.cs:210-214,403-468; UI/TargetStatus.cs |
| TargetStatusWndArena | apoio | posterior | script de apoio sem OnLoad | — | — |
| TeleportBookMarkDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| TeleportBookMarkWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ToDoListClanWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ToDoListWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| TokenTradeWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| Tooltip | janela | Interlude | `ToolTip.uc` no Interface.u IL | parcial | UI/UiTooltip.cs (só texto) |
| ToolTipWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| TownMapWnd | janela | Interlude | `TownMapWnd.uc` no Interface.u IL | parcial | UI/MinimapView.cs (embutido no minimapa) |
| TradeWnd | janela | Interlude | `TradeWnd.uc` no Interface.u IL | parcial | UI/SocialUi.cs:195-314 (janela genérica) |
| TutorialBtnWnd | janela | Interlude | `TutorialBtnWnd.uc` no Interface.u IL | falta | — |
| TutorialViewerWnd | janela | Interlude | `TutorialViewerWnd.uc` no Interface.u IL | falta | — |
| UICommandWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UICommonAPI | apoio | Interlude | `UICommonAPI.uc` no Interface.u IL | — | — |
| UIConstants | apoio | posterior | script de apoio sem OnLoad | — | — |
| UIData | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIDebugWnd | janela GFx | posterior | Scaleform/GFx (`extends GFxUIScript`); o Interlude não tem GFx | — | — |
| UIEasyLoginWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIEditor_ControlManager | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIEditor_DocumentInfo | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIEditor_FileManager | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIEditor_PropertyController | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIEditor_Worksheet | apoio | posterior | script de apoio sem OnLoad | — | — |
| UIHtmlToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIItemToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIOpenToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIPowerToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIQuestToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UISearchMapWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIServerHtmlToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UISysMsgToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UIToolWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UnionDetailWnd | janela | Interlude | `UnionDetailWnd.uc` no Interface.u IL | falta | — |
| UnionDetailWndClassic | apoio | Interlude (equivalente) | UnionDetailWnd: variante "Classic" | — | — |
| UnionMatchDrawerWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UnionMatchMakeRoomWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UnionMatchWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UnionWnd | janela | Interlude | `UnionWnd.uc` no Interface.u IL | falta | — |
| UniversalToolTip | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| UnrefineryWnd | janela | Interlude | `UnrefineryWnd.uc` no Interface.u IL | falta | — |
| UserAlertMessage | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| UserPetitionWnd | janela | Interlude | `UserPetitionWnd.uc` no Interface.u IL | falta | — |
| ViewPortCostumeWnd | apoio | posterior | script de apoio sem OnLoad | — | — |
| ViewPortElementalSpirit | apoio | posterior | script de apoio sem OnLoad | — | — |
| ViewPortWndArena | apoio | posterior | script de apoio sem OnLoad | — | — |
| ViewPortWndBase | apoio | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ViewPortWndEffect | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ViewPortWndMonster | apoio | posterior | script de apoio sem OnLoad | — | — |
| VipInfoWnd | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| W24HzWnd | ferramenta | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| WarehouseWnd | janela | Interlude | `WarehouseWnd.uc` no Interface.u IL | falta | — |
| WeatherWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| WebBrowserWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| WebPetitionWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| WorldChatBox | janela GFx | posterior | Scaleform/GFx (`extends L2UIGFxScript`); o Interlude não tem GFx | — | — |
| WorldOlympiadResultWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| XMasSealWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ZoneQuestAlarmWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ZoneQuestSituationWnd | janela | posterior | ausente no Interface.u IL (142 classes) e no xdat (140 janelas) | — | — |
| ZoneTitleWnd | janela | Interlude | `ZoneTitleWnd.uc` no Interface.u IL | feito | UI/ZoneTitleWnd.cs:8-55 |
| ChatFilterWnd | só IL | Interlude | `ChatFilterWnd.uc` no Interface.u IL; sem classe na P166 | feito | UI/GameUi.cs:249-272,613-739; UI/ChatFilter.cs |
| GuideWnd | só IL | Interlude | `GuideWnd.uc` no Interface.u IL; sem classe na P166 | falta | — |
| MacroInfoWnd | só IL | Interlude | `MacroInfoWnd.uc` no Interface.u IL; sem classe na P166 | falta | — |
| MainWnd | só IL | Interlude | `MainWnd.uc` no Interface.u IL; sem classe na P166 | feito | UI/GameUi.cs:317-360 |
| MinimapWnd_Expand | só IL | Interlude | `MinimapWnd_Expand.uc` no Interface.u IL; sem classe na P166 | feito | UI/MinimapView.cs |
| PCCafeEventWnd | só IL | Interlude | `PCCafeEventWnd.uc` no Interface.u IL; sem classe na P166 | falta | — |
| RadarContainerWnd | só IL | Interlude | `RadarContainerWnd.uc` no Interface.u IL; sem classe na P166 | parcial | UI/GameUi.Hud.cs:219-245; UI/RadarView.cs |
| RadarWnd | só IL | Interlude | `RadarWnd.uc` no Interface.u IL; sem classe na P166 | parcial | UI/RadarView.cs (a RadarWnd do xdat não é usada) |
| TeaserSlideWnd | só IL | Interlude | `TeaserSlideWnd.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_cn | só IL | Interlude | `TeaserSlideWnd_cn.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_e | só IL | Interlude | `TeaserSlideWnd_e.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_j | só IL | Interlude | `TeaserSlideWnd_j.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_ph | só IL | Interlude | `TeaserSlideWnd_ph.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_th | só IL | Interlude | `TeaserSlideWnd_th.uc` no Interface.u IL; sem classe na P166 | falta | — |
| TeaserSlideWnd_tw | só IL | Interlude | `TeaserSlideWnd_tw.uc` no Interface.u IL; sem classe na P166 | falta | — |
| AudioTab | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | parcial | UI/OptionWnd.cs:10-408 |
| CropInfoWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| DefaultInfoWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| EventMatchGMCommandWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| GameTab | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | parcial | UI/OptionWnd.cs:10-408 |
| movingtext | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | parcial | UI/GameUi.Hud.cs:219-245; UI/RadarView.cs |
| OnScreenMessageWnd1 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd2 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd3 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd4 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd5 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd6 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd7 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| OnScreenMessageWnd8 | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SeedInfoWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SSQMainEventWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SSQSealStatusWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SSQStatusWnd | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SubWndEnchant | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| SubWndNormal | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | falta | — |
| VideoTab | só xdat IL | Interlude | janela do Interface.xdat IL sem classe própria (script da janela-mãe) | parcial | UI/OptionWnd.cs:10-408 |
