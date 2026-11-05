// PartyMatchWnd/MakeRoomWnd/RoomWnd/WaitListWnd/OutWaitListWnd.uc, UnionWnd/UnionDetailWnd.uc e DuelManager.uc (spec 07 §10,
// 06 §13, #0045) sem Unity: as salas e os filtros, criar/editar a sala, os membros da sala e a autoridade, as listas de
// espera, o canal de comando (grupos, contagem, dono) e o duelo (ate 9 barras de oponentes, clique = alvo).
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public static class PartyMatchCommon
    {
        public const int MaxLevel = 80;

        /// <summary>GetAmbiguousLevelString: "1 ~ 9", dezenas ate 69, "70 ~ 80" (sem espacos com a_HasSpace false).</summary>
        public static string AmbiguousLevel(int level, bool space)
        {
            var sep = space ? " ~ " : "~";
            if (level < 10) return "1" + sep + "9";
            if (level < 70) return level / 10 * 10 + sep + (level / 10 * 10 + 9);
            return "70" + sep + MaxLevel;
        }

        /// <summary>GetZoneNameWithZoneID [I]: a regiao pelo combo de local do PartyMatchWnd (reserved -2..15, 100 -> ss).</summary>
        public static readonly Dictionary<int, int> ZoneSys = new()
        {
            [-2] = 1047, [-1] = 1046, [1] = 1048, [2] = 1049, [3] = 1050, [4] = 1051, [5] = 1052, [6] = 1053, [7] = 1054, [9] = 1056, [10] = 1057,
            [11] = 1058, [12] = 1059, [13] = 1060, [14] = 1247, [15] = 1248, [100] = 1443,
        };

        public static string ZoneName(int zone, Func<int, string> sys) => ZoneSys.TryGetValue(zone, out var s) ? sys(s) : "";

        /// <summary>GetLootingMethodName [I]: 0 ss487, 1 ss488, 2 ss798, 3 ss799, 4 ss800.</summary>
        public static string LootName(int id, Func<int, string> sys) => id switch { 0 => sys(487), 1 => sys(488), 2 => sys(798), 3 => sys(799), 4 => sys(800), _ => "" };
    }

    public sealed class PartyMatchScript
    {
        public int Page;
        public bool QuitCompletely, WaitListOpen;
        public sealed class Room
        {
            public int Number, Zone, MinLevel, MaxLevel, Members, MaxMembers;
            public string Leader = "", Title = "";
        }

        public readonly List<Room> Rooms = new();

        /// <summary>HandlePartyMatchList: a pagina e as salas.</summary>
        public void List(string p)
        {
            Rooms.Clear();
            var n = 0;
            L2Param.ParseInt(p, "PageNum", ref Page);
            L2Param.ParseInt(p, "RoomCount", ref n);
            for (var i = 0; i < n; i++)
            {
                var r = new Room();
                L2Param.ParseInt(p, "RoomNum_" + i, ref r.Number);
                L2Param.ParseString(p, "Leader_" + i, ref r.Leader);
                L2Param.ParseInt(p, "ZoneID_" + i, ref r.Zone);
                L2Param.ParseInt(p, "MinLevel_" + i, ref r.MinLevel);
                L2Param.ParseInt(p, "MaxLevel_" + i, ref r.MaxLevel);
                L2Param.ParseInt(p, "CurMember_" + i, ref r.Members);
                L2Param.ParseInt(p, "MaxMember_" + i, ref r.MaxMembers);
                L2Param.ParseString(p, "RoomName_" + i, ref r.Title);
                Rooms.Add(r);
            }
        }

        /// <summary>Prev: pagina - 1, no minimo 1; Next: pagina + 1.</summary>
        public int PrevPage => Page <= 1 ? 1 : Page - 1;
        public int NextPage => Page + 1;

        /// <summary>
        /// EV_PartyMatchStart: depois de sair da sala pelo X (CompletelyQuitPartyMatching), sai da espera e fecha; senao abre.
        /// Devolve true se a janela abre.
        /// </summary>
        public bool Start(out bool exit)
        {
            exit = QuitCompletely;
            if (QuitCompletely)
            {
                QuitCompletely = false;
                WaitListOpen = false;
                return false;
            }
            return true;
        }

        /// <summary>OnMakeRoomBtnClick / MakeRoomFirst: titulo sm1398, 12 vagas, nivel do jogador (ou entre ele e o alvo) +/- 5.</summary>
        public static (int min, int max) RoomLevels(int myLevel, int target = -1)
        {
            int lo = myLevel, hi = myLevel;
            if (target >= 0)
            {
                lo = Math.Min(target, myLevel);
                hi = Math.Max(target, myLevel);
            }
            return (lo - 5 > 0 ? lo - 5 : 1, hi + 5 <= PartyMatchCommon.MaxLevel ? hi + 5 : PartyMatchCommon.MaxLevel);
        }
    }

    public sealed class MakeRoomScript
    {
        /// <summary>0 criar, 1 convidar depois de criar, 2 editar a sala.</summary>
        public int InviteState, RoomNumber;
        public string InvitedName = "";

        /// <summary>OnShow: ss1457 (criar), ss1458 (convite) ou ss1460 (editar).</summary>
        public int TitleId => InviteState == 1 ? 1458 : InviteState == 2 ? 1460 : 1457;

        /// <summary>
        /// OnOKButtonClick: vagas = combo + 2; niveis presos em 1..80; RequestManagePartyRoom; com convite, RequestAskJoinPartyRoom
        /// depois.
        /// </summary>
        public (int room, int max, int min, int maxLevel, string title, string invite) Ok(int comboIndex, string minText, string maxText, string title)
        {
            int.TryParse(minText, out var mn);
            int.TryParse(maxText, out var mx);
            var invite = InviteState == 1 ? InvitedName : null;
            InviteState = 0;
            return (RoomNumber, comboIndex + 2, Math.Clamp(mn, 1, PartyMatchCommon.MaxLevel), Math.Clamp(mx, 1, PartyMatchCommon.MaxLevel), title ?? "", invite);
        }
    }

    public sealed class PartyRoomScript
    {
        public int Number, Members, MaxMembers, MinLevel, MaxLevel, Loot, Zone;
        /// <summary>0 candidato, 1 lider da sala, 2 membro.</summary>
        public int MyType;
        public string Title = "";
        public bool Started, RequestedExit;
        public sealed class Member
        {
            public int Id, ClassId, Level, Zone, Type;
            public string Name = "";
        }

        public readonly List<Member> List = new();

        public void Start(string p)
        {
            L2Param.ParseInt(p, "RoomNum", ref Number);
            L2Param.ParseInt(p, "MaxMember", ref MaxMembers);
            L2Param.ParseInt(p, "MinLevel", ref MinLevel);
            L2Param.ParseInt(p, "MaxLevel", ref MaxLevel);
            L2Param.ParseInt(p, "LootingMethodID", ref Loot);
            L2Param.ParseInt(p, "ZoneID", ref Zone);
            L2Param.ParseString(p, "RoomName", ref Title);
            Started = true;
        }

        /// <summary>UpdateMyMembershipType: so o lider da sala edita, expulsa e convida; todos saem.</summary>
        public bool IsMaster => MyType == 1;

        static Member Parse(string p, string sfx)
        {
            var m = new Member();
            L2Param.ParseInt(p, "MemberID" + sfx, ref m.Id);
            L2Param.ParseString(p, "MemberName" + sfx, ref m.Name);
            L2Param.ParseInt(p, "ClassID" + sfx, ref m.ClassId);
            L2Param.ParseInt(p, "Level" + sfx, ref m.Level);
            L2Param.ParseInt(p, "ZoneID" + sfx, ref m.Zone);
            L2Param.ParseInt(p, "MembershipType" + sfx, ref m.Type);
            return m;
        }

        /// <summary>HandlePartyMatchRoomMember: o tipo do jogador e a lista inteira.</summary>
        public void SetMembers(string p)
        {
            L2Param.ParseInt(p, "MyMembershipType", ref MyType);
            List.Clear();
            L2Param.ParseInt(p, "MemberCount", ref Members);
            for (var i = 0; i < Members; i++) List.Add(Parse(p, "_" + i));
        }

        /// <summary>HandlePartyMatchRoomMemberUpdate: 0 entra, 1 muda (sai e entra no fim), 2 sai; o proprio jogador pega o tipo novo.</summary>
        public void Update(string p, int myId)
        {
            var type = 0;
            L2Param.ParseInt(p, "UpdateType", ref type);
            var m = Parse(p, "");
            switch (type)
            {
                case 0:
                    List.Add(m);
                    Members++;
                    break;
                case 1:
                    if (List.RemoveAll(x => x.Id == m.Id) > 0) Members--;
                    List.Add(m);
                    Members++;
                    break;
                case 2:
                    if (List.RemoveAll(x => x.Id == m.Id) > 0) Members--;
                    break;
            }
            if (m.Id == myId) MyType = m.Type;
        }

        /// <summary>ExitPartyRoom: candidato e membro = RequestWithdrawPartyRoom; lider = RequestDismissPartyRoom.</summary>
        public bool Exit()
        {
            RequestedExit = true;
            return MyType == 1;
        }

        /// <summary>Tipo do membro: 0 ss1061, 1 ss1062, 2 ss1063.</summary>
        public static int TypeName(int t) => t == 1 ? 1062 : t == 2 ? 1063 : 1061;
    }

    public sealed class WaitListScript
    {
        public int Current = 1, Pages = 1;
        public readonly List<(string name, int cls, int level)> Players = new();

        /// <summary>HandlePartyMatchWaitListStart: paginas de 64 ("atual/total"), limpa; os botoes de pagina pelos limites.</summary>
        public string Start(int allCount)
        {
            Pages = allCount / 64 + 1;
            Players.Clear();
            return Current + "/" + Pages;
        }

        public bool PrevEnabled => Current != 1;
        public bool NextEnabled => Current != Pages;

        /// <summary>Whisper e o duplo clique: SetChatMessage("\"nome ").</summary>
        public static string Whisper(string name) => string.IsNullOrEmpty(name) ? null : "\"" + name + " ";
    }

    public sealed class UnionScript
    {
        public bool Opened;
        public int Parties, Members, SearchedMaster;
        public string Owner = "";
        public int Routing;
        public string MyName = "";
        public bool BanEnabled, OutEnabled;
        public readonly List<(string master, int id, int members)> List = new();

        /// <summary>HandleCommandChannelStart: abre, pede a informacao e desliga Ban/Out.</summary>
        public void Start()
        {
            Opened = true;
            BanEnabled = OutEnabled = false;
        }

        public void End()
        {
            Opened = false;
            List.Clear();
            Owner = "";
            Routing = 0;
        }

        /// <summary>HandleCommandChannelInfo: limpa a lista, dono, saque, contagem; o dono pode expulsar.</summary>
        public void Info(string p)
        {
            List.Clear();
            L2Param.ParseString(p, "OwnerName", ref Owner);
            L2Param.ParseInt(p, "RoutingType", ref Routing);
            L2Param.ParseInt(p, "PartyNum", ref Parties);
            L2Param.ParseInt(p, "PartyMemberNum", ref Members);
            if (Owner == MyName) BanEnabled = true;
        }

        /// <summary>HandleCommandChannelPartyList: mais um grupo; o lider de um grupo pode sair. True se o detalhe deve ser repedido.</summary>
        public bool PartyList(string p)
        {
            string master = "";
            int id = 0, n = 0;
            L2Param.ParseString(p, "MasterName", ref master);
            L2Param.ParseInt(p, "MasterID", ref id);
            L2Param.ParseInt(p, "PartyNum", ref n);
            List.Add((master, id, n));
            if (master == MyName) OutEnabled = true;
            return SearchedMaster > 0 && SearchedMaster == id;
        }

        /// <summary>HandleCommandChannelPartyUpdate: 0 sai (tira os membros dele), 1 entra.</summary>
        public void PartyUpdate(string p)
        {
            string master = "";
            int id = 0, n = 0, type = 0;
            L2Param.ParseString(p, "MasterName", ref master);
            L2Param.ParseInt(p, "MasterID", ref id);
            L2Param.ParseInt(p, "MemberCount", ref n);
            L2Param.ParseInt(p, "Type", ref type);
            if (id < 1) return;
            if (type == 0)
            {
                var k = List.FindIndex(x => x.id == id);
                if (k < 0) return;
                Parties--;
                Members -= List[k].members;
                List.RemoveAt(k);
            }
            else if (type == 1)
            {
                List.Add((master, id, n));
                Parties++;
                Members += n;
            }
            if (master == MyName) OutEnabled = true;
        }

        /// <summary>UpdateRoutingType: 0 ss1383, 1 ss1384.</summary>
        public int RoutingName => Routing == 1 ? 1384 : 1383;

        /// <summary>UpdateCountInfo: "grupos ss440 / membros ss1013".</summary>
        public string CountText(Func<int, string> sys) => Parties + sys(440) + " / " + Members + sys(1013);
    }

    public sealed class DuelScript
    {
        public const int MaxParty = 9, StatusHeight = 46;
        public bool Dueling;
        public readonly int[] Ids = new int[MaxParty];
        public sealed class Slot
        {
            public string Name = "";
            public int ClassId, Level, Hp, MaxHp, Mp, MaxMp, Cp, MaxCp;
        }

        public readonly Slot[] Slots = new Slot[MaxParty];
        public int Count;

        public DuelScript() => Clear();

        public void Clear()
        {
            for (var i = 0; i < MaxParty; i++)
            {
                Ids[i] = 0;
                Slots[i] = new Slot();
            }
            Count = 0;
        }

        /// <summary>
        /// HandleUpdateUserInfo: so durante o duelo; acha o ID ou o 1o espaco livre (novo: aparece e a janela cresce); atualiza
        /// nome, classe e barras. Devolve o indice (-1 fora do duelo ou sem espaco).
        /// </summary>
        public int Update(string p)
        {
            if (!Dueling) return -1;
            var id = 0;
            L2Param.ParseInt(p, "ID", ref id);
            var i = 0;
            var found = false;
            for (; i < MaxParty; i++)
            {
                if (Ids[i] == 0) break;
                if (Ids[i] == id)
                {
                    found = true;
                    break;
                }
            }
            if (i >= MaxParty) return -1;
            if (!found)
            {
                Ids[i] = id;
                Count = i + 1;
            }
            var s = Slots[i];
            L2Param.ParseString(p, "userName", ref s.Name);
            L2Param.ParseInt(p, "class", ref s.ClassId);
            L2Param.ParseInt(p, "level", ref s.Level);
            L2Param.ParseInt(p, "currentHP", ref s.Hp);
            L2Param.ParseInt(p, "maxHP", ref s.MaxHp);
            L2Param.ParseInt(p, "currentMP", ref s.Mp);
            L2Param.ParseInt(p, "maxMP", ref s.MaxMp);
            L2Param.ParseInt(p, "currentCP", ref s.Cp);
            L2Param.ParseInt(p, "maxCP", ref s.MaxCp);
            return i;
        }

        /// <summary>OnLButtonDown: x &gt; 13; linha = (y - topo) / 46; RequestTargetUser do ID da linha (0 = nada).</summary>
        public int Click(float x, float y) => x > 13 && y >= 0 && (int)(y / StatusHeight) < MaxParty ? Ids[(int)(y / StatusHeight)] : 0;

        /// <summary>HandleDuelAskStart: com IsRejectingDuel recusa direto; senao Progress de 10 s com sm1938 (1x1) ou sm1939 (grupo).</summary>
        public static int AskMessage(int type) => type == 1 ? 1939 : 1938;
    }
}
