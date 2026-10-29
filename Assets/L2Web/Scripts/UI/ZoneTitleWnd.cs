// ZoneTitleWnd (03 §2.5/§3.11): ZoneTitleWnd.uc. O evento EV_BeginShowZoneTitleWnd so vem do NConsoleWnd::ShowZoneTitle
// (FUN_10151600) com Game.ShowZoneTitle ligado e no GAMINGSTATE.
using System.Threading.Tasks;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class ZoneTitleView
    {
        const int StartZoneNameX = 100, StartZoneNameY = 80, TimerDelay = 4000;
        public readonly L2Wnd Wnd;
        int shown;

        public ZoneTitleView(L2Layer layer)
        {
            Wnd = new L2Wnd("ZoneTitleWnd", layer, new WndOpts { Movable = false, AriaLabel = "Zona" });
            L2Events.Register(Ev.EV_BeginShowZoneTitleWnd, OnEvent);
        }

        /// <summary>
        /// NConsoleWnd::ShowZoneTitle: le Game.ShowZoneTitle (padrao 1) e, no jogo, manda o evento com ZoneName, SubZoneName1 e
        /// SubZoneName2 (so os que vieram).
        /// </summary>
        public static void Request(string[] parts)
        {
            if (!L2Options.GetBool("Game", "ShowZoneTitle", true)) return;
            var p = "";
            string[] keys = { "ZoneName", "SubZoneName1", "SubZoneName2" };
            for (var i = 0; i < parts.Length && i < 3; i++) p = L2Param.Add(p, keys[i], parts[i]);
            L2Events.Dispatch(new PacketEvents.Event(Ev.EV_BeginShowZoneTitleWnd, p));
        }

        void OnEvent(string param)
        {
            var name = "";
            L2Param.ParseString(param, "ZoneName", ref name);
            Wnd.Text("textZoneNameBack", name);
            Wnd.Text("textZoneNameFront", name);
            // GetZoneNameTextSize: [?] a fonte do nome da zona; a do TextBox serve de medida
            var t = Wnd.TextEl("textZoneNameFront");
            var w = t ? Mathf.RoundToInt(t.preferredWidth) : name.Length * 12;
            var scr = UiRoot.Size;
            Wnd.SetWindowSize(w + StartZoneNameX, 200);
            Wnd.Moved = new Vector2(Mathf.Floor(scr.x / 2) - w / 2 - StartZoneNameX, Mathf.Floor(scr.y / 5) - StartZoneNameY);
            Wnd.Show();
            HideLater(++shown).Forget();
        }

        async Task HideLater(int n)
        {
            await Task.Delay(TimerDelay);
            // SetUITimer de novo reinicia o tempo: so o ultimo pedido esconde
            if (n == shown) Wnd.Hide();
        }
    }
}
