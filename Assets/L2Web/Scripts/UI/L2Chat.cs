// Envio e recepcao do chat como o NWindow.dll (93 §8.1, 02 §3.2):
//   Classify  = FUN_10139c50 (tipo pela aba, prefixos em ASCII e largura total, sussurro, remocao do prefixo);
//   AntiFlood = console+0x228 (construtor FUN_10136b70, pontuacao FUN_10138860, decaimento FUN_10137d30 a cada 1000 ms);
//   Obscene   = FUN_1014cff0 (filtro de palavroes aplicado na recepcao, mascara = sysstring 740).
using System;
using System.Collections.Generic;
using System.Text;

namespace L2Web.UI
{
    public static class L2Chat
    {
        /// <summary>Prefixos de canal (tabela do NWindow.dll em 0x10350e18, tipos do FUN_10139c50). Ordem = ordem dos testes.</summary>
        public static readonly (string text, int type)[] Prefixes =
        {
            ("!", 1), ("！", 1), ("@", 4), ("＠", 4), ("#", 3), ("＃", 3), ("＂", 2), ("\"", 2), ("”", 2), ("&", 6), ("＆", 6),
            ("*", 7), ("＊", 7), ("+", 8), ("＋", 8), ("$", 9), ("＄", 9), ("%", 17), ("％", 17), ("``", 15), ("‘‘", 15),
            ("`", 16), ("‘", 16), ("~", 0), ("～", 0),
        };

        /// <summary>Tipo padrao pela aba (so com GIsOldChat = 0): All 0, +Trade 8, #Party 3, @Clan 4, $Alliance 9.</summary>
        public static readonly int[] TabType = { 0, 8, 3, 4, 9 };

        /// <summary>Limite do campo de edicao (ChatEditBox maxLength=100 no xdat); o envio nao trunca.</summary>
        public const int MaxInput = 100;

        /// <summary>GetChatPrefix do ChatWnd.uc para as abas de canal (modo OldChatting): +Trade, #Party, @Clan, $Alliance.</summary>
        public static readonly string[] TabPrefix = { "", "+", "#", "@", "$" };

        /// <summary>Linha iniciada por '/' ou '／' e comando (commandname), nao chat.</summary>
        public static bool IsCommand(string text) => !string.IsNullOrEmpty(text) && (text[0] == '/' || text[0] == '／');

        /// <summary>Macros de texto (tabela do NWindow.dll em 0x10350d90, FUN_10135a20), sem diferenciar maiusculas.</summary>
        public static readonly string[] MacroNames = { "%target", "%self", "%pet", "%party1", "%party2", "%party3", "%party4", "%party5", "%party6", "%party7", "%party8" };

        /// <summary>
        /// FUN_10135a20 (um token): igual (appStricmp) a uma macro vira o nome e devolve true. %target e %self sem alvo/pawn
        /// e %pet sem nome ficam como estao (false); %partyN copia o nome antes de testar, entao sem membro vira "" (false).
        /// </summary>
        public static bool MacroToken(ref string tok, string self, string target, string pet, IReadOnlyList<string> party)
        {
            if (tok == null) return false;
            var t = tok;
            var k = Array.FindIndex(MacroNames, m => string.Equals(m, t, StringComparison.OrdinalIgnoreCase));
            switch (k)
            {
                case -1: return false;
                case 0:
                    if (target == null) return false;
                    tok = target;
                    return true;
                case 1:
                    if (self == null) return false;
                    tok = self;
                    return true;
                case 2:
                    if (string.IsNullOrEmpty(pet)) return false;
                    tok = pet;
                    return true;
                default:
                    tok = party != null && k - 3 < party.Count ? party[k - 3] ?? "" : "";
                    return tok.Length != 0;
            }
        }

