// GameClient__Awake__180527b50 @ 0x180527b50

void GameClient__Awake__180527b50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3785 == '\0') {
    FUN_180315380(0x1833084e0);
    FUN_180315380(0x1832c56a0);
    cRam00000001834b3785 = '\x01';
  }
  uVar3 = **(undefined8 **)(lRam00000001833084e0 + 0xb8);
  if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = FUN_18242cba0(uVar3,0,0);
  if (cVar2 == '\0') {
    lVar1 = **(longlong **)(lRam00000001833084e0 + 0xb8);
    if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = FUN_18242cd30(lVar1,param_1,0);
    if (cVar2 != '\0') {
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
      uVar3 = 0;
      if (param_1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
      }
      if (*(int *)(lRam00000001832c56a0 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (pcRam00000001834c1338 == (code *)0x0) {
        pcRam00000001834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
      }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001834c1338)(uVar3,0);
      return;
    }
  }
  else {
    **(longlong **)(lRam00000001833084e0 + 0xb8) = param_1;
    func_0x000180314690(*(undefined8 *)(lRam00000001833084e0 + 0xb8),param_1);
  }
  return;
}

