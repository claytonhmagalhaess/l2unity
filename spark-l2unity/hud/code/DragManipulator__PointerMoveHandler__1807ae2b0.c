// DragManipulator__PointerMoveHandler__1807ae2b0 @ 0x1807ae2b0

void DragManipulator__PointerMoveHandler__1807ae2b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (cRam00000001834b452b == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_pointerId);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_position);
    cRam00000001834b452b = '\x01';
  }
  uVar2 = func_0x0001814b50c0(param_1,0);
  if (param_2 != 0) {
    cVar3 = UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture
                      (uVar2,*(undefined4 *)(param_2 + 0x80),0);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x5a) = 1;
      DragManipulator__DragWindow__1807adaa0
                (param_1,CONCAT44(*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0xa0),
                                  *(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x9c)),0);
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

