// L2_login_NewCrypt__encXORPass__1807b0ad0 @ 0x1807b0ad0

void L2_login_NewCrypt__encXORPass__1807b0ad0(longlong param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 4;
  iVar5 = *(int *)(param_1 + 0x18) + -8;
  if (4 < iVar5) {
    do {
      if ((((*(uint *)(param_1 + 0x18) <= uVar2) || (*(uint *)(param_1 + 0x18) <= uVar2 + 1)) ||
          (*(uint *)(param_1 + 0x18) <= uVar2 + 2)) || (*(uint *)(param_1 + 0x18) <= uVar2 + 3))
      goto code_r0x0001807b0c1c;
      lVar3 = (longlong)(int)uVar2;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x23 + param_1),
                                         *(undefined1 *)(lVar3 + 0x22 + param_1)),
                                *(undefined1 *)(lVar3 + 0x21 + param_1)),
                       *(undefined1 *)(lVar3 + 0x20 + param_1));
      param_2 = param_2 + uVar4;
      uVar4 = uVar4 ^ param_2;
      *(char *)(lVar3 + 0x20 + param_1) = (char)uVar4;
      if (*(uint *)(param_1 + 0x18) <= uVar2 + 1) goto code_r0x0001807b0c1c;
      *(char *)((longlong)(int)uVar2 + 0x21 + param_1) = (char)(uVar4 >> 8);
      if (*(uint *)(param_1 + 0x18) <= uVar2 + 2) goto code_r0x0001807b0c1c;
      *(char *)((longlong)(int)uVar2 + 0x22 + param_1) = (char)(uVar4 >> 0x10);
      if (*(uint *)(param_1 + 0x18) <= uVar2 + 3) goto code_r0x0001807b0c1c;
      lVar3 = (longlong)(int)uVar2;
      uVar2 = uVar2 + 4;
      *(char *)(lVar3 + 0x23 + param_1) = (char)(uVar4 >> 0x18);
    } while ((int)uVar2 < iVar5);
  }
  if (uVar2 < *(uint *)(param_1 + 0x18)) {
    *(char *)((longlong)(int)uVar2 + 0x20 + param_1) = (char)param_2;
    if (uVar2 + 1 < *(uint *)(param_1 + 0x18)) {
      uVar4 = uVar2 + 2;
      *(char *)((longlong)(int)uVar2 + 0x21 + param_1) = (char)(param_2 >> 8);
      if (uVar4 < *(uint *)(param_1 + 0x18)) {
        *(char *)((longlong)(int)uVar4 + 0x20 + param_1) = (char)(param_2 >> 0x10);
        if (uVar2 + 3 < *(uint *)(param_1 + 0x18)) {
          *(char *)((longlong)(int)uVar4 + 0x21 + param_1) = (char)(param_2 >> 0x18);
          return;
        }
      }
    }
  }
code_r0x0001807b0c1c:
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

