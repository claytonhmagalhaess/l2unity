// Padrao de duas listas (spec 07 §2.2) e o ShopWnd.uc (#0029) sem Unity: TopList/BottomList, quantidade pelo NumberPad
// (DialogSetDefaultOK), Alt = pilha toda, preco somado, peso e o pedido do OK (RequestBuyItem / RequestSellItem). O
// ListItem e a lista sao reaproveitados pelo armazem, frete e loja privada.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    /// <summary>ItemInfo de um item numa ItemWindow das janelas de comercio.</summary>
    public sealed class ListItem
    {
        public int ClassId, ServerId, ConsumeType, Enchant, ItemType, Weight, Reserved, Damaged;
        public long ItemNum, Price, DefaultPrice;
        public bool ShowCount = true;
        public string Name = "";

        public ListItem Copy() => (ListItem)MemberwiseClone();
        public bool Stackable => L2Tooltip.IsStackable(ConsumeType);
    }

    public static class Lists
    {
        public static int FindClass(List<ListItem> l, int classId) => l.FindIndex(i => i.ClassId == classId);
        public static int FindServer(List<ListItem> l, int serverId) => l.FindIndex(i => i.ServerId == serverId);
    }

    public sealed class ShopScript
    {
        public const int DialogTopToBottom = 111, DialogBottomToTop = 222, DialogPreview = 333;

        public enum ShopType
        {
            None,
            Buy,
            Sell,
            Preview,
        }

        public ShopType Type;
        public int MerchantId = -1, NpcId = -1;
        public long Price;
        /// <summary>Peso somado no InvenWeight (so na compra).</summary>
        public long Weight;
        public long Adena;
        public readonly List<ListItem> Top = new(), Bottom = new();

        /// <summary>Pedido de quantidade (NumberPad com DefaultOK) ou de confirmacao.</summary>
        public sealed class Ask
        {
            public int DlgId, ClassId, MsgId;
            public long ParamInt;
            public EDialogType Type = EDialogType.NumberPad;
            public string Name = "";
        }

        /// <summary>Clear (ShopWnd.uc): zera tipo, mercador, preco, listas e peso.</summary>
        public void Clear()
        {
            Type = ShopType.None;
            MerchantId = NpcId = -1;
            Price = Weight = 0;
            Top.Clear();
            Bottom.Clear();
        }

        /// <summary>HandleOpenWindow: type buy/sell/preview, merchant, adena.</summary>
        public void Open(string type, int merchant, long adena, int npc = -1)
        {
            Clear();
            MerchantId = merchant;
            Adena = adena;
            Type = type == "buy" ? ShopType.Buy : type == "sell" ? ShopType.Sell : type == "preview" ? ShopType.Preview : ShopType.None;
            if (Type == ShopType.Preview) NpcId = npc;
        }

        /// <summary>HandleAddItem: na compra, com ItemNum &gt; 0 (estoque limitado) a quantidade aparece.</summary>
        public void Add(ListItem i)
        {
            i.ShowCount = Type != ShopType.Buy || i.ItemNum > 0;
            Top.Add(i);
        }

        /// <summary>Tooltip de cada lista (SetTooltipType do HandleOpenWindow).</summary>
        public (string top, string bottom) TooltipTypes() => Type == ShopType.Sell ? ("InventoryPrice2", "InventoryPrice2") : ("InventoryPrice1HideEnchantStackable", "InventoryPrice1");

        /// <summary>Textos (titulo, TopText, BottomText, PriceConstText) do HandleOpenWindow.</summary>
        public (int title, int top, int bottom, int price) Texts() => Type switch
        {
            ShopType.Sell => (136, 138, 137, 143),
            ShopType.Preview => (847, 811, 812, 813),
            _ => (136, 137, 139, 142),
        };

        void AddPrice(long v)
        {
            Price += v;
            if (Price < 0) Price = 0;
        }

        /// <summary>MoveItemTopToBottom: empilhavel com quantidade != 1 e sem Alt pede o numero (venda: ate o que tem; compra: -1).</summary>
        public Ask TopToBottom(int index, bool all)
        {
            if (index < 0 || index >= Top.Count) return null;
            var info = Top[index].Copy();
            if (!all && info.Stackable && info.ItemNum != 1)
                return new Ask { DlgId = DialogTopToBottom, ClassId = info.ClassId, MsgId = 72, ParamInt = Type == ShopType.Sell ? info.ItemNum : -1, Name = info.Name };
            info.ShowCount = false;
            if (Type == ShopType.Sell)
            {
                var b = Lists.FindClass(Bottom, info.ClassId);
                if (b >= 0 && info.Stackable) Bottom[b].ItemNum += info.ItemNum;
                else Bottom.Add(info);
                Top.RemoveAt(index);
            }
            else if (Type == ShopType.Buy)
            {
                info.ItemNum = 1;
                Bottom.Add(info);
                Weight += info.Weight * info.ItemNum;
            }
            else if (Type == ShopType.Preview)
            {
                info.ItemNum = 1;
                Bottom.Add(info);
            }
            AddPrice(info.Price * info.ItemNum);
            return null;
        }

        /// <summary>MoveItemBottomToTop: empilhavel sem Alt pede o numero.</summary>
        public Ask BottomToTop(int index, bool all)
        {
            if (index < 0 || index >= Bottom.Count) return null;
            var info = Bottom[index];
            if (!all && info.Stackable)
                return new Ask { DlgId = DialogBottomToTop, ClassId = info.ClassId, MsgId = 72, ParamInt = info.ItemNum, Name = info.Name };
            Bottom.RemoveAt(index);
            if (Type == ShopType.Sell)
            {
                var t = Lists.FindServer(Top, info.ServerId);
                if (t == -1) Top.Add(info);
                else Top[t].ItemNum += info.ItemNum;
            }
            else if (Type == ShopType.Buy) Weight -= info.Weight * info.ItemNum;
            AddPrice(-info.Price * info.ItemNum);
            return null;
        }

        /// <summary>HandleDialogOK (ShopWnd.uc): o numero do NumberPad move entre as listas (so &gt; 0).</summary>
        public void DialogOk(int id, long num, int classId)
        {
            if (id == DialogTopToBottom && num > 0)
            {
                var ti = Lists.FindClass(Top, classId);
                if (ti < 0) return;
                var top = Top[ti];
                if (Type == ShopType.Sell) num = Math.Min(num, top.ItemNum);
                var bi = Lists.FindClass(Bottom, classId);
                if (bi >= 0)
                {
                    Bottom[bi].ItemNum += num;
                    AddPrice(num * Bottom[bi].Price);
                }
                else
                {
                    var n = top.Copy();
                    n.ItemNum = num;
                    n.ShowCount = false;
                    Bottom.Add(n);
                    AddPrice(num * n.Price);
                }
                if (Type == ShopType.Sell)
                {
                    top.ItemNum -= num;
                    if (top.ItemNum <= 0) Top.RemoveAt(ti);
                }
                else if (Type == ShopType.Buy) Weight += top.Weight * num;
            }
            else if (id == DialogBottomToTop && num > 0)
            {
                var bi = Lists.FindClass(Bottom, classId);
                if (bi < 0) return;
                var info = Bottom[bi];
                info.ItemNum -= num;
                if (info.ItemNum <= 0) Bottom.RemoveAt(bi);
                if (Type == ShopType.Sell)
                {
                    var ti = Lists.FindClass(Top, classId);
                    if (ti >= 0 && info.Stackable) Top[ti].ItemNum += num;
                    else
                    {
                        var n = info.Copy();
                        n.ItemNum = num;
                        Top.Add(n);
                    }
                }
                else if (Type == ShopType.Buy) Weight -= info.Weight * num;
                // o preco nao fica negativo quando se tira mais do que havia
                if (info.ItemNum <= 0) num = info.ItemNum + num;
                AddPrice(-num * info.Price);
            }
        }

        /// <summary>
        /// HandleOKButton: compra confere os itens de estoque limitado (sm1338 e nao envia); devolve os itens do pedido. Na
        /// pre-visualizacao pede a confirmacao sm1157. null = nada a enviar.
        /// </summary>
        public (List<(int ClassId, int ServerId, long Count)> items, int warnMsg) Ok()
        {
            var o = new List<(int, int, long)>();
            if (Type == ShopType.Buy)
            {
                foreach (var t in Top)
                {
                    if (t.ItemNum <= 0) continue;
                    long n = 0;
                    foreach (var b in Bottom)
                        if (b.ClassId == t.ClassId)
                            n += b.ItemNum;
                    if (n > t.ItemNum) return (null, 1338);
                }
            }
            if (Type == ShopType.Preview) return (null, Bottom.Count > 0 ? 1157 : 0);
            foreach (var b in Bottom) o.Add((b.ClassId, b.ServerId, b.ItemNum));
            return (o, 0);
        }
    }
}
