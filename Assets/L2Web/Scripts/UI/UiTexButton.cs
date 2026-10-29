// Botao com as texturas do cliente (normal / pressionado / realce), o `.l2b` do CSS: um RawImage cuja textura troca
// com o estado do ponteiro. A regiao (uvRect) e o retangulo da arte vem de L2WndUtil (pintura "normal" ou "stretch").
using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public class UiTexButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
    {
        /// <summary>Imagem pintada (filha "bg" do botao).</summary>
        public RawImage Image;
        /// <summary>Texto do botao (pode ser nulo).</summary>
        public Text Label;
        /// <summary>Texturas dos estados (null = usa a normal).</summary>
        public Texture Normal, Pushed, Over;
        /// <summary>Clique esquerdo.</summary>
        public Action OnClick;
        /// <summary>Clique direito.</summary>
        public Action OnRightClick;
        /// <summary>Duplo clique (se nulo, o segundo clique vira OnClick).</summary>
        public Action OnDoubleClick;
        /// <summary>Som de clique da interface (defaultSoundOn do xdat).</summary>
        public bool Sound;

        bool over, down, pressed, interactable = true;

        /// <summary>aria-pressed: fica com a textura pressionada.</summary>
        public bool Pressed
        {
            get => pressed;
            set
            {
                pressed = value;
                Refresh();
            }
        }

        /// <summary>disabled = !Interactable (opacidade 0.55, sem clique).</summary>
        public bool Interactable
        {
            get => interactable;
            set
            {
                interactable = value;
                var cg = GetComponent<CanvasGroup>();
                if (!value && !cg) cg = gameObject.AddComponent<CanvasGroup>();
                if (cg) cg.alpha = value ? 1f : 0.55f;
                Refresh();
            }
        }

        /// <summary>Atualiza a textura mostrada pelo estado atual.</summary>
        public void Refresh()
        {
            if (!Image) return;
            var t = (down || pressed) && interactable ? Pushed ?? Normal : over && interactable ? Over ?? Normal : Normal;
            Image.texture = t;
            Image.enabled = t;
        }

        public void OnPointerEnter(PointerEventData e)
        {
            over = true;
            Refresh();
        }

        public void OnPointerExit(PointerEventData e)
        {
            over = false;
            down = false;
            Refresh();
        }

        public void OnPointerDown(PointerEventData e)
        {
            if (e.button == PointerEventData.InputButton.Left) down = true;
            Refresh();
            // o pointerdown continua subindo (a janela vem para a frente ao clicar num botao dela)
            var p = transform.parent;
            var h = p ? ExecuteEvents.GetEventHandler<IPointerDownHandler>(p.gameObject) : null;
            if (h) ExecuteEvents.Execute(h, e, ExecuteEvents.pointerDownHandler);
        }

        public void OnPointerUp(PointerEventData e)
        {
            down = false;
            Refresh();
        }

        public void OnPointerClick(PointerEventData e)
        {
            if (!interactable) return;
            if (e.button == PointerEventData.InputButton.Right)
            {
                OnRightClick?.Invoke();
                return;
            }
            if (e.button != PointerEventData.InputButton.Left) return;
            if (Sound) L2WndUtil.UiSound("InterfaceSound.Interface.click_01");
            if (e.clickCount >= 2 && OnDoubleClick != null) OnDoubleClick();
            else OnClick?.Invoke();
        }
    }
}
