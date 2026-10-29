// L2_login_NewCrypt__encXORPass__1807b0980 @ 0x1807b0980

void L2_login_NewCrypt__encXORPass__1807b0980(longlong param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = param_2 + 4;
  if ((int)uVar2 < param_3 + -8) {
    if (param_1 == 0) {
code_r0x0001807b0abd:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    do {
      if ((((*(uint *)(param_1 + 0x18) <= uVar2) || (*(uint *)(param_1 + 0x18) <= uVar2 + 1)) ||
          (*(uint *)(param_1 + 0x18) <= uVar2 + 2)) || (*(uint *)(param_1 + 0x18) <= uVar2 + 3))
      goto code_r0x0001807b0ac3;
      lVar3 = (longlong)(int)uVar2;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x23 + param_1),
                                         *(undefined1 *)(lVar3 + 0x22 + param_1)),
                                *(undefined1 *)(lVar3 + 0x21 + param_1)),
                       *(undefined1 *)(lVar3 + 0x20 + param_1));
      param_4 = param_4 + uVar4;
      uVar4 = uVar4 ^ param_4;
      *(char *)(lVar3 + 0x20 + param_1) = (char)uVar4;
      if (((*(uint *)(param_1 + 0x18) <= uVar2 + 1) ||
          (*(char *)((longlong)(int)uVar2 + 0x21 + param_1) = (char)(uVar4 >> 8),
          *(uint *)(param_1 + 0x18) <= uVar2 + 2)) ||
         (*(char *)((longlong)(int)uVar2 + 0x22 + param_1) = (char)(uVar4 >> 0x10),
         *(uint *)(param_1 + 0x18) <= uVar2 + 3)) goto code_r0x0001807b0ac3;
      lVar3 = (longlong)(int)uVar2;
      uVar2 = uVar2 + 4;
      *(char *)(lVar3 + 0x23 + param_1) = (char)(uVar4 >> 0x18);
    } while ((int)uVar2 < param_3 + -8);
  }
  else if (param_1 == 0) goto code_r0x0001807b0abd;
  if (uVar2 < *(uint *)(param_1 + 0x18)) {
    *(char *)((longlong)(int)uVar2 + 0x20 + param_1) = (char)param_4;
    if (uVar2 + 1 < *(uint *)(param_1 + 0x18)) {
      uVar4 = uVar2 + 2;
      *(char *)((longlong)(int)uVar2 + 0x21 + param_1) = (char)(param_4 >> 8);
      if (uVar4 < *(uint *)(param_1 + 0x18)) {
        *(char *)((longlong)(int)uVar4 + 0x20 + param_1) = (char)(param_4 >> 0x10);
        if (uVar2 + 3 < *(uint *)(param_1 + 0x18)) {
          *(char *)((longlong)(int)uVar4 + 0x21 + param_1) = (char)(param_4 >> 0x18);
          return;
        }
      }
    }
  }
code_r0x0001807b0ac3:
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

