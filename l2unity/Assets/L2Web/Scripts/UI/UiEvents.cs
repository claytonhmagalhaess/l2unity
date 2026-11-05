// Ponte de eventos do uGUI para Actions: o addEventListener do DOM (pointerdown/move/up, click, dblclick, enter/leave,
// wheel, drag). Adicione com UiEvents.Of(go) e ligue so os campos que precisar.
using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace L2Web.UI
{
    [ExecuteAlways]
    public class UiEvents : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IPointerEnterHandler,
        IPointerExitHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IScrollHandler, IInitializePotentialDragHandler
    {
        /// <summary>pointerdown.</summary>
        public Action<PointerEventData> OnDown;
        /// <summary>pointerup.</summary>
        public Action<PointerEventData> OnUp;
        /// <summary>click (botao esquerdo, clickCount 1).</summary>
        public Action<PointerEventData> OnClick;
        /// <summary>dblclick (botao esquerdo, clickCount 2).</summary>
        public Action<PointerEventData> OnDoubleClick;
        /// <summary>contextmenu (botao direito).</summary>
        public Action<PointerEventData> OnRightClick;
        /// <summary>pointerenter.</summary>
        public Action<PointerEventData> OnEnter;
        /// <summary>pointerleave.</summary>
        public Action<PointerEventData> OnExit;
        /// <summary>Inicio de arrasto (so e chamado se OnDrag tambem estiver ligado).</summary>
        public Action<PointerEventData> OnBeginDrag;
        /// <summary>pointermove durante o arrasto.</summary>
        public Action<PointerEventData> OnDrag;
        /// <summary>Fim do arrasto.</summary>
        public Action<PointerEventData> OnEndDrag;
        /// <summary>wheel; se nulo o evento sobe para o pai (ScrollRect).</summary>
        public Action<PointerEventData> OnWheel;
        /// <summary>Chamado no LateUpdate enquanto o objeto esta ativo (ajustes de layout).</summary>
        public Action OnLateUpdate;
        /// <summary>Chamado quando o objeto e destruido.</summary>
        public Action OnDestroyed;

        /// <summary>O UiEvents do objeto (cria se faltar).</summary>
        public static UiEvents Of(GameObject go) => go.TryGetComponent<UiEvents>(out var e) ? e : go.AddComponent<UiEvents>();

        /// <summary>O UiEvents do objeto (cria se faltar).</summary>
        public static UiEvents Of(Component c) => Of(c.gameObject);

        public void OnPointerDown(PointerEventData e)
        {
            if (OnDown != null) OnDown(e);
            else Bubble<IPointerDownHandler>(e, ExecuteEvents.pointerDownHandler);
        }

        public void OnPointerUp(PointerEventData e) => OnUp?.Invoke(e);

        public void OnPointerClick(PointerEventData e)
        {
            if (e.button == PointerEventData.InputButton.Right)
            {
                OnRightClick?.Invoke(e);
                return;
            }
            if (e.button != PointerEventData.InputButton.Left) return;
            if (e.clickCount >= 2 && OnDoubleClick != null) OnDoubleClick(e);
            else OnClick?.Invoke(e);
        }

        public void OnPointerEnter(PointerEventData e) => OnEnter?.Invoke(e);

        public void OnPointerExit(PointerEventData e) => OnExit?.Invoke(e);

        public void OnInitializePotentialDrag(PointerEventData e)
        {
            if (OnDrag == null) Bubble<IInitializePotentialDragHandler>(e, ExecuteEvents.initializePotentialDrag);
        }

        void IBeginDragHandler.OnBeginDrag(PointerEventData e)
        {
            if (OnDrag == null)
            {
                Forward(e);
                return;
            }
            OnBeginDrag?.Invoke(e);
        }

        void IDragHandler.OnDrag(PointerEventData e)
        {
            if (OnDrag != null) OnDrag(e);
        }

        void IEndDragHandler.OnEndDrag(PointerEventData e)
        {
            if (OnDrag != null) OnEndDrag?.Invoke(e);
        }

        public void OnScroll(PointerEventData e)
        {
            if (OnWheel != null) OnWheel(e);
            else Bubble<IScrollHandler>(e, ExecuteEvents.scrollHandler);
        }

        void LateUpdate() => OnLateUpdate?.Invoke();

        void OnDestroy() => OnDestroyed?.Invoke();

        // sem handler proprio: o evento segue para o pai (como o bubbling do DOM), ex. arrastar a janela por um slot
        void Bubble<T>(PointerEventData e, ExecuteEvents.EventFunction<T> fn) where T : IEventSystemHandler
        {
            var p = transform.parent;
            if (!p) return;
            var target = ExecuteEvents.GetEventHandler<T>(p.gameObject);
            if (target) ExecuteEvents.Execute(target, e, fn);
        }

        // arrasto sem OnDrag: o pai (janela/ScrollRect) assume o arrasto
        void Forward(PointerEventData e)
        {
            var p = transform.parent;
            if (!p) return;
            var target = ExecuteEvents.GetEventHandler<IBeginDragHandler>(p.gameObject);
            if (!target) return;
            e.pointerDrag = target;
            ExecuteEvents.Execute(target, e, ExecuteEvents.beginDragHandler);
        }
    }
}
