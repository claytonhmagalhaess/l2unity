// DiagonalResizeManipulator__PointerUpHandler__1807ad530 @ 0x1807ad530

void DiagonalResizeManipulator__PointerUpHandler__1807ad530(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (cRam00000001834b4526 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    cRam00000001834b4526 = '\x01';
  }
  uVar2 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar3 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar2,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar3 != '\0') {
      uVar2 = func_0x0001814b50c0(param_1,0);
      UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
                (uVar2,*(undefined4 *)(param_2 + 0x80),0);
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

