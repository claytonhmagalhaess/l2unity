// L2SlotManager__HandleInventoryDrag__180792230 @ 0x180792230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__HandleInventoryDrag__180792230(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  
  if (cRam00000001834b444a == '\0') {
    FUN_180315380(TI_InventorySlot);
    cRam00000001834b444a = '\x01';
  }
  plVar4 = *(longlong **)(param_1 + 0x88);
  if (plVar4 != (longlong *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_InventorySlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) !=
        TI_InventorySlot)) {
      FUN_1803146d0(plVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x18);
    switch(iVar1) {
    case 1:
      if (cRam00000001834b4454 == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(LIT_"'Moving item from slot {0} to slot {1}.'");
        cRam00000001834b4454 = '\x01';
      }
      if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x14);
        uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x14);
        auStackX_8[0] = uVar3;
        uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        auStackX_18[0] = uVar2;
        uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
        uVar7 = System_String__Format(LIT_"'Moving item from slot {0} to slot {1}.'",uVar7,uVar6,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(uVar7,0);
        if (DAT_1834b3102 == '\0') {
          FUN_180315380(TI_PlayerInventory);
          DAT_1834b3102 = '\x01';
        }
        if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
          PlayerInventory__ChangeItemOrder(**(longlong **)(TI_PlayerInventory + 0xb8),uVar3,uVar2,0);
          return;
        }
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    case 2:
    case 4:
    case 6:
      break;
    case 3:
      if (plVar4 == (longlong *)0x0) goto code_r0x0001807925d7;
      if (*(byte *)(plVar4 + 0x16) < 2) {
        if (cRam00000001834b444e == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(TI_InventorySlot);
          FUN_180315380(LIT_"'Equip {0}.'");
          cRam00000001834b444e = '\x01';
        }
        plVar4 = *(longlong **)(param_1 + 0x88);
        if (plVar4 != (longlong *)0x0) {
          if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*plVar4 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8
               ) == TI_InventorySlot)) {
            auStackX_8[0] = (undefined4)plVar4[2];
            uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
            uVar7 = System_String__Format(LIT_"'Equip {0}.'",uVar7,0);
            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
              func_0x000180315660();
            }
            UnityEngine_Debug__Log(uVar7,0);
            (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
            return;
          }
          FUN_1803146d0(plVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_1803155d0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
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
      if (iVar1 == 0xd) {
        L2SlotManager__CrystallizeItem__1807902f0(param_1,0);
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
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
      return;
    }
  }
  L2SlotManager__DropItem__180790ec0(param_1,0);
  return;
}

