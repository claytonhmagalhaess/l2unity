// Painel do personagem escolhido: NCPawnSelectWnd (256x108 em (24, 27)) como o OnPaint nativo (0x1017e280, estudo em
// lobby_ui_re / 89): select1_back 1:1 (traz os rotulos HP/MP/SP/Exp e as caixas), "Name" / "Lv" em #a3a3a3, "Karma" em
// #dcdcdc, barras ps_hpbar/ps_mpbar/ps_expbar esticadas (UV 8x12) com largura inteira, numeros de HP/MP e o "%.2f%" da EXP em
// L2UI.NWindow.Number (8x8), SP e Karma em #b09b79 alinhados a direita em x 236. Golden/pawn_select.json.
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>As contas do OnPaint, sem Unity.</summary>
    public static class PawnSelectModel
    {
        /// <summary>EXP acumulada por nivel: int64 em 0x1028b320 + 8*L no NWindow.dll (T[1] = 0, T[2] = 68 ...; Golden/pawn_select.json).</summary>
        public static readonly long[] Exp =
        {
            100, 0, 68, 363, 1168, 2884, 6038, 11287, 19423, 31378, 48229, 71202, 101677, 141193, 191454, 254330, 331867,
            426288, 540000, 675596, 835862, 1023784, 1242546, 1495543, 1786379, 2118876, 2497077, 2925250, 3407897, 3949754,
            4555796, 5231246, 5981576, 6812513, 7730044, 8740422, 9850166, 11066072, 12395215, 13844951, 15422929, 17137087,
            18995665, 21007203, 23180550, 25524868, 28049635, 30764654, 33680052, 36806289, 40154162, 45525133, 51262490,
            57383988, 63907911, 70853089, 80700831, 91162654, 102265881, 114038596, 126509653, 146308200, 167244337, 189364894,
            212717908, 237352644, 271975263, 308443198, 346827154, 387199547, 429634523, 474207979, 532694979, 606322775,
            696381369, 804225364, 931275828, 1151275834, 1511275834, 2099275834, 4200000000, 6300000000, 10500000000,
            16800000000, 27300000000, 44100000000, 71400000000, 115500000000, 186900000000, 302400000000,
        };

        public const double ExpBarMax = 206.0;

        static long T(int lv) => lv >= 0 && lv < Exp.Length ? Exp[lv] : 0;

        /// <summary>HP/MP: cur * 85 / max (divisao inteira); 0 com max 0.</summary>
        public static int Gauge(int cur, int max, int width = 85) => max != 0 ? (int)((long)cur * width / max) : 0;

        /// <summary>EXP: _ftol((exp - T[lv]) * 206.0 / (T[lv+1] - T[lv])); 0 sem T[lv+1].</summary>
        public static int ExpGauge(int lv, long exp)
        {
            var next = T(lv + 1);
            if (next == 0) return 0;
            return (int)((exp - T(lv)) * ExpBarMax / (next - T(lv)));
        }

        /// <summary>"%.2f%s" de (exp - T[lv]) * 100 / (T[lv+1] - T[lv]).</summary>
        public static string ExpText(int lv, long exp)
        {
            var next = T(lv + 1);
            var d = next - T(lv);
            var v = d != 0 ? (exp - T(lv)) * 100.0 / d : 0;
            return v.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture) + "%";
        }

        /// <summary>Karma: "%d+" a partir de 999999.</summary>
        public static string Karma(int k) => k >= 999999 ? k + "+" : k.ToString();

        /// <summary>A barra desenhada: 1..max = (w, 12); acima de max = (max, 10) (o binario empurra h = 10); 0 ou menos, nada.</summary>
        public static (float w, float h)? Bar(int w, int max) => w <= 0 ? null : w > max ? (max, 10) : (w, 12);
    }

    public sealed class LobbyCharInfo
    {
        public readonly RectTransform Root;
        /// <summary>Seletor do personagem (#chName).</summary>
        public readonly LobbySelect Name;

        readonly Text levelValue, sp, karma;
        readonly RectTransform hpBar, mpBar, expBar, digits;

        static readonly Color Grey = new Color32(0xa3, 0xa3, 0xa3, 0xff), Light = new Color32(0xdc, 0xdc, 0xdc, 0xff), Gold = new Color32(0xb0, 0x9b, 0x79, 0xff);

        public LobbyCharInfo(RectTransform parent)
        {
            Root = NativeLayout.PawnSelect.Apply(UiRoot.Box("lb-charinfo", parent));
            var bg = UiRoot.Box("select1_back", Root, 0, 0, 256, 108);
            L2WndUtil.Paint(bg, "L2UI_CH3.LobbyWnd.select1_back", 256, 108, PaintMode.Normal, 0, 0, 256, 108);
            Label(GameData.SysString(50, "Name"), 15, 16, Grey);
            Label(GameData.SysString(88, "Lv"), 15, 39, Grey);
            Label(GameData.SysString(101, "Karma"), 131, 69, Light);
            hpBar = UiRoot.Box("hp", Root, 35, 55, 0, 12);
            mpBar = UiRoot.Box("mp", Root, 35, 69, 0, 12);
            expBar = UiRoot.Box("exp", Root, 35, 83, 0, 12);
            digits = UiRoot.Box("digits", Root, 0, 0, 256, 108);
            levelValue = Label("", 32, 39, Gold);
            sp = Label("", 0, 56, Gold);
            karma = Label("", 0, 70, Gold);
            var c = NativeLayout.PawnSelectCombo;
            Name = new LobbySelect(Root, c.X, c.Y, c.W, c.H);
        }

        Text Label(string s, float x, float y, Color c)
        {
            // DrawTextW: o y e o topo da linha; sem sombra
            var t = UiRoot.Label(Root, s, x, y, 230, 14, 11, c, TextAnchor.UpperLeft);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.raycastTarget = false;
            return t;
        }

        static void Gauge(RectTransform el, string tex, int w, int max)
        {
            var b = PawnSelectModel.Bar(w, max);
            el.gameObject.SetActive(b != null);
            if (b is not { } r) return;
            el.sizeDelta = new Vector2(r.w, r.h);
            // UV (0, 0, 8, 12) esticada na largura
            L2WndUtil.Paint(el, tex, r.w, r.h, PaintMode.Stretch, 0, 0, 8, 12);
        }

        void Right(Text t, string s, float right)
        {
            t.text = s;
            t.rectTransform.anchoredPosition = new Vector2(right - Mathf.Ceil(t.preferredWidth), t.rectTransform.anchoredPosition.y);
        }

        /// <summary>Preenche com o personagem (null limpa: so os rotulos fixos ficam).</summary>
        public void Fill(CharSlot c)
        {
            UiKit.Clear(digits);
            foreach (var g in new[] { hpBar, mpBar, expBar }) g.gameObject.SetActive(c != null);
            levelValue.text = sp.text = karma.text = "";
            if (c == null) return;
            // os double do pacote viram int por _ftol (trunca)
            int hp = (int)c.Hp, maxHp = (int)c.MaxHp, mp = (int)c.Mp, maxMp = (int)c.MaxMp;
            Gauge(hpBar, "L2UI_ch3.playerstatuswnd.ps_hpbar", PawnSelectModel.Gauge(hp, maxHp), 85);
            Gauge(mpBar, "L2UI_ch3.PlayerStatusWnd.ps_mpbar", PawnSelectModel.Gauge(mp, maxMp), 85);
            Gauge(expBar, "L2UI_ch3.PlayerStatusWnd.ps_expbar", PawnSelectModel.ExpGauge(c.Level, c.Exp), 206);
            // numeros: medidos na fonte normal (GetTextSize) e desenhados nas celulas de 8 px do L2UI.NWindow.Number
            var e = PawnSelectModel.ExpText(c.Level, c.Exp);
            L2Digits.Draw(digits, "exp", e, 138 - L2Digits.NormalExtent(e) / 2, 85);
            foreach (var (k, y, cur, max) in new[] { ("hp", 57, hp, maxHp), ("mp", 71, mp, maxMp) })
            {
                L2Digits.Draw(digits, k + "slash", "/", 77 - L2Digits.NormalExtent("/") / 2, y);
                L2Digits.Draw(digits, k + "cur", cur.ToString(), 67 - L2Digits.NormalExtent(cur.ToString()), y);
                L2Digits.Draw(digits, k + "max", max.ToString(), 83, y);
            }
            levelValue.text = string.Format("{0} {1}", c.Level, GameData.SysString(PartyNative.ClassTypeIndex(c.ClassId), GameData.ClassName(c.ClassId)));
            Right(sp, c.Sp.ToString(), 236);
            Right(karma, PawnSelectModel.Karma(c.Karma), 236);
        }
    }
}
