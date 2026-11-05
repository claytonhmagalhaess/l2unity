// Raiz da interface em uGUI: o equivalente ao document/body do cliente web. Um Canvas em tela cheia com escala 1:1 em
// pixels (as janelas do Interface.xdat sao posicionadas em pixels, como no DOM), o EventSystem do Input System e
// utilitarios para criar elementos (RectTransform ancorado no canto superior esquerdo, como position:absolute).
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.UI;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class UiRoot
    {
        static Canvas canvas;
        static Font font;
        static float userScale = 1f;

        /// <summary>
        /// Pixels de tela por pixel CSS: a escala do Windows (dpi/96), que o navegador aplicava sozinho. Sem dpi conhecido, 1.
        /// </summary>
        public static float DpiScale => Screen.dpi > 0 ? Mathf.Clamp(Screen.dpi / 96f, 1f, 4f) : 1f;

        /// <summary>Escala da interface (Opcoes -> Interface); 1 = tamanho do navegador (pixels CSS).</summary>
        public static float Scale
        {
            get => userScale;
            set
            {
                userScale = Mathf.Clamp(value, 0.5f, 3f);
                Canvas.GetComponent<CanvasScaler>().scaleFactor = userScale * DpiScale;
            }
        }

        /// <summary>Pixels de tela por pixel da interface (escala do usuario x dpi): converte posicoes do mouse.</summary>
        public static float PixelScale => Canvas.GetComponent<CanvasScaler>().scaleFactor;

        public static Canvas Canvas
        {
            get
            {
                if (canvas) return canvas;
                var go = new GameObject("L2Web UI", typeof(RectTransform));
                if (Application.isPlaying) Object.DontDestroyOnLoad(go);
                canvas = go.AddComponent<Canvas>();
                canvas.renderMode = RenderMode.ScreenSpaceOverlay;
                canvas.sortingOrder = 10;
                var scaler = go.AddComponent<CanvasScaler>();
                scaler.uiScaleMode = CanvasScaler.ScaleMode.ConstantPixelSize;
                scaler.scaleFactor = userScale * DpiScale;
                go.AddComponent<GraphicRaycaster>();
                EnsureEventSystem();
                return canvas;
            }
        }

        /// <summary>RectTransform do Canvas (raiz para as telas).</summary>
        public static RectTransform Rect => (RectTransform)Canvas.transform;

        /// <summary>Tamanho da area da interface em pixels de UI (tela / escala).</summary>
        public static Vector2 Size => Rect.rect.size;

        public static Font Font => font ? font : font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");

        public static void EnsureEventSystem()
        {
            if (Object.FindAnyObjectByType<EventSystem>()) return;
            var es = new GameObject("EventSystem", typeof(EventSystem), typeof(InputSystemUIInputModule));
            if (Application.isPlaying) Object.DontDestroyOnLoad(es);
        }

        /// <summary>true se o ponteiro esta sobre algum elemento da interface (cliques nao vao para o mundo).</summary>
        public static bool PointerOverUi() => EventSystem.current && EventSystem.current.IsPointerOverGameObject();

        /// <summary>true se um campo de texto tem o foco (teclas nao vao para o jogo).</summary>
        public static bool TypingInField()
        {
            var sel = EventSystem.current ? EventSystem.current.currentSelectedGameObject : null;
            return sel && sel.TryGetComponent<InputField>(out var f) && f.isFocused;
        }

        /// <summary>
        /// Novo elemento filho de `parent` ancorado no canto superior esquerdo, em (x, y) com tamanho (w, h) em pixels,
        /// y crescendo para baixo (como left/top do CSS).
        /// </summary>
        public static RectTransform Box(string name, Transform parent, float x = 0, float y = 0, float w = 100, float h = 100)
        {
            var go = new GameObject(name, typeof(RectTransform));
            var rt = (RectTransform)go.transform;
            rt.SetParent(parent ? parent : Rect, false);
            Place(rt, x, y, w, h);
            return rt;
        }

        /// <summary>Posiciona no estilo left/top/width/height (pixels, a partir do canto superior esquerdo do pai).</summary>
        public static void Place(RectTransform rt, float x, float y, float w, float h)
        {
            rt.anchorMin = rt.anchorMax = new Vector2(0, 1);
            rt.pivot = new Vector2(0, 1);
            rt.anchoredPosition = new Vector2(x, -y);
            rt.sizeDelta = new Vector2(w, h);
        }

        /// <summary>Estica o elemento para preencher o pai (inset em pixels).</summary>
        public static RectTransform Fill(RectTransform rt, float inset = 0)
        {
            rt.anchorMin = Vector2.zero;
            rt.anchorMax = Vector2.one;
            rt.pivot = new Vector2(0.5f, 0.5f);
            rt.offsetMin = new Vector2(inset, inset);
            rt.offsetMax = new Vector2(-inset, -inset);
            return rt;
        }

        /// <summary>Texto (uGUI legado, fonte embutida). Rich text ligado.</summary>
        public static Text Label(Transform parent, string text, float x, float y, float w, float h, int size = 12, Color? color = null, TextAnchor align = TextAnchor.MiddleLeft)
        {
            var rt = Box("Text", parent, x, y, w, h);
            var t = rt.gameObject.AddComponent<Text>();
            t.font = Font;
            t.fontSize = size;
            t.color = color ?? new Color32(0xdd, 0xd6, 0xc4, 0xff);
            t.alignment = align;
            t.supportRichText = true;
            t.horizontalOverflow = HorizontalWrapMode.Wrap;
            t.verticalOverflow = VerticalWrapMode.Truncate;
            t.raycastTarget = false;
            t.text = text;
            return t;
        }

        /// <summary>Retangulo de cor solida.</summary>
        public static Image Panel(Transform parent, float x, float y, float w, float h, Color color)
        {
            var rt = Box("Panel", parent, x, y, w, h);
            var img = rt.gameObject.AddComponent<Image>();
            img.color = color;
            return img;
        }

        /// <summary>Cor CSS (#rgb, #rrggbb, #rrggbbaa) para Color; `def` se invalida.</summary>
        public static Color Css(string css, Color def)
        {
            return !string.IsNullOrEmpty(css) && ColorUtility.TryParseHtmlString(css, out var c) ? c : def;
        }
    }
}
