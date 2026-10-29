// Funcoes soltas do ui/l2wnd.ts: layout do Interface.xdat (/ui/layout.json), indice de texturas (/ui/textures.json),
// pintura das texturas (o background do CSS -> RawImage com uvRect), grade de itens, barra de rolagem e sons.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public enum PaintMode
    {
        Stretch,
        Normal,
        Tile,
    }

    /// <summary>Textura do indice: url, tamanho do PNG (W, H) e da arte util (Aw, Ah).</summary>
    public sealed class TexInfo
    {
        public string Url;
        public int W, H, Aw, Ah;
    }

    /// <summary>Dados de um slot da grade (ItemWindow).</summary>
    public sealed class SlotData
    {
        public string Icon;
        public string Title;
        public long Count;
        public string Badge;
        public string Cls;
    }

    public static partial class L2WndUtil
    {
        static readonly Dictionary<string, L2Ctrl> defs = new();
        static Dictionary<string, JArray> texIdx = new();
        static bool ready;
        static Task<bool> loading;

        /// <summary>Layout bruto (windows, shortcuts, defaultPositions, rest).</summary>
        public static JObject Layout { get; private set; }

        /// <summary>Sons da interface do cliente (InterfaceSound/ItemSound), ligados pelo App ao SfxPlayer.</summary>
        public static Action<string> UiSound = _ => { };

        /// <summary>Liga o som da interface (setUiSound).</summary>
        public static void SetUiSound(Action<string> fn) => UiSound = fn ?? (_ => { });

        /// <summary>Som de abrir/fechar de cada janela (o resto usa o generico window_open/close).</summary>
        public static readonly Dictionary<string, string> WndSound = new()
        {
            ["InventoryWnd"] = "inventory", ["MainWnd"] = "charstat", ["SystemMenuWnd"] = "system", ["RadarContainerWnd"] = "map",
        };

        /// <summary>Carrega layout e indice de texturas. false = interface original indisponivel.</summary>
        public static Task<bool> LoadL2Ui()
        {
            if (ready) return Task.FromResult(true);
            return loading ??= Load();
        }

        static async Task<bool> Load()
        {
            try
            {
                var lt = Http.Fetch("/ui/layout.json");
                var tt = Http.Fetch("/ui/textures.json");
                var l = await lt;
                var t = await tt;
                if (!l.Ok || !t.Ok)
                {
                    loading = null;
                    return false;
                }
                Use(JObject.Parse(l.Text), JObject.Parse(t.Text));
            }
            catch (Exception e)
            {
                Debug.LogWarning("L2Ui: " + e.Message);
                loading = null;
                return false;
            }
            return ready;
        }

        /// <summary>Usa um layout (/ui/layout.json) e um indice de texturas ja lidos (tambem nos testes, sem rede).</summary>
        public static void Use(JObject layout, JObject idx)
        {
            texIdx = new Dictionary<string, JArray>(idx.Count);
            foreach (var p in idx.Properties())
                if (p.Value is JArray a) texIdx[p.Name] = a;
            Layout = layout;
            defs.Clear();
            foreach (var w in (JArray)layout["windows"])
            {
                var c = L2Ctrl.Parse((JObject)w);
                defs[c.Name] = c;
            }
            ready = true;
        }

        /// <summary>true se layout e texturas estao carregados.</summary>
        public static bool L2UiReady() => ready;

        /// <summary>Definicao da janela no xdat (null se nao existir).</summary>
        public static L2Ctrl WindowDef(string name) => name != null && defs.TryGetValue(name, out var d) ? d : null;

        /// <summary>Textura pelo nome do cliente ("L2UI_CH3.Grupo.Nome", sem diferenciar caixa); o grupo e opcional.</summary>
        public static TexInfo Tex(string reference)
        {
            if (string.IsNullOrEmpty(reference) || reference == "undefined") return null;
            var k = reference.ToLowerInvariant();
            if (!texIdx.TryGetValue(k, out var hit))
            {
                var p = k.Split('.');
                if (!texIdx.TryGetValue(p[0] + "." + p[p.Length - 1], out hit)) return null;
            }
            int w = (int)hit[1], h = (int)hit[2];
            return new TexInfo
            {
                Url = (string)hit[0], W = w, H = h,
                Aw = hit.Count > 3 && hit[3].Type != JTokenType.Null ? (int)hit[3] : w,
                Ah = hit.Count > 4 && hit[4].Type != JTokenType.Null ? (int)hit[4] : h,
            };
        }

        /// <summary>Textura pelo JToken do xdat (string ou nada).</summary>
        public static TexInfo Tex(JToken reference) => reference != null && reference.Type == JTokenType.String ? Tex((string)reference) : null;

        // ------------------------------------------------------------ carga das texturas
        static readonly Dictionary<string, Task<Texture2D>> repeatCache = new();

        /// <summary>Textura do servidor (cache); `repeat` = copia com wrapMode Repeat (tile).</summary>
        public static Task<Texture2D> LoadTex(string url, bool repeat = false)
        {
            if (!repeat) return Http.GetTexture(url);
            if (repeatCache.TryGetValue(url, out var t)) return t;
            t = LoadRepeat(url);
            repeatCache[url] = t;
            return t;
        }

        static async Task<Texture2D> LoadRepeat(string url)
        {
            var src = await Http.GetTexture(url);
            if (!src) return null;
            var c = UnityEngine.Object.Instantiate(src);
            c.name = src.name + "#rep";
            c.wrapMode = TextureWrapMode.Repeat;
            return c;
        }

        /// <summary>
        /// Poe a textura de `url` no RawImage quando carregar (fica escondido ate la). `onMissing` = a imagem nao existe
        /// (o onerror do img).
        /// </summary>
        public static void SetTexture(RawImage img, string url, bool repeat = false, Action onMissing = null)
        {
            if (!img) return;
            if (string.IsNullOrEmpty(url))
            {
                img.texture = null;
                img.enabled = false;
                onMissing?.Invoke();
                return;
            }
            var task = LoadTex(url, repeat);
            if (task.IsCompleted)
            {
                var tx = task.Status == TaskStatus.RanToCompletion ? task.Result : null;
                img.texture = tx;
                img.enabled = tx;
                if (!tx) onMissing?.Invoke();
                return;
            }
            img.enabled = false;
            img.texture = null;
            Wait(img, task, onMissing).Forget();
        }

        static async Task Wait(RawImage img, Task<Texture2D> task, Action onMissing)
        {
            Texture2D tx = null;
            try
            {
                tx = await task;
            }
            catch
            {
                /* sem a imagem */
            }
            if (!img) return;
            img.texture = tx;
            img.enabled = tx;
            if (!tx) onMissing?.Invoke();
        }

        /// <summary>Carrega as texturas de um botao (normal, pressionado, realce) no UiTexButton.</summary>
        public static void SetButtonTextures(UiTexButton b, string n, string p, string h)
        {
            SetBtnTex(b, n, 0);
            SetBtnTex(b, p, 1);
            SetBtnTex(b, h, 2);
        }

        static async void SetBtnTex(UiTexButton b, string url, int which)
        {
            if (string.IsNullOrEmpty(url)) return;
            Texture2D tx;
            try
            {
                tx = await LoadTex(url);
            }
            catch
            {
                return;
            }
            if (!b) return;
            if (which == 0) b.Normal = tx;
            else if (which == 1) b.Pushed = tx;
            else b.Over = tx;
            b.Refresh();
        }

        // ------------------------------------------------------------ pintura (background do CSS)
        /// <summary>RawImage de fundo do elemento (filho "bg", primeiro irmao; cria se faltar).</summary>
        public static RawImage Bg(RectTransform el, string name = "bg")
        {
            var t = el.Find(name);
            if (t && t.TryGetComponent<RawImage>(out var img)) return img;
            var rt = UiRoot.Box(name, el, 0, 0, 0, 0);
            rt.SetAsFirstSibling();
            img = rt.gameObject.AddComponent<RawImage>();
            img.raycastTarget = false;
            img.enabled = false;
            return img;
        }

        /// <summary>
        /// Posiciona `img` (filho de um elemento w x h) para mostrar uma imagem de tamanho (iw, ih) desenhada em (ox, oy)
        /// (canto superior esquerdo, pixels do elemento), recortada pelo elemento. tile = repetida a partir de (ox, oy).
        /// </summary>
        public static bool PlaceImage(RawImage img, float w, float h, float ox, float oy, float iw, float ih, bool tile)
        {
            var rt = img.rectTransform;
            if (iw <= 0 || ih <= 0 || w <= 0 || h <= 0)
            {
                UiRoot.Place(rt, 0, 0, 0, 0);
                return false;
            }
            if (tile)
            {
                UiRoot.Place(rt, 0, 0, w, h);
                img.uvRect = new Rect(-ox / iw, 1 - (h - oy) / ih, w / iw, h / ih);
                return true;
            }
            float x0 = Mathf.Max(0, ox), x1 = Mathf.Min(w, ox + iw);
            float y0 = Mathf.Max(0, oy), y1 = Mathf.Min(h, oy + ih);
            if (x1 <= x0 || y1 <= y0)
            {
                UiRoot.Place(rt, 0, 0, 0, 0);
                return false;
            }
            UiRoot.Place(rt, x0, y0, x1 - x0, y1 - y0);
            float u0 = (x0 - ox) / iw, u1 = (x1 - ox) / iw;
            float t0 = (y0 - oy) / ih, t1 = (y1 - oy) / ih;
            img.uvRect = new Rect(u0, 1 - t1, u1 - u0, t1 - t0);
            return true;
        }

        /// <summary>
        /// Pinta `el` (w x h) com a regiao (u, v, us, vs) da textura. Stretch: a regiao estica para o elemento; Normal:
        /// tamanho natural, recortada; Tile: repetida no tamanho natural. Sem regiao, a regiao tem o tamanho do controle.
        /// Devolve o RawImage (filho "bg") ou null se a textura nao existe.
        /// </summary>
        public static RawImage Paint(RectTransform el, string reference, float w, float h, PaintMode mode = PaintMode.Stretch, float u = 0, float v = 0, float us = 0, float vs = 0)
        {
            var t = Tex(reference);
            if (t == null) return null;
            var img = Bg(el);
            PaintInto(img, t, w, h, mode, u, v, us, vs);
            return img;
        }

        /// <summary>Paint num RawImage existente (ex.: um filho que nao e o "bg").</summary>
        public static void PaintInto(RawImage img, TexInfo t, float w, float h, PaintMode mode = PaintMode.Stretch, float u = 0, float v = 0, float us = 0, float vs = 0) =>
            PaintClip(img, t, w, h, w, mode, u, v, us, vs);

        /// <summary>
        /// Como PaintInto, mas o elemento ficou com largura `clipW` depois de pintado (style.width mudado): o fundo
        /// continua do tamanho calculado para `w` e e recortado.
        /// </summary>
        public static void PaintClip(RawImage img, TexInfo t, float w, float h, float clipW, PaintMode mode = PaintMode.Stretch, float u = 0, float v = 0, float us = 0, float vs = 0)
        {
            if (mode == PaintMode.Stretch)
            {
                var rw = us > 0 ? us : w;
                var rh = vs > 0 ? vs : h;
                var kx = rw > 0 ? w / rw : 1;
                var ky = rh > 0 ? h / rh : 1;
                PlaceImage(img, clipW, h, -u * kx, -v * ky, t.W * kx, t.H * ky, false);
            }
            else if (mode == PaintMode.Tile && ((us > 0 && us < t.W) || (vs > 0 && vs < t.H)))
            {
                // NCTextureCtrl modo 2 (FUN_10053790): celulas de us x vs com a regiao (u, v, us, vs), ceil(W/us) x ceil(H/vs),
                // a ultima cortada pelo clip do controle
                TileRegion(img, t, clipW, h, u, v, us > 0 ? us : t.W, vs > 0 ? vs : t.H);
                return;
            }
            else if (mode == PaintMode.Normal)
            {
                // modos 1/4: so a regiao (u, v, us, vs), em tamanho natural a partir de (0, 0)
                PlaceImage(img, Mathf.Min(clipW, us > 0 ? us : clipW), Mathf.Min(h, vs > 0 ? vs : h), -u, -v, t.W, t.H, false);
            }
            else PlaceImage(img, clipW, h, -u, -v, t.W, t.H, mode == PaintMode.Tile);
            SetTexture(img, t.Url, mode == PaintMode.Tile);
        }

        static void TileRegion(RawImage img, TexInfo t, float w, float h, float u, float v, float us, float vs)
        {
            var rt = img.rectTransform;
            UiRoot.Place(rt, 0, 0, w, h);
            img.texture = null;
            img.color = new Color(1, 1, 1, 0);
            for (var i = rt.childCount - 1; i >= 0; i--)
                if (rt.GetChild(i).name == "tile") L2Web.Render.RenderMats.Destroy(rt.GetChild(i).gameObject);
            if (!rt.GetComponent<RectMask2D>()) rt.gameObject.AddComponent<RectMask2D>();
            var nx = Mathf.CeilToInt(w / us);
            var ny = Mathf.CeilToInt(h / vs);
            for (var y = 0; y < ny; y++)
                for (var x = 0; x < nx; x++)
                {
                    var cell = UiRoot.Box("tile", rt, x * us, y * vs, us, vs).gameObject.AddComponent<RawImage>();
                    cell.raycastTarget = false;
                    cell.uvRect = new Rect(u / t.W, 1 - (v + vs) / t.H, us / t.W, vs / t.H);
                    SetTexture(cell, t.Url);
                }
        }

        /// <summary>
        /// Fundo de janela (unk101 do xdat): a arte fica no canto inferior direito da janela. Ex.: shortcut_back tem 492
        /// de arte numa barra de 504; systemmenu_back tem 275 numa janela de 295 (os 20 de cima sao da barra de titulo).
        /// </summary>
        public static RawImage PaintBack(RectTransform el, string reference, float w, float h)
        {
            var t = Tex(reference);
            if (t == null) return null;
            var img = Bg(el);
            PlaceImage(img, w, h, Mathf.Max(0, w - t.Aw), Mathf.Max(0, h - t.Ah), t.W, t.H, false);
            SetTexture(img, t.Url);
            return img;
        }

        /// <summary>Pinta so a arte util (Aw x Ah) esticada no elemento: os botoes btn1 (168% x 139% no CSS).</summary>
        public static RawImage PaintArt(RectTransform el, string reference, float w, float h)
        {
            var t = Tex(reference);
            if (t == null) return null;
            var img = Bg(el);
            PaintInto(img, t, w, h, PaintMode.Stretch, 0, 0, t.Aw, t.Ah);
            return img;
        }

        // ------------------------------------------------------------ botoes
        /// <summary>
        /// Botao com as texturas do cliente em tamanho natural (o skinButton): arte no canto da textura. `art` = estica a
        /// arte util para o botao (btn1 dos dialogos genericos).
        /// </summary>
        public static UiTexButton Button(RectTransform el, string normal, string pushed, string over, float w, float h, bool art = false)
        {
            var b = (el.TryGetComponent<UiTexButton>(out var __c) ? __c : el.gameObject.AddComponent<UiTexButton>());
            var hit = el.GetComponent<Graphic>();
            if (!hit)
            {
                // alvo do raycast: imagem transparente do tamanho do botao
                var g = el.gameObject.AddComponent<Image>();
                g.color = Color.clear;
            }
            SkinButton(b, normal, pushed, over, w, h, art);
            return b;
        }

        /// <summary>Troca as texturas do botao (normal, pressionado, realce).</summary>
        public static void SkinButton(UiTexButton b, string normal, string pushed, string over, float w, float h, bool art = false)
        {
            var t = Tex(normal);
            var el = (RectTransform)b.transform;
            b.Image = Bg(el);
            if (t == null)
            {
                b.Normal = b.Pushed = b.Over = null;
                b.Refresh();
                return;
            }
            if (art) PlaceImage(b.Image, w, h, 0, 0, w * t.W / Mathf.Max(1, t.Aw), h * t.H / Mathf.Max(1, t.Ah), false);
            else PlaceImage(b.Image, w, h, 0, 0, t.W, t.H, false);
            SetButtonTextures(b, t.Url, Tex(pushed)?.Url ?? t.Url, Tex(over)?.Url ?? t.Url);
        }

        /// <summary>Numero curto (1.2k, 3.4M).</summary>
        public static string Compact(long n)
        {
            static string F(double v) => v.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture).Replace(".0", "");
            if (n >= 1_000_000_000) return F(n / 1e9) + "B";
            if (n >= 1_000_000) return F(n / 1e6) + "M";
            if (n >= 10_000) return Math.Round(n / 1e3, MidpointRounding.AwayFromZero) + "k";
            return n.ToString();
        }
    }
}
