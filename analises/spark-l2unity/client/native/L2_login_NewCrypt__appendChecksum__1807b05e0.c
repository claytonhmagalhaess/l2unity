// L2_login_NewCrypt__appendChecksum__1807b05e0 @ 0x1807b05e0

void L2_login_NewCrypt__appendChecksum__1807b05e0(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x18) + -4;
  uVar4 = 0;
  if (0 < iVar6) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    do {
      if ((((uVar1 <= uVar4) || (uVar1 <= uVar4 + 1)) || (uVar1 <= uVar4 + 2)) ||
         (uVar1 <= uVar4 + 3)) goto DAT_1807b06f1;
      lVar3 = (longlong)(int)uVar4;
      uVar4 = uVar4 + 4;
      uVar5 = uVar5 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x23 + param_1),
                                                 *(undefined1 *)(lVar3 + 0x22 + param_1)),
                                        *(undefined1 *)(lVar3 + 0x21 + param_1)),
                               *(undefined1 *)(lVar3 + 0x20 + param_1));
    } while ((int)uVar4 < iVar6);
  }
  if (((uVar4 < *(uint *)(param_1 + 0x18)) && (uVar4 + 1 < *(uint *)(param_1 + 0x18))) &&
     ((uVar4 + 2 < *(uint *)(param_1 + 0x18) && (uVar4 + 3 < *(uint *)(param_1 + 0x18))))) {
    *(char *)((longlong)(int)uVar4 + 0x20 + param_1) = (char)uVar5;
    if (uVar4 + 1 < *(uint *)(param_1 + 0x18)) {
      *(char *)((longlong)(int)uVar4 + 0x21 + param_1) = (char)(uVar5 >> 8);
      if (uVar4 + 2 < *(uint *)(param_1 + 0x18)) {
        *(char *)((longlong)(int)uVar4 + 0x22 + param_1) = (char)(uVar5 >> 0x10);
        if (uVar4 + 3 < *(uint *)(param_1 + 0x18)) {
          *(char *)((longlong)(int)uVar4 + 0x23 + param_1) = (char)(uVar5 >> 0x18);
          return;
        }
      }
    }
  }
DAT_1807b06f1:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

