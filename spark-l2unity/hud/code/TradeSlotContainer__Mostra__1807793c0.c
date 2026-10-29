// TradeSlotContainer__Mostra__1807793c0 @ 0x1807793c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TradeSlotContainer__Mostra__1807793c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  if (cRam00000001834b4383 == '\0') {
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<ItemInstance>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Math);
    FUN_180315380(TI_TradeSlot);
    cRam00000001834b4383 = '\x01';
  }
  if (param_2 != (longlong *)0x0) {
    iVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>,param_2);
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0x78);
      uVar6 = FUN_1800020c0(0,TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>,param_2);
      if (*(int *)(TI_System.Math + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar12 = func_0x00018189eb20(uVar12,uVar6,0);
    }
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x78) = uVar12;
      L2SlotContainer__CreateSlots__18078f090(param_1,uVar12,0xb,0);
      uVar11 = 0;
      do {
        lVar8 = *param_2;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) * 0x10
                        + 0x138 + lVar8);
              goto code_r0x000180779516;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(param_2,TI_System.Collections.Generic.IReadOnlyCollection<ItemInstance>,0);
code_r0x000180779516:
        iVar5 = (*(code *)*puVar7)(param_2,puVar7[1]);
        if (iVar5 <= (int)uVar11) {
          return;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) break;
        if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) <= (int)uVar11) {
          return;
        }
        lVar8 = *param_2;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_System.Collections.Generic.IReadOnlyList<ItemInstance>) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) * 0x10
                        + 0x138 + lVar8);
              goto code_r0x000180779582;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(param_2,TI_System.Collections.Generic.IReadOnlyList<ItemInstance>,0);
code_r0x000180779582:
        lVar8 = (*(code *)*puVar7)(param_2,uVar11,puVar7[1]);
        if (lVar8 == 0) break;
        *(uint *)(lVar8 + 0x24) = uVar11;
        lVar8 = *(longlong *)(param_1 + 0x38);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar1 = *(longlong **)(lVar8 + 0x20 + (longlong)(int)uVar11 * 8);
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_TradeSlot + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar1 + 200) + -8 +
               (ulonglong)*(byte *)(TI_TradeSlot + 0x130) * 8) != TI_TradeSlot)) {
            FUN_1803146d0(plVar1);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = *param_2;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_System.Collections.Generic.IReadOnlyList<ItemInstance>) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) * 0x10
                        + 0x138 + lVar8);
              goto code_r0x000180779676;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(param_2,TI_System.Collections.Generic.IReadOnlyList<ItemInstance>,0);
code_r0x000180779676:
        uVar9 = (*(code *)*puVar7)(param_2,uVar11,puVar7[1]);
        if (plVar1 == (longlong *)0x0) break;
        (**(code **)(*plVar1 + 0x208))(plVar1,uVar9,*(undefined8 *)(*plVar1 + 0x210));
        if (plVar1[8] == 0) break;
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(plVar1[8],0);
        if (*(longlong *)(param_1 + 0x70) == 0) {
code_r0x00018077970b:
          uVar12 = 0x3f800000;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x70);
          uVar9 = FUN_1800022b0(0,TI_System.Collections.Generic.IReadOnlyList<ItemInstance>,param_2,uVar11);
          cVar4 = (**(code **)(lVar2 + 0x18))
                            (*(undefined8 *)(lVar2 + 0x40),uVar9,*(undefined8 *)(lVar2 + 0x28));
          if (cVar4 == '\0') goto code_r0x00018077970b;
          uVar12 = 0x3eb33333;
        }
        uVar9 = func_0x000182601c10(uVar12,0);
        if (lVar8 == 0) break;
        FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
        uVar11 = uVar11 + 1;
      } while( true );
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

