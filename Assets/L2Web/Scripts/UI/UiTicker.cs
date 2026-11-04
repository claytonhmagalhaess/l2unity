// Chamada por quadro enquanto o elemento esta ativo (o OnPaint de controles nativos que contam tempo, ex. NCProgressCtrl).
using System;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class UiTicker : MonoBehaviour
    {
        /// <summary>Recebe o tempo do quadro em segundos (sem a escala de tempo).</summary>
        public Action<float> OnTick;

        void Update() => OnTick?.Invoke(Time.unscaledDeltaTime);
    }
}
