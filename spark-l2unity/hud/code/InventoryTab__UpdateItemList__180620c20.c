// InventoryTab__UpdateItemList__180620c20 @ 0x180620c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventoryTab__UpdateItemList__180620c20(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  ushort uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (cRam00000001834b3ccd == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.OrderBy<ItemInstance,int>);
    FUN_180315380(TI_System.Func<ItemInstance,int>);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<ItemInstance>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<ItemInstance>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(MR_System.Collections.Generic.List<ItemType1>.get_Count);
    FUN_180315380(MD_InventoryTab.__c._UpdateItemList_b__10_0);
    FUN_180315380(TI_InventoryTab.<>c);
    cRam00000001834b3ccd = '\x01';
  }
  cVar4 = *(char *)(param_1 + 0x58);
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  if (**(longlong **)(TI_PlayerInventory + 0xb8) != 0) {
    uVar1 = *(undefined4 *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x20);
    if (cRam00000001834b30fc == '\0') {
      FUN_180315380(TI_InventoryWindow);
      cRam00000001834b30fc = '\x01';
    }
    if (**(longlong **)(TI_InventoryWindow + 0xb8) != 0) {
      uVar10 = 0xc;
      if (*(char *)(**(longlong **)(TI_InventoryWindow + 0xb8) + 0xc0) == '\0') {
        uVar10 = 9;
      }
      if (lVar6 != 0) {
        L2SlotContainer__UpdateSlots__18078fbd0(lVar6,uVar1,uVar10,2 - (uint)(cVar4 != '\0'),0);
        if ((*(longlong *)(param_1 + 0x48) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0x48) + 0x18) != 0)) {
          if (*(int *)(TI_InventoryTab.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar6 = *(longlong *)(*(longlong *)(TI_InventoryTab.<>c + 0xb8) + 8);
          if (lVar6 == 0) {
            if (*(int *)(TI_InventoryTab.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar10 = **(undefined8 **)(TI_InventoryTab.<>c + 0xb8);
            lVar6 = func_0x000180315580(TI_System.Func<ItemInstance,int>);
            FUN_180cc70d0(lVar6,uVar10,MD_InventoryTab.__c._UpdateItemList_b__10_0,0);
            *(longlong *)(*(longlong *)(TI_InventoryTab.<>c + 0xb8) + 8) = lVar6;
            func_0x000180314690(*(longlong *)(TI_InventoryTab.<>c + 0xb8) + 8,lVar6);
          }
          param_2 = FUN_1809c09f0(param_2,lVar6,MR_System.Linq.Enumerable.OrderBy<ItemInstance,int>);
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (param_2 != 0) {
          plVar7 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<ItemInstance>,param_2);
code_r0x000180620e80:
          if (plVar7 != (longlong *)0x0) {
            cVar4 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
            if (cVar4 == '\0') {
              if (plVar7 != (longlong *)0x0) {
                FUN_180002390(0,TI_System.IDisposable,plVar7);
              }
              return;
            }
            if (plVar7 != (longlong *)0x0) {
              lVar6 = *plVar7;
              uVar5 = 0;
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
                      TI_System.Collections.Generic.IEnumerator<ItemInstance>) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              *(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x000180620f06;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_System.Collections.Generic.IEnumerator<ItemInstance>,0);
code_r0x000180620f06:
              lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if (lVar6 != 0) goto code_r0x000180620f1b;
              goto code_r0x000180621105;
            }
            goto code_r0x00018062110a;
          }
code_r0x00018062110f:
          FUN_1803155d0();
          FUN_180311490();
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
code_r0x000180620f1b:
  if (*(char *)(lVar6 + 0x20) != '\x02') goto code_r0x000180620e80;
  if ((*(longlong *)(param_1 + 0x48) == 0) || (*(int *)(*(longlong *)(param_1 + 0x48) + 0x18) == 0))
  {
    if ((*(char *)(lVar6 + 0x2d) == '\x03') || (*(int *)(lVar6 + 0x24) < 0))
    goto code_r0x000180620e80;
    if (*(longlong *)(param_1 + 0x50) == 0) goto code_r0x000180621100;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar6 + 0x24)) goto code_r0x0001806210e9;
      plVar9 = *(longlong **)(lVar11 + 0x20 + (ulonglong)*(uint *)(lVar6 + 0x24) * 8);
      if (plVar9 == (longlong *)0x0) goto code_r0x0001806210ee;
      lVar11 = *plVar9;
      if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(lVar11 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(lVar11 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8) ==
          TI_InventorySlot)) goto code_r0x000180621060;
      goto code_r0x0001806210f3;
    }
  }
  else {
    cVar4 = InventoryTab__Pertence(param_1,lVar6,0);
    if (cVar4 == '\0') goto code_r0x000180620e80;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38);
      uVar2 = *(uint *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = uVar2 + 1;
      if (lVar11 != 0) {
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          plVar9 = *(longlong **)(lVar11 + 0x20 + (longlong)(int)uVar2 * 8);
          if (plVar9 == (longlong *)0x0) goto code_r0x0001806210d2;
          lVar11 = *plVar9;
          if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(lVar11 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(lVar11 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
              == TI_InventorySlot)) {
code_r0x000180621060:
            (**(code **)(lVar11 + 0x208))(plVar9,lVar6,*(undefined8 *)(lVar11 + 0x210));
            goto code_r0x000180620e80;
          }
        }
        else {
          FUN_1803155c0();
code_r0x0001806210d2:
          FUN_1803155d0();
        }
        FUN_1803146d0();
      }
      FUN_1803155d0();
    }
    FUN_1803155d0();
code_r0x0001806210e9:
    FUN_1803155c0();
code_r0x0001806210ee:
    FUN_1803155d0();
code_r0x0001806210f3:
    FUN_1803146d0();
  }
  FUN_1803155d0();
code_r0x000180621100:
  FUN_1803155d0();
code_r0x000180621105:
  FUN_1803155d0();
code_r0x00018062110a:
  FUN_1803155d0();
  goto code_r0x00018062110f;
}

