// PrivateShopWnd do xdat (#0036) ligado ao PrivateShopScript: EV_PrivateShopOpenWindow (type, adena, userID, bulk) e
// EV_PrivateShopAddItem (target topList/bottomList + ItemInfo), do 0x9b (App), 0x9a/0xb7/0xb8 (InterfaceRouter); EV_SetMaxCount.
using System;
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;

namespace L2Web.UI
{
    public sealed class PrivateShopView
    {
        public readonly L2Wnd Wnd;
        public readonly PrivateShopScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        int selTop = -1, selBottom = -1;
        bool closing;
        /// <summary>Nome do dono da loja pelo objectId.</summary>
        public Func<int, string> NameOf = _ => "";

        public PrivateShopView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Wnd = new L2Wnd("PrivateShopWnd", layer, new WndOpts { AriaLabel = "Loja privada" });
            L2Events.Register(Ev.EV_PrivateShopOpenWindow, Open);
            L2Events.Register(Ev.EV_PrivateShopAddItem, p =>
            {
                string target = null;
                L2Param.ParseString(p, "target", ref target);
                S.Add(target, ListWnd.FromParam(p));
                Render();
            });
            L2Events.Register(Ev.EV_SetMaxCount, p =>
            {
                L2Param.ParseInt(p, "privateShopSell", ref S.SellMax);
                L2Param.ParseInt(p, "privateShopBuy", ref S.BuyMax);
            });
            Wnd.OnClick("UpButton", () => Ask(S.BottomToTop(selBottom, false)));
            Wnd.OnClick("DownButton", () => Ask(S.TopToBottom(selTop, false)));
            Wnd.OnClick("OKButton", () => Ok(true));
            Wnd.OnClick("StopButton", () =>
            {
                Quit();
                closing = true;
                Wnd.Hide();
            });
            Wnd.OnClick("MessageButton", () => Ask(S.Message()));
            // OnSendPacketWhenHiding: fechar pela moldura tambem desmonta a loja propria
            Wnd.OnClose = () =>
            {
                if (!closing) Quit();
                closing = false;
            };
        }

        /// <summary>RequestQuit: so nas lojas proprias (RequestQuitPrivateShop buy/sell).</summary>
        void Quit()
        {
            if (S.Type == PrivateShopScript.Mode.BuyList) send(StorePackets.RequestPrivateStoreQuitBuy());
            else if (S.Type == PrivateShopScript.Mode.SellList) send(StorePackets.RequestPrivateStoreQuitSell());
        }

        void Open(string p)
        {
            string type = null;
            int adena = 0, user = 0, bulk = 0;
            L2Param.ParseString(p, "type", ref type);
            L2Param.ParseInt(p, "adena", ref adena);
            L2Param.ParseInt(p, "userID", ref user);
            L2Param.ParseInt(p, "bulk", ref bulk);
            S.Open(type, adena, user, bulk > 0);
            Wnd.Text("AdenaText", L2Tooltip.MakeCostString(adena.ToString()));
            ui.Inv.Hide();
            var look = S.Look();
            Wnd.Text("TopText", GameData.SysString(look.topText, ""));
            Wnd.Text("BottomText", GameData.SysString(look.bottomText, ""));
            Wnd.Text("PriceConstText", GameData.SysString(look.priceText, ""));
            Wnd.LabelButton("OKButton", GameData.SysString(look.okName, ""));
            foreach (var n in new[] { "BottomCountText", "StopButton", "MessageButton" }) Wnd.ShowCtrl(n, look.manage);
            Wnd.ShowCtrl("CheckBulk", S.Type == PrivateShopScript.Mode.SellList);
            var cb = Wnd.Check("CheckBulk");
            if (cb) cb.isOn = S.Bulk;
            Wnd.SetTitle(S.Title(i => GameData.SysString(i, ""), NameOf(user)));
            Render();
            closing = false;
            Wnd.Show();
        }

        void Render()
        {
            var look = S.Look();
            selTop = selBottom = -1;
            ListWnd.Fill(Wnd, "TopList", S.Top, look.top, i =>
            {
                selTop = i;
                if (ui.Dialog.IsMine("PrivateShopWnd") && ui.Dialog.Visible) ui.Dialog.Hide();
            }, i => Ask(S.TopToBottom(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "BottomList") != null) Ask(S.TopToBottom(i, alt));
            });
            ListWnd.Fill(Wnd, "BottomList", S.Bottom, look.bottom, i => selBottom = i, i => Ask(S.BottomToTop(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "TopList") != null) Ask(S.BottomToTop(i, alt));
            });
            Wnd.Text("PriceText", L2Tooltip.MakeCostString(S.Price.ToString()));
            Wnd.Text("BottomCountText", S.CountText);
        }

        /// <summary>Mostra o dialogo da cadeia e passa a resposta ao script (que pode pedir o proximo).</summary>
        void Ask(PrivateShopScript.Ask a)
        {
            Render();
            if (a == null) return;
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.SetParamInt((int)a.ParamInt);
            if (a.MaxLength >= 0) ui.Dialog.SetEditBoxMaxLength(a.MaxLength);
            if (a.DefaultOk) ui.Dialog.SetDefaultOK();
            var msg = GameData.SystemMessage(a.MsgId, new List<string> { a.Name, "" }).Text;
            ui.Dialog.Ask(a.Type, msg, "PrivateShopWnd", (ok, text) =>
            {
                if (!ok) return;
                if (a.DlgId == PrivateShopScript.DialogConfirmPriceFinal)
                {
                    Ok(false);
                    return;
                }
                if (a.DlgId == PrivateShopScript.DialogEditMessage)
                    send(S.Type == PrivateShopScript.Mode.SellList ? StorePackets.SetPrivateStoreMsgSell(text) : StorePackets.SetPrivateStoreMsgBuy(text));
                Ask(S.DialogOk(a.DlgId, text, a.R1, a.R2, a.R3));
            });
            if (a.EditType != null) ui.Dialog.SetEditType(a.EditType);
            if (a.Init != null) ui.Dialog.SetString(a.Init);
        }

        /// <summary>HandleOKButton: monta e manda o pedido do modo, ou pede a confirmacao do preco.</summary>
        void Ok(bool priceCheck)
        {
            var bulkBox = Wnd.Check("CheckBulk");
            if (bulkBox) S.Bulk = bulkBox.isOn;
            var (s, a) = S.Ok(priceCheck);
            if (a != null)
            {
                Ask(a);
                return;
            }
            if (s != null)
                switch (s.Kind)
                {
                    case "sellList":
                        send(StorePackets.SetPrivateStoreListSell(s.Bulk, s.Items.Select(i => (i.ServerId, (int)i.ItemNum, (int)i.Price)).ToList()));
                        break;
                    case "buyList":
                        send(StorePackets.SetPrivateStoreListBuy(s.Items.Select(i => (i.ClassId, i.Enchant, i.Damaged, (int)i.ItemNum, (int)i.Price)).ToList()));
                        break;
                    case "buy":
                        send(SocialPackets.PrivateStoreBuy(s.MerchantId, s.Items.Select(i => (i.ServerId, (int)i.ItemNum, (int)i.Price)).ToList()));
                        break;
                    case "sell":
                        send(StorePackets.RequestPrivateStoreSell(s.MerchantId, s.Items.Select(i => (i.ServerId, i.ClassId, i.Enchant, i.Damaged, (int)i.ItemNum, (int)i.Price)).ToList()));
                        break;
                }
            closing = true;
            Wnd.Hide();
            S.Clear();
        }
    }
}
