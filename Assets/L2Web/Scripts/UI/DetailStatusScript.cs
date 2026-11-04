// DetailStatusWnd.uc (HandleUpdateUserInfo :164-503, HandleUpdateHennaInfo :92-111, Update*Bar :505-608): os textos e as
// barras da aba Status da MainWnd, montados do UserInfo e do ultimo HennaInfo. A GameUi so aplica o que sai daqui.
using System;
using System.Collections.Generic;
using System.Globalization;
using L2Web.Net;

namespace L2Web.UI
{
    public static class DetailStatusScript
    {
        /// <summary>NSTATUS_SMALLBARSIZE e NSTATUS_BARHEIGHT (:3-4).</summary>
        public const int BarSize = 85, BarHeight = 12;

        /// <summary>Bonus da tatuagem por atributo (XXchange do EV_UpdateHennaInfo).</summary>
        public sealed class Henna
        {
            public int STR, DEX, CON, INT, WIT, MEN;

            /// <summary>HandleUpdateHennaInfo: ParseInt de cada XXchange (ausente = 0).</summary>
            public static Henna Parse(string param)
            {
                int G(string k)
                {
                    var v = 0;
                    L2Param.ParseInt(param ?? "", k + "change", ref v);
                    return v;
                }
                return new Henna { STR = G("STR"), DEX = G("DEX"), CON = G("CON"), INT = G("INT"), WIT = G("WIT"), MEN = G("MEN") };
            }
        }

        /// <summary>:398-480: "n(+c)" com bonus positivo, "n(c)" com negativo, so "n" sem bonus.</summary>
        public static string WithHenna(long value, int change) =>
            change > 0 ? $"{value}(+{change})" : change < 0 ? $"{value}({change})" : value.ToString(CultureInfo.InvariantCulture);

        /// <summary>:285-292: karma de 999999 ou mais ganha "+".</summary>
        public static string CriminalRate(long karma) => karma >= 999999 ? karma + "+" : karma.ToString(CultureInfo.InvariantCulture);

        /// <summary>
        /// GetMovingSpeed (:118-156): correndo (MVT_FAST) nGroundMaxSpeed, andando (MVT_SLOW) nGroundMinSpeed, vezes o
        /// fNonAttackSpeedModifier, truncado para int (atribuicao float -&gt; int do UnrealScript).
        /// </summary>
        public static int MovingSpeed(int runSpd, int walkSpd, double moveMul, bool running) => (int)((running ? runSpd : walkSpd) * moveMul);

        /// <summary>Update*Bar (:505-570): 0 sem maximo; cheia com valor &gt;= maximo; senao 85 * valor / maximo (inteiro).</summary>
        public static int Bar(long value, long max) => PetScript.BarSize(value, max, BarSize);

        /// <summary>UnrealScript float $ string: duas casas (txtExp e txtWeight, :349 e :353).</summary>
        public static string Float(double v) => (double.IsNaN(v) || double.IsInfinity(v) ? 0 : v).ToString("0.00", CultureInfo.InvariantCulture);

        /// <summary>
        /// GetUserRankString (UUIScript::execGetUserRankString nw:0x10100cf0 -&gt; FUN_1014a3b0): rank 0..8 do UserInfo
        /// (pledgeClass) = sysstring 1385, 1386, 1388..1394 (Vagabond, Vassal, Heir, Knight, Wise Man, Baron, Viscount, Count,
        /// Marquis); outro valor = "". Indice = (GL2GameData+off - 0x6A8DC) / 12.
        /// </summary>
        public static int RankSysString(long rank) => rank switch
        {
            0 => 1385,
            1 => 1386,
            >= 2 and <= 8 => 1386 + (int)rank,
            _ => -1,
        };

        /// <summary>:385-395: icone de heroi, senao de nobre, senao nada.</summary>
        public static string HeroTexture(bool hero, bool noble) =>
            hero ? "L2UI_CH3.PlayerStatusWnd.myinfo_heroicon" : noble ? "L2UI_CH3.PlayerStatusWnd.myinfo_nobleicon" : "";

        static long Stat(UserInfo u, string k) => u.Stats != null && u.Stats.TryGetValue(k, out var v) ? v : 0;

