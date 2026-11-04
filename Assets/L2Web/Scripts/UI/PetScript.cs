// PetStatusWnd.uc, SummonedStatusWnd.uc, PetWnd.uc e SummonedWnd.uc (spec 06 §5-6, #0031) sem Unity: o GetPetInfo montado do
// PetInfo e do PetStatusUpdate, as barras (85/206/125 px), a textura do peso, o inventario do pet (WorkType, pelo classID),
// dar item do inventario (NumberPad sm72 ou Alt), o nome (sm535, falha reabre), a lista de acoes (pet = 4, servo = 5) e a
// grade de buffs (10 por linha, nivel 1).
using System;
using System.Collections.Generic;
using System.Globalization;
using L2Web.Net;

namespace L2Web.UI
{
    public sealed class PetScript
    {
        public const int DialogPetName = 1111, DialogGiveItemToPet = 2222;
        public const int SmallBar = 85, LargeBar = 206, SummonedBar = 125, BarHeight = 12;
        public const int BuffCols = 10;
        public const string EquippedTexture = "l2ui_ch3.PetWnd.petitem_click";
        /// <summary>GetIsPetOrSummoned: 2 pet, 1 servo (o SummonType do PetInfo do aCis).</summary>
        public const int Pet = 2, Summoned = 1;
        /// <summary>EActionCategory.</summary>
        public const int ActionPet = 4, ActionSummon = 5;

        /// <summary>PetInfo do script (o que o GetPetInfo devolve); null sem invocado.</summary>
        public sealed class Info
        {
            public int Id, Type, NpcId, Level, Sp;
            public string Name = "";
            public int Hp, MaxHp, Mp, MaxMp, Fatigue, MaxFatigue, CarringWeight, CarryWeight;
            public long CurExp, MinExp, MaxExp;
            public int PAtk, PDef, Accuracy, Critical, PAtkSpeed, MAtk, MDef, Evasion, MoveSpeed, MAtkSpeed, SoulShots, SpiritShots;
        }

        public Info Data;
        PetInfo lastInfo;
        PetStatusUpdateInfo lastStatus;

        /// <summary>
        /// Monta o GetPetInfo: o PetInfo (0xb1) quando ele muda; o PetStatusUpdate (0xb5) por cima quando ele muda e e do mesmo
        /// invocado. Sem PetInfo (PetDelete), null.
        /// </summary>
        public Info Refresh(PetInfo p, PetStatusUpdateInfo s)
        {
            if (p == null)
            {
                Data = null;
                lastInfo = null;
                lastStatus = s;
                return null;
            }
            if (!ReferenceEquals(p, lastInfo) || Data == null)
            {
                lastInfo = p;
                Data = new Info
                {
                    Id = p.ObjectId, Type = p.SummonType, NpcId = p.NpcId, Level = p.Level, Sp = p.Sp, Name = p.Name ?? "",
                    Hp = p.Hp, MaxHp = p.MaxHp, Mp = p.Mp, MaxMp = p.MaxMp, Fatigue = p.Fatigue, MaxFatigue = p.MaxFatigue,
                    CarringWeight = p.CarringWeight, CarryWeight = p.CarryWeight, CurExp = p.CurExp, MinExp = p.MinExp, MaxExp = p.MaxExp,
                    PAtk = p.PAtk, PDef = p.PDef, Accuracy = p.Accuracy, Critical = p.Critical, PAtkSpeed = p.PAtkSpeed, MAtk = p.MAtk,
                    MDef = p.MDef, Evasion = p.Evasion, MoveSpeed = p.MoveSpeed, MAtkSpeed = p.MAtkSpeed, SoulShots = p.SoulShotsPerHit,
                    SpiritShots = p.SpiritShotsPerHit,
                };
                lastStatus = s;
            }
            else if (s != null && !ReferenceEquals(s, lastStatus))
            {
                lastStatus = s;
                if (s.ObjectId == Data.Id)
                {
                    Data.Hp = s.Hp;
                    Data.MaxHp = s.MaxHp;
                    Data.Mp = s.Mp;
                    Data.MaxMp = s.MaxMp;
                    Data.Fatigue = s.Fatigue;
                    Data.MaxFatigue = s.MaxFatigue;
                    Data.Level = s.Level;
                    Data.CurExp = s.CurExp;
                    Data.MinExp = s.MinExp;
                    Data.MaxExp = s.MaxExp;
                }
            }
            return Data;
        }

        /// <summary>OnShow das barrinhas: fica aberta so com invocado do proprio tipo (GetPetID &gt;= 0, GetIsPetOrSummoned).</summary>
        public bool StatusKeeps(int type) => Data != null && Data.Id >= 0 && Data.Type == type;

