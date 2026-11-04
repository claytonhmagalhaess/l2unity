// Macros (#0046, T8): SendMacroList como o aCis o escreve (uma macro por pacote, MacroList.sendUpdate), o cache por revisao,
// os eventos que o InterfaceRouter entrega e os envios RequestMakeMacro / RequestDeleteMacro como o aCis os le.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MacroPacketTests
    {
        /// <summary>SendMacroList.writeImpl do aCis, com o opcode.</summary>
        static byte[] Acis(int rev, int count, MacroInfo m)
        {
            var w = new PacketWriter().C(0xe7).D(rev).C(0).C(count).C(m != null ? 1 : 0);
            if (m == null) return w.Bytes();
            w.D(m.Id).S(m.Name).S(m.Description).S(m.Acronym).C(m.Icon).C(m.Commands.Count);
            for (var i = 0; i < m.Commands.Count; i++) w.C(i + 1).C(m.Commands[i].Type).D(m.Commands[i].D1).C(m.Commands[i].D2).S(m.Commands[i].Command);
            return w.Bytes();
        }

        static MacroInfo Macro(int id, string name) => new MacroInfo
        {
            Id = id, Name = name, Description = "desc " + name, Acronym = name.Substring(0, 2), Icon = 3,
            Commands = new List<MacroCmd>
            {
                new MacroCmd { Entry = 1, Type = 1, D1 = 1216, D2 = 0, Command = "/useskill Self Heal" },
                new MacroCmd { Entry = 2, Type = 4, D1 = 0, D2 = 5, Command = "/useshortcut 1 6" },
            },
        };

        [Test]
        public void SendMacroList_LeAMacroInteira()
        {
            var r = new PacketReader(Acis(7, 2, Macro(1000, "Cura")), 1);
            var m = MacroPackets.ParseSendMacroList(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((7, 2), (m.Revision, m.Count));
            Assert.AreEqual((1000, "Cura", "desc Cura", "Cu", 3), (m.Macro.Id, m.Macro.Name, m.Macro.Description, m.Macro.Acronym, m.Macro.Icon));
            Assert.AreEqual(2, m.Macro.Commands.Count);
            var c = m.Macro.Commands[1];
            Assert.AreEqual((2, 4, 0, 5, "/useshortcut 1 6"), (c.Entry, c.Type, c.D1, c.D2, c.Command));
            Assert.AreEqual("L2UI.MacroWnd.Macro_Icon4", m.Macro.TextureName);
        }

        [Test]
        public void SendMacroList_ListaVazia()
        {
            var r = new PacketReader(Acis(3, 0, null), 1);
            var m = MacroPackets.ParseSendMacroList(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.IsNull(m.Macro);
        }

        [Test]
        public void Router_RevisaoCompletaDisparaMacroUpdateEApagadas()
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            var router = new InterfaceRouter(gc, got.AddRange);
            gc.Dispatch(Acis(1, 2, Macro(1000, "Cura")));
            Assert.IsEmpty(got, "a revisao ainda nao chegou inteira");
            gc.Dispatch(Acis(1, 2, Macro(1001, "Buff")));
            Assert.AreEqual(new[] { Ev.EV_MacroUpdate }, got.Select(e => e.Id).ToArray());
            got.Clear();
            // apagou a 1000: o aCis reenvia a lista com a revisao seguinte
            gc.Dispatch(Acis(2, 1, Macro(1001, "Buff")));
            Assert.AreEqual(new[] { Ev.EV_MacroDeleted, Ev.EV_MacroUpdate }, got.Select(e => e.Id).ToArray());
            int id = 0;
            Assert.IsTrue(L2Param.ParseInt(got[0].Param, "MacroID", ref id));
            Assert.AreEqual(1000, id);
            got.Clear();
            router.RequestMacroList();
            var p = got.Single().Param;
            int max = 0;
            string name = null, tex = null, acr = null;
            L2Param.ParseInt(p, "Max", ref max);
            L2Param.ParseString(p, "MacroName_0", ref name);
            L2Param.ParseString(p, "IconName_0", ref acr);
            L2Param.ParseString(p, "TextureName_0", ref tex);
            Assert.AreEqual((1, "Buff", "Bu", "L2UI.MacroWnd.Macro_Icon4"), (max, name, acr, tex));
            router.Dispose();
        }

        [Test]
        public void RequestMakeMacro_ComoOAcisLe()
        {
            var m = Macro(0, "Nova");
            var e = new PacketWriter().C(0xc1).D(0).S("Nova").S("desc Nova").S("No").C(3).C(2);
            e.C(1).C(1).D(1216).C(0).S("/useskill Self Heal");
            e.C(2).C(4).D(0).C(5).S("/useshortcut 1 6");
            CollectionAssert.AreEqual(e.Bytes(), MacroPackets.RequestMakeMacro(m));
        }

        [Test]
        public void RequestDeleteMacro_Id() => CollectionAssert.AreEqual(new PacketWriter().C(0xc2).D(1001).Bytes(), MacroPackets.RequestDeleteMacro(1001));
    }
}
