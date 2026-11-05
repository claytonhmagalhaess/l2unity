// L2SlotContainer__UpdateSlots__18078fbd0 @ 0x18078fbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2SlotContainer__UpdateSlots__18078fbd0
                    (longlong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  *(undefined4 *)((longlong)param_1 + 0x44) = param_3;
  uVar6 = param_2 & 0xffffffff;
  if (DAT_1834b443b == '\0') {
    FUN_180315380(TI_L2Slot__,param_2,param_4,0);
    DAT_1834b443b = '\x01';
  }
  if (DAT_1834b4439 == '\0') {
    FUN_180315380(TI_InventorySlot);
    DAT_1834b4439 = '\x01';
  }
  if (param_1[7] != 0) {
    lVar4 = param_1[7];
    for (uVar8 = 0; (int)uVar8 < *(int *)(lVar4 + 0x18); uVar8 = uVar8 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_18078f30e;
      plVar1 = *(longlong **)(lVar4 + 0x20 + (longlong)(int)uVar8 * 8);
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar1,TI_InventorySlot);
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar1,0);
        (**(code **)(*plVar1 + 0x178))(plVar1);
      }
    }
  }
  if (param_1[6] != 0) {
    UnityEngine_UIElements_VisualElement__Clear(param_1[6],0);
    if ((int)param_2 <= (int)param_1[9]) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 9);
    }
    lVar4 = func_0x000180314710(TI_L2Slot__,uVar6);
    param_1[7] = lVar4;
    func_0x000180314690(param_1 + 7,lVar4);
    *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
    (**(code **)(*param_1 + 0x1a8))(param_1,uVar6,param_4,*(undefined8 *)(*param_1 + 0x1b0));
    if (DAT_1834b443a == '\0') {
      FUN_180315380(LIT_"'disabled'");
      DAT_1834b443a = '\x01';
    }
    iVar7 = 0;
    iVar3 = (int)uVar6;
    uVar6 = (longlong)iVar3 / (longlong)*(int *)((longlong)param_1 + 0x44);
    if (iVar3 % *(int *)((longlong)param_1 + 0x44) != 0) {
      uVar6 = (longlong)iVar3 / (longlong)*(int *)((longlong)param_1 + 0x44);
      iVar7 = *(int *)((longlong)param_1 + 0x44) - iVar3 % *(int *)((longlong)param_1 + 0x44);
    }
    uVar6 = uVar6 & 0xffffffff;
    iVar9 = 0;
    if (0 < iVar7) {
      do {
        lVar4 = L2SlotContainer__InstantiateSlot__18078f4b0
                          (param_1,*(undefined4 *)((longlong)param_1 + 0x4c),iVar9 + iVar3,0);
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x40) == 0)) goto LAB_18078f2fc;
        uVar6 = UnityEngine_UIElements_VisualElement__AddToClassList
                          (*(longlong *)(lVar4 + 0x40),LIT_"'disabled'",0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar7);
    }
    if ((int)param_1[8] != -1) {
      if ((param_1[7] != 0) && (-1 < (int)param_1[8])) {
        uVar6 = param_1[7];
        if ((int)param_1[8] < *(int *)(uVar6 + 0x18)) {
          if (uVar6 == 0) {
            return 0;
          }
          uVar8 = *(uint *)(param_1 + 8);
          if ((int)uVar8 < 0) {
            return uVar6;
          }
          if (*(int *)(uVar6 + 0x18) <= (int)uVar8) {
            return uVar6;
          }
          uVar5 = (ulonglong)(int)*(uint *)(param_1 + 8);
          if (*(uint *)(param_1 + 8) < *(uint *)(uVar6 + 0x18)) {
            plVar1 = *(longlong **)(uVar6 + 0x20 + uVar5 * 8);
            if (plVar1 != (longlong *)0x0) {
              uVar5 = (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
            }
            lVar4 = param_1[7];
            if (lVar4 == 0) goto LAB_18078f2fc;
            if (uVar8 < *(uint *)(lVar4 + 0x18)) {
              plVar1 = *(longlong **)(lVar4 + 0x20 + (longlong)(int)uVar8 * 8);
              if (plVar1 != (longlong *)0x0) {
                uVar5 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
              }
              *(uint *)(param_1 + 8) = uVar8;
              return uVar5;
            }
          }
LAB_18078f30e:
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    return uVar6;
  }
LAB_18078f2fc:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

