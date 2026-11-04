// OnScreenMessageWnd.uc (spec 02 §3.9, #0040): as 8 posicoes OnScreenMessageWnd1..8, uma mensagem por vez, fade-in e fade-out
// por tick com o "droprate" da animacao, o tempo de vida pelo timer da Wnd1 (m_TimerCount) e as mensagens do sistema com
// janela de tela (systemmsg-e: windowType, fontType, lifeTime, animationType, backgroundType, onScreenMsg).
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class OnScreenMessageScript
    {
        public int Current;
        public bool FadingIn, FadingOut;
        public int Alpha1, Alpha2 = 255, DropRate, Duration, TimerCount;
        /// <summary>Alfa da janela atual (SetAlpha).</summary>
        public int Alpha;
        public bool Big, Background;
        public string Line1 = "", Line2 = "";
        public Color32 Color = new(255, 255, 255, 255);
        /// <summary>Timers da Wnd1 que faltam disparar (momento em ms).</summary>
        public readonly List<double> Timers = new();

        /// <summary>ResetAllMessage: esconde as 8, volta a cor e os alfas.</summary>
        public void Reset()
        {
            Alpha1 = 0;
            Alpha2 = 255;
            Current = 0;
            FadingIn = FadingOut = false;
            Color = new Color32(255, 255, 255, 255);
        }

        /// <summary>
        /// ShowMsg: tira os "`", quebra a linha no primeiro "#" (os seguintes so somem), FontType 0 = caixas grandes com sombra
        /// e 1 = as "sm"; BackgroundType 1 so vale na Wnd2; droprate 0 = 255, 1 = 25, 11 = 15, 12 = 25, 13 = 35 (outro tipo
        /// fica com o droprate anterior).
        /// </summary>
        public void Show(int wnd, string text, int duration, int animation, int font, int background, int r, int g, int b)
        {
            var l1 = new System.Text.StringBuilder();
            var l2 = new System.Text.StringBuilder();
            var second = false;
            foreach (var c in text ?? "")
            {
                if (c == '`') continue;
                if (c == '#')
                {
                    second = true;
                    continue;
                }
                (second ? l2 : l1).Append(c);
            }
            Line1 = l1.ToString();
            Line2 = l2.ToString();
            Color = new Color32((byte)r, (byte)g, (byte)b, 255);
            Current = wnd;
            Big = font == 0;
            Background = wnd == 2 && background == 1;
            FadingIn = true;
            FadingOut = false;
            Duration = duration;
            DropRate = animation switch { 0 => 255, 1 => 25, 11 => 15, 12 => 25, 13 => 35, _ => DropRate };
        }

        /// <summary>OnTick: o fade-in sobe ate 255 e arma o timer; o fade-out desce ate 0 e limpa tudo.</summary>
        public void Tick(double nowMs)
        {
            if (FadingIn)
            {
                Alpha1 += DropRate;
                if (Alpha1 < 255) Alpha = Alpha1;
                else
                {
                    Alpha = 255;
                    Alpha1 = 0;
                    FadingIn = false;
                    TimerCount++;
                    Timers.Add(nowMs + Duration);
                }
            }
            if (FadingOut)
            {
                Alpha2 -= DropRate;
                if (Alpha2 > 1) Alpha = Alpha2;
                else
                {
                    Alpha = 0;
                    Alpha2 = 255;
                    FadingOut = false;
                    Reset();
                }
            }
            for (var i = Timers.Count - 1; i >= 0; i--)
            {
                if (Timers[i] > nowMs) continue;
                Timers.RemoveAt(i);
                // OnTimer: cada timer tira um da conta; a conta zerada comeca o fade-out
                if (TimerCount <= 0) continue;
                TimerCount--;
                if (TimerCount < 1)
                {
                    TimerCount = 0;
                    FadingOut = true;
                }
            }
        }

        /// <summary>EV_ShowScreenMessage: MsgType 1 = Msg; 0 = GetSystemMessage(MsgNo); cor MsgColorR/G/B (255 sem a chave).</summary>
        public void Event(string p, Func<int, string> sysMsg)
        {
            int type = 0, no = 0, wnd = 0, font = 0, bg = 0, life = 0, anim = 0, r = 255, g = 255, b = 255;
            var msg = "";
            L2Param.ParseInt(p, "MsgType", ref type);
            L2Param.ParseInt(p, "MsgNo", ref no);
            L2Param.ParseInt(p, "WindowType", ref wnd);
            L2Param.ParseInt(p, "FontType", ref font);
            if (!L2Param.ParseInt(p, "MsgColorR", ref r)) r = 255;
            if (!L2Param.ParseInt(p, "MsgColorG", ref g)) g = 255;
            if (!L2Param.ParseInt(p, "MsgColorB", ref b)) b = 255;
            L2Param.ParseInt(p, "BackgroundType", ref bg);
            L2Param.ParseInt(p, "LifeTime", ref life);
            L2Param.ParseInt(p, "AnimationType", ref anim);
            L2Param.ParseString(p, "Msg", ref msg);
            Reset();
            if (type == 1) Show(wnd, msg, life, anim, font, bg, r, g, b);
            else if (type == 0) Show(wnd, sysMsg(no), life, anim, font, bg, r, g, b);
        }

        /// <summary>
        /// ValidateSystemMsg: so com windowType != 0; texto = onScreenMsg com os parametros (o nativo so manda o Index, entao
        /// vazios); tempo em s x 1000; cor do systemmsg, com 0/0/0 e 176/155/121 trocadas por branco. Nao chama o
        /// ResetAllMessage antes.
        /// </summary>
        public void SystemMessage(SystemMsgRecord rec, Func<string, string> fill)
        {
            if (rec?.Ints == null || rec.Ints.Length < 5 || rec.Ints[0] == 0) return;
            byte cr = 255, cg = 255, cb = 255;
            if (rec.Color != null)
            {
                cb = rec.Color[0];
                cg = rec.Color[1];
                cr = rec.Color[2];
            }
            if ((cr == 0 && cg == 0 && cb == 0) || (cr == 176 && cg == 155 && cb == 121)) cr = cg = cb = 255;
            Show(rec.Ints[0], fill(rec.Script ?? ""), rec.Ints[2] * 1000, rec.Ints[3], rec.Ints[1], rec.Ints[4], cr, cg, cb);
        }
    }

    public sealed class OnScreenMessageView
    {
        public readonly L2Wnd[] Wnds = new L2Wnd[9];
        public readonly OnScreenMessageScript S = new();
        double now;

        public OnScreenMessageView(L2Layer layer)
        {
            for (var i = 1; i <= 8; i++)
                Wnds[i] = new L2Wnd("OnScreenMessageWnd" + i, layer, new WndOpts { AriaLabel = "Mensagem", Movable = false });
            UiRoot.Box("OnScreenMessageTicker", layer.El, 0, 0, 0, 0).gameObject.AddComponent<UiTicker>().OnTick = dt =>
            {
                now += dt * 1000;
                var before = S.Current;
                S.Tick(now);
                if (before != 0 || S.Current != 0) Render();
            };
            L2Events.Register(Ev.EV_ShowScreenMessage, p =>
            {
                S.Event(p, no => GameData.SystemMessage(no, new List<string>()).Text);
                Render();
            });
            L2Events.Register(Ev.EV_SystemMessage, p =>
            {
                var index = 0;
                L2Param.ParseInt(p, "Index", ref index);
                var rec = GameData.SystemMessage(index, new List<string>()).Record;
                // MakeFullSystemMsg(onScreenMsg, "", ""): os $sN ficam vazios
                S.SystemMessage(rec, t => System.Text.RegularExpressions.Regex.Replace(t, @"\$s(\d+)", ""));
                Render();
            });
        }

        /// <summary>Mostra so a janela atual com os textos da fonte escolhida, a cor e o alfa.</summary>
        public void Render()
        {
            for (var i = 1; i <= 8; i++)
            {
                var w = Wnds[i];
                if (i != S.Current)
                {
                    if (w.Visible) w.Hide();
                    continue;
                }
                if (!w.Visible) w.Show();
                var big = S.Big;
                w.Text("TextBox" + i, big ? S.Line1 : "");
                w.Text("TextBox" + i + "-0", big ? S.Line1 : "");
                w.Text("TextBox" + i + "-1", big ? S.Line2 : "");
                w.Text("TextBox" + i + "-1-0", big ? S.Line2 : "");
                w.Text("TextBoxsm" + i, big ? "" : S.Line1);
                w.Text("TextBoxsm" + i + "-1", big ? "" : S.Line2);
                foreach (var n in new[] { "TextBox" + i, "TextBox" + i + "-1", "TextBoxsm" + i, "TextBoxsm" + i + "-1" })
                {
                    var t = w.TextEl(n);
                    if (!t) continue;
                    t.color = S.Color;
                    // [I] a fonte grande do nativo nao foi lida: 22 nas caixas grandes
                    if (big && !n.Contains("sm")) t.fontSize = 22;
                }
                foreach (var n in new[] { "TextBox" + i + "-0", "TextBox" + i + "-1-0" })
                {
                    var t = w.TextEl(n);
                    if (t && big) t.fontSize = 22;
                }
                if (i == 2) w.ShowCtrl("texturetype1", S.Background);
                var cg = w.El.TryGetComponent<CanvasGroup>(out var g) ? g : w.El.gameObject.AddComponent<CanvasGroup>();
                cg.alpha = S.Alpha / 255f;
                cg.blocksRaycasts = false;
            }
        }
    }
}
