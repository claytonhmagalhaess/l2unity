// MinimapWnd.uc / MinimapWnd_Expand.uc (03 §3): a parte de script do mapa, sem Unity (testavel). O desenho do mapa e do
// NCMinimapWnd nativo (MinimapCtrl).
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class MinimapScript
    {
        /// <summary>m_bExpandState: so em memoria (falso no OnLoad).</summary>
        public bool ExpandState;
        public int SsqStatus;
        public int PartyMemberCount;
        public int PartyLocIndex = -1;
        public bool AdjustCursedLoc;
        public bool NormalVisible, ExpandVisible;
        public Func<int, string> SysString = i => "";

        /// <summary>
        /// HandleShowMinimap: guarda o SSQStatus (SetSSQStatus so no controle da janela normal) e alterna a variante da sessao;
        /// devolve true quando uma das duas ficou visivel (pede a lista e a posicao das armas amaldicoadas).
        /// </summary>
        public bool ShowMinimap(string param)
        {
            var ssq = 0;
            if (L2Param.ParseInt(param, "SSQStatus", ref ssq)) SsqStatus = ssq;
            if (ExpandState)
            {
                if (ExpandVisible) ExpandVisible = false;
                else
                {
                    NormalVisible = false;
                    ExpandVisible = true;
                }
            }
            else
            {
                if (NormalVisible) NormalVisible = false;
                else
                {
                    ExpandVisible = false;
                    NormalVisible = true;
                }
            }
            return NormalVisible || ExpandVisible;
        }

        /// <summary>SetSSQTypeText: 0..3 -> sysstring 973..976 (outro valor: vazio).</summary>
        public string SsqText => SsqStatus >= 0 && SsqStatus <= 3 ? SysString(973 + SsqStatus) : "";

        /// <summary>HandleUpdateGameTime: "AM 12 : 00", "PM 03 : 07".</summary>
        public static string TimeText(int hour, int minute)
        {
            var s = hour >= 12 ? "PM " : "AM ";
            if (hour >= 12) hour -= 12;
            if (hour == 0) hour = 12;
            s += (hour < 10 ? "0" + hour : hour.ToString()) + " : ";
            return s + (minute < 10 ? "0" + minute : minute.ToString());
        }

        /// <summary>SelectSunOrMoon: sol de 6 a 24 h, lua de 0 a 5.</summary>
        public static bool Sun(int hour) => hour >= 6 && hour <= 24;

        /// <summary>OnClickPartyLocButton: proximo membro (indice modulo a contagem); -1 sem grupo.</summary>
        public int NextPartyLoc(int count)
        {
            PartyMemberCount = count;
            if (count == 0) return -1;
            PartyLocIndex = (PartyLocIndex + 1) % count;
            return PartyLocIndex;
        }

        /// <summary>
        /// HandleCursedWeaponList: item 0 = sysstring 1463 (reserved 0), depois cada arma (reserved = id). Na expandida
        /// (MinimapWnd_Expand.uc:413-422) o i == 0 tambem acrescenta um item vazio (ParseInt de "ID-1" falha).
        /// </summary>
        public List<(string text, int reserved)> CursedList(string param, bool expand)
        {
            var num = 0;
            L2Param.ParseInt(param, "NUM", ref num);
            var o = new List<(string, int)>();
            // locais do script: um ParseInt/ParseString que falha deixa o valor anterior
            int id = 0;
            var name = "";
            for (var i = 0; i < num + 1; i++)
            {
                if (i == 0)
                {
                    o.Add((SysString(1463), 0));
                    if (!expand) continue;
                }
                L2Param.ParseInt(param, "ID" + (i - 1), ref id);
                L2Param.ParseString(param, "NAME" + (i - 1), ref name);
                o.Add((name, id));
            }
            return o;
        }

        /// <summary>DrawCursedWeapon: 8190 -> cursedmapicon01, 8689 -> cursedmapicon02, caida com "_drop".</summary>
        public static string CursedIcon(int itemId, bool dropped)
        {
            var n = itemId == 8190 ? "L2UI_CH3.MiniMap.cursedmapicon01" : itemId == 8689 ? "L2UI_CH3.MiniMap.cursedmapicon02" : "";
            return dropped ? n + "_drop" : n;
        }
    }
}
