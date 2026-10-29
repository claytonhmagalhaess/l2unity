// K4 da matriz (Docs/validacao.md): PartyWnd / PartyWndCompact. Golden/party.json (Docs/tools/gen_golden.py party): estilo da
// classe (FUN_10147480), icones (FUN_1014eb90), GetClassStr/GetClassType (sysstring), GetRoutingString e as constantes dos
// scripts; o resto segue PartyWnd.uc / PartyWndCompact.uc (eventos Add/Update/Delete/DeleteAll, defeitos incluidos).
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class PartyTests
    {
        static JObject G => (JObject)Golden.Load("party.json");

        [Test]
        public void TabelasNativas_IguaisAoPseudocodigo()
        {
            var g = G;
            var style = (JObject)g["style"];
            for (var id = 0; id < 140; id++)
            {
                var want = style[id.ToString()] != null ? (int)style[id.ToString()] : 0;
                Assert.AreEqual(want, PartyNative.ClassStyle(id), $"classe {id}");
            }
            var icons = (JObject)g["icons"];
            var strs = (JObject)g["classStr"];
            for (var id = 0; id < 140; id++)
            {
                var st = PartyNative.ClassStyle(id).ToString();
                Assert.AreEqual((string)icons[st], PartyNative.ClassIconName(id), $"icone {id}");
                Assert.AreEqual((int)strs[st], PartyNative.ClassStrIndex(id), $"GetClassStr {id}");
                var ct = (JObject)g["classType"];
                Assert.AreEqual(id < (int)ct["limit"] ? (int)ct["below"] + id : (int)ct["above"] + id, PartyNative.ClassTypeIndex(id), $"GetClassType {id}");
            }
            var rt = (JObject)g["routing"];
            string Ss(int i) => "S" + i;
            for (var k = -1; k <= 5; k++)
            {
                var want = rt[k.ToString()] != null ? ((string)g["routingFormat"]).Replace("%s : %s", Ss((int)g["routingLabel"]) + " : " + Ss((int)rt[k.ToString()])) : "";
                Assert.AreEqual(want, PartyNative.RoutingString(k, Ss), $"routing {k}");
            }
            Assert.AreEqual("Loot Dist. : Finders Keepers", PartyNative.RoutingString(0, i => GameData.SysString(i, "")));
            Assert.AreEqual("Human Fighter", GameData.SysString(PartyNative.ClassTypeIndex(0), ""));
            Assert.AreEqual("Duelist", GameData.SysString(PartyNative.ClassTypeIndex(88), ""));
        }

        static string Member(int id, string name, int cls, int hp = 100, int? master = null, int routing = 0)
        {
            var p = L2Param.Add("", "ID", id);
            p = L2Param.Add(p, "Name", name);
            p = L2Param.Add(p, "CurCP", 10);
            p = L2Param.Add(p, "MaxCP", 20);
            p = L2Param.Add(p, "CurHP", hp);
            p = L2Param.Add(p, "MaxHP", 200);
            p = L2Param.Add(p, "CurMP", 5);
            p = L2Param.Add(p, "MaxMP", 50);
            p = L2Param.Add(p, "Level", 30);
            p = L2Param.Add(p, "ClassID", cls);
            if (master is int m)
            {
                p = L2Param.Add(p, "MasterID", m);
                p = L2Param.Add(p, "RoutingType", routing);
            }
            return p;
        }

        static PartyScript Script(bool compact, bool small = false) => new(compact)
        {
            SmallPartyWnd = () => small, TextWidth = s => s.Length * 5, SysString = i => "S" + i,
        };

        [Test]
        public void Grande_AddUpdateDelete_ComOsDefeitosDoScript()
        {
            var gs = (JObject)G["scripts"]["PartyWnd"];
            var s = Script(false);
            Assert.AreEqual((int)gs["height"], s.Height);
            Assert.AreEqual((int)gs["maxCount"], PartyScript.MaxCount);
            s.EnterState();
            Assert.IsFalse(s.WindowVisible);
            s.OnEvent(Ev.EV_PartyAddParty, Member(11, "Lider", 0, master: 11, routing: 2));
            s.OnEvent(Ev.EV_PartyAddParty, Member(12, "Bb", 10, master: 11, routing: 2));
            s.OnEvent(Ev.EV_PartyAddParty, Member(13, "Ccc", 88, master: 11, routing: 2));
            Assert.AreEqual(3, s.CurCount);
            Assert.IsTrue(s.WindowVisible);
            Assert.AreEqual(46 * 3, s.WindowHeight);
            Assert.AreEqual(new[] { true, true, true, false, false, false, false, false }, s.Slots.Select(x => x.Visible).ToArray());
            var l = s.Slots[0];
            Assert.AreEqual("L2UI_CH3.PartyWnd.party_leadericon", l.LeaderTex);
            Assert.AreEqual("S489 : S798", l.LeaderTooltip);
            Assert.AreEqual(-("Lider".Length * 5 / 2) - 18, l.LeaderX);
            Assert.AreEqual("", s.Slots[1].LeaderTex);
            Assert.AreEqual("S" + PartyNative.ClassStrIndex(10) + " - S" + PartyNative.ClassTypeIndex(10), s.Slots[1].ClassTooltip);
            Assert.AreEqual(PartyNative.ClassIconName(88), s.Slots[2].ClassTex);
            // Update sem MasterID: o icone de lider fica como estava
            s.OnEvent(Ev.EV_PartyUpdateParty, Member(11, "Lider", 0, hp: 7));
            Assert.AreEqual(7, s.Slots[0].Hp);
            Assert.AreEqual("L2UI_CH3.PartyWnd.party_leadericon", s.Slots[0].LeaderTex);
            // Delete do primeiro: CopyStatus mede o nome da textura (defeito), o slot 2 fica com dados velhos (ClearStatus(3))
            s.OnEvent(Ev.EV_PartyAddParty, Member(14, "Dd", 0, master: 14));
            s.OnEvent(Ev.EV_PartyDeleteParty, L2Param.Add("", "ID", 12));
            Assert.AreEqual(3, s.CurCount);
            Assert.AreEqual(new[] { 11, 13, 14, 14 }, s.Slots.Take(4).Select(x => x.Id).ToArray());
            Assert.AreEqual(-("L2UI_CH3.PartyWnd.party_leadericon".Length * 5 / 2) - 18, s.Slots[2].LeaderX);
            s.OnEvent(Ev.EV_PartyDeleteParty, L2Param.Add("", "ID", 14));
            Assert.AreEqual(2, s.CurCount);
            Assert.AreEqual(14, s.Slots[2].Id, "ClearStatus(m_CurCount) limpa o indice 3, nao o 2");
            Assert.IsFalse(s.Slots[2].Visible);
            s.OnEvent(Ev.EV_PartyDeleteAllParty, "");
            Assert.AreEqual(0, s.CurCount);
            Assert.IsFalse(s.WindowVisible);
            Assert.IsTrue(s.Slots.All(x => x.Id == 0 && x.Name == "" && x.LeaderTex == ""));
        }

        [Test]
        public void OitoMembros_IndiceLimitadoComoNoVM()
        {
            // grupo cheio (9 com o proprio): 8 slots; o Delete limpa o indice 8, que o VM limita ao 7
            var s = Script(false);
            for (var i = 1; i <= 8; i++) s.OnEvent(Ev.EV_PartyAddParty, Member(i, "m" + i, 0, master: 1));
            s.OnEvent(Ev.EV_PartyDeleteParty, L2Param.Add("", "ID", 3));
            Assert.AreEqual(7, s.CurCount);
            Assert.AreEqual(new[] { 1, 2, 4, 5, 6, 7, 8, 0 }, s.Slots.Select(x => x.Id).ToArray());
            Assert.AreEqual("", s.Slots[7].Name);
            // um 9o Add (o script nao limita o contador): m_arrID[8] vira o [7], o UpdateStatus(8) sai sem mudar nada
            s.OnEvent(Ev.EV_PartyAddParty, Member(20, "x", 0));
            s.OnEvent(Ev.EV_PartyAddParty, Member(21, "y", 0));
            Assert.AreEqual(9, s.CurCount);
            Assert.AreEqual(21, s.Slots[7].Id);
            Assert.AreEqual("x", s.Slots[7].Name);
        }

        [Test]
        public void Compacta_ToolTipsEOpcao()
        {
            var gs = (JObject)G["scripts"]["PartyWndCompact"];
            var s = Script(true, small: false);
            Assert.AreEqual((int)gs["height"], s.Height);
            s.OnEvent(Ev.EV_PartyAddParty, Member(11, "Lider", 0, master: 11));
            s.OnEvent(Ev.EV_PartyAddParty, Member(12, "Bb", 0, master: 11));
            Assert.IsFalse(s.WindowVisible, "a compacta so aparece com SmallPartyWnd");
            Assert.AreEqual("Lider(S408)", s.Slots[0].SlotTooltip);
            Assert.AreEqual("Bb", s.Slots[1].SlotTooltip);
            Assert.AreEqual("Bb\n<color=#808080>S" + PartyNative.ClassStrIndex(0) + " - S247</color>", s.Slots[1].ClassTooltip);
            // m_MasterID guardado: o Update (sem MasterID) ainda marca o lider
            s.OnEvent(Ev.EV_PartyUpdateParty, Member(11, "Lider", 0));
            Assert.AreEqual("Lider(S408)", s.Slots[0].SlotTooltip);
            var big = Script(false, small: true);
            big.OnEvent(Ev.EV_PartyAddParty, Member(11, "Lider", 0, master: 11));
            Assert.IsFalse(big.WindowVisible);
            Assert.IsFalse((bool)G["scripts"]["PartyWnd"]["showWhenSmall"]);
            Assert.IsTrue((bool)gs["showWhenSmall"]);
            var on = Script(true, small: true);
            on.OnEvent(Ev.EV_PartyAddParty, Member(11, "Lider", 0, master: 11));
            Assert.IsTrue(on.WindowVisible);
            Assert.AreEqual(26, on.WindowHeight);
        }

        [Test]
        public void Cliques_EBuffs()
        {
            var g = G["scripts"];
            var big = Script(false);
            var small = Script(true);
            var bx = ((JArray)g["PartyWnd"]["clickX"]).Select(x => (int)x).ToArray();
            var sx = (int)((JArray)g["PartyWndCompact"]["clickX"])[0];
            // janela em (0, 89), 176 de largura: X em (13, 166) exclusivo; idx = (Y - 89) / 46
            Assert.AreEqual(-1, big.HitSlot(bx[0], 100, 0, 89, 176));
            Assert.AreEqual(0, big.HitSlot(bx[0] + 1, 100, 0, 89, 176));
            Assert.AreEqual(-1, big.HitSlot(176 - bx[1], 100, 0, 89, 176));
            Assert.AreEqual(1, big.HitSlot(50, 89 + 46, 0, 89, 176));
            Assert.AreEqual(-1, small.HitSlot(sx, 100, 0, 89, 71));
            Assert.AreEqual(2, small.HitSlot(sx + 1, 89 + 52, 0, 89, 71));
            var tips = ((JArray)g["PartyWnd"]["buffTooltips"]).Select(x => "S" + (int)x).ToArray();
            Assert.AreEqual(tips[0], big.BuffTooltip);
            big.OnEvent(Ev.EV_ShowBuffIcon, L2Param.Add("", "Show", 0));
            Assert.AreEqual(1, big.CurBf, "o parametro Show e ignorado");
            Assert.AreEqual(tips[1], big.BuffTooltip);
            big.NextBuffMode();
            Assert.AreEqual(tips[2], big.BuffTooltip);
            big.NextBuffMode();
            Assert.AreEqual(0, big.CurBf);
            big.NextBuffMode();
            big.EnterState();
            Assert.AreEqual(0, big.CurBf, "OnEnterState zera o modo");
        }

        [Test]
        public void Layout_SlotsHerdamOsFilhosDoSlot0()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            foreach (var w in new[] { "PartyWnd", "PartyWndCompact" })
            {
                var d = PartyView.Inherited(w);
                var slot0 = L2WndUtil.WindowDef(w).Children.First(c => c.Name == "PartyStatusWnd0");
                for (var i = 0; i < 8; i++)
                {
                    var sl = d.Children.First(c => c.Name == "PartyStatusWnd" + i);
                    CollectionAssert.AreEqual(slot0.Children.Select(c => c.Name + i).ToArray(), sl.Children.Select(c => c.Name).ToArray(), w);
                    Assert.IsTrue(sl.Children.All(c => c.Parent == "PartyStatusWnd" + i));
                    Assert.AreEqual(i * (w == "PartyWnd" ? 46 : 26), sl.Anchor.Y);
                }
            }
        }
    }
}
