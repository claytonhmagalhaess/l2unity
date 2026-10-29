// Pacotes do game server, conforme a fonte do servidor do usuario (C:\Workspace-java\aCis_gameserver).
using System;
using System.Collections.Generic;

namespace L2Web.Net
{
    // ---------------------------------------------------------------- tipos

    /// <summary>"acis" (aCis original, 746) ou "hwid515" (servidor com ClientGuard=NONE, versao 515 + HWID).</summary>
    public static class ProtocolMode
    {
        public const string Acis = "acis";
        public const string Hwid515 = "hwid515";
    }

    public sealed class HwidInfo
    {
        public string Hdd;
        public string Mac;
        public string Guid;
        public string User;
    }

    public sealed class CreateCharArgs
    {
        public string Name;
        public int Race;
        public int Sex;
        public int ClassId;
        public int HairStyle;
        public int HairColor;
        public int Face;
    }

    /// <summary>
    /// Itens visiveis por slot (no TS: Partial&lt;Record&lt;slot, number&gt;&gt;). 0 = vazio (o `||` do TS vira `!= 0`).
    /// O indexador aceita os nomes do TS ('rhand', 'lrhand', ...).
    /// </summary>
    public sealed class Paperdoll
    {
        public int Hairall, Rear, Lear, Neck, Rfinger, Lfinger, Head, Rhand, Lhand, Gloves, Chest, Legs, Feet, Back, Lrhand, Hair, Face;

        public int this[string slot]
        {
            get
            {
                switch (slot)
                {
                    case "hairall": return Hairall;
                    case "rear": return Rear;
                    case "lear": return Lear;
                    case "neck": return Neck;
                    case "rfinger": return Rfinger;
                    case "lfinger": return Lfinger;
                    case "head": return Head;
                    case "rhand": return Rhand;
                    case "lhand": return Lhand;
                    case "gloves": return Gloves;
                    case "chest": return Chest;
                    case "legs": return Legs;
                    case "feet": return Feet;
                    case "back": return Back;
                    case "lrhand": return Lrhand;
                    case "hair": return Hair;
                    case "face": return Face;
                    default: return 0;
                }
            }
            set
            {
                switch (slot)
                {
                    case "hairall": Hairall = value; break;
                    case "rear": Rear = value; break;
                    case "lear": Lear = value; break;
                    case "neck": Neck = value; break;
                    case "rfinger": Rfinger = value; break;
                    case "lfinger": Lfinger = value; break;
                    case "head": Head = value; break;
                    case "rhand": Rhand = value; break;
                    case "lhand": Lhand = value; break;
                    case "gloves": Gloves = value; break;
                    case "chest": Chest = value; break;
                    case "legs": Legs = value; break;
                    case "feet": Feet = value; break;
                    case "back": Back = value; break;
                    case "lrhand": Lrhand = value; break;
                    case "hair": Hair = value; break;
                    case "face": Face = value; break;
                }
            }
        }

        /// <summary>Todos os nomes de slot aceitos pelo indexador (os 17 do UserInfo).</summary>
        public static IReadOnlyList<string> Slots => GamePackets.Paperdoll17;

        /// <summary>Como um Dictionary: true se `slot` e um nome valido (o valor pode ser 0 = vazio).</summary>
        public bool TryGetValue(string slot, out int value)
        {
            value = this[slot];
            return ContainsKey(slot);
        }

        public bool ContainsKey(string slot) => System.Array.IndexOf(GamePackets.Paperdoll17, slot) >= 0;

        public Paperdoll Clone() => (Paperdoll)MemberwiseClone();
    }

    public class Appearance
    {
        /// <summary>Nivel de encantamento da arma (byte "enchant" do UserInfo/CharInfo): efeito FNWeaponEffect (spec 09).</summary>
        public int Enchant;
        public int Race;
        public int Sex;
        public int ClassId;
        public int HairStyle;
        public int HairColor;
        public int Face;
        public Paperdoll Paperdoll = new Paperdoll();
    }

    public sealed class CharSlot : Appearance
    {
        public string Name;
        public int ObjectId;
        public int Level;
        public int X;
        public int Y;
        public int Z;
        public double Hp;
        public double Mp;
        public double MaxHp;
        public double MaxMp;
        public int BaseClassId;
        public bool Active;
        public int DeleteSeconds;
        public int Sp;
        public long Exp;
        public int Karma;
    }

    public sealed class CharSelectedInfo
    {
        public string Name;
        public int ObjectId;
        public string Title;
        public int Sex;
        public int Race;
        public int ClassId;
        public int X;
        public int Y;
        public int Z;
        public int Level;
    }

    /// <summary>Velocidades (interface Speeds do TS). UserInfo/CharInfo repetem os campos (C# nao tem heranca multipla).</summary>
    public class Speeds
    {
        public int RunSpd;
        public int WalkSpd;
        public double MoveMul;
        public double AtkMul;
        public int PAtkSpd;
        public int MAtkSpd;
    }

