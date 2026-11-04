// C2/C3 da matriz (Docs/validacao.md): campos e tipos dos pacotes recebidos. Golden/packet_layouts.json
// (Docs/tools/gen_golden.py packet_layouts): para cada handler do Engine.dll, as leituras thunk_FUN_104026b0 em ordem, com os
// lacos expandidos para contador 2. Aqui cada pacote que o App.cs trata com um Parse* e montado com esse layout, o Parse*
// do Unity le com o PacketReader.Trace ligado, e a sequencia de tipos lida tem de coincidir com a do original (o Unity pode
// parar antes do fim; Skip(n) tem de cair na fronteira de um campo).
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;
using L2Web.Net;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class ReceivedLayoutTests
    {
        /// <summary>Opcode -> "Classe.Metodo" do 1o Parse*(r) de cada On(0x.., r =>) do App.cs (o que le o pacote).</summary>
        static Dictionary<string, string> UnityParsers(out List<string> inline)
        {
            var scripts = Path.Combine(Application.dataPath, "L2Web", "Scripts");
            var res = new Dictionary<string, string>();
            inline = new List<string>();
            Scan(File.ReadAllText(Path.Combine(scripts, "App.cs")), @"\bOn\((0x[0-9a-f]+), (r|_) =>", "", res, inline);
            // InterfaceRouter (#0046): On(0x.., r =>) e Ex(0x.., r =>) dos pacotes Ex (chave "ex:0x..")
            var router = File.ReadAllText(Path.Combine(scripts, "Net", "InterfaceRouter.cs"));
            Scan(router, @"\bOn\((0x[0-9a-f]+), (r|_) =>", "", res, inline);
            Scan(router, @"\bEx\((0x[0-9a-f]+), (r|_) =>", "ex:", res, inline);
            return res;
        }

        static void Scan(string src, string pattern, string prefix, Dictionary<string, string> res, List<string> inline)
        {
            var ms = Regex.Matches(src, pattern);
            for (var i = 0; i < ms.Count; i++)
            {
                var op = prefix == "" ? ms[i].Groups[1].Value : prefix + "0x" + System.Convert.ToInt32(ms[i].Groups[1].Value, 16).ToString("x");
                if (ms[i].Groups[2].Value == "_") continue; // nao le nada
                var end = i + 1 < ms.Count ? ms[i + 1].Index : src.Length;
                var block = src.Substring(ms[i].Index, end - ms[i].Index);
                var p = Regex.Match(block, @"(\w+Packets)\.(Parse\w+)\(r\b");
                var raw = Regex.Match(block, @"\br\.(C|H|D|Q|F|S|B|Skip)\(");
                if (p.Success && (!raw.Success || raw.Index > p.Index)) res[op] = p.Groups[1].Value + "." + p.Groups[2].Value;
                else inline.Add(op);
            }
        }

        static int Width(string t) => t[0] switch { 'c' => 1, 'h' => 2, 'd' => 4, 'Q' => 8, 'f' => 8, 'S' => 4, 'b' => int.Parse(t.Substring(1)), _ => 0 };

        static byte[] Build(JArray toks)
        {
            var w = new PacketWriter();
            foreach (var x in toks)
            {
                var t = (string)x;
                var v = t.EndsWith(":2") ? 2 : 0;
                switch (t[0])
                {
                    case 'c': w.C(v); break;
                    case 'h': w.H(v); break;
                    case 'd': w.D(v); break;
                    case 'Q': w.D(0).D(0); break;
                    case 'f': w.D(0).D(0); break;
                    case 'S': w.S("A"); break;
                    case 'b':
                        for (var k = 0; k < Width(t); k++) w.C(0);
                        break;
                }
            }
            return w.Bytes();
        }

        /// <summary>Compara a leitura do Unity com o layout; devolve o erro ou null.</summary>
        static string Compare(List<string> unity, JArray toks)
        {
            var orig = toks.Select(x => ((string)x).Split(':')[0]).ToList();
            var j = 0;
            foreach (var u in unity)
            {
                if (u.StartsWith("skip"))
                {
                    var n = int.Parse(u.Substring(4));
                    while (n > 0 && j < orig.Count) n -= Width(orig[j++]);
                    if (n != 0) return $"Skip fora da fronteira de campo perto do campo {j}";
                    continue;
                }
                if (j >= orig.Count) return $"o Unity le {u} depois do fim do layout ({orig.Count} campos)";
                var o = orig[j];
                if (u != o) return $"campo {j}: Unity {u}, original {o} (Unity {string.Join("", unity)} / original {string.Join("", orig)})";
                j++;
            }
            return null;
        }

        [Test]
        public void ParsersDoUnity_LeemOsTiposDoEngine()
        {
            var g = (JObject)Golden.Load("packet_layouts.json");
            var parsers = UnityParsers(out var inline);
            // pacotes Ex (0xfe + h sub) que o App le: o despacho do 0xfe e manual
            parsers["ex:0x12"] = "UiPackets.ParseExAutoSoulShot";
            // pet/servo (0xb0-0xb6, 0xd1, 0xee): lidos no InterfaceRouter (#0046)
            Assert.Greater(parsers.Count, 40);
            var erros = new List<string>();
            var conferidos = new List<string>();
            var incertos = new List<string>();
            foreach (var (op, name) in parsers)
            {
                var key = op.StartsWith("ex:") ? op : "0x" + System.Convert.ToInt32(op, 16).ToString("x");
                if (g[key] is not JObject e)
                {
                    erros.Add($"{op}: sem handler no Engine.dll");
                    continue;
                }
                var toks = (JArray)e["tokens"];
                if (!(bool)e["complete"]) incertos.Add(op);
                var parts = name.Split('.');
                var m = typeof(GamePackets).Assembly.GetType("L2Web.Net." + parts[0])?.GetMethod(parts[1], BindingFlags.Public | BindingFlags.Static, null, new[] { typeof(PacketReader) }, null);
                if (m == null)
                {
                    erros.Add($"{op}: {name} nao encontrado");
                    continue;
                }
                var r = new PacketReader(Build(toks)) { Trace = new List<string>() };
                try
                {
                    m.Invoke(null, new object[] { r });
                }
                catch (TargetInvocationException ex)
                {
                    // num layout incompleto o Unity pode ler alem do trecho conhecido
                    if ((bool)e["complete"]) erros.Add($"{op} {name}: {ex.InnerException?.Message}");
                }
                var err = Compare(r.Trace, toks);
                if (err != null && ((bool)e["complete"] || !err.Contains("depois do fim"))) erros.Add($"{op} {name} ({e["acis"]}): {err}");
                else conferidos.Add(op);
            }
            Debug.Log($"[C2] conferidos {conferidos.Count}: {string.Join(" ", conferidos)}; layout incompleto no original: {string.Join(" ", incertos)}; lidos direto no App: {string.Join(" ", inline)}");
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }
    }
}
