// Pacote -> EV_* das janelas da interface (#0046), como o UI/PacketEvents.cs faz para os pacotes do HUD: cada funcao recebe
// o pacote ja lido e devolve os eventos na ordem do nativo. Eventos e tratadores por pacote: spec 96 (game_map.json); chaves
// do param: as que o script le (spec 90, events_script.json) e as que o NWindow.dll escreve (spec 91). Quem entrega ao
// barramento e o InterfaceRouter.
//
// Itens: o original manda o ItemInfo inteiro (nome, icone, peso... dos .dat do cliente); aqui o param leva so os campos que
// vem no pacote (Item), e a janela completa o resto pelo classID com os dados do cliente.
using System.Collections.Generic;
using L2Web.UI;

namespace L2Web.Net
{
    public static class InterfaceEvents
    {
        static PacketEvents.Event E(int id, string p = "") => new PacketEvents.Event(id, p);

        static string P(string p, string key, int v) => L2Param.Add(p, key, v);
        static string P(string p, string key, string v) => L2Param.Add(p, key, v);
        static string P(string p, string key, long v) => L2Param.Add(p, key, v.ToString());

        /// <summary>
        /// Campos de item que vem no pacote, com as chaves do ItemInfo (ParamToItemInfo, spec 90): classID, serverID, itemNum,
        /// itemType (type2), slotBitType, enchanted, damaged (customType1), equipped, refineryOp1/2 (aumento, 16 bits cada) e
        /// currentDurability (mana). price, defaultPrice e reserved (dbID do armazem e do frete) so onde o pacote os traz.
        /// </summary>
        public static string Item(string p, InvItem it)
        {
            p = P(p, "classID", it.ItemId);
            p = P(p, "serverID", it.ObjectId);
            p = P(p, "itemNum", it.Count);
            p = P(p, "itemType", it.Type2);
            p = P(p, "slotBitType", it.BodyPart);
            p = P(p, "enchanted", it.Enchant);
            p = P(p, "damaged", it.CustomType1);
            p = P(p, "equipped", it.Equipped ? 1 : 0);
            p = P(p, "refineryOp1", it.Augmentation & 0xffff);
            p = P(p, "refineryOp2", (it.Augmentation >> 16) & 0xffff);
            p = P(p, "currentDurability", it.Mana);
            if (it.Price != null) p = P(p, "price", it.Price.Value);
            if (it.DefaultPrice != null) p = P(p, "defaultPrice", it.DefaultPrice.Value);
            if (it.Reserved != null) p = P(p, "reserved", it.Reserved.Value);
            return p;
        }

        // ---------------------------------------------------------------- armazem, frete e loja privada (T6/T12/T18)

        /// <summary>
        /// WarehouseDepositList (0x41) / WithdrawList (0x42): o deposito fecha o inventario (EV_InventoryHideWindow), depois
        /// EV_WarehouseOpenWindow (type deposit/withdraw, category, adena) e um EV_WarehouseAddItem por item.
        /// </summary>
        public static List<PacketEvents.Event> Warehouse(WarehouseListInfo w)
        {
            var o = new List<PacketEvents.Event>();
            if (w.Deposit) o.Add(E(Ev.EV_InventoryHideWindow));
            var p = P("", "type", w.Deposit ? "deposit" : "withdraw");
            p = P(p, "category", w.Category);
            o.Add(E(Ev.EV_WarehouseOpenWindow, P(p, "adena", w.Adena)));
            foreach (var it in w.Items) o.Add(E(Ev.EV_WarehouseAddItem, Item("", it)));
            return o;
        }

        /// <summary>ExStorageMaxCount (FE:2e): EV_SetMaxCount com os 7 limites (chaves do NWindow.dll, spec 91).</summary>
        public static List<PacketEvents.Event> StorageMaxCount(StorageMaxCountInfo m)
        {
            var p = P("", "inventory", m.Inventory);
            p = P(p, "warehousePrivate", m.WarehousePrivate);
            p = P(p, "warehouseClan", m.WarehouseClan);
            p = P(p, "privateShopSell", m.PrivateShopSell);
            p = P(p, "privateShopBuy", m.PrivateShopBuy);
            p = P(p, "dwarvenRecipe", m.DwarvenRecipe);
            p = P(p, "recipe", m.Recipe);
            return new List<PacketEvents.Event> { E(Ev.EV_SetMaxCount, p) };
        }

