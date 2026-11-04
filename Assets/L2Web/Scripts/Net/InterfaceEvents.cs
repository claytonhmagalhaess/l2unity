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

        // ---------------------------------------------------------------- fabricacao (T19, spec 07 §6)

        /// <summary>RecipeBookItemList (0xd6): EV_RecipeShowBookWnd (Type) e um EV_RecipeAddBookItem (RecipeID) por receita.</summary>
        public static List<PacketEvents.Event> RecipeBook(RecipeBookInfo b)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_RecipeShowBookWnd, P("", "Type", b.Type)) };
            foreach (var (id, _) in b.Recipes) o.Add(E(Ev.EV_RecipeAddBookItem, P("", "RecipeID", id)));
            return o;
        }

        /// <summary>RecipeItemMakeInfo (0xd7): EV_RecipeItemMakeInfo (RecipeID, CurrentMP, MaxMP, MakingResult, Type).</summary>
        public static List<PacketEvents.Event> RecipeMakeInfo(RecipeMakeInfo m)
        {
            var p = P("", "RecipeID", m.RecipeId);
            p = P(p, "CurrentMP", m.CurrentMp);
            p = P(p, "MaxMP", m.MaxMp);
            p = P(p, "MakingResult", m.MakingResult);
            return new() { E(Ev.EV_RecipeItemMakeInfo, P(p, "Type", m.Type)) };
        }

        static string ShopEntry(RecipeShopEntry e) => P(P(P("", "RecipeID", e.RecipeId), "CanbeMade", e.CanBeMade), "MakingFee", e.Fee);

        /// <summary>
        /// RecipeShopManageList (0xd8): EV_RecipeShopShowWnd (Type), um EV_RecipeShopAddBookItem (RecipeID) por receita do livro e
        /// um EV_RecipeShopAddShopItem (RecipeID, CanbeMade, MakingFee) por receita da loja.
        /// </summary>
        public static List<PacketEvents.Event> RecipeShopManage(RecipeShopManageInfo m)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_RecipeShopShowWnd, P("", "Type", m.Type)) };
            foreach (var (id, _) in m.Book) o.Add(E(Ev.EV_RecipeShopAddBookItem, P("", "RecipeID", id)));
            foreach (var e in m.Shop) o.Add(E(Ev.EV_RecipeShopAddShopItem, ShopEntry(e)));
            return o;
        }

        /// <summary>RecipeShopSellList (0xd9): EV_RecipeShowBuyListWnd (ServerID, CurrentMP, MaxMP, Adena) e um EV_RecipeShopSellItem por receita.</summary>
        public static List<PacketEvents.Event> RecipeShopSell(RecipeShopSellInfo s)
        {
            var p = P("", "ServerID", s.OwnerId);
            p = P(p, "CurrentMP", s.CurrentMp);
            p = P(p, "MaxMP", s.MaxMp);
            var o = new List<PacketEvents.Event> { E(Ev.EV_RecipeShowBuyListWnd, P(p, "Adena", s.Adena)) };
            foreach (var e in s.Items) o.Add(E(Ev.EV_RecipeShopSellItem, ShopEntry(e)));
            return o;
        }

        /// <summary>RecipeShopItemInfo (0xda): EV_RecipeShopItemInfo (MerchantID, RecipeID, CurrentMP, MaxMP, MakingResult, Adena).</summary>
        public static List<PacketEvents.Event> RecipeShopItem(RecipeShopItemInfo i)
        {
            var p = P("", "MerchantID", i.OwnerId);
            p = P(p, "RecipeID", i.RecipeId);
            p = P(p, "CurrentMP", i.CurrentMp);
            p = P(p, "MaxMP", i.MaxMp);
            p = P(p, "MakingResult", i.MakingResult);
            return new() { E(Ev.EV_RecipeShopItemInfo, P(p, "Adena", i.Adena)) };
        }

        // ---------------------------------------------------------------- melhoria de item (T20, spec 07 §4.2-4.4)

        /// <summary>
        /// ChooseInventoryItem (0x6f): EV_EnchantShow (ClassID do pergaminho). O EV_EnchantItemList (os itens do inventario que o
        /// pergaminho aceita) o nativo monta a partir do inventario: fica com quem tem o ItemList (App/UI).
        /// </summary>
        public static List<PacketEvents.Event> EnchantShow(int scrollId) => new() { E(Ev.EV_EnchantShow, P("", "ClassID", scrollId)) };

        /// <summary>EnchantResult (0x81): EV_EnchantResult; Result (0 sucesso, 1 falha, 2 cancelado) e chave a mais do l2unity.</summary>
        public static List<PacketEvents.Event> EnchantResult(int result) => new() { E(Ev.EV_EnchantResult, P("", "Result", result)) };

        /// <summary>ExShowVariationMakeWindow (FE:50) / CancelWindow (FE:51).</summary>
        public static List<PacketEvents.Event> RefineryShow(bool cancel) => new() { E(cancel ? Ev.EV_ShowRefineryCancelInteface : Ev.EV_ShowRefineryInteface) };

        /// <summary>FE:52: EV_RefineryConfirmTargetItemResult (TargetItemServerID, TargetItemClassID, Result).</summary>
        public static List<PacketEvents.Event> RefineryTarget(VariationTargetInfo t) =>
            new() { E(Ev.EV_RefineryConfirmTargetItemResult, P(P(P("", "TargetItemServerID", t.ServerId), "TargetItemClassID", t.ClassId), "Result", t.Result)) };

        /// <summary>FE:53: EV_RefineryConfirmRefinerItemResult (RefinerItemServerID, RefinerItemClassID, Result, GemStoneCount, GemStoneClassID).</summary>
        public static List<PacketEvents.Event> RefineryRefiner(VariationRefinerInfo v)
        {
            var p = P(P("", "RefinerItemServerID", v.ServerId), "RefinerItemClassID", v.ClassId);
            p = P(P(p, "Result", v.Result), "GemStoneCount", v.GemStoneCount);
            return new() { E(Ev.EV_RefineryConfirmRefinerItemResult, P(p, "GemStoneClassID", v.GemStoneClassId)) };
        }

        /// <summary>FE:54: EV_RefineryConfirmGemStoneResult (GemStoneServerID, GemStoneClassID, Result, NecessaryGemStoneCount, GemStoneCount).</summary>
        public static List<PacketEvents.Event> RefineryGemStone(VariationGemStoneInfo g)
        {
            var p = P(P("", "GemStoneServerID", g.ServerId), "GemStoneClassID", g.ClassId);
            p = P(P(p, "Result", g.Result), "NecessaryGemStoneCount", g.NecessaryCount);
            return new() { E(Ev.EV_RefineryConfirmGemStoneResult, P(p, "GemStoneCount", g.GemStoneCount)) };
        }

        /// <summary>FE:55: EV_RefineryRefineResult (Option1, Option2, Result).</summary>
        public static List<PacketEvents.Event> RefineryResult(VariationResultInfo v) =>
            new() { E(Ev.EV_RefineryRefineResult, P(P(P("", "Option1", v.Option1), "Option2", v.Option2), "Result", v.Result)) };

        /// <summary>FE:56: EV_RefineryConfirmCancelItemResult (CancelItemServerID, CancelItemClassID, Option1, Option2, Adena, Result).</summary>
        public static List<PacketEvents.Event> RefineryCancelItem(VariationCancelItemInfo c)
        {
            var p = P(P("", "CancelItemServerID", c.ServerId), "CancelItemClassID", c.ClassId);
            p = P(P(p, "Option1", c.Option1), "Option2", c.Option2);
            return new() { E(Ev.EV_RefineryConfirmCancelItemResult, P(P(p, "Adena", c.Adena), "Result", c.Result)) };
        }

        /// <summary>FE:57: EV_RefineryRefineCancelResult (Result).</summary>
        public static List<PacketEvents.Event> RefineryCancelResult(int result) => new() { E(Ev.EV_RefineryRefineCancelResult, P("", "Result", result)) };

        // ---------------------------------------------------------------- busca de grupo, uniao e duelo (T21)

        /// <summary>
        /// PartyMatchList (0x96): EV_PartyMatchStart e EV_PartyMatchList (PageNum, RoomCount e, por sala, RoomNum_i, Leader_i,
        /// ZoneID_i, MinLevel_i, MaxLevel_i, CurMember_i, MaxMember_i, RoomName_i).
        /// </summary>
        public static List<PacketEvents.Event> PartyMatchList(PartyMatchListInfo l)
        {
            var p = P(P("", "PageNum", l.Page), "RoomCount", l.Rooms.Count);
            for (var i = 0; i < l.Rooms.Count; i++)
            {
                var r = l.Rooms[i];
                p = P(p, "RoomNum_" + i, r.RoomId);
                p = P(p, "Leader_" + i, r.Leader);
                p = P(p, "ZoneID_" + i, r.Location);
                p = P(p, "MinLevel_" + i, r.MinLevel);
                p = P(p, "MaxLevel_" + i, r.MaxLevel);
                p = P(p, "CurMember_" + i, r.Members);
                p = P(p, "MaxMember_" + i, r.MaxMembers);
                p = P(p, "RoomName_" + i, r.Title);
            }
            return new() { E(Ev.EV_PartyMatchStart), E(Ev.EV_PartyMatchList, p) };
        }

        /// <summary>PartyMatchDetail (0x97): EV_PartyMatchRoomStart (RoomNum, MaxMember, MinLevel, MaxLevel, LootingMethodID, ZoneID, RoomName).</summary>
        public static List<PacketEvents.Event> PartyMatchDetail(PartyRoomDetail d)
        {
            var p = P("", "RoomNum", d.RoomId);
            p = P(p, "MaxMember", d.MaxMembers);
            p = P(p, "MinLevel", d.MinLevel);
            p = P(p, "MaxLevel", d.MaxLevel);
            p = P(p, "LootingMethodID", d.LootType);
            p = P(p, "ZoneID", d.Location);
            return new() { E(Ev.EV_PartyMatchRoomStart, P(p, "RoomName", d.Title)) };
        }

        /// <summary>ExPartyRoomMember (FE:0e): EV_PartyMatchRoomMember (MyMembershipType, MemberCount e MemberID_i ... MembershipType_i).</summary>
        public static List<PacketEvents.Event> PartyRoomMembers(PartyRoomMembersInfo m)
        {
            var p = P(P("", "MyMembershipType", m.Mode), "MemberCount", m.Members.Count);
            for (var i = 0; i < m.Members.Count; i++)
            {
                var x = m.Members[i];
                p = P(p, "MemberID_" + i, x.ObjectId);
                p = P(p, "MemberName_" + i, x.Name);
                p = P(p, "ClassID_" + i, x.ClassId);
                p = P(p, "Level_" + i, x.Level);
                p = P(p, "ZoneID_" + i, x.Location);
                p = P(p, "MembershipType_" + i, x.MembershipType);
            }
            return new() { E(Ev.EV_PartyMatchRoomMember, p) };
        }

        /// <summary>ExClosePartyRoom (FE:0f): EV_PartyMatchRoomClose.</summary>
        public static List<PacketEvents.Event> PartyRoomClose() => new() { E(Ev.EV_PartyMatchRoomClose) };

        /// <summary>ExManagePartyRoomMember (FE:10): EV_PartyMatchRoomMemberUpdate (UpdateType, MemberID, MemberName, ClassID, Level, ZoneID, MembershipType).</summary>
        public static List<PacketEvents.Event> PartyRoomMemberUpdate(PartyRoomMemberUpdate u)
        {
            var m = u.Member;
            var p = P(P(P("", "UpdateType", u.Mode), "MemberID", m.ObjectId), "MemberName", m.Name);
            p = P(P(P(p, "ClassID", m.ClassId), "Level", m.Level), "ZoneID", m.Location);
            return new() { E(Ev.EV_PartyMatchRoomMemberUpdate, P(p, "MembershipType", m.MembershipType)) };
        }

        /// <summary>ExListPartyMatchingWaitingRoom (FE:35): EV_PartyMatchWaitListStart (AllCount, Count) e um EV_PartyMatchWaitList por jogador.</summary>
        public static List<PacketEvents.Event> WaitingList(WaitingListInfo w)
        {
            var o = new List<PacketEvents.Event> { E(Ev.EV_PartyMatchWaitListStart, P(P("", "AllCount", w.AllCount), "Count", w.Players.Count)) };
            foreach (var (name, cls, lvl) in w.Players) o.Add(E(Ev.EV_PartyMatchWaitList, P(P(P("", "Name", name), "ClassID", cls), "Level", lvl)));
            return o;
        }

        /// <summary>ExOpenMPCC / ExCloseMPCC (FE:25/26): EV_CommandChannelStart / End.</summary>
        public static List<PacketEvents.Event> CommandChannel(bool open) => new() { E(open ? Ev.EV_CommandChannelStart : Ev.EV_CommandChannelEnd) };

        /// <summary>
        /// ExMultiPartyCommandChannelInfo (FE:30): EV_CommandChannelInfo (OwnerName, RoutingType, PartyNum, PartyMemberNum) e um
        /// EV_CommandChannelPartyList (MasterName, MasterID, PartyNum = membros do grupo) por grupo.
        /// </summary>
        public static List<PacketEvents.Event> CommandChannelInfo(CommandChannelInfo c)
        {
            var p = P(P("", "OwnerName", c.Owner), "RoutingType", c.Routing);
            var o = new List<PacketEvents.Event> { E(Ev.EV_CommandChannelInfo, P(P(p, "PartyNum", c.Parties.Count), "PartyMemberNum", c.Members)) };
            foreach (var x in c.Parties) o.Add(E(Ev.EV_CommandChannelPartyList, P(P(P("", "MasterName", x.Leader), "MasterID", x.LeaderId), "PartyNum", x.Members)));
            return o;
        }

        /// <summary>ExSetMpccRouting (FE:36): EV_CommandChannelRoutingType (RoutingType).</summary>
        public static List<PacketEvents.Event> CommandChannelRouting(int routing) => new() { E(Ev.EV_CommandChannelRoutingType, P("", "RoutingType", routing)) };

        /// <summary>ExMPCCShowPartyMemberInfo (FE:4a): EV_CommandChannelPartyMember (MemberCount, Name_i, ClassID_i, ServerID_i).</summary>
        public static List<PacketEvents.Event> CommandChannelPartyMembers(List<(string Name, int ObjectId, int ClassId)> l)
        {
            var p = P("", "MemberCount", l.Count);
            for (var i = 0; i < l.Count; i++) p = P(P(P(p, "Name_" + i, l[i].Name), "ClassID_" + i, l[i].ClassId), "ServerID_" + i, l[i].ObjectId);
            return new() { E(Ev.EV_CommandChannelPartyMember, p) };
        }

        /// <summary>ExMPCCPartyInfoUpdate (FE:5a): EV_CommandChannelPartyUpdate (MasterName, MasterID, MemberCount, Type).</summary>
        public static List<PacketEvents.Event> CommandChannelPartyUpdate(CommandChannelPartyUpdate u) =>
            new() { E(Ev.EV_CommandChannelPartyUpdate, P(P(P(P("", "MasterName", u.Leader), "MasterID", u.LeaderId), "MemberCount", u.Members), "Type", u.Mode)) };

        /// <summary>ExDuelReady / Start / End (FE:4c/4d/4e): EV_DuelReady / Start / End (type = 1 duelo de grupo, spec 06 §13).</summary>
        public static List<PacketEvents.Event> Duel(int ev, int type) => new() { E(ev, P("", "type", type)) };

        /// <summary>ExDuelUpdateUserInfo (FE:4f): EV_DuelUpdateUserInfo.</summary>
        public static List<PacketEvents.Event> DuelUserInfo(DuelUserInfo d)
        {
            var p = P(P(P(P("", "userName", d.Name), "ID", d.ObjectId), "class", d.ClassId), "level", d.Level);
            p = P(P(P(p, "currentHP", d.Hp), "maxHP", d.MaxHp), "currentMP", d.Mp);
            return new() { E(Ev.EV_DuelUpdateUserInfo, P(P(P(p, "maxMP", d.MaxMp), "currentCP", d.Cp), "maxCP", d.MaxCp)) };
        }

        // ---------------------------------------------------------------- mensagens na tela (T16, spec 02 §3.9)

        /// <summary>ExShowScreenMessage (FE:38): EV_ShowScreenMessage com as 10 chaves e Msg (MsgColorR/G/B ficam no padrao 255 do script).</summary>
        public static List<PacketEvents.Event> ScreenMessage(ScreenMessageInfo m)
        {
            var p = P("", "MsgType", m.MsgType);
            p = P(p, "MsgNo", m.MsgNo);
            p = P(p, "WindowType", m.WindowType);
            p = P(p, "FontSize", m.FontSize);
            p = P(p, "FontType", m.FontType);
            p = P(p, "MsgColor", m.MsgColor);
            p = P(p, "ShadowType", m.ShadowType);
            p = P(p, "BackgroundType", m.BackgroundType);
            p = P(p, "LifeTime", m.LifeTime);
            p = P(p, "AnimationType", m.AnimationType);
            return new() { E(Ev.EV_ShowScreenMessage, P(p, "Msg", m.Msg)) };
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
