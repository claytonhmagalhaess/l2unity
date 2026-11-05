// InventoryTab__SelectSlot__180620b40 @ 0x180620b40

void InventoryTab__SelectSlot__180620b40(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*(longlong *)(lVar1 + 0x38) != 0) && (-1 < (int)param_2)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x38), (int)param_2 < *(int *)(lVar2 + 0x18))) {
    if ((-1 < *(int *)(lVar1 + 0x40)) && (*(int *)(lVar1 + 0x40) < *(int *)(lVar2 + 0x18))) {
      if (*(uint *)(lVar2 + 0x18) <= *(uint *)(lVar1 + 0x40)) goto LAB_18078fab4;
      plVar3 = *(longlong **)(lVar2 + 0x20 + (longlong)(int)*(uint *)(lVar1 + 0x40) * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0),0);
      }
    }
    lVar2 = *(longlong *)(lVar1 + 0x38);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(uint *)(lVar2 + 0x18) <= param_2) {
LAB_18078fab4:
      FUN_1803155c0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)(lVar2 + 0x20 + (longlong)(int)param_2 * 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    }
    *(uint *)(lVar1 + 0x40) = param_2;
  }
  return;
}

