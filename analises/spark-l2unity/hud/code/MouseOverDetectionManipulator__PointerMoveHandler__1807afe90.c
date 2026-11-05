// MouseOverDetectionManipulator__PointerMoveHandler__1807afe90 @ 0x1807afe90

void MouseOverDetectionManipulator__PointerMoveHandler__1807afe90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(lVar1 + 0x38) == '\0') {
      *(undefined1 *)(lVar1 + 0x38) = 1;
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
  }
  return;
}

