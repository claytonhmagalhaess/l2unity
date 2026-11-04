// WarehouseWnd do xdat (#0030) ligado ao WarehouseScript pelos eventos do InterfaceRouter: EV_WarehouseOpenWindow (type,
// category, adena), EV_WarehouseAddItem (ItemInfo, reserved = dbID) e EV_SetMaxCount (warehousePrivate).
using System;
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public sealed class WarehouseView
    {
        public readonly L2Wnd Wnd;
        public readonly WarehouseScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        int selTop = -1, selBottom = -1;

        public WarehouseView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Wnd = new L2Wnd("WarehouseWnd", layer, new WndOpts { AriaLabel = "Armazém" });
            L2Events.Register(Ev.EV_WarehouseOpenWindow, Open);
            L2Events.Register(Ev.EV_WarehouseAddItem, p =>
            {
                S.Top.Add(ListWnd.FromParam(p));
                Render();
            });
            L2Events.Register(Ev.EV_SetMaxCount, p => L2Param.ParseInt(p, "warehousePrivate", ref S.MaxPrivateCount));
            Wnd.OnClick("UpButton", () => Ask(S.BottomToTop(selBottom, false)));
            Wnd.OnClick("DownButton", () => Ask(S.TopToBottom(selTop, false)));
            Wnd.OnClick("OKButton", () =>
            {
                var items = S.Ok();
                send(S.Deposit ? StorePackets.SendWarehouseDepositList(items) : StorePackets.SendWarehouseWithdrawList(items));
                Wnd.Hide();
            });
            Wnd.OnClick("CancelButton", () =>
            {
                S.Clear();
                Wnd.Hide();
            });
        }

        /// <summary>HandleOpenWindow: titulo pela categoria, adena, fecha o inventario, textos e o contador do tipo.</summary>
        void Open(string p)
        {
            string type = null;
            int cat = 0, adena = 0;
            L2Param.ParseString(p, "type", ref type);
            L2Param.ParseInt(p, "category", ref cat);
            L2Param.ParseInt(p, "adena", ref adena);
            S.Open(type, cat, adena);
            if (S.Title > 0) Wnd.SetTitle(GameData.SysString(S.Title, ""));
            Wnd.Text("AdenaText", L2Tooltip.MakeCostString(adena.ToString()));
            var at = Wnd.Get("AdenaText");
            if (at) UiTooltip.Set(at.gameObject, L2NumText.Convert(adena.ToString(), true));
            ui.Inv.Hide();
            var (top, bottom, bottomCount) = S.Texts;
            Wnd.Text("TopText", GameData.SysString(top, ""));
            Wnd.Text("BottomText", GameData.SysString(bottom, ""));
            Wnd.ShowCtrl("BottomCountText", bottomCount);
            Wnd.ShowCtrl("TopCountText", !bottomCount);
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
                if (ui.Dialog.IsMine("WarehouseWnd") && ui.Dialog.Visible) ui.Dialog.Hide();
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
            Wnd.Text(S.Deposit ? "BottomCountText" : "TopCountText", S.CountText);
        }

        void Ask(WarehouseScript.Ask a)
        {
            if (a == null)
            {
                Render();
                return;
            }
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.SetParamInt((int)a.ParamInt);
            ui.Dialog.SetDefaultOK();
            int id = a.DlgId, cls = a.ClassId;
            ui.Dialog.Ask(EDialogType.NumberPad, GameData.SystemMessage(72, new List<string> { a.Name, "" }).Text, "WarehouseWnd", (ok, text) =>
            {
                if (!ok) return;
                long.TryParse(text, out var n);
                S.DialogOk(id, n, cls);
                Render();
            });
        }
    }
}