    public sealed class UserInfo : Appearance
    {
        public int ObjectId;
        public int PvpFlag, Karma, ClanId;
        public string Name;
        public string Title;
        public int X;
        public int Y;
        public int Z;
        public int Heading;
        public int Level;
        public int Hp;
        public int MaxHp;
        public int Mp;
        public int MaxMp;
        public int Cp;
        public int MaxCp;
        public double CollisionRadius;
        public double CollisionHeight;
        public bool Running;
        public int NameColor;
        public int TitleColor;
        // Speeds
        public int RunSpd;
        public int WalkSpd;
        public double MoveMul;
        public double AtkMul;
        public int PAtkSpd;
        public int MAtkSpd;
        /// <summary>
        /// Chaves como no TS: exp, sp, STR, DEX, CON, INT, WIT, MEN, pAtk, pDef, mAtk, mDef, accuracy, evasion, crit,
        /// pAtkSpd, mAtkSpd, load, maxLoad, karma, pvpFlag, pk, pvp.
        /// </summary>
        public Dictionary<string, long> Stats = new Dictionary<string, long>();
    }

    public sealed class CharInfo : Appearance
    {
        public int ObjectId;
        public int PvpFlag, Karma, ClanId;
        /// <summary>Classe no cla (GetUserRankString no TargetStatusWnd).</summary>
        public int PledgeClass;
        public string Name;
        public string Title;
        public int X;
        public int Y;
        public int Z;
        public int Heading;
        public double CollisionRadius;
        public double CollisionHeight;
        public bool Standing;
        public bool Running;
        public bool InCombat;
        public bool Dead;
        public bool Invisible;
        public int NameColor;
        /// <summary>Cor do titulo (BGR).</summary>
        public int TitleColor;
        /// <summary>0 nenhuma, 1 venda, 3 compra, 5 manufatura, 8 venda em pacote.</summary>
        public int StoreType;
        // Speeds
        public int RunSpd;
        public int WalkSpd;
        public double MoveMul;
        public double AtkMul;
        public int PAtkSpd;
        public int MAtkSpd;
    }

    public sealed class NpcInfo : Speeds
    {
        public int ObjectId;
        public int NpcId;
        public bool Attackable;
        public int X;
        public int Y;
        public int Z;
        public int Heading;
        public double CollisionRadius;
        public double CollisionHeight;
        public int Rhand;
        public int Chest;
        public int Lhand;
        public bool Running;
        public bool InCombat;
        public bool Dead;
        public int Summoned;
        public string Name;
        public string Title;
    }

    public sealed class MoveToLocation
    {
        public int ObjectId, Tx, Ty, Tz, X, Y, Z;
    }

    /// <summary>StopMove (0x47) e ValidateLocation (0x61).</summary>
    public sealed class Position
    {
        public int ObjectId, X, Y, Z, Heading;
    }

    public sealed class TeleportInfo
    {
        public int ObjectId, X, Y, Z;
        public bool Fast;
    }

    /// <summary>DeleteObject e os pacotes que so trazem um objectId.</summary>
    public sealed class ObjectRef
    {
        public int ObjectId;
    }

    public sealed class MoveToPawnInfo
    {
        public int ObjectId, TargetId, Distance, X, Y, Z;
    }

    public sealed class ChangeMoveTypeInfo
    {
        public int ObjectId;
        public bool Running, Swimming;
    }

    public sealed class ChangeWaitTypeInfo
    {
        public int ObjectId, Type, X, Y, Z;
    }

    public sealed class SocialActionInfo
    {
        public int ObjectId, ActionId;
    }

    public sealed class MyTargetSelectedInfo
    {
        public int ObjectId, Color;
    }

    public sealed class TargetSelectedInfo
    {
        public int ObjectId, TargetId, X, Y, Z;
    }

    public sealed class TargetUnselectedInfo
    {
        public int ObjectId, X, Y, Z;
    }

    public sealed class StartRotationInfo
    {
        public int ObjectId, Degree, Side, Speed;
    }

    public sealed class StopRotationInfo
    {
        public int ObjectId, Degree, Speed;
    }

    public sealed class RestartResponseInfo
    {
        public bool Ok;
    }

    public sealed class StatusUpdateInfo
    {
        public int ObjectId;
        public Dictionary<int, int> Attrs = new Dictionary<int, int>();
    }

    public sealed class CreatureSayInfo
    {
        public int ObjectId, Type;
        public string Name, Text;
    }

    public sealed class AttackHit
    {
        public int TargetId, Damage, Flags;
    }

    public sealed class AttackInfo
    {
        public int AttackerId;
        public List<AttackHit> Hits = new List<AttackHit>();
        public int X, Y, Z;
    }

    public sealed class MagicSkillUseInfo
    {
        public int ObjectId, TargetId, SkillId, Level, HitTime, Reuse, X, Y, Z;
    }

