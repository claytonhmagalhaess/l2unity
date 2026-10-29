// Camada das janelas do Interface.xdat (L2Layer do ui/l2wnd.ts): um RectTransform em tela cheia que nao bloqueia o
// mouse (pointer-events: none); as janelas sao filhas dele. Escala da interface = UiRoot.Scale (o CSS zoom).
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.UI
{
    public class L2Layer
    {
        /// <summary>Elemento da camada (div.l2layer).</summary>
        public readonly RectTransform El;
        /// <summary>Janelas de topo por nome.</summary>
        public readonly Dictionary<string, L2Wnd> Windows = new();
        int z = 10;
        Vector2 lastSize;

        /// <summary>Cria a camada em `parent` (em tela cheia).</summary>
        public L2Layer(Transform parent)
        {
            El = UiRoot.Box("L2Layer", parent, 0, 0, 0, 0);
            UiRoot.Fill(El);
            lastSize = UiRoot.Size;
            // window resize -> relayout
            UiEvents.Of(El).OnLateUpdate = () =>
            {
                var s = UiRoot.Size;
                if ((s - lastSize).sqrMagnitude < 0.25f) return;
                lastSize = s;
                Relayout();
            };
        }

        /// <summary>Escala da interface (0.75 a 2.5): muda UiRoot.Scale e reposiciona as janelas.</summary>
        public float Scale
        {
            get => UiRoot.Scale;
            set
            {
                UiRoot.Scale = Mathf.Min(2.5f, Mathf.Max(0.75f, value));
                Canvas.ForceUpdateCanvases();
                lastSize = UiRoot.Size;
                Relayout();
            }
        }

        /// <summary>Tamanho da tela em pixels da interface.</summary>
        public Vector2 Viewport => UiRoot.Size;

        /// <summary>Traz a janela para a frente (z-index).</summary>
        public void Front(L2Wnd w)
        {
            ++z;
            w.El.SetAsLastSibling();
        }

        /// <summary>Reposiciona todas as janelas (ancoras do xdat ou posicoes arrastadas).</summary>
        public void Relayout()
        {
            foreach (var w in Windows.Values) w.Place();
        }

        float transparency = 1f;

        /// <summary>Game.TransparencyMode (GIsTransparencyMode): alfa das janelas [I valor].</summary>
        public void SetTransparency(float alpha)
        {
            transparency = alpha;
            foreach (var w in Windows.Values) ApplyTransparency(w);
        }

        void ApplyTransparency(L2Wnd w)
        {
            if (!w.El) return;
            var g = w.El.GetComponent<UnityEngine.CanvasGroup>();
            if (!g && transparency >= 1f) return;
            if (!g) g = w.El.gameObject.AddComponent<UnityEngine.CanvasGroup>();
            g.alpha = transparency;
        }

        /// <summary>Esquece as posicoes arrastadas e volta ao layout padrao do cliente.</summary>
        public void ResetPositions()
        {
            foreach (var w in Windows.Values)
            {
                L2Wnd.Store(w.Name, null);
                w.Moved = null;
            }
            Relayout();
        }
    }
}