        /// <summary>UpdateHPBar/MPBar/...: 0 sem maximo; cheia se cur &gt;= max; senao size*cur/max (inteiro).</summary>
        public static int BarSize(long value, long max, int size)
        {
            if (max <= 0) return 0;
            return value < max ? (int)(size * value / max) : size;
        }

        /// <summary>UpdateWeightBar: ps_weightbar1 ate 50%, 2 ate 66.66, 3 ate 80, 4 acima; vazio sem maximo.</summary>
        public static string WeightTexture(int value, int max)
        {
            if (max <= 0) return "";
            var f = 100f * value / max;
            var n = f <= 50f ? 1 : f <= 66.66f ? 2 : f <= 80f ? 3 : 4;
            return "L2UI_CH3.PlayerStatusWnd.ps_weightbar" + n;
        }

        /// <summary>GetPetEXPRate [I]: percentual (0..100) entre o EXP do nivel e o do proximo.</summary>
        public static double ExpRate(long cur, long min, long max) => max > min ? Math.Max(0, Math.Min(100, 100.0 * (cur - min) / (max - min))) : 0;

        /// <summary>float $ "%" [A validar]: duas casas, como o EXP do DetailStatusWnd no porte.</summary>
        public static string Pct(double v) => (double.IsNaN(v) || double.IsInfinity(v) ? 0 : v).ToString("0.00", CultureInfo.InvariantCulture) + "%";

        /// <summary>Textos do HandlePetInfoUpdate (nome do controle, texto); o SummonedWnd usa so os do servo.</summary>
        public static List<(string ctrl, string text)> Texts(Info i, bool pet)
        {
            i ??= new Info();
            var o = new List<(string, string)>
            {
                ("txtLvName", i.Level + " " + i.Name), ("txtHP", i.Hp + "/" + i.MaxHp), ("txtMP", i.Mp + "/" + i.MaxMp),
                ("txtPhysicalAttack", i.PAtk.ToString()), ("txtPhysicalDefense", i.PDef.ToString()), ("txtHitRate", i.Accuracy.ToString()),
                ("txtCriticalRate", i.Critical.ToString()), ("txtPhysicalAttackSpeed", i.PAtkSpeed.ToString()), ("txtMagicalAttack", i.MAtk.ToString()),
                ("txtMagicDefense", i.MDef.ToString()), ("txtPhysicalAvoid", i.Evasion.ToString()), ("txtMovingSpeed", i.MoveSpeed.ToString()),
                ("txtMagicCastingSpeed", i.MAtkSpeed.ToString()), ("txtSoulShotCosume", i.SoulShots.ToString()), ("txtSpiritShotConsume", i.SpiritShots.ToString()),
            };
            if (pet)
            {
                o.Add(("txtSP", i.Sp.ToString()));
                o.Add(("txtExp", Pct(ExpRate(i.CurExp, i.MinExp, i.MaxExp))));
                // 100 * Fatigue / MaxFatigue e 100 * Carring / Carry, sem protecao contra 0 no script (fica 0 aqui)
                o.Add(("txtFatigue", Pct(i.MaxFatigue > 0 ? 100.0 * i.Fatigue / i.MaxFatigue : 0)));
                o.Add(("txtWeight", Pct(i.CarryWeight > 0 ? 100.0 * i.CarringWeight / i.CarryWeight : 0)));
            }
            return o;
        }

        /// <summary>Larguras das barras (textura, largura); o servo so tem HP e MP de 125.</summary>
        public static List<(string tex, int w)> Bars(Info i, bool pet)
        {
            i ??= new Info();
            var small = pet ? SmallBar : SummonedBar;
            var o = new List<(string, int)> { ("texHP", BarSize(i.Hp, i.MaxHp, small)), ("texMP", BarSize(i.Mp, i.MaxMp, small)) };
            if (pet)
            {
                o.Add(("texExp", BarSize((int)ExpRate(i.CurExp, i.MinExp, i.MaxExp), 100, LargeBar)));
                o.Add(("texFatigue", BarSize(i.Fatigue, i.MaxFatigue, LargeBar)));
                o.Add(("texWeight", BarSize(i.CarringWeight, i.CarryWeight, SmallBar)));
            }
            return o;
        }

        // ------------------------------------------------------------ inventario do pet
        public readonly List<ListItem> Items = new();

        /// <summary>EV_PetInventoryItemStart: limpa.</summary>
        public void ItemsStart() => Items.Clear();

        /// <summary>EV_PetInventoryItemList: adiciona.</summary>
        public void ItemsAdd(ListItem i) => Items.Add(i);

