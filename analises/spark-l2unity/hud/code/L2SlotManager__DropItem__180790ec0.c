// L2SlotManager__DropItem__180790ec0 @ 0x180790ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__DropItem__180790ec0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4450 == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(MD_L2SlotManager.__c._DropItem_b__45_1);
    FUN_180315380(MD_L2SlotManager.__c._DropItem_b__45_3);
    FUN_180315380(MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__0);
    FUN_180315380(MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__2);
    FUN_180315380(TI_L2SlotManager.<>c__DisplayClass45_0);
    FUN_180315380(TI_L2SlotManager.<>c);
    FUN_180315380(LIT_"'Drop {0}.'");
    cRam00000001834b4450 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_L2SlotManager.<>c__DisplayClass45_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar6 == (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    else {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar6 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar6);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(longlong **)(lVar5 + 0x10) = plVar6;
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar6 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar6);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x000180314690(lVar5 + 0x10,plVar6);
    plVar6 = (longlong *)func_0x000180314710(TI_SMParam__,1);
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x10);
      uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      lVar8 = func_0x000180315580(TI_SMParam);
      SMParam___ctor(lVar8,3,uVar7,0);
      if (plVar6 != (longlong *)0x0) {
        if ((lVar8 != 0) &&
           (lVar9 = func_0x0001803146b0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
          uVar7 = func_0x000180314f80();
          FUN_180315590(uVar7,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((int)plVar6[3] == 0) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar6[4] = lVar8;
        func_0x000180314690(plVar6 + 4,lVar8);
        cVar4 = L2SlotManager__PontoDoDrop__180792eb0(lVar5 + 0x18,0);
        if (cVar4 == '\0') {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (DAT_1834b3105 == '\0') {
            FUN_180315380(TI_ChatWindow);
            DAT_1834b3105 = '\x01';
          }
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
          lVar8 = SystemMessageTable__get_Instance(0);
          if (lVar8 != 0) {
            uVar7 = SystemMessageTable__GetSystemMessage(lVar8,0x97,0);
            uVar10 = func_0x000180315580(TI_SystemMessage);
            AllianceMessage___ctor(uVar10,0,uVar7,0);
            if (lVar5 != 0) {
              ChatWindow__ReceiveSystemMessage__1805cdb10(lVar5,uVar10,0);
              return;
            }
          }
        }
        else if (*(longlong *)(lVar5 + 0x10) != 0) {
          if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x88) < 2) {
            lVar8 = SystemMessageTable__get_Instance(0);
            if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
              uVar7 = FUN_1812035e0(*(longlong *)(lVar8 + 0x10),400,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
              uVar10 = func_0x000180315580(TI_SystemMessage);
              AllianceMessage___ctor(uVar10,plVar6,uVar7,0);
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              lVar8 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
              uVar7 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar7,lVar5,MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__0,0);
              if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar9 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 8);
              if (lVar9 == 0) {
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar2 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                lVar9 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar9,uVar2,MD_L2SlotManager.__c._DropItem_b__45_1,0);
                *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 8) = lVar9;
                func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 8,lVar9);
              }
              if (lVar8 != 0) {
                L2ConfirmWindow__ShowWindow__180770ea0(lVar8,uVar10,uVar7,lVar9,0);
code_r0x000180791406:
                if (*(longlong *)(lVar5 + 0x10) != 0) {
                  auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x10);
                  uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                  uVar7 = System_String__Format(LIT_"'Drop {0}.'",uVar7,0);
                  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Debug__Log(uVar7,0);
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
            lVar8 = SystemMessageTable__get_Instance(0);
            if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
              uVar7 = FUN_1812035e0(*(longlong *)(lVar8 + 0x10),0x47,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
              uVar10 = func_0x000180315580(TI_SystemMessage);
              AllianceMessage___ctor(uVar10,plVar6,uVar7,0);
              if (cRam00000001834b3dea == '\0') {
                FUN_180315380(TI_L2InputAmountWindow);
                cRam00000001834b3dea = '\x01';
              }
              if (*(longlong *)(lVar5 + 0x10) != 0) {
                uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x88);
                lVar8 = **(longlong **)(TI_L2InputAmountWindow + 0xb8);
                uVar7 = func_0x000180315580(TI_System.Action<int>);
                FUN_180b7db20(uVar7,lVar5,MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__2,0);
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar9 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x10);
                if (lVar9 == 0) {
                  if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar2 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                  lVar9 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(lVar9,uVar2,MD_L2SlotManager.__c._DropItem_b__45_3,0);
                  *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x10) = lVar9;
                  func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x10,lVar9);
                }
                if (lVar8 != 0) {
                  L2InputAmountWindow__ShowWindow__1807766c0(lVar8,uVar10,uVar1,uVar7,lVar9,0);
                  goto code_r0x000180791406;
                }
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
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

