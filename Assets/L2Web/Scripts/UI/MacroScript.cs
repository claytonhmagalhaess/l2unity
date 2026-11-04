// MacroListWnd.uc / MacroEditWnd.uc / MacroInfoWnd.uc (spec 05 §6.2, #0032) sem Unity: o EV_MacroList, o contador, o
// icone circular, a macro do RequestMakeMacro e o plano de execucao (o RequestUseMacro e nativo, sem pacote: o cliente
// executa as linhas como comandos do chat, esperando nos /delay).
using System;
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public static class MacroScript
    {
        /// <summary>MacroListWnd.uc: MACRO_MAX_COUNT.</summary>
        public const int MaxCount = 24;
        /// <summary>MacroEditWnd: 12 linhas, nome ate 12, acronimo ate 4; descricao ate 32 (MacroInfoWnd).</summary>
        public const int Lines = 12, MaxName = 12, MaxAcronym = 4, MaxDesc = 32;

        public sealed class Entry
        {
            public int Id;
            public string Acronym = "", Name = "", Description = "", Texture = "";
        }

        /// <summary>HandleMacroList (MacroListWnd.uc:135-178): Max e, por macro, ID_i, IconName_i, MacroName_i, Description_i, TextureName_i.</summary>
        public static List<Entry> ParseList(string p)
        {
            var o = new List<Entry>();
            var max = 0;
            L2Param.ParseInt(p, "Max", ref max);
            for (var i = 0; i < max; i++)
            {
                var e = new Entry();
                L2Param.ParseInt(p, "ID_" + i, ref e.Id);
                L2Param.ParseString(p, "IconName_" + i, ref e.Acronym);
                L2Param.ParseString(p, "MacroName_" + i, ref e.Name);
                L2Param.ParseString(p, "Description_" + i, ref e.Description);
                L2Param.ParseString(p, "TextureName_" + i, ref e.Texture);
                o.Add(e);
            }
            return o;
        }

        /// <summary>txtCount: "(NN/24)" com zero a esquerda abaixo de 10 (MacroListWnd.uc:180-186).</summary>
        public static string CountText(int max) => "(" + (max < 10 ? "0" : "") + max + "/" + MaxCount + ")";

        /// <summary>btnLeft/btnRight (MacroEditWnd.uc:185-204): icone 1..7 circular.</summary>
        public static int IconStep(int cur, int dir)
        {
            var n = cur + dir;
            if (n < 1) n = 7;
            if (n > 7) n = 1;
            return n;
        }

        /// <summary>Numero do icone (1..7) do IconTextureName: o ultimo caractere (MacroEditWnd.uc:299-328).</summary>
        public static int IconOf(string texture)
        {
            if (string.IsNullOrEmpty(texture)) return 1;
            var c = texture[texture.Length - 1];
            return c >= '1' && c <= '7' ? c - '0' : 1;
        }

        /// <summary>
        /// Uma linha do editor no formato do pacote (aCis: 1 skill, 3 acao, 4 atalho). [I] /useskill nome = 1 com a skill em
        /// d1; /useshortcut p s = 4 com a pagina em d1 e o slot em d2; outro comando = 3; texto sem barra = 0 (o nativo que
        /// converte nao foi lido).
        /// </summary>
        public static MacroCmd Line(int entry, string text, Func<string, int> skillByName)
        {
            text = (text ?? "").Trim();
            var c = new MacroCmd { Entry = entry, Command = text };
            if (!text.StartsWith("/")) return c;
            var sp = text.IndexOf(' ');
            var cmd = (sp < 0 ? text : text.Substring(0, sp)).ToLowerInvariant();
            var arg = sp < 0 ? "" : text.Substring(sp + 1).Trim();
            if (cmd.StartsWith("/useskill"))
            {
                c.Type = 1;
                c.D1 = skillByName?.Invoke(arg) ?? 0;
            }
            else if (cmd.StartsWith("/useshortcut"))
            {
                c.Type = 4;
                var parts = arg.Split(' ', StringSplitOptions.RemoveEmptyEntries);
                if (parts.Length > 0) int.TryParse(parts[0], out c.D1);
                if (parts.Length > 1) int.TryParse(parts[1], out c.D2);
            }
            else c.Type = 3;
            return c;
        }

        /// <summary>
        /// OnClickSave (MacroEditWnd.uc:332-358): RequestMakeMacro(id, nome, acronimo, icone - 1, descricao, linhas); as linhas
        /// vazias nao vao [I]; o numero da entrada e a linha do editor.
        /// </summary>
        public static MacroInfo Build(int id, string name, string acronym, int iconNum, string desc, IList<string> lines, Func<string, int> skillByName)
        {
            var m = new MacroInfo { Id = id, Name = name ?? "", Acronym = acronym ?? "", Icon = Math.Max(0, iconNum - 1), Description = desc ?? "" };
            for (var i = 0; i < Math.Min(Lines, lines?.Count ?? 0); i++)
                if (!string.IsNullOrWhiteSpace(lines[i])) m.Commands.Add(Line(i, lines[i], skillByName));
            return m;
        }

        /// <summary>
        /// RequestUseMacro: as linhas na ordem; "/delay n" espera n segundos antes da proxima e nao vira comando. Devolve
        /// (espera em ms antes deste comando, texto).
        /// </summary>
        public static List<(int waitMs, string command)> Plan(MacroInfo m)
        {
            var o = new List<(int, string)>();
            var wait = 0;
            if (m == null) return o;
            var cmds = new List<MacroCmd>(m.Commands);
            cmds.Sort((a, b) => a.Entry.CompareTo(b.Entry));
            foreach (var c in cmds)
            {
                var t = (c.Command ?? "").Trim();
                if (t.Length == 0) continue;
                if (t.StartsWith("/delay", StringComparison.OrdinalIgnoreCase))
                {
                    var arg = t.Length > 6 ? t.Substring(6).Trim() : "";
                    if (double.TryParse(arg, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out var s) && s > 0)
                        wait += (int)Math.Round(s * 1000);
                    continue;
                }
                o.Add((wait, t));
                wait = 0;
            }
            return o;
        }

        /// <summary>MacroCommand de quem e solto numa linha do editor (MacroEditWnd.uc:139-149) [I]: skill e acao.</summary>
        public static string CommandOf(string type, string name, string actionCmd) =>
            type == "skill" ? "/useskill " + name : type == "action" && !string.IsNullOrEmpty(actionCmd) ? "/" + actionCmd : "";
    }
}
