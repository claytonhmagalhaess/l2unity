// #0030 (armazem, spec 07 §5.5): WarehouseWnd.uc — duas listas juntando pelo classID, NumberPad, Alt, taxa de 30 por item
// no deposito, contador com o limite (privado pelo EV_SetMaxCount, outros 200), titulos e o pedido do OK (dbID).
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class WarehouseTests
    {
        static ListItem Shot(long n) => new() { ClassId = 1835, ServerId = 13, Reserved = 900, ConsumeType = 2, ItemNum = n, Name = "Soulshot" };
        static ListItem Sword(int sid) => new() { ClassId = 2369, ServerId = sid, Reserved = sid + 1000, ItemNum = 1, Name = "Sword" };

        [Test]
        public void Deposito_TaxaContadorEPedido()
        {
            var s = new WarehouseScript { MaxPrivateCount = 100 };
            s.Open("deposit", 1, 5000);
            s.Top.Add(Shot(500));
            s.Top.Add(Sword(11));
            s.Top.Add(Sword(12));
            Assert.AreEqual((1216, 138, 132, true), (s.Title, s.Texts.top, s.Texts.bottom, s.Texts.bottomCount));
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual((WarehouseScript.DialogTopToBottom, 500L), (ask.DlgId, ask.ParamInt));
            s.DialogOk(WarehouseScript.DialogTopToBottom, 200, 1835);
            Assert.AreEqual((300L, 200L), (s.Top[0].ItemNum, s.Bottom[0].ItemNum));
            Assert.IsNull(s.TopToBottom(1, false));
            Assert.AreEqual((60L, "(2/100)"), (s.Price, s.CountText), "30 por item embaixo; limite do privado");
            Assert.IsNull(s.TopToBottom(0, true), "Alt = tudo");
            Assert.AreEqual(500L, s.Bottom[0].ItemNum, "junta pelo classID");
            CollectionAssert.AreEqual(new[] { (900, 500), (1011, 1) }, s.Ok());
        }

        [Test]
        public void Retirada_SemTaxaComLimitePadrao()
        {
            var s = new WarehouseScript();
            s.Open("withdraw", 2, 0);
            s.Top.Add(Shot(10));
            Assert.AreEqual((1217, 132, 133, false), (s.Title, s.Texts.top, s.Texts.bottom, s.Texts.bottomCount));
            Assert.AreEqual("(1/200)", s.CountText, "retirada conta a lista de cima; cla = 200");
            s.TopToBottom(0, true);
            Assert.AreEqual(0L, s.Price);
            Assert.IsNotNull(s.BottomToTop(0, false), "volta pedindo o numero");
            s.DialogOk(WarehouseScript.DialogBottomToTop, 4, 1835);
            Assert.AreEqual((6L, 4L), (s.Bottom[0].ItemNum, s.Top[0].ItemNum));
        }

        [Test]
        public void ItemDoEvento()
        {
            var w = new WarehouseListInfo { Deposit = true, Category = 1, Adena = 10 };
            w.Items.Add(new InvItem { ObjectId = 13, ItemId = 1835, Count = 7, Type2 = 5, Reserved = 900, Mana = -1 });
            var evs = InterfaceEvents.Warehouse(w);
            var it = ListWnd.FromParam(evs[evs.Count - 1].Param);
            Assert.AreEqual((1835, 13, 7L, 900, true), (it.ClassId, it.ServerId, it.ItemNum, it.Reserved, it.Stackable));
        }
    }
}
