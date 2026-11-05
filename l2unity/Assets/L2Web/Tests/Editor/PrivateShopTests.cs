// #0036 (loja privada, spec 07 §5.3): PrivateShopWnd.uc nos 4 modos — cadeia de dialogos de preco (sm322/sm585 -> sm569 fora
// da faixa DefaultPrice/5..x5 -> quantidade sm72/sm570), Alt, junta pelo serverID ou classID conforme o modo, compra em
// pacote (bulk), venda limitada ao que a loja quer (sm1036), conferencia de preco no OK (sm569) e o pedido de cada modo.
using System.Linq;
using L2Web.UI;
using NUnit.Framework;
using M = L2Web.UI.PrivateShopScript.Mode;

namespace L2Web.Tests
{
    public class PrivateShopTests
    {
        static ListItem Shot(long n, long def = 0) => new() { ClassId = 1835, ServerId = 13, ConsumeType = 2, ItemNum = n, DefaultPrice = def, Name = "Soulshot" };
        static ListItem Sword(int sid = 11) => new() { ClassId = 2369, ServerId = sid, ItemNum = 1, DefaultPrice = 1000, Name = "Sword" };

        [Test]
        public void MontarVenda_PrecoConfirmacaoEQuantidade()
        {
            var s = new PrivateShopScript { SellMax = 3 };
            s.Open("sellList", 1000, 1, false);
            s.Add("topList", Shot(500, 10));
            s.Add("topList", Sword());
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual((PrivateShopScript.DialogAskPrice, 322, -1L, "number"), (ask.DlgId, ask.MsgId, ask.ParamInt, ask.EditType));
            var conf = s.DialogOk(ask.DlgId, "1", ask.R1, ask.R2, ask.R3);
            Assert.AreEqual((PrivateShopScript.DialogConfirmPrice, 569), (conf.DlgId, conf.MsgId), "1 <= 10/5: fora da faixa");
            var num = s.DialogOk(conf.DlgId, "", conf.R1, conf.R2, conf.R3);
            Assert.AreEqual((PrivateShopScript.DialogTopToBottom, 72, 500L, 1L), (num.DlgId, num.MsgId, num.ParamInt, num.R2));
            Assert.IsNull(s.DialogOk(num.DlgId, "200", num.R1, num.R2, num.R3));
            Assert.AreEqual((200L, 1L, 300L), (s.Bottom[0].ItemNum, s.Bottom[0].Price, s.Top[0].ItemNum));
            Assert.AreEqual(("(1/3)", 200L), (s.CountText, s.Price));
            var sw = s.TopToBottom(1, false);
            Assert.IsNull(s.DialogOk(sw.DlgId, "1500", sw.R1, sw.R2, sw.R3), "preco bom e nao empilhavel vai direto");
            Assert.AreEqual((1, 1500L), (s.Bottom.Count(b => b.ClassId == 2369), s.Bottom.Last().Price));
            Assert.AreEqual(1369, s.DialogOk(PrivateShopScript.DialogAskPrice, "2000000000", 13, 0, 0).MsgId);
            var (send, warn) = s.Ok(true);
            Assert.IsNull(warn);
            Assert.AreEqual(("sellList", 2), (send.Kind, send.Items.Count));
        }

        [Test]
        public void MontarVenda_AltVaiTudoComOPreco()
        {
            var s = new PrivateShopScript();
            s.Open("sellList", 0, 1, false);
            s.Add("topList", Shot(500, 10));
            var ask = s.TopToBottom(0, true);
            Assert.AreEqual(1, ask.R3);
            Assert.IsNull(s.DialogOk(ask.DlgId, "20", ask.R1, ask.R2, ask.R3));
            Assert.AreEqual((500L, 20L, 0), (s.Bottom[0].ItemNum, s.Bottom[0].Price, s.Top.Count));
        }

