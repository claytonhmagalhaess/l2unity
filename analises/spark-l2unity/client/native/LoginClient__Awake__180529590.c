// LoginClient__Awake__180529590 @ 0x180529590

void LoginClient__Awake__180529590(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b378e == '\0') {
    FUN_180315380(0x18332d970);
    FUN_180315380(0x1832c56a0);
    cRam00000001834b378e = '\x01';
  }
  if (*(int *)(lRam000000018332d970 + 0xe4) == 0) {
    func_0x000180315660(lRam000000018332d970);
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lRam000000018332d970 + 0xb8) + 8);
  if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = FUN_18242cba0(uVar2,0,0);
  if (cVar1 == '\0') {
    if (*(int *)(lRam000000018332d970 + 0xe4) == 0) {
      func_0x000180315660(lRam000000018332d970);
    }
    uVar2 = *(undefined8 *)(*(longlong *)(lRam000000018332d970 + 0xb8) + 8);
    if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = FUN_18242cd30(uVar2,param_1,0);
    if (cVar1 != '\0') {
      if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834c12ff == '\0') {
        FUN_180315380(0x1832c56a0,0);
        cRam00000001834c12ff = '\x01';
      }
      if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834c12fe == '\0') {
        FUN_180315380(0x183312880);
        FUN_180315380(0x1832c56a0);
        cRam00000001834c12fe = '\x01';
      }
      if (*(longlong *)(lRam0000000183312880 + 0x38) == 0) {
        FUN_180312fc0();
      }
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
      }
      if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (pcRam00000001834c1338 == (code *)0x0) {
        pcRam00000001834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
      }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001834c1338)(uVar2,0);
      return;
    }
  }
  else {
    if (*(int *)(lRam000000018332d970 + 0xe4) == 0) {
      func_0x000180315660(lRam000000018332d970);
    }
    *(longlong *)(*(longlong *)(lRam000000018332d970 + 0xb8) + 8) = param_1;
    func_0x000180314690(*(longlong *)(lRam000000018332d970 + 0xb8) + 8,param_1);
  }
  return;
}

