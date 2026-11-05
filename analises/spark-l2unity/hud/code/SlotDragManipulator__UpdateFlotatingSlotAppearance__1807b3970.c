// SlotDragManipulator__UpdateFlotatingSlotAppearance__1807b3970 @ 0x1807b3970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotDragManipulator__UpdateFlotatingSlotAppearance__1807b3970(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_30;
  
  if (DAT_1834b3d0f == '\0') {
    puStack_30 = &UNK_1807b398e;
    FUN_180315380(TI_L2SlotManager);
    DAT_1834b3d0f = '\x01';
  }
  lVar3 = **(longlong **)(TI_L2SlotManager + 0xb8);
  if (lVar3 == 0) {
    puStack_30 = &UNK_1807b39c1;
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (cRam00000001834b4446 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,lVar4,0);
    cRam00000001834b4446 = '\x01';
  }
  *(longlong *)(lVar3 + 0x88) = lVar4;
  func_0x000180314690(lVar3 + 0x88,lVar4);
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x98), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    func_0x000180314690(lVar2 + 0x30);
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x98) + 0x10) = *(undefined4 *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        plVar10 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x48),0);
        if (plVar10 != (longlong *)0x0) {
          lVar4 = *plVar10;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                           10) * 0x10 + 0x138 + lVar4);
                goto code_r0x000180794969;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,10);
code_r0x000180794969:
          puVar11 = (undefined8 *)(*(code *)*puVar11)(&uStack_68,plVar10,puVar11[1]);
          if ((*(longlong *)(lVar3 + 0x98) != 0) &&
             (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x48), lVar3 != 0)) {
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[2];
            uVar9 = puVar11[3];
            uVar1 = puVar11[4];
            plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
            if (plVar10 != (longlong *)0x0) {
              lVar3 = *plVar10;
              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                uVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10)
                               + 0xb) * 0x10 + 0x138 + lVar3);
                    goto code_r0x000180794a05;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(lVar3 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180794a05:
              uStack_68 = uVar6;
              uStack_60 = uVar7;
              uStack_58 = uVar8;
              uStack_50 = uVar9;
              uStack_48 = uVar1;
              (*(code *)*puVar11)(plVar10,&uStack_68,puVar11[1]);
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

