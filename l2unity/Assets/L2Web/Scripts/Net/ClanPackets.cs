// Quests e cla (#0046, T13/T14): QuestList 0x80 e os pacotes do ClanWnd/ClanDrawerWnd (PledgeShowMemberList* 0x53-0x56/0x82,
// PledgeShowInfoUpdate 0x88, ManagePledgePower 0x30, AskJoinPledge 0x32, os Ex 0x39-0x3f), e os envios de cada janela.
// Campos pelo aCis (serverpackets/ e clientpackets/ do servidor do usuario); tipos conferidos contra o engine.dll em
// ReceivedLayoutTests e RequestFormatTests. O 0x53 tambem e lido pelo App (SocialPackets.ParsePledgeMembers, janela antiga).
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class QuestInfo
    {
        public int QuestId;
        /// <summary>cond do QuestState (ou __compltdStateFlags, com o bit 31) = Level do EV_QuestList.</summary>
        public int Cond;
    }

    public sealed class PledgeMember
    {
        public string Name;
        public int Level, ClassId, Sex, Race;
        /// <summary>objectId se online, 0 se offline (ID do evento).</summary>
        public int ObjectId;
        public int PledgeType;
        /// <summary>Tem mentor ou aprendiz (HaveMaster).</summary>
        public bool HaveMaster;
    }

    /// <summary>Cabecalho do cla (PledgeShowMemberListAll e PledgeShowInfoUpdate), com as chaves do EV_ClanInfo.</summary>
    public sealed class PledgeInfoHeader
    {
        public int ClanId, CrestId, Level, CastleId, AgitId, Rank, Reputation;
        /// <summary>Os dois d 0 do aCis depois da reputacao (Status e Guilty do evento, a validar).</summary>
        public int Status, Guilty;
        public int AllyId;
        public string AllyName;
        public int AllyCrestId;
        public bool AtWar;
    }

    public sealed class PledgeShowMemberListAllInfo
    {
        /// <summary>0 cla principal, 1 subunidade (o 1o d).</summary>
        public int SubPledge;
        public int PledgeType;
        public string ClanName, LeaderName;
        public PledgeInfoHeader Info = new PledgeInfoHeader();
        public List<PledgeMember> Members = new List<PledgeMember>();
    }

    public sealed class PledgePowerInfo
    {
        /// <summary>ManagePledgePower 0x30: grau, acao e privilegios; PledgeReceivePowerInfo FE:3c: grau, nome e privilegios.</summary>
        public int Grade, Action, Privileges;
        public string Name;
    }

    public sealed class PledgeMemberDetail
    {
        public int PledgeType;
        public string Name, Title;
        public int Grade;
        public string OrderName, MasterName;
    }

    public sealed class PledgeWar
    {
        public string ClanName;
        public int Type, Period;
    }

    public sealed class PledgeWarListInfo
    {
        public int Tab, Page;
        public List<PledgeWar> Wars = new List<PledgeWar>();
    }

    public sealed class SubPledgeInfo
    {
        public int ClanId, PledgeType;
        public string Name, LeaderName;
    }

    public sealed class AskJoinPledgeInfo
    {
        public int RequestorId;
        public string ClanName;
    }

    public static class ClanPackets
    {
        // ---------------------------------------------------------------- quests (T13)

        /// <summary>QuestList 0x80: H n, n x (D id, D cond). O engine ainda le 128 bytes de itens de quest que o aCis nao manda.</summary>
        public static List<QuestInfo> ParseQuestList(PacketReader r)
        {
            var n = r.H();
            var o = new List<QuestInfo>();
            for (var i = 0; i < n; i++) o.Add(new QuestInfo { QuestId = r.D(), Cond = r.D() });
            return o;
        }

        /// <summary>RequestQuestList 0x63.</summary>
        public static byte[] RequestQuestList() => new PacketWriter().C(0x63).Bytes();

        /// <summary>RequestDestroyQuest 0x64 "d" (RequestQuestAbort do aCis).</summary>
        public static byte[] RequestQuestAbort(int questId) => new PacketWriter().C(0x64).D(questId).Bytes();

        // ---------------------------------------------------------------- cla (T14)

        static PledgeInfoHeader ReadHeader(PacketReader r, PledgeInfoHeader h)
        {
            h.CrestId = r.D();
            h.Level = r.D();
            h.CastleId = r.D();
            h.AgitId = r.D();
            h.Rank = r.D();
            h.Reputation = r.D();
            h.Status = r.D();
            h.Guilty = r.D();
            h.AllyId = r.D();
            h.AllyName = r.S();
            h.AllyCrestId = r.D();
            h.AtWar = r.D() == 1;
            return h;
        }

        /// <summary>PledgeShowMemberListAll 0x53: D sub, D cla, D tipo, S nome, S lider, cabecalho, D n, n x "Sdddddd".</summary>
        public static PledgeShowMemberListAllInfo ParsePledgeShowMemberListAll(PacketReader r)
        {
            var o = new PledgeShowMemberListAllInfo { SubPledge = r.D() };
            o.Info.ClanId = r.D();
            o.PledgeType = r.D();
            o.ClanName = r.S();
            o.LeaderName = r.S();
            ReadHeader(r, o.Info);
            var n = r.D();
            for (var i = 0; i < n; i++)
                o.Members.Add(new PledgeMember
                {
                    Name = r.S(), Level = r.D(), ClassId = r.D(), Sex = r.D(), Race = r.D(), ObjectId = r.D(), HaveMaster = r.D() != 0,
                    PledgeType = o.PledgeType,
                });
            return o;
        }

        /// <summary>PledgeShowMemberListUpdate 0x54 "Sddddddd": nome, nivel, classe, sexo, raca, online (obj), tipo, mentor.</summary>
        public static PledgeMember ParsePledgeShowMemberListUpdate(PacketReader r) => new PledgeMember
        {
            Name = r.S(), Level = r.D(), ClassId = r.D(), Sex = r.D(), Race = r.D(), ObjectId = r.D(), PledgeType = r.D(), HaveMaster = r.D() != 0,
        };

        /// <summary>PledgeShowMemberListAdd 0x55 "Sdddddd": nome, nivel, classe, sexo, raca, online (obj), tipo.</summary>
        public static PledgeMember ParsePledgeShowMemberListAdd(PacketReader r) => new PledgeMember
        {
            Name = r.S(), Level = r.D(), ClassId = r.D(), Sex = r.D(), Race = r.D(), ObjectId = r.D(), PledgeType = r.D(),
        };

        /// <summary>PledgeShowMemberListDelete 0x56 "S".</summary>
        public static string ParsePledgeShowMemberListDelete(PacketReader r) => r.S();

        /// <summary>PledgeShowInfoUpdate 0x88 "ddddddddddSdd": cla e o cabecalho.</summary>
        public static PledgeInfoHeader ParsePledgeShowInfoUpdate(PacketReader r)
        {
            var h = new PledgeInfoHeader { ClanId = r.D() };
            return ReadHeader(r, h);
        }

        /// <summary>ManagePledgePower 0x30 "ddd": grau, acao, privilegios do grau.</summary>
        public static PledgePowerInfo ParseManagePledgePower(PacketReader r) => new PledgePowerInfo { Grade = r.D(), Action = r.D(), Privileges = r.D() };

        /// <summary>AskJoinPledge 0x32 "dS": quem convida e o nome do cla (o engine abre o pedido sem EV_).</summary>
        public static AskJoinPledgeInfo ParseAskJoinPledge(PacketReader r) => new AskJoinPledgeInfo { RequestorId = r.D(), ClanName = r.S() };

        /// <summary>PledgeSkillList FE:39 "d" + n x "dd" (id, nivel).</summary>
        public static List<(int Id, int Level)> ParsePledgeSkillList(PacketReader r)
        {
            var n = r.D();
            var o = new List<(int, int)>();
            for (var i = 0; i < n; i++) o.Add((r.D(), r.D()));
            return o;
        }

        /// <summary>PledgeSkillListAdd FE:3a "dd".</summary>
        public static (int Id, int Level) ParsePledgeSkillListAdd(PacketReader r) => (r.D(), r.D());

        /// <summary>PledgePowerGradeList FE:3b "d" + n x "dd" (grau, membros com o grau).</summary>
        public static List<(int Grade, int Members)> ParsePledgePowerGradeList(PacketReader r)
        {
            var n = r.D();
            var o = new List<(int, int)>();
            for (var i = 0; i < n; i++) o.Add((r.D(), r.D()));
            return o;
        }

        /// <summary>PledgeReceivePowerInfo FE:3c "dSd": grau, nome, privilegios.</summary>
        public static PledgePowerInfo ParsePledgeReceivePowerInfo(PacketReader r) => new PledgePowerInfo { Grade = r.D(), Name = r.S(), Privileges = r.D() };

        /// <summary>PledgeReceiveMemberInfo FE:3d "dSSdSS": tipo, nome, titulo, grau, nome da unidade, mentor/aprendiz.</summary>
        public static PledgeMemberDetail ParsePledgeReceiveMemberInfo(PacketReader r) => new PledgeMemberDetail
        {
            PledgeType = r.D(), Name = r.S(), Title = r.S(), Grade = r.D(), OrderName = r.S(), MasterName = r.S(),
        };

        /// <summary>PledgeReceiveWarList FE:3e "ddd" + n x "Sdd": aba, pagina, n, (cla, tipo, periodo).</summary>
        public static PledgeWarListInfo ParsePledgeReceiveWarList(PacketReader r)
        {
            var o = new PledgeWarListInfo { Tab = r.D(), Page = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Wars.Add(new PledgeWar { ClanName = r.S(), Type = r.D(), Period = r.D() });
            return o;
        }

        /// <summary>PledgeReceiveSubPledgeCreated FE:3f "ddSS": 1, tipo da unidade, nome, lider.</summary>
        public static SubPledgeInfo ParsePledgeReceiveSubPledgeCreated(PacketReader r) => new SubPledgeInfo
        {
            ClanId = r.D(), PledgeType = r.D(), Name = r.S(), LeaderName = r.S(),
        };

        /// <summary>RequestPledgeMemberList 0x3c.</summary>
        public static byte[] RequestPledgeMemberList() => new PacketWriter().C(0x3c).Bytes();

        /// <summary>RequestPledgeInfo 0x66 "d".</summary>
        public static byte[] RequestPledgeInfo(int clanId) => new PacketWriter().C(0x66).D(clanId).Bytes();

        /// <summary>RequestJoinPledge 0x24 "dd": alvo e tipo da unidade (0 principal).</summary>
        public static byte[] RequestJoinPledge(int targetId, int pledgeType) => new PacketWriter().C(0x24).D(targetId).D(pledgeType).Bytes();

        /// <summary>RequestAnswerJoinPledge 0x25 "d": 1 aceita.</summary>
        public static byte[] RequestAnswerJoinPledge(bool accept) => new PacketWriter().C(0x25).D(accept ? 1 : 0).Bytes();

        /// <summary>RequestWithDrawalPledge 0x26.</summary>
        public static byte[] RequestWithdrawPledge() => new PacketWriter().C(0x26).Bytes();

        /// <summary>RequestOustPledgeMember 0x27 "S".</summary>
        public static byte[] RequestOustPledgeMember(string name) => new PacketWriter().C(0x27).S(name ?? "").Bytes();

        /// <summary>RequestGiveNickName 0x55 "SS": membro e titulo.</summary>
        public static byte[] RequestGiveNickName(string name, string title) => new PacketWriter().C(0x55).S(name ?? "").S(title ?? "").Bytes();

        /// <summary>RequestStartPledgeWar 0x4d "S".</summary>
        public static byte[] RequestStartPledgeWar(string clanName) => new PacketWriter().C(0x4d).S(clanName ?? "").Bytes();

        /// <summary>RequestStopPledgeWar 0x4f "S".</summary>
        public static byte[] RequestStopPledgeWar(string clanName) => new PacketWriter().C(0x4f).S(clanName ?? "").Bytes();

        /// <summary>RequestPledgePower 0xc0 "dd" / "ddd": grau, acao e (so na acao 2, gravar) os privilegios.</summary>
        public static byte[] RequestPledgePower(int grade, int action, int privileges = 0)
        {
            var w = new PacketWriter().C(0xc0).D(grade).D(action);
            if (action == 2) w.D(privileges);
            return w.Bytes();
        }

        /// <summary>RequestPledgeSetAcademyMasterPupil D0:19 "dSS": 1 liga / 0 desliga, mentor, aprendiz.</summary>
        public static byte[] RequestPledgeSetAcademyMaster(bool set, string master, string pupil) =>
            new PacketWriter().C(0xd0).H(0x19).D(set ? 1 : 0).S(master ?? "").S(pupil ?? "").Bytes();

        /// <summary>RequestPledgePowerGradeList D0:1a.</summary>
        public static byte[] RequestPledgePowerGradeList() => new PacketWriter().C(0xd0).H(0x1a).Bytes();

        /// <summary>RequestPledgeMemberPowerInfo D0:1b "dS": tipo da unidade e nome.</summary>
        public static byte[] RequestPledgeMemberPowerInfo(int pledgeType, string name) => new PacketWriter().C(0xd0).H(0x1b).D(pledgeType).S(name ?? "").Bytes();

        /// <summary>RequestPledgeSetMemberPowerGrade D0:1c "Sd": nome e grau.</summary>
        public static byte[] RequestPledgeSetMemberPowerGrade(string name, int grade) => new PacketWriter().C(0xd0).H(0x1c).S(name ?? "").D(grade).Bytes();

        /// <summary>RequestPledgeMemberInfo D0:1d "dS": tipo da unidade e nome.</summary>
        public static byte[] RequestPledgeMemberInfo(int pledgeType, string name) => new PacketWriter().C(0xd0).H(0x1d).D(pledgeType).S(name ?? "").Bytes();

        /// <summary>RequestPledgeWarList D0:1e "dd": pagina e aba.</summary>
        public static byte[] RequestPledgeWarList(int page, int tab) => new PacketWriter().C(0xd0).H(0x1e).D(page).D(tab).Bytes();

        /// <summary>RequestPledgeReorganizeMember D0:24 "dSdS": membro escolhido?, nome, nova unidade, membro trocado.</summary>
        public static byte[] RequestPledgeReorganizeMember(bool memberSelected, string name, int newPledgeType, string selectedMember) =>
            new PacketWriter().C(0xd0).H(0x24).D(memberSelected ? 1 : 0).S(name ?? "").D(newPledgeType).S(selectedMember ?? "").Bytes();
    }
}
