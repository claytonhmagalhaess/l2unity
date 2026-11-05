// Pacotes sociais (Fase 11): party, troca, loja privada, amigos e cla. Formatos da fonte do servidor do usuario.
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class PartyMember
    {
        public int ObjectId;
        public string Name;
        public int Cp;
        public int MaxCp;
        public int Hp;
        public int MaxHp;
        public int Mp;
        public int MaxMp;
        public int Level;
        public int ClassId;
    }

    public sealed class AskJoinPartyInfo
    {
        public string Requestor;
        public int Distribution;
    }

    public sealed class JoinPartyInfo
    {
        public bool Accepted;
    }

    public sealed class PartyAllInfo
    {
        public int LeaderId;
        /// <summary>Regra de saque (RoutingType do EV_PartyAddParty).</summary>
        public int Distribution;
        public List<PartyMember> Members = new List<PartyMember>();
    }

    public sealed class PartyAddInfo
    {
        public int LeaderId;
        public int Distribution;
        public PartyMember Member;
    }

    public sealed class PartyDeleteInfo
    {
        public int ObjectId;
        public string Name;
    }

    public sealed class TradeItem
    {
        public int ObjectId;
        public int ItemId;
        public int Count;
        public int Enchant;
    }

    public sealed class TradeRequestInfo
    {
        public int SenderId;
    }

    public sealed class TradeStartInfo
    {
        public int PartnerId;
        public List<TradeItem> Items = new List<TradeItem>();
    }

    public sealed class TradeDoneInfo
    {
        public bool Done;
    }

    public sealed class StoreItem
    {
        public int ObjectId;
        public int ItemId;
        public int Count;
        public int Enchant;
        public int Price;
    }

    public sealed class PrivateStoreSellInfo
    {
        public int OwnerId;
        public bool PackageSale;
        public int Adena;
        public List<StoreItem> Items = new List<StoreItem>();
    }

    public sealed class PrivateStoreMsgInfo
    {
        public int OwnerId;
        public string Message;
    }

    public sealed class FriendInfo
    {
        public int ObjectId;
        public string Name;
        public bool Online;
    }

    public sealed class FriendAddRequestInfo
    {
        public string Requestor;
    }

    public sealed class ClanMember
    {
        public string Name;
        public int Level;
        public int ClassId;
        public bool Online;
    }

    public sealed class PledgeMembersInfo
    {
        public string ClanName;
        public string Leader;
        public int Level;
        public int Reputation;
        public string AllyName;
        public List<ClanMember> Members = new List<ClanMember>();
    }

    public static class SocialPackets
    {
        static PartyMember ReadMember(PacketReader r) => new PartyMember
        {
            ObjectId = r.D(), Name = r.S(), Cp = r.D(), MaxCp = r.D(), Hp = r.D(), MaxHp = r.D(), Mp = r.D(), MaxMp = r.D(), Level = r.D(), ClassId = r.D(),
        };

        /// <summary>AskJoinParty 0x39: S quem convidou, D distribuicao de itens.</summary>
        public static AskJoinPartyInfo ParseAskJoinParty(PacketReader r) => new AskJoinPartyInfo { Requestor = r.S(), Distribution = r.D() };
        /// <summary>JoinParty 0x3a: D resposta (1 aceitou).</summary>
        public static JoinPartyInfo ParseJoinParty(PacketReader r) => new JoinPartyInfo { Accepted = r.D() == 1 };

        /// <summary>PartySmallWindowAll 0x4e: D lider, D distribuicao, D n, n x (membro + D 0 + D raca).</summary>
        public static PartyAllInfo ParsePartyAll(PacketReader r)
        {
            var o = new PartyAllInfo { LeaderId = r.D(), Distribution = r.D() };
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 8; i++)
            {
                o.Members.Add(ReadMember(r));
                r.D();
                r.D();
            }
            return o;
        }

        /// <summary>PartySmallWindowAdd 0x4f: D lider, D distribuicao, membro, D 0, D 0.</summary>
        public static PartyAddInfo ParsePartyAdd(PacketReader r)
        {
            var o = new PartyAddInfo { LeaderId = r.D(), Distribution = r.D() };
            o.Member = ReadMember(r);
            return o;
        }

        /// <summary>PartySmallWindowDelete 0x51: D obj, S nome.</summary>
        public static PartyDeleteInfo ParsePartyDelete(PacketReader r) => new PartyDeleteInfo { ObjectId = r.D(), Name = r.S() };
        /// <summary>PartySmallWindowUpdate 0x52: membro.</summary>
        public static PartyMember ParsePartyUpdate(PacketReader r) => ReadMember(r);

        public static byte[] RequestJoinParty(string name, int distribution = 0) => new PacketWriter().C(0x29).S(name).D(distribution).Bytes();
        public static byte[] AnswerJoinParty(bool ok) => new PacketWriter().C(0x2a).D(ok ? 1 : 0).Bytes();
        /// <summary>RequestDuelAnswerStart (0xd0 0x28 "chddd": tipo, 0, resposta; aCis le isPartyDuel, pula um DWORD, accepted).</summary>
        public static byte[] DuelAnswerStart(int type, bool accept) => new PacketWriter().C(0xd0).H(0x28).D(type).D(0).D(accept ? 1 : 0).Bytes();
        public static byte[] WithdrawParty() => new PacketWriter().C(0x2b).Bytes();
        public static byte[] OustPartyMember(string name) => new PacketWriter().C(0x2c).S(name).Bytes();

        // ---------------------------------------------------------------- troca

        static TradeItem ReadTradeItem(PacketReader r)
        {
            r.H(); // type1
            var objectId = r.D();
            var itemId = r.D();
            var count = r.D();
            r.H(); // type2
            r.H();
            r.D(); // bodyPart
            var enchant = r.H();
            r.H();
            r.H();
            return new TradeItem { ObjectId = objectId, ItemId = itemId, Count = count, Enchant = enchant };
        }

        /// <summary>SendTradeRequest 0x5e: D quem pediu.</summary>
        public static TradeRequestInfo ParseTradeRequest(PacketReader r) => new TradeRequestInfo { SenderId = r.D() };

        /// <summary>TradeStart 0x1e: D parceiro, H n, n x item (itens que podem ser trocados).</summary>
        public static TradeStartInfo ParseTradeStart(PacketReader r)
        {
            var o = new TradeStartInfo { PartnerId = r.D() };
            var n = r.H();
            for (var i = 0; i < n && r.Remaining >= 28; i++) o.Items.Add(ReadTradeItem(r));
            return o;
        }

        /// <summary>TradeOwnAdd 0x20 / TradeOtherAdd 0x21: H 1, item.</summary>
        public static TradeItem ParseTradeAdd(PacketReader r)
        {
            r.H();
            return ReadTradeItem(r);
        }

        /// <summary>SendTradeDone 0x22: D 1 concluida / 0 cancelada.</summary>
        public static TradeDoneInfo ParseTradeDone(PacketReader r) => new TradeDoneInfo { Done = r.D() == 1 };

        public static byte[] TradeRequest(int objectId) => new PacketWriter().C(0x15).D(objectId).Bytes();
        public static byte[] AnswerTradeRequest(bool ok) => new PacketWriter().C(0x44).D(ok ? 1 : 0).Bytes();
        public static byte[] AddTradeItem(int objectId, int count) => new PacketWriter().C(0x16).D(1).D(objectId).D(count).Bytes();
        public static byte[] TradeDone(bool ok) => new PacketWriter().C(0x17).D(ok ? 1 : 0).Bytes();

        // ---------------------------------------------------------------- loja privada (venda)

        /// <summary>PrivateStoreListSell 0x9b: D dono, D pacote, D adena, D n, n x (D type2, D obj, D itemId, D qtd, H, H enchant, H, D bodyPart, D preco, D preco ref).</summary>
        public static PrivateStoreSellInfo ParsePrivateStoreSell(PacketReader r)
        {
            var o = new PrivateStoreSellInfo { OwnerId = r.D(), PackageSale = r.D() == 1, Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 34; i++)
            {
                r.D();
                var objectId = r.D();
                var itemId = r.D();
                var count = r.D();
                r.H();
                var enchant = r.H();
                r.H();
                r.D();
                var price = r.D();
                r.D();
                o.Items.Add(new StoreItem { ObjectId = objectId, ItemId = itemId, Count = count, Enchant = enchant, Price = price });
            }
            return o;
        }

        /// <summary>PrivateStoreMsgSell 0x9c: D dono, S titulo.</summary>
        public static PrivateStoreMsgInfo ParsePrivateStoreMsg(PacketReader r) => new PrivateStoreMsgInfo { OwnerId = r.D(), Message = r.S() };

        public static byte[] PrivateStoreBuy(int ownerId, IList<(int ObjectId, int Count, int Price)> items)
        {
            var w = new PacketWriter().C(0x79).D(ownerId).D(items.Count);
            foreach (var i in items) w.D(i.ObjectId).D(i.Count).D(i.Price);
            return w.Bytes();
        }

        // ---------------------------------------------------------------- amigos e cla

        /// <summary>FriendList 0xfa: D n, n x (D obj, S nome, D online, D obj se online).</summary>
        public static List<FriendInfo> ParseFriendList(PacketReader r)
        {
            var n = r.D();
            var o = new List<FriendInfo>();
            for (var i = 0; i < n && r.Remaining >= 8; i++)
            {
                var objectId = r.D();
                var name = r.S();
                var online = r.D() == 1;
                r.D();
                o.Add(new FriendInfo { ObjectId = objectId, Name = name, Online = online });
            }
            return o;
        }

        /// <summary>FriendAddRequest 0x7d: S quem pediu.</summary>
        public static FriendAddRequestInfo ParseFriendAddRequest(PacketReader r) => new FriendAddRequestInfo { Requestor = r.S() };
        public static byte[] FriendInvite(string name) => new PacketWriter().C(0x5e).S(name).Bytes();
        public static byte[] AnswerFriendInvite(bool ok) => new PacketWriter().C(0x5f).D(ok ? 1 : 0).Bytes();
        public static byte[] FriendDel(string name) => new PacketWriter().C(0x61).S(name).Bytes();

        /// <summary>PledgeShowMemberListAll 0x53: cabecalho do cla e membros.</summary>
        public static PledgeMembersInfo ParsePledgeMembers(PacketReader r)
        {
            var o = new PledgeMembersInfo();
            r.D();
            var clanId = r.D();
            r.D(); // pledgeType
            o.ClanName = r.S();
            o.Leader = r.S();
            // o engine so le o resto com cla e nome (FUN do 0x53: "dddSS", depois "dddddddddSdd", d, n x "Sdddddd")
            if (clanId == 0 || o.ClanName.Length == 0) return o;
            r.D(); // crest
            o.Level = r.D();
            r.D(); // castelo
            r.D(); // clan hall
            r.D(); // rank
            o.Reputation = r.D();
            r.D();
            r.D();
            r.D(); // allyId
            o.AllyName = r.S();
            r.D(); // allyCrest
            r.D(); // em guerra
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 6; i++)
            {
                var name = r.S();
                var lvl = r.D();
                var classId = r.D();
                r.D();
                r.D();
                var online = r.D() != 0;
                r.D();
                o.Members.Add(new ClanMember { Name = name, Level = lvl, ClassId = classId, Online = online });
            }
            return o;
        }
    }
}