    /// <summary>
    /// Parametro do SystemMessage. Type: "text" (Text), "number"/"itemNumber"/"castle"/"npc"/"item" (Value),
    /// "skill" (Id, Level), "zone" (X, Y, Z). No TS o `value` de "text" era a string: aqui fica em Text.
    /// </summary>
    public sealed class SysParam
    {
        public string Type;
        public string Text;
        public int Value;
        /// <summary>Tipo 6 (quantidade de item): o engine le "Q" (DAT_10886380).</summary>
        public long Big;
        public int Id;
        public int Level;
        public int X, Y, Z;
    }

    public sealed class SystemMessageInfo
    {
        public int Id;
        public List<SysParam> Params = new List<SysParam>();
    }

    public sealed class DieInfo
    {
        public int ObjectId;
        public bool ToVillage, ToClanHall, ToCastle, ToSiegeHq, Sweepable, Fixed;
    }

    public static class GamePackets
    {
        // ---------------------------------------------------------------- cliente -> servidor

        static readonly HwidInfo DefaultHwid = new HwidInfo { Hdd = "L2WEB", Mac = "L2WEB", Guid = "L2WEB", User = "l2web" };

        /// <summary>Revisao do protocolo do Interlude ("#Revision: 746 $" no engine.dll).</summary>
        public const int Revision = 746;

        /// <summary>
        /// Bloco de 0x100 bytes do ProtocolVersion do original (FUN_10401dc0): dado estatico do engine.dll em 0x1087e5e8 XOR
        /// a chave de 8 bytes "00000035" em 0x1087e6ec. Conferido contra o engine.dll em GoldenTests/RequestFormatTests.
        /// </summary>
        public static readonly byte[] ProtocolBlock = Hex(
            "0907545603090b0107025454560700025556005100535704075508540107015300565556010605045103085108515604540655080209515601" +
            "530655045300565653010902090151545109555609030407055504065504060904510108080605520604010754030652550655555101020454" +
            "035554015751550552055407515155070253530052055207015400030505080605050603000d08010709035103075309510607540a50560252" +
            "040555510253000854045256060209000803535601050055060856040d0607520607040a0601045404000502045400095253050401040505015251520d065108095453000d01020354530105030856540702540b06");

        /// <summary>GLanguageType do cliente ([LanguageSet] Language do Localization.ini, Ver111): 1 = English.</summary>
        public const int LanguageType = 1;

        static byte[] Hex(string h)
        {
            var b = new byte[h.Length / 2];
            for (var i = 0; i < b.Length; i++) b[i] = Convert.ToByte(h.Substring(i * 2, 2), 16);
            return b;
        }

        /// <summary>
        /// ProtocolVersion. "acis" = Interlude original: 0x00 `cdbd` (746, bloco de 0x100 bytes e um dword que o original le
        /// em tempo de execucao do objeto UGameEngine+0x70, slot 0x78; aqui 0). "hwid515" = servidor com ClientGuard=NONE
        /// (versao 515 + HWID, ver N2 em Docs/validacao.md).
        /// </summary>
        public static byte[] ProtocolVersion(string mode, HwidInfo hwid = null)
        {
            var w = new PacketWriter().C(0x00);
            if (mode == ProtocolMode.Acis) return w.D(Revision).B(ProtocolBlock).D(0).Bytes();
            var h = hwid ?? DefaultHwid;
            return w.D(515).Zero(260).S(h.Hdd).S(h.Mac).S(h.Guid).S(h.User).Bytes();
        }

        /// <summary>AuthLogin 0x08 `cSddddd`: conta, playKey2, playKey1, loginKey1, loginKey2 e GLanguageType (FUN_1040d000).</summary>
        public static byte[] AuthLogin(string account, int playOk1, int playOk2, int loginOk1, int loginOk2) =>
            new PacketWriter().C(0x08).S(account).D(playOk2).D(playOk1).D(loginOk1).D(loginOk2).D(LanguageType).Bytes();

        public static byte[] NewCharacter() => new PacketWriter().C(0x0e).Bytes();
        /// <summary>CharacterDelete 0x0c (marca para excluir; o servidor responde CharDeleteOk/Fail e uma nova CharSelectInfo).</summary>
        public static byte[] CharacterDelete(int slot) => new PacketWriter().C(0x0c).D(slot).Bytes();
        /// <summary>CharacterRestore 0x62 (desfaz a exclusao marcada).</summary>
        public static byte[] CharacterRestore(int slot) => new PacketWriter().C(0x62).D(slot).Bytes();

        public static byte[] CharacterCreate(CreateCharArgs a)
        {
            var w = new PacketWriter().C(0x0b).S(a.Name).D(a.Race).D(a.Sex).D(a.ClassId);
            for (var i = 0; i < 6; i++) w.D(0); // INT STR CON MEN DEX WIT (o servidor usa o template)
            return w.D(a.HairStyle).D(a.HairColor).D(a.Face).Bytes();
        }