        /// <summary>
        /// FUN_10137b70 (conferido no assembly): o texto e lido em tokens pelo FParser do Engine (separadores
        /// " \u3000\n\t\r={}$", colchetes agrupam e somem) e cada token passa pela macro. Saida = 1o token ("$" + token se o
        /// texto comeca com '$': "%s%s" se ele foi macro, "%s %s" se nao), depois cada token seguinte com " " antes, exceto
        /// quando o token anterior foi uma macro substituida (ai vai colado). Sem nenhuma substituicao, o texto volta
        /// inalterado.
        /// </summary>
        public static string Macros(string text, string self, string target, string pet = null, IReadOnlyList<string> party = null)
        {
            if (string.IsNullOrEmpty(text) || text.IndexOf('%') < 0) return text;
            var p = new L2Commands.FParser(text);
            var t0 = p.Next();
            var r0 = MacroToken(ref t0, self, target, pet, party);
            var sb = new StringBuilder();
            if (text[0] == '$') sb.Append(r0 ? "$" + t0 : "$ " + t0);
            else sb.Append(t0);
            var tok = p.Next();
            var r1 = MacroToken(ref tok, self, target, pet, party);
            var flags = new[] { r0, r1 };
            var unchanged = !(r0 || r1);
            for (var i = 0; tok != null; i++)
            {
                var k = i & 1;
                if (!flags[k]) sb.Append(' ');
                sb.Append(tok);
                tok = p.Next();
                flags[k] = MacroToken(ref tok, self, target, pet, party);
                if (flags[0] || flags[1]) unchanged = false;
            }
            return unchanged ? text : sb.ToString();
        }

        /// <summary>Resultado da classificacao: o que vai no Say2 (tipo, texto, alvo do sussurro) e se passa pelo anti-flood.</summary>
        public struct Say
        {
            public int Type;
            public string Text;
            public string Target;
            public bool Flood;
        }

        static int PrefixType(string t, out int len)
        {
            foreach (var (p, type) in Prefixes)
                if (t.StartsWith(p, StringComparison.Ordinal))
                {
                    len = p.Length;
                    return type;
                }
            len = 0;
            return -1;
        }

        /// <summary>
        /// FUN_10139c50: null se nada vai ao servidor (texto vazio, sussurro sem mensagem, so o prefixo). O texto ja deve ter
        /// passado pelas macros (%self/%target). `oldChat` = GIsOldChat (Option.ini [Game] OldChatting): sem tipo pela aba e
        /// sem o '~' (o ChatWnd.uc poe o prefixo da aba no campo).
        /// </summary>
        public static Say? Classify(string text, int tab, bool oldChat = false)
        {
            if (string.IsNullOrEmpty(text)) return null;
            var type = !oldChat && tab >= 0 && tab < TabType.Length ? TabType[tab] : 0;
            var pt = PrefixType(text, out var plen);
            if (oldChat && pt == 0) pt = -1; // o '~' so e lido com GIsOldChat = 0
            if (pt >= 0) type = pt;
            if (type == 2)
            {
                // alvo: do caractere seguinte ao prefixo ate o primeiro espaco (U+0020 ou U+3000)
                var rest = text.Substring(1);
                var n = 0;
                while (n < rest.Length && rest[n] != ' ' && rest[n] != '　') n++;
                if (n == 0) return new Say { Type = 2, Text = text, Target = null, Flood = true };
                if (text.Length <= n + 2) return null;
                return new Say { Type = 2, Text = text.Substring(n + 2), Target = rest.Substring(0, n), Flood = true };
            }
            var msg = pt >= 0 ? text.Substring(plen) : text;
            if (msg.Length == 0) return null;
            return new Say { Type = type, Text = msg, Flood = type == 0 || type == 1 || type == 8 };
        }

        // ------------------------------------------------------------------ anti-flood