        [Test]
        public void MontarCompra_NaoEmpilhavelViraUmPorUnidade()
        {
            var s = new PrivateShopScript();
            s.Open("buyList", 0, 1, false);
            s.Add("topList", Sword());
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual(585, ask.MsgId);
            var num = s.DialogOk(ask.DlgId, "1200", ask.R1, ask.R2, ask.R3);
            Assert.AreEqual((PrivateShopScript.DialogTopToBottom, 570), (num.DlgId, num.MsgId));
            s.DialogOk(num.DlgId, "3", num.R1, num.R2, num.R3);
            Assert.AreEqual(3, s.Bottom.Count);
            Assert.IsTrue(s.Bottom.All(b => b.ItemNum == 1 && b.Price == 1200));
            Assert.AreEqual(1, s.Top.Count, "a lista de cima nao muda na loja de compra");
            Assert.IsNull(s.BottomToTop(0, false));
            Assert.AreEqual((2, 1), (s.Bottom.Count, s.Top.Count), "tirar de baixo nao volta para cima");
        }

        [Test]
        public void ComprarDaLojaDeOutro_PacoteEConferencia()
        {
            var s = new PrivateShopScript();
            s.Open("buy", 0, 77, true);
            s.Add("topList", new ListItem { ClassId = 1835, ServerId = 13, ConsumeType = 2, ItemNum = 100, Price = 1, DefaultPrice = 10, Name = "Soulshot" });
            s.Add("topList", new ListItem { ClassId = 2369, ServerId = 11, ItemNum = 1, Price = 1000, DefaultPrice = 1000, Name = "Sword" });
            Assert.IsNull(s.TopToBottom(1, false));
            Assert.AreEqual((0, 2), (s.Top.Count, s.Bottom.Count), "loja em pacote: vai tudo");
            var (send, warn) = s.Ok(true);
            Assert.IsNull(send);
            Assert.AreEqual((PrivateShopScript.DialogConfirmPriceFinal, 569), (warn.DlgId, warn.MsgId), "preco 1 fora da faixa de 10");
            (send, warn) = s.Ok(false);
            Assert.AreEqual(("buy", 77), (send.Kind, send.MerchantId));
        }

        [Test]
        public void VenderParaLojaDeCompra_LimiteDoPedido()
        {
            var s = new PrivateShopScript();
            s.Open("sell", 0, 77, false);
            s.Add("topList", new ListItem { ClassId = 1835, ServerId = 13, ConsumeType = 2, ItemNum = 50, Reserved = 20, Price = 5, Name = "Soulshot" });
            s.Add("topList", new ListItem { ClassId = 2369, ItemNum = 0, Name = "Sword" });
            Assert.IsNull(s.TopToBottom(1, false), "sem o item no inventario: desabilitado");
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual(1835, ask.R1, "PT_Sell anda pelo classID");
            Assert.AreEqual(1036, s.DialogOk(ask.DlgId, "30", ask.R1, 0, 0).MsgId, "mais do que a loja quer");
            Assert.IsNull(s.DialogOk(ask.DlgId, "20", ask.R1, 0, 0));
            Assert.AreEqual((20L, 30L), (s.Bottom[0].ItemNum, s.Top[0].ItemNum));
            Assert.AreEqual(("InventoryPrice2PrivateShop", 503), (s.Look().top, s.Look().topText));
        }

        [TestCase(0, 1, true)]
        [TestCase(100, 20, false)]
        [TestCase(100, 21, true)]
        [TestCase(100, 499, true)]
        [TestCase(100, 500, false)]
        public void PrecoNaFaixa(int def, int price, bool ok) => Assert.AreEqual(ok, PrivateShopScript.IsProperPrice(new ListItem { DefaultPrice = def }, price));

        [Test]
        public void Titulos()
        {
            var s = new PrivateShopScript();
            s.Open("buy", 0, 1, true);
            Assert.AreEqual("#498(#1198) - Ana", s.Title(i => "#" + i, "Ana"));
            s.Open("sellList", 0, 1, false);
            Assert.AreEqual("#498(#1157)", s.Title(i => "#" + i, "Ana"));
        }
    }
}