        /// <summary>
        /// Textos dos controles (nome do controle, texto) do HandleUpdateUserInfo, menos nome, titulo e cla (que dependem da
        /// largura do texto e da cor). `expPct` = GetMyExpRate (0..100).
        /// </summary>
        public static List<(string ctrl, string text)> Texts(UserInfo u, double expPct, Henna h, Func<int, string> sysString)
        {
            h ??= new Henna();
            sysString ??= _ => "";
            long load = Stat(u, "load"), maxLoad = Stat(u, "maxLoad");
            // :352 fTmp = 100 * CarringWeight / CarryWeight (float; sem maximo o porte mostra 0.00)
            var weight = maxLoad > 0 ? 100.0 * load / maxLoad : 0;
            // nUserRank so existe quando o net guarda o pledgeClass do UserInfo (pedido 0044, net)
            var rank = u.Stats != null && u.Stats.TryGetValue("pledgeClass", out var pc) ? RankSysString(pc) : -1;
            return new List<(string, string)>
            {
                ("txtLvName", $"{u.Level} {GameData.ClassName(u.ClassId)}"),
                ("txtRank", rank > 0 ? sysString(rank) : ""),
                ("txtHP", $"{u.Hp}/{u.MaxHp}"),
                ("txtMP", $"{u.Mp}/{u.MaxMp}"),
                ("txtExp", Float(expPct) + "%"),
                ("txtCP", $"{u.Cp}/{u.MaxCp}"),
                ("txtSP", Stat(u, "sp").ToString(CultureInfo.InvariantCulture)),
                ("txtWeight", Float(weight) + "%"),
                ("txtSTR", WithHenna(Stat(u, "STR"), h.STR)),
                ("txtDEX", WithHenna(Stat(u, "DEX"), h.DEX)),
                ("txtCON", WithHenna(Stat(u, "CON"), h.CON)),
                ("txtINT", WithHenna(Stat(u, "INT"), h.INT)),
                ("txtWIT", WithHenna(Stat(u, "WIT"), h.WIT)),
                ("txtMEN", WithHenna(Stat(u, "MEN"), h.MEN)),
                ("txtPhysicalAttack", Stat(u, "pAtk").ToString(CultureInfo.InvariantCulture)),
                ("txtPhysicalDefense", Stat(u, "pDef").ToString(CultureInfo.InvariantCulture)),
                ("txtHitRate", Stat(u, "accuracy").ToString(CultureInfo.InvariantCulture)),
                ("txtCriticalRate", Stat(u, "crit").ToString(CultureInfo.InvariantCulture)),
                ("txtPhysicalAttackSpeed", Stat(u, "pAtkSpd").ToString(CultureInfo.InvariantCulture)),
                ("txtMagicalAttack", Stat(u, "mAtk").ToString(CultureInfo.InvariantCulture)),
                ("txtMagicDefense", Stat(u, "mDef").ToString(CultureInfo.InvariantCulture)),
                ("txtPhysicalAvoid", Stat(u, "evasion").ToString(CultureInfo.InvariantCulture)),
                ("txtMovingSpeed", MovingSpeed(u.RunSpd, u.WalkSpd, u.MoveMul, u.Running).ToString(CultureInfo.InvariantCulture)),
                ("txtMagicCastingSpeed", Stat(u, "mAtkSpd").ToString(CultureInfo.InvariantCulture)),
                ("txtCriminalRate", CriminalRate(Stat(u, "karma"))),
                // :494 DualCount $ " / " $ PKCount (nDualCount = PvP, nPKCount = PK)
                ("txtPVP", $"{Stat(u, "pvp")} / {Stat(u, "pk")}"),
                // :495-496 nSociality = recomHave, nRemainSulffrage = recomLeft (UserInfo; pedido 0034 item 1)
                ("txtSociality", Stat(u, "recomHave").ToString(CultureInfo.InvariantCulture)),
                ("txtRemainSulffrage", Stat(u, "recomLeft").ToString(CultureInfo.InvariantCulture)),
            };
        }

        /// <summary>Larguras das barras (UpdateHPBar/MPBar/CPBar/EXPBar/WeightBar); o EXP usa int(fExpRate) de 100 (:501).</summary>
        public static List<(string tex, int width)> Bars(UserInfo u, double expPct) => new()
        {
            ("texHP", Bar(u.Hp, u.MaxHp)),
            ("texMP", Bar(u.Mp, u.MaxMp)),
            ("texCP", Bar(u.Cp, u.MaxCp)),
            ("texExp", Bar((int)expPct, 100)),
            ("texWeight", Bar(Stat(u, "load"), Stat(u, "maxLoad"))),
        };
    }
}
