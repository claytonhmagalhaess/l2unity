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
