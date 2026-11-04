// NCStatusIconCtrl do NWindow.dll (a grade de icones de buff da AbnormalStatusWnd, das janelas de grupo, pet e servo e da
// Olimpiada): o que o nativo desenha alem do que o script manda (StatusIconInfo).
//   OnCreate (nw:0x1004d1b0): timer 0x1f9 a cada 1000 ms e 0x1e9 a cada 100 ms; carrega L2UI_CH3.PlayerStatusWnd.debuff.
//   OnTimer (nw:0x1004e040):
//     0x1f9: RemainTime (+0x1f64) > 0 perde 1; o Reserved do tooltip (+0x1e7c) recebe o valor (-1 no debuff) e o item
//            "Type=RemainTime" do tooltip aberto e refeito.
//     0x1e9: com noClip desligado e RemainTime em [0, 30], o alfa do icone (+0x1f68, comeca em 0xff) vai e volta de 25 em 25
//            entre 0 e 255 (+0x1f70 = 1 descendo, comeca descendo).
//   OnPaint (nw:0x1004db50): fundo BackTex (Size+2, alfa 0xff), icone em +1 com o alfa do piscar; com noClip desligado,
//     RemainTime em [0, 60) e sem IsDebuff (+0x1f7c): "%d" em 0xffdcdcdc pela fonte de digitos (DrawSpecialDigit):
//       Normal/Etc: tipo 2 (XLargeNumber 11x14), alfa 0xcc, (x+7, y+10) com 1 digito, (x+2, y+10) com 2;
//       Short (bShortItem, +0x1f74): tipo 1 (Number 8x8), alfa 0xff, x + 12 - GetTextExtent/2, y + 8.
//     Debuff: moldura L2UI_CH3.PlayerStatusWnd.debuff (UV 26x26) no lugar do numero, com o alfa do piscar.
//   CopyStatusIconInfo (nw:0x1004d470): bits de StatusIconInfo+0x40: bShow 1, bShortItem 2, bEtcItem 4; sem
//     BackTex o passo e o Size (os icones de 16 e 10 do grupo e do pet ficam colados, sem fundo).
// noClip (+0x2d8, 1o parametro do construtor nw:0x1004f430) e noTooltip (+0x2dc) vem do Interface.xdat: AbnormalStatusWnd e
// OlympiadBuff1/2Wnd tem os dois desligados; PartyWnd(Compact), PetStatusWnd e SummonedStatusWnd tem os dois ligados.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public static class StatusIcon
    {
        public const int TimerMs = 1000, BlinkMs = 100;
        /// <summary>O numero aparece com RemainTime &lt; 60; o icone pisca com RemainTime &lt;= 30.</summary>
        public const int DigitLimit = 60, BlinkLimit = 30, BlinkStep = 25;

        /// <summary>NSTATUSICON_MAXCOL das janelas de buff (AbnormalStatusWnd, PartyWnd, OlympiadBuffWnd).</summary>
        public const int MaxCol = 12;

        /// <summary>
        /// Posicao de cada item na AbnormalStatusWnd (AbnormalStatusWnd.uc HandleAdd*Status): as Normal (cat 0) em linhas de 12
        /// a partir da linha 0; as Short (cat 1) e as Etc (cat 2) numa linha so, logo abaixo: as Short no inicio (InsertCol
        /// 0..n) e as Etc depois (AddCol), sem limite de 12. A ordem dentro de cada categoria e a do pacote: o cliente nao
        /// separa buff, danca, toggle e debuff (o aCis manda os efeitos, buffs antes dos debuffs, depois os toggles por id e
        /// os scrolls).
        /// </summary>
        public static List<(int cat, int index, int col, int row)> AbnormalLayout(int normal, int shortCount, int etc)
        {
            var o = new List<(int, int, int, int)>();
            for (var i = 0; i < normal; i++) o.Add((0, i, i % MaxCol, i / MaxCol));
            var row = (normal + MaxCol - 1) / MaxCol;
            for (var i = 0; i < shortCount; i++) o.Add((1, i, i, row));
            for (var i = 0; i < etc; i++) o.Add((2, i, shortCount + i, row));
            return o;
        }

        /// <summary>
        /// Grades das janelas de grupo (HandlePartySpelledList): os buffs e os debuffs (IsDebuff) em duas grades separadas, 12
        /// por linha cada; devolve (grade 0 buff / 1 debuff, id, nivel, col, row).
        /// </summary>
        public static List<(int grid, int id, int level, int col, int row)> PartyGrids(IList<(int id, int level)> list, Func<int, int, bool> isDebuff)
        {
            var o = new List<(int, int, int, int, int)>();
            int nb = 0, nd = 0;
            foreach (var (id, level) in list)
            {
                if (id <= 0) continue;
                if (isDebuff(id, level))
                {
                    o.Add((1, id, level, nd % MaxCol, nd / MaxCol));
                    nd++;
                }
                else
                {
                    o.Add((0, id, level, nb % MaxCol, nb / MaxCol));
                    nb++;
                }
            }
            return o;
        }

        /// <summary>
        /// RemainTime depois de `elapsedMs` (o timer de 1 s tira 1 enquanto for &gt; 0; -1 = sem tempo, fica). [I] o timer e do
        /// controle, nao do item: o 1o desconto vem entre 0 e 1 s depois do pacote; aqui conta a partir da chegada.
        /// </summary>
        public static int Remain(int remainTime, double elapsedMs)
        {
            if (remainTime <= 0) return remainTime;
            return Math.Max(0, remainTime - (int)Math.Floor(Math.Max(0, elapsedMs) / TimerMs));
        }

        /// <summary>Reserved do tooltip: o RemainTime, ou -1 no debuff (OnTimer 0x1f9).</summary>
        public static int Reserved(int remain, bool debuff) => debuff ? -1 : remain;

        public readonly struct Digit
        {
            public readonly string Text;
            /// <summary>Tipo da fonte de digitos (L2Digits.Types).</summary>
            public readonly int Type;
            /// <summary>Posicao a partir do canto do item (o fundo de Size+2).</summary>
            public readonly int X, Y;
            public readonly byte Alpha;

            public Digit(string text, int type, int x, int y, byte alpha)
            {
                Text = text;
                Type = type;
                X = x;
                Y = y;
                Alpha = alpha;
            }
        }

        /// <summary>O numero sobre o icone (OnPaint), ou null.</summary>
        public static Digit? DigitFor(int remain, bool debuff, bool shortItem, bool noClip = false)
        {
            if (noClip || debuff || remain < 0 || remain >= DigitLimit) return null;
            var s = remain.ToString();
            if (shortItem) return new Digit(s, 1, 12 - L2Digits.NormalExtent(s) / 2, 8, 0xff);
            return new Digit(s, 2, remain < 10 ? 7 : 2, 10, 0xcc);
        }

        /// <summary>O timer de 100 ms mexe no alfa deste item?</summary>
        public static bool Blinks(int remain, bool noClip = false) => !noClip && remain >= 0 && remain <= BlinkLimit;

        /// <summary>Alfa do icone (+0x1f68) e o sentido (+0x1f70), como o item novo (NCStatusIconItem, nw:0x1004d7a0).</summary>
        public sealed class Blink
        {
            public int Alpha = 0xff;
            public bool Down = true;

            /// <summary>Um passo do timer 0x1e9 (os dois ramos do OnTimer, Normal e Short, dao a mesma sequencia).</summary>
            public void Step(bool shortItem = false)
            {
                if (shortItem)
                {
                    if (Alpha == 0) Down = false;
                    if (Alpha == 0xff) Down = true;
                }
                else if (Alpha < 0)
                {
                    Alpha = 0;
                    Down = false;
                }
                else if (Alpha > 0xff)
                {
                    Alpha = 0xff;
                    Down = true;
                }
                Alpha += Down ? -BlinkStep : BlinkStep;
                if (Alpha < 0)
                {
                    Alpha = 0;
                    Down = false;
                }
                else if (Alpha > 0xff)
                {
                    Alpha = 0xff;
                    Down = true;
                }
            }
        }
    }
}
