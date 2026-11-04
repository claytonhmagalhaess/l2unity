// DeliverWnd.uc e SelectDeliverWnd.uc (spec 07 §5.6, #0042) sem Unity: destinatario pelo combo (reserved = objectId), duas
// listas que juntam pelo serverID (FindItem(info.ID)), quantidade pelo NumberPad sm72 (DefaultOK), Alt = tudo, custo de
// 1000 por item embaixo e o pedido do OK (destino, dbID = Reserved, quantidade).
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class DeliverScript
    {
        public const int PricePerItem = 1000;
        public const int DialogTopToBottom = 111, DialogBottomToTop = 222;

        /// <summary>SelectDeliverCombo: (nome, reserved = objectId) e o escolhido (-1 = nenhum).</summary>
        public readonly List<(string Name, int Id)> Targets = new();
        public int Selected = -1;

        public int TargetId;
        public long Adena;
        public readonly List<ListItem> Top = new(), Bottom = new();

        public sealed class Ask
        {
            public int DlgId, ServerId;
            public long ParamInt;
            public string Name = "";
        }

        /// <summary>EV_SelectDeliverClear: limpa o combo (e a janela aparece).</summary>
        public void ClearTargets()
        {
            Targets.Clear();
            Selected = -1;
        }

        /// <summary>EV_SelectDeliverAddName: AddStringWithReserved(name, id).</summary>
        public void AddTarget(string name, int id) => Targets.Add((name ?? "", id));

        /// <summary>HandleOKButtonClick: o objectId escolhido para o RequestPackageSendableItemList, ou null sem escolha.</summary>
        public int? SelectOk() => Selected >= 0 && Selected < Targets.Count ? Targets[Selected].Id : null;

        public void Clear()
        {
            Top.Clear();
            Bottom.Clear();
        }

        /// <summary>HandleOpenWindow: limpa e guarda a adena e o destinationID.</summary>
        public void Open(long adena, int destination)
        {
            Clear();
            Adena = adena;
            TargetId = destination;
        }

        /// <summary>AdjustPrice: numero de itens embaixo x 1000.</summary>
        public long Price => Bottom.Count * PricePerItem;

        /// <summary>MoveItemTopToBottom: empilhavel com mais de 1 pede o numero (Alt = tudo); senao vai 1, sem a contagem.</summary>
        public Ask TopToBottom(int index, bool all)
        {
            if (index < 0 || index >= Top.Count) return null;
            var i = Top[index];
            if (i.Stackable && i.ItemNum > 1)
            {
                if (all) Move(true, i.ServerId, i.ItemNum);
                else return new Ask { DlgId = DialogTopToBottom, ServerId = i.ServerId, ParamInt = i.ItemNum, Name = i.Name };
                return null;
            }
            var n = i.Copy();
            n.ItemNum = 1;
            n.ShowCount = false;
            Bottom.Add(n);
            Top.RemoveAt(index);
            return null;
        }

        /// <summary>MoveItemBottomToTop: empilhavel com mais de 1 pede o numero (Alt = tudo); senao volta como esta.</summary>
        public Ask BottomToTop(int index, bool all)
        {
            if (index < 0 || index >= Bottom.Count) return null;
            var i = Bottom[index];
            if (i.Stackable && i.ItemNum > 1)
            {
                if (all) Move(false, i.ServerId, i.ItemNum);
                else return new Ask { DlgId = DialogBottomToTop, ServerId = i.ServerId, ParamInt = i.ItemNum, Name = i.Name };
                return null;
            }
            Bottom.RemoveAt(index);
            Top.Add(i);
            return null;
        }

        /// <summary>HandleDialogOK: num &gt; 0 passa de uma lista para a outra (sem limitar ao que tem, como o script).</summary>
        public void DialogOk(int id, long num, int serverId)
        {
            if (num <= 0) return;
            if (id == DialogTopToBottom) Move(true, serverId, num);
            else if (id == DialogBottomToTop) Move(false, serverId, num);
        }

        /// <summary>ItemTopToBottom / ItemBottomToTop.</summary>
        void Move(bool down, int serverId, long num)
        {
            if (down)
            {
                var ti = Lists.FindServer(Top, serverId);
                if (ti < 0) return;
                var top = Top[ti];
                var bi = Lists.FindServer(Bottom, serverId);
                if (bi >= 0) Bottom[bi].ItemNum += num;
                else
                {
                    var n = top.Copy();
                    n.ItemNum = num;
                    n.ShowCount = false;
                    Bottom.Add(n);
                }
                top.ItemNum -= num;
                if (top.ItemNum <= 0) Top.RemoveAt(ti);
            }
            else
            {
                var bi = Lists.FindServer(Bottom, serverId);
                if (bi < 0) return;
                var info = Bottom[bi];
                info.ItemNum -= num;
                if (info.ItemNum <= 0) Bottom.RemoveAt(bi);
                var ti = Lists.FindServer(Top, serverId);
                if (ti >= 0 && info.Stackable) Top[ti].ItemNum += num;
                else
                {
                    var n = info.Copy();
                    n.ItemNum = num;
                    Top.Add(n);
                }
            }
        }

        /// <summary>HandleOKButton: (dbID, quantidade) de cada item embaixo, para o RequestPackageSend(TargetId, ...).</summary>
        public List<(int DbId, int Count)> Ok()
        {
            var o = new List<(int, int)>();
            foreach (var b in Bottom) o.Add((b.Reserved, (int)b.ItemNum));
            return o;
        }
    }
}
