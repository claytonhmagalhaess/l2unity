// K2 da matriz (Docs/validacao.md): TargetStatusWnd. Golden/target_status.json (Docs/tools/gen_golden.py target_status):
// a cadeia de if do execGetTargetNameColor avaliada de -20 a +20, os sysstring do GetUserRankString e as listas do .uc.
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class TargetStatusTests
    {
        [Test]
        public void CorDoNome_PelaDiferencaDeNivel()
        {
            var g = (JObject)Golden.Load("target_status.json")["nameColor"];
            for (var d = -20; d <= 20; d++)
                Assert.AreEqual((string)g[d.ToString()], TargetStatus.NameColor(d).ToString("x8"), $"diferenca {d}");
        }

        [Test]
        public void RankEListas()
        {
            var g = Golden.Load("target_status.json");
            var ranks = (JObject)g["rankSysString"];
            CollectionAssert.AreEqual(Enumerable.Range(0, ranks.Count).Select(i => (int)ranks[i.ToString()]).ToArray(), TargetStatus.RankSysString);
            CollectionAssert.AreEqual(((JArray)g["allWhite"]).Select(x => (int)x).ToArray(), TargetStatus.AllWhite);
            CollectionAssert.AreEqual(((JArray)g["noBar"]).Select(x => (int)x).ToArray(), TargetStatus.NoBar);
            Assert.AreEqual("Heir", GameData.SysString(TargetStatus.RankSysString[2], ""));
        }

        [Test]
        public void EtcStatus_CamposParaSkills()
        {
            // K10: Golden/etc_status.json (FUN_1041a880). Todos os campos = 3: a lista sai na ordem dos PushBack.
            var g = (JArray)Golden.Load("etc_status.json");
            var w = new L2Web.Net.PacketWriter();
            for (var i = 0; i < 7; i++) w.D(3);
            var l = L2Web.Net.UiPackets.ParseEtcStatus(new L2Web.Net.PacketReader(w.Bytes()));
            Assert.AreEqual(g.Count, l.Count);
            for (var i = 0; i < g.Count; i++)
            {
                Assert.AreEqual((int)g[i]["skill"], l[i].SkillId, $"item {i}");
                Assert.AreEqual((string)g[i]["level"] == "value" ? 3 : (int)g[i]["level"], l[i].Level, $"item {i}");
                Assert.AreEqual(-1, l[i].Seconds);
            }
            // so o campo 2 (indice 1): um icone 4270 nivel 5
            var w2 = new L2Web.Net.PacketWriter().D(0).D(5).D(0).D(0).D(0).D(0).D(0);
            var one = L2Web.Net.UiPackets.ParseEtcStatus(new L2Web.Net.PacketReader(w2.Bytes()));
            Assert.AreEqual(1, one.Count);
            Assert.AreEqual((4270, 5), (one[0].SkillId, one[0].Level));
        }

        [Test]
        public void Ramos_DoHandleTargetUpdate()
        {
            string R(int id) => "r" + id;
            // mob atacavel: nome com a cor, HP sim, MP nao, sem rank
            var mob = TargetStatus.Compute(true, false, true, false, false, 20001, "Orc", 0, -9, R);
            Assert.AreEqual(0xffff0000u, mob.Color);
            Assert.IsTrue(mob.Hp);
            Assert.IsFalse(mob.Mp);
            Assert.AreEqual("", mob.Rank);
            // o proprio jogador: cor, HP e MP
            var self = TargetStatus.Compute(false, false, false, true, false, 0, "Eu", 3, 0, R);
            Assert.AreEqual(0xffdcdcdcu, self.Color);
            Assert.IsTrue(self.Hp && self.Mp);
            // NPC nao atacavel: sem cor, sem barras, sem rank
            var npc = TargetStatus.Compute(true, false, false, false, false, 30001, "Clarissa", 0, 0, R);
            Assert.IsNull(npc.Color);
            Assert.IsFalse(npc.Hp || npc.Mp);
            Assert.AreEqual("", npc.Rank);
            // outro PC: rank pela classe no cla, sem barras
            var pc = TargetStatus.Compute(false, false, false, false, false, 0, "Outro", 2, 0, R);
            Assert.AreEqual("r1388", pc.Rank);
            Assert.IsFalse(pc.Hp);
            // monstro de evento (IsAllWhiteID): sem cor; 13036 sem barra
            Assert.IsNull(TargetStatus.Compute(true, false, true, false, false, 13031, "Porco", 0, 5, R).Color);
            Assert.IsFalse(TargetStatus.Compute(true, false, true, false, false, 13036, "Bau", 0, 5, R).Hp);
        }
    }
}
