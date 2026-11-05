// TargetStatusWnd (K2 da matriz, spec 06 §2.2): o que o HandleTargetUpdate do TargetStatusWnd.uc decide para o alvo.
//   Cor do nome: UUIDATA_TARGET::execGetTargetNameColor (NWindow 0x1012a950) com o LevelDiff do EV_ReceiveTargetLevelDiff
//     (MyTargetSelected 0xa6; aCis: nivel do jogador - nivel do alvo).
//   Rank do PC: GetUserRankString (FUN_1014a3b0) = sysstring pela classe no cla.
// TargetStatusTests confere com Golden/target_status.json (gerado do pseudocodigo e do .uc).
using System;

namespace L2Web.UI
{
    public static class TargetStatus
    {
        /// <summary>execGetTargetNameColor: ARGB.</summary>
        public static uint NameColor(int levelDiff)
        {
            if (levelDiff < -8) return 0xffff0000;
            if (levelDiff < -5) return 0xffff9191;
            if (levelDiff < -2) return 0xfffafe91;
            if (levelDiff < 3) return 0xffdcdcdc;
            if (levelDiff < 6) return 0xffa2ffab;
            return levelDiff > 8 ? 0xff0000ffu : 0xffa2a8fc;
        }

        /// <summary>FUN_1014a3b0: classe no cla 0..8 -> sysstring (a 1387 "Apprentice" nao entra); outra = vazio.</summary>
        public static readonly int[] RankSysString = { 1385, 1386, 1388, 1389, 1390, 1391, 1392, 1393, 1394 };

        /// <summary>IsAllWhiteID / IsNoBarID do TargetStatusWnd.uc (monstros de evento).</summary>
        public static readonly int[] AllWhite = { 12778, 13031, 13032, 13033, 13034, 13035, 13036 };
        public static readonly int[] NoBar = { 13036 };

        public struct View
        {
            public string Name;
            /// <summary>Cor ARGB do SetNameWithColor; null = SetName (cor padrao do NameCtrl).</summary>
            public uint? Color;
            public string Rank;
            public bool Hp, Mp;
        }

        /// <summary>
        /// HandleTargetUpdate (TargetStatusWnd.uc:221-295) sem os ramos de objeto do servidor (porta) e de membro de party
        /// distante (nome vazio). `classId` = id do NPC; `rankText` resolve o sysstring.
        /// </summary>
        public static View Compute(bool isNpc, bool isPet, bool canBeAttacked, bool isSelf, bool isOwnPet, int classId, string name,
            int pledgeClass, int levelDiff, Func<int, string> rankText)
        {
            var v = new View { Name = name ?? "", Rank = "" };
            var mob = isNpc && !isPet && canBeAttacked;
            if (mob || isSelf || (isNpc && isPet && isOwnPet))
            {
                if (Array.IndexOf(AllWhite, classId) >= 0)
                {
                    v.Hp = Array.IndexOf(NoBar, classId) < 0;
                }
                else
                {
                    v.Color = NameColor(levelDiff);
                    v.Hp = true;
                    v.Mp = !mob;
                }
            }
            else if (!isNpc)
            {
                v.Rank = pledgeClass >= 0 && pledgeClass < RankSysString.Length ? rankText(RankSysString[pledgeClass]) : "";
            }
            return v;
        }
    }
}