        /// <summary>EV_PetInventoryItemUpdate: classID &lt; 1 ignora; 1 adiciona, 2 troca e 3 apaga o primeiro com o classID.</summary>
        public void ItemsUpdate(int workType, ListItem i)
        {
            if (i.ClassId < 1) return;
            var k = Lists.FindClass(Items, i.ClassId);
            switch (workType)
            {
                case 1:
                    Items.Add(i);
                    break;
                case 2:
                    if (k >= 0) Items[k] = i;
                    break;
                case 3:
                    if (k >= 0) Items.RemoveAt(k);
                    break;
            }
        }

        public sealed class Ask
        {
            public int DlgId, ServerId;
            public long ParamInt;
            public string Name = "";
        }

        /// <summary>
        /// OnDropItem("PetInvenWnd", vindo do InventoryItem): empilhavel com mais de 1 pede o numero (sem DefaultOK) ou vai tudo
        /// com Alt; senao vai 1. Devolve o pedido (serverID, quantidade) ou o dialogo.
        /// </summary>
        public static ((int serverId, int count)? give, Ask ask) Give(InventoryScript.Item i)
        {
            if (i == null || i.Src != "InventoryItem") return (null, null);
            if (L2Tooltip.IsStackable(i.ConsumeType) && i.ItemNum > 1)
            {
                if (i.AllItemCount > 0) return ((i.ServerId, (int)i.AllItemCount), null);
                return (null, new Ask { DlgId = DialogGiveItemToPet, ServerId = i.ServerId, ParamInt = i.ItemNum, Name = i.Name });
            }
            return ((i.ServerId, 1), null);
        }

        // ------------------------------------------------------------ nome
        public bool ShowNameBtn = true;
        public string LastInputPetName = "";

        /// <summary>HandleDialogOK do nome: guarda o texto (para o MsgNo 80) e devolve o nome do RequestChangePetName.</summary>
        public string NameOk(string text)
        {
            LastInputPetName = text ?? "";
            return LastInputPetName;
        }

        /// <summary>EV_PetWndRegPetNameFailed: o texto a repor no dialogo reaberto (so no MsgNo 80, nome longo), ou null.</summary>
        public string NameFailedRestore(int msgNo) => msgNo == 80 ? LastInputPetName : null;

        // ------------------------------------------------------------ acoes
        /// <summary>
        /// RequestPetActionList / RequestSummonedActionList [I]: as acoes do actionname-e da categoria (4 pet, 5 servo) que valem
        /// para o NPC do invocado (-2 na lista = qualquer um).
        /// </summary>
        public static List<int> ActionList(IEnumerable<L2TooltipData.ActionName> all, int category, int npcId)
        {
            var o = new List<int>();
            foreach (var a in all)
            {
                if (a.Category != category) continue;
                if (a.Npcs.Length == 0 || Array.IndexOf(a.Npcs, -2) >= 0 || Array.IndexOf(a.Npcs, npcId) >= 0) o.Add(a.Id);
            }
            return o;
        }

        // ------------------------------------------------------------ barrinhas: buffs e clique
        /// <summary>m_bBuff de cada barrinha (o btnBuff alterna; EV_ShowBuffIcon Show == 1 liga; OnEnterState desliga).</summary>
        public bool PetBuff, SummonedBuff;

        /// <summary>EV_*StatusSpelledList (Max, SkillID_i): os ids &gt; 0 em linhas de 10 (coluna, linha).</summary>
        public static List<(int skillId, int col, int row)> BuffGrid(string param)
        {
            var o = new List<(int, int, int)>();
            var max = 0;
            L2Param.ParseInt(param, "Max", ref max);
            var n = 0;
            for (var i = 0; i < max; i++)
            {
                var id = 0;
                L2Param.ParseInt(param, "SkillID_" + i, ref id);
                if (id <= 0) continue;
                o.Add((id, n % BuffCols, n / BuffCols));
                n++;
            }
            return o;
        }

        // ------------------------------------------------------------ tempo do servo (progFATIGUE)
        public bool SummonedStarted;
        public double RemainMs, MaxMs;

        /// <summary>
        /// EV_SummonedStatusRemainTime: na 1a vez limpa os buffs (true), SetProgressTime(MaxTime) e Start; depois SetPos(RemainTime).
        /// [I] valores em ms (o aCis manda o tempo de vida do servo em ms).
        /// </summary>
        public bool RemainTime(int remain, int max)
        {
            if (SummonedStarted)
            {
                RemainMs = remain;
                return false;
            }
            MaxMs = max;
            RemainMs = max;
            SummonedStarted = true;
            return true;
        }

        /// <summary>InitFATIGUEBar: Stop + Reset.</summary>
        public void ResetRemain()
        {
            SummonedStarted = false;
            RemainMs = MaxMs = 0;
        }
    }
}
