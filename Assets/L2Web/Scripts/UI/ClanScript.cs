// ClanWnd.uc, ClanDrawerWnd.uc e InviteClanPopWnd.uc (spec 07 §3.4, #0038) sem Unity: as 8 unidades (cla, 6 ordens de
// cavalaria, academia), cabecalho, combo, linhas da ClanMemberList, os botoes que cada nivel e autoridade liberam
// (resetBtnShowHide, OnShow e CheckandCompareMyNameandDisableThings do drawer, Proc_AuthValidation), os paineis do
// ClanDrawerWnd (membro, autoridade, informacao, graus, aprendiz) e os pedidos de cada botao.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class ClanScript
    {
        public const int Main = 0, Knight1 = 100, Knight2 = 200, Knight3 = 1001, Knight4 = 1002, Knight5 = 2001, Knight6 = 2002, Academy = -1;
        public const int UnitCount = 8;
        public static readonly int[] Types = { Main, Knight1, Knight2, Knight3, Knight4, Knight5, Knight6, Academy };

        public sealed class Member
        {
            public string Name = "";
            public int Level, ClassId, Gender, Race, Id, Type, HaveMaster;
        }

        public sealed class Unit
        {
            public string Name = "", MasterName = "";
            public readonly List<Member> Members = new();
        }

        public readonly Unit[] Units = new Unit[UnitCount];
        public Func<int, string> SysString = id => GameData.SysString(id, "");
        public Func<int, string> CastleName = id => "";

        // ClanWnd
        public int ClanId, Rank, Level, NameValue, CurrentShowIndex;
        public string ClanName = "", MasterReal = "";
        public string AgitText = "", StatusText = "";
        public int ClanMaster, Join, NickName, Crest, War, Grade, ManageMaster, OustMember;
        public string MyName = "";
        public int MyClanType;
        public bool Noble, Hero;
        public int UserClanId;
        public int IndexNum;
        /// <summary>m_currentactivestatus1..8 (paineis do drawer abertos pelos botoes).</summary>
        public readonly bool[] Active = new bool[9];
        public int CurrentRecordType;
        public string CurrentRecordName = "";
        public bool CurrentAlias;

        // ClanDrawerWnd
        public string State = "";
        public bool DrawerVisible;
        public int DrawerClanType = -1;
        public string CurrentName = "", CurrentMasterName = "";
        public readonly Dictionary<string, string> DrawerText = new();
        public readonly Dictionary<string, bool> Checks = new();

        /// <summary>Habilitado de cada botao do ClanWnd e do ClanDrawerWnd (EnableWindow / DisableWindow).</summary>
        public readonly Dictionary<string, bool> Enabled = new();
        public bool HeroBtnVisible, MemInfoBtnVisible = true;

        public ClanScript()
        {
            for (var i = 0; i < UnitCount; i++) Units[i] = new Unit();
            Clear();
        }

        public static int IndexOf(int type) => Array.IndexOf(Types, type);

        public static int UnitNameId(int type) => type switch
        {
            Main => 1399, Knight1 => 1400, Knight2 => 1401, Knight3 => 1402, Knight4 => 1403, Knight5 => 1404, Knight6 => 1405, Academy => 1452, _ => 0,
        };

        /// <summary>getClanOrderString: como o nome da unidade, mas a academia e ss1419.</summary>
        public static int OrderNameId(int type) => type == Academy ? 1419 : UnitNameId(type);

        /// <summary>GetStringByGradeID: graus 1..9 = ss1406..1414.</summary>
        public string GradeName(int grade) => grade >= 1 && grade <= 9 ? SysString(1405 + grade) : "";

        /// <summary>getCurrentGradebyClanType: grau padrao da unidade (6 cla, 7 guardas reais, 8 cavaleiros, 9 academia).</summary>
        public static int DefaultGrade(int type) => type switch
        {
            Main => 6, Knight1 or Knight2 => 7, Knight3 or Knight4 or Knight5 or Knight6 => 8, Academy => 9, _ => 0,
        };

        void En(bool on, params string[] names)
        {
            foreach (var n in names) Enabled[n] = on;
        }

        public bool IsEnabled(string n) => !Enabled.TryGetValue(n, out var on) || on;

        /// <summary>Clear (ClanWnd.uc:924-966).</summary>
        public void Clear()
        {
            foreach (var u in Units)
            {
                u.Members.Clear();
                u.Name = u.MasterName = "";
            }
            DrawerVisible = false;
            State = "";
            DrawerClanType = -1;
            CurrentName = "";
            ClanName = AgitText = StatusText = "";
            AgitText = SysString(27);
            ClanId = Rank = Level = NameValue = CurrentShowIndex = 0;
            ClanMaster = Join = NickName = Crest = War = Grade = ManageMaster = OustMember = 0;
        }

        // ------------------------------------------------------------ eventos do ClanWnd
        /// <summary>getmyClanInfo: nome, unidade (a ultima onde o nome aparece; 0 sem), nobre, heroi, clanID do UserInfo.</summary>
        public void SetMe(string name, bool noble, bool hero, int clanId)
        {
            MyName = name ?? "";
            Noble = noble;
            Hero = hero;
            UserClanId = clanId;
            MyClanType = 0;
            foreach (var u in Units)
                foreach (var m in u.Members)
                    if (m.Name == MyName) MyClanType = m.Type;
        }

        string Status(int status, int inWar) => status == 3 ? SysString(341) : inWar == 0 ? SysString(894) : SysString(340);

        string Agit(int agit, int castle) => agit > 0 ? CastleName(agit) : castle > 0 ? CastleName(castle) : SysString(27);

        /// <summary>HandleClanInfo: a unidade guarda nome e lider; so a principal escreve o cabecalho.</summary>
        public void ClanInfo(string p)
        {
            int id = 0, type = 0, level = 0, castle = 0, agit = 0, rank = 0, value = 0, status = 0, war = 0;
            string name = "", master = "";
            L2Param.ParseInt(p, "ClanID", ref id);
            L2Param.ParseInt(p, "ClanType", ref type);
            L2Param.ParseString(p, "ClanName", ref name);
            L2Param.ParseString(p, "ClanMasterName", ref master);
            L2Param.ParseInt(p, "SkillLevel", ref level);
            L2Param.ParseInt(p, "CastleID", ref castle);
            L2Param.ParseInt(p, "AgitID", ref agit);
            L2Param.ParseInt(p, "ClanRank", ref rank);
            L2Param.ParseInt(p, "ClanNameValue", ref value);
            L2Param.ParseInt(p, "Status", ref status);
            L2Param.ParseInt(p, "InWar", ref war);
            if (type == Main)
            {
                MasterReal = master;
                ClanName = name;
                Rank = rank;
                NameValue = value;
                Level = level;
                ClanId = id;
                AgitText = Agit(agit, castle);
                StatusText = Status(status, war);
            }
            var i = IndexOf(type);
            if (i < 0) return;
            Units[i].Name = name;
            Units[i].MasterName = master;
        }

        /// <summary>HandleClanInfoUpdate: cabecalho e botoes.</summary>
        public void ClanInfoUpdate(string p)
        {
            int castle = 0, agit = 0, status = 0, war = 0;
            L2Param.ParseInt(p, "ClanID", ref ClanId);
            L2Param.ParseInt(p, "SkillLevel", ref Level);
            L2Param.ParseInt(p, "CastleID", ref castle);
            L2Param.ParseInt(p, "AgitID", ref agit);
            L2Param.ParseInt(p, "ClanRank", ref Rank);
            L2Param.ParseInt(p, "ClanNameValue", ref NameValue);
            L2Param.ParseInt(p, "Status", ref status);
            L2Param.ParseInt(p, "InWar", ref war);
            AgitText = Agit(agit, castle);
            StatusText = Status(status, war);
            ResetButtons();
        }

        static Member ParseMember(string p, string typeKey)
        {
            var m = new Member();
            L2Param.ParseString(p, "Name", ref m.Name);
            L2Param.ParseInt(p, "Level", ref m.Level);
            L2Param.ParseInt(p, "Class", ref m.ClassId);
            L2Param.ParseInt(p, "Gender", ref m.Gender);
            L2Param.ParseInt(p, "Race", ref m.Race);
            L2Param.ParseInt(p, "ID", ref m.Id);
            L2Param.ParseInt(p, typeKey, ref m.Type);
            L2Param.ParseInt(p, "HaveMaster", ref m.HaveMaster);
            return m;
        }

        /// <summary>EV_ClanAddMemberMultiple / EV_ClanAddMember (este sem HaveMaster). True se a unidade mostrada mudou.</summary>
        public bool AddMember(string p, bool multiple)
        {
            var m = ParseMember(p, "ClanType");
            if (!multiple) m.HaveMaster = 0;
            var i = IndexOf(m.Type);
            if (i < 0) return false;
            Units[i].Members.Add(m);
            return i == CurrentShowIndex;
        }

        /// <summary>
        /// HandleMemberInfoUpdate: acha pelo nome; mudou de unidade = sai de uma e entra no fim da outra (e a lista mostra a
        /// nova); senao troca no lugar. Devolve (tipo a mostrar, pedir de novo o membro do drawer).
        /// </summary>
        public (int show, bool requery) MemberUpdate(string p)
        {
            var m = ParseMember(p, "PledgeType");
            for (var i = 0; i < UnitCount; i++)
            {
                var l = Units[i].Members;
                var j = l.FindIndex(x => x.Name == m.Name);
                if (j < 0) continue;
                var masterChanged = l[j].HaveMaster != m.HaveMaster;
                if (masterChanged) l[j] = m;
                if (l[j].Type != m.Type)
                {
                    l.RemoveAt(j);
                    var k = IndexOf(m.Type);
                    if (k >= 0) Units[k].Members.Add(m);
                    DrawerText["Clan1_CurrentSelectedMemberGrade"] = "";
                }
                else l[j] = m;
                CurrentShowIndex = Math.Max(0, IndexOf(m.Type));
                return (m.Type, masterChanged && DrawerVisible && State == "ClanMemberInfoState" && CurrentName == m.Name);
            }
            return (int.MinValue, false);
        }

        /// <summary>HandleDeleteMember: a unidade do membro removido (ou -1).</summary>
        public int DeleteMember(string name)
        {
            for (var i = 0; i < UnitCount; i++)
            {
                var j = Units[i].Members.FindIndex(x => x.Name == name);
                if (j < 0) continue;
                Units[i].Members.RemoveAt(j);
                return i;
            }
            return -1;
        }

        public void SubClan(string p)
        {
            int type = 0;
            string name = "", master = "";
            L2Param.ParseInt(p, "ClanType", ref type);
            L2Param.ParseString(p, "ClanName", ref name);
            L2Param.ParseString(p, "MasterName", ref master);
            var i = IndexOf(type);
            if (i < 0) return;
            Units[i].Name = name;
            Units[i].MasterName = master;
        }

        /// <summary>HandleClanMyAuth.</summary>
        public void MyAuth(string p)
        {
            L2Param.ParseInt(p, "ClanMaster", ref ClanMaster);
            L2Param.ParseInt(p, "Join", ref Join);
            L2Param.ParseInt(p, "NickName", ref NickName);
            L2Param.ParseInt(p, "ClanCrest", ref Crest);
            L2Param.ParseInt(p, "War", ref War);
            L2Param.ParseInt(p, "Grade", ref Grade);
            L2Param.ParseInt(p, "ManageMaster", ref ManageMaster);
            L2Param.ParseInt(p, "OustMember", ref OustMember);
        }

        /// <summary>
        /// OnReceivePledgeMyAuth [I]: o UserInfo vira EV_ClanMyAuth. ClanMaster = lider (relacao 0x40); os outros pelos bits do
        /// aCis (Clan.CP_CL_*): Join 2, NickName 4, Grade 16, War 32, OustMember 64, ClanCrest 128, ManageMaster 256.
        /// </summary>
        public static string MyAuthParam(int privileges, bool leader)
        {
            int B(int bit) => (privileges & bit) != 0 ? 1 : 0;
            var p = L2Param.Add("", "ClanMaster", leader ? 1 : 0);
            p = L2Param.Add(p, "Join", B(2));
            p = L2Param.Add(p, "NickName", B(4));
            p = L2Param.Add(p, "ClanCrest", B(128));
            p = L2Param.Add(p, "War", B(32));
            p = L2Param.Add(p, "Grade", B(16));
            p = L2Param.Add(p, "ManageMaster", B(256));
            return L2Param.Add(p, "OustMember", B(64));
        }

        // ------------------------------------------------------------ combo e lista
        /// <summary>RefreshCombobox: "tipo - nome" (reserved = tipo) das unidades com nome; a escolhida e a do jogador.</summary>
        public (List<(string text, int type)> items, int selected) Combo()
        {
            var o = new List<(string, int)>();
            var sel = -1;
            for (var i = 0; i < UnitCount; i++)
            {
                if (Units[i].Name.Length == 0) continue;
                o.Add((SysString(UnitNameId(Types[i])) + " - " + Units[i].Name, Types[i]));
                if (Types[i] == MyClanType) sel = o.Count - 1;
            }
            return (o, sel);
        }

        public sealed class Row
        {
            public string Name = "", Level = "", ClassIcon = "", Online = "";
            public Color32 NameColor, LevelColor;
            /// <summary>LVDataList[3].szData: "0" lider da ordem, "1" online, "2" offline.</summary>
            public string Status = "";
            public int Type, ClassId;
            public bool Placeholder;
        }

        static readonly Color32 White = new(170, 170, 170, 255), Yellow = new(235, 205, 0, 255), BrightWhite = new(255, 255, 255, 255),
            Gold = new(176, 153, 121, 255);

        /// <summary>
        /// AddToList: nas ordens, a 1a linha e o lider (dourado, pelo nome no cla principal; sem lider = ss1445); depois os
        /// membros (amarelo com mestre, branco forte o proprio jogador). O "OnLineNum = OnLineNum++" do script nunca soma: o
        /// contador sai sempre "(0/n)".
        /// </summary>
        public (List<Row> rows, string count) Rows()
        {
            var rows = new List<Row>();
            var idx = CurrentShowIndex;
            var u = Units[idx];
            var type = Types[idx];
            const int online = 0;
            if (type > Main)
            {
                if (u.MasterName.Length == 0) rows.Add(new Row { Name = SysString(1445), NameColor = Gold, Placeholder = true });
                else
                {
                    var main = Units[0].Members;
                    var k = 0;
                    for (var i = 0; i < main.Count; i++)
                        if (main[i].Name == u.MasterName) k = i;
                    var m = k < main.Count ? main[k] : new Member();
                    rows.Add(new Row
                    {
                        Name = u.MasterName, NameColor = Gold, Level = m.Level.ToString(), LevelColor = White, ClassId = m.ClassId,
                        ClassIcon = PartyNative.ClassIconName(m.ClassId), Status = "0", Type = 0,
                        Online = m.Id > 0 ? "L2UI_CH3.BloodHoodWnd.BloodHood_Logon" : "L2UI_CH3.BloodHoodWnd.BloodHood_Logoff",
                    });
                }
            }
            for (var i = 0; i < u.Members.Count; i++)
            {
                var m = u.Members[i];
                var me = m.Name == MyName;
                if (me) IndexNum = type == Main ? i : i + 1;
                rows.Add(new Row
                {
                    Name = m.Name, NameColor = me ? BrightWhite : m.HaveMaster == 0 ? White : Yellow, Level = m.Level.ToString(),
                    LevelColor = me ? BrightWhite : White, ClassId = m.ClassId, ClassIcon = PartyNative.ClassIconName(m.ClassId), Type = m.Type,
                    Status = m.Id > 0 ? "1" : "2", Online = m.Id > 0 ? "L2UI_CH3.BloodHoodWnd.BloodHood_Logon" : "L2UI_CH3.BloodHoodWnd.BloodHood_Logoff",
                });
            }
            var total = type <= Main ? u.Members.Count : u.Members.Count + 1;
            return (rows, "(" + online + "/" + total + ")");
        }

        /// <summary>ShowList(tipo): a unidade passa a ser a mostrada.</summary>
        public void Show(int type) => CurrentShowIndex = Math.Max(0, IndexOf(type));

        // ------------------------------------------------------------ botoes
        static readonly string[] MainBtns =
        {
            "ClanMemInfoBtn", "ClanMemAuthBtn", "ClanBoardBtn", "ClanInfoBtn", "ClanPenaltyBtn", "ClanQuitBtn", "ClanWarInfoBtn", "ClanWarDeclareBtn",
            "ClanWarCancleBtn", "ClanAskJoinBtn", "ClanAuthEditBtn", "ClanTitleManageBtn",
        };
        const string DName = "Clan1_ChangeMemberNameBtn", DBanish = "Clan1_ChangeBanishBtn", DGrade = "Clan1_ChangeMemberGradeBtn",
            DAssign = "Clan1_AssignApprenticeBtn", DDelete = "Clan1_DeleteApprenticeBtn", DKh = "Clan1_ChangeMemberKHOpen";
        static readonly string[] DrawerBtns = { DName, DBanish, DGrade, DAssign, DDelete };

        /// <summary>resetBtnShowHide: linhas = nivel 0..5 e "mais de 5"; colunas = MainBtns e DrawerBtns.</summary>
        static readonly string[] LevelTable =
        {
            "110111000100" + "00000",
            "110111000100" + "00100",
            "111111000100" + "00100",
            "111111111100" + "10100",
            "111111111100" + "10100",
            "111111111100" + "10111",
            "111111111100" + "10111",
        };

        /// <summary>NoblessMenuValidate: sem cla, nobre ou heroi ve o HeroBtn no lugar do ClanMemInfoBtn.</summary>
        public void NoblessMenuValidate()
        {
            HeroBtnVisible = UserClanId == 0 && (Hero || Noble);
            MemInfoBtnVisible = !HeroBtnVisible;
        }

        public void ResetButtons()
        {
            NoblessMenuValidate();
            if (ClanId == 0)
                En(false, "ClanMemInfoBtn", "ClanMemAuthBtn", "ClanBoardBtn", "ClanInfoBtn", "ClanQuitBtn", "ClanWarInfoBtn", "ClanWarDeclareBtn", "ClanWarCancleBtn",
                    "ClanAskJoinBtn", "ClanAuthEditBtn", "ClanTitleManageBtn");
            else
            {
                var t = LevelTable[Math.Min(6, Math.Max(0, Level))];
                for (var i = 0; i < MainBtns.Length; i++) Enabled[MainBtns[i]] = t[i] == '1';
                for (var i = 0; i < DrawerBtns.Length; i++) Enabled[DrawerBtns[i]] = t[MainBtns.Length + i] == '1';
                if (ClanMaster > 0)
                {
                    En(false, "ClanQuitBtn");
                    if (Level > 2) En(true, "ClanTitleManageBtn");
                    En(true, "ClanAuthEditBtn");
                }
                else
                {
                    En(false, DrawerBtns);
                    if (Join == 0) En(false, "ClanAskJoinBtn");
                    if (Crest == 0) En(false, "ClanTitleManageBtn");
                    else if (Level > 2) En(true, "ClanTitleManageBtn");
                    if (War == 0) En(false, "ClanWarDeclareBtn", "ClanWarCancleBtn");
                }
                CheckMember();
            }
            NoblessMenuValidate();
        }

        /// <summary>ClanDrawerWnd.OnShow: liga os botoes do membro e tira os que a autoridade nao da (o lider fica com todos).</summary>
        public void DrawerOnShow()
        {
            En(true, DName, DGrade, DAssign, DDelete);
            En(false, DBanish);
            if (ClanMaster != 0) return;
            if (NickName == 0) En(false, DName);
            if (Grade == 0) En(false, DGrade);
            if (ManageMaster == 0) En(false, DAssign, DDelete);
            if (OustMember == 0) En(false, DBanish);
        }

        void Apprentice()
        {
            var has = CurrentMasterName.Length > 0;
            En(!has, DAssign);
            En(has, DDelete);
        }

        void ProcAuthValidation()
        {
            En(NickName != 0 || Hero || Noble, DName);
            En(Grade != 0, DGrade);
            if (ManageMaster == 0) En(false, DAssign, DDelete);
            else Apprentice();
            En(OustMember != 0, DBanish);
        }

        /// <summary>CheckandCompareMyNameandDisableThings (ClanDrawerWnd.uc:859-978).</summary>
        public void CheckMember()
        {
            var shown = Types[CurrentShowIndex];
            if (ClanMaster > 0)
            {
                En(true, DBanish, DKh);
                Apprentice();
                if (CurrentMasterName.Length > 0 && CurrentAlias) En(false, DDelete);
            }
            else
            {
                En(false, DGrade, DBanish, DKh);
                ProcAuthValidation();
                if (shown < MyClanType)
                {
                    En(false, DBanish, DGrade, DAssign, DDelete);
                    if (DrawerClanType != Academy) En(false, DName);
                }
                if (MyClanType > 1 && shown != 0)
                {
                    var d = MyClanType - shown;
                    if (d == 1 || d == 1000 || d == 100 || d == 999 || d == 1001) ProcAuthValidation();
                }
                if (CurrentAlias) En(false, DBanish, DName, DGrade, DAssign, DDelete, DKh);
                if (MasterReal == CurrentName) En(false, DGrade, DBanish, DAssign, DDelete, DName, DKh);
            }
            if (CurrentName == MyName) En(false, DGrade, DBanish, DKh);
            if (DrawerClanType == Academy) En(false, DGrade, DAssign, DDelete);
        }

        // ------------------------------------------------------------ cliques do ClanWnd
        public sealed class Act
        {
            /// <summary>memberInfo, memberAuth, leave, warList, gradeList, bbs, penalty, declareWar, withdrawWar, invite, hide.</summary>
            public string Kind = "";
            public int Type;
            public string Name = "";
            /// <summary>Estado do drawer a mostrar (ou "" = so o pedido).</summary>
            public string State = "";
        }

        void ResetOpening()
        {
            for (var i = 1; i < Active.Length; i++) Active[i] = false;
        }

        /// <summary>
        /// OnClickButton do ClanWnd: os botoes de painel alternam (o 2o clique fecha o drawer); membro e autoridade precisam da
        /// linha escolhida (tipo = nReserved1, nome = coluna 0; coluna 3 "0" = lider da ordem, G_CurrentAlias).
        /// </summary>
        public Act Click(string btn, Row sel)
        {
            int slot = btn switch
            {
                "ClanMemInfoBtn" => 1, "ClanMemAuthBtn" => 2, "ClanInfoBtn" => 3, "ClanWarInfoBtn" => 5, "ClanAuthEditBtn" => 6,
                "ClanTitleManageBtn" => 7, "HeroBtn" => 8, _ => 0,
            };
            if (slot > 0)
            {
                if (Active[slot])
                {
                    Active[slot] = false;
                    return new Act { Kind = "hide" };
                }
                if (slot != 8) ResetOpening();
                Active[slot] = true;
                switch (slot)
                {
                    case 1:
                        if (sel == null) return null;
                        CurrentRecordType = sel.Type;
                        CurrentRecordName = sel.Name;
                        CurrentAlias = sel.Status == "0";
                        return new Act { Kind = "memberInfo", Type = sel.Type, Name = sel.Name, State = "ClanMemberInfoState" };
                    case 2:
                        return sel == null ? null : new Act { Kind = "memberAuth", Type = sel.Type, Name = sel.Name, State = "ClanMemberAuthState" };
                    case 3: return new Act { State = "ClanInfoState" };
                    case 5: return new Act { Kind = "warList", State = "ClanWarManagementWndState" };
                    case 6: return new Act { Kind = "gradeList", State = "ClanAuthManageWndState" };
                    case 7: return new Act { State = "ClanEmblemManageWndState" };
                    default: return new Act { State = "ClanHeroWndState" };
                }
            }
            return btn switch
            {
                "ClanBoardBtn" => new Act { Kind = "bbs" },
                "ClanPenaltyBtn" => new Act { Kind = "penalty" },
                "ClanQuitBtn" => new Act { Kind = "leave", Name = ClanName, Type = MyClanType },
                "ClanWarDeclareBtn" => new Act { Kind = "declareWar" },
                "ClanWarCancleBtn" => new Act { Kind = "withdrawWar" },
                "ClanAskJoinBtn" => new Act { Kind = "invite" },
                _ => null,
            };
        }

        /// <summary>OnClickListCtrlRecord: com o painel de membro ou de autoridade aberto, a linha nova pede de novo.</summary>
        public Act ClickRow(Row sel)
        {
            if (sel == null) return null;
            if (Active[1])
            {
                CurrentRecordType = sel.Type;
                CurrentRecordName = sel.Name;
                CurrentAlias = sel.Status == "0";
                return new Act { Kind = "memberInfo", Type = sel.Type, Name = sel.Name, State = "ClanMemberInfoState" };
            }
            if (Active[2]) return new Act { Kind = "memberAuth", Type = sel.Type, Name = sel.Name, State = "ClanMemberAuthState" };
            return null;
        }

        /// <summary>OnDBClickListCtrlRecord: abre (ou reabre) o painel do membro.</summary>
        public Act DoubleClickRow(Row sel)
        {
            var wasOpen = Active[1];
            ResetOpening();
            Active[1] = true;
            if (sel == null) return null;
            CurrentRecordType = sel.Type;
            CurrentRecordName = sel.Name;
            if (!wasOpen) CurrentAlias = sel.Status == "0";
            return new Act { Kind = "memberInfo", Type = sel.Type, Name = sel.Name, State = "ClanMemberInfoState" };
        }

        // ------------------------------------------------------------ ClanDrawerWnd
        /// <summary>SetStateAndShow: mostra o drawer no painel do estado.</summary>
        public void SetState(string state)
        {
            State = state;
            DrawerVisible = true;
        }

        /// <summary>HandleClanMemberInfo: textos do painel, botoes de aprendiz e o resto da validacao.</summary>
        public void MemberInfo(string p)
        {
            string nick = "", order = "", master = "";
            var grade = 0;
            L2Param.ParseInt(p, "ClanType", ref DrawerClanType);
            L2Param.ParseString(p, "Name", ref CurrentName);
            L2Param.ParseString(p, "NickName", ref nick);
            L2Param.ParseInt(p, "GradeID", ref grade);
            L2Param.ParseString(p, "OrderName", ref order);
            L2Param.ParseString(p, "MasterName", ref master);
            CurrentMasterName = master;
            DrawerText["Clan1_CurrentSelectedMemberName"] = CurrentName;
            DrawerText["Clan1_CurrentSelectedMemberSName"] = nick;
            DrawerText["Clan1_CurrentSelectedMemberGrade"] = MasterReal == CurrentName && CurrentShowIndex == 0 ? SysString(342) : GradeName(grade);
            DrawerText["Clan1_CurrentSelectedMemberOrderName"] = SysString(OrderNameId(DrawerClanType)) + " - " + order;
            DrawerText["Clan1_CurrentSelectedApprentice"] = master.Length == 0 ? SysString(27) : master;
            if (DrawerClanType == Academy)
            {
                En(false, DAssign, DDelete);
                DrawerText["Clan1_CurrentSelectedApprenticeTitle"] = SysString(1332);
            }
            else
            {
                Apprentice();
                DrawerText["Clan1_CurrentSelectedApprenticeTitle"] = SysString(1431);
            }
            ResetButtons();
            CheckMember();
        }

        /// <summary>
        /// HandleClanAuthMember: PowerValue1..9 nas Check101..109, 10..14 nas 201..205, 15..22 nas 301..308; a 100/200/300 marca
        /// o grupo todo cheio; do proprio jogador, Join (101), ClanCrest (107) e War (105) atualizam os botoes; o lider marca tudo.
        /// </summary>
        public void AuthMember(string p)
        {
            var grade = 0;
            var name = "";
            L2Param.ParseInt(p, "Grade", ref grade);
            L2Param.ParseString(p, "Name", ref name);
            var pw = new int[32];
            for (var i = 0; i < 32; i++) L2Param.ParseInt(p, "PowerValue" + i, ref pw[i]);
            DrawerText["Clan2_CurrentSelectedMemberName"] = name + " - " + GradeName(grade);
            var k = 1;
            foreach (var (g, n) in new[] { (1, 9), (2, 5), (3, 8) })
            {
                var all = true;
                for (var i = 1; i <= n; i++)
                {
                    Checks["Clan2_Check" + g + "0" + i] = pw[k++] != 0;
                    all &= Checks["Clan2_Check" + g + "0" + i];
                }
                Checks["Clan2_Check" + g + "00"] = all;
            }
            if (MyName == name)
            {
                Join = Checks["Clan2_Check101"] ? 1 : 0;
                Crest = Checks["Clan2_Check107"] ? 1 : 0;
                War = Checks["Clan2_Check105"] ? 1 : 0;
                ResetButtons();
            }
            if (MasterReal == name)
            {
                DrawerText["Clan2_CurrentSelectedMemberName"] = name + " - " + SysString(342);
                foreach (var key in new List<string>(Checks.Keys)) Checks[key] = true;
            }
        }

        /// <summary>HandleClanAuthGradeList: graus 0..4 na 1a lista e 5..8 na 2a (nome do grau, membros, reserved = grau).</summary>
        public (List<(string name, int members, int grade)> a, List<(string name, int members, int grade)> b) GradeList(string p)
        {
            var a = new List<(string, int, int)>();
            var b = new List<(string, int, int)>();
            for (var i = 0; i < 9; i++)
            {
                int id = 0, members = 0;
                L2Param.ParseInt(p, "GradeID" + i, ref id);
                L2Param.ParseInt(p, "GradeMemberCount" + i, ref members);
                (i < 5 ? a : b).Add((GradeName(id), members, id));
            }
            return (a, b);
        }

        /// <summary>InitializeGradeComboBox: graus 1..5 e ss1451 (volta ao grau da unidade).</summary>
        public List<string> GradeCombo()
        {
            var o = new List<string>();
            for (var i = 1; i < 6; i++) o.Add(GradeName(i));
            o.Add(SysString(1451));
            return o;
        }

        /// <summary>Clan1_ChangeMemberGradeAssignBtn: indice &lt; 5 = grau indice + 1; senao o grau padrao da unidade.</summary>
        public int GradeOf(int comboIndex) => comboIndex < 5 ? comboIndex + 1 : DefaultGrade(DrawerClanType);

        /// <summary>InitializeAcademyList: os membros da academia sem mestre (nome, nivel, classe).</summary>
        public List<Member> AcademyFree() => Units[IndexOf(Academy)].Members.FindAll(m => m.HaveMaster == 0);

        /// <summary>
        /// InitializeClanInfoWnd: nome, reputacao "n ss1442" (dourado 0, vermelho &lt; 0, azul &gt; 0), ranking (ss1374 sem ou acima de
        /// 100, "ss1375 n"), e a dica de cada unidade com nome (lider ss342 / ss1438 / ss1433).
        /// </summary>
        public (string point, Color32 color, string rank, string[] tips) ClanInfoPanel()
        {
            var color = NameValue == 0 ? new Color32(175, 152, 120, 255) : NameValue < 0 ? new Color32(200, 50, 80, 255) : new Color32(126, 158, 245, 255);
            var rank = Rank == 0 || Rank > 100 ? SysString(1374) : SysString(1375) + " " + Rank;
            var tips = new string[UnitCount];
            for (var i = 0; i < UnitCount; i++)
            {
                var u = Units[i];
                if (u.Name.Length == 0) continue;
                var t = Types[i];
                tips[i] = t == Main ? u.Name + "\n" + SysString(342) + " : " + u.MasterName
                    : t == Academy ? u.Name
                    : t == Knight1 || t == Knight2 ? u.Name + "\n" + SysString(1438) + " : " + u.MasterName
                    : u.Name + "\n" + SysString(1433) + " : " + u.MasterName;
            }
            return (NameValue + " " + SysString(1442), color, rank, tips);
        }

        /// <summary>
        /// InviteClanPopWnd.InitializeComboBox: as unidades com nome; a academia sempre, as outras so se o tipo do jogador tem
        /// no maximo tantos digitos quanto o da unidade (a comparacao de Len do script). A 1a fica escolhida.
        /// </summary>
        public List<(string name, int type)> InviteCombo()
        {
            var o = new List<(string, int)>();
            var mine = MyClanType.ToString().Length;
            for (var i = 0; i < UnitCount; i++)
            {
                if (Units[i].Name.Length == 0) continue;
                if (Types[i] == Academy || mine <= Types[i].ToString().Length) o.Add((Units[i].Name, Types[i]));
            }
            return o;
        }
    }
}
