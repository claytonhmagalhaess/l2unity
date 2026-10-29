// L2SlotManager__SetDraggedSlot__180794860 @ 0x180794860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__SetDraggedSlot__180794860(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4446 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4446 = '\x01';
  }
  *(longlong *)(param_1 + 0x88) = param_2;
  func_0x000180314690(param_1 + 0x88,param_2);
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x98), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    func_0x000180314690(lVar2 + 0x30);
    if (*(longlong *)(param_1 + 0x98) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x10) = *(undefined4 *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        plVar8 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0x48),0);
        if (plVar8 != (longlong *)0x0) {
          lVar2 = *plVar8;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 10
                          ) * 0x10 + 0x138 + lVar2);
                goto code_r0x000180794969;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,10);
code_r0x000180794969:
          puVar9 = (undefined8 *)(*(code *)*puVar9)(&uStack_68,plVar8,puVar9[1]);
          if ((*(longlong *)(param_1 + 0x98) != 0) &&
             (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x48), lVar2 != 0)) {
            uVar4 = *puVar9;
            uVar5 = puVar9[1];
            uVar6 = puVar9[2];
            uVar7 = puVar9[3];
            uVar1 = puVar9[4];
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
            if (plVar8 != (longlong *)0x0) {
              lVar2 = *plVar8;
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar10 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar9 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                              + 0xb) * 0x10 + 0x138 + lVar2);
                    goto code_r0x000180794a05;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180794a05:
              uStack_68 = uVar4;
              uStack_60 = uVar5;
              uStack_58 = uVar6;
              uStack_50 = uVar7;
              uStack_48 = uVar1;
              (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
              return;
            }
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

