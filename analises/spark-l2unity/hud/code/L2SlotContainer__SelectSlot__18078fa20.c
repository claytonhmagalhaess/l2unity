// L2SlotContainer__SelectSlot__18078fa20 @ 0x18078fa20

void L2SlotContainer__SelectSlot__18078fa20(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  if (((*(longlong *)(param_1 + 0x38) != 0) && (-1 < (int)param_2)) &&
     (lVar1 = *(longlong *)(param_1 + 0x38), (int)param_2 < *(int *)(lVar1 + 0x18))) {
    if ((-1 < *(int *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x40) < *(int *)(lVar1 + 0x18))) {
      if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 0x40)) goto LAB_18078fab4;
      plVar2 = *(longlong **)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x40) * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
LAB_18078fab4:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(lVar1 + 0x20 + (longlong)(int)param_2 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    }
    *(uint *)(param_1 + 0x40) = param_2;
  }
  return;
}

