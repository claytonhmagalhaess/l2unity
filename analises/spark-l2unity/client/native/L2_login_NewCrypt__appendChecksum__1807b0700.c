// L2_login_NewCrypt__appendChecksum__1807b0700 @ 0x1807b0700

void L2_login_NewCrypt__appendChecksum__1807b0700(longlong param_1,uint param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((int)param_2 < param_3 + -4) {
    if (param_1 == 0) {
code_r0x0001807b0804:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0;
    do {
      if ((((*(uint *)(param_1 + 0x18) <= param_2) || (*(uint *)(param_1 + 0x18) <= param_2 + 1)) ||
          (*(uint *)(param_1 + 0x18) <= param_2 + 2)) || (*(uint *)(param_1 + 0x18) <= param_2 + 3))
      goto code_r0x0001807b080a;
      lVar2 = (longlong)(int)param_2;
      param_2 = param_2 + 4;
      uVar3 = uVar3 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x23 + param_1),
                                                 *(undefined1 *)(lVar2 + 0x22 + param_1)),
                                        *(undefined1 *)(lVar2 + 0x21 + param_1)),
                               *(undefined1 *)(lVar2 + 0x20 + param_1));
    } while ((int)param_2 < param_3 + -4);
  }
  else {
    if (param_1 == 0) goto code_r0x0001807b0804;
    uVar3 = 0;
  }
  if (((param_2 < *(uint *)(param_1 + 0x18)) && (param_2 + 1 < *(uint *)(param_1 + 0x18))) &&
     ((param_2 + 2 < *(uint *)(param_1 + 0x18) && (param_2 + 3 < *(uint *)(param_1 + 0x18))))) {
    *(char *)((longlong)(int)param_2 + 0x20 + param_1) = (char)uVar3;
    if (param_2 + 1 < *(uint *)(param_1 + 0x18)) {
      *(char *)((longlong)(int)param_2 + 0x21 + param_1) = (char)(uVar3 >> 8);
      if (param_2 + 2 < *(uint *)(param_1 + 0x18)) {
        *(char *)((longlong)(int)param_2 + 0x22 + param_1) = (char)(uVar3 >> 0x10);
        if (param_2 + 3 < *(uint *)(param_1 + 0x18)) {
          *(char *)((longlong)(int)param_2 + 0x23 + param_1) = (char)(uVar3 >> 0x18);
          return;
        }
      }
    }
  }
code_r0x0001807b080a:
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

