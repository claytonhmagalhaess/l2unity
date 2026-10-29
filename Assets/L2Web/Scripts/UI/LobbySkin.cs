// Utilitarios de aparencia usados pelo lobby (lobbyui.ts), pelas opcoes (settings.ts) e pela interface social
// (social.ts): sprites a partir das texturas originais da interface (indice /ui/textures.json via L2WndUtil.Tex, so a
// area da arte, como o `background-size` do CSS fazia), botoes com os estados normal/over/pressionado/desabilitado,
// texto com sombra (text-shadow 1px 1px 0 #000) e ancoragem estilo CSS (right/bottom, centro).
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class LobbySkin
    {
        static readonly Dictionary<string, Task<Sprite>> cache = new();

        /// <summary>Cor de texto padrao do lobby (#dcdcdc).</summary>
        public static readonly Color Text = new Color32(0xdc, 0xdc, 0xdc, 0xff);
        public static readonly Color BtnText = new Color32(0xe6, 0xe1, 0xcf, 0xff);
        public static readonly Color BtnTextOff = new Color32(0x8a, 0x87, 0x7e, 0xff);

        /// <summary>Sprite da arte de uma textura do Interface.utx (ex.: "L2UI_CH3.Button.btn1_normal"); null se faltar.</summary>
        public static Task<Sprite> Sprite(string texRef)
        {
            if (string.IsNullOrEmpty(texRef)) return Task.FromResult<Sprite>(null);
            var k = texRef.ToLowerInvariant();
            if (cache.TryGetValue(k, out var t) && (!t.IsCompleted || t.Result)) return t;
            t = Load(texRef);
            cache[k] = t;
            return t;
        }

        static async Task<Sprite> Load(string texRef)
        {
            if (!L2WndUtil.L2UiReady()) await L2WndUtil.LoadL2Ui();
            var info = L2WndUtil.Tex(texRef);
            if (info == null) return null;
            var tex = await Http.GetTexture(info.Url);
            if (!tex) return null;
            // a arte fica no canto superior esquerdo de uma textura potencia de 2 (aw x ah dentro de w x h)
            var sx = info.W > 0 ? tex.width / (float)info.W : 1f;
            var sy = info.H > 0 ? tex.height / (float)info.H : 1f;
            var aw = Mathf.Clamp(info.Aw * sx, 1, tex.width);
            var ah = Mathf.Clamp(info.Ah * sy, 1, tex.height);
            var s = UnityEngine.Sprite.Create(tex, new Rect(0, tex.height - ah, aw, ah), new Vector2(0.5f, 0.5f), 100, 0, SpriteMeshType.FullRect);
            s.name = texRef;
            return s;
        }

        /// <summary>Poe a textura num Image (esticada no elemento); enquanto carrega (ou se faltar) fica a cor `fallback`.</summary>
        public static void Apply(Image img, string texRef, Color? fallback = null)
        {
            img.color = fallback ?? Color.clear;
            ApplyAsync(img, texRef).Forget();
        }

        static async Task ApplyAsync(Image img, string texRef)
        {
            var s = await Sprite(texRef);
            if (!img || !s) return;
            img.sprite = s;
            img.type = Image.Type.Simple;
            img.color = Color.white;
        }

        /// <summary>Elemento com fundo de textura (como `background: url() 0 0 no-repeat`).</summary>
        public static Image Back(Transform parent, string texRef, float x, float y, float w, float h, Color? fallback = null)
        {
            var rt = UiRoot.Box("Back", parent, x, y, w, h);
            var img = rt.gameObject.AddComponent<Image>();
            img.raycastTarget = true;
            Apply(img, texRef, fallback);
            return img;
        }

        /// <summary>
        /// Fundo no tamanho natural da arte, recortado pelo elemento (`background: url() 0 0 no-repeat` numa caixa menor
        /// que a arte, ex.: lobby_menuback 120x138 num menu de 80 de altura).
        /// </summary>
        public static Image NativeBack(RectTransform el, string texRef, Color? fallback = null)
        {
            el.gameObject.AddComponent<RectMask2D>();
            var info = L2WndUtil.Tex(texRef);
            var size = el.rect.size;
            var w = info != null ? info.Aw : size.x;
            var h = info != null ? info.Ah : size.y;
            var img = Back(el, texRef, 0, 0, w, h, fallback);
            img.transform.SetAsFirstSibling();
            return img;
        }

        /// <summary>Estados do botao com as texturas originais (SpriteSwap do uGUI = :hover/:active/:disabled do CSS).</summary>
        public static void Skin(Button b, string normal, string over = null, string down = null, string off = null, Color? fallback = null)
        {
            var img = (Image)b.targetGraphic;
            img.color = fallback ?? Color.clear;
            SkinAsync(b, normal, over, down, off).Forget();
        }

        static async Task SkinAsync(Button b, string normal, string over, string down, string off)
        {
            var n = await Sprite(normal);
            var o = over != null ? await Sprite(over) : null;
            var d = down != null ? await Sprite(down) : null;
            var x = off != null ? await Sprite(off) : null;
            if (!b) return;
            var img = (Image)b.targetGraphic;
            if (n)
            {
                img.sprite = n;
                img.color = Color.white;
            }
            b.transition = Selectable.Transition.SpriteSwap;
            b.spriteState = new SpriteState { highlightedSprite = o ? o : n, pressedSprite = d ? d : n, selectedSprite = n, disabledSprite = x ? x : n };
        }

        /// <summary>Botao (Image + Button) com rotulo centralizado.</summary>
        public static Button Button(Transform parent, string text, float x, float y, float w, float h, System.Action onClick, int size = 11)
        {
            var rt = UiRoot.Box("Button", parent, x, y, w, h);
            var img = rt.gameObject.AddComponent<Image>();
            var b = rt.gameObject.AddComponent<Button>();
            b.targetGraphic = img;
            b.transition = Selectable.Transition.None;
            var nav = b.navigation;
            nav.mode = Navigation.Mode.None;
            b.navigation = nav;
            if (onClick != null) b.onClick.AddListener(() => onClick());
            if (text != null)
            {
                var t = Label(rt, text, 0, 0, w, h, size, BtnText, TextAnchor.MiddleCenter);
                UiRoot.Fill(t.rectTransform);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
            }
            return b;
        }

        /// <summary>
        /// Botao NCButton das telas nativas: retangulo da NativeLayout e as duas texturas que o construtor do original passa
        /// (normal e pressionado; sem textura de "over").
        /// </summary>
        public static Button NativeButton(Transform parent, string text, NRect r, string normal, string down, System.Action onClick, int size = 11)
        {
            var b = Button(parent, text, 0, 0, r.W, r.H, onClick, size);
            r.Apply((RectTransform)b.transform);
            Skin(b, normal, null, down, null, new Color32(0x22, 0x32, 0x4d, 0xff));
            return b;
        }

        /// <summary>BigButton 96x23 (funcoes do login/lobby/criacao, Log In/Exit).</summary>
        public static Button BigButton(Transform parent, string text, NRect r, System.Action onClick) =>
            NativeButton(parent, text, r, "L2UI_CH3.Button.BigButton", "L2UI_CH3.Button.BigButton_down", onClick);

        /// <summary>Botao padrao do lobby/janelas: btn1_normal (+over, on, disable).</summary>
        public static Button L2Button(Transform parent, string text, float x, float y, float w, float h, System.Action onClick, int size = 11)
        {
            var b = Button(parent, text, x, y, w, h, onClick, size);
            Skin(b, "L2UI_CH3.Button.btn1_normal", "L2UI_CH3.Button.btn1_normal_over", "L2UI_CH3.Button.btn1_normalon", "L2UI_CH3.Button.btn1_normaldisable",
                new Color32(0x22, 0x32, 0x4d, 0xff));
            return b;
        }

        /// <summary>Habilita/desabilita o botao (texto cinza quando desabilitado, como .lb-btn:disabled).</summary>
        public static void SetEnabled(Button b, bool on)
        {
            b.interactable = on;
            var t = b.GetComponentInChildren<Text>();
            if (t) t.color = on ? BtnText : BtnTextOff;
        }

        /// <summary>Texto do botao.</summary>
        public static void SetText(Button b, string text)
        {
            var t = b.GetComponentInChildren<Text>();
            if (t) t.text = text;
        }

        /// <summary>Texto com sombra 1px (text-shadow: 1px 1px 0 #000).</summary>
        public static Text Label(Transform parent, string text, float x, float y, float w, float h, int size = 11, Color? color = null, TextAnchor align = TextAnchor.MiddleLeft)
        {
            var t = UiRoot.Label(parent, text, x, y, w, h, size, color ?? Text, align);
            var sh = t.gameObject.AddComponent<Shadow>();
            sh.effectColor = Color.black;
            sh.effectDistance = new Vector2(1, -1);
            return t;
        }

        /// <summary>Campo de texto (InputField legado) com borda e fundo escuros (.lb-edit / input das janelas).</summary>
        public static InputField Input(Transform parent, float x, float y, float w, float h, Color border, Color back, int size = 11)
        {
            var rt = UiRoot.Box("Input", parent, x, y, w, h);
            var frame = rt.gameObject.AddComponent<Image>();
            frame.color = border;
            var inner = UiRoot.Box("Back", rt, 0, 0, w, h);
            UiRoot.Fill(inner, 1);
            var bg = inner.gameObject.AddComponent<Image>();
            bg.color = back;
            bg.raycastTarget = false;
            var text = UiRoot.Label(inner, "", 0, 0, w, h, size, Color.white);
            UiRoot.Fill(text.rectTransform);
            text.rectTransform.offsetMin = new Vector2(4, 0);
            text.rectTransform.offsetMax = new Vector2(-4, 0);
            text.supportRichText = false;
            text.horizontalOverflow = HorizontalWrapMode.Overflow;
            var f = rt.gameObject.AddComponent<InputField>();
            f.targetGraphic = frame;
            f.textComponent = text;
            f.transition = Selectable.Transition.ColorTint;
            var cb = f.colors;
            cb.highlightedColor = new Color(1.3f, 1.3f, 1.3f, 1);
            cb.selectedColor = new Color(1.6f, 1.5f, 1.3f, 1);
            cb.colorMultiplier = 2;
            f.colors = cb;
            f.caretColor = Color.white;
            f.customCaretColor = true;
            var nav = f.navigation;
            nav.mode = Navigation.Mode.None;
            f.navigation = nav;
            return f;
        }

        /// <summary>Barra horizontal: fundo opcional + preenchimento (largura em %, como `style.width = x%`).</summary>
        public static Image Fill(Transform parent, float x, float y, float w, float h, Color fill, Color? back = null)
        {
            var rt = UiRoot.Box("Bar", parent, x, y, w, h);
            if (back.HasValue)
            {
                var bg = rt.gameObject.AddComponent<Image>();
                bg.color = back.Value;
                bg.raycastTarget = false;
            }
            var f = UiRoot.Box("Fill", rt, 0, 0, 0, h);
            f.anchorMin = new Vector2(0, 0);
            f.anchorMax = new Vector2(0, 1);
            f.pivot = new Vector2(0, 0.5f);
            f.anchoredPosition = Vector2.zero;
            f.sizeDelta = Vector2.zero;
            var img = f.gameObject.AddComponent<Image>();
            img.color = fill;
            img.raycastTarget = false;
            return img;
        }

        /// <summary>Largura do preenchimento em % (0-100) de uma barra criada por <see cref="Fill"/>.</summary>
        public static void SetPercent(Image fill, float pct)
        {
            var rt = fill.rectTransform;
            var p = Mathf.Clamp01(pct / 100f);
            rt.anchorMax = new Vector2(p, 1);
            rt.sizeDelta = Vector2.zero;
        }

        /// <summary>Ancoragem CSS no pai: right/bottom (px), ou centro horizontal (left:50% + margin-left) com `centerX`.</summary>
        public static void Anchor(RectTransform rt, float w, float h, float? left = null, float? top = null, float? right = null, float? bottom = null, float? centerX = null)
        {
            float ax = centerX.HasValue ? 0.5f : right.HasValue && !left.HasValue ? 1 : 0;
            float ay = bottom.HasValue && !top.HasValue ? 0 : 1;
            rt.anchorMin = rt.anchorMax = new Vector2(ax, ay);
            rt.pivot = new Vector2(centerX.HasValue ? 0.5f : ax, ay);
            var x = centerX ?? (left ?? -(right ?? 0));
            var y = top.HasValue ? -top.Value : bottom ?? 0;
            rt.anchoredPosition = new Vector2(x, y);
            rt.sizeDelta = new Vector2(w, h);
        }

        /// <summary>Rolagem vertical (overflow:auto): devolve o conteudo (cresce para baixo, altura pelos filhos).</summary>
        public static RectTransform Scroll(Transform parent, float x, float y, float w, float h, out ScrollRect sr)
        {
            var view = UiRoot.Box("Scroll", parent, x, y, w, h);
            var vimg = view.gameObject.AddComponent<Image>();
            vimg.color = new Color(0, 0, 0, 0.004f);
            view.gameObject.AddComponent<RectMask2D>();
            var content = UiRoot.Box("Content", view, 0, 0, w, 0);
            content.anchorMin = new Vector2(0, 1);
            content.anchorMax = new Vector2(1, 1);
            content.sizeDelta = new Vector2(0, 0);
            sr = view.gameObject.AddComponent<ScrollRect>();
            sr.content = content;
            sr.horizontal = false;
            sr.vertical = true;
            sr.movementType = ScrollRect.MovementType.Clamped;
            sr.scrollSensitivity = 20;
            sr.viewport = view;
            return content;
        }
    }
}
