// L2SlotContainer__ClearSlots__18078eee0 @ 0x18078eee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotContainer__ClearSlots__18078eee0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if (DAT_1834b4439 == '\0') {
    FUN_180315380(TI_InventorySlot);
    DAT_1834b4439 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    for (uVar5 = 0; (int)uVar5 < *(int *)(lVar4 + 0x18); uVar5 = uVar5 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(lVar4 + 0x20 + (longlong)(int)uVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar1,TI_InventorySlot);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar1,0);
        (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar3 = (longlong *)(**(code **)(*plVar1 + 0x9d8))(plVar1,*(undefined8 *)(*plVar1 + 0x9e0));
  if (plVar3 == plVar1) {
    UnityEngine_UIElements_VisualElement_Hierarchy__Clear(&stack0x00000008,0);
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x9d8))(plVar1,*(undefined8 *)(*plVar1 + 0x9e0));
    if (lVar4 != 0) {
      UnityEngine_UIElements_VisualElement__Clear(lVar4,0);
      return;
    }
  }
  return;
}

