// InventoryWnd.uc (spec 07 §2.2, #0026) sem Unity: o que cada soltar, clique e resposta de dialogo pede. Origens e destinos
// pelos nomes do xdat (InventoryItem, QuestItem, EquipItem_*, PetInvenWnd, TrashButton, CrystallizeButton, "Console" = fora
// de qualquer janela). Alt no inicio do arrasto (NCItemWnd nw:0x1002eb00) traz AllItemCount = a pilha toda.
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class InventoryScript
    {
        // ids de dialogo do InventoryWnd.uc
        public const int DialogUseRecipe = 1, DialogPopup = 2, DialogDropItem = 3, DialogDropItemAskCount = 4, DialogDropItemAll = 5,
            DialogDestroyItem = 6, DialogDestroyItemAskCount = 7, DialogDestroyItemAll = 8, DialogCrystallize = 9, DialogDropItemPetAskCount = 10;

        /// <summary>ItemInfo do item arrastado (o que o script le).</summary>
        public sealed class Item
        {
            public string Src = "";
            public int ServerId, ClassId, ItemType, SlotBitType, ConsumeType, PopMsgNum;
            public long ItemNum, AllItemCount;
            public bool Recipe;
            public string Name = "";
        }

        /// <summary>Um pedido ao servidor ou um dialogo a abrir.</summary>
        public sealed class Act
        {
            /// <summary>use, unequip, getpet, drop, destroy, crystallize, dialog.</summary>
            public string Kind;
            public int ServerId, SlotBitType;
            public long Count;
            /// <summary>getpet: equipar ao tirar do pet.</summary>
            public bool Equip;
            public EDialogType DlgType;
            public int DlgId, MsgId;
            public long Param, Reserved2;
            public string Name = "";
        }

        /// <summary>Tem a skill de cristalizar (UIDATA_PLAYER.HasCrystallizeAbility).</summary>
        public System.Func<bool> HasCrystallize = () => false;
        /// <summary>UIDATA_ITEM.IsCrystallizable.</summary>
        public System.Func<int, bool> IsCrystallizable = _ => false;

        static bool IsStackable(int consume) => L2Tooltip.IsStackable(consume);
        static bool IsEquipSrc(string s) => s != null && s.Contains("EquipItem");

        static Act Dlg(EDialogType t, int id, int msg, Item i, long param = 0, long r2 = 0) =>
            new() { Kind = "dialog", DlgType = t, DlgId = id, MsgId = msg, ServerId = i.ServerId, Param = param, Reserved2 = r2, Name = i.Name };

        /// <summary>UseItem (InventoryWnd.uc:953-976): receita confirma (sm798), PopMsgNum confirma, senao RequestUseItem.</summary>
        public Act UseItem(Item i)
        {
            if (i.Recipe) return Dlg(EDialogType.Warning, DialogUseRecipe, 798, i);
            if (i.PopMsgNum > 0) return Dlg(EDialogType.Warning, DialogPopup, i.PopMsgNum, i);
            return new Act { Kind = "use", ServerId = i.ServerId };
        }

        /// <summary>OnDropItem (InventoryWnd.uc:184-345). A reordenacao dentro da lista e da view (Reorder); aqui devolve null.</summary>
        public Act Drop(string target, Item i)
        {
            if (!(i.Src == "InventoryItem" || i.Src == "QuestItem" || IsEquipSrc(i.Src) || i.Src == "PetInvenWnd")) return null;
            if (target == "InventoryItem")
            {
                if (IsEquipSrc(i.Src)) return new Act { Kind = "unequip", ServerId = i.ServerId, SlotBitType = i.SlotBitType };
                if (i.Src == "PetInvenWnd")
                {
                    if (IsStackable(i.ConsumeType) && i.ItemNum > 1)
                        return i.AllItemCount > 0 ? new Act { Kind = "getpet", ServerId = i.ServerId, Count = i.AllItemCount }
                            : Dlg(EDialogType.NumberPad, DialogDropItemPetAskCount, 72, i, i.ItemNum);
                    return new Act { Kind = "getpet", ServerId = i.ServerId, Count = 1 };
                }
                return null;
            }
            if (target != null && target.Contains("EquipItem"))
            {
                if (i.Src == "PetInvenWnd") return new Act { Kind = "getpet", ServerId = i.ServerId, Count = 1, Equip = true };
                if (IsEquipSrc(i.Src)) return null;
                return i.ItemType != 5 ? new Act { Kind = "use", ServerId = i.ServerId } : null;
            }
            if (target == "TrashButton")
            {
                if (IsStackable(i.ConsumeType) && i.ItemNum > 1)
                    return i.AllItemCount > 0 ? Dlg(EDialogType.Warning, DialogDestroyItemAll, 74, i, 0, i.AllItemCount)
                        : Dlg(EDialogType.NumberPad, DialogDestroyItemAskCount, 73, i, i.ItemNum);
                return Dlg(EDialogType.Warning, DialogDestroyItem, 74, i);
            }
            if (target == "CrystallizeButton" && (i.Src == "InventoryItem" || IsEquipSrc(i.Src)) && HasCrystallize() && IsCrystallizable(i.ClassId))
                return Dlg(EDialogType.Warning, DialogCrystallize, 336, i);
            return null;
        }

        /// <summary>OnDropItemSource("Console") (InventoryWnd.uc:347-383): largar no chao, com confirmacao ou quantidade.</summary>
        public Act DropToWorld(Item i)
        {
            if (!(i.Src == "InventoryItem" || i.Src == "QuestItem" || IsEquipSrc(i.Src))) return null;
            if (IsStackable(i.ConsumeType) && i.ItemNum > 1)
                return i.AllItemCount > 0 ? Dlg(EDialogType.Warning, DialogDropItemAll, 1833, i, 0, i.AllItemCount)
                    : Dlg(EDialogType.NumberPad, DialogDropItemAskCount, 71, i, i.ItemNum);
            return Dlg(EDialogType.Warning, DialogDropItem, 400, i);
        }

        /// <summary>HandleDialogOK (InventoryWnd.uc:1100-1140): o pedido pelo id do dialogo; numero vazio larga 1.</summary>
        public Act DialogOk(int id, int reserved, long reserved2, string text)
        {
            long.TryParse(text, out var number);
            switch (id)
            {
                case DialogUseRecipe:
                case DialogPopup: return new Act { Kind = "use", ServerId = reserved };
                case DialogDropItem: return new Act { Kind = "drop", ServerId = reserved, Count = 1 };
                case DialogDropItemAskCount: return new Act { Kind = "drop", ServerId = reserved, Count = number == 0 ? 1 : number };
                case DialogDropItemAll: return new Act { Kind = "drop", ServerId = reserved, Count = reserved2 };
                case DialogDestroyItem: return new Act { Kind = "destroy", ServerId = reserved, Count = 1 };
                case DialogDestroyItemAskCount: return new Act { Kind = "destroy", ServerId = reserved, Count = number };
                case DialogDestroyItemAll: return new Act { Kind = "destroy", ServerId = reserved, Count = reserved2 };
                case DialogCrystallize: return new Act { Kind = "crystallize", ServerId = reserved, Count = 1 };
                case DialogDropItemPetAskCount: return new Act { Kind = "getpet", ServerId = reserved, Count = number };
                default: return null;
            }
        }

        /// <summary>
        /// Reordenar na mesma lista (SwapItems em sequencia): o item vai para o indice do slot solto, empurrando os do meio;
        /// solto fora de um slot (toIndex -1) vai para o fim. So no cliente.
        /// </summary>
        public static void Reorder<T>(List<T> order, int fromIndex, int toIndex)
        {
            if (fromIndex < 0 || fromIndex >= order.Count) return;
            if (toIndex < 0 || toIndex >= order.Count) toIndex = order.Count - 1;
            var it = order[fromIndex];
            order.RemoveAt(fromIndex);
            order.Insert(toIndex, it);
        }
    }
}
