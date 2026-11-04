// Pacote -> eventos EV_* com o param "Chave=Valor" (96, 88, chain_verification.json), como a cadeia do original:
// tratador do engine.dll -> UGameEngine::On* -> slot do console -> NWindow -> EV_*. Cada funcao recebe o pacote ja lido
// (Net/*Packets) e devolve os eventos na ordem em que o nativo os dispara. O App entrega ao barramento (L2Events).
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public static class PacketEvents
    {
        public readonly struct Event
        {
            public readonly int Id;
            public readonly string Param;

            public Event(int id, string param)
            {
                Id = id;
                Param = param ?? "";
            }

            public override string ToString() => (Ev.Names.TryGetValue(Id, out var n) ? n : Id.ToString()) + " " + Param.Replace(L2Param.Quote, '"');
        }

        /// <summary>
        /// Cor (ARGB) e tipo de chat que o console entrega ao EV_ChatMessage para cada tipo do Say2 (FUN_10163d90): 1 e 11
        /// viram grito, 18 so o texto, os tipos sem cor propria ficam 0xFFDCDCDC e tipo 0 (14 mantem o tipo).
        /// </summary>
        public static (uint argb, int type) SayColor(int type) => type switch
        {
            1 or 11 => (0xffff7200, 1),
            2 => (0xffff00ff, 2),
            3 => (0xff00ff00, 3),
            4 => (0xff7d77ff, 4),
            6 or 7 or 10 => (0xff80ffff, type),
            8 => (0xffeaa5f5, 8),
            9 => (0xff77ff99, 9),
            14 => (0xffdcdcdc, 14),
            15 => (0xffff9695, 15),
            16 => (0xfffff8b2, 16),
            17 => (0xff408cff, 17),
            18 => (0xff00ffff, 18),
            _ => (0xffdcdcdc, 0),
        };

        static string Color(string p, uint argb, bool alpha = false)
        {
            p = L2Param.Add(p, "ColorR", (int)((argb >> 16) & 0xff));
            p = L2Param.Add(p, "ColorG", (int)((argb >> 8) & 0xff));
            p = L2Param.Add(p, "ColorB", (int)(argb & 0xff));
            return alpha ? L2Param.Add(p, "ColorA", (int)(argb >> 24)) : p;
        }

        /// <summary>
        /// FUN_101392c0: EV_ChatMessage com Type, Msg e a cor; SysType so quando Type = 5 (mensagem de sistema).
        /// (L2Param.Add ignora valor vazio, como o ParamAdd do original: Type 0 vai como "0".)
        /// </summary>
        public static Event ChatMessage(int type, string msg, uint argb, int sysType = -1)
        {
            var p = L2Param.Add("", "Type", type);
            p = L2Param.Add(p, "Msg", msg);
            p = Color(p, argb);
            if (type == 5) p = L2Param.Add(p, "SysType", sysType);
            return new Event(Ev.EV_ChatMessage, p);
        }

        /// <summary>
        /// SayPacket2 (0x4a) -> OnSay2 -> FUN_10163d90 -> FUN_1013df30: "Nome: texto" (o tipo 18 so o texto), com o texto ja
        /// filtrado de palavroes; petição (6/7) vai para a janela de petição e a sala de party (14) para o party matching.
        /// </summary>
        public static List<Event> Say(CreatureSayInfo s, string filteredText)
        {
            var (argb, type) = SayColor(s.Type);
            // anuncio (10): o nome vira a sysstring 328 "Announcements" (GL2GameData+0x6b83c); anuncio critico (18): so o texto
            var name = type == 10 ? GameData.SysString(328, "Announcements") : s.Name;
            var msg = type == 18 ? filteredText : $"{name}: {filteredText}";
            var outp = new List<Event>();
            if (type == 6 || type == 7)
            {
                if (type == 6) argb = 0xffdcdcdc;
                var p = Color(L2Param.Add("", "Message", msg), argb, true);
                outp.Add(new Event(Ev.EV_PetitionChatMessage, p));
            }
            else if (type == 14)
                outp.Add(new Event(Ev.EV_PartyMatchChatMessage, Color(L2Param.Add("", "Msg", msg), argb, true)));
            else
                outp.Add(ChatMessage(type, msg, argb));
            return outp;
        }

        /// <summary>SystemMessagePacket (0x64): EV_SystemMessage (Index) e a linha no chat (Type 5, SysType = grupo do systemmsg).</summary>
        public static List<Event> SystemMessage(int id, string text, uint argb, int group) => new()
        {
            new Event(Ev.EV_SystemMessage, L2Param.Add("", "Index", id)),
            ChatMessage(5, text, argb, group),
        };

        /// <summary>StatusUpdatePacket (0x0e): EV_Update(Max)HP/MP/CP com ServerID e o valor, na ordem dos atributos.</summary>
        public static List<Event> Status(StatusUpdateInfo s)
        {
            var outp = new List<Event>();
            foreach (var kv in s.Attrs)
            {
                (int ev, string key) = kv.Key switch
                {
                    GamePackets.Status.CurHp => (Ev.EV_UpdateHP, "CurrentHP"),
                    GamePackets.Status.MaxHp => (Ev.EV_UpdateMaxHP, "MaxHP"),
                    GamePackets.Status.CurMp => (Ev.EV_UpdateMP, "CurrentMP"),
                    GamePackets.Status.MaxMp => (Ev.EV_UpdateMaxMP, "MaxMP"),
                    GamePackets.Status.CurCp => (Ev.EV_UpdateCP, "CurrentCP"),
                    GamePackets.Status.MaxCp => (Ev.EV_UpdateMaxCP, "MaxCP"),
                    _ => (0, null),
                };
                if (ev == 0) continue;
                outp.Add(new Event(ev, L2Param.Add(L2Param.Add("", "ServerID", s.ObjectId), key, kv.Value)));
            }
            return outp;
        }

        /// <summary>DiePacket (0x06), so do proprio personagem: EV_Die com os pontos de reinicio (0/1).</summary>
        public static List<Event> Die(DieInfo d)
        {
            var p = L2Param.Add("", "Village", d.ToVillage ? 1 : 0);
            p = L2Param.Add(p, "Agit", d.ToClanHall ? 1 : 0);
            p = L2Param.Add(p, "Castle", d.ToCastle ? 1 : 0);
            p = L2Param.Add(p, "BattleCamp", d.ToSiegeHq ? 1 : 0);
            p = L2Param.Add(p, "Original", d.Fixed ? 1 : 0);
            return new List<Event> { new Event(Ev.EV_Die, p) };
        }

        /// <summary>RevivePacket (0x07), do proprio personagem: fecha o menu de reinicio.</summary>
        public static List<Event> Revive() => new() { new Event(Ev.EV_RestartMenuHide, "") };

        /// <summary>MyTargetSelectedPacket (0xa6): EV_ReceiveTargetLevelDiff com a diferenca de nivel (cor do nome, 93 §5).</summary>
        public static List<Event> MyTargetSelected(MyTargetSelectedInfo t) => new()
        {
            new Event(Ev.EV_ReceiveTargetLevelDiff, L2Param.Add("", "LevelDiff", t.Color)),
        };

        /// <summary>
        /// AbnormalStatusUpdatePacket (0x7f): EV_AbnormalStatusNormalItem com Max e, por efeito i, SkillID_i, SkillLevel_i,
        /// RemainTime_i, Name_i, IconName_i e Description_i (AbnormalStatusWnd.uc HandleAddNormalStatus).
        /// </summary>
        public static List<Event> Abnormal(List<AbnormalInfo> list) => Abnormal(list, Ev.EV_AbnormalStatusNormalItem);

        /// <summary>Normal (950), Etc (960, RemainTime -1 no nativo) ou Short (970): mesmas chaves.</summary>
        public static List<Event> Abnormal(List<AbnormalInfo> list, int ev)
        {
            var p = L2Param.Add("", "Max", list.Count);
            for (var i = 0; i < list.Count; i++)
            {
                var a = list[i];
                p = L2Param.Add(p, "SkillID_" + i, a.SkillId);
                p = L2Param.Add(p, "SkillLevel_" + i, a.Level);
                p = L2Param.Add(p, "RemainTime_" + i, a.Seconds);
                p = L2Param.Add(p, "Name_" + i, GameData.SkillName(a.SkillId, a.Level));
                p = L2Param.Add(p, "IconName_" + i, L2SkillData.Get(a.SkillId, a.Level)?.Icon);
            }
            return new List<Event> { new Event(ev, p) };
        }

        /// <summary>MultiSellListPacket (0xd0): ShopID, cada produto, seus ingredientes e o fim da lista (MultiSellWnd.uc).</summary>
        public static List<Event> MultiSell(MultiSellListInfo m)
        {
            // FUN_104183a0: OnSetVIPShopID so na pagina 1; OnAddVIPItemList(indice do produto na entrada, c, id, op1, op2, h item,
            // d bodyPart, h type2, d count, h enchant, d, d) -> FUN_10163500; OnAddVIPNeedItemList -> FUN_10163800
            var outp = new List<Event>();
            if (m.Page == 1) outp.Add(new Event(Ev.EV_MultiSellShopID, L2Param.Add("", "shopID", m.ListId)));
            foreach (var e in m.Entries)
            {
                for (var k = 0; k < e.Products.Count; k++)
                {
                    var it = e.Products[k];
                    var p = L2Param.Add("", "index", k);
                    p = L2Param.Add(p, "type", e.Type);
                    p = L2Param.Add(p, "ID", e.EntryId);
                    p = L2Param.Add(p, "refineryOp1", e.Op1);
                    p = L2Param.Add(p, "refineryOp2", e.Op2);
                    p = L2Param.Add(p, "classID", it.ItemId);
                    p = L2Param.Add(p, "slotBitType", it.BodyPart);
                    p = L2Param.Add(p, "itemType", it.Type2);
                    p = L2Param.Add(p, "itemCount", it.Count);
                    p = L2Param.Add(p, "enchant", it.Enchant);
                    p = L2Param.Add(p, "OutputRefineryOp1", it.Op1);
                    p = L2Param.Add(p, "OutputRefineryOp2", it.Op2);
                    outp.Add(new Event(Ev.EV_MultiSellItemList, p));
                }
                foreach (var it in e.Ingredients)
                {
                    var p = L2Param.Add("", "ID", e.EntryId);
                    p = L2Param.Add(p, "refineryOp1", e.Op1);
                    p = L2Param.Add(p, "refineryOp2", e.Op2);
                    p = L2Param.Add(p, "ClassID", it.ItemId);
                    p = L2Param.Add(p, "count", it.Count);
                    p = L2Param.Add(p, "enchant", it.Enchant);
                    p = L2Param.Add(p, "inputRefineryOp1", it.Op1);
                    p = L2Param.Add(p, "inputRefineryOp2", it.Op2);
                    outp.Add(new Event(Ev.EV_MultiSellNeededItemList, p));
                }
            }
            if (m.Finished) outp.Add(new Event(Ev.EV_MultiSellItemListEnd, ""));
            return outp;
        }

        public static List<Event> TradeRequest(TradeRequestInfo t) => new() { new Event(Ev.EV_TradeRequestStartExchange, L2Param.Add("", "targetID", t.SenderId)) };

        /// <summary>
        /// TradeStart (0x1e, spec 96; pedido 0025): EV_TradeStart (targetId, a chave do TradeWnd.uc) e um EV_TradeAddItem
        /// destination=inventoryList com o ItemInfo de cada item. O EV_InventoryHideWindow do par fica de fora: o
        /// HandleStartTrade do TradeWnd.uc ja fecha o inventario, e o golden so tem as chaves nativas misturadas desse evento.
        /// </summary>
        public static List<Event> TradeStart(TradeStartInfo t)
        {
            var outp = new List<Event> { new Event(Ev.EV_TradeStart, L2Param.Add("", "targetId", t.PartnerId)) };
            foreach (var i in t.Items) outp.Add(new Event(Ev.EV_TradeAddItem, TradeItemParam("inventoryList", i)));
            return outp;
        }

        /// <summary>ItemInfo (chaves do InterfaceEvents.Item) de um item da troca, com o destination.</summary>
        static string TradeItemParam(string destination, TradeItem i) =>
            InterfaceEvents.Item(L2Param.Add("", "destination", destination), new InvItem { ObjectId = i.ObjectId, ItemId = i.ItemId, Count = i.Count, Enchant = i.Enchant, Mana = -1 });

        public static List<Event> TradeDone() => new() { new Event(Ev.EV_TradeDone, "") };

        public static List<Event> TradeOtherOk() => new() { new Event(Ev.EV_TradeOtherOK, "") };

        /// <summary>ShortCutInitPacket (0x45): limpa e atualiza cada atalho (ShortcutID).</summary>
        public static List<Event> ShortcutInit(List<Shortcut> list)
        {
            var outp = new List<Event> { new Event(Ev.EV_ShortcutClear, "") };
            foreach (var s in list) outp.Add(new Event(Ev.EV_ShortcutUpdate, L2Param.Add("", "ShortcutID", s.Slot)));
            return outp;
        }

        public static List<Event> ShortcutRegister(Shortcut s) => new() { new Event(Ev.EV_ShortcutUpdate, L2Param.Add("", "ShortcutID", s.Slot)) };

        /// <summary>ItemListPacket (0x1b): limpa, abre a janela se o servidor pediu, um evento por item e o fim.</summary>
        public static List<Event> ItemList(ItemListInfo l)
        {
            var outp = new List<Event> { new Event(Ev.EV_InventoryClear, "") };
            if (l.Show) outp.Add(new Event(Ev.EV_InventoryOpenWindow, ""));
            foreach (var it in l.Items) outp.Add(new Event(Ev.EV_InventoryAddItem, InterfaceEvents.Item("", it)));
            outp.Add(new Event(Ev.EV_InventoryItemListEnd, ""));
            return outp;
        }

        public static List<Event> SkillListStart() => new() { new Event(Ev.EV_SkillListStart, "") };

        /// <summary>BuyListPacket (0x11) / SellListPacket (0x10): abre a loja (type buy/sell, merchant, adena) e um evento por item.</summary>
        public static List<Event> Shop(string type, int merchant, int adena, int npc, int items)
        {
            var p = L2Param.Add("", "type", type);
            p = L2Param.Add(p, "merchant", merchant);
            p = L2Param.Add(p, "adena", adena);
            p = L2Param.Add(p, "npc", npc);
            var outp = new List<Event> { new Event(Ev.EV_ShopOpenWindow, p) };
            for (var i = 0; i < items; i++) outp.Add(new Event(Ev.EV_ShopAddItem, ""));
            return outp;
        }

        /// <summary>InventoryUpdatePacket (0x27): um EV_InventoryUpdateItem por item, type = add/update/delete (InventoryWnd.uc).</summary>
        public static List<Event> InventoryUpdate(List<InvItem> items)
        {
            var outp = new List<Event>();
            foreach (var it in items)
                outp.Add(new Event(Ev.EV_InventoryUpdateItem, InterfaceEvents.Item(L2Param.Add("", "type", it.Change switch { 1 => "add", 3 => "delete", _ => "update" }), it)));
            return outp;
        }

        /// <summary>TradeOwnAdd (0x20) / TradeOtherAdd (0x21): EV_TradeAddItem com destination myList / otherList (TradeWnd.uc).</summary>
        public static List<Event> TradeAdd(bool own) => new() { new Event(Ev.EV_TradeAddItem, L2Param.Add("", "destination", own ? "myList" : "otherList")) };

        /// <summary>TradeAdd com o ItemInfo do item (pedido 0025, item 4).</summary>
        public static List<Event> TradeAdd(bool own, TradeItem i) => new() { new Event(Ev.EV_TradeAddItem, TradeItemParam(own ? "myList" : "otherList", i)) };

        /// <summary>
        /// BuyList (0x11) / SellList (0x10) com os itens (pedido 0025, itens 3 e 4): a venda fecha o inventario antes
        /// (EV_InventoryHideWindow); cada EV_ShopAddItem leva o ItemInfo (classID, serverID, itemNum, price...).
        /// </summary>
        public static List<Event> Shop(string type, int merchant, int adena, int npc, IList<ShopItem> items)
        {
            var outp = Shop(type, merchant, adena, npc, 0);
            if (type == "sell") outp.Insert(0, new Event(Ev.EV_InventoryHideWindow, ""));
            foreach (var i in items)
                outp.Add(new Event(Ev.EV_ShopAddItem, InterfaceEvents.Item("", new InvItem { ObjectId = i.ObjectId, ItemId = i.ItemId, Count = i.Count, Enchant = i.Enchant, Type2 = i.Type2, Mana = -1, Price = i.Price })));
            return outp;
        }

        static string Member(string p, PartyMember m)
        {
            p = L2Param.Add(p, "ID", m.ObjectId);
            p = L2Param.Add(p, "Name", m.Name);
            p = L2Param.Add(p, "CurCP", m.Cp);
            p = L2Param.Add(p, "MaxCP", m.MaxCp);
            p = L2Param.Add(p, "CurHP", m.Hp);
            p = L2Param.Add(p, "MaxHP", m.MaxHp);
            p = L2Param.Add(p, "CurMP", m.Mp);
            p = L2Param.Add(p, "MaxMP", m.MaxMp);
            p = L2Param.Add(p, "Level", m.Level);
            return L2Param.Add(p, "ClassID", m.ClassId);
        }

        /// <summary>PartySmallWindowAll (0x4e) / Add (0x4f): EV_PartyAddParty por membro e EV_PartyMemberChanged com a contagem.</summary>
        public static List<Event> PartyAdd(IList<PartyMember> members, int leaderId, int countAfter, int routing = 0)
        {
            var outp = new List<Event>();
            foreach (var m in members)
            {
                var p = L2Param.Add(Member("", m), "MasterID", leaderId);
                p = L2Param.Add(p, "RoutingType", routing);
                outp.Add(new Event(Ev.EV_PartyAddParty, L2Param.Add(p, "PartyMemberCount", countAfter)));
            }
            outp.Add(new Event(Ev.EV_PartyMemberChanged, L2Param.Add("", "PartyMemberCount", countAfter)));
            return outp;
        }

        /// <summary>PartySmallWindowDelete (0x51): EV_PartyDeleteParty (ID) e a contagem.</summary>
        public static List<Event> PartyDelete(int objectId, int countAfter) => new()
        {
            new Event(Ev.EV_PartyDeleteParty, L2Param.Add(L2Param.Add("", "ID", objectId), "PartyMemberCount", countAfter)),
            new Event(Ev.EV_PartyMemberChanged, L2Param.Add("", "PartyMemberCount", countAfter)),
        };

        /// <summary>PartySmallWindowDeleteAll (0x50).</summary>
        public static List<Event> PartyDeleteAll() => new()
        {
            new Event(Ev.EV_PartyDeleteAllParty, L2Param.Add("", "PartyMemberCount", 0)),
            new Event(Ev.EV_PartyMemberChanged, L2Param.Add("", "PartyMemberCount", 0)),
        };

        /// <summary>PartySmallWindowUpdate (0x52).</summary>
        public static List<Event> PartyUpdate(PartyMember m) => new() { new Event(Ev.EV_PartyUpdateParty, Member("", m)) };

        /// <summary>TutorialShowHtml (0xa0, S html): EV_TutorialViewerWndShow com HtmlString (TutorialViewerWnd.uc).</summary>
        public static List<Event> TutorialShowHtml(string html) => new() { new Event(Ev.EV_TutorialViewerWndShow, L2Param.Add("", "HtmlString", html ?? "")) };

        /// <summary>TutorialCloseHtml (0xa3): EV_TutorialViewerWndHide.</summary>
        public static List<Event> TutorialCloseHtml() => new() { new Event(Ev.EV_TutorialViewerWndHide, "") };

        /// <summary>ShowBoardPacket (0x6e): OK, os 8 comandos e o endereco (BoardWnd.uc).</summary>
        public static List<Event> ShowBoard(ShowBoardInfo b)
        {
            var p = L2Param.Add("", "OK", b.Show ? 1 : 0);
            for (var i = 0; i < 8; i++) p = L2Param.Add(p, "Command" + (i + 1), i < b.Buttons.Count ? b.Buttons[i] : "");
            p = L2Param.Add(p, "Address", b.Id);
            return new List<Event> { new Event(Ev.EV_ShowBoardPacket, p) };
        }

        /// <summary>
        /// PrivateStoreList (0x9b): abre a loja de venda do outro jogador e um evento por item (target). O type e "buy"
        /// (PT_Buy: o jogador compra; PrivateShopWnd.uc, spec 07 §5.3); "sell" e vender para a loja de compra do outro (0xb8).
        /// </summary>
        public static List<Event> PrivateStore(PrivateStoreSellInfo s)
        {
            var p = L2Param.Add("", "type", "buy");
            p = L2Param.Add(p, "adena", s.Adena);
            p = L2Param.Add(p, "userID", s.OwnerId);
            p = L2Param.Add(p, "bulk", s.PackageSale ? 1 : 0);
            var outp = new List<Event> { new Event(Ev.EV_PrivateShopOpenWindow, p) };
            foreach (var i in s.Items)
                outp.Add(new Event(Ev.EV_PrivateShopAddItem, InterfaceEvents.Item(L2Param.Add("", "target", "topList"), new InvItem { ObjectId = i.ObjectId, ItemId = i.ItemId, Count = i.Count, Enchant = i.Enchant, Mana = -1, Price = i.Price })));
            return outp;
        }

        /// <summary>RestartResponsePacket (0x5f) com ok: volta a selecao de personagens.</summary>
        public static List<Event> Restart() => new() { new Event(Ev.EV_Restart, L2Param.Add("", "LoadingState", 0)) };

        /// <summary>AttackPacket (0x05): EV_ReceiveAttack por golpe (atacante, defensor, critico, escudo).</summary>
        public static List<Event> Attack(AttackInfo a, System.Func<int, string> nameOf)
        {
            var outp = new List<Event>();
            foreach (var h in a.Hits)
            {
                var p = L2Param.Add("", "AttackerID", a.AttackerId);
                p = L2Param.Add(p, "AttackerName", nameOf(a.AttackerId));
                p = L2Param.Add(p, "DefenderID", h.TargetId);
                p = L2Param.Add(p, "DefenderName", nameOf(h.TargetId));
                p = L2Param.Add(p, "Critical", (h.Flags & 0x20) != 0 ? 1 : 0);
                p = L2Param.Add(p, "ShieldDefense", (h.Flags & 0x40) != 0 ? 1 : 0);
                outp.Add(new Event(Ev.EV_ReceiveAttack, p));
            }
            return outp;
        }
    }
}
