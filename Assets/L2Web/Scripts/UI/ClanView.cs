// ClanWnd (aba 4 do MainWnd), ClanDrawerWnd e InviteClanPopWnd do xdat (#0038) ligados ao ClanScript pelos eventos do
// InterfaceRouter (EV_ClanInfo, EV_ClanAddMember*, EV_ClanMemberInfo*, EV_ClanAuth*, EV_ClanSubClanUpdated...) e pelo
// EV_ClanMyAuth que o GameUi monta do UserInfo.
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class ClanView
    {
        public readonly L2Wnd Wnd, Drawer, Invite;
        public readonly ClanScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        readonly L2ListCtrl members, academy, grades1, grades2;
        List<ClanScript.Row> rows = new();
        List<ClanScript.Member> academyRows = new();
        static readonly string[] Panels =
        {
            "ClanMemberInfoWnd", "ClanMemberAuthWnd", "ClanInfoWnd", "ClanPenaltyWnd", "ClanWarManagementWnd", "ClanAuthManageWnd", "ClanAuthEditWnd",
            "ClanEmblemManageWnd", "ClanHeroWnd",
        };
        static readonly string[] SubPanels = { "Clan1_ChangeMemberNameWnd", "Clan1_ChangeMemberGradeNameWnd", "Clan1_AssignApprenticeWnd", "Clan1_ChangeMemberKnightHoodWnd" };

        public ClanView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            S.CastleName = id => GameData.SysString(id, "");
            ui.Main.Embedded.TryGetValue("ClanWnd", out Wnd);
            Drawer = new L2Wnd("ClanDrawerWnd", layer, new WndOpts { AriaLabel = "Clã: detalhes" });
            Invite = new L2Wnd("InviteClanPopWnd", layer, new WndOpts { AriaLabel = "Convidar para o clã" });
            if (Wnd != null)
            {
                members = new L2ListCtrl(Wnd, "ClanMemberList")
                {
                    OnClick = i => Do(S.ClickRow(Row(i))),
                    OnDoubleClick = i => Do(S.DoubleClickRow(Row(i))),
                    // popupType ClanInfo (ToolTip.uc:1451-1471): a classe do membro
                    Tooltip = i => L2Tooltip.Text(GameData.SysString(391, "") + " : " + GameData.ClassName(Row(i)?.ClassId ?? 0)),
                };
                foreach (var b in new[]
                         {
                             "ClanMemInfoBtn", "HeroBtn", "ClanMemAuthBtn", "ClanBoardBtn", "ClanInfoBtn", "ClanPenaltyBtn", "ClanQuitBtn", "ClanWarInfoBtn",
                             "ClanWarDeclareBtn", "ClanWarCancleBtn", "ClanAskJoinBtn", "ClanAuthEditBtn", "ClanTitleManageBtn",
                         })
                {
                    var name = b;
                    Wnd.OnClick(b, () =>
                    {
                        if (S.IsEnabled(name)) Do(S.Click(name, Row(members.Selected)));
                    });
                }
                var combo = Wnd.Combo("ComboboxMainClanWnd");
                if (combo != null)
                    combo.OnSelect = i =>
                    {
                        var (items, _) = S.Combo();
                        if (i >= 0 && i < items.Count) S.Show(items[i].type);
                        RenderList();
                    };
                // OnShow: getmyClanInfo, combo, botoes, lista da unidade do jogador com a linha dele escolhida
                Wnd.OnShow = () =>
                {
                    Me();
                    S.ResetButtons();
                    S.Show(S.MyClanType);
                    RenderAll();
                    members.Selected = S.IndexNum;
                    RenderList();
                };
            }
            academy = new L2ListCtrl(Drawer, "Clan1_AssignApprenticeList");
            grades1 = new L2ListCtrl(Drawer, "Clan5_AuthListCtrl");
            grades2 = new L2ListCtrl(Drawer, "Clan5_AuthListCtrl2");
            BuildDrawer();
            BuildInvite();

            L2Events.Register(Ev.EV_ClanDeleteAllMember, _ =>
            {
                S.Clear();
                Drawer.Hide();
                Invite.Hide();
                RenderAll();
            });
            L2Events.Register(Ev.EV_ClanInfo, p =>
            {
                S.ClanInfo(p);
                Me();
                RenderAll();
            });
            L2Events.Register(Ev.EV_ClanInfoUpdate, p =>
            {
                S.ClanInfoUpdate(p);
                Me();
                if (S.DrawerVisible && S.State == "ClanInfoState") RenderClanInfo();
                RenderAll();
            });
            L2Events.Register(Ev.EV_ClanAddMemberMultiple, p =>
            {
                if (S.AddMember(p, true)) RenderList();
            });
            L2Events.Register(Ev.EV_ClanAddMember, p =>
            {
                if (S.AddMember(p, false)) RenderList();
            });
            L2Events.Register(Ev.EV_ClanMemberInfoUpdate, p =>
            {
                var (_, requery) = S.MemberUpdate(p);
                if (requery) send(ClanPackets.RequestPledgeMemberInfo(S.DrawerClanType, S.CurrentName));
                RenderAll();
            });
            L2Events.Register(Ev.EV_ClanDeleteMember, p =>
            {
                var name = "";
                L2Param.ParseString(p, "Name", ref name);
                if (S.DeleteMember(name) == S.CurrentShowIndex) RenderList();
            });
            L2Events.Register(Ev.EV_ClanSubClanUpdated, p =>
            {
                S.SubClan(p);
                if (S.DrawerVisible && S.State == "ClanInfoState") RenderClanInfo();
                RenderAll();
            });
            L2Events.Register(Ev.EV_ClanMyAuth, p =>
            {
                S.MyAuth(p);
                RenderButtons();
            });
            L2Events.Register(Ev.EV_ClanMemberInfo, p =>
            {
                S.MemberInfo(p);
                RenderDrawer();
                RenderButtons();
            });
            L2Events.Register(Ev.EV_ClanAuthMember, p =>
            {
                S.AuthMember(p);
                RenderDrawer();
                RenderButtons();
            });
            L2Events.Register(Ev.EV_ClanAuthGradeList, p =>
            {
                var (a, b) = S.GradeList(p);
                List<L2ListCtrl.Cell[]> Cells(List<(string name, int members, int grade)> l) =>
                    l.ConvertAll(x => new[] { new L2ListCtrl.Cell { Text = x.name }, new L2ListCtrl.Cell { Text = x.members.ToString() } });
                grades1.Selected = grades2.Selected = 0;
                grades1.Render(Cells(a));
                grades2.Render(Cells(b));
            });
        }

        ClanScript.Row Row(int i) => i >= 0 && i < rows.Count ? rows[i] : null;

        void Me()
        {
            var u = ui.User;
            if (u == null) return;
            S.SetMe(u.Name, Stat(u, "noble") != 0, Stat(u, "hero") != 0, u.ClanId);
        }

        static long Stat(UserInfo u, string k) => u.Stats != null && u.Stats.TryGetValue(k, out var v) ? v : 0;

        /// <summary>O pedido e o painel de cada clique.</summary>
        void Do(ClanScript.Act a)
        {
            if (a == null) return;
            switch (a.Kind)
            {
                case "hide":
                    Drawer.Hide();
                    S.DrawerVisible = false;
                    return;
                case "memberInfo":
                    send(ClanPackets.RequestPledgeMemberInfo(a.Type, a.Name));
                    break;
                case "memberAuth":
                    send(ClanPackets.RequestPledgeMemberPowerInfo(a.Type, a.Name));
                    break;
                case "warList":
                    send(ClanPackets.RequestPledgeWarList(0, 0));
                    break;
                case "gradeList":
                    send(ClanPackets.RequestPledgePowerGradeList());
                    break;
                case "leave":
                    send(ClanPackets.RequestWithdrawPledge());
                    break;
                case "bbs":
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowBBS, L2Param.Add("", "Index", "3")));
                    break;
                case "penalty":
                    // ExecuteCommandFromAction("pledgepenalty") = o comando de chat /pledgepenalty [I]
                    ui.OnChatSubmit?.Invoke("/pledgepenalty", 0);
                    break;
                case "declareWar":
                case "withdrawWar":
                    // RequestClanDeclareWar / WithdrawWar sem nome: o nativo pega o cla do alvo [I]
                    var t = ui.Target;
                    var clan = t != null && t.ClanId > 0 ? ui.ClanName(t.ClanId) ?? "" : "";
                    if (clan.Length > 0) send(a.Kind == "declareWar" ? ClanPackets.RequestStartPledgeWar(clan) : ClanPackets.RequestStopPledgeWar(clan));
                    break;
                case "invite":
                    // AskJoin: so com alvo (nID > 0)
                    if (ui.Target != null && ui.Target.ObjectId > 0) Invite.Show();
                    break;
            }
            if (a.State.Length > 0) ShowState(a.State);
        }

        // ------------------------------------------------------------ ClanWnd
        void RenderAll()
        {
            if (Wnd == null) return;
            Wnd.Text("ClanNameText", S.ClanName);
            Wnd.Text("ClanMasterNameText", S.MasterReal);
            Wnd.Text("ClanAgitText", S.AgitText);
            Wnd.Text("ClanStatusText", S.StatusText);
            Wnd.Text("ClanLevelText", S.Level.ToString());
            var c = Wnd.Combo("ComboboxMainClanWnd");
            if (c != null)
            {
                var (items, sel) = S.Combo();
                c.SetItems(items.ConvertAll(x => x.text));
                c.Select(sel);
            }
            RenderList();
            RenderButtons();
        }

        void RenderList()
        {
            if (Wnd == null) return;
            var (r, count) = S.Rows();
            rows = r;
            Wnd.Text("ClanCurrentNum", count);
            members.Render(rows.ConvertAll(x => new[]
            {
                new L2ListCtrl.Cell { Text = x.Name, Color = x.NameColor }, new L2ListCtrl.Cell { Text = x.Level, Color = x.LevelColor },
                new L2ListCtrl.Cell { Tex = x.ClassIcon, TexW = 11, TexH = 11 }, new L2ListCtrl.Cell { Tex = x.Placeholder ? null : x.Online, TexW = 31, TexH = 11 },
            }));
        }

        void RenderButtons()
        {
            if (Wnd != null)
            {
                Wnd.ShowCtrl("HeroBtn", S.HeroBtnVisible);
                Wnd.ShowCtrl("ClanMemInfoBtn", S.MemInfoBtnVisible);
                foreach (var b in new[]
                         {
                             "ClanMemInfoBtn", "ClanMemAuthBtn", "ClanBoardBtn", "ClanInfoBtn", "ClanPenaltyBtn", "ClanQuitBtn", "ClanWarInfoBtn", "ClanWarDeclareBtn",
                             "ClanWarCancleBtn", "ClanAskJoinBtn", "ClanAuthEditBtn", "ClanTitleManageBtn",
                         })
                    Enable(Wnd, b);
            }
            foreach (var b in new[] { "Clan1_ChangeMemberNameBtn", "Clan1_ChangeBanishBtn", "Clan1_ChangeMemberGradeBtn", "Clan1_AssignApprenticeBtn", "Clan1_DeleteApprenticeBtn", "Clan1_ChangeMemberKHOpen" })
                Enable(Drawer, b);
        }

        void Enable(L2Wnd w, string b)
        {
            var btn = w.Button(b);
            if (!btn) return;
            var cg = btn.TryGetComponent<CanvasGroup>(out var g) ? g : btn.gameObject.AddComponent<CanvasGroup>();
            var on = S.IsEnabled(b);
            cg.alpha = on ? 1 : 0.45f;
            cg.interactable = on;
        }

        // ------------------------------------------------------------ ClanDrawerWnd
        void BuildDrawer()
        {
            Drawer.OnShow = () =>
            {
                S.DrawerOnShow();
                RenderButtons();
            };
            Drawer.OnClose = () => S.DrawerVisible = false;
            foreach (var ok in new[] { "Clan1_OKBtn", "Clan2_OKBtn", "Clan3_OKBtn", "Clan4_OKBtn", "Clan5_OKBtn", "Clan7_OKBtn", "ClanWar_OKBtn" })
                Drawer.OnClick(ok, HideDrawer);
            string Selected() => S.DrawerText.TryGetValue("Clan1_CurrentSelectedMemberName", out var n) ? n : "";
            void Sub(string show)
            {
                foreach (var s in SubPanels) Drawer.ShowCtrl(s, s == show);
            }
            void Recall()
            {
                send(ClanPackets.RequestPledgeMemberInfo(S.CurrentRecordType, S.CurrentRecordName));
                ShowState("ClanMemberInfoState");
            }
            bool On(string b) => S.IsEnabled(b);
            Drawer.OnClick("Clan1_AskJoinPartyBtn", () => send(SocialPackets.RequestJoinParty(Selected())));
            Drawer.OnClick("Clan1_ChangeMemberNameBtn", () =>
            {
                if (!On("Clan1_ChangeMemberNameBtn")) return;
                Sub("Clan1_ChangeMemberNameWnd");
                var e = Drawer.Edit("Clan1_ChangeNameTextEditbox");
                if (e) e.text = "";
            });
            Drawer.OnClick("Clan1_ChangeMemberGradeBtn", () =>
            {
                if (On("Clan1_ChangeMemberGradeBtn")) Sub("Clan1_ChangeMemberGradeNameWnd");
            });
            Drawer.OnClick("Clan1_ChangeBanishBtn", () =>
            {
                if (!On("Clan1_ChangeBanishBtn")) return;
                Sub(null);
                var name = Selected();
                HideDrawer();
                send(ClanPackets.RequestOustPledgeMember(name));
            });
            Drawer.OnClick("Clan1_AssignApprenticeBtn", () =>
            {
                if (!On("Clan1_AssignApprenticeBtn")) return;
                Sub("Clan1_AssignApprenticeWnd");
                academyRows = S.AcademyFree();
                academy.Selected = -1;
                academy.Render(academyRows.ConvertAll(m => new[]
                {
                    new L2ListCtrl.Cell { Text = m.Name }, new L2ListCtrl.Cell { Text = m.Level.ToString() },
                    new L2ListCtrl.Cell { Tex = PartyNative.ClassIconName(m.ClassId), TexW = 11, TexH = 11 },
                }));
            });
            Drawer.OnClick("Clan1_DeleteApprenticeBtn", () =>
            {
                if (!On("Clan1_DeleteApprenticeBtn")) return;
                var pupil = S.DrawerText.TryGetValue("Clan1_CurrentSelectedApprentice", out var a) ? a : "";
                send(ClanPackets.RequestPledgeSetAcademyMaster(false, Selected(), pupil));
                Recall();
            });
            Drawer.OnClick("Clan1_ChangeNameAssignBtn", () =>
            {
                var e = Drawer.Edit("Clan1_ChangeNameTextEditbox");
                send(ClanPackets.RequestGiveNickName(Selected(), e ? e.text : ""));
                if (e) e.text = "";
                Sub(null);
                Recall();
            });
            Drawer.OnClick("Clan1_ChangeNameDeleteBtn", () =>
            {
                send(ClanPackets.RequestGiveNickName(Selected(), ""));
                Sub(null);
                Recall();
            });
            var gc = Drawer.Combo("Clan1_MemberGradeList");
            if (gc != null)
            {
                gc.SetItems(S.GradeCombo());
                gc.Select(0);
            }
            Drawer.OnClick("Clan1_ChangeMemberGradeAssignBtn", () =>
            {
                send(ClanPackets.RequestPledgeSetMemberPowerGrade(Selected(), S.GradeOf(gc?.Selected ?? 0)));
                Sub(null);
                Recall();
            });
            Drawer.OnClick("Clan1_ApprenticeAssignBtn", () =>
            {
                var i = academy.Selected;
                if (i >= 0 && i < academyRows.Count && S.CurrentName.Length > 0)
                    send(ClanPackets.RequestPledgeSetAcademyMaster(true, S.CurrentName, academyRows[i].Name));
                Sub(null);
            });
            foreach (var (c, w) in new[] { ("Clan1_Cancel1", "Clan1_ChangeMemberNameWnd"), ("Clan1_Cancel2", "Clan1_ChangeMemberGradeNameWnd"), ("Clan1_Cancel3", "Clan1_AssignApprenticeWnd"), ("Clan1_Cancel4", "Clan1_ChangeMemberKnightHoodWnd") })
            {
                var sub = w;
                Drawer.OnClick(c, () => Drawer.ShowCtrl(sub, false));
            }
        }

        void HideDrawer()
        {
            Drawer.Hide();
            S.DrawerVisible = false;
        }

        /// <summary>SetStateAndShow: mostra o drawer e so o painel do estado.</summary>
        void ShowState(string state)
        {
            S.SetState(state);
            Drawer.Show();
            var panel = state switch
            {
                "ClanMemberInfoState" => "ClanMemberInfoWnd", "ClanMemberAuthState" => "ClanMemberAuthWnd", "ClanInfoState" => "ClanInfoWnd",
                "ClanAuthManageWndState" => "ClanAuthManageWnd", "ClanEmblemManageWndState" => "ClanEmblemManageWnd",
                "ClanWarManagementWndState" => "ClanWarManagementWnd", "ClanAuthEditWndState" => "ClanAuthEditWnd", "ClanHeroWndState" => "ClanHeroWnd", _ => "",
            };
            foreach (var p in Panels) Drawer.ShowCtrl(p, p == panel);
            if (panel == "ClanMemberInfoWnd")
                foreach (var s in SubPanels) Drawer.ShowCtrl(s, false);
            if (panel == "ClanInfoWnd") RenderClanInfo();
            RenderDrawer();
        }

        void RenderDrawer()
        {
            foreach (var kv in S.DrawerText) Drawer.Text(kv.Key, kv.Value);
            foreach (var kv in S.Checks)
            {
                var c = Drawer.Check(kv.Key);
                if (!c) continue;
                c.SetIsOnWithoutNotify(kv.Value);
                // so leitura no painel de autoridade do membro
                c.interactable = false;
            }
        }

        void RenderClanInfo()
        {
            var (point, color, rank, tips) = S.ClanInfoPanel();
            Drawer.Text("Clan3_ClanName", S.ClanName);
            Drawer.Text("Clan3_ClanPoint", point);
            var pt = Drawer.TextEl("Clan3_ClanPoint");
            if (pt) pt.color = color;
            Drawer.Text("Clan3_ClanRanking", rank);
            for (var i = 0; i < ClanScript.UnitCount; i++)
            {
                // reset_clan_org: os icones sem unidade ficam escondidos [I]
                var name = "Clan3_OrgIcon" + (i + 1);
                Drawer.ShowCtrl(name, tips[i] != null);
                var b = Drawer.Get(name);
                if (b && tips[i] != null) UiTooltip.Set(b.gameObject, tips[i]);
            }
        }

        // ------------------------------------------------------------ InviteClanPopWnd
        void BuildInvite()
        {
            Invite.OnShow = () =>
            {
                var c = Invite.Combo("ComboboxInviteClandPopWnd");
                if (c == null) return;
                var items = S.InviteCombo();
                c.SetItems(items.ConvertAll(x => x.name));
                c.Select(items.Count > 0 ? 0 : -1);
            };
            Invite.OnClick("InviteClandPopOkBtn", () =>
            {
                var c = Invite.Combo("ComboboxInviteClandPopWnd");
                var items = S.InviteCombo();
                var t = ui.Target;
                if (t != null && t.ObjectId > 0 && c != null && c.Selected >= 0 && c.Selected < items.Count)
                    send(ClanPackets.RequestJoinPledge(t.ObjectId, items[c.Selected].type));
                Invite.Hide();
            });
            Invite.OnClick("InviteClandPopCancelBtn", Invite.Hide);
        }
    }
}