        public static byte[] CharacterSelected(int slot) => new PacketWriter().C(0x0d).D(slot).H(0).D(0).D(0).D(0).Bytes();
        public static byte[] RequestManorList() => new PacketWriter().C(0xd0).H(0x08).Bytes();
        /// <summary>
        /// EnterWorld 0x03 `cbddddbdcccccccccccccccccccc` (RequestEnterWorldPacket): bloco de 4·n bytes (n = 0), 4 dwords,
        /// bloco de 0x40, um dword e 20 bytes. O original preenche com dados de execucao (rand e 20 bytes da thread do RL);
        /// o aCis nao le o corpo. Aqui vai a mesma estrutura (104 bytes) zerada.
        /// </summary>
        public static byte[] EnterWorld() => new PacketWriter().C(0x03).Zero(4 * 4 + 0x40 + 4 + 20).Bytes();
        public static byte[] Logout() => new PacketWriter().C(0x09).Bytes();
        public static byte[] RequestRestart() => new PacketWriter().C(0x46).Bytes();

        /// <summary>MoveBackwardToLocation: mouse = 1 (clique), 0 = teclado (setas/WASD), como o cliente original.</summary>
        public static byte[] MoveTo(int tx, int ty, int tz, int ox, int oy, int oz, bool mouse = true) =>
            new PacketWriter().C(0x01).D(tx).D(ty).D(tz).D(ox).D(oy).D(oz).D(mouse ? 1 : 0).Bytes();

        /// <summary>StartRotating (0x4a): giro pelo teclado (A/D, setas); side -1 = esquerda, 1 = direita.</summary>
        public static byte[] StartRotating(int heading, int side) => new PacketWriter().C(0x4a).D(heading).D(side).Bytes();

        /// <summary>FinishRotating (0x4b).</summary>
        public static byte[] FinishRotating(int heading) => new PacketWriter().C(0x4b).D(heading).D(0).Bytes();

        public static byte[] ValidatePosition(int x, int y, int z, int heading) =>
            new PacketWriter().C(0x48).D(x).D(y).D(z).D(heading).D(0).Bytes();

        public static byte[] Action(int objectId, int ox, int oy, int oz, bool shift = false) =>
            new PacketWriter().C(0x04).D(objectId).D(ox).D(oy).D(oz).C(shift ? 1 : 0).Bytes();

        public static byte[] CancelTarget() => new PacketWriter().C(0x37).H(0).Bytes();
        public static byte[] ActionUse(int id, bool ctrl = false, bool shift = false) => new PacketWriter().C(0x45).D(id).D(ctrl ? 1 : 0).C(shift ? 1 : 0).Bytes();
        public static byte[] Say2(string text, int type = 0) => new PacketWriter().C(0x38).S(text).D(type).Bytes();
        /// <summary>Sussurro: tipo 2 seguido do nome do destinatario.</summary>
        public static byte[] Say2Tell(string text, string to) => new PacketWriter().C(0x38).S(text).D(2).S(to).Bytes();
        public static byte[] CannotMoveAnymore(int x, int y, int z, int heading) => new PacketWriter().C(0x36).D(x).D(y).D(z).D(heading).Bytes();

        public static byte[] AttackRequest(int objectId, int ox, int oy, int oz, bool shift = false) =>
            new PacketWriter().C(0x0a).D(objectId).D(ox).D(oy).D(oz).C(shift ? 1 : 0).Bytes();

        /// <summary>RequestRestartPoint 0x6d: 0 = vila, 1 = clan hall, 2 = castelo, 3 = QG de cerco, 4 = no local (fixo).</summary>
        /// <summary>
        /// NetPing 0xa8 `cddd` (UNetworkHandler::NetPing): o id do NetPingPacket (0xd3) e dois valores que o engine le em
        /// execucao (FUN_107a6660); aqui 0.
        /// </summary>
        public static byte[] NetPing(int pingId) => new PacketWriter().C(0xa8).D(pingId).D(0).D(0).Bytes();

        public static byte[] RequestRestartPoint(int type) => new PacketWriter().C(0x6d).D(type).Bytes();

        // ---------------------------------------------------------------- servidor -> cliente

        /// <summary>Slots do paperdoll como o CharSelectInfo/UserInfo os enviam (17 entradas).</summary>
        public static readonly string[] Paperdoll17 = { "hairall", "rear", "lear", "neck", "rfinger", "lfinger", "head", "rhand", "lhand", "gloves", "chest", "legs", "feet", "back", "lrhand", "hair", "face" };
        /// <summary>Slots visiveis do CharInfo (12 entradas).</summary>
        public static readonly string[] Paperdoll12 = { "hairall", "head", "rhand", "lhand", "gloves", "chest", "legs", "feet", "back", "lrhand", "hair", "face" };

