// L2SlotManager__HandleDragRelease__1807918c0 @ 0x1807918c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__HandleDragRelease__1807918c0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  undefined8 uVar12;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  
  if (cRam00000001834b4449 == '\0') {
    FUN_180315380(TI_MacroSlot);
    FUN_180315380(TI_TradeSlot);
    cRam00000001834b4449 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x88) == 0) goto code_r0x000180792048;
  switch(*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x18)) {
  case 1:
  case 2:
    if (cRam00000001834b444a == '\0') {
      FUN_180315380(TI_InventorySlot,0);
      cRam00000001834b444a = '\x01';
    }
    plVar8 = *(longlong **)(param_1 + 0x88);
    if (plVar8 != (longlong *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
          TI_InventorySlot)) {
        FUN_1803146d0(plVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x0001807925d7;
      if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x18);
      switch(iVar2) {
      case 1:
        if (cRam00000001834b4454 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(LIT_"'Moving item from slot {0} to slot {1}.'");
          cRam00000001834b4454 = '\x01';
        }
        if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
          uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
          uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
          auStackX_8[0] = uVar1;
          uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          auStackX_18[0] = uVar3;
          uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
          uVar12 = System_String__Format(LIT_"'Moving item from slot {0} to slot {1}.'",uVar12,uVar10,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(uVar12,0);
          if (DAT_1834b3102 == '\0') {
            FUN_180315380(TI_PlayerInventory);
            DAT_1834b3102 = '\x01';
          }
          if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
            PlayerInventory__ChangeItemOrder(**(longlong **)(TI_PlayerInventory + 0xb8),uVar1,uVar3,0);
            return;
          }
        }
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      case 2:
      case 4:
      case 6:
        break;
      case 3:
        if (plVar8 == (longlong *)0x0) goto code_r0x0001807925d7;
        if (*(byte *)(plVar8 + 0x16) < 2) {
          if (cRam00000001834b444e == '\0') {
            FUN_180315380(TI_UnityEngine.Debug);
            FUN_180315380(TI_InventorySlot);
            FUN_180315380(LIT_"'Equip {0}.'");
            cRam00000001834b444e = '\x01';
          }
          plVar8 = *(longlong **)(param_1 + 0x88);
          if (plVar8 == (longlong *)0x0) {
            FUN_1803155d0();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8
               ) == TI_InventorySlot)) {
            auStackX_8[0] = (int)plVar8[2];
            uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
            uVar12 = System_String__Format(LIT_"'Equip {0}.'",uVar12,0);
            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
              func_0x000180315660();
            }
            UnityEngine_Debug__Log(uVar12,0);
            (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
            return;
          }
          FUN_1803146d0(plVar8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      case 5:
        L2SlotManager__AddItemToSkillbar__18078fd70(param_1,0);
        return;
      case 7:
        L2SlotManager__DestroyItem__180790680(param_1,0);
        return;
      default:
        if (iVar2 == 0xd) {
          L2SlotManager__CrystallizeItem__1807902f0(param_1,0,plVar8,0xd,unaff_RBX);
          return;
        }
      }
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
code_r0x0001807925d7:
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
        return;
      }
    }
    L2SlotManager__DropItem__180790ec0(param_1,0);
    return;
  case 3:
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    lVar11 = *(longlong *)(param_1 + 0x90);
    if ((*(int *)(lVar11 + 0x18) == 1) || (*(int *)(lVar11 + 0x18) == 2)) {
      if (cRam00000001834b444d == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(TI_GearSlot);
        FUN_180315380(LIT_"'Unequip {0}.'");
        cRam00000001834b444d = '\x01';
      }
      plVar8 = *(longlong **)(param_1 + 0x88);
      if (plVar8 == (longlong *)0x0) {
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(byte *)(TI_GearSlot + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*plVar8 + 200) + -8 +
           (ulonglong)*(byte *)(TI_GearSlot + 0x130) * 8) == TI_GearSlot)) {
        auStackX_8[0] = (int)plVar8[2];
        uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        uVar12 = System_String__Format(LIT_"'Unequip {0}.'",uVar12,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(uVar12,0);
        (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        return;
      }
      FUN_1803146d0(plVar8);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)(lVar11 + 0x18) == 5) {
      if (cRam00000001834b4455 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug,0);
        FUN_180315380(TI_InventorySlot);
        FUN_180315380(LIT_"'Add item {0} to skillbar slot {1}.'");
        cRam00000001834b4455 = '\x01';
      }
      plVar8 = *(longlong **)(param_1 + 0x88);
      if (plVar8 != (longlong *)0x0) {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(param_1 + 0x90) != 0) {
          lVar11 = plVar8[0x14];
          uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
          auStackX_8[0] = (int)lVar11;
          uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          auStackX_18[0] = uVar3;
          uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
          uVar12 = System_String__Format(LIT_"'Add item {0} to skillbar slot {1}.'",uVar12,uVar10,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__LogWarning(uVar12,0);
          if (cRam00000001834b3101 == '\0') {
            FUN_180315380(TI_PlayerShortcuts);
            cRam00000001834b3101 = '\x01';
          }
          if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
            PlayerShortcuts__AddShortcut__1804d1730
                      (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar3,(int)lVar11,1,0);
            return;
          }
        }
      }
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)(lVar11 + 0x18) != 7) {
      if (*(int *)(lVar11 + 0x18) != 0xd) {
        return;
      }
      if (cRam00000001834b4452 == '\0') {
        FUN_180315380(TI_System.Action,0);
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
      lVar11 = func_0x000180315580(TI_L2SlotManager.<>c__DisplayClass47_0);
      Gear__UpdateWeaponType__1803dadf0(lVar11,0);
      if (lVar11 != 0) {
        plVar8 = *(longlong **)(param_1 + 0x88);
        if (plVar8 == (longlong *)0x0) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
        }
        else {
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8
               ) != TI_InventorySlot)) {
            FUN_1803146d0(plVar8);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(longlong **)(lVar11 + 0x10) = plVar8;
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8
               ) != TI_InventorySlot)) {
            FUN_1803146d0(plVar8);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        func_0x000180314690(lVar11 + 0x10,plVar8);
        plVar8 = (longlong *)func_0x000180314710(TI_SMParam__,1);
        if (*(longlong *)(lVar11 + 0x10) != 0) {
          auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 0x10);
          uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          lVar7 = func_0x000180315580(TI_SMParam);
          SMParam___ctor(lVar7,3,uVar12,0);
          if (plVar8 != (longlong *)0x0) {
            if ((lVar7 != 0) &&
               (lVar9 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
              uVar12 = func_0x000180314f80();
              FUN_180315590(uVar12,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((int)plVar8[3] == 0) {
              FUN_1803155c0();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar8[4] = lVar7;
            func_0x000180314690(plVar8 + 4,lVar7);
            lVar7 = SystemMessageTable__get_Instance(0);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
              uVar12 = FUN_1812035e0(*(longlong *)(lVar7 + 0x10),0x150,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
              uVar10 = func_0x000180315580(TI_SystemMessage);
              AllianceMessage___ctor(uVar10,plVar8,uVar12,0);
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              lVar7 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
              uVar12 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar12,lVar11,MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0,0);
              if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar11 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28);
              if (lVar11 == 0) {
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar4 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                lVar11 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar11,uVar4,MD_L2SlotManager.__c._CrystallizeItem_b__47_1,0);
                *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28) = lVar11;
                func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x28,lVar11);
              }
              if (lVar7 == 0) {
                FUN_1803155d0();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              L2ConfirmWindow__ShowWindow__180770ea0(lVar7,uVar10,uVar12,lVar11,0);
              return;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (cRam00000001834b4451 == '\0') {
      FUN_180315380(TI_System.Action<int>,0);
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
    lVar11 = func_0x000180315580(TI_L2SlotManager.<>c__DisplayClass46_0);
    Gear__UpdateWeaponType__1803dadf0(lVar11,0);
    if (lVar11 != 0) {
      plVar8 = *(longlong **)(param_1 + 0x88);
      if (plVar8 == (longlong *)0x0) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
      }
      else {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(longlong **)(lVar11 + 0x10) = plVar8;
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      func_0x000180314690(lVar11 + 0x10,plVar8);
      plVar8 = (longlong *)func_0x000180314710(TI_SMParam__,1);
      if (*(longlong *)(lVar11 + 0x10) != 0) {
        auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 0x10);
        uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        lVar7 = func_0x000180315580(TI_SMParam);
        SMParam___ctor(lVar7,3,uVar12,0);
        if (plVar8 != (longlong *)0x0) {
          if ((lVar7 != 0) &&
             (lVar9 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar12 = func_0x000180314f80();
            FUN_180315590(uVar12,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((int)plVar8[3] == 0) {
            FUN_1803155c0();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar8[4] = lVar7;
          func_0x000180314690(plVar8 + 4,lVar7);
          if (*(longlong *)(lVar11 + 0x10) != 0) {
            if (*(int *)(*(longlong *)(lVar11 + 0x10) + 0x88) < 2) {
              lVar7 = SystemMessageTable__get_Instance(0);
              if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
                uVar12 = FUN_1812035e0(*(longlong *)(lVar7 + 0x10),0x4a,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
                uVar10 = func_0x000180315580(TI_SystemMessage);
                AllianceMessage___ctor(uVar10,plVar8,uVar12,0);
                if (DAT_1834b30fd == '\0') {
                  FUN_180315380(TI_L2ConfirmWindow);
                  DAT_1834b30fd = '\x01';
                }
                lVar7 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
                uVar12 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar12,lVar11,MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0,0);
                if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar9 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18);
                if (lVar9 == 0) {
                  if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar4 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                  lVar9 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(lVar9,uVar4,MD_L2SlotManager.__c._DestroyItem_b__46_1,0);
                  *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18) = lVar9;
                  func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x18,lVar9);
                }
                if (lVar7 != 0) {
                  L2ConfirmWindow__ShowWindow__180770ea0(lVar7,uVar10,uVar12,lVar9,0);
code_r0x000180790ba7:
                  if (*(longlong *)(lVar11 + 0x10) == 0) {
                    FUN_1803155d0();
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  auStackX_8[0] = *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 0x10);
                  uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
                  uVar12 = System_String__Format(LIT_"'Destroy {0}.'",uVar12,0);
                  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Debug__Log(uVar12,0);
                  return;
                }
              }
            }
            else {
              lVar7 = SystemMessageTable__get_Instance(0);
              if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
                uVar12 = FUN_1812035e0(*(longlong *)(lVar7 + 0x10),0x49,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
                uVar10 = func_0x000180315580(TI_SystemMessage);
                AllianceMessage___ctor(uVar10,plVar8,uVar12,0);
                if (cRam00000001834b3dea == '\0') {
                  FUN_180315380(TI_L2InputAmountWindow);
                  cRam00000001834b3dea = '\x01';
                }
                if (*(longlong *)(lVar11 + 0x10) != 0) {
                  uVar3 = *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 0x88);
                  lVar7 = **(longlong **)(TI_L2InputAmountWindow + 0xb8);
                  uVar12 = func_0x000180315580(TI_System.Action<int>);
                  FUN_180b7db20(uVar12,lVar11,MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2,0);
                  if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar9 = *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20);
                  if (lVar9 == 0) {
                    if (*(int *)(TI_L2SlotManager.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar4 = **(undefined8 **)(TI_L2SlotManager.<>c + 0xb8);
                    lVar9 = func_0x000180315580(TI_System.Action);
                    FUN_1816a9c60(lVar9,uVar4,MD_L2SlotManager.__c._DestroyItem_b__46_3,0);
                    *(longlong *)(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20) = lVar9;
                    func_0x000180314690(*(longlong *)(TI_L2SlotManager.<>c + 0xb8) + 0x20,lVar9);
                  }
                  if (lVar7 != 0) {
                    L2InputAmountWindow__ShowWindow__1807766c0(lVar7,uVar10,uVar3,uVar12,lVar9,0);
                    goto code_r0x000180790ba7;
                  }
                }
              }
            }
            FUN_1803155d0();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  case 4:
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0) goto code_r0x000180792048;
    if (*(char *)(**(longlong **)(TI_SkillbarWindow + 0xb8) + 0x88) != '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) != 5) {
      return;
    }
    if (cRam00000001834b4458 == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(TI_SkillSlot);
      FUN_180315380(LIT_"'Add skill {0} to skillbar slot {1}.'");
      cRam00000001834b4458 = '\x01';
    }
    plVar8 = *(longlong **)(param_1 + 0x88);
    if (plVar8 == (longlong *)0x0) {
code_r0x000180792066:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8
         ) != TI_SkillSlot)) {
      FUN_1803146d0(plVar8);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((plVar8[0x14] == 0) || (*(longlong *)(param_1 + 0x90) == 0)) goto code_r0x000180792066;
    uVar3 = *(undefined4 *)(plVar8[0x14] + 0x10);
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
    auStackX_8[0] = uVar3;
    uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_18[0] = uVar1;
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
    uVar12 = System_String__Format(LIT_"'Add skill {0} to skillbar slot {1}.'",uVar12,uVar10);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar12,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    lVar11 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
    if (lVar11 == 0) goto code_r0x000180792066;
    uVar12 = 2;
    break;
  case 5:
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow,0);
      cRam00000001834b32cb = '\x01';
    }
    if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
      if (*(char *)(**(longlong **)(TI_SkillbarWindow + 0xb8) + 0x88) != '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x90) == 0) {
        if (DAT_1834b31c0 == '\0') {
          FUN_180315380(TI_L2GameUI);
          DAT_1834b31c0 = '\x01';
        }
        if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
          if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
            return;
          }
          goto code_r0x000180792a90;
        }
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) == 5) {
          if (cRam00000001834b4456 == '\0') {
            FUN_180315380(TI_UnityEngine.Debug);
            FUN_180315380(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'");
            cRam00000001834b4456 = '\x01';
          }
          if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
            uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
            uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
            auStackX_18[0] = uVar1;
            uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
            uVar10 = func_0x000180314670(_DAT_1834c6268,&stack0x00000020);
            uVar12 = System_String__Format(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'",uVar12,uVar10,0);
            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
              func_0x000180315660();
            }
            UnityEngine_Debug__LogWarning(uVar12,0);
            if (cRam00000001834b3101 == '\0') {
              FUN_180315380(TI_PlayerShortcuts);
              cRam00000001834b3101 = '\x01';
            }
            if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
              PlayerShortcuts__MoveShortcut__1804d21d0
                        (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar1,uVar3,0);
              return;
            }
          }
          FUN_1803155d0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (DAT_1834b31c0 == '\0') {
          FUN_180315380(TI_L2GameUI);
          DAT_1834b31c0 = '\x01';
        }
        if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
          if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
            return;
          }
