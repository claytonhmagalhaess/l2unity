// J1 da matriz (Docs/validacao.md): as 156 teclas do Interface.xdat (Golden/shortcuts.json, de out/re/interface_layout.json)
// resolvidas pelo L2Shortcuts do Unity (que le o /ui/layout.json) no mesmo comando, e cada comando do GamingState com
// tratamento (ou listado como faltante).
using System.Collections.Generic;
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.InputSystem;

namespace L2Web.Tests
{
    public class ShortcutKeyTests
    {
        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            L2Shortcuts.Reset();
        }

        /// <summary>Nome da tecla no xdat -> tecla do Input System.</summary>
        static Key ToKey(string n)
        {
            if (n.Length == 1 && n[0] >= 'A' && n[0] <= 'Z') return Key.A + (n[0] - 'A');
            if (n.Length == 1 && n[0] >= '1' && n[0] <= '9') return Key.Digit1 + (n[0] - '1');
            if (n == "0") return Key.Digit0;
            if (n.StartsWith("F") && int.TryParse(n.Substring(1), out var f)) return Key.F1 + (f - 1);
            return n switch
            {
                "Escape" => Key.Escape, "Enter" => Key.Enter, "Tab" => Key.Tab, "Minus" => Key.Minus, "Equals" => Key.Equals,
                "PageUp" => Key.PageUp, "PageDown" => Key.PageDown, "LeftBracket" => Key.LeftBracket, "RightBracket" => Key.RightBracket,
                _ => Key.None,
            };
        }

        [Test]
        public void CentoECinquentaESeisTeclas_MesmoComando()
        {
            var g = (JArray)Golden.Load("shortcuts.json");
            Assert.AreEqual(156, g.Count);
            var erros = new List<string>();
            foreach (var e in g)
            {
                var keys = ((JArray)e["keys"]).Select(k => (string)k).ToList();
                var main = keys.First(k => k != "Ctrl" && k != "Alt" && k != "Shift" && k != "None");
                var k0 = ToKey(main);
                Assert.AreNotEqual(Key.None, k0, main);
                var got = L2Shortcuts.Find((string)e["state"], L2Shortcuts.Vk(k0), keys.Contains("Ctrl"), keys.Contains("Alt"), keys.Contains("Shift"));
                if (got != (string)e["action"]) erros.Add($"{e["state"]} {string.Join("+", keys.Where(k => k != "None"))}: Unity {got ?? "(nada)"} != {e["action"]}");
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void ComandosDoGamingState()
        {
            // os que o Unity trata (GameUi.Command + App.RunCommand) e os que faltam (janela inexistente no Unity)
            var tratados = new HashSet<string>
            {
                "UseShortcutItem", "SetShortcutPage", "FocusChatWindow", "TabShowInventoryWindow", "ShowInventoryWindow", "ShowMainWindow",
                "ShowSystemMenuWindow", "ShowChatWindow", "SetPrevChatType", "SetNextChatType", "HideAllWindow", "CloseAllWindow",
                "TargetCancel", "ShowBoardWindow", "ShowMessengerWindow",
            };
            var faltam = new HashSet<string> { "ShowGMWindow", "ShowGMPetitionWindow", "RequestOpenMinimap", "ShowPartyBuff", "ApplyMinFrame", "ShowMacroListWindow" };
            var cmds = ((JArray)Golden.Load("shortcuts.json")).Where(e => (string)e["state"] == "GamingState").Select(e => L2Shortcuts.Parse((string)e["action"]).cmd).Distinct().ToList();
            CollectionAssert.IsEmpty(cmds.Where(c => !tratados.Contains(c) && !faltam.Contains(c)), "comando sem classificacao");
            // Ctrl+F e Shift+F usam a barra 1 (ataque forcado / sem andar); Alt+F troca a pagina (nao e mais a barra 2)
            Assert.AreEqual("SetShortcutPage Num=0", L2Shortcuts.Find("GamingState", 112, false, true, false));
            Assert.AreEqual("UseShortcutItem Num=0", L2Shortcuts.Find("GamingState", 112, true, false, false));
            Assert.AreEqual("ShowSystemMenuWindow", L2Shortcuts.Find("GamingState", 'X', false, false, false));
            Assert.AreEqual("ShowMacroListWindow", L2Shortcuts.Find("GamingState", 'R', false, false, false));
            Assert.IsNull(L2Shortcuts.Find("GamingState", 'W', false, false, false)); // W fica para o user.ini (andar)
        }
    }
}
