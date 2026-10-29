// L2SlotManager__ReleaseDrag__180793220 @ 0x180793220

/* WARNING: Possible PIC construction at 0x000180794535: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00018079453a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2SlotManager__ReleaseDrag__180793220(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_20 [2];
  
  if (cRam00000001834b4448 == '\0') {
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PetWindow);
    cRam00000001834b4448 = '\x01';
  }
  uVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  if (param_1[0x11] != 0) {
    if (cRam00000001834b4371 == '\0') {
      FUN_180315380(TI_MacroWindow);
      cRam00000001834b4371 = '\x01';
    }
    uVar10 = **(undefined8 **)(TI_MacroWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((char)uVar8 != '\0') {
      if (cRam00000001834b4371 == '\0') {
        FUN_180315380(TI_MacroWindow);
        cRam00000001834b4371 = '\x01';
      }
      if (**(longlong **)(TI_MacroWindow + 0xb8) == 0) goto code_r0x00018079460d;
      uVar8 = MacroWindow__Solta__18065b130
                        (**(longlong **)(TI_MacroWindow + 0xb8),param_1[0x11],param_2,0);
      if ((char)uVar8 != '\0') goto SUB_180314690;
    }
  }
  plVar12 = (longlong *)param_1[0x11];
  if (plVar12 != (longlong *)0x0) {
    bVar2 = *(byte *)(TI_InventorySlot + 0x130);
    uVar8 = (ulonglong)bVar2;
    if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
       (uVar8 = *(ulonglong *)(*plVar12 + 200),
       *(longlong *)((uVar8 - 8) + (ulonglong)bVar2 * 8) == TI_InventorySlot)) {
      if (*(int *)(TI_PetWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3fe9 == '\0') {
        FUN_180315380(TI_PetWindow);
        cRam00000001834b3fe9 = '\x01';
      }
      if (*(int *)(TI_PetWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar10 = **(undefined8 **)(TI_PetWindow + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((char)uVar8 != '\0') {
        if (*(int *)(TI_PetWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3fe9 == '\0') {
          FUN_180315380(TI_PetWindow);
          cRam00000001834b3fe9 = '\x01';
        }
        if (*(int *)(TI_PetWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_PetWindow + 0xb8) == 0) goto code_r0x00018079460d;
        uVar8 = PetWindow__AceitaSoltar__1806ab800(**(longlong **)(TI_PetWindow + 0xb8),0);
        if ((char)uVar8 != '\0') {
          if (*(int *)(TI_PetWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar9 = FUN_1806a4840(0);
          uVar13 = 0;
          if (plVar12[0x15] != 0) {
            uVar13 = *(undefined4 *)(plVar12[0x15] + 0x10);
          }
          if (lVar9 == 0) goto code_r0x00018079460d;
          uVar8 = PetWindow__RecebeItem(lVar9,(int)plVar12[0x14],(int)plVar12[0x11],uVar13,0);
          goto SUB_180314690;
        }
      }
    }
  }
  if (param_1[0x11] == 0) goto SUB_180314690;
  if (param_1[0x12] == 0) {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    uVar8 = **(ulonglong **)(TI_L2GameUI + 0xb8);
    if (uVar8 == 0) goto code_r0x00018079460d;
    if (*(char *)(uVar8 + 0x38) != '\0') goto SUB_180314690;
  }
  if (((((param_1[0x11] != 0) && (param_1[0x12] != 0)) &&
       (uVar4 = param_1[0x11], *(int *)(uVar4 + 0x14) == *(int *)(param_1[0x12] + 0x14))) &&
      (*(int *)(uVar4 + 0x18) == *(int *)(param_1[0x12] + 0x18))) &&
     ((uVar8 = uVar4, *(int *)(uVar4 + 0x18) != 0xb || (uVar8 = param_1[0x12], uVar4 == uVar8))))
  goto SUB_180314690;
  if (cRam00000001834b4449 == '\0') {
    FUN_180315380(TI_MacroSlot);
    FUN_180315380(TI_TradeSlot);
    cRam00000001834b4449 = '\x01';
  }
  if (param_1[0x11] == 0) goto code_r0x00018079460d;
  plVar12 = (longlong *)0x0;
  uVar7 = *(int *)(param_1[0x11] + 0x18) - 1;
  uVar8 = (ulonglong)uVar7;
  if (0xb < uVar7) goto SUB_180314690;
  uVar8 = (ulonglong)*(uint *)(&UNK_180794614 + (longlong)(int)uVar7 * 4) + 0x180000000;
  switch(uVar7) {
  default:
    if (cRam00000001834b444a == '\0') {
      FUN_180315380(TI_InventorySlot);
      cRam00000001834b444a = '\x01';
    }
    plVar5 = (longlong *)param_1[0x11];
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
         (plVar12 = plVar5,
         *(longlong *)
          (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
         TI_InventorySlot)) {
        FUN_1803146d0(plVar5,TI_InventorySlot);
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
    }
    if (param_1[0x12] == 0) {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      uVar8 = **(ulonglong **)(TI_L2GameUI + 0xb8);
      if (uVar8 == 0) goto code_r0x00018079460d;
      cVar3 = *(char *)(uVar8 + 0x38);
    }
    else {
      switch(*(int *)(param_1[0x12] + 0x18)) {
      case 1:
        if (cRam00000001834b4454 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(LIT_"'Moving item from slot {0} to slot {1}.'");
          cRam00000001834b4454 = '\x01';
        }
        if ((param_1[0x11] != 0) && (param_1[0x12] != 0)) {
          uVar13 = *(undefined4 *)(param_1[0x12] + 0x14);
          uVar14 = *(undefined4 *)(param_1[0x11] + 0x14);
          auStackX_8[0] = uVar14;
          uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          auStackX_20[0] = uVar13;
          uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
          uVar10 = System_String__Format(LIT_"'Moving item from slot {0} to slot {1}.'",uVar10,uVar11,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(uVar10,0);
          if (DAT_1834b3102 == '\0') {
            FUN_180315380(TI_PlayerInventory);
            DAT_1834b3102 = '\x01';
          }
          if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
            uVar8 = PlayerInventory__ChangeItemOrder
                              (**(longlong **)(TI_PlayerInventory + 0xb8),uVar14,uVar13,0);
            goto SUB_180314690;
          }
        }
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      case 2:
      case 4:
      case 6:
        break;
      case 3:
        if (plVar12 == (longlong *)0x0) goto code_r0x00018079460d;
        if (*(byte *)(plVar12 + 0x16) < 2) {
          if (cRam00000001834b444e == '\0') {
            FUN_180315380(TI_UnityEngine.Debug);
            FUN_180315380(TI_InventorySlot);
            FUN_180315380(LIT_"'Equip {0}.'");
            cRam00000001834b444e = '\x01';
          }
          plVar12 = (longlong *)param_1[0x11];
          if (plVar12 == (longlong *)0x0) {
            FUN_1803155d0();
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return uVar8;
          }
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar12 + 200) + -8 +
               (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) != TI_InventorySlot)) {
            FUN_1803146d0(plVar12);
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return uVar8;
          }
          auStackX_8[0] = (undefined4)plVar12[2];
          uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          uVar10 = LIT_"'Equip {0}.'";
          goto code_r0x00018079382f;
        }
        break;
      case 5:
        if (cRam00000001834b4455 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(TI_InventorySlot);
          FUN_180315380(LIT_"'Add item {0} to skillbar slot {1}.'");
          cRam00000001834b4455 = '\x01';
        }
        plVar12 = (longlong *)param_1[0x11];
        if (plVar12 == (longlong *)0x0) {
code_r0x00018079458c:
          FUN_1803155d0();
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar12 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
            != TI_InventorySlot)) {
          FUN_1803146d0(plVar12);
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        if (param_1[0x12] == 0) goto code_r0x00018079458c;
        uVar13 = (undefined4)plVar12[0x14];
        uVar14 = *(undefined4 *)(param_1[0x12] + 0x14);
        auStackX_8[0] = uVar13;
        uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        auStackX_20[0] = uVar14;
        uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
        uVar10 = System_String__Format(LIT_"'Add item {0} to skillbar slot {1}.'",uVar10,uVar11,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar10,0);
        if (cRam00000001834b3101 == '\0') {
          FUN_180315380(TI_PlayerShortcuts);
          cRam00000001834b3101 = '\x01';
        }
        lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
        if (lVar9 == 0) goto code_r0x00018079458c;
        goto code_r0x00018079399c;
      case 7:
code_r0x000180793a94:
        uVar8 = L2SlotManager__DestroyItem__180790680(param_1,0);
        goto SUB_180314690;
      default:
        if (*(int *)(param_1[0x12] + 0x18) == 0xd) {
code_r0x000180793a85:
          uVar8 = L2SlotManager__CrystallizeItem__1807902f0(param_1,0);
          goto SUB_180314690;
        }
      }
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      uVar8 = **(ulonglong **)(TI_L2GameUI + 0xb8);
      if (uVar8 == 0) goto code_r0x00018079460d;
      cVar3 = *(char *)(uVar8 + 0x38);
    }
    if (cVar3 == '\0') {
      uVar8 = L2SlotManager__DropItem__180790ec0(param_1,0);
    }
    break;
  case 2:
    if (param_1[0x12] == 0) break;
    uVar8 = param_1[0x12];
    if ((*(int *)(uVar8 + 0x18) == 1) || (*(int *)(uVar8 + 0x18) == 2)) {
      if (cRam00000001834b444d == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(TI_GearSlot);
        FUN_180315380(LIT_"'Unequip {0}.'");
        cRam00000001834b444d = '\x01';
      }
      plVar12 = (longlong *)param_1[0x11];
      if (plVar12 == (longlong *)0x0) {
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_GearSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar12 + 200) + -8 +
           (ulonglong)*(byte *)(TI_GearSlot + 0x130) * 8) != TI_GearSlot)) {
        FUN_1803146d0(plVar12);
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      auStackX_8[0] = (undefined4)plVar12[2];
      uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar10 = LIT_"'Unequip {0}.'";
code_r0x00018079382f:
      uVar10 = System_String__Format(uVar10,uVar11,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar10,0);
      uVar8 = (**(code **)(*plVar12 + 0x228))(plVar12,*(undefined8 *)(*plVar12 + 0x230));
      break;
    }
    if (*(int *)(uVar8 + 0x18) != 5) {
      if (*(int *)(uVar8 + 0x18) != 7) {
        if (*(int *)(uVar8 + 0x18) != 0xd) break;
        goto code_r0x000180793a85;
      }
      goto code_r0x000180793a94;
    }
    if (cRam00000001834b4455 == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(TI_InventorySlot);
      FUN_180315380(LIT_"'Add item {0} to skillbar slot {1}.'");
      cRam00000001834b4455 = '\x01';
    }
    plVar12 = (longlong *)param_1[0x11];
    if (plVar12 == (longlong *)0x0) {
code_r0x00018079459e:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar12 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
        TI_InventorySlot)) {
      FUN_1803146d0(plVar12);
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if (param_1[0x12] == 0) goto code_r0x00018079459e;
    uVar13 = (undefined4)plVar12[0x14];
    uVar14 = *(undefined4 *)(param_1[0x12] + 0x14);
    auStackX_8[0] = uVar13;
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_20[0] = uVar14;
    uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
    uVar10 = System_String__Format(LIT_"'Add item {0} to skillbar slot {1}.'",uVar10,uVar11,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar10,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
    if (lVar9 == 0) goto code_r0x00018079459e;
code_r0x00018079399c:
    uVar10 = 1;
    goto code_r0x0001807939a2;
  case 3:
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    uVar8 = **(ulonglong **)(TI_SkillbarWindow + 0xb8);
    if (uVar8 == 0) goto code_r0x00018079460d;
    if (((*(char *)(uVar8 + 0x88) != '\0') || (param_1[0x12] == 0)) ||
       (uVar8 = param_1[0x12], *(int *)(param_1[0x12] + 0x18) != 5)) break;
    if (cRam00000001834b4458 == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(TI_SkillSlot);
      FUN_180315380(LIT_"'Add skill {0} to skillbar slot {1}.'");
      cRam00000001834b4458 = '\x01';
    }
    plVar12 = (longlong *)param_1[0x11];
    if (plVar12 == (longlong *)0x0) {
code_r0x0001807945c5:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar12 + 200) + -8 +
         (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8) != TI_SkillSlot)) {
      FUN_1803146d0(plVar12);
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if ((plVar12[0x14] == 0) || (param_1[0x12] == 0)) goto code_r0x0001807945c5;
    uVar13 = *(undefined4 *)(plVar12[0x14] + 0x10);
    uVar14 = *(undefined4 *)(param_1[0x12] + 0x14);
    auStackX_8[0] = uVar13;
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_20[0] = uVar14;
    uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
    uVar10 = System_String__Format(LIT_"'Add skill {0} to skillbar slot {1}.'",uVar10,uVar11,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar10,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
    if (lVar9 == 0) goto code_r0x0001807945c5;
    uVar10 = 2;
    goto code_r0x0001807939a2;
  case 4:
    if (cRam00000001834b32cb == '\0') {
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    uVar8 = **(ulonglong **)(TI_SkillbarWindow + 0xb8);
    if (uVar8 == 0) goto code_r0x00018079460d;
    if (*(char *)(uVar8 + 0x88) != '\0') break;
    if (param_1[0x12] == 0) {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      uVar8 = **(ulonglong **)(TI_L2GameUI + 0xb8);
      if (uVar8 == 0) goto code_r0x00018079460d;
      if (*(char *)(uVar8 + 0x38) != '\0') break;
      if (cRam00000001834b4457 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(LIT_"'Removing skillbar shortcut from slot {0}.'");
        cRam00000001834b4457 = '\x01';
      }
      if (param_1[0x11] == 0) {
code_r0x0001807945d7:
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      uVar13 = *(undefined4 *)(param_1[0x11] + 0x14);
      auStackX_8[0] = uVar13;
      uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar10 = System_String__Format(LIT_"'Removing skillbar shortcut from slot {0}.'",uVar10,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar10,0);
      if (cRam00000001834b3101 == '\0') {
        FUN_180315380(TI_PlayerShortcuts);
        cRam00000001834b3101 = '\x01';
      }
      lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
      if (lVar9 == 0) goto code_r0x0001807945d7;
    }
    else {
      if (*(int *)(param_1[0x12] + 0x18) == 5) {
        if (cRam00000001834b4456 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'");
          cRam00000001834b4456 = '\x01';
        }
        if ((param_1[0x11] != 0) && (param_1[0x12] != 0)) {
          uVar13 = *(undefined4 *)(param_1[0x12] + 0x14);
          uVar14 = *(undefined4 *)(param_1[0x11] + 0x14);
          auStackX_8[0] = uVar14;
          uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
          auStackX_20[0] = uVar13;
          uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
          uVar10 = System_String__Format(LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'",uVar10,uVar11,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__LogWarning(uVar10,0);
          if (cRam00000001834b3101 == '\0') {
            FUN_180315380(TI_PlayerShortcuts);
            cRam00000001834b3101 = '\x01';
          }
          if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
            uVar8 = PlayerShortcuts__MoveShortcut__1804d21d0
                              (**(longlong **)(TI_PlayerShortcuts + 0xb8),uVar14,uVar13,0);
            break;
          }
        }
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      uVar8 = **(ulonglong **)(TI_L2GameUI + 0xb8);
      if (uVar8 == 0) goto code_r0x00018079460d;
      if (*(char *)(uVar8 + 0x38) != '\0') break;
      if (cRam00000001834b4457 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(LIT_"'Removing skillbar shortcut from slot {0}.'");
        cRam00000001834b4457 = '\x01';
      }
      if (param_1[0x11] == 0) {
code_r0x0001807945cb:
        FUN_1803155d0();
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      uVar13 = *(undefined4 *)(param_1[0x11] + 0x14);
      auStackX_8[0] = uVar13;
      uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar10 = System_String__Format(LIT_"'Removing skillbar shortcut from slot {0}.'",uVar10,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar10,0);
      if (cRam00000001834b3101 == '\0') {
        FUN_180315380(TI_PlayerShortcuts);
        cRam00000001834b3101 = '\x01';
      }
      lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
      if (lVar9 == 0) goto code_r0x0001807945cb;
    }
    uVar8 = PlayerShortcuts__DeleteShortcut__1804d1f20(lVar9,uVar13,0);
    break;
  case 5:
    if ((param_1[0x12] == 0) || (uVar8 = param_1[0x12], *(int *)(param_1[0x12] + 0x18) != 5)) break;
    if (cRam00000001834b4453 == '\0') {
      FUN_180315380(TI_ActionSlot);
      FUN_180315380(TI_UnityEngine.Debug);
      FUN_180315380(LIT_"'Add action ID {0} into skillbar slot {1}.'");
      cRam00000001834b4453 = '\x01';
    }
    plVar12 = (longlong *)param_1[0x11];
    if (plVar12 == (longlong *)0x0) {
code_r0x0001807945e6:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_ActionSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar12 + 200) + -8 + (ulonglong)*(byte *)(TI_ActionSlot + 0x130) * 8) !=
        TI_ActionSlot)) {
      FUN_1803146d0(plVar12);
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    if (param_1[0x12] == 0) goto code_r0x0001807945e6;
    uVar13 = (undefined4)plVar12[0x10];
    uVar14 = *(undefined4 *)(param_1[0x12] + 0x14);
    auStackX_8[0] = uVar13;
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    auStackX_20[0] = uVar14;
    uVar11 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
    uVar10 = System_String__Format(LIT_"'Add action ID {0} into skillbar slot {1}.'",uVar10,uVar11,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar10,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerShortcuts + 0xb8);
    if (lVar9 == 0) goto code_r0x0001807945e6;
    uVar10 = 3;
code_r0x0001807939a2:
    uVar8 = PlayerShortcuts__AddShortcut__1804d1730(lVar9,uVar14,uVar13,uVar10,0);
    break;
  case 6:
  case 9:
    break;
  case 7:
    if (cRam00000001834b444b == '\0') {
      uVar8 = FUN_180315380(TI_ProductSlot);
      cRam00000001834b444b = '\x01';
    }
    plVar5 = (longlong *)param_1[0x11];
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_ProductSlot + 0x130)) ||
         (uVar8 = *(ulonglong *)(*plVar5 + 200), plVar12 = plVar5,
         *(longlong *)((uVar8 - 8) + (ulonglong)*(byte *)(TI_ProductSlot + 0x130) * 8) !=
         TI_ProductSlot)) {
        FUN_1803146d0(plVar5);
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
    }
    if ((param_1[0x12] == 0) || (uVar8 = param_1[0x12], *(int *)(param_1[0x12] + 0x18) != 9)) break;
    goto code_r0x0001807943b2;
  case 8:
    if (cRam00000001834b444c == '\0') {
      FUN_180315380(TI_BasketSlot);
      cRam00000001834b444c = '\x01';
    }
    plVar5 = (longlong *)param_1[0x11];
    if (plVar5 != (longlong *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_BasketSlot + 0x130)) ||
         (plVar12 = plVar5,
         *(longlong *)
          (*(longlong *)(*plVar5 + 200) + -8 +
          (ulonglong)*(byte *)(TI_BasketSlot + 0x130) * 8) != TI_BasketSlot)) {
        FUN_1803146d0(plVar5);
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
    }
    if ((param_1[0x12] != 0) && (uVar8 = param_1[0x12], *(int *)(param_1[0x12] + 0x18) == 9)) break;
code_r0x0001807943b2:
    if (plVar12 == (longlong *)0x0) {
code_r0x00018079460d:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    uVar8 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    break;
  case 10:
    plVar12 = (longlong *)param_1[0x12];
    if (plVar12 != (longlong *)0x0) {
      bVar2 = *(byte *)(TI_TradeSlot + 0x130);
      uVar8 = (ulonglong)bVar2;
      if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
         (uVar8 = *(ulonglong *)(*plVar12 + 200),
         *(longlong *)((uVar8 - 8) + (ulonglong)bVar2 * 8) == TI_TradeSlot)) {
        plVar5 = (longlong *)param_1[0x11];
        if (plVar5 == (longlong *)0x0) goto code_r0x00018079460d;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_TradeSlot + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar5 + 200) + -8 +
             (ulonglong)*(byte *)(TI_TradeSlot + 0x130) * 8) != TI_TradeSlot)) {
          FUN_1803146d0();
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        uVar8 = TradeSlot__SoltaEm__180779c50(plVar5,plVar12,0);
      }
    }
    break;
  case 0xb:
    if ((param_1[0x12] != 0) && (uVar8 = param_1[0x12], *(int *)(param_1[0x12] + 0x18) == 5)) {
      uVar8 = FUN_180493b20(0);
      if (uVar8 != 0) {
        if (*(char *)(uVar8 + 0x88) != '\0') break;
        lVar9 = FUN_1804583c0(0);
        if ((param_1[0x12] != 0) &&
           (plVar12 = (longlong *)param_1[0x11], plVar12 != (longlong *)0x0)) {
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(TI_MacroSlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar12 + 200) + -8 +
               (ulonglong)*(byte *)(TI_MacroSlot + 0x130) * 8) != TI_MacroSlot)) {
            FUN_1803146d0(plVar12);
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return uVar8;
          }
          if (lVar9 != 0) {
            uVar8 = PlayerShortcuts__AddShortcut__1804d1730
                              (lVar9,*(undefined4 *)(param_1[0x12] + 0x14),(int)plVar12[0x10],4,0);
            break;
          }
        }
      }
      goto code_r0x00018079460d;
    }
  }
SUB_180314690:
  param_1[0x11] = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar7 = (uint)((ulonglong)(param_1 + 0x11) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar4 = *puVar1;
      LOCK();
      uVar8 = *puVar1;
      bVar15 = uVar4 == uVar8;
      if (bVar15) {
        *puVar1 = uVar4 | 1L << (uVar7 & 0x3f);
        uVar8 = uVar4;
      }
      UNLOCK();
    } while (!bVar15);
  }
  return uVar8;
}

