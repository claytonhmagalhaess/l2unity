// K13 da matriz (Docs/validacao.md): DialogBox.uc (spec 01 §1.10, #0025). Os 8 EDialogType de UICommonAPI.uc:4-14 com os
// controles e o tamanho de layout/DialogBox.txt, EV_DialogOK/Cancel com DialogIsMine, NumberPad, Enter = acao padrao e a
// barra do Progress (NCProgressCtrl nw:0x1000d670); o texto por extenso do NWndUtil::ConvertNumToText (nw:0x100676e0).
using System.Collections.Generic;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class DialogBoxTests
    {
        static (DialogBoxScript s, List<int> events) New()
        {
            var ev = new List<int>();
            var s = new DialogBoxScript { NumToText = x => "<" + x + ">" };
            s.Execute = ev.Add;
            return (s, ev);
        }

        [TestCase(EDialogType.OKCancel, false, true, true, false, false, false, 306)]
        [TestCase(EDialogType.OK, false, false, false, true, false, false, 306)]
        [TestCase(EDialogType.OKCancelInput, true, true, true, false, false, false, 306)]
        [TestCase(EDialogType.OKInput, true, false, false, true, false, false, 306)]
        [TestCase(EDialogType.Warning, false, true, true, false, false, false, 306)]
        [TestCase(EDialogType.Notice, false, false, false, true, false, false, 306)]
        [TestCase(EDialogType.NumberPad, true, true, true, false, true, false, 434)]
        [TestCase(EDialogType.Progress, false, true, true, false, false, true, 306)]
        public void SetWindowStyle_ControlesETamanho(EDialogType t, bool edit, bool ok, bool cancel, bool center, bool pad, bool prog, float w)
        {
            var (s, _) = New();
            s.ParamInt = 1000;
            Assert.IsTrue(s.ShowDialog(t, "msg", "Dono"));
            Assert.AreEqual((edit, ok, cancel, center, pad, prog), (s.ShowEdit, s.ShowOK, s.ShowCancel, s.ShowCenterOK, s.ShowNumberPad, s.ShowProgress));
            Assert.AreEqual(w, s.Width);
            Assert.AreEqual(128, s.Height);
            Assert.AreEqual(t == EDialogType.Progress, s.AnchorBottom);
            Assert.AreEqual(t == EDialogType.NumberPad ? "number" : "normal", s.EditType);
            Assert.AreEqual(edit, s.FocusEdit);
        }

        [Test]
        public void UmDialogoPorVez_EDono()
        {
            var (s, ev) = New();
            Assert.IsTrue(s.ShowDialog(EDialogType.OKCancel, "a", "InventoryWnd"));
            Assert.IsFalse(s.ShowDialog(EDialogType.OK, "b", "ShopWnd"), "m_bInUse recusa o segundo");
            Assert.AreEqual("a", s.Message);
            Assert.IsTrue(s.IsMine("InventoryWnd"));
            Assert.IsFalse(s.IsMine("ShopWnd"));
            s.Click("OKButton");
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogOK }, ev);
            Assert.IsFalse(s.Visible);
            Assert.IsFalse(s.InUse);
            // OK e Cancel nao chamam Initialize: o dono continua (o handler do evento confere DialogIsMine)
            Assert.IsTrue(s.IsMine("InventoryWnd"));
            Assert.IsTrue(s.ShowDialog(EDialogType.OK, "b", "ShopWnd"));
            s.Click("CenterOKButton");
            s.ShowDialog(EDialogType.OKCancel, "c", "ShopWnd");
            s.Click("CancelButton");
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogOK, Ev.EV_DialogOK, Ev.EV_DialogCancel }, ev);
        }

        [Test]
        public void HideDialog_SemEventoEPerdeODono()
        {
            var (s, ev) = New();
            s.ParamInt = 5;
            s.ReservedInt = 7;
            s.ReservedInt3 = 9;
            s.SetDefaultAction(DialogDefaultAction.OK);
            s.ShowDialog(EDialogType.Warning, "x", "PartyWnd");
            s.HideDialog();
            Assert.IsEmpty(ev);
            Assert.IsFalse(s.Visible);
            Assert.IsFalse(s.IsMine("PartyWnd"));
            Assert.AreEqual((0, 0, 9), (s.ParamInt, s.ReservedInt, s.ReservedInt3), "Initialize zera ParamInt, Reserved e Reserved2; o Reserved3 fica");
            Assert.AreEqual(DialogDefaultAction.None, s.DefaultAction);
        }

        [Test]
        public void NumberPad_BotoesETextoPorExtenso()
        {
            var (s, ev) = New();
            s.ParamInt = 250;
            s.ShowDialog(EDialogType.NumberPad, "quantos?", "InventoryWnd");
            foreach (var b in new[] { "num1", "num2", "num0" }) s.Click(b);
            Assert.AreEqual("120", s.Edit);
            Assert.AreEqual("<120>", s.ReadingText);
            s.Click("numBS");
            Assert.AreEqual("12", s.Edit);
            s.Click("numC");
            Assert.AreEqual("0", s.Edit);
            s.Click("numAll");
            Assert.AreEqual("250", s.Edit);
            s.Click("numOK");
            Assert.AreEqual("250", s.Edit, "botao desconhecido nao faz nada");
            s.ChangeEdit("");
            Assert.AreEqual("", s.ReadingText);
            s.ChangeEdit("33");
            s.Click("OKButton");
            Assert.AreEqual("33", s.EditMessage);
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogOK }, ev);
            // OnHide: o edit e o tipo voltam ao normal
            Assert.AreEqual(("", "normal"), (s.Edit, s.EditType));
        }

        [Test]
        public void NumberPad_AllNegativoNaoMexe()
        {
            var (s, _) = New();
            s.ParamInt = -1;
            s.ShowDialog(EDialogType.NumberPad, "preço", "PrivateShopWnd");
            s.Click("num5");
            s.Click("numAll");
            Assert.AreEqual("5", s.Edit);
        }

        [Test]
        public void TextoPorExtenso_SoNoNumberPad()
        {
            var (s, _) = New();
            s.ShowDialog(EDialogType.OKCancelInput, "nome", "ClanWnd");
            s.ChangeEdit("123");
            Assert.AreEqual("", s.ReadingText);
            s.Click("OKButton");
            Assert.AreEqual("123", s.EditMessage);
            s.ShowDialog(EDialogType.OKCancel, "sem edit", "ClanWnd");
            s.Click("OKButton");
            Assert.AreEqual("", s.EditMessage, "sem o edit visivel o texto e vazio");
        }

        [Test]
        public void Enter_AcaoPadrao()
        {
            var (s, ev) = New();
            s.ShowDialog(EDialogType.OKCancel, "a", "X");
            s.DoDefaultAction();
            s.SetDefaultAction(DialogDefaultAction.OK);
            s.ShowDialog(EDialogType.OKCancel, "b", "X");
            s.DoDefaultAction();
            Assert.AreEqual(DialogDefaultAction.None, s.DefaultAction, "volta a None depois de usar");
            s.ShowDialog(EDialogType.OKCancel, "c", "X");
            s.DoDefaultAction();
            s.SetDefaultAction(DialogDefaultAction.Cancel);
            s.ShowDialog(EDialogType.OKCancel, "d", "X");
            s.DoDefaultAction();
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogCancel, Ev.EV_DialogOK, Ev.EV_DialogCancel, Ev.EV_DialogCancel }, ev);
        }

        [Test]
        public void Enter_DefaultOKPedidoDentroDoOKSePerde()
        {
            var (s, ev) = New();
            s.Execute = id =>
            {
                ev.Add(id);
                if (ev.Count > 1) return;
                // o dono abre outro dialogo e pede DefaultOK dentro do EV_DialogOK: o DoDefaultAction zera depois
                s.SetDefaultAction(DialogDefaultAction.OK);
                s.ShowDialog(EDialogType.OKCancel, "de novo", "X");
            };
            s.SetDefaultAction(DialogDefaultAction.OK);
            s.ShowDialog(EDialogType.OKCancel, "a", "X");
            s.DoDefaultAction();
            Assert.IsTrue(s.Visible);
            Assert.AreEqual(DialogDefaultAction.None, s.DefaultAction);
            s.DoDefaultAction();
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogOK, Ev.EV_DialogCancel }, ev);
        }

        [Test]
        public void Progress_FimDoTempoECancel()
        {
            var (s, ev) = New();
            s.ParamInt = 10000;
            s.ShowDialog(EDialogType.Progress, "duelo", "DuelManager");
            Assert.AreEqual(1f, s.ProgressLeft);
            s.Tick(2500);
            Assert.AreEqual(0.75f, s.ProgressLeft, 1e-6);
            Assert.IsEmpty(ev);
            s.Tick(7500);
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogCancel }, ev);
            Assert.IsFalse(s.Visible);
            Assert.IsFalse(s.ProgressRunning);
            s.Tick(1000);
            Assert.AreEqual(1, ev.Count);
        }

        [Test]
        public void Progress_SemParamNaoAnda()
        {
            var (s, ev) = New();
            s.ShowDialog(EDialogType.Progress, "x", "X");
            s.Tick(100000);
            Assert.IsEmpty(ev);
            Assert.IsTrue(s.Visible);
        }

        [Test]
        public void Progress_OKParaABarra()
        {
            var (s, ev) = New();
            s.ParamInt = 1000;
            s.ShowDialog(EDialogType.Progress, "x", "X");
            s.Click("OKButton");
            Assert.IsFalse(s.ProgressRunning, "OnHide: Stop");
            s.Tick(5000);
            CollectionAssert.AreEqual(new[] { Ev.EV_DialogOK }, ev);
        }

        [Test]
        public void MaxLength_SoParaUmDialogo()
        {
            var (s, _) = New();
            s.SetEditBoxMaxLength(3);
            s.ShowDialog(EDialogType.NumberPad, "x", "X");
            Assert.AreEqual(3, s.EditLimit);
            foreach (var b in new[] { "num1", "num2", "num3", "num4" }) s.Click(b);
            Assert.AreEqual("123", s.Edit);
            s.Click("CancelButton");
            Assert.AreEqual((0, -1), (s.EditLimit, s.EditMaxLength), "OnHide devolve o limite anterior");
        }

        // ---------------------------------------------------------------- ConvertNumToText (ingles)
        static string Num(string s, bool adena = false)
        {
            var old = L2NumText.SysString;
            L2NumText.SysString = i => i == 1281 ? "Thousand, Million, Billion" : i == 469 ? "Adena" : "";
            try
            {
                return L2NumText.Convert(s, adena);
            }
            finally
            {
                L2NumText.SysString = old;
            }
        }

        [TestCase("", "")]
        [TestCase("0", "")]
        [TestCase("00", "")]
        [TestCase("12a", "")]
        [TestCase("7", "7 ")]
        [TestCase("007", "7 ")]
        [TestCase("1000", "1 Thousand")]
        [TestCase("1001", "1 Thousand,1 ")]
        [TestCase("1234567", "1  Million,234 Thousand,567 ")]
        [TestCase("1000000", "1  Million")]
        [TestCase("2000300", "2  Million,300 ")]
        [TestCase("123456789012", "123  Billion,456  Million,789 Thousand,12 ")]
        [TestCase("1234567890123", "1234567890123")]
        public void ConvertNumToTextNoAdena(string input, string expected) => Assert.AreEqual(expected, Num(input));

        [Test]
        public void ConvertNumToText_ComAdena()
        {
            Assert.AreEqual("1 Thousand,500  Adena", Num("1500", true));
            Assert.AreEqual("", Num("0", true));
        }
    }
}
