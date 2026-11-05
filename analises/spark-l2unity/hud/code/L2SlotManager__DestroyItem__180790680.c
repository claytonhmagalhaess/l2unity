// L2SlotManager__DestroyItem__180790680 @ 0x180790680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__DestroyItem__180790680(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4451 == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(MD_L2SlotManager.__c._DestroyItem_b__46_1);
    FUN_180315380(MD_L2SlotManager.__c._DestroyItem_b__46_3);
    FUN_180315380(MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0);
    FUN_180315380(MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2);
    FUN_180315380(TI_L2SlotManager.<>c__DisplayClass46_0);
    FUN_180315380(TI_L2SlotManager.<>c);
    FUN_180315380(LIT_"'Destroy {0}.'");
    cRam00000001834b4451 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_L2SlotManager.<>c__DisplayClass46_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    else {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(longlong **)(lVar4 + 0x10) = plVar5;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x000180314690(lVar4 + 0x10,plVar5);
    plVar5 = (longlong *)func_0x000180314710(TI_SMParam__,1);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x10);
      uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      lVar7 = func_0x000180315580(TI_SMParam);
      SMParam___ctor(lVar7,3,uVar6,0);
      if (plVar5 != (longlong *)0x0) {
        if (lVar7 != 0) {
          lVar8 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar8 == 0) {
            uVar6 = func_0x000180314f80();
            FUN_180315590(uVar6,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((int)plVar5[3] == 0) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar5[4] = lVar7;
        func_0x000180314690(plVar5 + 4,lVar7);
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x88) < 2) {
            lVar7 = SystemMessageTable__get_Instance(0);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
              uVar6 = FUN_1812035e0(*(longlong *)(lVar7 + 0x10),0x4a,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
              uVar9 = func_0x000180315580(TI_SystemMessage);
              AllianceMessage___ctor(uVar9,plVar5,uVar6,0);
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              lVar7 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
              uVar6 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar6,lVar4,MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0,0);
              if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar8 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18);
              if (lVar8 == 0) {
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar2 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                lVar8 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar8,uVar2,MD_L2SlotManager.__c._DestroyItem_b__46_1,0);
                *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18) = lVar8;
                func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18,lVar8);
              }
              if (lVar7 != 0) {
                L2ConfirmWindow__ShowWindow__180770ea0(lVar7,uVar9,uVar6,lVar8,0);
code_r0x000180790ba7:
                if (*(longlong *)(lVar4 + 0x10) != 0) {
                  auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x10);
                  uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                  uVar6 = System_String__Format(LIT_"'Destroy {0}.'",uVar6,0);
                  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Debug__Log(uVar6,0);
                  return;
                }
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          else {
            lVar7 = SystemMessageTable__get_Instance(0);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
              uVar6 = FUN_1812035e0(*(longlong *)(lVar7 + 0x10),0x49,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
              uVar9 = func_0x000180315580(TI_SystemMessage);
              AllianceMessage___ctor(uVar9,plVar5,uVar6,0);
              if (cRam00000001834b3dea == '\0') {
                FUN_180315380(TI_L2InputAmountWindow);
                cRam00000001834b3dea = '\x01';
              }
              if (*(longlong *)(lVar4 + 0x10) != 0) {
                uVar1 = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x88);
                lVar7 = **(longlong **)(TI_L2InputAmountWindow + 0xb8);
                uVar6 = func_0x000180315580(TI_System.Action<int>);
                FUN_180b7db20(uVar6,lVar4,MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2,0);
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar8 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20);
                if (lVar8 == 0) {
                  if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar2 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                  lVar8 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(lVar8,uVar2,MD_L2SlotManager.__c._DestroyItem_b__46_3,0);
                  *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20) = lVar8;
                  func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20,lVar8);
                }
                if (lVar7 != 0) {
                  L2InputAmountWindow__ShowWindow__1807766c0(lVar7,uVar9,uVar1,uVar6,lVar8,0);
                  goto code_r0x000180790ba7;
                }
              }
            }
          }
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

