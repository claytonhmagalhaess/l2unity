// HorizontalResizeManipulator__PointerMoveHandler__1807af7e0 @ 0x1807af7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HorizontalResizeManipulator__PointerMoveHandler__1807af7e0(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b4533 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    cRam00000001834b4533 = '\x01';
  }
  uVar6 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar5 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar6,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar5 == '\0') {
code_r0x0001807af91d:
      *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
      return;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      fVar11 = *(float *)(param_1 + 0x40);
      fVar1 = *(float *)(param_2 + 0x9c);
      plVar7 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
      fVar10 = *(float *)(param_1 + 0x4c);
      fVar11 = *(float *)(param_1 + 0x48) - (fVar11 - fVar1);
      if ((fVar11 < fVar10) || (fVar10 = *(float *)(param_1 + 0x50), fVar10 < fVar11)) {
        fVar11 = fVar10;
      }
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,fVar11,0);
      if (plVar7 != (longlong *)0x0) {
        lVar3 = *plVar7;
        uVar6 = *puVar8;
        uVar2 = *(undefined4 *)(puVar8 + 1);
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0xad)
                        * 0x10 + 0x138 + lVar3);
              goto code_r0x0001807af905;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001807af905:
        uStack_28 = uVar6;
        uStack_20 = uVar2;
        (*(code *)*puVar8)(plVar7,&uStack_28,puVar8[1]);
        goto code_r0x0001807af91d;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