        public sealed class AntiFlood
        {
            // construtor FUN_10136b70
            public const int BlockAbove = 20000, ReleaseAtOrBelow = 10000, DecayPerTick = 200, PerChar = 60, PerMessage = 100, Repeat = 2000;
            public const float ScoreFactor = 0.1f;
            public const int TickMs = 1000;
            /// <summary>Mensagens de sistema: bloqueio (964 e 1078), envio recusado (966), bloqueio removido (965).</summary>
            public const int MsgBlocked = 964, MsgBlockedHelp = 1078, MsgRefused = 966, MsgReleased = 965;

            public int Score;
            public bool Blocked;
            public readonly List<(string text, int score)> History = new();
            /// <summary>Mensagem de sistema a mostrar (id).</summary>
            public Action<int> SystemMessage = _ => { };

            /// <summary>FUN_10138860 + o teste do envio: soma a pontuacao e devolve se a mensagem pode ir ao servidor.</summary>
            public bool Check(string msg)
            {
                if (msg == null) return !Blocked;
                Score += (int)(PerChar * msg.Length + PerMessage + ScoreFactor * Score);
                Block(Score);
                var i = History.FindIndex(h => string.CompareOrdinal(h.text, msg) == 0);
                if (i < 0) History.Add((msg, Repeat));
                else
                {
                    var s = History[i].score;
                    s += (int)(ScoreFactor * s + Repeat);
                    History[i] = (msg, s);
                    Block(s);
                }
                if (!Blocked) return true;
                SystemMessage(MsgRefused);
                return false;
            }

            void Block(int score)
            {
                if (Blocked || score <= BlockAbove) return;
                Blocked = true;
                SystemMessage(MsgBlocked);
                SystemMessage(MsgBlockedHelp);
            }

            /// <summary>Timer 0xF017 (1000 ms), FUN_10137d30.</summary>
            public void Tick()
            {
                var release = true;
                Score = Math.Max(0, Score - DecayPerTick);
                if (Score > ReleaseAtOrBelow) release = false;
                for (var i = 0; i < History.Count; i++)
                {
                    var s = Math.Max(0, History[i].score - DecayPerTick);
                    History[i] = (History[i].text, s);
                    if (s > ReleaseAtOrBelow) release = false;
                }
                if (Blocked && release)
                {
                    Blocked = false;
                    SystemMessage(MsgReleased);
                }
            }
        }

        // ------------------------------------------------------------------ palavroes

        /// <summary>
        /// FUN_1014cff0: cada palavra da lista (obscene-e.dat) achada no texto em minusculas (so A-Z) e trocada no texto
        /// original pela mascara (sysstring 740), repetindo ate nao sobrar ocorrencia.
        /// </summary>
        public static string FilterObscene(string text, IReadOnlyList<string> words, string mask)
        {
            if (string.IsNullOrEmpty(text) || words == null || words.Count == 0 || mask == null) return text;
            foreach (var w in words)
            {
                if (string.IsNullOrEmpty(w)) continue;
                var lw = Lower(w);
                for (var guard = 0; guard < 1000; guard++)
                {
                    var at = Lower(text).IndexOf(lw, StringComparison.Ordinal);
                    if (at < 0) break;
                    text = text.Substring(0, at) + mask + text.Substring(at + w.Length);
                }
            }
            return text;
        }

        static string Lower(string s)
        {
            var sb = new StringBuilder(s.Length);
            foreach (var c in s) sb.Append(c >= 'A' && c <= 'Z' ? (char)(c + 0x20) : c);
            return sb.ToString();
        }

        /// <summary>Lista do obscene-e.dat decifrado: int contagem, depois registros {int id, string ASCII com 1 byte de tamanho}.</summary>
        public static List<string> ParseObsceneDat(byte[] data)
        {
            var list = new List<string>();
            var count = BitConverter.ToInt32(data, 0);
            var p = 4;
            for (var i = 0; i < count && p + 5 <= data.Length; i++)
            {
                p += 4; // id
                int len = data[p++];
                var s = Encoding.ASCII.GetString(data, p, Math.Max(0, len - 1));
                p += len;
                list.Add(s);
            }
            return list;
        }
    }
}
