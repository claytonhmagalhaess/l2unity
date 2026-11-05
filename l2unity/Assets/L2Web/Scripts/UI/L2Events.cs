// Barramento de eventos EV_* (o FUN_100d1790 do NWindow.dll, 93 §4): as janelas registram os ids que tratam
// (registerEvent do script) e recebem o param "Chave=Valor" de cada evento despachado.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.UI
{
    public static class L2Events
    {
        static readonly Dictionary<int, List<Action<string>>> handlers = new();

        /// <summary>Observador de todos os eventos despachados (log do -l2events e testes).</summary>
        public static Action<PacketEvents.Event> Recorder;

        /// <summary>registerEvent(id): a janela passa a receber o evento.</summary>
        public static void Register(int id, Action<string> handler)
        {
            if (!handlers.TryGetValue(id, out var l)) handlers[id] = l = new List<Action<string>>();
            l.Add(handler);
        }

        public static void Unregister(int id, Action<string> handler)
        {
            if (handlers.TryGetValue(id, out var l)) l.Remove(handler);
        }

        public static void Clear() => handlers.Clear();

        public static void Dispatch(PacketEvents.Event e)
        {
            Recorder?.Invoke(e);
            if (!handlers.TryGetValue(e.Id, out var l)) return;
            foreach (var h in l.ToArray())
            {
                try
                {
                    h(e.Param);
                }
                catch (Exception ex)
                {
                    Debug.LogWarning($"evento {e}: {ex.Message}");
                }
            }
        }

        public static void Dispatch(IEnumerable<PacketEvents.Event> list)
        {
            foreach (var e in list) Dispatch(e);
        }
    }
}
