// Pedido 0025, item 1 (#0036): PrivateStoreList (0x9b) abre o PrivateShopWnd no modo PT_Buy (o jogador compra da loja de
// venda do outro): type=buy. "sell" e o modo de vender para a loja de compra do outro (0xb8).
using System.Collections.Generic;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PrivateStoreEventTests
    {
        [Test]
        public void LojaDeVendaDoOutro_AbreComTypeBuy()
        {
            var evs = PacketEvents.PrivateStore(new PrivateStoreSellInfo { OwnerId = 5, Adena = 10, Items = new List<StoreItem> { new StoreItem() } });
            Assert.AreEqual(Ev.EV_PrivateShopOpenWindow, evs[0].Id);
            string type = null;
            Assert.IsTrue(L2Param.ParseString(evs[0].Param, "type", ref type));
            Assert.AreEqual("buy", type);
        }
    }
}
