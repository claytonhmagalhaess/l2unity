// DiagonalResizeManipulator__PointerDownHandler__1807ad020 @ 0x1807ad020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DiagonalResizeManipulator__PointerDownHandler__1807ad020(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (cRam00000001834b4524 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    cRam00000001834b4524 = '\x01';
  }
  if (param_2 == 0) goto code_r0x0001807ad19c;
  if (*(int *)(param_2 + 0x94) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar3 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                          (*(longlong *)(param_1 + 0x38),0), lVar3 == 0)) goto code_r0x0001807ad19c;
    fVar5 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar3);
    if (fVar5 != 0.0) {
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (lVar3 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                            (*(longlong *)(param_1 + 0x38),0), lVar3 == 0)) {
code_r0x0001807ad19c:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar6 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar3);
      fVar5 = *(float *)(param_1 + 0x50);
      if ((*(float *)(param_1 + 0x50) <= fVar6) &&
         (fVar5 = *(float *)(param_1 + 0x54), fVar6 <= *(float *)(param_1 + 0x54))) {
        fVar5 = fVar6;
      }
      *(float *)(param_1 + 0x48) = fVar5;
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (lVar3 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                            (*(longlong *)(param_1 + 0x38),0), lVar3 == 0))
      goto code_r0x0001807ad19c;
      fVar6 = (float)FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar3);
      fVar5 = *(float *)(param_1 + 0x58);
      if ((*(float *)(param_1 + 0x58) <= fVar6) &&
         (fVar5 = *(float *)(param_1 + 0x5c), fVar6 <= *(float *)(param_1 + 0x5c))) {
        fVar5 = fVar6;
      }
      *(float *)(param_1 + 0x4c) = fVar5;
    }
    uVar4 = func_0x0001814b50c0(param_1,0);
    UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
              (uVar4,*(undefined4 *)(param_2 + 0x80),0);
  }
  *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
  return;
}

