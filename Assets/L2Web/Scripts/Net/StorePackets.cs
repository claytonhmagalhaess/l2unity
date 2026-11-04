// Armazem, frete e loja privada (#0046, T6/T12/T18): WarehouseDepositList/WithdrawList 0x41/0x42, ExStorageMaxCount FE:2e,
// PackageToList/PackageSendableList 0xc2/0xc3, PrivateStoreManageListSell 0x9a, PrivateStoreManageListBuy 0xb7,
// PrivateStoreListBuy 0xb8 e PrivateStoreMsgBuy 0xb9, e os envios de cada janela. Campos pelo aCis (serverpackets/ e
// clientpackets/ do servidor do usuario); os tipos lidos sao conferidos contra o engine.dll em ReceivedLayoutTests e os
// formatos dos envios em RequestFormatTests.
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class WarehouseListInfo
    {
        /// <summary>true = WarehouseDepositList (0x41), false = WarehouseWithdrawList (0x42).</summary>
        public bool Deposit;
        /// <summary>category do EV_WarehouseOpenWindow: 1 privado, 2 cla, 3 castelo, 4 frete (whType do aCis).</summary>
        public int Category;
        public int Adena;
        /// <summary>Reserved de cada item = dbID que vai no SendWarehouse*List (WarehouseWnd.uc:421-455).</summary>
        public List<InvItem> Items = new List<InvItem>();
    }

    /// <summary>ExStorageMaxCount FE:2e, na ordem do aCis; as chaves sao as do EV_SetMaxCount (spec 91).</summary>
    public sealed class StorageMaxCountInfo
    {
        public int Inventory;
        public int WarehousePrivate;
        /// <summary>3o d: o aCis manda o limite do frete; o NWindow.dll so tem a chave warehouseClan (a validar).</summary>
        public int WarehouseClan;
        public int PrivateShopSell, PrivateShopBuy;
        public int DwarvenRecipe, Recipe;
    }

    public sealed class DeliverTarget
    {
        public int ObjectId;
        public string Name;
    }

    public sealed class PackageSendableListInfo
    {
        /// <summary>destinationID do EV_DeliverOpenWindow (o personagem que recebe).</summary>
        public int TargetId;
        public int Adena;
        /// <summary>Reserved de cada item = dbID que vai no RequestPackageSend (DeliverWnd.uc:301-321).</summary>
        public List<InvItem> Items = new List<InvItem>();
    }

    public sealed class PrivateStoreManageInfo
    {
        /// <summary>true = PrivateStoreManageListSell (0x9a, "sellList"), false = PrivateStoreManageListBuy (0xb7, "buyList").</summary>
        public bool Sell;
        public int OwnerId;
        /// <summary>Venda em pacote (so na venda).</summary>
        public bool PackageSale;
        public int Adena;
        /// <summary>Lista de cima: o que pode entrar na loja.</summary>
        public List<InvItem> Inventory = new List<InvItem>();
        /// <summary>Lista de baixo: o que ja esta na loja (Price = preco do dono, DefaultPrice = preco de referencia).</summary>
        public List<InvItem> Store = new List<InvItem>();
    }

    public sealed class PrivateStoreBuyListInfo
    {
        /// <summary>Dono da loja de compra (merchantID do envio).</summary>
        public int OwnerId;
        public int Adena;
        /// <summary>O que o dono quer comprar (Price = o que ele paga, Limit = quantidade maxima).</summary>
        public List<InvItem> Items = new List<InvItem>();
    }

    public static class StorePackets
    {
        /// <summary>Item do armazem/frete "hdddhhdhhhd": type1, obj, id, qtd, type2, custom1, bodyPart, enchant, custom2, 0, dbID.</summary>
        static InvItem ReadStorageItem(PacketReader r)
        {
            var it = new InvItem { Type1 = r.H(), ObjectId = r.D(), ItemId = r.D(), Count = r.D(), Type2 = r.H(), CustomType1 = r.H() };
            it.BodyPart = r.D();
            it.Enchant = r.H();
            it.CustomType2 = r.H();
            r.H();
            it.Reserved = r.D();
            return it;
        }

        /// <summary>WarehouseDepositList 0x41 / WarehouseWithdrawList 0x42: H categoria, D adena, H n, n x (item + D aumento 1, D aumento 2).</summary>
        public static WarehouseListInfo ParseWarehouseList(PacketReader r, bool deposit)
        {
            var o = new WarehouseListInfo { Deposit = deposit, Category = r.H(), Adena = r.D() };
            var n = r.H();
            for (var i = 0; i < n; i++)
            {
                var it = ReadStorageItem(r);
                it.Augmentation = (r.D() & 0xffff) | (r.D() << 16);
                o.Items.Add(it);
            }
            return o;
        }

        public static WarehouseListInfo ParseWarehouseDepositList(PacketReader r) => ParseWarehouseList(r, true);
        public static WarehouseListInfo ParseWarehouseWithdrawList(PacketReader r) => ParseWarehouseList(r, false);

        /// <summary>ExStorageMaxCount FE:2e "ddddddd" (sem o sub-opcode).</summary>
        public static StorageMaxCountInfo ParseExStorageMaxCount(PacketReader r) => new StorageMaxCountInfo
        {
            Inventory = r.D(), WarehousePrivate = r.D(), WarehouseClan = r.D(), PrivateShopSell = r.D(), PrivateShopBuy = r.D(),
            DwarvenRecipe = r.D(), Recipe = r.D(),
        };

        /// <summary>PackageToList 0xc2: D n, n x (D obj, S nome) dos personagens da conta que podem receber o frete.</summary>
        public static List<DeliverTarget> ParsePackageToList(PacketReader r)
        {
            var n = r.D();
            var o = new List<DeliverTarget>();
            for (var i = 0; i < n; i++) o.Add(new DeliverTarget { ObjectId = r.D(), Name = r.S() });
            return o;
        }

        /// <summary>PackageSendableList 0xc3: D destino, D adena, D n, n itens (sem aumento).</summary>
        public static PackageSendableListInfo ParsePackageSendableList(PacketReader r)
        {
            var o = new PackageSendableListInfo { TargetId = r.D(), Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Items.Add(ReadStorageItem(r));
            return o;
        }

        /// <summary>Item da venda "ddddhhhdd" + [d preco de referencia]: type2, obj, id, qtd, 0, enchant, 0, bodyPart, preco.</summary>
        static InvItem ReadSellItem(PacketReader r, bool withReference)
        {
            var it = new InvItem { Type2 = r.D(), ObjectId = r.D(), ItemId = r.D(), Count = r.D() };
            r.H();
            it.Enchant = r.H();
            r.H();
            it.BodyPart = r.D();
            it.Price = r.D();
            if (withReference) it.DefaultPrice = r.D();
            return it;
        }

        /// <summary>PrivateStoreManageListSell 0x9a: D dono, D pacote, D adena, D n, inventario, D m, itens da loja.</summary>
        public static PrivateStoreManageInfo ParsePrivateStoreManageListSell(PacketReader r)
        {
            var o = new PrivateStoreManageInfo { Sell = true, OwnerId = r.D(), PackageSale = r.D() == 1, Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Inventory.Add(ReadSellItem(r, false));
            var m = r.D();
            for (var i = 0; i < m; i++) o.Store.Add(ReadSellItem(r, true));
            return o;
        }

        /// <summary>Item da compra "dhdd" + "hdh": id, enchant, qtd, preco de referencia, 0, bodyPart, type2 (sem objectId).</summary>
        static InvItem ReadBuyItem(PacketReader r)
        {
            var it = new InvItem { ItemId = r.D(), Enchant = r.H(), Count = r.D(), DefaultPrice = r.D() };
            r.H();
            it.BodyPart = r.D();
            it.Type2 = r.H();
            return it;
        }

        /// <summary>PrivateStoreManageListBuy 0xb7: D dono, D adena, D n, inventario, D m, itens da compra (+ D preco, D referencia).</summary>
        public static PrivateStoreManageInfo ParsePrivateStoreManageListBuy(PacketReader r)
        {
            var o = new PrivateStoreManageInfo { Sell = false, OwnerId = r.D(), Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Inventory.Add(ReadBuyItem(r));
            var m = r.D();
            for (var i = 0; i < m; i++)
            {
                var it = ReadBuyItem(r);
                it.Price = r.D();
                it.DefaultPrice = r.D();
                o.Store.Add(it);
            }
            return o;
        }

        /// <summary>PrivateStoreListBuy 0xb8: D dono, D adena, D n, n x (D obj, item da compra, D preco, D quantidade maxima).</summary>
        public static PrivateStoreBuyListInfo ParsePrivateStoreListBuy(PacketReader r)
        {
            var o = new PrivateStoreBuyListInfo { OwnerId = r.D(), Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++)
            {
                var obj = r.D();
                var it = ReadBuyItem(r);
                it.ObjectId = obj;
                it.Price = r.D();
                it.Limit = r.D();
                o.Items.Add(it);
            }
            return o;
        }

        /// <summary>PrivateStoreMsgBuy 0xb9: D dono, S titulo da loja de compra.</summary>
        public static PrivateStoreMsgInfo ParsePrivateStoreMsgBuy(PacketReader r) => new PrivateStoreMsgInfo { OwnerId = r.D(), Message = r.S() };

        // ---------------------------------------------------------------- cliente -> servidor

        static byte[] Pairs(int op, IList<(int DbId, int Count)> items, int? head = null)
        {
            var w = new PacketWriter().C(op);
            if (head != null) w.D(head.Value);
            w.D(items.Count);
            foreach (var i in items) w.D(i.DbId).D(i.Count);
            return w.Bytes();
        }

        /// <summary>SendWarehouseDepositList 0x31 "db": n, n x (D dbID, D qtd).</summary>
        public static byte[] SendWarehouseDepositList(IList<(int DbId, int Count)> items) => Pairs(0x31, items);

        /// <summary>SendWarehouseWithdrawList 0x32 "db": n, n x (D dbID, D qtd).</summary>
        public static byte[] SendWarehouseWithdrawList(IList<(int DbId, int Count)> items) => Pairs(0x32, items);

        /// <summary>RequestPackageSendableItemList 0x9e "d": o personagem escolhido no SelectDeliverWnd.</summary>
        public static byte[] RequestPackageSendableItemList(int targetId) => new PacketWriter().C(0x9e).D(targetId).Bytes();

        /// <summary>RequestPackageSend 0x9f "ddb": destino, n, n x (D dbID, D qtd).</summary>
        public static byte[] RequestPackageSend(int targetId, IList<(int DbId, int Count)> items) => Pairs(0x9f, items, targetId);

        /// <summary>RequestPrivateStoreManage 0x73 (RequestPrivateStoreManageSell do aCis): pede o PrivateStoreManageListSell.</summary>
        public static byte[] RequestPrivateStoreManageSell() => new PacketWriter().C(0x73).Bytes();

        /// <summary>SetPrivateStoreList 0x74 "ddb": pacote, n, n x (D objectId, D qtd, D preco) (sellList do PrivateShopWnd).</summary>
        public static byte[] SetPrivateStoreListSell(bool packageSale, IList<(int ObjectId, int Count, int Price)> items)
        {
            var w = new PacketWriter().C(0x74).D(packageSale ? 1 : 0).D(items.Count);
            foreach (var i in items) w.D(i.ObjectId).D(i.Count).D(i.Price);
            return w.Bytes();
        }

        /// <summary>RequestPrivateStoreQuit 0x76: fecha a loja de venda.</summary>
        public static byte[] RequestPrivateStoreQuitSell() => new PacketWriter().C(0x76).Bytes();

        /// <summary>SetPrivateStoreMsg 0x77 "S": titulo da loja de venda (o PrivateShopWnd limita a 29 caracteres).</summary>
        public static byte[] SetPrivateStoreMsgSell(string msg) => new PacketWriter().C(0x77).S(msg ?? "").Bytes();

        /// <summary>RequestPrivateStoreBuyManage 0x90 (RequestPrivateStoreManageBuy do aCis): pede o PrivateStoreManageListBuy.</summary>
        public static byte[] RequestPrivateStoreManageBuy() => new PacketWriter().C(0x90).Bytes();

        /// <summary>
        /// SetPrivateStoreBuyList 0x91 "db": n, n x (D classID, H enchant, H damaged, D qtd, D preco) (buyList do PrivateShopWnd;
        /// o aCis pula os dois h).
        /// </summary>
        public static byte[] SetPrivateStoreListBuy(IList<(int ItemId, int Enchant, int Damaged, int Count, int Price)> items)
        {
            var w = new PacketWriter().C(0x91).D(items.Count);
            foreach (var i in items) w.D(i.ItemId).H(i.Enchant).H(i.Damaged).D(i.Count).D(i.Price);
            return w.Bytes();
        }

        /// <summary>RequestPrivateStoreBuyQuit 0x93: fecha a loja de compra.</summary>
        public static byte[] RequestPrivateStoreQuitBuy() => new PacketWriter().C(0x93).Bytes();

        /// <summary>SetPrivateStoreBuyMsg 0x94 "S": titulo da loja de compra.</summary>
        public static byte[] SetPrivateStoreMsgBuy(string msg) => new PacketWriter().C(0x94).S(msg ?? "").Bytes();

        /// <summary>
        /// SendPrivateStoreBuyBuyList 0x96 "ddb" (RequestPrivateStoreSell do aCis): dono da loja de compra, n, n x (D objectId,
        /// D classID, H enchant, H damaged, D qtd, D preco) (sell do PrivateShopWnd).
        /// </summary>
        public static byte[] RequestPrivateStoreSell(int ownerId, IList<(int ObjectId, int ItemId, int Enchant, int Damaged, int Count, int Price)> items)
        {
            var w = new PacketWriter().C(0x96).D(ownerId).D(items.Count);
            foreach (var i in items) w.D(i.ObjectId).D(i.ItemId).H(i.Enchant).H(i.Damaged).D(i.Count).D(i.Price);
            return w.Bytes();
        }
    }
}
