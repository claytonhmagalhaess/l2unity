// TradeWnd.uc (spec 07 §5.1, #0029) sem Unity: InventoryList, MyList e OtherList; o que o duplo clique, o soltar e o botao
// de mover pedem (RequestAddTradeItem ou NumberPad); HandleTradeAddItem junta os empilhaveis.
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class TradeScript
    {
        public const int DialogTradeRequest = 0, DialogItemNumber = 1;

        public readonly List<ListItem> Inventory = new(), My = new(), Other = new();
        public int TargetId;
        public bool MyOk, OtherOk;

        /// <summary>Pedido: (serverId, numero) do RequestAddTradeItem, ou o NumberPad (sm72) com o maximo.</summary>
        public sealed class Act
        {
            public bool Ask;
            public int ServerId;
            public long Count;
            public string Name = "";
        }

        public void Clear()
        {
            Inventory.Clear();
            My.Clear();
            Other.Clear();
            TargetId = 0;
            MyOk = OtherOk = false;
        }

        /// <summary>OnDBClickItem na InventoryList: empilhavel com mais de 1 pede o numero; senao 1.</summary>
        public Act DoubleClick(int index)
        {
            if (index < 0 || index >= Inventory.Count) return null;
            var i = Inventory[index];
            if (i.Stackable && i.ItemNum != 1) return new Act { Ask = true, ServerId = i.ServerId, Count = i.ItemNum, Name = i.Name };
            return new Act { ServerId = i.ServerId, Count = 1 };
        }

        /// <summary>OnDropItem em MyList vindo da InventoryList: Alt = tudo; 1 = 1; empilhavel = numero; senao 1.</summary>
        public Act DropOnMy(ListItem i, long allItemCount)
        {
            if (i == null) return null;
            if (i.Stackable)
            {
                if (allItemCount > 0) return new Act { ServerId = i.ServerId, Count = allItemCount };
                if (i.ItemNum == 1) return new Act { ServerId = i.ServerId, Count = 1 };
                return new Act { Ask = true, ServerId = i.ServerId, Count = i.ItemNum, Name = i.Name };
            }
            return new Act { ServerId = i.ServerId, Count = 1 };
        }

        /// <summary>HandleMoveButton: o selecionado da InventoryList; ItemNum 1 vai direto, senao pede o numero.</summary>
        public Act Move(int selected)
        {
            if (selected < 0 || selected >= Inventory.Count) return null;
            var i = Inventory[selected];
            return i.ItemNum == 1 ? new Act { ServerId = i.ServerId, Count = 1 } : new Act { Ask = true, ServerId = i.ServerId, Count = i.ItemNum, Name = i.Name };
        }

        /// <summary>HandleTradeAddItem: destination inventoryList/myList/otherList; mesmo serverID empilhavel soma.</summary>
        public void AddItem(string destination, ListItem i)
        {
            var l = destination == "myList" ? My : destination == "otherList" ? Other : destination == "inventoryList" ? Inventory : null;
            if (l == null) return;
            var at = Lists.FindServer(l, i.ServerId);
            if (at >= 0)
            {
                if (i.Stackable)
                {
                    var n = i.Copy();
                    n.ItemNum += l[at].ItemNum;
                    l[at] = n;
                }
            }
            else l.Add(i);
        }

        /// <summary>HandleTradeUpdateInventoryItem: add, update ou delete na InventoryList.</summary>
        public void UpdateInventory(string type, ListItem i)
        {
            var at = Lists.FindServer(Inventory, i.ServerId);
            if (type == "add") Inventory.Add(i);
            else if (type == "update" && at >= 0) Inventory[at] = i;
            else if (type == "delete" && at >= 0) Inventory.RemoveAt(at);
        }
    }
}