        public static List<CharSlot> ParseCharSelectInfo(PacketReader r)
        {
            var n = r.D();
            var o = new List<CharSlot>();
            for (var i = 0; i < n; i++)
            {
                var c = new CharSlot();
                c.Name = r.S();
                c.ObjectId = r.D();
                r.S(); // login
                r.D(); // sessionId
                r.D(); // clanId
                r.D();
                c.Sex = r.D();
                c.Race = r.D();
                c.BaseClassId = r.D();
                r.D();
                c.X = r.D();
                c.Y = r.D();
                c.Z = r.D();
                c.Hp = r.F();
                c.Mp = r.F();
                c.Sp = r.D();
                c.Exp = r.Q();
                c.Level = r.D();
                c.Karma = r.D();
                r.Skip(4 * 2); // pk pvp
                r.Skip(4 * 7);
                r.Skip(4 * 17); // objectIds
                foreach (var slot in Paperdoll17) c.Paperdoll[slot] = r.D();
                c.HairStyle = r.D();
                c.HairColor = r.D();
                c.Face = r.D();
                c.MaxHp = r.F();
                c.MaxMp = r.F();
                c.DeleteSeconds = r.D();
                c.ClassId = r.D();
                c.Active = r.D() == 1;
                r.C(); // enchant
                r.H(); // aumento: o engine le "chh" (packet_formats do 0x13), as duas opcoes em shorts
                r.H();
                o.Add(c);
            }
            return o;
        }

        public static CharSelectedInfo ParseCharSelected(PacketReader r)
        {
            var c = new CharSelectedInfo();
            c.Name = r.S();
            c.ObjectId = r.D();
            c.Title = r.S();
            r.D(); // sessionId
            r.D(); // clanId
            r.D();
            c.Sex = r.D();
            c.Race = r.D();
            c.ClassId = r.D();
            r.D();
            c.X = r.D();
            c.Y = r.D();
            c.Z = r.D();
            r.F();
            r.F();
            r.D();
            r.Q();
            c.Level = r.D();
            return c;
        }

        public static UserInfo ParseUserInfo(PacketReader r)
        {
            var u = new UserInfo();
            u.X = r.D();
            u.Y = r.D();
            u.Z = r.D();
            u.Heading = r.D();
            u.ObjectId = r.D();
            u.Name = r.S();
            u.Race = r.D();
            u.Sex = r.D();
            u.ClassId = r.D();
            u.Level = r.D();
            long exp = r.Q();
            int str = r.D(), dex = r.D(), con = r.D(), intel = r.D(), wit = r.D(), men = r.D();
            u.MaxHp = r.D();
            u.Hp = r.D();
            u.MaxMp = r.D();
            u.Mp = r.D();
            var sp = r.D();
            var load = r.D();
            var maxLoad = r.D();
            r.D(); // 40/20
            r.Skip(4 * 17); // objectIds
            foreach (var slot in Paperdoll17) u.Paperdoll[slot] = r.D();
            r.Skip(2 * 14).Skip(4).Skip(2 * 12).Skip(4).Skip(2 * 4);
            var pAtk = r.D();
            u.PAtkSpd = r.D();
            var pDef = r.D();
            var evasion = r.D();
            var accuracy = r.D();
            var crit = r.D();
            var mAtk = r.D();
            u.MAtkSpd = r.D();
            r.D(); // pAtkSpd de novo
            var mDef = r.D();
            var pvpFlag = r.D();
            var karma = r.D();
            u.PvpFlag = pvpFlag;
            u.Karma = karma;
            u.RunSpd = r.D();
            u.WalkSpd = r.D();
            r.Skip(4 * 6);
            u.MoveMul = r.F();
            u.AtkMul = r.F();
            u.CollisionRadius = r.F();
            u.CollisionHeight = r.F();
            u.HairStyle = r.D();
            u.HairColor = r.D();
            u.Face = r.D();
            r.D(); // gm
            u.Title = r.S();
            u.ClanId = r.D();
            r.Skip(4 * 4); // crest, ally, allyCrest, relation
            r.C(); // mount
            r.C(); // store
            r.C(); // craft
            var pk = r.D();
            var pvp = r.D();
            var cubics = r.H();
            r.Skip(2 * cubics);
            r.C(); // party match room
            r.D(); // abnormal
            r.C();
            r.D(); // clan privileges
            r.H();
            r.H();
            r.D(); // mount npc
            r.H(); // inventory limit
            r.D(); // classId
            r.D();
            u.MaxCp = r.D();
            u.Cp = r.D();
            u.Enchant = r.C();
            r.C(); // team
            r.D(); // crest large
            r.C(); // noble
            r.C(); // hero
            r.C(); // fishing
            r.Skip(4 * 3);
            u.NameColor = r.D();
            u.Running = r.C() == 1;
            // pledgeClass, pledgeType e cor do titulo (BGR)
            if (r.Remaining >= 12)
            {
                r.D();
                r.D();
                u.TitleColor = r.D();
            }
            else u.TitleColor = 0xffff77;
            u.Stats = new Dictionary<string, long>
            {
                ["exp"] = exp, ["sp"] = sp, ["STR"] = str, ["DEX"] = dex, ["CON"] = con, ["INT"] = intel, ["WIT"] = wit, ["MEN"] = men,
                ["pAtk"] = pAtk, ["pDef"] = pDef, ["mAtk"] = mAtk, ["mDef"] = mDef, ["accuracy"] = accuracy, ["evasion"] = evasion,
                ["crit"] = crit, ["pAtkSpd"] = u.PAtkSpd, ["mAtkSpd"] = u.MAtkSpd, ["load"] = load, ["maxLoad"] = maxLoad,
                ["karma"] = karma, ["pvpFlag"] = pvpFlag, ["pk"] = pk, ["pvp"] = pvp,
            };
            return u;
        }

