// MouseOverDetectionManipulator__PointerLeaveHandler__1807afe60 @ 0x1807afe60

void MouseOverDetectionManipulator__PointerLeaveHandler__1807afe60(longlong param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  return;
}

