// Pacotes do pet e do servo (0xb0-0xb6, 0xd1, 0xee), base da HUD de pet (K5). Leitura igual a do handler do Engine.dll
// (Golden/packet_layouts.json); nomes dos campos pelas chaves dos eventos (spec 90/96) e pela struct PetInfo do script
// (spec 06: nFatigue, nCurExp/nMinExp/nMaxExp ...); os demais pelo aCis (C:\Workspace-java\aCis_gameserver).
// SummonType: 1 pet, 2 servo (Summon.getSummonType do aCis).
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class PetStatusShowInfo
    {
        public int SummonType;
    }

    public sealed class PetInfo
    {
        public int SummonType;
        public int ObjectId;
        /// <summary>Id do template do NPC (o pacote manda id + 1000000, como o NpcInfo).</summary>
        public int NpcId;
        public bool Attackable;
        public int X, Y, Z, Heading;
        public int MAtkSpd, PAtkSpd;
        /// <summary>Os 8 d de velocidade (corrida/caminhada em terra, agua, voo...): o aCis repete a mesma dupla.</summary>
        public int RunSpd, WalkSpd;
        public double MoveMul, AtkSpdMul;
        public double CollisionRadius, CollisionHeight;
        public int Weapon, Armor;
        public bool HasOwner, InCombat, AlikeDead;
        /// <summary>c "val" do aCis: 0 sem animacao, 1 aparecendo, 2 animacao de invocar.</summary>
        public int SummonAnimation;
        /// <summary>Vazio = sem nome: o engine manda EV_PetWndShowNameBtn{Show=1} (FUN_1042e430, vtable +0x4fc).</summary>
        public string Name;
        public string Title;
        public int PvpFlag, Karma;
        /// <summary>nFatigue/nMaxFatigue: comida do pet; no servo, tempo restante e total de vida.</summary>
        public int Fatigue, MaxFatigue;
        public int Hp, MaxHp, Mp, MaxMp;
        public int Sp, Level;
        /// <summary>nCurExp, nMinExp (inicio do nivel, 0%), nMaxExp (proximo nivel, 100%).</summary>
        public long CurExp, MinExp, MaxExp;
        /// <summary>Peso carregado (so pet) e carga maxima.</summary>
        public int CarringWeight, CarryWeight;
        public int PAtk, PDef, MAtk, MDef, Accuracy, Evasion, Critical;
        public int MoveSpeed;
        /// <summary>O 2o par de velocidades de ataque (repete MAtkSpd/PAtkSpd no aCis).</summary>
        public int PAtkSpeed, MAtkSpeed;
        public int AbnormalEffect;
        /// <summary>
        /// O aCis escreve "hchc" (montavel, agua 1/voo 2, 0, equipe) e o engine le os mesmos 6 bytes como "dcc": o d junta
        /// montavel (bits 0-15) e agua/voo (bits 16-23).
        /// </summary>
        public bool Mountable;
        public int MoveEnv;
        /// <summary>Aura da equipe do dono (1 azul, 2 vermelha).</summary>
        public int Team;
        public int SoulShotsPerHit, SpiritShotsPerHit;
    }

    public sealed class PetItemListInfo
    {
        public List<InvItem> Items = new List<InvItem>();
    }

    public sealed class PetInventoryUpdateInfo
    {
        /// <summary>Change de cada item = WorkType do EV_PetInventoryItemUpdate (1 adicionado, 2 modificado, 3 removido).</summary>
        public List<InvItem> Items = new List<InvItem>();
    }

    public sealed class PetStatusUpdateInfo
    {
        public int SummonType;
        public int ObjectId;
        public int X, Y, Z;
        public string Title;
        public int Fatigue, MaxFatigue;
        public int Hp, MaxHp, Mp, MaxMp;
        public int Level;
        public long CurExp, MinExp, MaxExp;
    }

    public sealed class PetDeleteInfo
    {
        public int SummonType;
        public int ObjectId;
    }

    public sealed class SummonRemainTimeInfo
    {
        /// <summary>Chaves do EV_SummonedStatusRemainTime. Unidade (s ou ms) a validar (spec 06).</summary>
        public int MaxTime, RemainTime;
    }

    public sealed class PartySpelledInfo
    {
        /// <summary>0 membro do grupo, 1 pet, 2 servo (aCis).</summary>
        public int Type;
        public int ObjectId;
        /// <summary>SkillID_i do EV_SummonedStatusSpelledList (Max = Count); Seconds ja vem em segundos.</summary>
        public List<AbnormalInfo> Effects = new List<AbnormalInfo>();
    }

    public static class PetPackets
    {
        /// <summary>PetStatusShow 0xb0 "d" (FUN_1040e9b0 -> OnShowPetStatusWnd).</summary>
        public static PetStatusShowInfo ParsePetStatusShow(PacketReader r) => new PetStatusShowInfo { SummonType = r.D() };

        /// <summary>PetInfo 0xb1 "dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd" (FUN_1042e430).</summary>
        public static PetInfo ParsePetInfo(PacketReader r)
        {
            var o = new PetInfo { SummonType = r.D(), ObjectId = r.D(), NpcId = r.D() - 1000000, Attackable = r.D() == 1 };
            o.X = r.D();
            o.Y = r.D();
            o.Z = r.D();
            o.Heading = r.D();
            r.D();
            o.MAtkSpd = r.D();
            o.PAtkSpd = r.D();
            o.RunSpd = r.D();
            o.WalkSpd = r.D();
            for (var i = 0; i < 6; i++) r.D(); // agua, voo e montaria (o aCis repete corrida/caminhada)
            o.MoveMul = r.F();
            o.AtkSpdMul = r.F();
            o.CollisionRadius = r.F();
            o.CollisionHeight = r.F();
            o.Weapon = r.D();
            o.Armor = r.D();
            r.D();
            o.HasOwner = r.C() == 1;
            r.C();
            o.InCombat = r.C() == 1;
            o.AlikeDead = r.C() == 1;
            o.SummonAnimation = r.C();
            o.Name = r.S();
            o.Title = r.S();
            r.D();
            o.PvpFlag = r.D();
            o.Karma = r.D();
            o.Fatigue = r.D();
            o.MaxFatigue = r.D();
            o.Hp = r.D();
            o.MaxHp = r.D();
            o.Mp = r.D();
            o.MaxMp = r.D();
            o.Sp = r.D();
            o.Level = r.D();
            o.CurExp = r.Q();
            o.MinExp = r.Q();
            o.MaxExp = r.Q();
            o.CarringWeight = r.D();
            o.CarryWeight = r.D();
            o.PAtk = r.D();
            o.PDef = r.D();
            o.MAtk = r.D();
            o.MDef = r.D();
            o.Accuracy = r.D();
            o.Evasion = r.D();
            o.Critical = r.D();
            o.MoveSpeed = r.D();
            o.PAtkSpeed = r.D();
            o.MAtkSpeed = r.D();
            o.AbnormalEffect = r.D();
            var env = r.D();
            o.Mountable = (env & 0xffff) != 0;
            o.MoveEnv = (env >> 16) & 0xff;
            r.C();
            o.Team = r.C();
            o.SoulShotsPerHit = r.D();
            o.SpiritShotsPerHit = r.D();
            return o;
        }

        /// <summary>Item do pet "h" + "dddhhhdhh" (sem aumento nem mana, ao contrario do ItemList 0x1b).</summary>
        static InvItem ReadPetItem(PacketReader r, int? change)
        {
            var it = new InvItem { Change = change, Type1 = r.H(), ObjectId = r.D(), ItemId = r.D(), Count = r.D(), Type2 = r.H() };
            it.CustomType1 = r.H();
            it.Equipped = r.H() != 0;
            it.BodyPart = r.D();
            it.Enchant = r.H();
            it.CustomType2 = r.H();
            return it;
        }

        /// <summary>PetItemList 0xb2: H n, n itens (FUN_1040ea00: EV_PetInventoryItemStart e um EV_PetInventoryItemList por item).</summary>
        public static PetItemListInfo ParsePetItemList(PacketReader r)
        {
            var o = new PetItemListInfo();
            var n = r.H();
            for (var i = 0; i < n; i++) o.Items.Add(ReadPetItem(r, null));
            return o;
        }

        /// <summary>PetInventoryUpdate 0xb3: H n, n x (H mudanca + item) (FUN_1040eb90).</summary>
        public static PetInventoryUpdateInfo ParsePetInventoryUpdate(PacketReader r)
        {
            var o = new PetInventoryUpdateInfo();
            var n = r.H();
            for (var i = 0; i < n; i++) o.Items.Add(ReadPetItem(r, r.H()));
            return o;
        }

        /// <summary>PetStatusUpdate 0xb5 "dddddSdddddddQQQ" (FUN_1040ed50 -> OnReceivePetStatusInfo, EV_UpdatePetInfo).</summary>
        public static PetStatusUpdateInfo ParsePetStatusUpdate(PacketReader r)
        {
            var o = new PetStatusUpdateInfo { SummonType = r.D(), ObjectId = r.D(), X = r.D(), Y = r.D(), Z = r.D(), Title = r.S() };
            o.Fatigue = r.D();
            o.MaxFatigue = r.D();
            o.Hp = r.D();
            o.MaxHp = r.D();
            o.Mp = r.D();
            o.MaxMp = r.D();
            o.Level = r.D();
            o.CurExp = r.Q();
            o.MinExp = r.Q();
            o.MaxExp = r.Q();
            return o;
        }

        /// <summary>PetDelete 0xb6 "dd" (FUN_1040f070 -> OnHidePetWnd(tipo), EV_PetSummonedStatusClose).</summary>
        public static PetDeleteInfo ParsePetDelete(PacketReader r) => new PetDeleteInfo { SummonType = r.D(), ObjectId = r.D() };

        /// <summary>SetSummonRemainTime 0xd1 "dd": maximo, restante (FUN_10418630 -> OnSetSummonRemainTime(restante, maximo)).</summary>
        public static SummonRemainTimeInfo ParseSetSummonRemainTime(PacketReader r) => new SummonRemainTimeInfo { MaxTime = r.D(), RemainTime = r.D() };

        /// <summary>PartySpelled 0xee "ddd", n x "dhd" (skill, nivel com sinal, segundos) (FUN_1041a410 -> console +0x204).</summary>
        public static PartySpelledInfo ParsePartySpelled(PacketReader r)
        {
            var o = new PartySpelledInfo { Type = r.D(), ObjectId = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Effects.Add(new AbnormalInfo { SkillId = r.D(), Level = r.H(), Seconds = r.D() });
            return o;
        }
    }
}
