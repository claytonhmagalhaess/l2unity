// Dica ao passar o mouse (o atributo `title` do DOM): uma caixa unica no topo do Canvas, perto do ponteiro, depois de
// 0,5 s parado sobre o elemento.
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace L2Web.UI
{
    public class UiTooltip : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler
    {
        /// <summary>Texto da dica (vazio = sem dica).</summary>
        public string Text;

        static RectTransform box;
        static Text label;
        static UiTooltip owner;
        float since = -1;

        /// <summary>Define a dica de um elemento (title = ...).</summary>
        public static void Set(GameObject go, string text)
        {
            if (!go) return;
            var t = go.GetComponent<UiTooltip>();
            if (string.IsNullOrEmpty(text))
            {
                if (t) t.Text = "";
                return;
            }
            if (!t) t = go.AddComponent<UiTooltip>();
            t.Text = text;
        }

        /// <summary>Troca a dica com o mouse ja em cima (controles dentro de uma janela): conta de novo os 0,5 s.</summary>
        public void Change(string text)
        {
            if (Text == text) return;
            Text = text;
            if (owner == this) HideBox();
            if (since >= 0) since = Time.unscaledTime;
        }

        public void OnPointerEnter(PointerEventData e) => since = Time.unscaledTime;

        public void OnPointerExit(PointerEventData e)
        {
            since = -1;
            if (owner == this) HideBox();
        }

        public void OnPointerDown(PointerEventData e)
        {
            since = -1;
            if (owner == this) HideBox();
            // o clique segue para quem trata (botao/slot no mesmo objeto ou no pai)
        }

        void Update()
        {
            if (since < 0 || owner == this || string.IsNullOrEmpty(Text)) return;
            if (Time.unscaledTime - since < 0.5f) return;
            ShowBox();
        }

        void OnDisable()
        {
            since = -1;
            if (owner == this) HideBox();
        }

        void ShowBox()
        {
            if (!box)
            {
                var bg = UiRoot.Panel(UiRoot.Rect, 0, 0, 10, 10, new Color32(0x0a, 0x0a, 0x0c, 0xf0));
                bg.name = "Tooltip";
                bg.raycastTarget = false;
                box = bg.rectTransform;
                var outline = bg.gameObject.AddComponent<Outline>();
                outline.effectColor = new Color32(0x5a, 0x50, 0x3c, 0xff);
                outline.effectDistance = new Vector2(1, -1);
                label = UiRoot.Label(box, "", 6, 4, 10, 10, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff), TextAnchor.UpperLeft);
                label.verticalOverflow = VerticalWrapMode.Overflow;
                label.horizontalOverflow = HorizontalWrapMode.Overflow;
            }
            owner = this;
            label.text = Text;
            var w = Mathf.Min(320, Mathf.Ceil(label.preferredWidth));
            label.horizontalOverflow = label.preferredWidth > 320 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
            label.rectTransform.sizeDelta = new Vector2(w, 10);
            var h = Mathf.Ceil(label.preferredHeight);
            label.rectTransform.sizeDelta = new Vector2(w, h);
            var size = new Vector2(w + 12, h + 8);
            var mp = Mouse.current != null ? Mouse.current.position.ReadValue() : Vector2.zero;
            var k = UiRoot.PixelScale;
            var vp = UiRoot.Size;
            var x = mp.x / k + 12;
            var y = vp.y - mp.y / k + 18;
            if (x + size.x > vp.x) x = vp.x - size.x - 2;
            if (y + size.y > vp.y) y = vp.y - mp.y / k - size.y - 6;
            UiRoot.Place(box, Mathf.Max(0, x), Mathf.Max(0, y), size.x, size.y);
            box.SetAsLastSibling();
            box.gameObject.SetActive(true);
        }

        static void HideBox()
        {
            owner = null;
            if (box) box.gameObject.SetActive(false);
        }
    }
}
