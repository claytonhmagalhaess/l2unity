// PlayerShortcuts__UpdatePageMapping__1804d35f0 @ 0x1804d35f0

void PlayerShortcuts__UpdatePageMapping__1804d35f0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)param_2 * 4) = param_3;
    return;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

