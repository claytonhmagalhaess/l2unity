// D1/D2/E3 da matriz (Docs/validacao.md): o barramento EV_* do Unity contra o original. Golden/events.json (de
// out/re/events_script.json, native_events.json, game_map.json e chain_verification.json): 319 eventos com id e origem,
// e os 336 pares (pacote, evento) verificados instrucao a instrucao. Cada evento que o PacketEvents emite para um pacote
// tem de ser um par do original e levar as chaves que o script le (ou, sem leitura no script, as que o nativo monta).
// Grava Docs/cobertura_eventos.md.
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using L2Web.Net;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class EventPairTests
    {
        static JObject G => (JObject)Golden.Load("events.json");

        /// <summary>Chaves do nativo que nao sao do param (opcoes lidas na mesma funcao ou ramos de outros eventos).</summary>
        static readonly HashSet<string> NotParam = new() { "OlympiadObserverState", "Game", "IsLockShortcutWnd" };

        /// <summary>(tabela, opcode, eventos emitidos) para pacotes de exemplo.</summary>
        static IEnumerable<(string table, int op, List<PacketEvents.Event> evs)> Casos()
        {
            yield return ("game", 0x4a, PacketEvents.Say(new CreatureSayInfo { ObjectId = 1, Type = 0, Name = "A", Text = "oi" }, "oi"));
            yield return ("game", 0x4a, PacketEvents.Say(new CreatureSayInfo { ObjectId = 1, Type = 1, Name = "A", Text = "oi" }, "oi"));
            yield return ("game", 0x4a, PacketEvents.Say(new CreatureSayInfo { ObjectId = 1, Type = 6, Name = "A", Text = "oi" }, "oi"));
            yield return ("game", 0x4a, PacketEvents.Say(new CreatureSayInfo { ObjectId = 1, Type = 14, Name = "A", Text = "oi" }, "oi"));
            yield return ("game", 0x64, PacketEvents.SystemMessage(964, "Chatting is prohibited for one minute.", 0xffb09b79, 0));
            var st = new StatusUpdateInfo { ObjectId = 7 };
            foreach (var k in new[] { GamePackets.Status.CurHp, GamePackets.Status.MaxHp, GamePackets.Status.CurMp, GamePackets.Status.MaxMp, GamePackets.Status.CurCp, GamePackets.Status.MaxCp })
                st.Attrs[k] = 100 + k;
            yield return ("game", 0x0e, PacketEvents.Status(st));
            yield return ("game", 0x06, PacketEvents.Die(new DieInfo { ObjectId = 7, ToVillage = true }));
            yield return ("game", 0x07, PacketEvents.Revive());
            yield return ("game", 0xa6, PacketEvents.MyTargetSelected(new MyTargetSelectedInfo { ObjectId = 9, Color = -3 }));
            yield return ("game", 0x7f, PacketEvents.Abnormal(new List<AbnormalInfo> { new AbnormalInfo { SkillId = 1204, Level = 2, Seconds = 1200 } }));
            var ms = new MultiSellListInfo { ListId = 5, Page = 1, Finished = true };
            var en = new MultisellEntry { EntryId = 3 };
            en.Products.Add(new MultisellItem { ItemId = 57, Count = 10 });
            en.Ingredients.Add(new MultisellItem { ItemId = 1864, Count = 2 });
            ms.Entries.Add(en);
            yield return ("game", 0xd0, PacketEvents.MultiSell(ms));
            yield return ("game", 0x5e, PacketEvents.TradeRequest(new TradeRequestInfo { SenderId = 4 }));
            yield return ("game", 0x1e, PacketEvents.TradeStart(new TradeStartInfo { PartnerId = 4 }));
            yield return ("game", 0x22, PacketEvents.TradeDone());
            yield return ("game", 0x7c, PacketEvents.TradeOtherOk());
            yield return ("game", 0x45, PacketEvents.ShortcutInit(new List<Shortcut> { new Shortcut { Slot = 3, Type = "skill", Id = 3 } }));
            yield return ("game", 0x44, PacketEvents.ShortcutRegister(new Shortcut { Slot = 3, Type = "skill", Id = 3 }));
            yield return ("game", 0x1b, PacketEvents.ItemList(new ItemListInfo { Show = true, Items = new List<InvItem> { new InvItem() } }));
            yield return ("game", 0x58, PacketEvents.SkillListStart());
            yield return ("game", 0x11, PacketEvents.Shop("buy", 3, 1000, 30093, 2));
            yield return ("game", 0x10, PacketEvents.Shop("sell", 0, 1000, 30093, 1));
            yield return ("game", 0x27, PacketEvents.InventoryUpdate(new List<InvItem> { new InvItem { Change = 1 }, new InvItem { Change = 2 }, new InvItem { Change = 3 } }));
            yield return ("game", 0x20, PacketEvents.TradeAdd(true));
            yield return ("game", 0x21, PacketEvents.TradeAdd(false));
            var pm = new PartyMember { ObjectId = 2, Name = "B", Hp = 1, MaxHp = 2, Mp = 3, MaxMp = 4, Cp = 5, MaxCp = 6, Level = 7, ClassId = 8 };
            yield return ("game", 0x4e, PacketEvents.PartyAdd(new[] { pm }, 1, 1));
            yield return ("game", 0x4f, PacketEvents.PartyAdd(new[] { pm }, 1, 2));
            yield return ("game", 0x50, PacketEvents.PartyDeleteAll());
            yield return ("game", 0x51, PacketEvents.PartyDelete(2, 0));
            yield return ("game", 0x52, PacketEvents.PartyUpdate(pm));
            yield return ("game", 0x6e, PacketEvents.ShowBoard(new ShowBoardInfo { Show = true, Id = "101", Buttons = Enumerable.Range(1, 8).Select(i => "bypass _bbs" + i).ToList() }));
            yield return ("game", 0x9b, PacketEvents.PrivateStore(new PrivateStoreSellInfo { OwnerId = 5, Adena = 10, Items = new List<StoreItem> { new StoreItem() } }));
            yield return ("game", 0x5f, PacketEvents.Restart());
            var atk = new AttackInfo { AttackerId = 1 };
            atk.Hits.Add(new AttackHit { TargetId = 2, Damage = 10, Flags = 0x20 });
            yield return ("game", 0x05, PacketEvents.Attack(atk, id => id == 1 ? "A" : "B"));
        }

        [Test]
        public void TrezentosEDezenoveEventos_ComIdEOrigem()
        {
            var ev = (JObject)G["events"];
            Assert.AreEqual(319, ev.Count);
            Assert.AreEqual(319, Ev.Names.Count);
            foreach (var p in ev.Properties()) Assert.AreEqual(p.Name, Ev.Names[(int)p.Value["id"]]);
            var origem = ev.Properties().GroupBy(p => (string)p.Value["origin"]).ToDictionary(g => g.Key, g => g.Count());
            Assert.AreEqual(230, origem["pacote do servidor"]);
            Assert.AreEqual(27, origem.First(o => o.Key.StartsWith("UI nativa")).Value);
            Assert.AreEqual(26, origem.First(o => o.Key.StartsWith("engine fora")).Value);
            Assert.AreEqual(11, origem.First(o => o.Key.StartsWith("script")).Value);
            Assert.AreEqual(15, origem.First(o => o.Key.StartsWith("registrado")).Value);
            Assert.AreEqual(10, origem["sem uso"]);
        }

        [Test]
        public void EventosEmitidos_SaoParesDoOriginal_ComAsChaves()
        {
            var g = G;
            var pairs = ((JArray)g["pairs"]).Select(p => ((string)p["table"], (int)p["opcode"], (string)p["event"])).ToHashSet();
            var events = (JObject)g["events"];
            var erros = new List<string>();
            foreach (var (table, op, evs) in Casos())
            {
                Assert.IsNotEmpty(evs, $"{table} 0x{op:x2} sem eventos");
                foreach (var e in evs)
                {
                    var name = Ev.Names[e.Id];
                    if (!pairs.Contains((table, op, name))) erros.Add($"{table} 0x{op:x2}: {name} nao e par do original");
                    var info = events[name];
                    var script = ((JArray)info["script_keys"]).Select(k => (string)k).ToList();
                    var need = (script.Count > 0 ? script : ((JArray)info["native_keys"]).Select(k => (string)k)).Where(k => !NotParam.Contains(k)).ToList();
                    if (name == "EV_ChatMessage" && !e.Param.Contains("Type=" + L2Param.Quote + "5" + L2Param.Quote)) need.Remove("SysType");
                    foreach (var k in need)
                    {
                        string v = null;
                        if (!L2Param.ParseString(e.Param, k, ref v)) erros.Add($"{table} 0x{op:x2} {name}: falta a chave {k} ({e})");
                    }
                }
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void ChatMessage_CorETipoComoOConsole()
        {
            // FUN_10163d90: grito laranja, sussurro magenta, party verde, cla lilas, comercio rosa, alianca verde-claro
            Assert.AreEqual((0xffff7200u, 1), PacketEvents.SayColor(1));
            Assert.AreEqual((0xffff7200u, 1), PacketEvents.SayColor(11));
            Assert.AreEqual((0xffff00ffu, 2), PacketEvents.SayColor(2));
            Assert.AreEqual((0xff00ff00u, 3), PacketEvents.SayColor(3));
            Assert.AreEqual((0xff7d77ffu, 4), PacketEvents.SayColor(4));
            Assert.AreEqual((0xffeaa5f5u, 8), PacketEvents.SayColor(8));
            Assert.AreEqual((0xff77ff99u, 9), PacketEvents.SayColor(9));
            Assert.AreEqual((0xff408cffu, 17), PacketEvents.SayColor(17));
            Assert.AreEqual((0xffdcdcdcu, 0), PacketEvents.SayColor(12));
            var e = PacketEvents.Say(new CreatureSayInfo { Type = 1, Name = "Nome", Text = "x" }, "x")[0];
            string msg = null;
            int r = 0, type = 0;
            L2Param.ParseString(e.Param, "Msg", ref msg);
            L2Param.ParseInt(e.Param, "ColorR", ref r);
            L2Param.ParseInt(e.Param, "Type", ref type);
            Assert.AreEqual("Nome: x", msg);
            Assert.AreEqual(0xff, r);
            Assert.AreEqual(1, type);
            // anuncio: o nome vira a sysstring 328 (como na captura do original: "Announcements: Welcome to ...")
            var an = PacketEvents.Say(new CreatureSayInfo { Type = 10, Name = "L2webTest", Text = "Welcome" }, "Welcome")[0];
            L2Param.ParseString(an.Param, "Msg", ref msg);
            Assert.AreEqual(GameData.SysString(328) + ": Welcome", msg);
            Assert.AreEqual("Announcements", GameData.SysString(328));
            var crit = PacketEvents.Say(new CreatureSayInfo { Type = 18, Name = "X", Text = "Commands" }, "Commands")[0];
            L2Param.ParseString(crit.Param, "Msg", ref msg);
            Assert.AreEqual("Commands", msg);
        }

        [Test]
        public void CoberturaDosPares()
        {
            var g = G;
            var feitos = new HashSet<(string, int, string)>();
            foreach (var (table, op, evs) in Casos())
                foreach (var e in evs) feitos.Add((table, op, Ev.Names[e.Id]));
            var pairs = (JArray)g["pairs"];
            var sb = new StringBuilder();
            sb.AppendLine("# Cobertura dos pares pacote → evento (D)");
            sb.AppendLine();
            sb.AppendLine("Gerado por `EventPairTests.CoberturaDosPares` (`Golden/events.json` de `out/re/chain_verification.json`). \"emitido\" =");
            sb.AppendLine("o `PacketEvents` do Unity dispara o evento para o pacote, com as chaves conferidas em `EventosEmitidos_SaoParesDoOriginal_ComAsChaves`.");
            sb.AppendLine();
            sb.AppendLine($"Pares do original: **{pairs.Count}**; emitidos pelo Unity: **{pairs.Count(p => feitos.Contains(((string)p["table"], (int)p["opcode"], (string)p["event"])))}**.");
            sb.AppendLine();
            sb.AppendLine("| pacote | tabela | opcode | evento | Unity |");
            sb.AppendLine("|---|---|---|---|---|");
            foreach (var p in pairs.OrderBy(p => (string)p["table"]).ThenBy(p => (int)p["opcode"]))
            {
                var k = ((string)p["table"], (int)p["opcode"], (string)p["event"]);
                sb.AppendLine($"| {p["packet"]} | {p["table"]} | 0x{(int)p["opcode"]:x2} | {p["event"]} | {(feitos.Contains(k) ? "emitido" : "falta")} |");
            }
            File.WriteAllText(Path.GetFullPath(Path.Combine(Application.dataPath, "..", "Docs", "cobertura_eventos.md")), sb.ToString());
            Assert.Greater(feitos.Count, 0);
        }
    }
}
