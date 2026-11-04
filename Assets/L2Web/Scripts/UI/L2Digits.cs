// Fonte de digitos do engine (H1 da matriz): UCanvas::DrawSpecialDigit (Engine.dll 0x10305542) e o seletor do NWindow
// (FUN_100212f0, texturas carregadas em FUN_100... 00001.c:4714):
//   tipo 0 = SEK.cbui13 (5x5), tipo 1 = L2UI.NWindow.Number (8x8), tipo 2 = L2UI_CH3.Etc.XLargeNumber (11x14).
// Celula de cada caractere na tira: '0'..'9' = 0..9, H 10, M 11, P 12, '/' 13, '%' 14, '.' 15, C 16, ':' 17; u = celula * largura.
// O avanco e a largura da celula; outro caractere (inclusive espaco) e pulado sem avancar.
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class L2Digits
    {
        public static readonly (string tex, int w, int h)[] Types =
        {
            ("SEK.cbui13", 5, 5), ("L2UI.NWindow.Number", 8, 8), ("L2UI_CH3.Etc.XLargeNumber", 11, 14),
        };

        /// <summary>Celula do caractere na tira, ou -1 (pulado).</summary>
        public static int Cell(char c)
        {
            if (c >= '0' && c <= '9') return c - '0';
            return c switch { 'H' => 10, 'M' => 11, 'P' => 12, '/' => 13, '%' => 14, '.' => 15, 'C' => 16, ':' => 17, _ => -1 };
        }

        /// <summary>Largura desenhada (o retorno do DrawSpecialDigit).</summary>
        public static int Width(string s, int type = 1)
        {
            var n = 0;
            foreach (var c in s ?? "") if (Cell(c) >= 0) n += Types[type].w;
            return n;
        }

        /// <summary>
        /// Desenha `s` em (x, y) dentro de `parent` (canto superior esquerdo) com a cor ARGB; devolve o container. Chamadas com o
        /// mesmo nome reaproveitam o container e os glifos (os que sobram ficam inativos): nada e destruido, entao varias chamadas
        /// no mesmo quadro (UserInfo e StatusUpdate juntos, #0054) deixam so o ultimo texto. Antes o container antigo ia para o
        /// Object.Destroy, que so age no fim do quadro: a 2a chamada achava de novo o antigo pelo nome e o texto da 1a ficava
        /// por baixo, sobreposto.
        /// </summary>
        public static RectTransform Draw(RectTransform parent, string name, string s, float x, float y, uint argb = 0xffdcdcdc, int type = 1)
        {
            var (texName, w, h) = Types[type];
            var root = parent.Find(name) as RectTransform;
            if (root)
            {
                UiRoot.Place(root, x, y, Width(s, type), h);
                root.gameObject.SetActive(true);
            }
            else root = UiRoot.Box(name, parent, x, y, Width(s, type), h);
            var t = L2WndUtil.Tex(texName);
            var color = new Color32((byte)(argb >> 16), (byte)(argb >> 8), (byte)argb, (byte)(argb >> 24));
            var n = 0;
            if (t != null)
                foreach (var c in s ?? "")
                {
                    var cell = Cell(c);
                    if (cell < 0) continue;
                    RawImage img;
                    if (n < root.childCount)
                    {
                        img = root.GetChild(n).GetComponent<RawImage>();
                        img.gameObject.SetActive(true);
                    }
                    else
                    {
                        img = UiRoot.Box("g", root, 0, 0, w, h).gameObject.AddComponent<RawImage>();
                        img.raycastTarget = false;
                        L2WndUtil.SetTexture(img, t.Url);
                    }
                    UiRoot.Place(img.rectTransform, n * w, 0, w, h);
                    img.color = color;
                    img.uvRect = new Rect(cell * w / (float)t.W, 1 - h / (float)t.H, w / (float)t.W, h / (float)t.H);
                    n++;
                }
            for (var i = n; i < root.childCount; i++) root.GetChild(i).gameObject.SetActive(false);
            return root;
        }

        /// <summary>Esconde o texto desenhado com `name` (o container fica para a proxima chamada de Draw).</summary>
        public static void Hide(Transform parent, string name)
        {
            var old = parent.Find(name);
            if (old) old.gameObject.SetActive(false);
        }

        /// <summary>
        /// GetTextExtent (FUN_10020bb0) com a fonte normal, que o NCStatusBarCtrl usa para posicionar os digitos. [?] larguras
        /// medidas na captura do original (4 digitos = 26 px, "/" = 4): digito 6,5, "/" 4, "." 3, "%" 8.
        /// </summary>
        public static int NormalExtent(string s)
        {
            var w = 0f;
            foreach (var c in s ?? "") w += c >= '0' && c <= '9' ? 6.5f : c == '/' ? 4 : c == '.' ? 3 : c == '%' ? 8 : 6;
            return Mathf.RoundToInt(w);
        }

        /// <summary>
        /// NCStatusBarCtrl (FUN_1004c7c0): titulo em (9, 2); modo atual/maximo: "/" em W/2 - ext/2, atual em W/2 - ext - 8,
        /// maximo em W/2 + 4; modo EXP: "%.2f%" em W/2 - ext/2. Tudo em y = 2, tipo 1, 0xffdcdcdc.
        /// </summary>
        public static List<(string text, float x)> StatusBarText(string title, float width, long cur, long max, string expText)
        {
            var o = new List<(string, float)>();
            if (!string.IsNullOrEmpty(title)) o.Add((title, 9));
            if (expText != null)
            {
                o.Add((expText, Mathf.Floor(width * 0.5f - NormalExtent(expText) / 2)));
                return o;
            }
            o.Add(("/", Mathf.Floor(width * 0.5f - NormalExtent("/") / 2)));
            var c = cur.ToString();
            o.Add((c, Mathf.Floor(width * 0.5f - NormalExtent(c) - 6 - 2)));
            o.Add((max.ToString(), Mathf.Floor(width * 0.5f + 6 - 2)));
            return o;
        }
    }
}