code_r0x000180792a90:
          if (cRam00000001834b4457 == '\0') {
            FUN_180315380(TI_UnityEngine.Debug,0);
            FUN_180315380(LIT_"'Removing skillbar shortcut from slot {0}.'");
            cRam00000001834b4457 = '\x01';
          }
          if (*(longlong *)(param_1 + 0x88) != 0) {
            uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
            auStackX_8[0] = uVar3;
            uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
            uVar12 = System_String__Format(LIT_"'Removing skillbar shortcut from slot {0}.'",uVar12,0);
            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
              func_0x000180315660();
            }
            UnityEngine_Debug__LogWarning(uVar12,0);
            if (cRam00000001834b3101 == '\0') {
              FUN_180315380(TI_PlayerShortcuts);
              cRam00000001834b3101 = '\x01';
            }
            if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
              PlayerShortcuts__DeleteShortcut__1804d1f20
                        (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar3,0);
              return;
            }
          }
          FUN_1803155d0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  case 6:
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) != 5) {
      return;
    }
    if (cRam00000001834b4453 == '\0') {
      FUN_180315380(TI_ActionSlot);
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(LIT_"'Add action ID {0} into skillbar slot {1}.'");
      cRam00000001834b4453 = '\x01';
    }
    plVar8 = *(longlong **)(param_1 + 0x88);
    if (plVar8 == (longlong *)0x0) {
code_r0x000180792075:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_ActionSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_ActionSlot + 0x130) * 8) !=
        TI_ActionSlot)) {
      FUN_1803146d0(plVar8);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(param_1 + 0x90) == 0) goto code_r0x000180792075;
    uVar3 = (undefined4)plVar8[0x10];
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
    auStackX_8[0] = uVar3;
    uVar12 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_18[0] = uVar1;
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
    uVar12 = System_String__Format(LIT_"'Add action ID {0} into skillbar slot {1}.'",uVar12,uVar10);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar12,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    lVar11 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
    if (lVar11 == 0) goto code_r0x000180792075;
    uVar12 = 3;
    break;
  default:
    goto code_r0x000180791c60;
  case 8:
    if (cRam00000001834b444b == '\0') {
      FUN_180315380(TI_ProductSlot);
      cRam00000001834b444b = '\x01';
    }
    plVar8 = *(longlong **)(param_1 + 0x88);
    if (plVar8 != (longlong *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_ProductSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar8 + 200) + -8 +
           (ulonglong)*(byte *)(TI_ProductSlot + 0x130) * 8) != TI_ProductSlot)) {
        FUN_1803146d0(plVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) != 9) {
      return;
    }
    goto code_r0x000180791ed0;
  case 9:
    if (cRam00000001834b444c == '\0') {
      FUN_180315380(TI_BasketSlot);
      cRam00000001834b444c = '\x01';
    }
    plVar8 = *(longlong **)(param_1 + 0x88);
    if (plVar8 != (longlong *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_BasketSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar8 + 200) + -8 +
           (ulonglong)*(byte *)(TI_BasketSlot + 0x130) * 8) != TI_BasketSlot)) {
        FUN_1803146d0(plVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((*(longlong *)(param_1 + 0x90) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) == 9)) {
      return;
    }
code_r0x000180791ed0:
    if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180791ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      return;
    }
