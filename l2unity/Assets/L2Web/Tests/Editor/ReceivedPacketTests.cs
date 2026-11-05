// C4/C5 da matriz (Docs/validacao.md): os 361 pacotes que o engine.dll trata (Golden/received.json, de out/re/game_map.json)
// contra os que o Unity trata. Os 28 que o original descarta (tratador `xor al,al; ret`) nao podem ter efeito no Unity.
// Grava Docs/cobertura_recebidos.md (efeito de cada pacote no original e se o Unity o trata). Os tratadores do Unity sao
// lidos do codigo-fonte: On(0xNN, ...) no App e no Net/InterfaceRouter, o switch do LoginClient e as esperas do GameClient.
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class ReceivedPacketTests
    {
        static string Src(string rel) => File.ReadAllText(Path.Combine(Application.dataPath, "L2Web/Scripts", rel));

        static int Hex(string h) => System.Convert.ToInt32(h, 16);

        /// <summary>(tabela, opcode) tratados pelo Unity.</summary>
        static HashSet<(string, int)> Unity()
        {
            var set = new HashSet<(string, int)>();
            var app = Src("App.cs");
            foreach (Match m in Regex.Matches(app, @"\bOn\((0x[0-9a-fA-F]+)")) set.Add(("game", Hex(m.Groups[1].Value)));
            // sub-opcodes do 0xFE: "sub == 0xNN" dentro do On(0xfe, ...)
            var fe = app.IndexOf("On(0xfe", System.StringComparison.Ordinal);
            if (fe >= 0)
            {
                var block = app.Substring(fe, app.IndexOf("});", fe, System.StringComparison.Ordinal) - fe);
                foreach (Match m in Regex.Matches(block, @"sub == (0x[0-9a-fA-F]+)")) set.Add(("ex", Hex(m.Groups[1].Value)));
            }
            // InterfaceRouter (#0046): On(0xNN, ...) e Ex(0xNN, ...) para os pacotes Ex
            var router = Src("Net/InterfaceRouter.cs");
            foreach (Match m in Regex.Matches(router, @"\bOn\((0x[0-9a-fA-F]+)")) set.Add(("game", Hex(m.Groups[1].Value)));
            foreach (Match m in Regex.Matches(router, @"\bEx\((0x[0-9a-fA-F]+)")) set.Add(("ex", Hex(m.Groups[1].Value)));
            var login = Src("Net/LoginClient.cs");
            var sw = login.Substring(login.IndexOf("switch (op)", System.StringComparison.Ordinal));
            foreach (Match m in Regex.Matches(sw, @"case (0x[0-9a-fA-F]+):")) set.Add(("login", Hex(m.Groups[1].Value)));
            // GameClient: KeyPacket (0x00), CharSelectInfo (0x13), CharSelected (0x15), CharCreateOk/Fail (0x19/0x1a), lista 0x04
            foreach (Match m in Regex.Matches(Src("Net/GameClient.cs"), @"\b(0x(?:00|04|13|15|19|1a))\b")) set.Add(("game", Hex(m.Groups[1].Value)));
            return set;
        }

        static JArray Golden_ => (JArray)Golden.Load("received.json");

        [Test]
        public void IgnoradosPeloOriginal_NaoTemEfeitoNoUnity()
        {
            var u = Unity();
            var ign = Golden_.Where(p => (string)p["effect"] == "ignorado").ToList();
            Assert.AreEqual(28, ign.Count);
            var erros = ign.Where(p => u.Contains(((string)p["table"], (int)p["opcode"])))
                .Select(p => $"{p["table"]} 0x{(int)p["opcode"]:x2} {p["name"]} ({p["acis"]}) e tratado no Unity").ToList();
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void CoberturaDosRecebidos()
        {
            var u = Unity();
            var g = Golden_;
            var sb = new StringBuilder();
            sb.AppendLine("# Cobertura dos pacotes recebidos (C)");
            sb.AppendLine();
            sb.AppendLine("Gerado por `ReceivedPacketTests.CoberturaDosRecebidos` a partir de `Golden/received.json` (`out/re/game_map.json`).");
            sb.AppendLine();
            foreach (var grp in g.GroupBy(p => (string)p["effect"]).OrderByDescending(x => x.Count()))
                sb.AppendLine($"- {grp.Key}: {grp.Count()} no original, {grp.Count(p => u.Contains(((string)p["table"], (int)p["opcode"])))} tratados no Unity");
            sb.AppendLine();
            sb.AppendLine("| tabela | opcode | nome no cliente | aCis | efeito | eventos | Unity |");
            sb.AppendLine("|---|---|---|---|---|---|---|");
            foreach (var p in g.OrderBy(p => (string)p["table"]).ThenBy(p => (int)p["opcode"]))
            {
                var key = ((string)p["table"], (int)p["opcode"]);
                var ev = string.Join(", ", ((JArray)p["events"]).Select(e => (string)e));
                sb.AppendLine($"| {p["table"]} | 0x{(int)p["opcode"]:x2} | {p["name"]} | {p["acis"]} | {p["effect"]} | {ev} | {(u.Contains(key) ? "tratado" : (string)p["effect"] == "ignorado" ? "ignorado (igual)" : "falta")} |");
            }
            var docs = Path.GetFullPath(Path.Combine(Application.dataPath, "..", "Docs"));
            File.WriteAllText(Path.Combine(docs, "cobertura_recebidos.md"), sb.ToString());
            Assert.AreEqual(361, g.Count);
        }
    }
}
