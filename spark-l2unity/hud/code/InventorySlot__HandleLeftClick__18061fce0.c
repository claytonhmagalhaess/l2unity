// InventorySlot__HandleLeftClick__18061fce0 @ FI_6078884

void InventorySlot__HandleLeftClick__18061fce0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (((*(longlong *)(lVar2 + 0x38) != 0) && (-1 < (int)uVar1)) &&
     (lVar3 = *(longlong *)(lVar2 + 0x38), (int)uVar1 < *(int *)(lVar3 + 0x18))) {
    if ((-1 < *(int *)(lVar2 + 0x40)) && (*(int *)(lVar2 + 0x40) < *(int *)(lVar3 + 0x18))) {
      if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar2 + 0x40)) goto LAB_18078fab4;
      plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)*(uint *)(lVar2 + 0x40) * 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0),0);
      }
    }
    lVar3 = *(longlong *)(lVar2 + 0x38);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_18078fab4:
      FUN_1803155c0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)uVar1 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    }
    *(uint *)(lVar2 + 0x40) = uVar1;
  }
  return;
}

