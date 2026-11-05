// L2SlotContainer__SelectDefaultSlot__18078f960 @ 0x18078f960

void L2SlotContainer__SelectDefaultSlot__18078f960(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  if (*(int *)(param_1 + 0x40) == -1) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (-1 < *(int *)(param_1 + 0x40))) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x40) < *(int *)(lVar2 + 0x18)) {
      if (lVar2 != 0) {
        uVar1 = *(uint *)(param_1 + 0x40);
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x18))) {
          if (*(uint *)(param_1 + 0x40) < *(uint *)(lVar2 + 0x18)) {
            plVar3 = *(longlong **)(lVar2 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x40) * 8);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
            }
            lVar2 = *(longlong *)(param_1 + 0x38);
            if (lVar2 == 0) {
              FUN_1803155d0();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              plVar3 = *(longlong **)(lVar2 + 0x20 + (longlong)(int)uVar1 * 8);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
              }
              *(uint *)(param_1 + 0x40) = uVar1;
              return;
            }
          }
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}

