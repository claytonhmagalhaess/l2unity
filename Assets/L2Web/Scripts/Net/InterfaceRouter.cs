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

        /// <summary>Ultimo pacote de cada janela (a janela le os itens daqui ou do param do evento).</summary>
        public WarehouseListInfo Warehouse;
        public StorageMaxCountInfo StorageMax;
        public List<DeliverTarget> DeliverTargets;
        public PackageSendableListInfo Deliver;
        public PrivateStoreManageInfo StoreManage;
        public PrivateStoreBuyListInfo StoreBuyList;
        public Action<PrivateStoreMsgInfo> OnPrivateStoreMsgBuy;

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

            // ---------------------------------------------------------------- armazem, frete e loja privada (T6/T12/T18)
            On(0x41, r => ShowWarehouse(StorePackets.ParseWarehouseDepositList(r)));
            On(0x42, r => ShowWarehouse(StorePackets.ParseWarehouseWithdrawList(r)));
            Ex(0x2e, r =>
            {
                StorageMax = StorePackets.ParseExStorageMaxCount(r);
                Emit(InterfaceEvents.StorageMaxCount(StorageMax));
            });
            On(0xc2, r =>
            {
                DeliverTargets = StorePackets.ParsePackageToList(r);
                Emit(InterfaceEvents.PackageToList(DeliverTargets));
            });
            On(0xc3, r =>
            {
                Deliver = StorePackets.ParsePackageSendableList(r);
                Emit(InterfaceEvents.PackageSendableList(Deliver));
            });
            On(0x9a, r => ShowStoreManage(StorePackets.ParsePrivateStoreManageListSell(r)));
            On(0xb7, r => ShowStoreManage(StorePackets.ParsePrivateStoreManageListBuy(r)));
            On(0xb8, r =>
            {
                StoreBuyList = StorePackets.ParsePrivateStoreListBuy(r);
                Emit(InterfaceEvents.PrivateStoreBuyList(StoreBuyList));
            });
            // sem EV_: o titulo da loja de compra vai para o nome do personagem no mundo (como o PrivateStoreMsgSell no App)
            On(0xb9, r => OnPrivateStoreMsgBuy?.Invoke(StorePackets.ParsePrivateStoreMsgBuy(r)));

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

        void ShowWarehouse(WarehouseListInfo w)
        {
            Warehouse = w;
            Emit(InterfaceEvents.Warehouse(w));
        }

        void ShowStoreManage(PrivateStoreManageInfo m)
        {
            StoreManage = m;
            Emit(InterfaceEvents.PrivateStoreManage(m));
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
