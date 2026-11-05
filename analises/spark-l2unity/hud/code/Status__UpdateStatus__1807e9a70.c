// Status__UpdateStatus__1807e9a70 @ 0x1807e9a70

void Status__UpdateStatus__1807e9a70(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