        public static CharInfo ParseCharInfo(PacketReader r)
        {
            var c = new CharInfo();
            c.X = r.D();
            c.Y = r.D();
            c.Z = r.D();
            r.D(); // barco (ou heading no NpcMorphInfo)
            c.ObjectId = r.D();
            c.Name = r.S();
            c.Race = r.D();
            c.Sex = r.D();
            c.ClassId = r.D();
            foreach (var slot in Paperdoll12) c.Paperdoll[slot] = r.D();
            r.Skip(2 * 4).Skip(4).Skip(2 * 12).Skip(4).Skip(2 * 4);
            c.PvpFlag = r.D();
            c.Karma = r.D();
            c.MAtkSpd = r.D();
            c.PAtkSpd = r.D();
            r.D();
            r.D();
            c.RunSpd = r.D();
            c.WalkSpd = r.D();
            r.Skip(4 * 6);
            c.MoveMul = r.F();
            c.AtkMul = r.F();
            c.CollisionRadius = r.F();
            c.CollisionHeight = r.F();
            c.HairStyle = r.D();
            c.HairColor = r.D();
            c.Face = r.D();
            c.Title = r.S();
            c.ClanId = r.D();
            r.Skip(4 * 4); // crest, ally, allyCrest, relation
            c.Standing = r.C() == 1;
            c.Running = r.C() == 1;
            c.InCombat = r.C() == 1;
            c.Dead = r.C() == 1;
            c.Invisible = r.C() == 1;
            r.C(); // mount
            c.StoreType = r.C();
            var cubics = r.H();
            r.Skip(2 * cubics);
            r.C();
            r.D(); // abnormal
            r.C(); // recom left
            r.H(); // recom have
            r.D(); // classId
            r.D(); // max cp
            r.D(); // cp
            c.Enchant = r.C();
            r.C(); // team
            r.D(); // crest large
            r.C(); // noble
            r.C(); // hero
            r.C(); // fishing
            r.Skip(4 * 3);
            c.NameColor = r.D();
            c.Heading = r.Remaining >= 4 ? r.D() : 0;
            if (r.Remaining >= 12)
            {
                c.PledgeClass = r.D();
                r.D();
                c.TitleColor = r.D();
            }
            else c.TitleColor = 0xffff77;
            return c;
        }

        public static NpcInfo ParseNpcInfo(PacketReader r)
        {
            var n = new NpcInfo();
            n.ObjectId = r.D();
            n.NpcId = r.D() - 1000000;
            n.Attackable = r.D() == 1;
            n.X = r.D();
            n.Y = r.D();
            n.Z = r.D();
            n.Heading = r.D();
            r.D();
            n.MAtkSpd = r.D();
            n.PAtkSpd = r.D();
            n.RunSpd = r.D();
            n.WalkSpd = r.D();
            r.Skip(4 * 6);
            n.MoveMul = r.F();
            n.AtkMul = r.F();
            n.CollisionRadius = r.F();
            n.CollisionHeight = r.F();
            n.Rhand = r.D();
            n.Chest = r.D();
            n.Lhand = r.D();
            r.C(); // nome visivel
            n.Running = r.C() == 1;
            n.InCombat = r.C() == 1;
            n.Dead = r.C() == 1;
            n.Summoned = r.C();
            n.Name = r.S();
            n.Title = r.S();
            return n;
        }

        public static MoveToLocation ParseMoveToLocation(PacketReader r) =>
            new MoveToLocation { ObjectId = r.D(), Tx = r.D(), Ty = r.D(), Tz = r.D(), X = r.D(), Y = r.D(), Z = r.D() };

        /// <summary>StopMove (0x47) e ValidateLocation (0x61) tem o mesmo formato.</summary>
        public static Position ParsePosition(PacketReader r) => new Position { ObjectId = r.D(), X = r.D(), Y = r.D(), Z = r.D(), Heading = r.D() };

