// Aprender skill e tatuagem (#0046, T15): AcquireSkillList 0x8a, AcquireSkillInfo 0x8b, AcquireSkillDone 0x8e, HennaEquipList
// 0xe2, HennaItemInfo 0xe3, HennaInfo 0xe4, HennaRemoveList 0xe5, HennaItemRemoveInfo 0xe6 e os envios do SkillTrainListWnd,
// SkillTrainInfoWnd, HennaListWnd e HennaInfoWnd. Campos pelo aCis; tipos conferidos contra o engine.dll em
// ReceivedLayoutTests e RequestFormatTests.
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class AcquireSkill
    {
        public int Id, Level, MaxLevel, SpCost, Requirements;
    }

    public sealed class AcquireSkillListInfo
    {
        /// <summary>Type do EV_SkillTrainListWndShow (0 comum, 1 pesca, 2 cla no Interlude; o aCis manda o ordinal: cla = 1).</summary>
        public int Type;
        public List<AcquireSkill> Skills = new List<AcquireSkill>();
    }

    public sealed class AcquireSkillReq
    {
        public int Type, ItemId, Count, Unknown;
    }

    public sealed class AcquireSkillInfoInfo
    {
        public int Id, Level, SpCost;
        /// <summary>Type do EV_SkillTrainInfoWndShow (0 comum, 1 pesca, 2 cla).</summary>
        public int Mode;
        public List<AcquireSkillReq> Requirements = new List<AcquireSkillReq>();
    }

    public sealed class HennaEntry
    {
        /// <summary>HennaID (simbolo), ClassID (o corante), NumOfItem (corantes por tatuagem), Fee.</summary>
        public int HennaId, DyeId, Count, Fee;
        public int Unknown;
    }

    public sealed class HennaListInfo
    {
        /// <summary>true = HennaEquipList (0xe2), false = HennaRemoveList (0xe5).</summary>
        public bool Equip;
        public int Adena;
        /// <summary>Tatuagens possiveis (equipar) ou slots livres (remover).</summary>
        public int Slots;
        public List<HennaEntry> Hennas = new List<HennaEntry>();
    }

    /// <summary>HennaItemInfo 0xe3 / HennaItemRemoveInfo 0xe6: a tatuagem e cada atributo agora (d) e depois (c).</summary>
    public sealed class HennaItemInfo
    {
        public bool Equip;
        public HennaEntry Henna = new HennaEntry();
        public int Adena;
        /// <summary>INT, STR, CON, MEN, DEX, WIT (ordem do pacote).</summary>
        public int[] Now = new int[6], Change = new int[6];
    }

    /// <summary>HennaInfo 0xe4: bonus somado de cada atributo, maximo de tatuagens e as tatuagens equipadas.</summary>
    public sealed class HennaInfo
    {
        /// <summary>INT, STR, CON, MEN, DEX, WIT.</summary>
        public int[] Stats = new int[6];
        public int MaxSize;
        /// <summary>Simbolo e se vale para a classe atual (o aCis repete o simbolo ou manda 0).</summary>
        public List<(int HennaId, bool Active)> Hennas = new List<(int, bool)>();
    }

    public static class SkillTrainPackets
    {
        public static readonly string[] HennaStats = { "INT", "STR", "CON", "MEN", "DEX", "WIT" };

        /// <summary>AcquireSkillList 0x8a: D tipo, D n, n x (D id, D proximo nivel, D nivel maximo, D sp, D requisitos).</summary>
        public static AcquireSkillListInfo ParseAcquireSkillList(PacketReader r)
        {
            var o = new AcquireSkillListInfo { Type = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Skills.Add(new AcquireSkill { Id = r.D(), Level = r.D(), MaxLevel = r.D(), SpCost = r.D(), Requirements = r.D() });
            return o;
        }

        /// <summary>AcquireSkillInfo 0x8b: D id, D nivel, D sp, D modo, D n, n x (D tipo, D item, D qtd, D 0).</summary>
        public static AcquireSkillInfoInfo ParseAcquireSkillInfo(PacketReader r)
        {
            var o = new AcquireSkillInfoInfo { Id = r.D(), Level = r.D(), SpCost = r.D(), Mode = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Requirements.Add(new AcquireSkillReq { Type = r.D(), ItemId = r.D(), Count = r.D(), Unknown = r.D() });
            return o;
        }

        static HennaEntry ReadHenna(PacketReader r) => new HennaEntry { HennaId = r.D(), DyeId = r.D(), Count = r.D(), Fee = r.D(), Unknown = r.D() };

        /// <summary>HennaEquipList 0xe2 / HennaRemoveList 0xe5: D adena, D slots, D n, n x "ddddd".</summary>
        public static HennaListInfo ParseHennaList(PacketReader r, bool equip)
        {
            var o = new HennaListInfo { Equip = equip, Adena = r.D(), Slots = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Hennas.Add(ReadHenna(r));
            return o;
        }

        public static HennaListInfo ParseHennaEquipList(PacketReader r) => ParseHennaList(r, true);
        public static HennaListInfo ParseHennaRemoveList(PacketReader r) => ParseHennaList(r, false);

        /// <summary>HennaItemInfo 0xe3 / HennaItemRemoveInfo 0xe6 "dddddd" + 6 x "dc".</summary>
        public static HennaItemInfo ParseHennaItemInfo(PacketReader r, bool equip)
        {
            var o = new HennaItemInfo { Equip = equip, Henna = ReadHenna(r), Adena = r.D() };
            for (var i = 0; i < 6; i++)
            {
                o.Now[i] = r.D();
                o.Change[i] = (sbyte)r.C();
            }
            return o;
        }

        public static HennaItemInfo ParseHennaItemEquipInfo(PacketReader r) => ParseHennaItemInfo(r, true);
        public static HennaItemInfo ParseHennaItemRemoveInfo(PacketReader r) => ParseHennaItemInfo(r, false);

        /// <summary>HennaInfo 0xe4: 6 x C bonus, D maximo, D n, n x (D simbolo, D simbolo se ativo / 0).</summary>
        public static HennaInfo ParseHennaInfo(PacketReader r)
        {
            var o = new HennaInfo();
            for (var i = 0; i < 6; i++) o.Stats[i] = (sbyte)r.C();
            o.MaxSize = r.D();
            var n = r.D();
            for (var i = 0; i < n; i++) o.Hennas.Add((r.D(), r.D() != 0));
            return o;
        }

        // ---------------------------------------------------------------- cliente -> servidor

        /// <summary>RequestAcquireSkillInfo 0x6b "ddd": skill, nivel, tipo (0 comum, 1 pesca, 2 cla).</summary>
        public static byte[] RequestAcquireSkillInfo(int skillId, int level, int type) => new PacketWriter().C(0x6b).D(skillId).D(level).D(type).Bytes();

        /// <summary>RequestAcquireSkill 0x6c "ddd": skill, nivel, tipo.</summary>
        public static byte[] RequestAcquireSkill(int skillId, int level, int type) => new PacketWriter().C(0x6c).D(skillId).D(level).D(type).Bytes();

        /// <summary>RequestHennaItemList 0xba "d" (RequestHennaList do aCis; o campo nao e usado).</summary>
        public static byte[] RequestHennaList() => new PacketWriter().C(0xba).D(1).Bytes();

        /// <summary>RequestHennaItemInfo 0xbb "d": simbolo.</summary>
        public static byte[] RequestHennaItemInfo(int hennaId) => new PacketWriter().C(0xbb).D(hennaId).Bytes();

        /// <summary>RequestHennaEquip 0xbc "d": simbolo.</summary>
        public static byte[] RequestHennaEquip(int hennaId) => new PacketWriter().C(0xbc).D(hennaId).Bytes();

        /// <summary>RequestHennaUnequipList 0xbd "d" (RequestHennaRemoveList do aCis; o campo nao e usado).</summary>
        public static byte[] RequestHennaRemoveList() => new PacketWriter().C(0xbd).D(1).Bytes();

        /// <summary>RequestHennaUnequipInfo 0xbe "d": simbolo.</summary>
        public static byte[] RequestHennaItemRemoveInfo(int hennaId) => new PacketWriter().C(0xbe).D(hennaId).Bytes();

        /// <summary>RequestHennaUnequip 0xbf "d": simbolo.</summary>
        public static byte[] RequestHennaRemove(int hennaId) => new PacketWriter().C(0xbf).D(hennaId).Bytes();
    }
}
