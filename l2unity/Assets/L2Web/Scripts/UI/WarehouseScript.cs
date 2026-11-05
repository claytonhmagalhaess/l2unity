// WarehouseWnd.uc (spec 07 §5.5, #0030) sem Unity: deposito e retirada nas duas listas (juntando pelo classID), quantidade
// pelo NumberPad (DefaultOK), Alt = tudo, taxa de 30 por espaco no deposito, contador com o limite (privado = EV_SetMaxCount,
// outros 200) e o pedido do OK (dbID = Reserved, quantidade).
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class WarehouseScript
    {
        public const int KeepingPrice = 30, DefaultMaxCount = 200;
        public const int DialogTopToBottom = 111, DialogBottomToTop = 222;

        /// <summary>WarehouseCategory: 1 privado, 2 cla, 3 castelo, 4 outros.</summary>
        public int Category;
        public bool Deposit = true;
        public long Adena;
        public int MaxPrivateCount;
        public readonly List<ListItem> Top = new(), Bottom = new();

        public sealed class Ask
        {
            public int DlgId, ClassId;
            public long ParamInt;
            public string Name = "";
        }

        public void Clear()
        {
            Deposit = true;
            Category = 0;
            Top.Clear();
            Bottom.Clear();
        }

        public void Open(string type, int category, long adena)
        {
            Clear();
            Category = category;
            Adena = adena;
            Deposit = type != "withdraw";
        }

        /// <summary>Titulo pela categoria (1216 privado, 1217 cla, 1218 castelo, 131 outros); 0 = sem troca.</summary>
        public int Title => Category switch { 1 => 1216, 2 => 1217, 3 => 1218, 4 => 131, _ => 0 };

        /// <summary>(TopText, BottomText) e qual contador aparece (deposito: o de baixo; retirada: o de cima).</summary>
        public (int top, int bottom, bool bottomCount) Texts => Deposit ? (138, 132, true) : (132, 133, false);

        /// <summary>AdjustPrice: so no deposito, numero de itens embaixo x 30.</summary>
        public long Price => Deposit ? Bottom.Count * KeepingPrice : 0;

        /// <summary>AdjustCount: "(n/max)"; deposito conta a lista de baixo, retirada a de cima.</summary>
        public string CountText
        {
            get
            {
                var max = Category == 1 ? MaxPrivateCount : DefaultMaxCount;
                return "(" + (Deposit ? Bottom.Count : Top.Count) + "/" + max + ")";
            }
        }

        static Ask Move(List<ListItem> from, List<ListItem> to, int index, bool all, int dlg)
        {
            if (index < 0 || index >= from.Count) return null;
            var i = from[index];
            if (!all && i.Stackable && i.ItemNum > 1) return new Ask { DlgId = dlg, ClassId = i.ClassId, ParamInt = i.ItemNum, Name = i.Name };
            var t = Lists.FindClass(to, i.ClassId);
            if (t != -1 && i.Stackable) to[t].ItemNum += i.ItemNum;
            else to.Add(i);
            from.RemoveAt(index);
            return null;
        }

        public Ask TopToBottom(int index, bool all) => Move(Top, Bottom, index, all, DialogTopToBottom);
        public Ask BottomToTop(int index, bool all) => Move(Bottom, Top, index, all, DialogBottomToTop);

        /// <summary>HandleDialogOK: o numero passa de uma lista para a outra (sem limitar ao que tem, como o script).</summary>
        public void DialogOk(int id, long num, int classId)
        {
            if (num <= 0) return;
            if (id == DialogTopToBottom)
            {
                var ti = Lists.FindClass(Top, classId);
                if (ti < 0) return;
                var top = Top[ti];
                var bi = Lists.FindClass(Bottom, classId);
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
            else if (id == DialogBottomToTop)
            {
                var bi = Lists.FindClass(Bottom, classId);
                if (bi < 0) return;
                var info = Bottom[bi];
                info.ItemNum -= num;
                if (info.ItemNum <= 0) Bottom.RemoveAt(bi);
                var ti = Lists.FindClass(Top, classId);
                if (ti >= 0 && info.Stackable) Top[ti].ItemNum += num;
                else
                {
                    var n = info.Copy();
                    n.ItemNum = num;
                    Top.Add(n);
                }
            }
        }

        /// <summary>HandleOKButton: (dbID, quantidade) de cada item embaixo.</summary>
        public List<(int DbId, int Count)> Ok()
        {
            var o = new List<(int, int)>();
            foreach (var b in Bottom) o.Add((b.Reserved, (int)b.ItemNum));
            return o;
        }
    }
}
