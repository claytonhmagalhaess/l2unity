// I4 da matriz (Docs/validacao.md): comandos de barra. Golden/commands.json (Docs/tools/gen_golden.py): a tabela do
// commandname-e.dat decifrada pelo l2dec413.py e, para cada id, os passos que o switch FUN_1013a320 do NWindow.dll pode
// dar (pedido de rede pela vtable do UNetworkHandler com os literais, DoAction, sysmsg, evento, dialogo, rotina local).
// O L2Commands.Plan roda cada id com varios contextos (com e sem alvo, com e sem argumento) e a uniao dos tokens tem de
// ser igual a do golden.
using System.Collections.Generic;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CommandTests
    {
        static CommandCtx Ctx(bool target, bool player, bool obscene = false) => new CommandCtx
        {
            TargetId = target ? 1234 : 0,
            TargetName = target ? "Alvo" : null,
            TargetIsPlayer = player,
            SelfName = "Eu",
            SelfX = 10, SelfY = 20, SelfZ = 30,
            FindByName = n => n == "Fulano" ? 99 : 0,
            SkillByName = n => n == "Fulano" ? 56 : 0,
            HasObscene = _ => obscene,
        };

        [Test]
        public void TabelaDoCommandnameDat()
        {
            var g = (JArray)Golden.Load("commands.json")["names"];
            Assert.AreEqual(114, g.Count);
            var got = L2Commands.Entries;
            Assert.AreEqual(g.Count, got.Count);
            for (var i = 0; i < g.Count; i++)
                Assert.AreEqual(((int)g[i]["seq"], (int)g[i]["id"], (string)g[i]["name"]), got[i], $"registro {i}");
        }

        [Test]
        public void Classificacao()
        {
            Assert.AreEqual(4, L2Commands.Classify("/sit", out var r));
            Assert.IsNull(r);
            Assert.AreEqual(4, L2Commands.Classify("/SIT", out _), "TMap<FString> nao diferencia maiusculas");
            Assert.AreEqual(16, L2Commands.Classify("/invite  Fulano", out r));
            Assert.AreEqual(" Fulano", r, "GetRemainStr so consome o separador que fecha o token");
            Assert.AreEqual(L2Commands.Chat, L2Commands.Classify("oi", out _));
            Assert.AreEqual(L2Commands.Build, L2Commands.Classify("//debug x", out _));
            Assert.AreEqual(L2Commands.Build3, L2Commands.Classify("///x", out _));
            Assert.AreEqual(L2Commands.Unknown, L2Commands.Classify("/naoexiste", out _));
            Assert.AreEqual(L2Commands.Unknown, L2Commands.Classify("/", out _));
            // '／' passa no FUN_101358a0, mas o GetCommandType so aceita '/' (0x2f): nada acontece
            Assert.AreEqual(L2Commands.Unknown, L2Commands.Classify("／sit", out _));
            // separadores do FParser (DAT_1089881c): '=' tambem fecha o token; colchetes agrupam
            Assert.AreEqual(16, L2Commands.Classify("/invite=Fulano", out r));
            Assert.AreEqual("Fulano", r);
            var p = new L2Commands.FParser("[Nome Composto] b$c");
            Assert.AreEqual("Nome Composto", p.Next());
            Assert.AreEqual("b", p.Next());
            Assert.AreEqual("c", p.Next());
            Assert.IsNull(p.Next());
        }

        [Test]
        public void DespachoIgualAoSwitchNativo()
        {
            var g = (JObject)Golden.Load("commands.json")["dispatch"];
            var def = g["default"].Select(x => (string)x).ToList();
            var ctxs = new[] { Ctx(false, false), Ctx(true, true), Ctx(true, false), Ctx(false, false, true) };
            var args = new string[] { null, "Fulano", "2 3", "x234567890123456789" };
            var erros = new List<string>();
            foreach (var (_, id, name) in L2Commands.Entries)
            {
                var want = g[id.ToString()] is JArray a ? a.Select(x => (string)x).ToList() : def;
                var got = new SortedSet<string>();
                foreach (var c in ctxs)
                foreach (var arg in args)
                    foreach (var st in L2Commands.Plan(id, arg, c))
                        got.Add(st.Token);
                // duel/partyduel dividem o bloco do switch e escolhem 0/1 por `param_1 == 0x6f`
                if (id == 111) want = want.Where(t => !t.EndsWith("(1)")).ToList();
                if (id == 113) want = want.Where(t => !t.EndsWith("(0)")).ToList();
                if (!got.SetEquals(want)) erros.Add($"{id} {name}: Unity [{string.Join(" ", got)}] != original [{string.Join(" ", want)}]");
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void TargetNext_CicloPelaDistancia()
        {
            // FUN_10432bc0: o mais perto alem do escolhido antes; sem nenhum, volta ao mais perto (FUN_10432a20); raio 200
            var all = new List<L2Commands.Near>
            {
                new(1, 50, true), new(2, 120, true), new(3, 180, true), new(4, 250, true), new(5, 90, false),
            };
            Assert.AreEqual(1, L2Commands.NextEnemy(all, 200, 0, 0));
            Assert.AreEqual(2, L2Commands.NextEnemy(all, 200, 1, 50));
            Assert.AreEqual(3, L2Commands.NextEnemy(all, 200, 2, 120));
            Assert.AreEqual(1, L2Commands.NextEnemy(all, 200, 3, 180), "passou do ultimo dentro do raio: volta ao mais perto");
            Assert.AreEqual(0, L2Commands.NextEnemy(new List<L2Commands.Near> { new(9, 300, true) }, 200, 0, 0));
            // pickup: so o filtro e o raio
            Assert.AreEqual(1, L2Commands.Nearest(all, 200, -1));
            Assert.AreEqual(2, L2Commands.Nearest(all, 200, 1));
        }

        [Test]
        public void BytesDosPedidos()
        {
            var c = Ctx(true, true);
            string Hex(int id, string arg) => string.Join("|", L2Commands.Plan(id, arg, c).Where(s => s.Kind == "pkt").Select(s => System.BitConverter.ToString(s.Packet).Replace("-", "")));
            Assert.AreEqual("1D00000000", Hex(4, null)); // ChangeWaitType(0)
            Assert.AreEqual("1C01000000", Hex(7, null)); // ChangeMoveType(1)
            Assert.AreEqual("1B05000000", Hex(46, null)); // SocialAction(5)
            Assert.AreEqual("AA00000000", Hex(0, null)); // /loc = RequestUserCommand(0)
            Assert.AreEqual("AA4D000000", Hex(77, null)); // /time
            Assert.AreEqual("A002000000", Hex(43, null)); // RequestBlock(2)
            Assert.AreEqual("6F01000000FFFFFFFF01000000", Hex(20, null)); // RequestListPartyWaiting(1, -1, 1)
            Assert.AreEqual("4525000000" + "00000000" + "00", Hex(59, null)); // RequestActionUse(37, 0, 0)
            // /invite sem argumento usa o nome do alvo jogador e o GL2PartyLooting
            Assert.AreEqual("29" + "41006C0076006F000000" + "00000000", Hex(16, null));
            // /useshortcut 2 3 = indice 3 - 13 + 2*12 = 14; /equip idem
            Assert.AreEqual(14, L2Commands.Plan(27, "2 3", c).Single().Value);
            Assert.IsEmpty(L2Commands.Plan(27, "11 3", c), "pagina 11 nao existe");
            // macro por token: %target vira o nome do alvo
            Assert.AreEqual("A000000000" + "41006C0076006F000000", Hex(44, "%target"));
            // %party1 sem membro vira vazio (o appStrcpy vem antes do teste)
            Assert.AreEqual("", L2Commands.Macro("%party1", c));
            Assert.AreEqual("%pet", L2Commands.Macro("%pet", c));
            // //cmd = SendBypassBuildCmd (0x5b) com o texto depois das duas barras
            var b = L2Commands.PlanLine("//debug x", c, out var bid);
            Assert.AreEqual(L2Commands.Build, bid);
            Assert.AreEqual("5B" + "640065006200750067002000780000 00".Replace(" ", ""), System.BitConverter.ToString(b.Single().Packet).Replace("-", ""));
        }
    }
}
