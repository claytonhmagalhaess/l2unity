// Textos do cliente lidos dos .dat decifrados (L2Files.DecryptVer413):
//   sysstring-e.dat: int n, n x (int id, FString);
//   systemmsg-e.dat: int n, n x (int id, int unk, FString msg, int grupo, 4 bytes de cor RGBA, FString som, FString voz,
//     5 ints, FString script, FString tipo) — o mesmo layout do scripts/systemmsg_parse.py do l2anim.
// FString = indice compacto do Unreal (bit 7 sinal, bit 6 continua, 6 + 7·k bits) + texto: positivo = ANSI (cp1252) com o
// zero, negativo = UTF-16 com o zero.
using System;
using System.Collections.Generic;
using System.Text;

namespace L2Web
{
    public sealed class SystemMsgRecord
    {
        public int Id, Unk, Group;
        public string Msg, Sound, Voice, Script, Type;
        /// <summary>Cor: bytes B, G, R, A como no arquivo.</summary>
        public byte[] Color;
        public int[] Ints;

        /// <summary>
        /// Cor em hexadecimal RRGGBB. Os 4 bytes do arquivo sao B, G, R, A (02 §3.6): a mensagem 964 tem 79 9B B0 e o
        /// anti-flood a mostra com 0xFFB09B79 (FUN_10138860).
        /// </summary>
        public string ColorHex => Color == null ? "ffffff" : $"{Color[2]:x2}{Color[1]:x2}{Color[0]:x2}";

        /// <summary>Cor ARGB (0xAARRGGBB).</summary>
        public uint Argb => Color == null ? 0xffffffff : (uint)(Color[3] << 24 | Color[2] << 16 | Color[1] << 8 | Color[0]);
    }

    public static class L2Texts
    {
        /// <summary>cp1252 de 0x80 a 0x9F (o resto e igual ao Latin-1); sem depender do provedor de code pages.</summary>
        const string Cp1252High = "\u20ac\u0081\u201a\u0192\u201e\u2026\u2020\u2021\u02c6\u2030\u0160\u2039\u0152\u008d\u017d\u008f\u0090\u2018\u2019\u201c\u201d\u2022\u2013\u2014\u02dc\u2122\u0161\u203a\u0153\u009d\u017e\u0178";

        static string Ansi(byte[] b, int p, int n)
        {
            var c = new char[n];
            for (var i = 0; i < n; i++)
            {
                var x = b[p + i];
                c[i] = x >= 0x80 && x < 0xa0 ? Cp1252High[x - 0x80] : (char)x;
            }
            return new string(c);
        }

        public static string FString(byte[] b, ref int p)
        {
            int b0 = b[p++];
            var v = b0 & 0x3f;
            if ((b0 & 0x40) != 0)
            {
                var sh = 6;
                while (true)
                {
                    int x = b[p++];
                    v |= (x & 0x7f) << sh;
                    sh += 7;
                    if ((x & 0x80) == 0) break;
                }
            }
            if ((b0 & 0x80) != 0) v = -v;
            if (v == 0) return "";
            string s;
            if (v > 0)
            {
                s = Ansi(b, p, v - 1);
                p += v;
            }
            else
            {
                s = Encoding.Unicode.GetString(b, p, -2 * v - 2);
                p += -2 * v;
            }
            return s;
        }

        public static Dictionary<int, string> ParseSysString(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var outp = new Dictionary<int, string>(n);
            for (var i = 0; i < n; i++)
            {
                var id = BitConverter.ToInt32(b, p);
                p += 4;
                outp[id] = FString(b, ref p);
            }
            return outp;
        }

        public static Dictionary<int, SystemMsgRecord> ParseSystemMsg(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var outp = new Dictionary<int, SystemMsgRecord>(n);
            for (var i = 0; i < n; i++)
            {
                var r = new SystemMsgRecord { Id = BitConverter.ToInt32(b, p), Unk = BitConverter.ToInt32(b, p + 4) };
                p += 8;
                r.Msg = FString(b, ref p);
                r.Group = BitConverter.ToInt32(b, p);
                p += 4;
                r.Color = new[] { b[p], b[p + 1], b[p + 2], b[p + 3] };
                p += 4;
                r.Sound = FString(b, ref p);
                r.Voice = FString(b, ref p);
                r.Ints = new int[5];
                for (var k = 0; k < 5; k++, p += 4) r.Ints[k] = BitConverter.ToInt32(b, p);
                r.Script = FString(b, ref p);
                r.Type = FString(b, ref p);
                outp[r.Id] = r;
            }
            return outp;
        }
    }
}
