# Pedido 0034 — Pacotes que a revisão da UI achou faltando

| Campo | Valor |
|---|---|
| De | ui (tarefa #0047) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em ordem de impacto. Cada item diz o que a UI já faz e o que ela espera do `Scripts\Net`. Os formatos são os da spec 94/95; confirme no aCis antes de fechar.

1. **UserInfo 0x04: guardar no `u.Stats` o que hoje é pulado** (`GamePackets.ParseUserInfo`):
   - `relation` (`:624`);
   - `clanPrivileges` (`:635`);
   - `recomLeft` e `recomHave` (`:636-637`);
   - `inventoryLimit` (`:639`);
   - `noble` e `hero` (`:647-648`).

   Sem isso, o `GameUi.SetUser` nunca dispara o `EV_ClanMyAuth` (testa `Stats.ContainsKey("clanPrivileges")`). O líder do clã fica sem convidar, sem editar graus e sem guerra. O HeroBtn (`ClanView.Me`) nunca aparece, e a DetailStatusWnd fica sem Sociality/Votes.
2. **Encantamento de skill:** ExEnchantSkillList FE:17 → `EV_SkillTrainListWndShow` (Type de encantamento) + `EV_SkillTrainListWndAddSkill`, e ExEnchantSkillInfo FE:18 → `EV_SkillTrainInfoWndShow` com `strEnchantDesc`, `iPercent`, SP/EXP e o item. Envios RequestExEnchantSkillInfo D0:06 e RequestExEnchantSkill D0:07. Hoje o nó de encantamento só esconde a lista e o Learn não manda nada (`SkillHennaView.cs:97-99,196-198`).
3. **Loja privada:**
   - em `InterfaceEvents.PrivateStoreBuyList`/`Item`, mandar `reserved` = `Limit` (o máximo que a loja de compra aceita). Sem isso, vender qualquer quantidade dá sm1036 (`PrivateShopScript.TradeOk`);
   - em `SocialPackets.ParsePrivateStoreSell`, guardar type2, bodyPart e o preço de referência. Sem eles, comprar parte de uma pilha não pede a quantidade e o aviso sm569 não aparece.
4. **Petição:** `RequestPetition` 0x7f `cSd` (texto, tipo) e `RequestPetitionCancel` 0x80 (a spec 95 lista `cS`; confira o que o aCis lê). Estão provisórios em `UI/PetitionView.cs` (`PetitionScript.RequestPetition`/`RequestPetitionCancel`); quando entrarem na Net, a UI troca a chamada. Para a `PetitionWnd` (conversa com o GM), faltam os recebidos que geram `EV_ShowPetitionWnd`, `EV_PetitionChatMessage` e `EV_EnablePetitionFeedback`.
5. **Recarga:** SkillCoolTime 0xC1 (`{skillId, level, reuse, remaining}`, mandado no EnterWorld) → um callback ou evento com o id e os tempos. A UI tem `GameUi.SetReuse(skillId, ms)`, que hoje só é chamado pelo MagicSkillUse. Com o 0xC1, a varredura da barra aparece também para as recargas que vêm do login.
6. **Community Board, escrever:** `RequestBBSwrite` 0x22 `cSSSSSS`, para os formulários do board com `action="write …"` (memo, correio). A UI acrescenta a ação no `L2Html` quando o pacote existir.
7. **UnionWnd:** o pacote que pede a informação do canal de comando (`CommandChannelAPI.RequestCommandChannelInfo`, `UnionWnd.uc:136-144`). Sem ele a janela abre vazia. A revisão C indica o user command 97 como candidato; valide.
8. **Radar e minimapa:**
   - ExSetCompassZoneCode → `EV_SetRadarZoneCode` (`ZoneCode`): o aviso "Peaceful Zone/PvP Zone" e a cor do radar (`RadarWnd.uc:34-222`);
   - RadarControl 0xeb e ShowRadar 0xa4 → `EV_RadarAddTarget`/`DeleteAllTarget` e `EV_MinimapAddTarget`/`DeleteAllTarget` (X, Y, Z): o alvo de quest no minimapa (`MinimapWnd.uc:227-265`).

## Por quê

Ver `Docs/revisao_ui.md` (branch `feat/ui-revisao`), coluna "Precisa de". Os itens 1 a 3 quebram funções que o jogador usa: o líder não administra o clã, não dá para encantar skill e a loja de compra não aceita venda. Os itens 4 a 8 deixam janelas incompletas.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
