// Busca de grupo, uniao (canal de comando) e duelo (#0046, T21): PartyMatchList 0x96, PartyMatchDetail 0x97, os Ex da sala
// (FE:0e/0f/10/34/35), os do canal de comando (FE:25/26/27/30/36/4a/5a) e os do duelo (FE:4c-4f), com os envios das janelas
// PartyMatch*, UnionWnd e DuelManager. Campos pelo aCis; tipos conferidos contra o engine.dll em ReceivedLayoutTests e
// RequestFormatTests.
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class PartyRoom
    {
        public int RoomId;
        public string Title;
        /// <summary>ZoneID: regiao do mapa (MapRegionData.getClosestLocation no aCis).</summary>
        public int Location;
        public int MinLevel, MaxLevel, Members, MaxMembers;
        public string Leader;
    }

    public sealed class PartyMatchListInfo
    {
        /// <summary>PageNum do EV_PartyMatchList (o aCis manda 1 quando ha salas).</summary>
        public int Page;
        public List<PartyRoom> Rooms = new List<PartyRoom>();
    }

    public sealed class PartyRoomDetail
    {
        public int RoomId, MaxMembers, MinLevel, MaxLevel, LootType, Location;
        public string Title;
    }

    public sealed class PartyRoomMember
    {
        public int ObjectId;
        public string Name;
        public int ClassId, Level, Location;
        /// <summary>1 dono da sala, 2 no grupo do dono, 0 so na sala.</summary>
        public int MembershipType;
    }

    public sealed class PartyRoomMembersInfo
    {
        /// <summary>MyMembershipType: o meu papel na sala.</summary>
        public int Mode;
        public List<PartyRoomMember> Members = new List<PartyRoomMember>();
    }

    public sealed class PartyRoomMemberUpdate
    {
        /// <summary>UpdateType: 0 entrou, 1 mudou, 2 saiu (ExManagePartyRoomMember do aCis).</summary>
        public int Mode;
        public PartyRoomMember Member = new PartyRoomMember();
    }

    public sealed class WaitingListInfo
    {
        public int AllCount;
        public List<(string Name, int ClassId, int Level)> Players = new List<(string, int, int)>();
    }

    public sealed class CommandChannelParty
    {
        public string Leader;
        public int LeaderId, Members;
    }

    public sealed class CommandChannelInfo
    {
        public string Owner;
        public int Routing, Members;
        public List<CommandChannelParty> Parties = new List<CommandChannelParty>();
    }

    public sealed class CommandChannelPartyUpdate
    {
        public string Leader;
        public int LeaderId, Members;
        /// <summary>Type do EV_CommandChannelPartyUpdate: 0 saiu, 1 entrou.</summary>
        public int Mode;
    }

    public sealed class DuelUserInfo
    {
        public string Name;
        public int ObjectId, ClassId, Level, Hp, MaxHp, Mp, MaxMp, Cp, MaxCp;
    }

    public static class PartyMatchPackets
    {
        // ---------------------------------------------------------------- busca de grupo

        /// <summary>PartyMatchList 0x96 "dd" + n x "dSdddddS": pagina, n, (sala, titulo, regiao, niveis, membros, maximo, lider).</summary>
        public static PartyMatchListInfo ParsePartyMatchList(PacketReader r)
        {
            var o = new PartyMatchListInfo { Page = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++)
                o.Rooms.Add(new PartyRoom
                {
                    RoomId = r.D(), Title = r.S(), Location = r.D(), MinLevel = r.D(), MaxLevel = r.D(), Members = r.D(), MaxMembers = r.D(), Leader = r.S(),
                });
            return o;
        }

        /// <summary>PartyMatchDetail 0x97 "ddddddS": sala, maximo, niveis, saque, regiao, titulo.</summary>
        public static PartyRoomDetail ParsePartyMatchDetail(PacketReader r) => new PartyRoomDetail
        {
            RoomId = r.D(), MaxMembers = r.D(), MinLevel = r.D(), MaxLevel = r.D(), LootType = r.D(), Location = r.D(), Title = r.S(),
        };

        static PartyRoomMember ReadMember(PacketReader r) => new PartyRoomMember
        {
            ObjectId = r.D(), Name = r.S(), ClassId = r.D(), Level = r.D(), Location = r.D(), MembershipType = r.D(),
        };

        /// <summary>ExPartyRoomMember FE:0e "dd" + n x "dSdddd".</summary>
        public static PartyRoomMembersInfo ParseExPartyRoomMember(PacketReader r)
        {
            var o = new PartyRoomMembersInfo { Mode = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Members.Add(ReadMember(r));
            return o;
        }

        /// <summary>ExManagePartyRoomMember FE:10 "d" + "dSdddd".</summary>
        public static PartyRoomMemberUpdate ParseExManagePartyRoomMember(PacketReader r) => new PartyRoomMemberUpdate { Mode = r.D(), Member = ReadMember(r) };

        /// <summary>ExAskJoinPartyRoom FE:34 "S": quem convida para a sala (o engine pergunta sem EV_).</summary>
        public static string ParseExAskJoinPartyRoom(PacketReader r) => r.S();

        /// <summary>ExListPartyMatchingWaitingRoom FE:35 "dd" + n x "Sdd".</summary>
        public static WaitingListInfo ParseExListPartyMatchingWaitingRoom(PacketReader r)
        {
            var o = new WaitingListInfo { AllCount = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Players.Add((r.S(), r.D(), r.D()));
            return o;
        }

        /// <summary>RequestListPartyWating 0x6f "ddd" (RequestPartyMatchConfig do aCis): automatico, regiao, so do meu nivel.</summary>
        public static byte[] RequestPartyMatchConfig(int auto, int location, int level) => new PacketWriter().C(0x6f).D(auto).D(location).D(level).Bytes();

        /// <summary>RequestManagePartyRoom 0x70 "dddddS" (RequestPartyMatchList do aCis): sala (0 cria), maximo, niveis, saque, titulo.</summary>
        public static byte[] RequestPartyMatchList(int roomId, int maxMembers, int minLevel, int maxLevel, int lootType, string title) =>
            new PacketWriter().C(0x70).D(roomId).D(maxMembers).D(minLevel).D(maxLevel).D(lootType).S(title ?? "").Bytes();

        /// <summary>RequestJoinPartyRoom 0x71 "dddd" (RequestPartyMatchDetail do aCis): sala e tres d que o aCis ignora.</summary>
        public static byte[] RequestPartyMatchDetail(int roomId) => new PacketWriter().C(0x71).D(roomId).D(0).D(0).D(0).Bytes();

        /// <summary>RequestOustFromPartyRoom D0:01 "d": membro.</summary>
        public static byte[] RequestOustFromPartyRoom(int objectId) => new PacketWriter().C(0xd0).H(0x01).D(objectId).Bytes();

        /// <summary>RequestDismissPartyRoom D0:02 "dd": sala e 0.</summary>
        public static byte[] RequestDismissPartyRoom(int roomId) => new PacketWriter().C(0xd0).H(0x02).D(roomId).D(0).Bytes();

        /// <summary>RequestWithdrawPartyRoom D0:03 "dd": sala e 0.</summary>
        public static byte[] RequestWithdrawPartyRoom(int roomId) => new PacketWriter().C(0xd0).H(0x03).D(roomId).D(0).Bytes();

        /// <summary>RequestHandOverPartyMaster D0:04 "S" (RequestChangePartyLeader do aCis).</summary>
        public static byte[] RequestChangePartyLeader(string name) => new PacketWriter().C(0xd0).H(0x04).S(name ?? "").Bytes();

        /// <summary>RequestAskJoinPartyRoom D0:14 "S".</summary>
        public static byte[] RequestAskJoinPartyRoom(string name) => new PacketWriter().C(0xd0).H(0x14).S(name ?? "").Bytes();

        /// <summary>AnswerJoinPartyRoom D0:15 "d": 1 aceita.</summary>
        public static byte[] AnswerJoinPartyRoom(bool accept) => new PacketWriter().C(0xd0).H(0x15).D(accept ? 1 : 0).Bytes();

        /// <summary>RequestListPartyMatchingWaitingRoom D0:16 "dddd": pagina, niveis, modo (0 lista, 1 so atualiza).</summary>
        public static byte[] RequestListPartyMatchingWaitingRoom(int page, int minLevel, int maxLevel, int mode) =>
            new PacketWriter().C(0xd0).H(0x16).D(page).D(minLevel).D(maxLevel).D(mode).Bytes();

        /// <summary>RequestExitPartyMatchingWaitingRoom D0:17.</summary>
        public static byte[] RequestExitPartyMatchingWaitingRoom() => new PacketWriter().C(0xd0).H(0x17).Bytes();

        // ---------------------------------------------------------------- canal de comando (UnionWnd)

        /// <summary>ExAskJoinMPCC FE:27 "S": quem convida (o engine pergunta sem EV_).</summary>
        public static string ParseExAskJoinMPCC(PacketReader r) => r.S();

        /// <summary>ExMultiPartyCommandChannelInfo FE:30 "Sddd" + n x "Sdd": dono, saque, membros, n, (lider, obj, membros).</summary>
        public static CommandChannelInfo ParseExMultiPartyCommandChannelInfo(PacketReader r)
        {
            var o = new CommandChannelInfo { Owner = r.S(), Routing = r.D(), Members = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Parties.Add(new CommandChannelParty { Leader = r.S(), LeaderId = r.D(), Members = r.D() });
            return o;
        }

        /// <summary>ExSetMpccRouting FE:36 "d": regra de saque do canal.</summary>
        public static int ParseExSetMpccRouting(PacketReader r) => r.D();

        /// <summary>ExMPCCShowPartyMemberInfo FE:4a "d" + n x "Sdd": nome, obj, classe.</summary>
        public static List<(string Name, int ObjectId, int ClassId)> ParseExMPCCShowPartyMemberInfo(PacketReader r)
        {
            var n = r.D();
            var o = new List<(string, int, int)>();
            for (var i = 0; i < n; i++) o.Add((r.S(), r.D(), r.D()));
            return o;
        }

        /// <summary>ExMPCCPartyInfoUpdate FE:5a "Sddd": lider, obj do lider, membros, modo.</summary>
        public static CommandChannelPartyUpdate ParseExMPCCPartyInfoUpdate(PacketReader r) => new CommandChannelPartyUpdate
        {
            Leader = r.S(), LeaderId = r.D(), Members = r.D(), Mode = r.D(),
        };

        /// <summary>RequestExAskJoinMPCC D0:0d "S".</summary>
        public static byte[] RequestExAskJoinMPCC(string name) => new PacketWriter().C(0xd0).H(0x0d).S(name ?? "").Bytes();

        /// <summary>RequestExAcceptJoinMPCC D0:0e "dd": resposta e 0 (o aCis le so a resposta).</summary>
        public static byte[] RequestExAcceptJoinMPCC(bool accept) => new PacketWriter().C(0xd0).H(0x0e).D(accept ? 1 : 0).D(0).Bytes();

        /// <summary>RequestExOustFromMPCC D0:0f "S".</summary>
        public static byte[] RequestExOustFromMPCC(string name) => new PacketWriter().C(0xd0).H(0x0f).S(name ?? "").Bytes();

        /// <summary>RequestExMPCCShowPartyMembersInfo D0:26 "d": lider do grupo (UnionDetailWnd).</summary>
        public static byte[] RequestExMPCCShowPartyMembersInfo(int leaderId) => new PacketWriter().C(0xd0).H(0x26).D(leaderId).Bytes();

        // ---------------------------------------------------------------- duelo (DuelManager)

        /// <summary>ExDuelReady / ExDuelStart / ExDuelEnd FE:4c/4d/4e "d": 1 duelo de grupo.</summary>
        public static int ParseExDuelType(PacketReader r) => r.D();

        /// <summary>ExDuelUpdateUserInfo FE:4f "Sddddddddd".</summary>
        public static DuelUserInfo ParseExDuelUpdateUserInfo(PacketReader r) => new DuelUserInfo
        {
            Name = r.S(), ObjectId = r.D(), ClassId = r.D(), Level = r.D(), Hp = r.D(), MaxHp = r.D(), Mp = r.D(), MaxMp = r.D(), Cp = r.D(), MaxCp = r.D(),
        };

        /// <summary>RequestDuelStart D0:27 "Sd": alvo e 1 para duelo de grupo.</summary>
        public static byte[] RequestDuelStart(string name, bool party) => new PacketWriter().C(0xd0).H(0x27).S(name ?? "").D(party ? 1 : 0).Bytes();

        /// <summary>RequestDuelSurrender D0:30.</summary>
        public static byte[] RequestDuelSurrender() => new PacketWriter().C(0xd0).H(0x30).Bytes();
    }
}
