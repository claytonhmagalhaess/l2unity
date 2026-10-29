// DragManipulator__PointerDownHandler__1807ae1b0 @ 0x1807ae1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DragManipulator__PointerDownHandler__1807ae1b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b452a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_position);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b452a = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      *(undefined1 *)(param_1 + 0x5a) = 0;
      uVar2 = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001807ae2a8;
      puVar4 = (undefined4 *)
               UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_38,*(longlong *)(param_1 + 0x38),0);
      uVar2 = *puVar4;
      uVar1 = puVar4[1];
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      uVar5 = func_0x0001814b50c0(param_1,0);
      UnityEngine_UIElements_PointerCaptureHelper__CapturePointer
                (uVar5,*(undefined4 *)(param_2 + 0x80),0);
    }
    return;
  }
code_r0x0001807ae2a8:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

