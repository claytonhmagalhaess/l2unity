// ChatWindow_CantoDoChat__Move__1805c09a0 @ 0x1805c09a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow_CantoDoChat__Move__1805c09a0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b3afa == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    cRam00000001834b3afa = '\x01';
  }
  uVar7 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar6 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar7,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar6 == '\0') {
      return;
    }
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xb8), lVar4 != 0)) {
      fVar12 = *(float *)(param_2 + 0x9c);
      fVar11 = *(float *)(param_1 + 0x40);
      fVar1 = *(float *)(param_2 + 0xa0);
      fVar2 = *(float *)(param_1 + 0x44);
      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
      fVar12 = (fVar12 - fVar11) + *(float *)(param_1 + 0x48);
      fVar11 = 348.0;
      if ((fVar12 < 348.0) || (fVar11 = 648.0, 648.0 < fVar12)) {
        fVar12 = fVar11;
      }
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar12,0);
      if (plVar8 != (longlong *)0x0) {
        lVar4 = *plVar8;
        uVar7 = *puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 1);
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xad
                        ) * 0x10 + 0x138 + lVar4);
              goto code_r0x0001805c0af9;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c0af9:
        uStack_48 = uVar7;
        uStack_40 = uVar3;
        (*(code *)*puVar9)(plVar8,&uStack_48,puVar9[1]);
        if ((*(longlong *)(param_1 + 0x38) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xb8), lVar4 != 0)) {
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          fVar11 = 188.0;
          fVar12 = *(float *)(param_1 + 0x4c) - (fVar1 - fVar2);
          if ((fVar12 < 188.0) || (fVar11 = 488.0, 488.0 < fVar12)) {
            fVar12 = fVar11;
          }
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar12,0);
          if (plVar8 != (longlong *)0x0) {
            lVar4 = *plVar8;
            uVar7 = *puVar9;
            uVar3 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar4);
                  goto code_r0x0001805c0bd9;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805c0bd9:
            uStack_48 = uVar7;
            uStack_40 = uVar3;
            (*(code *)*puVar9)(plVar8,&uStack_48,puVar9[1]);
            func_0x00018274f9b0(param_2,0);
            return;
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

