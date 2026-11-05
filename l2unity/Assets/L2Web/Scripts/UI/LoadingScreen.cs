// Tela de carregamento (ui/loading.ts), como a do cliente: arte de carregamento do Interlude (systextures/sp_32b_*.bmp,
// convertida pelo setup para /ui/loading/) e barra de progresso. Fica por cima de tudo ate os assets da cena estarem
// prontos (LoadTrack).
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public class LoadingScreen
    {
        static List<string> images;
        static readonly System.Random rnd = new();

        static async Task<List<string>> LoadingImages()
        {
            if (images != null) return images;
            try
            {
                images = await Http.GetJson<List<string>>("/ui/loading/index.json") ?? new List<string>();
            }
            catch
            {
                images = new List<string>();
            }
            return images;
        }

        /// <summary>Elemento da tela (div.loading, em tela cheia).</summary>
        public readonly RectTransform El;
        readonly RawImage art;
        readonly AspectRatioFitter artFit;
        readonly RectTransform fill;
        readonly Text text;
        string label = "";
        int depth;
        float fillK;

        /// <summary>Cria a tela (escondida) em `parent` (normalmente UiRoot.Rect).</summary>
        public LoadingScreen(Transform parent)
        {
            El = UiRoot.Box("Loading", parent, 0, 0, 0, 0);
            UiRoot.Fill(El);
            var bg = El.gameObject.AddComponent<Image>();
            bg.color = Color.black;
            // .ld-art: inset 0 0 64px 0, background center / contain
            var area = UiRoot.Box("ld-art", El, 0, 0, 0, 0);
            UiRoot.Fill(area);
            area.offsetMin = new Vector2(0, 64);
            var img = UiRoot.Box("art", area, 0, 0, 0, 0);
            img.anchorMin = img.anchorMax = img.pivot = new Vector2(0.5f, 0.5f);
            art = img.gameObject.AddComponent<RawImage>();
            art.raycastTarget = false;
            art.enabled = false;
            artFit = img.gameObject.AddComponent<AspectRatioFitter>();
            artFit.aspectMode = AspectRatioFitter.AspectMode.FitInParent;
            artFit.aspectRatio = 4f / 3f;
            // .ld-bar: base 36px, largura min(520px, 70vw), 10px, borda #6b5d3c + contorno #000
            var bar = UiRoot.Box("ld-bar", El, 0, 0, 520, 10);
            bar.anchorMin = bar.anchorMax = new Vector2(0.5f, 0);
            bar.pivot = new Vector2(0.5f, 0);
            bar.anchoredPosition = new Vector2(0, 36);
            var outline = bar.gameObject.AddComponent<Image>();
            outline.color = Color.black;
            var border = UiRoot.Panel(bar, 0, 0, 0, 0, new Color32(0x6b, 0x5d, 0x3c, 0xff));
            UiRoot.Fill(border.rectTransform, -1);
            var inner = UiRoot.Panel(bar, 0, 0, 0, 0, new Color32(0x12, 0x0f, 0x0a, 0xff));
            UiRoot.Fill(inner.rectTransform);
            fill = UiRoot.Box("fill", bar, 0, 0, 0, 10);
            fill.anchorMin = new Vector2(0, 0);
            fill.anchorMax = new Vector2(0, 1);
            fill.pivot = new Vector2(0, 0.5f);
            fill.offsetMin = fill.offsetMax = Vector2.zero;
            var fimg = fill.gameObject.AddComponent<RawImage>();
            fimg.texture = Grad();
            fimg.raycastTarget = false;
            // .ld-text: base 12px, centralizado, #cfc6ae 12px com sombra
            text = UiRoot.Label(El, "", 0, 0, 0, 18, 12, new Color32(0xcf, 0xc6, 0xae, 0xff), TextAnchor.MiddleCenter);
            var tr = text.rectTransform;
            tr.anchorMin = new Vector2(0, 0);
            tr.anchorMax = new Vector2(1, 0);
            tr.pivot = new Vector2(0.5f, 0);
            tr.anchoredPosition = new Vector2(0, 9);
            tr.sizeDelta = new Vector2(0, 18);
            UiKit.AddShadow(text);
            // largura da barra acompanha a tela (70vw)
            UiEvents.Of(El).OnLateUpdate = () =>
            {
                var w = Mathf.Min(520, UiRoot.Size.x * 0.7f);
                if (Mathf.Abs(bar.sizeDelta.x - w) > 0.5f) bar.sizeDelta = new Vector2(w, 10);
            };
            // a barra e o texto sao do porte (o LoadingState do original nao tem): escondidos
            bar.gameObject.SetActive(false);
            text.gameObject.SetActive(false);
            // LoadingWnd (xdat): BackTex 100% x 100%, Stretch com UV (0, 0, 1024, 768) da L2Font-e.loading02-e
            loadingArt = UiRoot.Box("LoadingWnd.BackTex", El, 0, 0, 0, 0);
            UiRoot.Fill(loadingArt);
            // GametipWnd: 100% x 20% em BOTTOM_CENTER; GameTipText1 (sysstring 1455, #aaaa00) em y -28 e GameTipText (#c8c8c8)
            // no centro, cada um com duas copias pretas deslocadas (+-1)
            tipWnd = UiRoot.Box("GametipWnd", El, 0, 0, 0, 0);
            // [?] medido na captura do original em 1024x768: o centro do bloco fica a ~0,2H da base (o titulo em y=593), nao a 0,1H
            tipWnd.anchorMin = new Vector2(0, 0.1f);
            tipWnd.anchorMax = new Vector2(1, 0.3f);
            tipWnd.offsetMin = tipWnd.offsetMax = Vector2.zero;
            tipTitle = TipText(-28, new Color32(0xaa, 0xaa, 0x00, 0xff));
            tipText = TipText(0, new Color32(0xc8, 0xc8, 0xc8, 0xff));
            El.gameObject.SetActive(false);
        }

        readonly RectTransform loadingArt, tipWnd;
        readonly Text[] tipTitle, tipText;
        /// <summary>Nivel do personagem que entra (GetPlayerInfo do GametipWnd.OnShow).</summary>
        public int PlayerLevel;

        Text[] TipText(float y, Color32 color)
        {
            var o = new Text[3];
            var offs = new[] { (0f, 0f), (-1f, -1f), (1f, 1f) };
            for (var i = 2; i >= 0; i--)
            {
                // TextBox auto (tamanho 0) ancorado no CENTER pelo topo: o titulo comeca 28 px acima do centro e a dica no centro
                var t = UiRoot.Label(tipWnd, "", 0, 0, 0, 0, 11, i == 0 ? (Color)color : Color.black, TextAnchor.UpperCenter);
                var rt = t.rectTransform;
                rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.5f);
                rt.pivot = new Vector2(0.5f, 1f);
                rt.sizeDelta = new Vector2(900, 40);
                rt.anchoredPosition = new Vector2(offs[i].Item1, -(y + offs[i].Item2));
                t.horizontalOverflow = HorizontalWrapMode.Wrap;
                o[i] = t;
            }
            return o;
        }

        /// <summary>GametipWnd.OnShow: dica sorteada (GameTip.Pick) e o titulo, so com Game.ShowGameTipMsg = False.</summary>
        void ShowTip()
        {
            var show = !L2Options.GetBool("Game", "ShowGameTipMsg");
            var tip = show ? GameTip.Pick(GameData.GameTips, PlayerLevel, rnd) : "";
            foreach (var t in tipTitle) t.text = show ? GameData.SysString(1455, "Useful Information") : "";
            // as dicas trazem a sequencia barra-n literal: o TextBox quebra a linha ali
            tip = tip.Replace("\\n", "\n");
            foreach (var t in tipText) t.text = tip;
        }

        static Texture2D grad;

        // linear-gradient(#f0d58a, #9a7a35) de cima para baixo
        static Texture2D Grad()
        {
            if (grad) return grad;
            grad = new Texture2D(1, 2, TextureFormat.RGBA32, false) { hideFlags = HideFlags.DontSave, wrapMode = TextureWrapMode.Clamp };
            grad.SetPixel(0, 1, new Color32(0xf0, 0xd5, 0x8a, 0xff));
            grad.SetPixel(0, 0, new Color32(0x9a, 0x7a, 0x35, 0xff));
            grad.Apply();
            return grad;
        }

        /// <summary>true enquanto a tela esta aberta.</summary>
        public bool Visible => El && El.gameObject.activeSelf;

        /// <summary>Abre a tela com `label` (aninhavel: cada Show precisa de um Hide).</summary>
        public void Show(string label)
        {
            this.label = label;
            if (depth++ == 0)
            {
                LoadTrack.Reset();
                var t = L2WndUtil.Tex("L2Font-e.loading02-e");
                if (t != null)
                {
                    L2WndUtil.Paint(loadingArt, "L2Font-e.loading02-e", UiRoot.Size.x, UiRoot.Size.y, PaintMode.Stretch, 0, 0, 1024, 768);
                    var img = loadingArt.GetComponentInChildren<RawImage>();
                    if (img) UiRoot.Fill(img.rectTransform);
                    if (img) img.uvRect = new Rect(0, 1 - 768f / t.H, 1024f / t.W, 768f / t.H);
                }
                else PickArt().Forget();
                ShowTip();
            }
            El.gameObject.SetActive(true);
            El.SetAsLastSibling();
            Tick(LoadTrack.Progress());
        }

        async Task PickArt()
        {
            var list = await LoadingImages();
            if (list.Count == 0 || !art) return;
            var name = list[rnd.Next(list.Count)];
            var tx = await Http.GetTexture("/ui/loading/" + Uri.EscapeDataString(name).Replace("%2F", "/"));
            if (!art || !tx) return;
            art.texture = tx;
            art.enabled = true;
            artFit.aspectRatio = (float)tx.width / Mathf.Max(1, tx.height);
        }

        /// <summary>Fecha (quando o ultimo Show for desfeito).</summary>
        public void Hide()
        {
            depth = Math.Max(0, depth - 1);
            if (depth == 0) El.gameObject.SetActive(false);
        }

        void Tick(LoadProgress p)
        {
            // a barra so anda para frente (novos pedidos aumentam o total no meio do caminho)
            var k = p.Total > 0 ? (float)p.Done / p.Total : 0;
            SetFill(Mathf.Max(fillK, Mathf.Min(1, k)));
            text.text = label + (p.Total > 0 ? $" {p.Done}/{p.Total}" : "");
        }

        void SetFill(float k)
        {
            fillK = k;
            fill.anchorMax = new Vector2(k, 1);
            fill.offsetMax = Vector2.zero;
        }

        /// <summary>
        /// Mostra a tela, roda `task` e espera os carregamentos pendentes terminarem (nada novo por `quietMs`, pelo menos
        /// `minMs`, ate `maxMs`): modelos dos personagens que o servidor manda logo depois tambem entram.
        /// </summary>
        public async Task<T> Until<T>(string label, Task<T> task, double minMs = 0, double quietMs = 700, double maxMs = 180000)
        {
            Show(label);
            try
            {
                var v = await task;
                await LoadTrack.WaitIdle(quietMs, minMs, maxMs, Tick);
                SetFill(1);
                return v;
            }
            finally
            {
                Hide();
                if (depth == 0) SetFill(0);
            }
        }

        /// <summary>Until para tarefas sem valor.</summary>
        public async Task Until(string label, Task task, double minMs = 0, double quietMs = 700, double maxMs = 180000)
        {
            await Until(label, Wrap(task), minMs, quietMs, maxMs);
        }

        static async Task<bool> Wrap(Task t)
        {
            await t;
            return true;
        }
    }
}
