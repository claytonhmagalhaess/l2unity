// #0042 (frete, spec 07 §5.6): SelectDeliverWnd.uc (combo com reserved, OK so com escolha) e DeliverWnd.uc — duas listas
// juntando pelo serverID, NumberPad, Alt, nao empilhavel vai 1 sem contagem, custo de 1000 por item e o pedido do OK.
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class DeliverTests
    {
        static ListItem Shot(long n) => new() { ClassId = 1835, ServerId = 13, Reserved = 900, ConsumeType = 2, ItemNum = n, Name = "Soulshot" };
        static ListItem Sword(int sid) => new() { ClassId = 2369, ServerId = sid, Reserved = sid + 1000, ItemNum = 1, Name = "Sword" };

        [Test]
        public void Destinatario_SoComEscolha()
        {
            var s = new DeliverScript();
            s.ClearTargets();
            s.AddTarget("Ana", 268480001);
            s.AddTarget("Bia", 268480002);
            Assert.IsNull(s.SelectOk(), "GetSelectedNum -1: so fecha");
            s.Selected = 1;
            Assert.AreEqual(268480002, s.SelectOk());
            s.ClearTargets();
            Assert.AreEqual((0, (int?)null), (s.Targets.Count, s.SelectOk()));
        }

        [Test]
        public void Envio_NumeroAltCustoEPedido()
        {
            var s = new DeliverScript();
            s.Open(5000, 77);
            s.Top.Add(Shot(500));
            s.Top.Add(Sword(11));
            s.Top.Add(Sword(12));
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual((DeliverScript.DialogTopToBottom, 500L, 13), (ask.DlgId, ask.ParamInt, ask.ServerId));
            s.DialogOk(ask.DlgId, 200, ask.ServerId);
            Assert.AreEqual((300L, 200L), (s.Top[0].ItemNum, s.Bottom[0].ItemNum));
            Assert.IsNull(s.TopToBottom(1, false));
            Assert.AreEqual((1L, false), (s.Bottom[1].ItemNum, s.Bottom[1].ShowCount), "nao empilhavel vai 1 sem a contagem");
            Assert.AreEqual(2000L, s.Price, "1000 por item embaixo");
            Assert.IsNull(s.TopToBottom(0, true), "Alt = tudo");
            Assert.AreEqual((500L, 1), (s.Bottom[0].ItemNum, s.Top.Count), "junta pelo serverID");
            CollectionAssert.AreEqual(new[] { (900, 500), (1011, 1) }, s.Ok());
            Assert.AreEqual(77, s.TargetId);
        }

        [Test]
        public void Volta_NumeroENaoEmpilhavel()
        {
            var s = new DeliverScript();
            s.Open(0, 1);
            s.Top.Add(Shot(10));
            s.Top.Add(Sword(11));
            s.TopToBottom(0, true);
            s.TopToBottom(0, false);
            Assert.AreEqual(2, s.Bottom.Count);
            var ask = s.BottomToTop(0, false);
            Assert.AreEqual(DeliverScript.DialogBottomToTop, ask.DlgId);
            s.DialogOk(ask.DlgId, 4, ask.ServerId);
            Assert.AreEqual((6L, 4L), (s.Bottom[0].ItemNum, s.Top[0].ItemNum), "sem a pilha em cima: entra uma nova");
            s.DialogOk(ask.DlgId, 0, ask.ServerId);
            Assert.AreEqual(6L, s.Bottom[0].ItemNum, "num 0 nao move");
            Assert.IsNull(s.BottomToTop(1, false));
            Assert.AreEqual((1, 2), (s.Bottom.Count, s.Top.Count));
            Assert.AreEqual(1000L, s.Price);
        }

        [Test]
        public void EventosDoRouter()
        {
            var to = InterfaceEvents.PackageToList(new() { new DeliverTarget { ObjectId = 5, Name = "Ana" } });
            Assert.AreEqual((Ev.EV_SelectDeliverClear, Ev.EV_SelectDeliverAddName), (to[0].Id, to[1].Id));
            var send = new PackageSendableListInfo { TargetId = 5, Adena = 100 };
            send.Items.Add(new InvItem { ObjectId = 13, ItemId = 1835, Count = 7, Type2 = 5, Reserved = 900, Mana = -1 });
            var evs = InterfaceEvents.PackageSendableList(send);
            int adena = 0, dest = 0;
            L2Param.ParseInt(evs[0].Param, "adena", ref adena);
            L2Param.ParseInt(evs[0].Param, "destinationID", ref dest);
            Assert.AreEqual((Ev.EV_DeliverOpenWindow, 100, 5), (evs[0].Id, adena, dest));
            var it = ListWnd.FromParam(evs[1].Param);
            Assert.AreEqual((1835, 13, 7L, 900, true), (it.ClassId, it.ServerId, it.ItemNum, it.Reserved, it.Stackable));
        }
    }
}
