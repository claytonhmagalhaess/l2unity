// B1-B4 da matriz (Docs/validacao.md): cada pacote que o Unity envia comparado com o envio do engine.dll original
// (Golden/requests.json, gerado do out/re/request_table.json): opcode, sub-opcode e o formato campo a campo
// (c byte, h short, d int, Q int64, f double, S string UTF-16 terminada em 0, b/x bloco). Os envios que o Unity ainda nao
// faz ficam listados em Docs/cobertura_envios.md (gravado por este teste).
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using L2Web.Net;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class RequestFormatTests
    {
        /// <summary>Um envio do Unity: metodo do engine.dll que faz o mesmo envio, bytes e o tamanho dos blocos b/x do meio.</summary>
        sealed class Case
        {
            public string Unity, Method;
            public byte[] Bytes;
            public int[] Blocks = Array.Empty<int>();
        }

        static readonly byte[] RsaBlock = new byte[128];

        static IEnumerable<Case> Cases()
        {
            Case C(string unity, string method, byte[] b, params int[] blocks) => new Case { Unity = unity, Method = method, Bytes = b, Blocks = blocks };
            // login
            yield return C("LoginPackets.AuthGameGuard", "ResponseAuthGameGuard", LoginPackets.AuthGameGuard(0x1234));
            yield return C("LoginPackets.RequestAuthLogin", "RL", LoginPackets.RequestAuthLogin(RsaBlock, 0x1234), 0x80);
            yield return C("LoginPackets.RequestServerList", "RequestServerList", LoginPackets.RequestServerList(1, 2));
            yield return C("LoginPackets.RequestServerLogin", "RequestServerLogin", LoginPackets.RequestServerLogin(1, 2, 1));
            // handshake e lobby
            yield return C("GamePackets.ProtocolVersion(acis)", "FUN_10401dc0", GamePackets.ProtocolVersion(ProtocolMode.Acis), 0x100);
            yield return C("GamePackets.AuthLogin", "FUN_1040d000", GamePackets.AuthLogin("conta", 1, 2, 3, 4));
            yield return C("GamePackets.NewCharacter", "RequestNewCharacter", GamePackets.NewCharacter());
            yield return C("GamePackets.CharacterDelete", "RequestCharacterDelete", GamePackets.CharacterDelete(0));
            yield return C("GamePackets.CharacterRestore", "RequestCharacterRestore", GamePackets.CharacterRestore(0));
            yield return C("GamePackets.CharacterCreate", "RequestCharacterCreate", GamePackets.CharacterCreate(new CreateCharArgs { Name = "Nome" }));
            yield return C("GamePackets.CharacterSelected", "RequestGameStart", GamePackets.CharacterSelected(0));
            yield return C("GamePackets.RequestManorList", "RequestManorList", GamePackets.RequestManorList());
            yield return C("GamePackets.EnterWorld", "RequestEnterWorldPacket", GamePackets.EnterWorld(), 0, 0x40);
            yield return C("GamePackets.Logout", "SendLogOutPacket", GamePackets.Logout());
            yield return C("GamePackets.RequestRestart", "RequestRestart", GamePackets.RequestRestart());
            yield return C("GamePackets.RequestRestartPoint", "RequestRestartPoint", GamePackets.RequestRestartPoint(0));
            yield return C("GamePackets.NetPing", "NetPing", GamePackets.NetPing(7));
            // mundo
            yield return C("GamePackets.MoveTo", "MTL", GamePackets.MoveTo(1, 2, 3, 4, 5, 6));
            yield return C("GamePackets.StartRotating", "StartRotating", GamePackets.StartRotating(100, 1));
            yield return C("GamePackets.FinishRotating", "FinishRotating", GamePackets.FinishRotating(100));
            yield return C("GamePackets.ValidatePosition", "ValidatePosition", GamePackets.ValidatePosition(1, 2, 3, 4));
            yield return C("GamePackets.CannotMoveAnymore", "CanNotMoveAnymore", GamePackets.CannotMoveAnymore(1, 2, 3, 4));
            yield return C("GamePackets.Action", "Action", GamePackets.Action(1, 2, 3, 4));
            yield return C("GamePackets.AttackRequest", "Atk", GamePackets.AttackRequest(1, 2, 3, 4));
            yield return C("GamePackets.CancelTarget", "RequestTargetCancel", GamePackets.CancelTarget());
            yield return C("GamePackets.ActionUse", "RequestActionUse", GamePackets.ActionUse(1));
            yield return C("GamePackets.Say2", "Say2", GamePackets.Say2("oi", 0));
            yield return C("GamePackets.Say2Tell", "Say2", GamePackets.Say2Tell("oi", "alvo"));
            // interface
            yield return C("UiPackets.BypassToServer", "RequestBypassToServer", UiPackets.BypassToServer("npc_1_Chat"));
            yield return C("UiPackets.RequestLinkHtml", "RequestLinkHtml", UiPackets.RequestLinkHtml("a.htm"));
            yield return C("UiPackets.UseItem", "RequestUseItem", UiPackets.UseItem(1));
            yield return C("UiPackets.RequestItemList", "RequestItemList", UiPackets.RequestItemList());
            yield return C("UiPackets.RequestSkillList", "RequestSkillItem", UiPackets.RequestSkillList());
            yield return C("UiPackets.MagicSkillUse", "RequestMagicSkillUse", UiPackets.MagicSkillUse(1));
            yield return C("UiPackets.ShortCutReg", "RequestShortCutReg", UiPackets.ShortCutReg("skill", 0, 1));
            yield return C("UiPackets.ShortCutDel", "RequestShortCutDel", UiPackets.ShortCutDel(0));
            yield return C("UiPackets.DlgAnswer", "ConfirmDlg", UiPackets.DlgAnswer(1, true, 2));
            yield return C("UiPackets.RequestShowBoard", "RequestShowboard", UiPackets.RequestShowBoard());
            yield return C("UiPackets.RequestBuyItem", "RequestBuyItem", UiPackets.RequestBuyItem(1, new List<(int, int)> { (57, 1) }));
            yield return C("UiPackets.RequestSellItem", "RequestSellItem", UiPackets.RequestSellItem(1, new List<(int, int, int)> { (1, 57, 1) }));
            yield return C("UiPackets.MultiSellChoose", "RequestMultiSellChoose", UiPackets.MultiSellChoose(1, 2, 3));
            yield return C("UiPackets.RequestAutoSoulShot", "RequestAutoSoulShot", UiPackets.RequestAutoSoulShot(1835, true));
            // inventario (#0046, T2)
            yield return C("UiPackets.RequestUnEquipItem", "RequestUnEquipItem", UiPackets.RequestUnEquipItem(0x4000));
            yield return C("UiPackets.RequestDropItem", "RequestDropItem", UiPackets.RequestDropItem(1, 1, 2, 3, 4));
            yield return C("UiPackets.RequestDestroyItem", "RequestDestroyItem", UiPackets.RequestDestroyItem(1, 1));
            yield return C("UiPackets.RequestCrystallizeItem", "RequestCrystallizeItem", UiPackets.RequestCrystallizeItem(1, 1));
            // macro (#0046, T8)
            yield return C("MacroPackets.RequestMakeMacro", "RequestMakeMacro", MacroPackets.RequestMakeMacro(new MacroInfo
            {
                Name = "m", Description = "d", Acronym = "a", Commands = { new MacroCmd { Entry = 1, Type = 3, D1 = 2, Command = "/sit" } },
            }));
            yield return C("MacroPackets.RequestDeleteMacro", "RequestDeleteMacro", MacroPackets.RequestDeleteMacro(1));
            // social
            yield return C("SocialPackets.RequestJoinParty", "RequestJoinParty", SocialPackets.RequestJoinParty("nome"));
            yield return C("SocialPackets.AnswerJoinParty", "RequestAnswerJoinParty", SocialPackets.AnswerJoinParty(true));
            yield return C("SocialPackets.WithdrawParty", "RequestWithDrawalParty", SocialPackets.WithdrawParty());
            yield return C("SocialPackets.OustPartyMember", "RequestOustPartyMember", SocialPackets.OustPartyMember("nome"));
            yield return C("SocialPackets.TradeRequest", "RequestTrade", SocialPackets.TradeRequest(1));
            yield return C("SocialPackets.AnswerTradeRequest", "AnswerTradeRequest", SocialPackets.AnswerTradeRequest(true));
            yield return C("SocialPackets.AddTradeItem", "RequestAddTradeItem", SocialPackets.AddTradeItem(1, 1));
            yield return C("SocialPackets.TradeDone", "RequestTradeDone", SocialPackets.TradeDone(true));
            yield return C("SocialPackets.PrivateStoreBuy", "SendPrivateStoreBuyList", SocialPackets.PrivateStoreBuy(1, new List<(int, int, int)> { (1, 1, 1) }));
            yield return C("SocialPackets.FriendInvite", "RequestFriendInvite", SocialPackets.FriendInvite("nome"));
            yield return C("SocialPackets.AnswerFriendInvite", "RequestFriendAddReply", SocialPackets.AnswerFriendInvite(true));
            yield return C("SocialPackets.FriendDel", "RequestFriendDel", SocialPackets.FriendDel("nome"));
        }

        static JArray Requests => (JArray)Golden.Load("requests.json");

        /// <summary>Confere bytes contra um formato do engine.dll. Devolve null se bate, ou o motivo.</summary>
        static string Match(byte[] b, string format, int opcode, int? sub, int[] blocks)
        {
            if (b.Length == 0 || b[0] != opcode) return $"opcode {b.FirstOrDefault():x2} != {opcode:x2}";
            var pos = 1;
            var fmt = format.Substring(1);
            if (sub != null)
            {
                // o sub-opcode e o 1o campo h do formato
                if (fmt.Length == 0 || fmt[0] != 'h' || b.Length < 3) return "sem sub-opcode";
                var s = b[1] | (b[2] << 8);
                if (s != sub) return $"sub {s:x} != {sub:x}";
                pos = 3;
                fmt = fmt.Substring(1);
            }
            var blk = 0;
            for (var i = 0; i < fmt.Length; i++)
            {
                var ch = fmt[i];
                int n;
                switch (ch)
                {
                    case 'c': n = 1; break;
                    case 'h': n = 2; break;
                    case 'd': n = 4; break;
                    case 'Q':
                    case 'f': n = 8; break;
                    case 'S':
                        n = 0;
                        while (true)
                        {
                            if (pos + n + 1 >= b.Length) return $"string sem terminador no campo {i}";
                            if (b[pos + n] == 0 && b[pos + n + 1] == 0) break;
                            n += 2;
                        }
                        n += 2;
                        break;
                    case 'b':
                    case 'x':
                        // bloco no fim do formato = o resto do pacote; no meio, o tamanho vem do caso de teste
                        n = i == fmt.Length - 1 ? b.Length - pos : blk < blocks.Length ? blocks[blk++] : -1;
                        if (n < 0) return $"bloco {ch} no meio do formato sem tamanho no caso de teste";
                        break;
                    default: return $"tipo desconhecido {ch}";
                }
                if (pos + n > b.Length) return $"faltam bytes no campo {i} ('{ch}'): {b.Length - pos} de {n}";
                pos += n;
            }
            return pos == b.Length ? null : $"sobram {b.Length - pos} bytes";
        }

        [Test]
        public void ProtocolVersion_BlocoERevisaoDoEngineDll()
        {
            var g = Golden.Load("protocol.json");
            Assert.AreEqual((int)g["revision"], GamePackets.Revision);
            Assert.AreEqual("cdbd", (string)g["format"]);
            CollectionAssert.AreEqual(Golden.Hex((string)g["block"]), GamePackets.ProtocolBlock);
            var p = GamePackets.ProtocolVersion(ProtocolMode.Acis);
            Assert.AreEqual(GamePackets.Revision, BitConverter.ToInt32(p, 1));
            CollectionAssert.AreEqual(GamePackets.ProtocolBlock, p.Skip(5).Take(0x100).ToArray());
        }

        [Test]
        public void GameCrypt_ChaveEstaticaDoVersionCheck()
        {
            var g = Golden.Load("protocol.json");
            CollectionAssert.AreEqual(Golden.Hex((string)g["staticKey"]), GameCrypt.StaticKey);
            // o original ignora os 8 bytes finais que o servidor manda: mesmo resultado com lixo no lugar deles
            var a = new GameCrypt();
            var b = new GameCrypt();
            a.SetKey(Golden.Hex("0102030405060708" + (string)g["staticKey"]));
            b.SetKey(Golden.Hex("0102030405060708ffffffffffffffff"));
            var pa = new byte[] { 1, 2, 3, 4, 5 };
            var pb = (byte[])pa.Clone();
            a.Encrypt(pa);
            b.Encrypt(pb);
            CollectionAssert.AreEqual(pa, pb);
        }

        [Test]
        public void EnviosDoUnity_IguaisAoFormatoDoOriginal()
        {
            var req = Requests;
            var erros = new List<string>();
            foreach (var c in Cases())
            {
                var orig = req.Where(r => (string)r["method"] == c.Method).ToList();
                if (orig.Count == 0)
                {
                    erros.Add($"{c.Unity}: metodo {c.Method} nao existe no request_table");
                    continue;
                }
                var motivos = orig.Select(r => (fmt: (string)r["format"], why: Match(c.Bytes, (string)r["format"], (int)r["opcode"],
                    r["sub"].Type == JTokenType.Null ? (int?)null : (int)r["sub"], c.Blocks))).ToList();
                if (motivos.All(m => m.why != null))
                    erros.Add($"{c.Unity} -> {c.Method}: " + string.Join("; ", motivos.Select(m => $"{m.fmt}: {m.why}")));
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        /// <summary>Grava Docs/cobertura_envios.md: os 245 envios do original, com o builder do Unity de cada um.</summary>
        [Test]
        public void CoberturaDosEnvios()
        {
            var req = Requests;
            var feitos = Cases().GroupBy(c => c.Method).ToDictionary(g => g.Key, g => string.Join(", ", g.Select(c => c.Unity).Distinct()));
            var sb = new StringBuilder();
            sb.AppendLine("# Cobertura dos envios (B4)");
            sb.AppendLine();
            sb.AppendLine("Gerado por `RequestFormatTests.CoberturaDosEnvios` a partir de `Golden/requests.json` (`out/re/request_table.json`).");
            sb.AppendLine("Cada linha com builder do Unity é conferida byte a byte contra o formato em `EnviosDoUnity_IguaisAoFormatoDoOriginal`.");
            sb.AppendLine();
            var total = req.Count;
            var cobertos = req.Count(r => feitos.ContainsKey((string)r["method"]));
            sb.AppendLine($"Envios do original: **{total}**; com builder no Unity: **{cobertos}**; não enviados pelo Unity: **{total - cobertos}**.");
            sb.AppendLine();
            sb.AppendLine("| método do engine.dll | servidor | opcode | sub | formato | Unity |");
            sb.AppendLine("|---|---|---|---|---|---|");
            foreach (var r in req.OrderBy(r => feitos.ContainsKey((string)r["method"]) ? 0 : 1).ThenBy(r => (string)r["server"]).ThenBy(r => (int)r["opcode"]))
            {
                var m = (string)r["method"];
                var sub = r["sub"].Type == JTokenType.Null ? "" : "0x" + ((int)r["sub"]).ToString("x2");
                sb.AppendLine($"| {m} | {r["server"]} | 0x{(int)r["opcode"]:x2} | {sub} | `{r["format"]}` | {(feitos.TryGetValue(m, out var u) ? u : "não enviado")} |");
            }
            var docs = Path.GetFullPath(Path.Combine(Application.dataPath, "..", "Docs"));
            Directory.CreateDirectory(docs);
            File.WriteAllText(Path.Combine(docs, "cobertura_envios.md"), sb.ToString());
            Assert.Greater(cobertos, 0);
        }
    }
}
