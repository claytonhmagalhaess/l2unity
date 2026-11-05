// DiagonalResizeManipulator__PointerMoveHandler__1807ad1b0 @ 0x1807ad1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DiagonalResizeManipulator__PointerMoveHandler__1807ad1b0(longlong param_1,longlong param_2)

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
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4525 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    cRam00000001834b4525 = '\x01';
  }
  uVar7 = func_0x0001814b50c0(param_1,0);
  if (param_2 == 0) goto code_r0x0001807ad52a;
  cVar6 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                    (uVar7,*(undefined4 *)(param_2 + 0x80),0);
  if (cVar6 == '\0') {
code_r0x0001807ad4df:
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
    return;
  }
  fVar13 = *(float *)(param_2 + 0xa0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar12 = *(float *)(param_1 + 0x40);
    fVar1 = *(float *)(param_2 + 0x9c);
    fVar2 = *(float *)(param_1 + 0x44);
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
    fVar11 = *(float *)(param_1 + 0x50);
    fVar12 = *(float *)(param_1 + 0x48) - (fVar12 - fVar1);
    if ((fVar12 < fVar11) || (fVar11 = *(float *)(param_1 + 0x54), fVar11 < fVar12)) {
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
                      (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xad)
                      * 0x10 + 0x138 + lVar4);
            goto code_r0x0001807ad307;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001807ad307:
      uStack_48 = uVar7;
      uStack_40 = uVar3;
      (*(code *)*puVar9)(plVar8,&uStack_48,puVar9[1]);
      fVar12 = *(float *)(param_1 + 0x58);
      fVar13 = *(float *)(param_1 + 0x4c) - (fVar13 - fVar2);
      if ((fVar13 < fVar12) || (fVar12 = *(float *)(param_1 + 0x5c), fVar12 < fVar13)) {
        fVar13 = fVar12;
      }
      if (*(char *)(param_1 + 0x68) == '\0') {
        if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ad52a;
        plVar8 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
        puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar13,0);
        if (plVar8 == (longlong *)0x0) goto code_r0x0001807ad52a;
        lVar4 = *plVar8;
        uVar14 = (undefined4)*puVar9;
        uVar15 = (undefined4)((ulonglong)*puVar9 >> 0x20);
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
              uStack_40 = uVar3;
              goto code_r0x0001807ad4ce;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
        uStack_40 = uVar3;
      }
      else {
        fVar12 = (float)FUN_1803a9a90(fVar13,*(undefined4 *)(param_1 + 0x60));
        if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ad52a;
        plVar8 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
        puVar9 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (&uStack_48,(fVar13 - fVar12) + *(float *)(param_1 + 100),0);
        if (plVar8 == (longlong *)0x0) goto code_r0x0001807ad52a;
        lVar4 = *plVar8;
        uVar14 = (undefined4)*puVar9;
        uVar15 = (undefined4)((ulonglong)*puVar9 >> 0x20);
        uVar3 = *(undefined4 *)(puVar9 + 1);
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x43
                        ) * 0x10 + 0x138 + lVar4);
              uStack_40 = uVar3;
              goto code_r0x0001807ad4ce;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
        uStack_40 = uVar3;
      }
code_r0x0001807ad4ce:
      uStack_48 = CONCAT44(uVar15,uVar14);
      (*(code *)*puVar9)(plVar8,&uStack_48,puVar9[1]);
      goto code_r0x0001807ad4df;
    }
  }
code_r0x0001807ad52a:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

