// PartyMatchWnd, PartyMatchMakeRoomWnd, PartyMatchRoomWnd, PartyMatchWaitListWnd, PartyMatchOutWaitListWnd, UnionWnd,
// UnionDetailWnd e DuelManager do xdat (#0045) ligados aos scripts de PartyMatchScript.cs pelos eventos do InterfaceRouter.
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class PartyMatchView
    {
        public readonly L2Wnd Match, MakeRoom, Room, WaitList, OutWaitList, Union, UnionDetail, Duel;
        public readonly PartyMatchScript M = new();
        public readonly MakeRoomScript Make = new();
        public readonly PartyRoomScript R = new();
        public readonly WaitListScript W = new(), OutW = new();
        public readonly UnionScript U = new();
        public readonly DuelScript D = new();
        /// <summary>RequestDuelAnswerStart(type, rejeitando, resposta): SocialPackets.DuelAnswerStart (aCis le tipo e aceito).</summary>
        public Func<int, int, int, byte[]> DuelAnswer = (type, _, answer) => SocialPackets.DuelAnswerStart(type, answer == 1);
        /// <summary>Esconde sem o OnSendPacketWhenHiding (o servidor fechou: EV_PartyMatchRoomStart/Close).</summary>
        bool quietHide;
        readonly GameUi ui;
        readonly Action<byte[]> send;
        readonly L2ListCtrl rooms, members, wait, outWait, parties, partyMembers;
        int detailMaster;
        string detailName = "";
        readonly List<(string name, int id, int cls)> detail = new();

        public PartyMatchView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Match = new L2Wnd("PartyMatchWnd", layer, new WndOpts { AriaLabel = "Busca de grupo" });
            MakeRoom = new L2Wnd("PartyMatchMakeRoomWnd", layer, new WndOpts { AriaLabel = "Criar sala" });
            Room = new L2Wnd("PartyMatchRoomWnd", layer, new WndOpts { AriaLabel = "Sala de grupo" });
            WaitList = new L2Wnd("PartyMatchWaitListWnd", layer, new WndOpts { AriaLabel = "Lista de espera" });
            OutWaitList = new L2Wnd("PartyMatchOutWaitListWnd", layer, new WndOpts { AriaLabel = "Lista de espera" });
            Union = new L2Wnd("UnionWnd", layer, new WndOpts { AriaLabel = "Canal de comando" });
            UnionDetail = new L2Wnd("UnionDetailWnd", layer, new WndOpts { AriaLabel = "Grupo do canal" });
            Duel = new L2Wnd("DuelManager", layer, new WndOpts { Def = PartyView.Inherited("DuelManager"), AriaLabel = "Duelo" });
            rooms = new L2ListCtrl(Match, "PartyMatchListCtrl") { OnDoubleClick = i => send(PartyMatchPackets.RequestPartyMatchDetail(M.Rooms[i].Number)) };
            members = new L2ListCtrl(Room, "PartyMemberListCtrl");
            wait = new L2ListCtrl(WaitList, "WaitListCtrl") { OnDoubleClick = i => Whisper(W, i) };
            outWait = new L2ListCtrl(OutWaitList, "WaitListCtrl") { OnDoubleClick = i => Whisper(OutW, i) };
            parties = new L2ListCtrl(Union, "lstParty") { OnDoubleClick = _ => RequestPartyMember(true) };
            partyMembers = new L2ListCtrl(UnionDetail, "lstPartyMember")
            {
                OnDoubleClick = i =>
                {
                    // RequestAttack no modo PK (Ctrl), senao RequestAction
                    if (i >= 0 && i < detail.Count && detail[i].id > 0) ui.Party.Action(detail[i].id, UnityEngine.InputSystem.Keyboard.current?.ctrlKey.isPressed ?? false);
                },
            };
            BuildMatch();
            BuildMakeRoom();
            BuildRoom();
            BuildWaitLists();
            BuildUnion();
            BuildDuel();
        }

        static string Sys(int id) => GameData.SysString(id, "");

        // ------------------------------------------------------------ PartyMatchWnd
        void BuildMatch()
        {
            var loc = Match.Combo("LocationFilterComboBox");
            loc?.Select(1);
            Match.Combo("LevelFilterComboBox")?.Select(1);
            L2Events.Register(Ev.EV_PartyMatchStart, _ =>
            {
                if (!M.Start(out var exit))
                {
                    if (exit) send(PartyMatchPackets.RequestExitPartyMatchingWaitingRoom());
                    Match.Hide();
                    MakeRoom.Hide();
                    ShowWaitLists();
                    return;
                }
                UpdateOutWaitList();
                Match.Show();
            });
            L2Events.Register(Ev.EV_PartyMatchList, p =>
            {
                M.List(p);
                rooms.Selected = -1;
                rooms.Render(M.Rooms.ConvertAll(r => new[]
                {
                    new L2ListCtrl.Cell { Text = r.Number.ToString() }, new L2ListCtrl.Cell { Text = r.Leader }, new L2ListCtrl.Cell { Text = r.Title },
                    new L2ListCtrl.Cell { Text = PartyMatchCommon.ZoneName(r.Zone, Sys) }, new L2ListCtrl.Cell { Text = r.MinLevel + "-" + r.MaxLevel },
                    new L2ListCtrl.Cell { Text = r.Members + "/" + r.MaxMembers },
                }));
            });
            L2Events.Register(Ev.EV_PartyMatchRoomStart, _ => QuietHide(Match));
            // OnSendPacketWhenHiding: RequestExitPartyMatchingWaitingRoom (so quando o jogador fecha); OnHide fecha o criar sala
            Match.OnClose = () =>
            {
                if (!quietHide) send(PartyMatchPackets.RequestExitPartyMatchingWaitingRoom());
                MakeRoom.Hide();
            };
            Match.OnClick("RefreshBtn", () => RoomList(1));
            Match.OnClick("PrevBtn", () => RoomList(M.PrevPage));
            Match.OnClick("NextBtn", () => RoomList(M.NextPage));
            Match.OnClick("MakeRoomBtn", () => OpenMakeRoom(0, -1, ""));
            // RequestJoinPartyRoomAuto(pagina, local, nivel) [I]: o Net so tem o RequestPartyMatchDetail com a sala (0 = qualquer)
            Match.OnClick("AutoJoinBtn", () => send(PartyMatchPackets.RequestPartyMatchDetail(0)));
            Match.OnClick("WaitListButton", () =>
            {
                M.WaitListOpen = !M.WaitListOpen;
                ShowWaitLists();
                UpdateOutWaitList();
            });
        }

        int LocationFilter()
        {
            var c = Match.Combo("LocationFilterComboBox");
            var vals = Match.Ctrl("LocationFilterComboBox")?.J["values"] as Newtonsoft.Json.Linq.JArray;
            return c != null && vals != null && c.Selected >= 0 && c.Selected < vals.Count ? (int)vals[c.Selected]["reserved"] : -1;
        }

        int LevelFilter() => Match.Combo("LevelFilterComboBox")?.Selected ?? 0;

        /// <summary>RequestPartyRoomList(pagina, local, nivel).</summary>
        void RoomList(int page) => send(PartyMatchPackets.RequestPartyMatchConfig(page, LocationFilter(), LevelFilter()));

        void ShowWaitLists()
        {
            if (M.WaitListOpen)
            {
                if (Room.Visible) WaitList.Show();
                else OutWaitList.Show();
            }
            else
            {
                WaitList.Hide();
                OutWaitList.Hide();
            }
        }

        void UpdateOutWaitList()
        {
            if (!M.WaitListOpen) return;
            int.TryParse(OutWaitList.Edit("MinLevel")?.text, out var mn);
            int.TryParse(OutWaitList.Edit("MaxLevel")?.text, out var mx);
            send(PartyMatchPackets.RequestListPartyMatchingWaitingRoom(1, mn, mx, 1));
        }

        // ------------------------------------------------------------ PartyMatchMakeRoomWnd
        void BuildMakeRoom()
        {
            MakeRoom.OnShow = () => MakeRoom.Text("TitletoDo", Sys(Make.TitleId));
            MakeRoom.OnClick("OKButton", () =>
            {
                var (room, max, min, maxLv, title, invite) = Make.Ok(MakeRoom.Combo("MaxPartyMemberCountComboBox")?.Selected ?? 0, MakeRoom.Edit("MinLevelEditBox")?.text,
                    MakeRoom.Edit("MaxLevelEditBox")?.text, MakeRoom.Edit("TitleEditBox")?.text);
                send(PartyMatchPackets.RequestPartyMatchList(room, max, min, maxLv, 0, title));
                MakeRoom.Hide();
                if (invite != null) send(PartyMatchPackets.RequestAskJoinPartyRoom(invite));
            });
            MakeRoom.OnClick("CancelButton", () =>
            {
                MakeRoom.Hide();
                if (Make.InviteState == 1) Make.InviteState = 0;
            });
        }

        /// <summary>OnMakeRoomBtnClick (0), MakeRoomFirst do convite (1) ou OnRoomSettingButtonClick (2).</summary>
        void OpenMakeRoom(int state, int targetLevel, string invited)
        {
            Make.InviteState = state;
            Make.InvitedName = invited;
            var my = ui.User?.Level ?? 1;
            if (state == 2)
            {
                Make.RoomNumber = R.Number;
                SetMakeRoom(R.Title, R.MaxMembers, R.MinLevel, R.MaxLevel);
            }
            else
            {
                Make.RoomNumber = 0;
                var (mn, mx) = PartyMatchScript.RoomLevels(my, targetLevel);
                SetMakeRoom(GameData.SystemMessage(1398, new List<string>()).Text, 12, mn, mx);
            }
            MakeRoom.Show();
        }

        void SetMakeRoom(string title, int max, int min, int maxLv)
        {
            var t = MakeRoom.Edit("TitleEditBox");
            if (t) t.text = title;
            MakeRoom.Combo("MaxPartyMemberCountComboBox")?.Select(max - 2);
            var a = MakeRoom.Edit("MinLevelEditBox");
            if (a) a.text = min.ToString();
            var b = MakeRoom.Edit("MaxLevelEditBox");
            if (b) b.text = maxLv.ToString();
        }

        // ------------------------------------------------------------ PartyMatchRoomWnd
        void BuildRoom()
        {
            L2Events.Register(Ev.EV_PartyMatchRoomStart, p =>
            {
                R.Start(p);
                Room.Log("PartyRoomChatWindow")?.Clear();
                Room.El.anchoredPosition = Match.El.anchoredPosition;
                RenderRoom();
                if (M.WaitListOpen) send(PartyMatchPackets.RequestListPartyMatchingWaitingRoom(1, R.MinLevel, R.MaxLevel, 0));
                Room.Show();
            });
            L2Events.Register(Ev.EV_PartyMatchRoomClose, _ =>
            {
                R.Started = false;
                QuietHide(Room);
                if (!R.RequestedExit) return;
                RoomList(1);
                MakeRoom.Hide();
                R.RequestedExit = false;
            });
            L2Events.Register(Ev.EV_PartyMatchRoomMember, p =>
            {
                R.SetMembers(p);
                RenderRoom();
            });
            L2Events.Register(Ev.EV_PartyMatchRoomMemberUpdate, p =>
            {
                R.Update(p, ui.User?.ObjectId ?? 0);
                RenderRoom();
            });
            L2Events.Register(Ev.EV_PartyMatchChatMessage, p =>
            {
                var msg = "";
                int r = 255, g = 255, b = 255;
                L2Param.ParseString(p, "Msg", ref msg);
                L2Param.ParseInt(p, "ColorR", ref r);
                L2Param.ParseInt(p, "ColorG", ref g);
                L2Param.ParseInt(p, "ColorB", ref b);
                Room.Log("PartyRoomChatWindow")?.Add(msg, "sys", new Color32((byte)r, (byte)g, (byte)b, 255));
            });
            // OnCompleteEditBox (PartyMatchRoomWnd.uc:487-497): ProcessPartyMatchChatMessage e limpa o campo [I: Say2 tipo 14,
            // PARTYMATCH_ROOM, o canal em que o EV_PartyMatchChatMessage chega]
            var chat = Room.Edit("PartyRoomChatEditBox");
            if (chat)
                chat.onSubmit.AddListener(t =>
                {
                    if (!string.IsNullOrEmpty(t)) send(GamePackets.Say2(t, 14));
                    chat.text = "";
                    chat.ActivateInputField();
                });
            Room.OnClick("WaitListButton", () =>
            {
                M.WaitListOpen = !M.WaitListOpen;
                ShowWaitLists();
                if (M.WaitListOpen) send(PartyMatchPackets.RequestListPartyMatchingWaitingRoom(1, R.MinLevel, R.MaxLevel, 0));
            });
            Room.OnClick("RoomSettingButton", () =>
            {
                if (R.IsMaster) OpenMakeRoom(2, -1, "");
            });
            Room.OnClick("BanButton", () =>
            {
                if (R.IsMaster && members.Selected >= 0 && members.Selected < R.List.Count) send(PartyMatchPackets.RequestOustFromPartyRoom(R.List[members.Selected].Id));
            });
            Room.OnClick("InviteButton", () =>
            {
                if (R.IsMaster && members.Selected >= 0 && members.Selected < R.List.Count) send(SocialPackets.RequestJoinParty(R.List[members.Selected].Name));
            });
            Room.OnClick("ExitButton", () =>
            {
                ExitRoom();
                exiting = true;
                Room.Hide();
            });
            // OnSendPacketWhenHiding: sair pela moldura tambem fecha a busca de vez
            Room.OnClose = () =>
            {
                if (quietHide) return;
                if (exiting)
                {
                    exiting = false;
                    return;
                }
                M.QuitCompletely = true;
                M.WaitListOpen = false;
                ShowWaitLists();
                ExitRoom();
            };
        }

        bool exiting;

        /// <summary>HideWindow pelo script (resposta do servidor): sem o pacote de saida do OnClose.</summary>
        void QuietHide(L2Wnd w)
        {
            quietHide = true;
            try
            {
                w.Hide();
            }
            finally
            {
                quietHide = false;
            }
        }

        InterfaceRouter hooked;

        /// <summary>
        /// Convites sem EV_ que o engine pergunta direto (ExAskJoinPartyRoom FE:34 e ExAskJoinMPCC FE:27): DialogBox com
        /// sm1727 / sm1529 e a resposta AnswerJoinPartyRoom / RequestExAcceptJoinMPCC. O router nasce a cada conexao, entao o
        /// GameUi chama isto no Tick.
        /// </summary>
        public void Hook(InterfaceRouter r)
        {
            if (r == null || r == hooked) return;
            hooked = r;
            r.OnAskJoinPartyRoom = name => AskJoin(1727, name, ok => send(PartyMatchPackets.AnswerJoinPartyRoom(ok)));
            r.OnAskJoinMPCC = name => AskJoin(1529, name, ok => send(PartyMatchPackets.RequestExAcceptJoinMPCC(ok)));
        }

        void AskJoin(int sm, string name, Action<bool> answer)
        {
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            var text = GameData.SystemMessage(sm, new List<string> { name ?? "" }).Text;
            ui.Dialog.Ask(EDialogType.OKCancel, text, "PartyMatchWnd", (ok, _) => answer(ok));
        }

        void ExitRoom() => send(R.Exit() ? PartyMatchPackets.RequestDismissPartyRoom(R.Number) : PartyMatchPackets.RequestWithdrawPartyRoom(R.Number));

        void RenderRoom()
        {
            Room.Text("RoomNumber", R.Number.ToString());
            Room.Text("RoomTitle", R.Title);
            Room.Text("Location", PartyMatchCommon.ZoneName(R.Zone, Sys));
            Room.Text("PartyMemberCount", R.Members + "/" + R.MaxMembers);
            Room.Text("LootingMethod", PartyMatchCommon.LootName(R.Loot, Sys));
            Room.Text("LevelLimit", R.MinLevel + "-" + R.MaxLevel);
            foreach (var b in new[] { "RoomSettingButton", "BanButton", "InviteButton" }) Enable(Room, b, R.IsMaster);
            members.Render(R.List.ConvertAll(m => new[]
            {
                new L2ListCtrl.Cell { Text = m.Name }, new L2ListCtrl.Cell { Tex = PartyNative.ClassIconName(m.ClassId), TexW = 11, TexH = 11 },
                new L2ListCtrl.Cell { Text = PartyMatchCommon.AmbiguousLevel(m.Level, true) }, new L2ListCtrl.Cell { Text = PartyMatchCommon.ZoneName(m.Zone, Sys) },
                new L2ListCtrl.Cell { Text = Sys(PartyRoomScript.TypeName(m.Type)) },
            }));
        }

        static void Enable(L2Wnd w, string name, bool on)
        {
            var b = w.Button(name);
            if (!b) return;
            var cg = b.TryGetComponent<CanvasGroup>(out var g) ? g : b.gameObject.AddComponent<CanvasGroup>();
            cg.alpha = on ? 1 : 0.45f;
            cg.interactable = on;
        }

        // ------------------------------------------------------------ listas de espera
        void BuildWaitLists()
        {
            foreach (var (w, s, ctrl, mode) in new[] { (WaitList, W, wait, 0), (OutWaitList, OutW, outWait, 1) })
            {
                var wnd = w;
                var sc = s;
                var list = ctrl;
                var outList = mode == 1;
                w.OnShow = () => sc.Current = 1;
                L2Events.Register(Ev.EV_PartyMatchWaitListStart, p =>
                {
                    var all = 0;
                    L2Param.ParseInt(p, "AllCount", ref all);
                    wnd.Text("MemberCount", sc.Start(all));
                    Enable(wnd, "prev_btn", sc.PrevEnabled);
                    Enable(wnd, "next_btn", sc.NextEnabled);
                    RenderWait(sc, list);
                });
                L2Events.Register(Ev.EV_PartyMatchWaitList, p =>
                {
                    string name = "";
                    int cls = 0, lv = 0;
                    L2Param.ParseString(p, "Name", ref name);
                    L2Param.ParseInt(p, "ClassID", ref cls);
                    L2Param.ParseInt(p, "Level", ref lv);
                    sc.Players.Add((name, cls, lv));
                    RenderWait(sc, list);
                });
                void Request(int page)
                {
                    int mn = R.MinLevel, mx = R.MaxLevel;
                    if (outList)
                    {
                        int.TryParse(wnd.Edit("MinLevel")?.text, out mn);
                        int.TryParse(wnd.Edit("MaxLevel")?.text, out mx);
                    }
                    send(PartyMatchPackets.RequestListPartyMatchingWaitingRoom(page, mn, mx, outList ? 1 : 0));
                }
                w.OnClick("RefreshButton", () => Request(sc.Current));
                w.OnClick("btn_Search", () => Request(1));
                w.OnClick("next_btn", () => Request(++sc.Current));
                w.OnClick("prev_btn", () => Request(--sc.Current));
                w.OnClick("WhisperButton", () => Whisper(sc, list.Selected));
                w.OnClick("PartyInviteButton", () =>
                {
                    var i = list.Selected;
                    if (i < 0 || i >= sc.Players.Count) return;
                    if (outList) OpenMakeRoom(1, sc.Players[i].level, sc.Players[i].name);
                    else send(PartyMatchPackets.RequestAskJoinPartyRoom(sc.Players[i].name));
                });
                w.OnClick("CloseButton", () =>
                {
                    M.WaitListOpen = false;
                    ShowWaitLists();
                });
            }
            var mn0 = OutWaitList.Edit("MinLevel");
            if (mn0) mn0.text = "1";
            var mx0 = OutWaitList.Edit("MaxLevel");
            if (mx0) mx0.text = "80";
        }

        static void RenderWait(WaitListScript s, L2ListCtrl list) =>
            list.Render(s.Players.ConvertAll(x => new[]
            {
                new L2ListCtrl.Cell { Text = x.name }, new L2ListCtrl.Cell { Tex = PartyNative.ClassIconName(x.cls), TexW = 11, TexH = 11 },
                new L2ListCtrl.Cell { Text = PartyMatchCommon.AmbiguousLevel(x.level, false) },
            }));

        /// <summary>Whisper: SetChatMessage("\"nome ") e o foco no chat.</summary>
        void Whisper(WaitListScript s, int i)
        {
            if (i < 0 || i >= s.Players.Count) return;
            var t = WaitListScript.Whisper(s.Players[i].name);
            if (t == null) return;
            L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ChatWndSetString, L2Param.Add("", "String", t)));
            L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ChatWndSetFocus, ""));
        }

        // ------------------------------------------------------------ UnionWnd / UnionDetailWnd
        void BuildUnion()
        {
            Union.OnShow = () =>
            {
                U.MyName = ui.User?.Name ?? "";
                UnionDetail.Hide();
            };
            L2Events.Register(Ev.EV_CommandChannelStart, _ =>
            {
                U.MyName = ui.User?.Name ?? "";
                U.Start();
                Union.Show();
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelEnd, _ =>
            {
                U.End();
                Union.Hide();
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelInfo, p =>
            {
                U.MyName = ui.User?.Name ?? "";
                U.Info(p);
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelPartyList, p =>
            {
                if (U.PartyList(p) && UnionDetail.Visible)
                {
                    parties.Selected = U.List.Count - 1;
                    RequestPartyMember(false);
                }
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelPartyUpdate, p =>
            {
                var before = U.List.FindIndex(x => x.id == detailMaster);
                U.PartyUpdate(p);
                if (before >= 0 && U.List.FindIndex(x => x.id == detailMaster) < 0 && UnionDetail.Visible)
                {
                    detail.Clear();
                    UnionDetail.Hide();
                }
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelRoutingType, p =>
            {
                L2Param.ParseInt(p, "RoutingType", ref U.Routing);
                RenderUnion();
            });
            L2Events.Register(Ev.EV_CommandChannelPartyMember, p =>
            {
                detail.Clear();
                var n = 0;
                L2Param.ParseInt(p, "MemberCount", ref n);
                for (var i = 0; i < n; i++)
                {
                    string name = "";
                    int cls = 0, id = 0;
                    L2Param.ParseString(p, "Name_" + i, ref name);
                    L2Param.ParseInt(p, "ClassID_" + i, ref cls);
                    L2Param.ParseInt(p, "ServerID_" + i, ref id);
                    detail.Add((name, id, cls));
                }
                UnionDetail.Text("txtMasterName", detailName);
                partyMembers.Render(detail.ConvertAll(d => new[] { new L2ListCtrl.Cell { Text = d.name }, new L2ListCtrl.Cell { Tex = PartyNative.ClassIconName(d.cls), TexW = 11, TexH = 11 } }));
            });
            // RequestCommandChannelInfo [I]: o Net so tem o pedido dos membros; Refresh pede de novo o grupo escolhido
            Union.OnClick("btnRefresh", () => RequestPartyMember(false));
            Union.OnClick("btnBan", () =>
            {
                var i = parties.Selected;
                if (U.BanEnabled && i >= 0 && i < U.List.Count && U.List[i].master.Length > 0) send(PartyMatchPackets.RequestExOustFromMPCC(U.List[i].master));
            });
            // RequestCommandChannelWithdraw [I]: o comando de chat /channelleave
            Union.OnClick("btnOut", () =>
            {
                if (U.OutEnabled) ui.OnChatSubmit?.Invoke("/channelleave", 0);
            });
            Union.OnClick("btnMemberInfo", () =>
            {
                if (UnionDetail.Visible) UnionDetail.Hide();
                else RequestPartyMember(true);
            });
            UnionDetail.OnClick("btnClose", UnionDetail.Hide);
        }

        void RequestPartyMember(bool show)
        {
            U.SearchedMaster = 0;
            var i = parties.Selected;
            if (i < 0 || i >= U.List.Count) return;
            var (master, id, _) = U.List[i];
            if (master.Length == 0 || id <= 0) return;
            if (show && !UnionDetail.Visible) UnionDetail.Show();
            U.SearchedMaster = id;
            detailMaster = id;
            detailName = master;
            send(PartyMatchPackets.RequestExMPCCShowPartyMembersInfo(id));
        }

        void RenderUnion()
        {
            Union.Text("txtOwner", U.Owner);
            Union.Text("txtRoutingType", Sys(U.RoutingName));
            Union.Text("txtCountInfo", U.Owner.Length > 0 ? U.CountText(Sys) : "");
            Enable(Union, "btnBan", U.BanEnabled);
            Enable(Union, "btnOut", U.OutEnabled);
            parties.Render(U.List.ConvertAll(x => new[] { new L2ListCtrl.Cell { Text = x.master }, new L2ListCtrl.Cell { Text = x.members.ToString() } }));
        }

        // ------------------------------------------------------------ DuelManager
        void BuildDuel()
        {
            L2Events.Register(Ev.EV_DuelAskStart, p =>
            {
                string name = "";
                var type = 0;
                L2Param.ParseString(p, "userName", ref name);
                L2Param.ParseInt(p, "type", ref type);
                var reject = L2Options.GetBool("Game", "IsRejectingDuel");
                if (reject)
                {
                    Answer(type, 1, 0);
                    return;
                }
                if (ui.Dialog.S.InUse) ui.Dialog.Hide();
                // Progress de 10 s: o fim do tempo conta como recusa
                ui.Dialog.SetParamInt(10 * 1000);
                ui.Dialog.Ask(EDialogType.Progress, GameData.SystemMessage(DuelScript.AskMessage(type), new List<string> { name, "" }).Text, "DuelManager",
                    (ok, _) => Answer(type, 0, ok ? 1 : 0));
            });
            L2Events.Register(Ev.EV_DuelReady, _ => D.Dueling = true);
            L2Events.Register(Ev.EV_DuelEnd, _ =>
            {
                D.Dueling = false;
                D.Clear();
                Duel.Hide();
                RenderDuel();
            });
            L2Events.Register(Ev.EV_DuelUpdateUserInfo, p =>
            {
                if (D.Update(p) < 0) return;
                Duel.Show();
                RenderDuel();
            });
            var ev = UiEvents.Of(Duel.El);
            var front = ev.OnDown;
            ev.OnDown = e =>
            {
                front?.Invoke(e);
                var r = Duel.ScreenRect();
                var x = e.position.x / UiRoot.PixelScale - r.X;
                var y = (UiRoot.Size.y - e.position.y / UiRoot.PixelScale) - r.Y;
                var id = D.Click(x, y);
                // RequestTargetUser
                if (id > 0) ui.Party.TargetUser(id);
            };
        }

        void Answer(int type, int reject, int answer)
        {
            var b = DuelAnswer?.Invoke(type, reject, answer);
            if (b != null) send(b);
        }

        void RenderDuel()
        {
            Duel.SetWindowSize(Duel.Size[0], DuelScript.StatusHeight * Math.Max(1, D.Count));
            for (var i = 0; i < DuelScript.MaxParty; i++)
            {
                var on = i < D.Count;
                Duel.ShowCtrl("PartyStatusWnd" + i, on);
                if (!on) continue;
                var s = D.Slots[i];
                Duel.Text("PlayerName" + i, s.Name);
                var t = Duel.TextEl("PlayerName" + i);
                if (t) t.alignment = TextAnchor.MiddleCenter;
                var icon = Duel.Get("ClassIcon" + i);
                if (icon) L2WndUtil.Paint(icon, PartyNative.ClassIconName(s.ClassId), 11, 11, PaintMode.Normal);
                if (icon) UiTooltip.Set(icon.gameObject, GameData.ClassName(s.ClassId));
                Duel.Bar("barCP" + i, s.Cp, s.MaxCp);
                Duel.Bar("barHP" + i, s.Hp, s.MaxHp);
                Duel.Bar("barMP" + i, s.Mp, s.MaxMp);
            }
        }
    }
}
