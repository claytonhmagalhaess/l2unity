// Agendador de acoes no relogio da cena (restou do antigo Effects do l2web: os efeitos aproximados - faisca, brilho,
// projetil luminoso, flecha de haste - foram substituidos pelo sistema de particulas do cliente em Render/Fx, spec 09).
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.Render
{
    public class Effects
    {
        sealed class Pending
        {
            public float At;
            public Action Run;
        }

        /// <summary>Raiz (mantida para a cena; sem filhos).</summary>
        public readonly Transform Group;
        readonly List<Pending> pending = new();
        float now;

        public Effects()
        {
            Group = new GameObject("effects").transform;
        }

        /// <summary>Agenda uma funcao para daqui a `delay` segundos (no relogio da cena).</summary>
        public void Later(float delay, Action run)
        {
            pending.Add(new Pending { At = now + Mathf.Max(0, delay), Run = run });
        }

        public void Update(float dt)
        {
            now += dt;
            for (var i = pending.Count - 1; i >= 0; i--)
            {
                if (i >= pending.Count) continue; // um Run pode ter mexido na lista
                if (pending[i].At <= now)
                {
                    var p = pending[i];
                    pending.RemoveAt(i);
                    p.Run();
                }
            }
        }

        /// <summary>Cancela o que estava agendado (troca de cena).</summary>
        public void Clear()
        {
            pending.Clear();
        }
    }
}
