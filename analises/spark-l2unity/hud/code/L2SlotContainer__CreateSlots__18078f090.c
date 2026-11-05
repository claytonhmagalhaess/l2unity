// L2SlotContainer__CreateSlots__18078f090 @ 0x18078f090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2SlotContainer__CreateSlots__18078f090(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (DAT_1834b443b == '\0') {
    FUN_180315380(TI_L2Slot__);
    DAT_1834b443b = '\x01';
  }
  if (DAT_1834b4439 == '\0') {
    FUN_180315380(TI_InventorySlot);
    DAT_1834b4439 = '\x01';
  }
  if (param_1[7] != 0) {
    lVar3 = param_1[7];
    for (uVar7 = 0; (int)uVar7 < *(int *)(lVar3 + 0x18); uVar7 = uVar7 + 1) {
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_18078f30e;
      plVar1 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)uVar7 * 8);
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar1,TI_InventorySlot);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar1,0);
        (**(code **)(*plVar1 + 0x178))(plVar1);
      }
    }
  }
  if (param_1[6] != 0) {
    UnityEngine_UIElements_VisualElement__Clear(param_1[6],0);
    if (param_2 <= (int)param_1[9]) {
      param_2 = (int)param_1[9];
    }
    lVar3 = func_0x000180314710(TI_L2Slot__,param_2);
    param_1[7] = lVar3;
    func_0x000180314690(param_1 + 7,lVar3);
    *(undefined4 *)((longlong)param_1 + 0x4c) = param_3;
    (**(code **)(*param_1 + 0x1a8))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1b0));
    if (DAT_1834b443a == '\0') {
      FUN_180315380(LIT_"'disabled'");
      DAT_1834b443a = '\x01';
    }
    iVar6 = 0;
    uVar5 = (longlong)param_2 / (longlong)*(int *)((longlong)param_1 + 0x44);
    if (param_2 % *(int *)((longlong)param_1 + 0x44) != 0) {
      uVar5 = (longlong)param_2 / (longlong)*(int *)((longlong)param_1 + 0x44);
      iVar6 = *(int *)((longlong)param_1 + 0x44) - param_2 % *(int *)((longlong)param_1 + 0x44);
    }
    uVar5 = uVar5 & 0xffffffff;
    iVar8 = 0;
    if (0 < iVar6) {
      do {
        lVar3 = L2SlotContainer__InstantiateSlot__18078f4b0
                          (param_1,*(undefined4 *)((longlong)param_1 + 0x4c),iVar8 + param_2,0);
        if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x40) == 0)) goto LAB_18078f2fc;
        uVar5 = UnityEngine_UIElements_VisualElement__AddToClassList
                          (*(longlong *)(lVar3 + 0x40),LIT_"'disabled'",0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    if ((int)param_1[8] != -1) {
      if ((param_1[7] != 0) && (-1 < (int)param_1[8])) {
        uVar5 = param_1[7];
        if ((int)param_1[8] < *(int *)(uVar5 + 0x18)) {
          if (uVar5 == 0) {
            return 0;
          }
          uVar7 = *(uint *)(param_1 + 8);
          if ((int)uVar7 < 0) {
            return uVar5;
          }
          if (*(int *)(uVar5 + 0x18) <= (int)uVar7) {
            return uVar5;
          }
          uVar4 = (ulonglong)(int)*(uint *)(param_1 + 8);
          if (*(uint *)(param_1 + 8) < *(uint *)(uVar5 + 0x18)) {
            plVar1 = *(longlong **)(uVar5 + 0x20 + uVar4 * 8);
            if (plVar1 != (longlong *)0x0) {
              uVar4 = (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
            }
            lVar3 = param_1[7];
            if (lVar3 == 0) goto LAB_18078f2fc;
            if (uVar7 < *(uint *)(lVar3 + 0x18)) {
              plVar1 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)uVar7 * 8);
              if (plVar1 != (longlong *)0x0) {
                uVar4 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
              }
              *(uint *)(param_1 + 8) = uVar7;
              return uVar4;
            }
          }
LAB_18078f30e:
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    return uVar5;
  }
LAB_18078f2fc:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