        public static TeleportInfo ParseTeleport(PacketReader r) => new TeleportInfo { ObjectId = r.D(), X = r.D(), Y = r.D(), Z = r.D(), Fast = r.D() == 1 };
        public static ObjectRef ParseDeleteObject(PacketReader r) => new ObjectRef { ObjectId = r.D() };
        public static MoveToPawnInfo ParseMoveToPawn(PacketReader r) =>
            new MoveToPawnInfo { ObjectId = r.D(), TargetId = r.D(), Distance = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
        public static ChangeMoveTypeInfo ParseChangeMoveType(PacketReader r) => new ChangeMoveTypeInfo { ObjectId = r.D(), Running = r.D() == 1, Swimming = r.D() == 1 };
        public static ChangeWaitTypeInfo ParseChangeWaitType(PacketReader r) => new ChangeWaitTypeInfo { ObjectId = r.D(), Type = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
        public static SocialActionInfo ParseSocialAction(PacketReader r) => new SocialActionInfo { ObjectId = r.D(), ActionId = r.D() };
        public static MyTargetSelectedInfo ParseMyTargetSelected(PacketReader r) => new MyTargetSelectedInfo { ObjectId = r.D(), Color = r.H() };
        public static TargetSelectedInfo ParseTargetSelected(PacketReader r) => new TargetSelectedInfo { ObjectId = r.D(), TargetId = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
        public static TargetUnselectedInfo ParseTargetUnselected(PacketReader r) => new TargetUnselectedInfo { ObjectId = r.D(), X = r.D(), Y = r.D(), Z = r.D() };
        public static ObjectRef ParseObjectId(PacketReader r) => new ObjectRef { ObjectId = r.D() };
        public static StartRotationInfo ParseStartRotation(PacketReader r) => new StartRotationInfo { ObjectId = r.D(), Degree = r.D(), Side = r.D(), Speed = r.D() };
        public static StopRotationInfo ParseStopRotation(PacketReader r) => new StopRotationInfo { ObjectId = r.D(), Degree = r.D(), Speed = r.D() };
        public static RestartResponseInfo ParseRestartResponse(PacketReader r) => new RestartResponseInfo { Ok = r.D() == 1 };

        /// <summary>Atributos do StatusUpdate (STATUS do TS).</summary>
        public static class Status
        {
            public const int Level = 0x01;
            public const int CurHp = 0x09;
            public const int MaxHp = 0x0a;
            public const int CurMp = 0x0b;
            public const int MaxMp = 0x0c;
            public const int CurCp = 0x21;
            public const int MaxCp = 0x22;
        }

        public static StatusUpdateInfo ParseStatusUpdate(PacketReader r)
        {
            var s = new StatusUpdateInfo { ObjectId = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++)
            {
                var k = r.D();
                s.Attrs[k] = r.D();
            }
            return s;
        }

        public static CreatureSayInfo ParseCreatureSay(PacketReader r)
        {
            // FUN do 0x4a no Engine: "dd"; tipo 11 le "dd" = sysstring (nome) e systemmsg (texto); senao "SS" (nome ate 0x60,
            // texto ate 0x800). O servidor do usuario escreve um d (npcString, -1) antes do texto: como no original, esses 4
            // bytes viram dois U+FFFF no comeco do texto (a fonte nao os desenha; ver App, 0x4a).
            var s = new CreatureSayInfo { ObjectId = r.D(), Type = r.D() };
            if (s.Type == 11)
            {
                s.Name = GameData.SysString(r.D(), "");
                s.Text = GameData.SystemMessage(r.D(), new List<string>()).Text;
                return s;
            }
            s.Name = r.S();
            s.Text = r.S();
            return s;
        }

        public static AttackInfo ParseAttack(PacketReader r)
        {
            var a = new AttackInfo { AttackerId = r.D() };
            a.Hits.Add(new AttackHit { TargetId = r.D(), Damage = r.D(), Flags = r.C() });
            a.X = r.D();
            a.Y = r.D();
            a.Z = r.D();
            var extra = r.H();
            for (var i = 0; i < extra; i++) a.Hits.Add(new AttackHit { TargetId = r.D(), Damage = r.D(), Flags = r.C() });
            return a;
        }

        public static MagicSkillUseInfo ParseMagicSkillUse(PacketReader r) => new MagicSkillUseInfo
        {
            ObjectId = r.D(), TargetId = r.D(), SkillId = r.D(), Level = r.D(), HitTime = r.D(), Reuse = r.D(), X = r.D(), Y = r.D(), Z = r.D(),
        };

        public static readonly Dictionary<int, string> CharCreateFail = new Dictionary<int, string>
        {
            [0] = "falha na criacao",
            [1] = "limite de personagens na conta",
            [2] = "nome ja existe",
            [3] = "nome com mais de 16 caracteres",
            [4] = "nome invalido",
            [5] = "criacao nao permitida",
            [6] = "escolha outro servidor",
        };

        /// <summary>Nomes dos opcodes do servidor (para log).</summary>
        public static readonly Dictionary<int, string> ServerOpcodes = new Dictionary<int, string>
        {
            [0x00] = "KeyPacket", [0x01] = "MoveToLocation", [0x02] = "NpcSay", [0x03] = "CharInfo", [0x04] = "UserInfo", [0x05] = "Attack",
            [0x06] = "Die", [0x07] = "Revive", [0x0b] = "SpawnItem", [0x0c] = "DropItem", [0x0d] = "GetItem", [0x0e] = "StatusUpdate",
            [0x0f] = "NpcHtmlMessage", [0x12] = "DeleteObject", [0x13] = "CharSelectInfo", [0x15] = "CharSelected", [0x16] = "NpcInfo",
            [0x17] = "CharTemplates", [0x19] = "CharCreateOk", [0x1a] = "CharCreateFail", [0x1b] = "ItemList", [0x1c] = "SunRise",
            [0x23] = "CharDeleteOk", [0x25] = "ActionFailed", [0x26] = "ServerClose", [0x27] = "InventoryUpdate", [0x28] = "TeleportToLocation",
            [0x29] = "TargetSelected", [0x2a] = "TargetUnselected", [0x2b] = "AutoAttackStart", [0x2c] = "AutoAttackStop",
            [0x2d] = "SocialAction", [0x2e] = "ChangeMoveType", [0x2f] = "ChangeWaitType", [0x45] = "ShortCutInit", [0x47] = "StopMove",
            [0x48] = "MagicSkillUse", [0x4a] = "CreatureSay", [0x53] = "PledgeShowMemberListAll", [0x58] = "SkillList", [0x5f] = "RestartResponse",
            [0x60] = "MoveToPawn", [0x61] = "ValidateLocation", [0x62] = "StartRotation", [0x63] = "StopRotation", [0x64] = "SystemMessage",
            [0x6d] = "SetupGauge", [0x76] = "MagicSkillLaunched", [0x7e] = "LeaveWorld", [0x7f] = "AbnormalStatusUpdate", [0x80] = "QuestList",
            [0xa6] = "MyTargetSelected", [0xe4] = "HennaInfo", [0xec] = "ClientSetTime", [0xf3] = "EtcStatusUpdate", [0xf8] = "SSQInfo",
            [0xfa] = "FriendList", [0xfe] = "Ex", [0x6e] = "ShowBoard", [0x49] = "MagicSkillCanceled", [0x10] = "SellList", [0x11] = "BuyList",
            [0xd0] = "MultiSellList", [0xed] = "ConfirmDlg", [0x44] = "ShortCutRegister", [0x46] = "ShortCutDelete",
        };

        /// <summary>Nome do opcode para log (ou o numero).</summary>
        public static string OpName(int op) => ServerOpcodes.TryGetValue(op, out var n) ? n : op.ToString();

        /// <summary>SystemMessage 0x64: id + parametros tipados (texto, numero, NPC, item, skill, castelo, quantidade, zona).</summary>
        public static SystemMessageInfo ParseSystemMessage(PacketReader r)
        {
            var m = new SystemMessageInfo { Id = r.D() };
            var n = r.D();
            for (var i = 0; i < n && r.Remaining >= 4; i++)
            {
                var t = r.D();
                switch (t)
                {
                    case 0:
                        m.Params.Add(new SysParam { Type = "text", Text = r.S() });
                        break;
                    case 1:
                        m.Params.Add(new SysParam { Type = "number", Value = r.D() });
                        break;
                    case 2:
                        m.Params.Add(new SysParam { Type = "npc", Value = r.D() - 1000000 });
                        break;
                    case 3:
                        m.Params.Add(new SysParam { Type = "item", Value = r.D() });
                        break;
                    case 4:
                        m.Params.Add(new SysParam { Type = "skill", Id = r.D(), Level = r.D() });
                        break;
                    case 5:
                        m.Params.Add(new SysParam { Type = "castle", Value = r.D() });
                        break;
                    case 6:
                    {
                        // o engine le "Q"; o servidor do usuario escreve d, entao o original junta os 4 bytes seguintes (o tipo do
                        // proximo parametro) na quantidade, como aqui. No fim do pacote so ha 4 bytes: a parte alta fica 0.
                        var big = r.Remaining >= 8 ? r.Q() : r.D() & 0xffffffffL;
                        m.Params.Add(new SysParam { Type = "itemNumber", Value = (int)big, Big = big });
                        break;
                    }
                    case 7:
                        m.Params.Add(new SysParam { Type = "zone", X = r.D(), Y = r.D(), Z = r.D() });
                        break;
                    case 8:
                        // "dhh" (DAT_10886384); o aCis nao manda este tipo
                        m.Params.Add(new SysParam { Type = "number", Value = r.D(), Id = r.H(), Level = r.H() });
                        break;
                    default:
                        // tipo desconhecido: o engine nao le nada e segue para o proximo parametro
                        break;
                }
            }
            return m;
        }

        public static DieInfo ParseDie(PacketReader r) => new DieInfo
        {
            ObjectId = r.D(), ToVillage = r.D() == 1, ToClanHall = r.D() == 1, ToCastle = r.D() == 1, ToSiegeHq = r.D() == 1,
            Sweepable = r.D() == 1, Fixed = r.D() == 1,
        };
    }
}
