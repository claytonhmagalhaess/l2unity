// L2SlotContainer__CreateSlotElements__18078efd0 @ 0x18078efd0

void L2SlotContainer__CreateSlotElements__18078efd0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (0 < param_2) {
    uVar7 = 0;
    do {
      lVar3 = L2SlotContainer__InstantiateSlot__18078f4b0(param_1,param_3,uVar7,0);
      plVar1 = *(longlong **)(param_1 + 0x38);
      if (plVar1 == (longlong *)0x0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((lVar3 != 0) &&
         (lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
        uVar5 = func_0x000180314f80();
        FUN_180315590(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(plVar1 + 3) <= (uint)uVar7) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1[uVar7 + 4] = lVar3;
      func_0x000180314690(plVar1 + uVar7 + 4,lVar3);
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_2);
  }
  return;
}

