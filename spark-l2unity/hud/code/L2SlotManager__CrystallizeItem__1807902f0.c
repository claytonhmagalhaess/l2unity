// L2SlotManager__CrystallizeItem__1807902f0 @ 0x1807902f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__CrystallizeItem__1807902f0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4452 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(MD_L2SlotManager.__c._CrystallizeItem_b__47_1);
    FUN_180315380(MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0);
    FUN_180315380(TI_L2SlotManager.<>c__DisplayClass47_0);
    FUN_180315380(TI_L2SlotManager.<>c);
    cRam00000001834b4452 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_L2SlotManager.<>c__DisplayClass47_0);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    else {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(longlong **)(lVar3 + 0x10) = plVar4;
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x000180314690(lVar3 + 0x10,plVar4);
    plVar4 = (longlong *)func_0x000180314710(TI_SMParam__,1);
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x10);
      uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      lVar6 = func_0x000180315580(TI_SMParam);
      SMParam___ctor(lVar6,3,uVar5,0);
      if (plVar4 != (longlong *)0x0) {
        if (lVar6 != 0) {
          lVar7 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar7 == 0) {
            uVar5 = func_0x000180314f80();
            FUN_180315590(uVar5,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((int)plVar4[3] == 0) {
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar4[4] = lVar6;
        func_0x000180314690(plVar4 + 4,lVar6);
        lVar6 = SystemMessageTable__get_Instance(0);
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
          uVar5 = FUN_1812035e0(*(longlong *)(lVar6 + 0x10),0x150,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
          uVar8 = func_0x000180315580(TI_SystemMessage);
          AllianceMessage___ctor(uVar8,plVar4,uVar5,0);
          if (DAT_1834b30fd == '\0') {
            FUN_180315380(TI_L2ConfirmWindow);
            DAT_1834b30fd = '\x01';
          }
          lVar6 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
          uVar5 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar5,lVar3,MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0,0);
          if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar3 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28);
          if (lVar3 == 0) {
            if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar1 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
            lVar3 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(lVar3,uVar1,MD_L2SlotManager.__c._CrystallizeItem_b__47_1,0);
            *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28) = lVar3;
            func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28,lVar3);
          }
          if (lVar6 != 0) {
            L2ConfirmWindow__ShowWindow__180770ea0(lVar6,uVar8,uVar5,lVar3,0);
            return;
          }
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

