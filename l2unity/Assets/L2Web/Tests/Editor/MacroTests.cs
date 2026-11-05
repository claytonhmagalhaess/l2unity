// #0032 (macros, spec 05 §6.2): EV_MacroList (MacroListWnd.uc:135-187), contador, icone circular (MacroEditWnd.uc:185-204),
// RequestMakeMacro (:332-358, aCis RequestMakeMacro: 1 skill, 3 acao, 4 atalho) e o plano de execucao com /delay.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MacroTests
    {
        [Test]
        public void ListaDoEvento()
        {
            var book = new MacroBook();
            book.Apply(new SendMacroListInfo { Revision = 1, Count = 1, Macro = new MacroInfo { Id = 1001, Name = "Buff", Acronym = "BF", Icon = 2, Description = "d" } });
            var l = MacroScript.ParseList(InterfaceEvents.MacroList(book).Param);
            Assert.AreEqual(1, l.Count);
            Assert.AreEqual((1001, "BF", "Buff", "d", "L2UI.MacroWnd.Macro_Icon3"), (l[0].Id, l[0].Acronym, l[0].Name, l[0].Description, l[0].Texture));
        }

        [TestCase(0, "(00/24)")]
        [TestCase(9, "(09/24)")]
        [TestCase(10, "(10/24)")]
        [TestCase(24, "(24/24)")]
        public void Contador(int n, string e) => Assert.AreEqual(e, MacroScript.CountText(n));

        [Test]
        public void IconeCircular()
        {
            Assert.AreEqual(7, MacroScript.IconStep(1, -1));
            Assert.AreEqual(1, MacroScript.IconStep(7, 1));
            Assert.AreEqual(4, MacroScript.IconStep(3, 1));
            Assert.AreEqual(5, MacroScript.IconOf("L2UI.MacroWnd.Macro_Icon5"));
            Assert.AreEqual(1, MacroScript.IconOf(""));
        }

        [Test]
        public void MontaORequestMakeMacro()
        {
            var lines = new List<string> { "/useskill Dash", "", "/useshortcut 3 2", "/delay 2", "oi pessoal", "", "", "", "", "", "", "/sit" };
            var m = MacroScript.Build(0, "Corre", "RUN", 3, "desc", lines, n => n == "Dash" ? 4 : 0);
            Assert.AreEqual((0, "Corre", "RUN", 2, "desc"), (m.Id, m.Name, m.Acronym, m.Icon, m.Description), "icone vai em base 0");
            CollectionAssert.AreEqual(new[] { 0, 2, 3, 4, 11 }, m.Commands.Select(c => c.Entry).ToArray(), "linhas vazias nao vao");
            Assert.AreEqual((1, 4), (m.Commands[0].Type, m.Commands[0].D1));
            Assert.AreEqual((4, 3, 2), (m.Commands[1].Type, m.Commands[1].D1, m.Commands[1].D2));
            Assert.AreEqual(3, m.Commands[2].Type);
            Assert.AreEqual(0, m.Commands[3].Type, "texto sem barra");
            Assert.AreEqual("/sit", m.Commands[4].Command);
        }

        [Test]
        public void PlanoComDelay()
        {
            var m = new MacroInfo();
            m.Commands.Add(new MacroCmd { Entry = 2, Command = "/sit" });
            m.Commands.Add(new MacroCmd { Entry = 0, Command = "/useskill Dash" });
            m.Commands.Add(new MacroCmd { Entry = 1, Command = "/delay 1.5" });
            m.Commands.Add(new MacroCmd { Entry = 3, Command = "/delay 2" });
            var p = MacroScript.Plan(m);
            CollectionAssert.AreEqual(new[] { (0, "/useskill Dash"), (1500, "/sit") }, p, "o /delay do fim nao gera comando");
        }

        [Test]
        public void ComandoDaLinhaSolta()
        {
            Assert.AreEqual("/useskill Power Strike", MacroScript.CommandOf("skill", "Power Strike", null));
            Assert.AreEqual("/sitstand", MacroScript.CommandOf("action", "Sit/Stand", "sitstand"));
            Assert.AreEqual("", MacroScript.CommandOf("item", "x", null));
        }
    }
}
