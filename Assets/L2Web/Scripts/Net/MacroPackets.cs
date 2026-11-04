// Macros (#0046, T8): SendMacroList 0xe7 (uma macro por pacote, com a revisao e o total), RequestMakeMacro 0xc1 e
// RequestDeleteMacro 0xc2. Campos pelo aCis (serverpackets/SendMacroList.java, clientpackets/RequestMakeMacro.java) e pela
// spec 05 §6.2; o engine.dll guarda as macros num cache local (UIDATA_MACRO) que o MacroListWnd le no EV_MacroUpdate.
using System.Collections.Generic;

namespace L2Web.Net
{
    /// <summary>Linha da macro. Type: 1 skill (D1 = id), 3 acao (D1 = id), 4 atalho (D1 = pagina, D2 = slot); Command e o texto.</summary>
    public sealed class MacroCmd
    {
        public int Entry, Type, D1, D2;
        public string Command;
    }

    public sealed class MacroInfo
    {
        public int Id;
        public string Name, Description, Acronym;
        /// <summary>Icone em base 0 (0..6), como o RequestMakeMacro envia.</summary>
        public int Icon;
        public List<MacroCmd> Commands = new List<MacroCmd>();

        /// <summary>IconTextureName: o MacroEditWnd le o numero do icone (1..7) no ultimo caractere (spec 05 §6.2).</summary>
        public string TextureName => "L2UI.MacroWnd.Macro_Icon" + (Icon + 1);
    }

    public sealed class SendMacroListInfo
    {
        /// <summary>Revisao da lista (o aCis soma 1 a cada mudanca e reenvia todas as macros com ela).</summary>
        public int Revision;
        /// <summary>Total de macros da revisao.</summary>
        public int Count;
        /// <summary>A macro deste pacote (null quando a lista ficou vazia).</summary>
        public MacroInfo Macro;
    }

    /// <summary>Cache das macros (o UIDATA_MACRO do original), montado com os SendMacroList de cada revisao.</summary>
    public sealed class MacroBook
    {
        public int Revision = -1;
        public int Count;
        public readonly SortedDictionary<int, MacroInfo> Macros = new SortedDictionary<int, MacroInfo>();

        /// <summary>Aplica um SendMacroList; true quando a revisao ficou completa (a lista pode ser mostrada).</summary>
        public bool Apply(SendMacroListInfo m)
        {
            if (m.Revision != Revision)
            {
                Revision = m.Revision;
                Macros.Clear();
            }
            Count = m.Count;
            if (m.Macro != null) Macros[m.Macro.Id] = m.Macro;
            return Macros.Count >= Count;
        }

        public MacroInfo Get(int id) => Macros.TryGetValue(id, out var m) ? m : null;
    }

    public static class MacroPackets
    {
        /// <summary>SendMacroList 0xe7: D revisao, C 0, C total, C tem macro, [D id, S nome, S descricao, S acronimo, C icone, C n, n linhas].</summary>
        public static SendMacroListInfo ParseSendMacroList(PacketReader r)
        {
            var o = new SendMacroListInfo { Revision = r.D() };
            r.C();
            o.Count = r.C();
            if (r.C() == 0) return o;
            var m = new MacroInfo { Id = r.D(), Name = r.S(), Description = r.S(), Acronym = r.S(), Icon = r.C() };
            var n = r.C();
            for (var i = 0; i < n; i++) m.Commands.Add(new MacroCmd { Entry = r.C(), Type = r.C(), D1 = r.D(), D2 = r.C(), Command = r.S() });
            o.Macro = m;
            return o;
        }

        /// <summary>
        /// RequestMakeMacro 0xc1 "dSSSccb": id (0 cria), nome, descricao, acronimo, icone em base 0, n e as linhas
        /// (c entrada, c tipo, d d1, c d2, S texto). O aCis corta em 12 linhas.
        /// </summary>
        public static byte[] RequestMakeMacro(MacroInfo m)
        {
            var w = new PacketWriter().C(0xc1).D(m.Id).S(m.Name ?? "").S(m.Description ?? "").S(m.Acronym ?? "").C(m.Icon).C(m.Commands.Count);
            foreach (var c in m.Commands) w.C(c.Entry).C(c.Type).D(c.D1).C(c.D2).S(c.Command ?? "");
            return w.Bytes();
        }

        /// <summary>RequestDeleteMacro 0xc2 "d".</summary>
        public static byte[] RequestDeleteMacro(int id) => new PacketWriter().C(0xc2).D(id).Bytes();
    }
}
