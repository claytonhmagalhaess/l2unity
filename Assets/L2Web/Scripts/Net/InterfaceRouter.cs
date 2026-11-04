// Tratadores dos pacotes das janelas da interface (#0046) que o App.cs ainda nao trata: le cada pacote (Net/*Packets),
// guarda o ultimo lido (para a janela consultar, como os natives GetXxx do original) e entrega os EV_* do InterfaceEvents
// ao barramento. O App cria um por GameClient; a UI so consome (L2Events.Register e os OnXxx abaixo).
// Os opcodes daqui nao se repetem no App.cs (ReceivedPacketTests junta os dois para a cobertura).
using System;
using System.Collections.Generic;
using L2Web.UI;

namespace L2Web.Net
{
    public sealed class InterfaceRouter
    {
        readonly GameClient gc;
        readonly Action<List<PacketEvents.Event>> emit;
        readonly List<Action> offs = new List<Action>();
        readonly Dictionary<int, Action<PacketReader>> ex = new Dictionary<int, Action<PacketReader>>();

        /// <summary>Macros do personagem (UIDATA_MACRO).</summary>
        public readonly MacroBook Macros = new MacroBook();
        public Action<SendMacroListInfo> OnMacroList;

        /// <param name="emit">Destino dos eventos (padrao: L2Events.Dispatch).</param>
        public InterfaceRouter(GameClient gc, Action<List<PacketEvents.Event>> emit = null)
        {
            this.gc = gc;
            this.emit = emit ?? (l => L2Events.Dispatch(l));

            // ---------------------------------------------------------------- macro (T8)
            On(0xe7, r =>
            {
                var m = MacroPackets.ParseSendMacroList(r);
                var before = new List<int>(Macros.Macros.Keys);
                if (Macros.Apply(m))
                {
                    var gone = before.FindAll(id => !Macros.Macros.ContainsKey(id));
                    Emit(InterfaceEvents.MacroDeleted(gone));
                    Emit(InterfaceEvents.MacroUpdate());
                }
                OnMacroList?.Invoke(m);
            });

            offs.Add(gc.On(0xfe, r =>
            {
                if (ex.TryGetValue(r.H(), out var fn)) fn(r);
            }));
        }

        /// <summary>RequestMacroList do script: EV_MacroList com o cache atual.</summary>
        public void RequestMacroList() => Emit(new List<PacketEvents.Event> { InterfaceEvents.MacroList(Macros) });

        /// <summary>Remove os tratadores do GameClient.</summary>
        public void Dispose()
        {
            foreach (var off in offs) off();
            offs.Clear();
        }

        void On(int op, Action<PacketReader> fn) => offs.Add(gc.On(op, fn));

        /// <summary>Pacote Ex (0xfe + h sub).</summary>
        void Ex(int sub, Action<PacketReader> fn) => ex[sub] = fn;

        void Emit(List<PacketEvents.Event> l)
        {
            if (l.Count > 0) emit(l);
        }
    }
}