code_r0x000180792048:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  case 0xb:
    plVar8 = *(longlong **)(param_1 + 0x90);
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_TradeSlot + 0x130)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_TradeSlot + 0x130) * 8
         ) != TI_TradeSlot) {
      return;
    }
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_TradeSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar5 + 200) + -8 +
           (ulonglong)*(byte *)(TI_TradeSlot + 0x130) * 8) != TI_TradeSlot)) {
        FUN_1803146d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((plVar5[0x17] != 0) && (lVar11 = TradeSlot__get_Grade(plVar5,0,0), lVar11 != 0)) {
        lVar11 = TradeSlot__get_Grade(plVar5,0);
        if (lVar11 != 0) {
          if (*(longlong *)(lVar11 + 0x60) == 0) {
            return;
          }
          if (plVar8 != (longlong *)0x0) {
            lVar11 = TradeSlot__get_Grade(plVar8,0);
            lVar7 = TradeSlot__get_Grade(plVar5,0);
            if (lVar7 != 0) {
              if (lVar11 != *(longlong *)(lVar7 + 0x60)) {
                return;
              }
              lVar11 = TradeSlot__get_Grade(plVar5,0);
              if (lVar11 != 0) {
                lVar11 = *(longlong *)(lVar11 + 0x50);
                if (lVar11 == 0) {
                  return;
                }
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),plVar5[0x17],
                           *(undefined8 *)(lVar11 + 0x28));
                return;
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      return;
    }
    goto code_r0x000180792048;
  case 0xc:
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x18) != 5) {
      return;
    }
    lVar11 = FUN_180493b20(0);
    if (lVar11 == 0) goto code_r0x000180792048;
    if (*(char *)(lVar11 + 0x88) != '\0') {
      return;
    }
    lVar11 = FUN_1804583c0(0);
    if ((*(longlong *)(param_1 + 0x90) == 0) ||
       (plVar8 = *(longlong **)(param_1 + 0x88), plVar8 == (longlong *)0x0))
    goto code_r0x000180792048;
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_MacroSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)*(byte *)(TI_MacroSlot + 0x130) * 8
         ) != TI_MacroSlot)) {
      FUN_1803146d0(plVar8);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (lVar11 == 0) goto code_r0x000180792048;
    uVar3 = (undefined4)plVar8[0x10];
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
    uVar12 = 4;
  }
  PlayerShortcuts__AddShortcut__1804d1730(lVar11,uVar1,uVar3,uVar12,0);
code_r0x000180791c60:
  return;
}