        /// <summary>PackageToList (0xc2): EV_SelectDeliverClear e um EV_SelectDeliverAddName (name, id) por personagem.</summary>
        public static List<PacketEvents.Event> PackageToList(List<DeliverTarget> l)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_SelectDeliverClear) };
            foreach (var t in l) o.Add(E(Ev.EV_SelectDeliverAddName, P(P("", "name", t.Name), "id", t.ObjectId)));
            return o;
        }

        /// <summary>PackageSendableList (0xc3): EV_DeliverOpenWindow (adena, destinationID) e um EV_DeliverAddItem por item.</summary>
        public static List<PacketEvents.Event> PackageSendableList(PackageSendableListInfo s)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_DeliverOpenWindow, P(P("", "adena", s.Adena), "destinationID", s.TargetId)) };
            foreach (var it in s.Items) o.Add(E(Ev.EV_DeliverAddItem, Item("", it)));
            return o;
        }

        static PacketEvents.Event ShopOpen(string type, int adena, int userId, bool bulk)
        {
            var p = P("", "type", type);
            p = P(p, "adena", adena);
            p = P(p, "userID", userId);
            return E(Ev.EV_PrivateShopOpenWindow, P(p, "bulk", bulk ? 1 : 0));
        }

        static PacketEvents.Event ShopItem(string target, InvItem it) => E(Ev.EV_PrivateShopAddItem, Item(P("", "target", target), it));

        /// <summary>
        /// PrivateStoreManageListSell (0x9a) / ManageListBuy (0xb7): EV_PrivateShopOpenWindow (type sellList/buyList), o
        /// inventario em topList e a loja em bottomList (PrivateShopWnd: PT_SellList / PT_BuyList).
        /// </summary>
        public static List<PacketEvents.Event> PrivateStoreManage(PrivateStoreManageInfo m)
        {
            var o = new List<PacketEvents.Event> { ShopOpen(m.Sell ? "sellList" : "buyList", m.Adena, m.OwnerId, m.PackageSale) };
            foreach (var it in m.Inventory) o.Add(ShopItem("topList", it));
            foreach (var it in m.Store) o.Add(ShopItem("bottomList", it));
            return o;
        }

        /// <summary>PrivateStoreListBuy (0xb8): vender para a loja de compra de outro (type sell, PT_Sell), os pedidos em topList.</summary>
        public static List<PacketEvents.Event> PrivateStoreBuyList(PrivateStoreBuyListInfo b)
        {
            var o = new List<PacketEvents.Event> { ShopOpen("sell", b.Adena, b.OwnerId, false) };
            foreach (var it in b.Items) o.Add(ShopItem("topList", it));
            return o;
        }

        // ---------------------------------------------------------------- pet e servo (T7, spec 06 §13)

        /// <summary>PetStatusShow (0xb0, OnShowPetStatusWnd): EV_PetWndShow (pet) ou EV_SummonedWndShow (servo).</summary>
        public static List<PacketEvents.Event> PetStatusShow(PetStatusShowInfo s) =>
            new() { E(s.SummonType == 2 ? Ev.EV_SummonedWndShow : Ev.EV_PetWndShow) };

        /// <summary>
        /// PetInfo (0xb1): EV_UpdatePetInfo (a janela le os dados por GetPetInfo); no primeiro PetInfo do invocado, mostra o
        /// PetStatusWnd/SummonedStatusWnd (OnShowPetPartyWnd); pet sem nome: EV_PetWndShowNameBtn Show=1 (FUN_1042e430).
        /// </summary>
        public static List<PacketEvents.Event> PetInfo(PetInfo p, bool first)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_UpdatePetInfo) };
            if (p.SummonType == 1 && string.IsNullOrEmpty(p.Name)) o.Add(E(Ev.EV_PetWndShowNameBtn, P("", "Show", 1)));
            if (first) o.Add(E(p.SummonType == 2 ? Ev.EV_SummonedStatusShow : Ev.EV_PetStatusShow));
            return o;
        }

        /// <summary>PetItemList (0xb2): EV_PetInventoryItemStart e um EV_PetInventoryItemList por item.</summary>
        public static List<PacketEvents.Event> PetItemList(PetItemListInfo l)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_PetInventoryItemStart) };
            foreach (var it in l.Items) o.Add(E(Ev.EV_PetInventoryItemList, Item("", it)));
            return o;
        }

        /// <summary>PetInventoryUpdate (0xb3): um EV_PetInventoryItemUpdate por item, com WorkType (1 add, 2 modificado, 3 removido).</summary>
        public static List<PacketEvents.Event> PetInventoryUpdate(PetInventoryUpdateInfo u)
        {
            var o = new List<PacketEvents.Event>();
            foreach (var it in u.Items) o.Add(E(Ev.EV_PetInventoryItemUpdate, Item(P("", "WorkType", it.Change ?? 0), it)));
            return o;
        }

        /// <summary>PetStatusUpdate (0xb5): EV_UpdatePetInfo.</summary>
        public static List<PacketEvents.Event> PetStatusUpdate() => new() { E(Ev.EV_UpdatePetInfo) };

        /// <summary>PetDelete (0xb6, OnHidePetWnd): EV_PetSummonedStatusClose.</summary>
        public static List<PacketEvents.Event> PetDelete() => new() { E(Ev.EV_PetSummonedStatusClose) };

        /// <summary>SetSummonRemainTime (0xd1): EV_SummonedStatusRemainTime (RemainTime, MaxTime).</summary>
        public static List<PacketEvents.Event> SummonRemainTime(SummonRemainTimeInfo t) =>
            new() { E(Ev.EV_SummonedStatusRemainTime, P(P("", "RemainTime", t.RemainTime), "MaxTime", t.MaxTime)) };

        /// <summary>
        /// PartySpelled (0xee): servo (2) -> EV_SummonedStatusSpelledList, pet (1) -> EV_PetStatusSpelledList (Max, SkillID_i);
        /// membro do grupo (0) -> EV_PartySpelledList (ID, Max, SkillID_i, Level_i).
        /// </summary>
        public static List<PacketEvents.Event> PartySpelled(PartySpelledInfo s)
        {
            var p = s.Type == 0 ? P("", "ID", s.ObjectId) : "";
            p = P(p, "Max", s.Effects.Count);
            for (var i = 0; i < s.Effects.Count; i++)
            {
                p = P(p, "SkillID_" + i, s.Effects[i].SkillId);
                if (s.Type == 0) p = P(p, "Level_" + i, s.Effects[i].Level);
            }
            var ev = s.Type switch { 2 => Ev.EV_SummonedStatusSpelledList, 1 => Ev.EV_PetStatusSpelledList, _ => Ev.EV_PartySpelledList };
            return new() { E(ev, p) };
        }

        // ---------------------------------------------------------------- quests e cla (T13/T14)

        /// <summary>QuestList (0x80): EV_QuestListStart, um EV_QuestList (QuestID, Level = cond, Completed) por quest e EV_QuestListEnd.</summary>
        public static List<PacketEvents.Event> QuestList(List<QuestInfo> l)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_QuestListStart) };
            foreach (var q in l)
            {
                var p = P(P("", "QuestID", q.QuestId), "Level", q.Cond);
                o.Add(E(Ev.EV_QuestList, P(p, "Completed", 0)));
            }
            o.Add(E(Ev.EV_QuestListEnd));
            return o;
        }

        static string ClanHeader(string p, PledgeInfoHeader h)
        {
            p = P(p, "ClanID", h.ClanId);
            p = P(p, "CrestID", h.CrestId);
            p = P(p, "SkillLevel", h.Level);
            p = P(p, "CastleID", h.CastleId);
            p = P(p, "AgitID", h.AgitId);
            p = P(p, "ClanRank", h.Rank);
            p = P(p, "ClanNameValue", h.Reputation);
            p = P(p, "Status", h.Status);
            p = P(p, "Guilty", h.Guilty);
            p = P(p, "AllianceID", h.AllyId);
            p = P(p, "AllianceName", h.AllyName);
            p = P(p, "AllianceCrestID", h.AllyCrestId);
            return P(p, "InWar", h.AtWar ? 1 : 0);
        }

        static string Member(string p, PledgeMember m)
        {
            p = P(p, "Name", m.Name);
            p = P(p, "Level", m.Level);
            p = P(p, "Class", m.ClassId);
            p = P(p, "Gender", m.Sex);
            p = P(p, "Race", m.Race);
            return P(p, "ID", m.ObjectId);
        }

        /// <summary>
        /// PledgeShowMemberListAll (0x53): EV_ClanInfo (ClanType = tipo da unidade, nome, lider e o cabecalho) e um
        /// EV_ClanAddMemberMultiple (ClanType, Name, Level, Class, Gender, Race, ID, HaveMaster) por membro.
        /// </summary>
        public static List<PacketEvents.Event> PledgeShowMemberListAll(PledgeShowMemberListAllInfo a)
        {
            var p = P("", "ClanType", a.PledgeType);
            p = P(p, "ClanName", a.ClanName);
            p = P(p, "ClanMasterName", a.LeaderName);
            var o = new List<PacketEvents.Event> { E(Ev.EV_ClanInfo, ClanHeader(p, a.Info)) };
            foreach (var m in a.Members) o.Add(E(Ev.EV_ClanAddMemberMultiple, P(Member(P("", "ClanType", a.PledgeType), m), "HaveMaster", m.HaveMaster ? 1 : 0)));
            return o;
        }

        /// <summary>PledgeShowMemberListUpdate (0x54): EV_ClanMemberInfoUpdate (membro, PledgeType, HaveMaster).</summary>
        public static List<PacketEvents.Event> PledgeMemberUpdate(PledgeMember m) =>
            new() { E(Ev.EV_ClanMemberInfoUpdate, P(P(Member("", m), "PledgeType", m.PledgeType), "HaveMaster", m.HaveMaster ? 1 : 0)) };

        /// <summary>PledgeShowMemberListAdd (0x55): EV_ClanAddMember (membro, ClanType).</summary>
        public static List<PacketEvents.Event> PledgeMemberAdd(PledgeMember m) => new() { E(Ev.EV_ClanAddMember, P(Member("", m), "ClanType", m.PledgeType)) };

        /// <summary>PledgeShowMemberListDelete (0x56): EV_ClanDeleteMember (Name).</summary>
        public static List<PacketEvents.Event> PledgeMemberDelete(string name) => new() { E(Ev.EV_ClanDeleteMember, P("", "Name", name)) };

        /// <summary>PledgeShowMemberListDeleteAll (0x82): EV_ClanDeleteAllMember.</summary>
        public static List<PacketEvents.Event> PledgeMemberDeleteAll() => new() { E(Ev.EV_ClanDeleteAllMember) };

        /// <summary>PledgeShowInfoUpdate (0x88): EV_ClanInfoUpdate com o cabecalho.</summary>
        public static List<PacketEvents.Event> PledgeInfoUpdate(PledgeInfoHeader h) => new() { E(Ev.EV_ClanInfoUpdate, ClanHeader("", h)) };

        /// <summary>Privilegios do grau em PowerValue0..31 (um bit cada; ClanDrawerWnd le os 32).</summary>
        static string Powers(string p, int privileges)
        {
            for (var i = 0; i < 32; i++) p = P(p, "PowerValue" + i, (privileges >> i) & 1);
            return p;
        }

        /// <summary>ManagePledgePower (0x30): EV_ClanAuth (GradeID, Command, PowerValue0..31).</summary>
        public static List<PacketEvents.Event> ManagePledgePower(PledgePowerInfo m) =>
            new() { E(Ev.EV_ClanAuth, Powers(P(P("", "GradeID", m.Grade), "Command", m.Action), m.Privileges)) };

        /// <summary>PledgeReceivePowerInfo (FE:3c): EV_ClanAuthMember (Grade, Name, PowerValue0..31).</summary>
        public static List<PacketEvents.Event> PledgePowerMember(PledgePowerInfo m) =>
            new() { E(Ev.EV_ClanAuthMember, Powers(P(P("", "Grade", m.Grade), "Name", m.Name), m.Privileges)) };

        /// <summary>PledgePowerGradeList (FE:3b): EV_ClanAuthGradeList (Count, GradeID{i}, GradeMemberCount{i}).</summary>
        public static List<PacketEvents.Event> PledgePowerGradeList(List<(int Grade, int Members)> l)
        {
            var p = P("", "Count", l.Count);
            for (var i = 0; i < l.Count; i++) p = P(P(p, "GradeID" + i, l[i].Grade), "GradeMemberCount" + i, l[i].Members);
            return new() { E(Ev.EV_ClanAuthGradeList, p) };
        }

        /// <summary>PledgeReceiveMemberInfo (FE:3d): EV_ClanMemberInfo (ClanType, Name, NickName, GradeID, OrderName, MasterName).</summary>
        public static List<PacketEvents.Event> PledgeMemberInfo(PledgeMemberDetail d)
        {
            var p = P("", "ClanType", d.PledgeType);
            p = P(p, "Name", d.Name);
            p = P(p, "NickName", d.Title);
            p = P(p, "GradeID", d.Grade);
            p = P(p, "OrderName", d.OrderName);
            return new() { E(Ev.EV_ClanMemberInfo, P(p, "MasterName", d.MasterName)) };
        }

        /// <summary>PledgeReceiveWarList (FE:3e): um EV_ClanWarList (Page, ClanName, Type, Period) por cla.</summary>
        public static List<PacketEvents.Event> PledgeWarList(PledgeWarListInfo w)
        {
            var o = new List<PacketEvents.Event>();
            foreach (var c in w.Wars) o.Add(E(Ev.EV_ClanWarList, P(P(P(P("", "Page", w.Page), "ClanName", c.ClanName), "Type", c.Type), "Period", c.Period)));
            return o;
        }

        /// <summary>PledgeReceiveSubPledgeCreated (FE:3f): EV_ClanSubClanUpdated (ClanID, ClanType, ClanName, MasterName).</summary>
        public static List<PacketEvents.Event> SubPledgeCreated(SubPledgeInfo s) =>
            new() { E(Ev.EV_ClanSubClanUpdated, P(P(P(P("", "ClanID", s.ClanId), "ClanType", s.PledgeType), "ClanName", s.Name), "MasterName", s.LeaderName)) };

        /// <summary>PledgeSkillList (FE:39): EV_ClanSkillList (Count, SkillID{i}, SkillLevel{i}).</summary>
        public static List<PacketEvents.Event> PledgeSkillList(List<(int Id, int Level)> l)
        {
            var p = P("", "Count", l.Count);
            for (var i = 0; i < l.Count; i++) p = P(P(p, "SkillID" + i, l[i].Id), "SkillLevel" + i, l[i].Level);
            return new() { E(Ev.EV_ClanSkillList, p) };
        }

        /// <summary>PledgeSkillListAdd (FE:3a): EV_ClanSkillListAdd (SkillID, SkillLevel).</summary>
        public static List<PacketEvents.Event> PledgeSkillAdd((int Id, int Level) s) =>
            new() { E(Ev.EV_ClanSkillListAdd, P(P("", "SkillID", s.Id), "SkillLevel", s.Level)) };

        // ---------------------------------------------------------------- aprender skill e tatuagem (T15)
        // Nome, icone e descricao da skill, do item e da tatuagem (strName, strIconName, Name, IconName, DyeName...) vem dos .dat
        // do cliente: a janela completa pelo id. ClassID no EV_SkillTrainInfoWndAddExtendInfo e chave a mais do l2unity (o
        // original resolve o item no nativo).

        /// <summary>AcquireSkillList (0x8a): EV_SkillTrainListWndShow (Type) e um EV_SkillTrainListWndAddSkill (iID, iLevel, iSPConsume) por skill.</summary>
        public static List<PacketEvents.Event> AcquireSkillList(AcquireSkillListInfo l)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_SkillTrainListWndShow, P("", "Type", l.Type)) };
            foreach (var s in l.Skills) o.Add(E(Ev.EV_SkillTrainListWndAddSkill, P(P(P("", "iID", s.Id), "iLevel", s.Level), "iSPConsume", s.SpCost)));
            return o;
        }

        /// <summary>
        /// AcquireSkillInfo (0x8b): EV_SkillTrainInfoWndShow (Type, iID, iLevel, iSPConsume) e um EV_SkillTrainInfoWndAddExtendInfo
        /// (iNumOfItem, ClassID) por item exigido.
        /// </summary>
        public static List<PacketEvents.Event> AcquireSkillInfo(AcquireSkillInfoInfo s)
        {
            var p = P("", "Type", s.Mode);
            p = P(p, "iID", s.Id);
            p = P(p, "iLevel", s.Level);
            var o = new List<PacketEvents.Event> { E(Ev.EV_SkillTrainInfoWndShow, P(p, "iSPConsume", s.SpCost)) };
            foreach (var q in s.Requirements) o.Add(E(Ev.EV_SkillTrainInfoWndAddExtendInfo, P(P("", "iNumOfItem", q.Count), "ClassID", q.ItemId)));
            return o;
        }

        /// <summary>AcquireSkillDone (0x8e): fecha o SkillTrainInfoWnd e o SkillTrainListWnd.</summary>
        public static List<PacketEvents.Event> AcquireSkillDone() => new() { E(Ev.EV_SkillTrainInfoWndHide), E(Ev.EV_SkillTrainListWndHide) };

        static string Henna(string p, HennaEntry h)
        {
            p = P(p, "HennaID", h.HennaId);
            p = P(p, "ClassID", h.DyeId);
            p = P(p, "NumOfItem", h.Count);
            return P(p, "Fee", h.Fee);
        }

        /// <summary>
        /// HennaEquipList (0xe2) / HennaRemoveList (0xe5): EV_HennaListWndShowHideEquip/UnEquip (Adena) e um
        /// EV_HennaListWndAddHennaEquip/UnEquip (HennaID, ClassID, NumOfItem, Fee) por tatuagem.
        /// </summary>
        public static List<PacketEvents.Event> HennaList(HennaListInfo l)
        {
            var o = new List<PacketEvents.Event> { E(l.Equip ? Ev.EV_HennaListWndShowHideEquip : Ev.EV_HennaListWndShowHideUnEquip, P("", "Adena", l.Adena)) };
            foreach (var h in l.Hennas) o.Add(E(l.Equip ? Ev.EV_HennaListWndAddHennaEquip : Ev.EV_HennaListWndAddHennaUnEquip, Henna("", h)));
            return o;
        }

        /// <summary>HennaItemInfo (0xe3) / HennaItemRemoveInfo (0xe6): EV_HennaInfoWndShowHideEquip/UnEquip com a tatuagem e XXnow/XXchange.</summary>
        public static List<PacketEvents.Event> HennaItemInfo(HennaItemInfo h)
        {
            var p = Henna(P("", "Adena", h.Adena), h.Henna);
            for (var i = 0; i < 6; i++) p = P(P(p, SkillTrainPackets.HennaStats[i] + "now", h.Now[i]), SkillTrainPackets.HennaStats[i] + "change", h.Change[i]);
            return new() { E(h.Equip ? Ev.EV_HennaInfoWndShowHideEquip : Ev.EV_HennaInfoWndShowHideUnEquip, p) };
        }

        /// <summary>
        /// HennaInfo (0xe4): EV_UpdateHennaInfo com o bonus somado em XXchange (agregado ou por tatuagem: a validar, spec 06 §14) e um
        /// EV_InventoryAddHennaInfo (ID, bActive) por tatuagem (chaves do NWindow.dll).
        /// </summary>
        public static List<PacketEvents.Event> HennaInfo(HennaInfo h)
        {
            var p = "";
            for (var i = 0; i < 6; i++) p = P(p, SkillTrainPackets.HennaStats[i] + "change", h.Stats[i]);
            var o = new List<PacketEvents.Event> { E(Ev.EV_UpdateHennaInfo, p) };
            foreach (var (id, active) in h.Hennas) o.Add(E(Ev.EV_InventoryAddHennaInfo, P(P("", "ID", id), "bActive", active ? 1 : 0)));
            return o;
        }

        // ---------------------------------------------------------------- macro (T8)

        /// <summary>SendMacroList (0xe7) com a revisao completa: EV_MacroUpdate (o MacroListWnd pede a lista de novo).</summary>
        public static List<PacketEvents.Event> MacroUpdate() => new() { E(Ev.EV_MacroUpdate) };

        /// <summary>Macros que sumiram entre duas revisoes completas: EV_MacroDeleted (MacroID) para o MacroEditWnd fechar.</summary>
        public static List<PacketEvents.Event> MacroDeleted(IEnumerable<int> ids)
        {
            var o = new List<PacketEvents.Event>();
            foreach (var id in ids) o.Add(E(Ev.EV_MacroDeleted, P("", "MacroID", id)));
            return o;
        }

        /// <summary>
        /// RequestMacroList do script (nativo, sem pacote): EV_MacroList com Max e, por macro, ID_i, IconName_i (acronimo),
        /// MacroName_i, Description_i e TextureName_i (spec 05 §6.2, MacroListWnd.uc:135-187).
        /// </summary>
        public static PacketEvents.Event MacroList(MacroBook book)
        {
            var p = P("", "Max", book.Macros.Count);
            var i = 0;
            foreach (var m in book.Macros.Values)
            {
                p = P(p, "ID_" + i, m.Id);
                p = P(p, "IconName_" + i, m.Acronym);
                p = P(p, "MacroName_" + i, m.Name);
                p = P(p, "Description_" + i, m.Description);
                p = P(p, "TextureName_" + i, m.TextureName);
                i++;
            }
            return E(Ev.EV_MacroList, p);
        }
    }
}
