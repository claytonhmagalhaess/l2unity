// #0040 (mensagens na tela, spec 02 §3.9): OnScreenMessageWnd.uc — texto ou systemmsg, quebra no "#", fonte grande ou "sm",
// fundo so na Wnd2, droprate por animacao, fade-in, tempo de vida pelo timer, fade-out e uma mensagem por vez; mensagens do
// sistema com janela de tela.
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class OnScreenMessageTests
    {
        [Test]
        public void Evento_TextoQuebraEFonte()
        {
            var s = new OnScreenMessageScript();
            var e = InterfaceEvents.ScreenMessage(new ScreenMessageInfo { MsgType = 1, WindowType = 2, FontType = 1, BackgroundType = 1, LifeTime = 3000, AnimationType = 1, Msg = "Ola `mundo`#linha 2#x" })[0];
            s.Event(e.Param, _ => "");
            Assert.AreEqual((2, "Ola mundo", "linha 2x", false, true, 25), (s.Current, s.Line1, s.Line2, s.Big, s.Background, s.DropRate));
            Assert.AreEqual((byte)255, s.Color.r, "sem MsgColorR = branco");
            var e2 = InterfaceEvents.ScreenMessage(new ScreenMessageInfo { MsgType = 0, MsgNo = 1234, WindowType = 5, FontType = 0, BackgroundType = 1, AnimationType = 13 })[0];
            s.Event(e2.Param, no => "sys " + no);
            Assert.AreEqual((5, "sys 1234", true, false, 35), (s.Current, s.Line1, s.Big, s.Background, s.DropRate), "fundo so na Wnd2");
        }

        [Test]
        public void Fades_TempoDeVidaEFim()
        {
            var s = new OnScreenMessageScript();
            s.Show(1, "a", 1000, 1, 0, 0, 255, 255, 255);
            for (var i = 0; i < 10; i++) s.Tick(i);
            Assert.AreEqual((250, true), (s.Alpha, s.FadingIn));
            s.Tick(10);
            Assert.AreEqual((255, false, 1), (s.Alpha, s.FadingIn, s.TimerCount), "chegou em 255: arma o timer");
            s.Tick(500);
            Assert.IsFalse(s.FadingOut);
            s.Tick(1011);
            Assert.IsTrue(s.FadingOut, "o timer disparou");
            for (var i = 0; i < 10; i++) s.Tick(1012 + i);
            Assert.AreEqual((5, 1), (s.Alpha, s.Current));
            s.Tick(1100);
            Assert.AreEqual((0, 0, false), (s.Alpha, s.Current, s.FadingOut), "chegou em 0: ResetAllMessage");
        }

        [Test]
        public void Animacao0_Instantanea_E_OutroTipoMantemODroprate()
        {
            var s = new OnScreenMessageScript();
            s.Show(3, "a", 500, 0, 0, 0, 255, 255, 255);
            s.Tick(0);
            Assert.AreEqual((255, false), (s.Alpha, s.FadingIn));
            s.Show(3, "b", 500, 7, 0, 0, 255, 255, 255);
            Assert.AreEqual(255, s.DropRate, "tipo desconhecido fica com o anterior");
        }

        [Test]
        public void MensagemDoSistema_SoComJanela()
        {
            var s = new OnScreenMessageScript();
            s.SystemMessage(new SystemMsgRecord { Ints = new[] { 0, 0, 3, 1, 0 }, Script = "x" }, t => t);
            Assert.AreEqual(0, s.Current, "windowType 0 nao mostra");
            s.SystemMessage(new SystemMsgRecord { Ints = new[] { 4, 1, 3, 12, 0 }, Script = "Cerco $s1", Color = new byte[] { 121, 155, 176, 255 } }, t => t.Replace("$s1", ""));
            Assert.AreEqual((4, "Cerco ", false, 3000, 25, (byte)255), (s.Current, s.Line1, s.Big, s.Duration, s.DropRate, s.Color.g), "176/155/121 vira branco");
            s.SystemMessage(new SystemMsgRecord { Ints = new[] { 6, 0, 1, 11, 0 }, Script = "y", Color = new byte[] { 0, 0, 255, 255 } }, t => t);
            Assert.AreEqual(((byte)255, (byte)0), (s.Color.r, s.Color.b), "cor B,G,R do arquivo");
        }
    }
}
