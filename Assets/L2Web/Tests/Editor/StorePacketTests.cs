// Comercio, armazem, frete e loja privada (#0046, T5/T6/T12/T18): cada recebido montado como o aCis o escreve
// (serverpackets/*.java), os eventos que o InterfaceRouter entrega e cada envio campo a campo como o aCis o le.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class StorePacketTests
    {
        static void Bytes(PacketWriter expected, byte[] actual) => CollectionAssert.AreEqual(expected.Bytes(), actual);

        static (InterfaceRouter, GameClient, List<PacketEvents.Event>) Router()
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            return (new InterfaceRouter(gc, got.AddRange), gc, got);
        }

        static string S(string p, string key)
        {
            string v = null;
            L2Param.ParseString(p, key, ref v);
            return v;
        }

        /// <summary>Item do WarehouseDepositList/WithdrawList.writeImpl (sem aumento: writeQ(0)).</summary>
        static PacketWriter StorageItem(PacketWriter w, int obj, int id, int count)
        {
            w.H(4).D(obj).D(id).D(count).H(5).H(0).D(0).H(3).H(0).H(0).D(obj);
            return w;
        }

        [Test]
        public void WarehouseDepositList_ItensEEventos()
        {
            var w = new PacketWriter().C(0x41).H(1).D(5000).H(2);
            StorageItem(w, 0x10000001, 57, 100).D(0).D(0);
            StorageItem(w, 0x10000002, 1835, 50).D(0x1234).D(0x5678); // aumentado
            var r = new PacketReader(w.Bytes(), 1);
            var l = StorePackets.ParseWarehouseDepositList(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((true, 1, 5000, 2), (l.Deposit, l.Category, l.Adena, l.Items.Count));
            Assert.AreEqual((0x10000002, 1835, 50, 3, 0x10000002), (l.Items[1].ObjectId, l.Items[1].ItemId, l.Items[1].Count, l.Items[1].Enchant, l.Items[1].Reserved.Value));
            Assert.AreEqual(0x56781234, l.Items[1].Augmentation);

            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual(new[] { Ev.EV_InventoryHideWindow, Ev.EV_WarehouseOpenWindow, Ev.EV_WarehouseAddItem, Ev.EV_WarehouseAddItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("deposit", "1", "5000"), (S(got[1].Param, "type"), S(got[1].Param, "category"), S(got[1].Param, "adena")));
            Assert.AreEqual(("1835", "268435458", "50", "268435458"), (S(got[3].Param, "classID"), S(got[3].Param, "serverID"), S(got[3].Param, "itemNum"), S(got[3].Param, "reserved")));
            Assert.AreEqual(("4660", "22136"), (S(got[3].Param, "refineryOp1"), S(got[3].Param, "refineryOp2")));
            Assert.AreEqual(2, router.Warehouse.Items.Count);
        }

        [Test]
        public void WarehouseWithdrawList_SemFecharOInventario()
        {
            var w = new PacketWriter().C(0x42).H(2).D(10).H(1);
            StorageItem(w, 0x10000003, 57, 1).D(0).D(0);
            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual(new[] { Ev.EV_WarehouseOpenWindow, Ev.EV_WarehouseAddItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("withdraw", "2"), (S(got[0].Param, "type"), S(got[0].Param, "category")));
            Assert.IsFalse(router.Warehouse.Deposit);
        }

        [Test]
        public void ExStorageMaxCount_SetMaxCount()
        {
            var (router, gc, got) = Router();
            gc.Dispatch(new PacketWriter().C(0xfe).H(0x2e).D(80).D(100).D(20).D(3).D(4).D(0).D(0).Bytes());
            Assert.AreEqual(Ev.EV_SetMaxCount, got.Single().Id);
            var p = got[0].Param;
            Assert.AreEqual(("80", "100", "20", "3", "4"), (S(p, "inventory"), S(p, "warehousePrivate"), S(p, "warehouseClan"), S(p, "privateShopSell"), S(p, "privateShopBuy")));
            Assert.AreEqual(100, router.StorageMax.WarehousePrivate);
        }

        [Test]
        public void PackageToList_LimpaEAdicionaNomes()
        {
            var (router, gc, got) = Router();
            gc.Dispatch(new PacketWriter().C(0xc2).D(2).D(0x10000010).S("Alt1").D(0x10000011).S("Alt2").Bytes());
            Assert.AreEqual(new[] { Ev.EV_SelectDeliverClear, Ev.EV_SelectDeliverAddName, Ev.EV_SelectDeliverAddName }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("Alt2", "268435473"), (S(got[2].Param, "name"), S(got[2].Param, "id")));
            Assert.AreEqual(2, router.DeliverTargets.Count);
        }

        [Test]
        public void PackageSendableList_DestinoEItens()
        {
            var w = new PacketWriter().C(0xc3).D(0x10000010).D(777).D(1);
            StorageItem(w, 0x10000004, 57, 9);
            var r = new PacketReader(w.Bytes(), 1);
            var s = StorePackets.ParsePackageSendableList(r);
            Assert.AreEqual(0, r.Remaining);
            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual(new[] { Ev.EV_DeliverOpenWindow, Ev.EV_DeliverAddItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("777", "268435472"), (S(got[0].Param, "adena"), S(got[0].Param, "destinationID")));
            Assert.AreEqual("268435460", S(got[1].Param, "reserved"));
        }

        [Test]
        public void PrivateStoreManageListSell_InventarioELoja()
        {
            // PrivateStoreManageListSell.writeImpl: inventario sem preco de referencia, itens da loja com
            var w = new PacketWriter().C(0x9a).D(0x10000001).D(1).D(900).D(1);
            w.D(5).D(0x10000005).D(1835).D(200).H(0).H(0).H(0).D(0).D(0);
            w.D(1).D(5).D(0x10000006).D(1463).D(30).H(0).H(2).H(0).D(0).D(15).D(10);
            var r = new PacketReader(w.Bytes(), 1);
            var m = StorePackets.ParsePrivateStoreManageListSell(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((true, true, 900), (m.Sell, m.PackageSale, m.Adena));
            Assert.AreEqual((1463, 30, 2, 15, 10), (m.Store[0].ItemId, m.Store[0].Count, m.Store[0].Enchant, m.Store[0].Price.Value, m.Store[0].DefaultPrice.Value));
            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual(new[] { Ev.EV_PrivateShopOpenWindow, Ev.EV_PrivateShopAddItem, Ev.EV_PrivateShopAddItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("sellList", "1", "268435457"), (S(got[0].Param, "type"), S(got[0].Param, "bulk"), S(got[0].Param, "userID")));
            Assert.AreEqual(("topList", "bottomList", "15"), (S(got[1].Param, "target"), S(got[2].Param, "target"), S(got[2].Param, "price")));
        }

        [Test]
        public void PrivateStoreManageListBuy_InventarioECompra()
        {
            var w = new PacketWriter().C(0xb7).D(0x10000001).D(900).D(1);
            w.D(57).H(0).D(1).D(1).H(0).D(0).H(4);
            w.D(1).D(1463).H(0).D(500).D(10).H(0).D(0).H(5).D(12).D(10);
            var r = new PacketReader(w.Bytes(), 1);
            var m = StorePackets.ParsePrivateStoreManageListBuy(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((1463, 500, 12, 10, 5), (m.Store[0].ItemId, m.Store[0].Count, m.Store[0].Price.Value, m.Store[0].DefaultPrice.Value, m.Store[0].Type2));
            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual("buyList", S(got[0].Param, "type"));
            Assert.IsFalse(router.StoreManage.Sell);
        }

        [Test]
        public void PrivateStoreListBuy_VenderParaACompraDeOutro()
        {
            var w = new PacketWriter().C(0xb8).D(0x10000009).D(900).D(1);
            w.D(0x10000007).D(1463).H(0).D(40).D(10).H(0).D(0).H(5).D(12).D(40);
            var r = new PacketReader(w.Bytes(), 1);
            var b = StorePackets.ParsePrivateStoreListBuy(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((0x10000007, 1463, 40, 12, 40), (b.Items[0].ObjectId, b.Items[0].ItemId, b.Items[0].Count, b.Items[0].Price.Value, b.Items[0].Limit.Value));
            var (router, gc, got) = Router();
            gc.Dispatch(w.Bytes());
            Assert.AreEqual(new[] { Ev.EV_PrivateShopOpenWindow, Ev.EV_PrivateShopAddItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("sell", "268435465", "topList"), (S(got[0].Param, "type"), S(got[0].Param, "userID"), S(got[1].Param, "target")));
        }

        [Test]
        public void PrivateStoreMsgBuy_SoParaOMundo()
        {
            var (router, gc, got) = Router();
            PrivateStoreMsgInfo m = null;
            router.OnPrivateStoreMsgBuy = x => m = x;
            gc.Dispatch(new PacketWriter().C(0xb9).D(0x10000009).S("compro SoP").Bytes());
            Assert.IsEmpty(got);
            Assert.AreEqual((0x10000009, "compro SoP"), (m.OwnerId, m.Message));
        }

        [Test]
        public void BuyListESellList_ComoOAcis()
        {
            // BuyList.writeImpl: o objectId e o proprio itemId; SellList.writeImpl: preco = referencia / 2
            var w = new PacketWriter().D(5000).D(7).H(1).H(0).D(1835).D(1835).D(0).H(5).H(0).D(0).H(0).H(0).H(0).D(10);
            var b = UiPackets.ParseBuyList(new PacketReader(w.Bytes()));
            Assert.AreEqual((5000, 7, 1835, 10), (b.Money, b.ListId, b.Items[0].ItemId, b.Items[0].Price));
            var s = new PacketWriter().D(5000).D(0).H(1).H(0).D(0x10000001).D(57).D(3).H(4).H(0).D(0).H(0).H(0).H(0).D(1);
            var sl = UiPackets.ParseSellList(new PacketReader(s.Bytes()));
            Assert.AreEqual((0x10000001, 3, 1), (sl.Items[0].ObjectId, sl.Items[0].Count, sl.Items[0].Price));
        }

        [Test]
        public void TradeStart_ParceiroEItens()
        {
            var w = new PacketWriter().D(0x10000008).H(1).H(0).D(0x10000001).D(57).D(3).H(4).H(0).D(0).H(0).H(0).H(0);
            var r = new PacketReader(w.Bytes());
            var t = SocialPackets.ParseTradeStart(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((0x10000008, 1), (t.PartnerId, t.Items.Count));
        }

        [Test]
        public void EnviosDoComercio_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x1f).D(7).D(1).D(1835).D(100), UiPackets.RequestBuyItem(7, new List<(int, int)> { (1835, 100) }));
            Bytes(new PacketWriter().C(0x1e).D(0).D(1).D(0x10000001).D(57).D(3), UiPackets.RequestSellItem(0, new List<(int, int, int)> { (0x10000001, 57, 3) }));
            Bytes(new PacketWriter().C(0x16).D(1).D(0x10000001).D(3), SocialPackets.AddTradeItem(0x10000001, 3));
        }

        [Test]
        public void EnviosDoArmazemEDoFrete_ComoOAcisLe()
        {
            var items = new List<(int, int)> { (0x10000001, 100), (0x10000002, 1) };
            Bytes(new PacketWriter().C(0x31).D(2).D(0x10000001).D(100).D(0x10000002).D(1), StorePackets.SendWarehouseDepositList(items));
            Bytes(new PacketWriter().C(0x32).D(2).D(0x10000001).D(100).D(0x10000002).D(1), StorePackets.SendWarehouseWithdrawList(items));
            Bytes(new PacketWriter().C(0x9e).D(0x10000010), StorePackets.RequestPackageSendableItemList(0x10000010));
            Bytes(new PacketWriter().C(0x9f).D(0x10000010).D(2).D(0x10000001).D(100).D(0x10000002).D(1), StorePackets.RequestPackageSend(0x10000010, items));
        }

        [Test]
        public void EnviosDaLojaPrivada_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x73), StorePackets.RequestPrivateStoreManageSell());
            Bytes(new PacketWriter().C(0x74).D(1).D(1).D(0x10000006).D(30).D(15),
                StorePackets.SetPrivateStoreListSell(true, new List<(int, int, int)> { (0x10000006, 30, 15) }));
            Bytes(new PacketWriter().C(0x76), StorePackets.RequestPrivateStoreQuitSell());
            Bytes(new PacketWriter().C(0x77).S("vendo SoP"), StorePackets.SetPrivateStoreMsgSell("vendo SoP"));
            Bytes(new PacketWriter().C(0x90), StorePackets.RequestPrivateStoreManageBuy());
            Bytes(new PacketWriter().C(0x91).D(1).D(1463).H(0).H(0).D(500).D(12),
                StorePackets.SetPrivateStoreListBuy(new List<(int, int, int, int, int)> { (1463, 0, 0, 500, 12) }));
            Bytes(new PacketWriter().C(0x93), StorePackets.RequestPrivateStoreQuitBuy());
            Bytes(new PacketWriter().C(0x94).S("compro"), StorePackets.SetPrivateStoreMsgBuy("compro"));
            Bytes(new PacketWriter().C(0x96).D(0x10000009).D(1).D(0x10000007).D(1463).H(0).H(0).D(40).D(12),
                StorePackets.RequestPrivateStoreSell(0x10000009, new List<(int, int, int, int, int, int)> { (0x10000007, 1463, 0, 0, 40, 12) }));
        }
    }
}
