// PrivateShopWnd.uc (spec 07 §5.3, #0036) sem Unity, nos 4 modos: PT_Buy (comprar da loja de venda de outro), PT_Sell
// (vender para a loja de compra de outro), PT_SellList (montar a propria loja de venda) e PT_BuyList (montar a de compra).
// Os dialogos encadeiam: preco (NumberPad sm322/sm585) -> confirmacao de preco fora da faixa (sm569) -> quantidade (sm72 /
// sm570); o OK confere os precos (sm569) antes de comprar ou vender.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class PrivateShopScript
    {
        public const int DialogTopToBottom = 111, DialogBottomToTop = 222, DialogAskPrice = 333, DialogConfirmPrice = 444,
            DialogEditMessage = 555, DialogConfirmPriceFinal = 666;

        public enum Mode
        {
            None,
            Buy,
            Sell,
            BuyList,
            SellList,
        }

        public Mode Type;
        public int MerchantId = -1;
        public bool Bulk;
        public long Adena;
        public int SellMax, BuyMax;
        public string MessageSell = "", MessageBuy = "";
        public readonly List<ListItem> Top = new(), Bottom = new();

        /// <summary>Um dialogo: tipo, sysmsg (com o nome), ParamInt, os 3 reservados, DefaultOK e o edit.</summary>
        public sealed class Ask
        {
            public int DlgId, MsgId, R1, R3;
            public long R2, ParamInt;
            public EDialogType Type = EDialogType.NumberPad;
            public string Name = "", EditType, Init;
            public int MaxLength = -1;
            public bool DefaultOk = true;
        }

        /// <summary>O pedido do OK.</summary>
        public sealed class Send
        {
            /// <summary>sellList, buyList, buy, sell.</summary>
            public string Kind;
            public bool Bulk;
            public int MerchantId;
            public List<ListItem> Items = new();
        }

        public void Clear()
        {
            Type = Mode.None;
            MerchantId = -1;
            Bulk = false;
            Top.Clear();
            Bottom.Clear();
        }

        /// <summary>HandleOpenWindow: type buy/sell/buyList/sellList, adena, userID, bulk.</summary>
        public void Open(string type, long adena, int userId, bool bulk)
        {
            Clear();
            Adena = adena;
            MerchantId = userId;
            Bulk = bulk;
            Type = type switch { "buy" => Mode.Buy, "sell" => Mode.Sell, "buyList" => Mode.BuyList, "sellList" => Mode.SellList, _ => Mode.None };
        }

        /// <summary>HandleAddItem: topList (no PT_Sell, ItemNum 0 = desabilitado) ou bottomList.</summary>
        public void Add(string target, ListItem i)
        {
            if (target == "topList")
            {
                if (Type == Mode.Sell && i.ItemNum == 0) i.ShowCount = false;
                Top.Add(i);
            }
            else if (target == "bottomList") Bottom.Add(i);
        }

        bool ByServer => Type == Mode.Buy || Type == Mode.SellList;

        int Find(List<ListItem> l, ListItem key) => ByServer ? Lists.FindServer(l, key.ServerId) : Lists.FindClass(l, key.ClassId);
        int FindId(List<ListItem> l, int id, bool byServer) => byServer ? Lists.FindServer(l, id) : Lists.FindClass(l, id);

        /// <summary>IsProperPrice: com DefaultPrice, o preco tem de ficar entre DefaultPrice/5 e DefaultPrice*5 (exclusive).</summary>
        public static bool IsProperPrice(ListItem i, long price) => !(i.DefaultPrice > 0 && (price <= i.DefaultPrice / 5 || price >= i.DefaultPrice * 5));

        /// <summary>Tooltip de cada lista, textos, botao OK e titulo (HandleOpenWindow).</summary>
        public (string top, string bottom, int topText, int bottomText, int priceText, int okName, bool manage) Look() => Type switch
        {
            Mode.BuyList => ("Inventory", "InventoryPrice1", 1, 502, 142, 428, true),
            Mode.SellList => ("Inventory", "InventoryPrice1", 1, 137, 143, 428, true),
            Mode.Buy => ("InventoryPrice1", "Inventory", 137, 139, 142, 140, false),
            Mode.Sell => ("InventoryPrice2PrivateShop", "Inventory", 503, 137, 143, 140, false),
            _ => ("Inventory", "Inventory", 0, 0, 0, 140, false),
        };

        /// <summary>Titulo: ss498 "(" + modo + ")", e " - nome" do dono nas lojas dos outros.</summary>
        public string Title(Func<int, string> ss, string owner) => Type switch
        {
            Mode.BuyList => ss(498) + "(" + ss(1434) + ")",
            Mode.SellList => ss(498) + "(" + ss(1157) + ")",
            Mode.Buy => ss(498) + "(" + ss(Bulk ? 1198 : 1157) + ") - " + owner,
            Mode.Sell => ss(498) + "(" + ss(1434) + ") - " + owner,
            _ => ss(498),
        };

        /// <summary>AdjustPrice: soma preco x quantidade embaixo.</summary>
        public long Price
        {
            get
            {
                long p = 0;
                foreach (var b in Bottom) p += b.Price * b.ItemNum;
                return p < 0 ? 0 : p;
            }
        }

        /// <summary>AdjustCount: "(n/max)" nas lojas proprias.</summary>
        public string CountText => Type == Mode.SellList ? "(" + Bottom.Count + "/" + SellMax + ")" : Type == Mode.BuyList ? "(" + Bottom.Count + "/" + BuyMax + ")" : "";

        /// <summary>AdjustWeight (PT_Buy): peso x quantidade embaixo.</summary>
        public long Weight
        {
            get
            {
                long w = 0;
                foreach (var b in Bottom) w += b.Weight * b.ItemNum;
                return w;
            }
        }

        static void MergeAdd(List<ListItem> l, int at, ListItem i)
        {
            if (at >= 0 && i.Stackable) l[at].ItemNum += i.ItemNum;
            else l.Add(i);
        }

        /// <summary>MoveItemTopToBottom.</summary>
        public Ask TopToBottom(int index, bool all)
        {
            if (index < 0 || index >= Top.Count) return null;
            var info = Top[index];
            if (Type == Mode.SellList)
                return new Ask { DlgId = DialogAskPrice, R1 = info.ServerId, R3 = all ? 1 : 0, EditType = "number", ParamInt = -1, MsgId = 322 };
            if (Type == Mode.BuyList)
                return new Ask { DlgId = DialogAskPrice, R1 = info.ClassId, EditType = "number", ParamInt = -1, MsgId = 585 };
            if (Type != Mode.Sell && Type != Mode.Buy) return null;
            if (Type == Mode.Sell && info.ItemNum == 0) return null;
            if (Type == Mode.Buy && Bulk)
            {
                Bottom.AddRange(Top);
                Top.Clear();
                return null;
            }
            if (!all && info.Stackable && info.ItemNum > 1)
                return new Ask { DlgId = DialogTopToBottom, R1 = Type == Mode.Sell ? info.ClassId : info.ServerId, ParamInt = info.ItemNum, MsgId = 72, Name = info.Name };
            MergeAdd(Bottom, Find(Bottom, info), info.Copy());
            Top.RemoveAt(index);
            return null;
        }

        /// <summary>MoveItemBottomToTop (no PT_BuyList o item so sai de baixo).</summary>
        public Ask BottomToTop(int index, bool all)
        {
            if (index < 0 || index >= Bottom.Count) return null;
            var info = Bottom[index];
            if (Type == Mode.Buy && Bulk)
            {
                Top.AddRange(Bottom);
                Bottom.Clear();
                return null;
            }
            if (!all && info.Stackable && info.ItemNum > 1)
                return new Ask { DlgId = DialogBottomToTop, R1 = ByServer ? info.ServerId : info.ClassId, ParamInt = info.ItemNum, MsgId = Type == Mode.BuyList ? 571 : 72, Name = info.Name };
            Bottom.RemoveAt(index);
            if (Type != Mode.BuyList) MergeAdd(Top, Find(Top, info), info);
            return null;
        }

        /// <summary>MessageButton: titulo da loja (OKCancelInput sm334, maximo 29, com o titulo atual).</summary>
        public Ask Message() => new()
        {
            DlgId = DialogEditMessage, Type = EDialogType.OKCancelInput, MsgId = 334, MaxLength = 29, Init = Type == Mode.SellList ? MessageSell : MessageBuy,
        };

        /// <summary>HandleDialogOK: devolve o proximo dialogo da cadeia (ou null). `text` e o edit; r1/r2/r3 os reservados.</summary>
        public Ask DialogOk(int id, string text, int r1, long r2, int r3)
        {
            long.TryParse(text, out var input);
            if (id == DialogEditMessage)
            {
                if (Type == Mode.SellList) MessageSell = text ?? "";
                else if (Type == Mode.BuyList) MessageBuy = text ?? "";
                return null;
            }
            if (Type == Mode.SellList) return SellListOk(id, input, r1, r2, r3);
            if (Type == Mode.BuyList) return BuyListOk(id, input, r1, r2);
            if (Type == Mode.Buy || Type == Mode.Sell) return TradeOk(id, input, r1);
            return null;
        }

        Ask SellListOk(int id, long input, int r1, long r2, int r3)
        {
            if (id == DialogTopToBottom && input > 0)
            {
                var ti = Lists.FindServer(Top, r1);
                if (ti < 0) return null;
                var top = Top[ti];
                var bi = Lists.FindServer(Bottom, r1);
                if (bi >= 0 && Bottom[bi].Stackable)
                {
                    Bottom[bi].Price = r2;
                    Bottom[bi].ItemNum += Math.Min(input, top.ItemNum);
                }
                else
                {
                    var n = top.Copy();
                    n.ItemNum = Math.Min(input, top.ItemNum);
                    n.Price = r2;
                    Bottom.Add(n);
                }
                top.ItemNum -= input;
                if (top.ItemNum <= 0) Top.RemoveAt(ti);
                return null;
            }
            if (id == DialogBottomToTop && input > 0)
            {
                var bi = Lists.FindServer(Bottom, r1);
                if (bi < 0) return null;
                var b = Bottom[bi];
                var ti = Lists.FindServer(Top, r1);
                if (ti >= 0 && b.Stackable) Top[ti].ItemNum += Math.Min(input, b.ItemNum);
                else
                {
                    var n = b.Copy();
                    n.ItemNum = Math.Min(input, b.ItemNum);
                    Top.Add(n);
                }
                b.ItemNum -= input;
                if (b.ItemNum <= 0) Bottom.RemoveAt(bi);
                return null;
            }
            if (id == DialogConfirmPrice) return PlaceSell(r1, r2, r3);
            if (id == DialogAskPrice && input > 0)
            {
                var ti = Lists.FindServer(Top, r1);
                if (ti < 0) return null;
                var top = Top[ti];
                if (input >= 2000000000) return new Ask { Type = EDialogType.Notice, MsgId = 1369, DefaultOk = false };
                if (!IsProperPrice(top, input)) return new Ask { DlgId = DialogConfirmPrice, Type = EDialogType.Warning, MsgId = 569, R1 = top.ServerId, R2 = input, R3 = r3 };
                if (r3 == 0 && top.Stackable)
                    return new Ask { DlgId = DialogTopToBottom, R1 = top.ServerId, R2 = input, R3 = r3, ParamInt = top.ItemNum, MsgId = 72, Name = top.Name };
                return PlaceSell(r1, input, r3);
            }
            return null;
        }

        /// <summary>Preco aceito na venda: sem Alt e empilhavel pede a quantidade; senao 1 (ou tudo com Alt) vai para baixo.</summary>
        Ask PlaceSell(int serverId, long price, int all)
        {
            var ti = Lists.FindServer(Top, serverId);
            if (ti < 0) return null;
            var top = Top[ti];
            if (all == 0 && top.Stackable && top.ItemNum != 1)
                return new Ask { DlgId = DialogTopToBottom, R1 = top.ServerId, R2 = price, R3 = all, ParamInt = top.ItemNum == 0 ? 1 : top.ItemNum, MsgId = 72, Name = top.Name };
            var n = top.Copy();
            if (all == 0) n.ItemNum = 1;
            n.Price = price;
            var bi = Lists.FindServer(Bottom, n.ServerId);
            if (bi >= 0 && n.Stackable)
            {
                n.ItemNum += Bottom[bi].ItemNum;
                Bottom[bi] = n;
            }
            else Bottom.Add(n);
            Top.RemoveAt(ti);
            return null;
        }

        Ask BuyListOk(int id, long input, int r1, long r2)
        {
            if (id == DialogTopToBottom && input > 0)
            {
                var ti = Lists.FindClass(Top, r1);
                if (ti < 0) return null;
                var top = Top[ti];
                var bi = Lists.FindClass(Bottom, r1);
                if (bi >= 0 && Bottom[bi].Stackable)
                {
                    Bottom[bi].Price = r2;
                    Bottom[bi].ItemNum += input;
                    return null;
                }
                if (bi >= 0) Bottom.RemoveAll(b => b.ClassId == r1);
                if (top.Stackable)
                {
                    var n = top.Copy();
                    n.ItemNum = input;
                    n.Price = r2;
                    Bottom.Add(n);
                }
                else
                    for (var k = 0; k < input; k++)
                    {
                        var n = top.Copy();
                        n.ItemNum = 1;
                        n.Price = r2;
                        Bottom.Add(n);
                    }
                return null;
            }
            if (id == DialogBottomToTop && input > 0)
            {
                var bi = Lists.FindClass(Bottom, r1);
                if (bi < 0) return null;
                Bottom[bi].ItemNum -= input;
                if (Bottom[bi].ItemNum <= 0) Bottom.RemoveAt(bi);
                return null;
            }
            if (id == DialogConfirmPrice)
            {
                var ti = Lists.FindClass(Top, r1);
                if (ti < 0) return null;
                var top = Top[ti];
                return new Ask { DlgId = DialogTopToBottom, R1 = top.ClassId, R2 = r2, ParamInt = top.ItemNum, MsgId = 570, Name = top.Name };
            }
            if (id == DialogAskPrice && input > 0)
            {
                var ti = Lists.FindClass(Top, r1);
                if (ti < 0) return null;
                var top = Top[ti];
                if (input >= 2000000000) return new Ask { Type = EDialogType.Notice, MsgId = 1369, DefaultOk = false };
                if (!IsProperPrice(top, input)) return new Ask { DlgId = DialogConfirmPrice, Type = EDialogType.Warning, MsgId = 569, R1 = top.ClassId, R2 = input };
                return new Ask { DlgId = DialogTopToBottom, R1 = top.ClassId, R2 = input, ParamInt = top.ItemNum, MsgId = 570, Name = top.Name };
            }
            return null;
        }

        Ask TradeOk(int id, long input, int r1)
        {
            var byServer = Type == Mode.Buy;
            if (id == DialogTopToBottom && input > 0)
            {
                var ti = FindId(Top, r1, byServer);
                if (ti < 0) return null;
                var top = Top[ti];
                // PT_Sell: pedir mais do que a loja quer comprar avisa (sm1036)
                if (Type == Mode.Sell && top.Reserved < input) return new Ask { Type = EDialogType.Notice, MsgId = 1036, DefaultOk = false };
                var bi = FindId(Bottom, r1, byServer);
                if (bi >= 0) Bottom[bi].ItemNum += Math.Min(input, top.ItemNum);
                else
                {
                    var n = top.Copy();
                    n.ItemNum = Math.Min(input, top.ItemNum);
                    Bottom.Add(n);
                }
                top.ItemNum -= input;
                if (top.ItemNum <= 0) Top.RemoveAt(ti);
                return null;
            }
            if (id == DialogBottomToTop && input > 0)
            {
                var bi = FindId(Bottom, r1, byServer);
                if (bi < 0) return null;
                var b = Bottom[bi];
                var ti = FindId(Top, r1, byServer);
                if (ti >= 0) Top[ti].ItemNum += Math.Min(input, b.ItemNum);
                else
                {
                    var n = b.Copy();
                    n.ItemNum = Math.Min(input, b.ItemNum);
                    Top.Add(n);
                }
                b.ItemNum -= input;
                if (b.ItemNum <= 0) Bottom.RemoveAt(bi);
                return null;
            }
            return null;
        }

        /// <summary>
        /// HandleOKButton(bPriceCheck): na compra e na venda para os outros, um preco fora da faixa para e pede a confirmacao
        /// sm569 (DIALOG_CONFIRM_PRICE_FINAL repete o OK sem a conferencia).
        /// </summary>
        public (Send send, Ask ask) Ok(bool priceCheck)
        {
            if ((Type == Mode.Buy || Type == Mode.Sell) && priceCheck)
                foreach (var b in Bottom)
                    if (!IsProperPrice(b, b.Price))
                        return (null, new Ask { DlgId = DialogConfirmPriceFinal, Type = EDialogType.Warning, MsgId = 569 });
            var s = new Send { Bulk = Bulk, MerchantId = MerchantId, Items = new List<ListItem>(Bottom) };
            s.Kind = Type switch { Mode.SellList => "sellList", Mode.BuyList => "buyList", Mode.Buy => "buy", Mode.Sell => "sell", _ => null };
            return (s.Kind == null ? null : s, null);
        }
    }
}
