// SelectDeliverWnd e DeliverWnd do xdat (#0042) ligados ao DeliverScript pelos eventos do InterfaceRouter: PackageToList
// (EV_SelectDeliverClear, EV_SelectDeliverAddName name/id) e PackageSendableList (EV_DeliverOpenWindow adena/destinationID,
// EV_DeliverAddItem ItemInfo com reserved = dbID).
using System;
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public sealed class DeliverView
    {
        public readonly L2Wnd Select, Wnd;
        public readonly DeliverScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        int selTop = -1, selBottom = -1;

        public DeliverView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Select = new L2Wnd("SelectDeliverWnd", layer, new WndOpts { AriaLabel = "Frete: destinatário" });
            Wnd = new L2Wnd("DeliverWnd", layer, new WndOpts { AriaLabel = "Frete" });
            var combo = Select.Combo("SelectDeliverCombo");
            if (combo != null) combo.OnSelect = i => S.Selected = i;
            L2Events.Register(Ev.EV_SelectDeliverClear, _ =>
            {
                S.ClearTargets();
                RenderTargets();
                Select.Show();
            });
            L2Events.Register(Ev.EV_SelectDeliverAddName, p =>
            {
                string name = null;
                var id = 0;
                L2Param.ParseString(p, "name", ref name);
                L2Param.ParseInt(p, "id", ref id);
                S.AddTarget(name, id);
                RenderTargets();
            });
            Select.OnClick("OKButton", () =>
            {
                var id = S.SelectOk();
                if (id != null) send(StorePackets.RequestPackageSendableItemList(id.Value));
                Select.Hide();
            });
            Select.OnClick("CancelButton", Select.Hide);

            L2Events.Register(Ev.EV_DeliverOpenWindow, Open);
            L2Events.Register(Ev.EV_DeliverAddItem, p =>
            {
                S.Top.Add(ListWnd.FromParam(p));
                Render();
            });
            Wnd.OnClick("UpButton", () => Ask(S.BottomToTop(selBottom, false)));
            Wnd.OnClick("DownButton", () => Ask(S.TopToBottom(selTop, false)));
            Wnd.OnClick("OKButton", () =>
            {
                send(StorePackets.RequestPackageSend(S.TargetId, S.Ok()));
                Wnd.Hide();
            });
            Wnd.OnClick("CancelButton", () =>
            {
                S.Clear();
                Wnd.Hide();
            });
            // OnReceivedCloseUI (Esc) = CancelButton
            Wnd.OnClose = S.Clear;
        }

        void RenderTargets()
        {
            var c = Select.Combo("SelectDeliverCombo");
            if (c == null) return;
            var l = new List<string>();
            foreach (var (n, _) in S.Targets) l.Add(n);
            c.SetItems(l);
            c.Select(S.Selected);
        }

        /// <summary>HandleOpenWindow: limpa, adena (com o numero por extenso no tooltip), fecha o inventario e mostra.</summary>
        void Open(string p)
        {
            int adena = 0, dest = 0;
            L2Param.ParseInt(p, "adena", ref adena);
            L2Param.ParseInt(p, "destinationID", ref dest);
            S.Open(adena, dest);
            Wnd.Text("AdenaText", L2Tooltip.MakeCostString(adena.ToString()));
            var at = Wnd.Get("AdenaText");
            if (at) UiTooltip.Set(at.gameObject, L2NumText.Convert(adena.ToString(), true));
            ui.Inv.Hide();
            Render();
            Wnd.Show();
        }

        void Render()
        {
            selTop = selBottom = -1;
            ListWnd.Fill(Wnd, "TopList", S.Top, "Inventory", i =>
            {
                selTop = i;
                // OnClickItem na TopList fecha o NumberPad que for desta janela
                if (ui.Dialog.IsMine("DeliverWnd") && ui.Dialog.Visible) ui.Dialog.Hide();
            }, i => Ask(S.TopToBottom(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "BottomList") != null) Ask(S.TopToBottom(i, alt));
            });
            ListWnd.Fill(Wnd, "BottomList", S.Bottom, "Inventory", i => selBottom = i, i => Ask(S.BottomToTop(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "TopList") != null) Ask(S.BottomToTop(i, alt));
            });
            Wnd.Text("PriceText", L2Tooltip.MakeCostString(S.Price.ToString()));
            var pt = Wnd.Get("PriceText");
            if (pt) UiTooltip.Set(pt.gameObject, L2NumText.Convert(S.Price.ToString(), true));
        }

        void Ask(DeliverScript.Ask a)
        {
            if (a == null)
            {
                Render();
                return;
            }
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.SetParamInt((int)a.ParamInt);
            ui.Dialog.SetDefaultOK();
            int id = a.DlgId, sid = a.ServerId;
            ui.Dialog.Ask(EDialogType.NumberPad, GameData.SystemMessage(72, new List<string> { a.Name, "" }).Text, "DeliverWnd", (ok, text) =>
            {
                if (!ok) return;
                long.TryParse(text, out var n);
                S.DialogOk(id, n, sid);
                Render();
            });
        }
    }
}
