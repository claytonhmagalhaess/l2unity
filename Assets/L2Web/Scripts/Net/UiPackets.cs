// Pacotes de interface (Fase 9), conforme a fonte do servidor do usuario (C:\Workspace-java\aCis_gameserver).
using System;
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class NpcHtmlInfo
    {
        public int NpcObjectId;
        public string Html;
        public int ItemId;
    }

    public sealed class InvItem
    {
        public int ObjectId;
        public int ItemId;
        public int Count;
        public int Type1;
        public int Type2;
        public bool Equipped;
        public int BodyPart;
        public int Enchant;
        public int Augmentation;
        public int Mana;
        /// <summary>customType1/2 do aCis (damaged e reserved do ItemInfo).</summary>
        public int CustomType1, CustomType2;
        /// <summary>Preco do item nas listas que o trazem (armazem, loja privada...); null nas demais.</summary>
        public int? Price, DefaultPrice;
        /// <summary>InventoryUpdate: 0 sem mudanca, 1 adicionado, 2 modificado, 3 removido. null no ItemList.</summary>
        public int? Change;
    }

    public sealed class ItemListInfo
    {
        public bool Show;
        public List<InvItem> Items = new List<InvItem>();
    }

    /// <summary>Atalho da barra. Type: "item" | "skill" | "action" | "macro".</summary>
    public sealed class Shortcut
    {
        /// <summary>slot + pagina*12</summary>
        public int Slot;
        public string Type;
        public int Id;
        public int Level;
    }

    public sealed class ShortcutDeleteInfo
    {
        public int Slot;
    }

    public sealed class SkillInfo
    {
        public int Id;
        public int Level;
        public bool Passive;
        public bool Disabled;
    }

    public sealed class ConfirmDlgInfo
    {
        public int MessageId;
        public List<string> Params = new List<string>();
        public int Time;
        public int RequesterId;
    }

    public sealed class ShowBoardInfo
    {
        public bool Show;
        public List<string> Buttons = new List<string>();
        public string Id;
        public string Html;
    }

    public sealed class ShopItem
    {
        public int ObjectId;
        public int ItemId;
        public int Count;
        public int Price;
        public int Enchant;
        public int Type2;
    }

    public sealed class BuyListInfo
    {
        public int Money;
        public int ListId;
        public List<ShopItem> Items = new List<ShopItem>();
    }

    public sealed class SellListInfo
    {
        public int Money;
        public List<ShopItem> Items = new List<ShopItem>();
    }

    public sealed class MultisellItem
    {
        /// <summary>h com sinal ((int)(short)): -100 = pontos do PC cafe, -200 = reputacao do cla (MultiSellWnd.uc).</summary>
        public int ItemId;
        public int Count;
        public int Enchant;
        /// <summary>Produto: d bodyPart (slotBitType) e h type2 (itemType); ingrediente: so o h type2 (nao vai para o evento).</summary>
        public int BodyPart, Type2;
        /// <summary>Os dois d de refinaria (produto: OutputRefineryOp; ingrediente: inputRefineryOp).</summary>
        public int Op1, Op2;
    }

    public sealed class MultisellEntry
    {
        public int EntryId;
        /// <summary>Os dois d depois do id (refineryOp1/2 do evento).</summary>
        public int Op1, Op2;
        /// <summary>O c da entrada (type do evento; MultiSellType 0 = quantidade fixa em 1, 1 = editavel).</summary>
        public int Type;
        public bool Stackable;
        public List<MultisellItem> Products = new List<MultisellItem>();
        public List<MultisellItem> Ingredients = new List<MultisellItem>();
    }

    public sealed class MultiSellListInfo
    {
        public int ListId;
        public int Page;
        public bool Finished;
        public List<MultisellEntry> Entries = new List<MultisellEntry>();
    }

    public sealed class SetupGaugeInfo
    {
        public int Color;
        public int Time;
        public int MaxTime;
    }

    public sealed class AbnormalInfo
    {
        public int SkillId;
        public int Level;
        /// <summary>-1 = permanente/toggle.</summary>
        public int Seconds;
    }

    public sealed class MagicSkillLaunchedInfo
    {
        public int ObjectId;
        public int SkillId;
        public int Level;
        public List<int> Targets = new List<int>();
    }

    public sealed class SpawnItemInfo
    {
        public int ObjectId, ItemId, X, Y, Z, Count;
    }

    public sealed class DropItemInfo
    {
        public int DropperId, ObjectId, ItemId, X, Y, Z, Count;
    }

    public sealed class GetItemInfo
    {
        public int PlayerId, ObjectId, X, Y, Z;
    }

    public static class UiPackets
    {
        // ---------------------------------------------------------------- servidor -> cliente

        /// <summary>NpcHtmlMessage 0x0f: D npcObjId, S html, D itemId.</summary>
        public static NpcHtmlInfo ParseNpcHtml(PacketReader r) => new NpcHtmlInfo { NpcObjectId = r.D(), Html = r.S(), ItemId = r.Remaining >= 4 ? r.D() : 0 };

        static InvItem ReadItem(PacketReader r, bool withChange)
        {
            var it = new InvItem();
            it.Change = withChange ? r.H() : (int?)null;
            it.Type1 = r.H();
            it.ObjectId = r.D();
            it.ItemId = r.D();
            it.Count = r.D();
            it.Type2 = r.H();
            it.CustomType1 = r.H();
            it.Equipped = r.H() != 0;
            it.BodyPart = r.D();
            it.Enchant = r.H();
            it.CustomType2 = r.H();
            // o engine le "hh" (as duas opcoes do aumento em shorts separados, FUN_10411870); o valor e o mesmo do d do aCis
            it.Augmentation = (r.H() & 0xffff) | (r.H() << 16);
            it.Mana = r.D();
            return it;
        }

        /// <summary>ItemList 0x1b: H mostrarJanela, H n, n itens.</summary>
        public static ItemListInfo ParseItemList(PacketReader r)
        {
            var o = new ItemListInfo { Show = r.H() == 1 };
            var n = r.H();
            for (var i = 0; i < n; i++) o.Items.Add(ReadItem(r, false));
            return o;
        }

        /// <summary>InventoryUpdate 0x27: H n, n x (H mudanca + item).</summary>
        public static List<InvItem> ParseInventoryUpdate(PacketReader r)
        {
            var n = r.H();
            var items = new List<InvItem>();
            for (var i = 0; i < n; i++) items.Add(ReadItem(r, true));
            return items;
        }

        // 5 = receita no Interlude (spec 05 §3); o ShortcutType do aCis vai so ate MACRO (4) e nao registra receitas
        static readonly Dictionary<int, string> ScTypes = new Dictionary<int, string> { [1] = "item", [2] = "skill", [3] = "action", [4] = "macro", [5] = "recipe" };
        /// <summary>Codigo do tipo de atalho ("item" 1, "skill" 2, "action" 3, "macro" 4, "recipe" 5).</summary>
        public static readonly Dictionary<string, int> ScCode = new Dictionary<string, int> { ["item"] = 1, ["skill"] = 2, ["action"] = 3, ["macro"] = 4, ["recipe"] = 5 };

        static Shortcut ReadShortcut(PacketReader r, bool init)
        {
            var t = r.D();
            var slot = r.D();
            if (!ScTypes.TryGetValue(t, out var type)) return null;
            if (type == "item")
            {
                var id = r.D();
                r.D(); // characterType
                r.D(); // sharedReuseGroup
                if (init)
                {
                    r.D(); // tempo restante
                    r.D(); // recarga
                    r.H(); // aumento: o engine le "dddddhh" (FUN do 0x45), as duas opcoes em shorts
                    r.H();
                }
                return new Shortcut { Slot = slot, Type = type, Id = id, Level = 0 };
            }
            if (type == "skill")
            {
                var id = r.D();
                var level = r.D();
                r.C();
                r.D();
                return new Shortcut { Slot = slot, Type = type, Id = id, Level = level };
            }
            var aid = r.D();
            r.D();
            return new Shortcut { Slot = slot, Type = type, Id = aid, Level = 0 };
        }

        /// <summary>ShortCutInit 0x45.</summary>
        public static List<Shortcut> ParseShortCutInit(PacketReader r)
        {
            var n = r.D();
            var o = new List<Shortcut>();
            for (var i = 0; i < n && r.Remaining >= 8; i++)
            {
                var s = ReadShortcut(r, true);
                if (s != null) o.Add(s);
            }
            return o;
        }

        /// <summary>ShortCutRegister 0x44 (null se o tipo for desconhecido).</summary>
        public static Shortcut ParseShortCutRegister(PacketReader r) => ReadShortcut(r, false);
        /// <summary>ShortCutDelete 0x46: D slot.</summary>
        public static ShortcutDeleteInfo ParseShortCutDelete(PacketReader r) => new ShortcutDeleteInfo { Slot = r.D() };

        /// <summary>SkillList 0x58.</summary>
        public static List<SkillInfo> ParseSkillList(PacketReader r)
        {
            var n = r.D();
            var o = new List<SkillInfo>();
            for (var i = 0; i < n; i++)
            {
                var passive = r.D() == 1;
                var level = r.D();
                var id = r.D();
                var disabled = r.C() == 1;
                o.Add(new SkillInfo { Id = id, Level = level, Passive = passive, Disabled = disabled });
            }
            return o;
        }

        /// <summary>ConfirmDlg 0xed: D messageId, D n, parametros (como SystemMessage), [D tempo], [D requesterId].</summary>
        /// <summary>
        /// EtcStatusUpdate 0xF3 "ddddddd" (FUN_1041a880): cada valor &gt; 0 vira um icone, nesta ordem: 7o -> 5076 (nivel = valor),
        /// 1o -> 4271 (valor), 2o -> 4270 (valor), 3o -> 4269, 4o -> 4268, 5o -> 4267, 6o -> 5041 (nivel 1); sem tempo (-1).
        /// </summary>
        public static List<AbnormalInfo> ParseEtcStatus(PacketReader r)
        {
            var v = new int[7];
            for (var i = 0; i < 7; i++) v[i] = r.D();
            var o = new List<AbnormalInfo>();
            void Add(int value, int id, int level)
            {
                if (value > 0) o.Add(new AbnormalInfo { SkillId = id, Level = level, Seconds = -1 });
            }
            Add(v[6], 0x13d4, v[6]);
            Add(v[0], 0x10af, v[0]);
            Add(v[1], 0x10ae, v[1]);
            Add(v[2], 0x10ad, 1);
            Add(v[3], 0x10ac, 1);
            Add(v[4], 0x10ab, 1);
            Add(v[5], 0x13b1, 1);
            return o;
        }

        /// <summary>ShortBuffStatusUpdate 0xF4 "ddd" (FUN_1041aaf0): um item (skill, nivel, segundos).</summary>
        public static List<AbnormalInfo> ParseShortBuff(PacketReader r) =>
            new() { new AbnormalInfo { SkillId = r.D(), Level = r.D(), Seconds = r.D() } };

        /// <summary>ExRegenMax FE:01 "dddf" (FUN_1041b7b0): Type, Duration, Ticks, Amount.</summary>
        public static (int Type, int Duration, int Ticks, double Amount) ParseExRegenMax(PacketReader r) => (r.D(), r.D(), r.D(), r.F());

        /// <summary>ExAutoSoulShot FE:12 "dd": item e ligado (1).</summary>
        public static (int ItemId, bool On) ParseExAutoSoulShot(PacketReader r) => (r.D(), r.D() == 1);

        public static ConfirmDlgInfo ParseConfirmDlg(PacketReader r)
        {
            var o = new ConfirmDlgInfo { MessageId = r.D() };
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 4; i++)
            {
                var t = r.D();
                if (t == 0) o.Params.Add(r.S());
                else if (t == 4)
                {
                    var a = r.D();
                    var b = r.D();
                    o.Params.Add($"skill {a} {b}");
                }
                else if (t == 7)
                {
                    var x = r.D();
                    var y = r.D();
                    var z = r.D();
                    o.Params.Add($"{x}, {y}, {z}");
                }
                // como o SystemMessage do engine: 1/2/3/5 "d", 6 "Q"; outro tipo nao le nada (o laco segue)
                else if (t == 1 || t == 2 || t == 3 || t == 5) o.Params.Add(r.D().ToString());
                else if (t == 6) o.Params.Add((r.Remaining >= 8 ? r.Q() : r.D() & 0xffffffffL).ToString());
            }
            o.Time = r.Remaining >= 4 ? r.D() : 0;
            o.RequesterId = r.Remaining >= 4 ? r.D() : 0;
            return o;
        }

        // ---------------------------------------------------------------- cliente -> servidor

        public static byte[] BypassToServer(string command) => new PacketWriter().C(0x21).S(command).Bytes();
        public static byte[] RequestLinkHtml(string link) => new PacketWriter().C(0x20).S(link).Bytes();
        public static byte[] UseItem(int objectId, bool ctrl = false) => new PacketWriter().C(0x14).D(objectId).D(ctrl ? 1 : 0).Bytes();
        public static byte[] RequestItemList() => new PacketWriter().C(0x0f).Bytes();
        public static byte[] RequestSkillList() => new PacketWriter().C(0x3f).Bytes();
        public static byte[] MagicSkillUse(int skillId, bool ctrl = false, bool shift = false) => new PacketWriter().C(0x2f).D(skillId).D(ctrl ? 1 : 0).C(shift ? 1 : 0).Bytes();
        /// <summary>
        /// RequestShortCutReg 0x33 "dddd": tipo ("item" | "skill" | "action" | "macro" | "recipe"), slot + pagina*12, id e
        /// UserShortCut (characterType do aCis): 1 jogador, 2 pet (acoes 15-27 e itens do inventario do pet, nw:0x100480c0).
        /// </summary>
        public static byte[] ShortCutReg(string type, int slot, int id, int userShortCut = 1) =>
            new PacketWriter().C(0x33).D(ScCode[type]).D(slot).D(id).D(userShortCut).Bytes();
        public static byte[] ShortCutDel(int slot) => new PacketWriter().C(0x35).D(slot).Bytes();

        // ---------------------------------------------------------------- inventario (T2, InventoryWnd.uc)

        /// <summary>RequestUnEquipItem 0x11 "d": slotBitType do item (bodyPart do ItemList; o aCis desequipa pelo slot).</summary>
        public static byte[] RequestUnEquipItem(int slotBitType) => new PacketWriter().C(0x11).D(slotBitType).Bytes();

        /// <summary>RequestDropItem 0x12 "ddddd": objectId, quantidade e o ponto do mundo (coordenadas do L2) onde largar.</summary>
        public static byte[] RequestDropItem(int objectId, int count, int x, int y, int z) =>
            new PacketWriter().C(0x12).D(objectId).D(count).D(x).D(y).D(z).Bytes();

        /// <summary>RequestDestroyItem 0x59 "dd": objectId e quantidade (lixeira do inventario).</summary>
        public static byte[] RequestDestroyItem(int objectId, int count) => new PacketWriter().C(0x59).D(objectId).D(count).Bytes();

        /// <summary>RequestCrystallizeItem 0x72 "dd": objectId e quantidade.</summary>
        public static byte[] RequestCrystallizeItem(int objectId, int count) => new PacketWriter().C(0x72).D(objectId).D(count).Bytes();
        public static byte[] DlgAnswer(int messageId, bool answer, int requesterId) => new PacketWriter().C(0xc5).D(messageId).D(answer ? 1 : 0).D(requesterId).Bytes();

        /// <summary>ShowBoard 0x6e (Community Board): C mostrar, 8 x S bypass dos botoes do topo, S "id\bhtml".</summary>
        public static ShowBoardInfo ParseShowBoard(PacketReader r)
        {
            var o = new ShowBoardInfo { Show = r.C() == 1 };
            for (var i = 0; i < 8; i++) o.Buttons.Add(r.S());
            var raw = r.S();
            var cut = raw.IndexOf('\b');
            o.Id = cut >= 0 ? raw.Substring(0, cut) : "";
            var html = cut >= 0 ? raw.Substring(cut + 1) : raw;
            if (html == "null") html = ""; // partes 102/103 vazias chegam como "null"
            o.Html = html;
            return o;
        }

        /// <summary>RequestShowBoard 0x57 (Alt+B).</summary>
        public static byte[] RequestShowBoard() => new PacketWriter().C(0x57).D(1).Bytes();

        /// <summary>RequestShowMiniMap 0xcd (RequestOpenMinimap do script; o mapa so abre na resposta ShowMiniMap).</summary>
        public static byte[] RequestShowMiniMap() => new PacketWriter().C(0xcd).Bytes();

        /// <summary>ShowMiniMap 0x9d: "dc" (id do mapa, periodo do Seven Signs) -> UGameEngine::OnShowMinimap(periodo).</summary>
        public static (int mapId, int ssq) ParseShowMiniMap(PacketReader r) => (r.D(), r.C());

        // ---------------------------------------------------------------- lojas

        static ShopItem ReadShopItem(PacketReader r)
        {
            r.H(); // type1
            var objectId = r.D();
            var itemId = r.D();
            var count = r.D();
            var type2 = r.H();
            r.H();
            r.D(); // bodyPart
            var enchant = r.H();
            r.H();
            r.H();
            var price = r.D();
            return new ShopItem { ObjectId = objectId, ItemId = itemId, Count = count, Price = price, Enchant = enchant, Type2 = type2 };
        }

        /// <summary>BuyList 0x11: D adena, D listId, H n, n x 32 bytes. O servidor pode pular itens sem estoque sem corrigir n.</summary>
        public static BuyListInfo ParseBuyList(PacketReader r)
        {
            var o = new BuyListInfo { Money = r.D(), ListId = r.D() };
            var n = r.H();
            for (var i = 0; i < n && r.Remaining >= 32; i++) o.Items.Add(ReadShopItem(r));
            return o;
        }

        /// <summary>SellList 0x10: D adena, D 0, H n, n x 32 bytes (preco = referencia/2).</summary>
        public static SellListInfo ParseSellList(PacketReader r)
        {
            var o = new SellListInfo { Money = r.D() };
            r.D();
            var n = r.H();
            for (var i = 0; i < n && r.Remaining >= 32; i++) o.Items.Add(ReadShopItem(r));
            return o;
        }

        /// <summary>MultiSellList 0xd0: D listId, D pagina, D terminou, D tamanhoPagina, D n, entradas.</summary>
        public static MultiSellListInfo ParseMultiSellList(PacketReader r)
        {
            // FUN_104183a0 (Engine.dll): "ddddd" lista, pagina, fim, tamanho da pagina, entradas; por entrada "dddchh"; produto
            // "hdhdhdd"; ingrediente "hhdhdd". Os h vao para o evento com sinal ((int)short).
            var o = new MultiSellListInfo { ListId = r.D(), Page = r.D(), Finished = r.D() == 1 };
            r.D(); // tamanho da pagina
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 17; i++)
            {
                var e = new MultisellEntry { EntryId = r.D(), Op1 = r.D(), Op2 = r.D() };
                e.Type = (sbyte)r.C();
                e.Stackable = e.Type == 1;
                var np = (short)r.H();
                var ni = (short)r.H();
                for (var k = 0; k < np; k++)
                    e.Products.Add(new MultisellItem
                    {
                        ItemId = (short)r.H(), BodyPart = r.D(), Type2 = (short)r.H(), Count = r.D(), Enchant = (short)r.H(), Op1 = r.D(), Op2 = r.D(),
                    });
                for (var k = 0; k < ni; k++)
                    e.Ingredients.Add(new MultisellItem
                    {
                        ItemId = (short)r.H(), Type2 = (short)r.H(), Count = r.D(), Enchant = (short)r.H(), Op1 = r.D(), Op2 = r.D(),
                    });
                o.Entries.Add(e);
            }
            return o;
        }

        public static byte[] RequestBuyItem(int listId, IList<(int ItemId, int Count)> items)
        {
            var w = new PacketWriter().C(0x1f).D(listId).D(items.Count);
            foreach (var i in items) w.D(i.ItemId).D(i.Count);
            return w.Bytes();
        }

        public static byte[] RequestSellItem(int listId, IList<(int ObjectId, int ItemId, int Count)> items)
        {
            var w = new PacketWriter().C(0x1e).D(listId).D(items.Count);
            foreach (var i in items) w.D(i.ObjectId).D(i.ItemId).D(i.Count);
            return w.Bytes();
        }

        /// <summary>
        /// RequestMultiSellChoose 0xa7 `cddddd`: ShopID, ItemID, ItemCount, RefineryOp1 e RefineryOp2, nessa ordem
        /// (UUIScript::execRequestMultiSellChoose monta a pilha assim; o MultiSellWnd.uc passa os RefineryOp do item).
        /// </summary>
        public static byte[] MultiSellChoose(int listId, int entryId, int amount, int refineryOp1 = 0, int refineryOp2 = 0) =>
            new PacketWriter().C(0xa7).D(listId).D(entryId).D(amount).D(refineryOp1).D(refineryOp2).Bytes();

        /// <summary>SetupGauge 0x6d: D cor (0 azul cast), D tempo ms, D tempo maximo ms.</summary>
        public static SetupGaugeInfo ParseSetupGauge(PacketReader r) => new SetupGaugeInfo { Color = r.D(), Time = r.D(), MaxTime = r.Remaining >= 4 ? r.D() : 0 };

        /// <summary>AbnormalStatusUpdate 0x7f: H n, n x (D skillId, H nivel, D segundos, -1 = permanente/toggle).</summary>
        public static List<AbnormalInfo> ParseAbnormalStatus(PacketReader r)
        {
            var n = r.H();
            var o = new List<AbnormalInfo>();
            for (var i = 0; i < n && r.Remaining >= 10; i++) o.Add(new AbnormalInfo { SkillId = r.D(), Level = r.H(), Seconds = r.D() });
            return o;
        }

        /// <summary>MagicSkillLaunched 0x76: D objId, D skillId, D nivel, D n, alvos.</summary>
        public static MagicSkillLaunchedInfo ParseMagicSkillLaunched(PacketReader r)
        {
            var o = new MagicSkillLaunchedInfo { ObjectId = r.D(), SkillId = r.D(), Level = r.D() };
            var n = r.D();
            for (var i = 0; i < Math.Max(1, n) && r.Remaining >= 4; i++) o.Targets.Add(r.D());
            return o;
        }

        /// <summary>RequestAutoSoulShot 0xd0 0x05: D itemId, D 1 liga / 0 desliga.</summary>
        public static byte[] RequestAutoSoulShot(int itemId, bool on) => new PacketWriter().C(0xd0).H(0x05).D(itemId).D(on ? 1 : 0).Bytes();

        /// <summary>SpawnItem 0x0b: D obj, D itemId, D x, D y, D z, D empilhavel, D quantidade.</summary>
        public static SpawnItemInfo ParseSpawnItem(PacketReader r)
        {
            var o = new SpawnItemInfo { ObjectId = r.D(), ItemId = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
            r.D();
            o.Count = r.D();
            return o;
        }

        /// <summary>DropItem 0x0c: D quemDropou, D obj, D itemId, D x, D y, D z, D empilhavel, D quantidade.</summary>
        public static DropItemInfo ParseDropItem(PacketReader r)
        {
            var o = new DropItemInfo { DropperId = r.D(), ObjectId = r.D(), ItemId = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
            r.D();
            o.Count = r.D();
            return o;
        }

        /// <summary>GetItem 0x0d: D quemPegou, D obj, D x, D y, D z.</summary>
        public static GetItemInfo ParseGetItem(PacketReader r) => new GetItemInfo { PlayerId = r.D(), ObjectId = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
    }
}
