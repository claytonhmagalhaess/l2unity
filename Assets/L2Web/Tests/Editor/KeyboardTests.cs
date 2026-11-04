// #0033 (teclado, 03 §1 da #0024): NConsoleWnd::HandleKeyboardInput (nw:0x101734e0) — regra do EnterChatting
// (NWndUtil::IsTypingKey nw:0x100624e0), LoginState, prioridade dos modificadores (Alt > Shift > Ctrl, dois no maximo),
// tabela do estado; e os nomes de sussurro do NCChatWnd (AttachWhisperName nw:0x10139700, ChangeWhisperName nw:0x101398c0).
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;
using K = L2Web.UI.L2Shortcuts.KeyResult;

namespace L2Web.Tests
{
    public class KeyboardTests
    {
        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            L2Shortcuts.Reset();
        }

        [TestCase(0x41, true)]
        [TestCase(0x31, true)]
        [TestCase(0x20, true)]
        [TestCase(0x26, true)]
        [TestCase(0x70, false)]
        [TestCase(0x7b, false)]
        [TestCase(0x7c, true)]
        [TestCase(9, false)]
        [TestCase(0x1b, false)]
        [TestCase(0x90, false)]
        [TestCase(13, true)]
        public void IsTypingKey(int vk, bool typing) => Assert.AreEqual(typing, L2Shortcuts.IsTypingKey(vk));

        [Test]
        public void Modificadores_PrioridadeEDoisNoMaximo()
        {
            Assert.AreEqual((18, 0), L2Shortcuts.Mods(true, false, false));
            Assert.AreEqual((16, 17), L2Shortcuts.Mods(false, true, true));
            Assert.AreEqual((18, 17), L2Shortcuts.Mods(true, false, true));
            Assert.AreEqual((18, 16), L2Shortcuts.Mods(true, true, true), "com os tres, o Ctrl fica de fora");
            Assert.AreEqual((17, 0), L2Shortcuts.Mods(false, false, true));
        }

        static (K, string) Gaming(int vk, bool alt = false, bool shift = false, bool ctrl = false, bool enter = true, bool edit = false) =>
            L2Shortcuts.Handle("GamingState", vk, alt, shift, ctrl, enter, edit);

        [Test]
        public void EnterChatting_Ligado_LetrasSaoAtalhos()
        {
            Assert.AreEqual((K.Command, "ShowInventoryWindow"), Gaming('V'));
            Assert.AreEqual((K.Command, "ShowMacroListWindow"), Gaming('R'));
            Assert.AreEqual((K.Command, "ApplyMinFrame"), Gaming('P'));
            Assert.AreEqual((K.Command, "ShowGMPetitionWindow"), Gaming('O'));
            Assert.AreEqual((K.None, (string)null), Gaming('W'), "sem entrada na tabela: segue para o user.ini");
        }

        [Test]
        public void EnterChatting_Desligado_DigitacaoFocaOChat()
        {
            Assert.AreEqual((K.ChatFocus, (string)null), Gaming('V', enter: false));
            Assert.AreEqual((K.ChatFocus, (string)null), Gaming('1', enter: false));
            Assert.AreEqual((K.ChatFocus, (string)null), Gaming(0x20, enter: false));
            Assert.AreEqual((K.ChatFocus, (string)null), Gaming('V', ctrl: true, enter: false), "Ctrl nao escapa da regra");
            Assert.AreEqual((K.Command, "ShowInventoryWindow"), Gaming('V', alt: true, enter: false), "com Alt vai para a tabela");
            Assert.AreEqual(K.Command, Gaming(0x70, enter: false).Item1, "F1 nao e de digitacao");
            Assert.AreEqual((K.Command, "TargetCancel"), Gaming(0x1b, enter: false));
            Assert.AreEqual((K.Command, "TabShowInventoryWindow"), Gaming(9, enter: false));
        }

        [Test]
        public void CaixaDeEdicaoComFoco_NaoViraAtalho()
        {
            Assert.AreEqual((K.None, (string)null), Gaming('V', edit: true));
            Assert.AreEqual(K.Command, Gaming(0x70, edit: true).Item1, "F1 com o chat focado ainda usa o atalho");
        }

        [Test]
        public void OutrosEstados()
        {
            Assert.AreEqual((K.LoginFocus, (string)null), L2Shortcuts.Handle("LoginState", 'A', false, false, false, true, false));
            Assert.AreEqual((K.None, (string)null), L2Shortcuts.Handle("LoginState", 'A', false, false, false, true, true));
            Assert.AreEqual((K.Command, "ServerSelectOKButton"), L2Shortcuts.Handle("ServerListState", 13, false, false, false, true, false));
            Assert.AreEqual((K.Command, "EulaWndOKButton"), L2Shortcuts.Handle("EulaMsgState", 13, false, false, false, true, false));
            Assert.AreEqual((K.Command, "BroadcastShowPartyWindow"), L2Shortcuts.Handle("BroadcastObserverState", 'P', false, false, false, false, false),
                "a regra do chat so vale no GamingState e no OlympiadObserverState");
            Assert.AreEqual((K.ChatFocus, (string)null), L2Shortcuts.Handle("OlympiadObserverState", 'P', false, false, false, false, false));
            Assert.AreEqual((K.Builder, (string)null), L2Shortcuts.Handle("GamingState", 9, false, true, true, true, false, builder: true));
            Assert.AreEqual((K.None, (string)null), L2Shortcuts.Handle("GamingState", 16, false, true, false, true, false), "Shift sozinho");
        }

        [Test]
        public void Sussurro_ListaETroca()
        {
            var w = new ChatWhisper();
            Assert.IsNull(w.Change(0), "sem AttachWhisperName nao troca");
            Assert.IsNull(w.Attach());
            w.Add("Ana");
            w.Add("Bruno");
            w.Add("Ana");
            CollectionAssert.AreEqual(new[] { "Ana", "Bruno" }, w.Names);
            Assert.AreEqual("\"Ana ", w.Attach());
            Assert.AreEqual("\"Bruno ", w.Change(0));
            Assert.AreEqual("\"", w.Change(0), "passou do ultimo: so o prefixo");
            Assert.AreEqual("\"Bruno ", w.Change(1));
            Assert.AreEqual("\"Ana ", w.Change(1));
            Assert.AreEqual("\"Ana ", w.Change(1), "para no primeiro");
            Assert.AreEqual("\"Carlos ", w.Attach("Carlos"));
            for (var i = 0; i < 20; i++) w.Add("n" + i);
            Assert.AreEqual(ChatWhisper.Max, w.Names.Count);
            Assert.AreEqual("Ana", ChatWhisper.Sender("Ana: oi"));
            Assert.AreEqual("Ana", ChatWhisper.Sender("->Ana: oi"));
            Assert.IsNull(ChatWhisper.Sender("sem dois pontos"));
        }
    }
}
