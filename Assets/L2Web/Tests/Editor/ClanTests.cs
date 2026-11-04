// #0038 (cla, spec 07 §3.4): ClanWnd.uc/ClanDrawerWnd.uc/InviteClanPopWnd.uc — unidades, cabecalho, combo, linhas (lider da
// ordem, cores, contador), botoes por nivel e autoridade, paineis de membro e autoridade, aprendiz, graus, informacao,
// convite e o EV_ClanMyAuth do UserInfo.
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ClanTests
    {
        static ClanScript Clan(int level = 5)
        {
            var s = new ClanScript { SysString = id => "#" + id };
            var h = new PledgeInfoHeader { ClanId = 9, Level = level, Rank = 3, Reputation = 120, Status = 0 };
            foreach (var e in InterfaceEvents.PledgeShowMemberListAll(new PledgeShowMemberListAllInfo
                     {
                         PledgeType = 0, ClanName = "Lobos", LeaderName = "Ana", Info = h,
                         Members = { new PledgeMember { Name = "Ana", Level = 60, ClassId = 2, ObjectId = 1 }, new PledgeMember { Name = "Bia", Level = 40, ClassId = 10 } },
                     }))
                Feed(s, e);
            foreach (var e in InterfaceEvents.PledgeShowMemberListAll(new PledgeShowMemberListAllInfo
                     {
                         PledgeType = -1, ClanName = "Academia", LeaderName = "", Info = h,
                         Members = { new PledgeMember { Name = "Cid", Level = 20, ClassId = 0, ObjectId = 5 }, new PledgeMember { Name = "Dan", Level = 25, HaveMaster = true } },
                     }))
                Feed(s, e);
            foreach (var e in InterfaceEvents.PledgeShowMemberListAll(new PledgeShowMemberListAllInfo
                     {
                         PledgeType = 100, ClanName = "Guarda", LeaderName = "Bia", Info = h, Members = { new PledgeMember { Name = "Eva", Level = 30 } },
                     }))
                Feed(s, e);
            return s;
        }

        static void Feed(ClanScript s, PacketEvents.Event e)
        {
            if (e.Id == Ev.EV_ClanInfo) s.ClanInfo(e.Param);
            else if (e.Id == Ev.EV_ClanAddMemberMultiple) s.AddMember(e.Param, true);
        }

        [Test]
        public void Unidades_CabecalhoEComboEscolheAMinha()
        {
            var s = Clan();
            s.SetMe("Cid", false, false, 9);
            Assert.AreEqual((ClanScript.Academy, "Lobos", "Ana", "#894"), (s.MyClanType, s.ClanName, s.MasterReal, s.StatusText));
            var (items, sel) = s.Combo();
            CollectionAssert.AreEqual(new[] { "#1399 - Lobos", "#1400 - Guarda", "#1452 - Academia" }, items.Select(i => i.text));
            Assert.AreEqual(2, sel);
        }

        [Test]
        public void Linhas_LiderDaOrdemCoresEContador()
        {
            var s = Clan();
            s.SetMe("Bia", false, false, 9);
            s.Show(ClanScript.Main);
            var (rows, count) = s.Rows();
            Assert.AreEqual(("Ana", "1", "(0/2)"), (rows[0].Name, rows[0].Status, count), "o OnLineNum = OnLineNum++ do script nunca soma");
            Assert.AreEqual(((byte)255, 1), (rows[1].NameColor.r, s.IndexNum), "o proprio jogador");
            s.Show(ClanScript.Knight1);
            (rows, count) = s.Rows();
            Assert.AreEqual(("Bia", "0", "40", "(0/2)"), (rows[0].Name, rows[0].Status, rows[0].Level, count), "lider da ordem pelo cla principal");
            s.Show(ClanScript.Academy);
            (rows, count) = s.Rows();
            Assert.AreEqual(("Cid", "(0/2)"), (rows[0].Name, count), "a academia conta como o cla principal: sem linha de lider");
            Assert.AreEqual((byte)235, rows[1].NameColor.r, "com mestre = amarelo");
            Assert.AreEqual("L2UI_CH3.BloodHoodWnd.BloodHood_Logon", rows[0].Online);
            s.SubClan(L2Param.Add(L2Param.Add("", "ClanType", 200), "ClanName", "Real"));
            s.Show(ClanScript.Knight2);
            (rows, count) = s.Rows();
            Assert.AreEqual(("#1445", true, "(0/1)"), (rows[0].Name, rows[0].Placeholder, count), "ordem sem lider");
        }

        [Test]
        public void Botoes_PorNivelEAutoridade()
        {
            var s = Clan(1);
            s.ResetButtons();
            Assert.IsFalse(s.IsEnabled("ClanBoardBtn"), "nivel 1 sem quadro");
            Assert.IsFalse(s.IsEnabled("ClanAskJoinBtn"), "sem Join");
            s.MyAuth(ClanScript.MyAuthParam(2 | 32, false));
            s.Level = 3;
            s.ResetButtons();
            Assert.IsTrue(s.IsEnabled("ClanAskJoinBtn") && s.IsEnabled("ClanWarDeclareBtn"));
            Assert.IsFalse(s.IsEnabled("ClanAuthEditBtn"), "so o lider edita graus");
            s.MyAuth(ClanScript.MyAuthParam(0, true));
            s.ResetButtons();
            Assert.IsTrue(s.IsEnabled("ClanAuthEditBtn") && s.IsEnabled("ClanTitleManageBtn"));
            Assert.IsFalse(s.IsEnabled("ClanQuitBtn"), "lider nao sai");
            var none = new ClanScript();
            none.ResetButtons();
            Assert.IsFalse(none.IsEnabled("ClanMemInfoBtn"), "sem cla");
        }

        [Test]
        public void MyAuth_BitsDoAcis()
        {
            var p = ClanScript.MyAuthParam(2 | 4 | 16 | 32 | 64 | 128 | 256, true);
            int m = 0, j = 0, n = 0, c = 0, w = 0, g = 0, mm = 0, o = 0;
            L2Param.ParseInt(p, "ClanMaster", ref m);
            L2Param.ParseInt(p, "Join", ref j);
            L2Param.ParseInt(p, "NickName", ref n);
            L2Param.ParseInt(p, "ClanCrest", ref c);
            L2Param.ParseInt(p, "War", ref w);
            L2Param.ParseInt(p, "Grade", ref g);
            L2Param.ParseInt(p, "ManageMaster", ref mm);
            L2Param.ParseInt(p, "OustMember", ref o);
            Assert.AreEqual(8, m + j + n + c + w + g + mm + o);
            var j8 = -1;
            L2Param.ParseInt(ClanScript.MyAuthParam(8, false), "Join", ref j8);
            Assert.AreEqual(0, j8, "8 = armazem, nao da Join");
        }

        [Test]
        public void Cliques_PainelAlternaEPedido()
        {
            var s = Clan();
            s.SetMe("Ana", false, false, 9);
            var (rows, _) = s.Rows();
            var a = s.Click("ClanMemInfoBtn", rows[1]);
            Assert.AreEqual(("memberInfo", 0, "Bia", "ClanMemberInfoState"), (a.Kind, a.Type, a.Name, a.State));
            Assert.AreEqual("hide", s.Click("ClanMemInfoBtn", rows[1]).Kind, "2o clique fecha");
            Assert.IsNull(s.ClickRow(rows[0]), "sem painel aberto a linha nao pede");
            s.Click("ClanMemAuthBtn", rows[0]);
            Assert.AreEqual("memberAuth", s.ClickRow(rows[1]).Kind);
            Assert.AreEqual(("leave", "Lobos"), (s.Click("ClanQuitBtn", null).Kind, s.Click("ClanQuitBtn", null).Name));
            Assert.AreEqual("ClanMemberInfoState", s.DoubleClickRow(rows[1]).State);
        }

        [Test]
        public void Drawer_MembroAprendizEGrau()
        {
            var s = Clan();
            s.SetMe("Ana", false, false, 9);
            s.MyAuth(ClanScript.MyAuthParam(0, true));
            var p = L2Param.Add("", "ClanType", 0);
            p = L2Param.Add(p, "Name", "Bia");
            p = L2Param.Add(p, "NickName", "Escudo");
            p = L2Param.Add(p, "GradeID", 2);
            p = L2Param.Add(p, "OrderName", "Lobos");
            p = L2Param.Add(p, "MasterName", "");
            s.MemberInfo(p);
            Assert.AreEqual(("#1407", "#1399 - Lobos", "#27", "#1431"), (s.DrawerText["Clan1_CurrentSelectedMemberGrade"], s.DrawerText["Clan1_CurrentSelectedMemberOrderName"],
                s.DrawerText["Clan1_CurrentSelectedApprentice"], s.DrawerText["Clan1_CurrentSelectedApprenticeTitle"]));
            Assert.IsTrue(s.IsEnabled("Clan1_AssignApprenticeBtn") && !s.IsEnabled("Clan1_DeleteApprenticeBtn"), "sem aprendiz: so atribuir");
            Assert.IsTrue(s.IsEnabled("Clan1_ChangeBanishBtn"), "o lider expulsa");
            CollectionAssert.AreEqual(new[] { "Cid" }, s.AcademyFree().Select(m => m.Name), "so quem nao tem mestre");
            Assert.AreEqual((1, 6), (s.GradeOf(0), s.GradeOf(5)), "o ultimo item volta ao grau da unidade (cla = 6)");
            var me = L2Param.Add(L2Param.Add(L2Param.Add("", "ClanType", 0), "Name", "Ana"), "MasterName", "Cid");
            s.MemberInfo(me);
            Assert.IsFalse(s.IsEnabled("Clan1_ChangeBanishBtn"), "a si mesmo nao");
            Assert.AreEqual("#342", s.DrawerText["Clan1_CurrentSelectedMemberGrade"], "o lider do cla");
            Assert.AreEqual(6, s.GradeCombo().Count);
        }

        [Test]
        public void Drawer_AutoridadeEInfo()
        {
            var s = Clan();
            s.SetMe("Bia", false, false, 9);
            var p = L2Param.Add(L2Param.Add("", "Grade", 3), "Name", "Bia");
            for (var i = 0; i < 32; i++) p = L2Param.Add(p, "PowerValue" + i, i >= 1 && i <= 9 ? 1 : 0);
            s.AuthMember(p);
            Assert.IsTrue(s.Checks["Clan2_Check100"] && s.Checks["Clan2_Check109"] && !s.Checks["Clan2_Check200"]);
            Assert.AreEqual((1, 1, 1), (s.Join, s.Crest, s.War), "o proprio jogador atualiza Join/ClanCrest/War");
            var (point, color, rank, tips) = s.ClanInfoPanel();
            Assert.AreEqual(("120 #1442", "#1375 3"), (point, rank));
            Assert.AreEqual((byte)126, color.r);
            Assert.AreEqual("Guarda\n#1438 : Bia", tips[1]);
            Assert.IsNull(tips[3]);
            var g = L2Param.Add("", "Count", 9);
            for (var i = 0; i < 9; i++) g = L2Param.Add(L2Param.Add(g, "GradeID" + i, i + 1), "GradeMemberCount" + i, i);
            var (a, b) = s.GradeList(g);
            Assert.AreEqual((5, 4, "#1406", 8), (a.Count, b.Count, a[0].name, b[3].members));
        }

        [Test]
        public void Convite_PeloTamanhoDoTipo()
        {
            var s = Clan();
            s.SetMe("Eva", false, false, 9);
            CollectionAssert.AreEqual(new[] { 100, -1 }, s.InviteCombo().Select(x => x.type), "tipo 100: so unidades de 3+ digitos e a academia");
            s.SetMe("Ana", false, false, 9);
            Assert.AreEqual(3, s.InviteCombo().Count);
        }

        [Test]
        public void Atualizacoes_MembroEntraSaiEMuda()
        {
            var s = Clan();
            s.SetMe("Ana", false, false, 9);
            var add = InterfaceEvents.PledgeMemberAdd(new PledgeMember { Name = "Fil", Level = 10, PledgeType = 0 })[0];
            Assert.IsTrue(s.AddMember(add.Param, false));
            Assert.AreEqual(3, s.Units[0].Members.Count);
            var up = InterfaceEvents.PledgeMemberUpdate(new PledgeMember { Name = "Fil", Level = 11, PledgeType = 100 })[0];
            s.MemberUpdate(up.Param);
            Assert.AreEqual((2, 2), (s.Units[0].Members.Count, s.Units[1].Members.Count), "mudou de unidade");
            Assert.AreEqual(1, s.DeleteMember("Fil"));
            Assert.AreEqual(-1, s.DeleteMember("Ninguem"));
        }
    }
}
