// L2_login_NewCrypt__decXORPass__1807b0810 @ 0x1807b0810

ulonglong L2_login_NewCrypt__decXORPass__1807b0810(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (iVar1 - 8U < *(uint *)(param_1 + 0x18)) {
    if (iVar1 - 7U < *(uint *)(param_1 + 0x18)) {
      if ((iVar1 - 6U < *(uint *)(param_1 + 0x18)) && (iVar1 - 5U < *(uint *)(param_1 + 0x18))) {
        uVar4 = (ulonglong)(iVar1 - 0xcU);
        if (2 < (int)(iVar1 - 0xcU)) {
          uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                              ((longlong)(int)(iVar1 - 5U) + 0x20 + param_1),
                                             *(undefined1 *)
                                              ((longlong)(int)(iVar1 - 6U) + 0x20 + param_1)),
                                    *(undefined1 *)((longlong)(int)(iVar1 - 7U) + 0x20 + param_1)),
                           *(undefined1 *)((longlong)iVar1 + 0x18 + param_1));
          do {
            uVar3 = (uint)uVar4;
            if ((((*(uint *)(param_1 + 0x18) <= uVar3) || (*(uint *)(param_1 + 0x18) <= uVar3 + 1))
                || (*(uint *)(param_1 + 0x18) <= uVar3 + 2)) ||
               (*(uint *)(param_1 + 0x18) <= uVar3 + 3)) goto DAT_1807b0974;
            uVar5 = ((uint)*(byte *)(uVar4 + 0x23 + param_1) << 0x18 |
                     (uint)CONCAT11(*(undefined1 *)(uVar4 + 0x22 + param_1),
                                    *(undefined1 *)(uVar4 + 0x21 + param_1)) << 8 |
                    (uint)*(byte *)(uVar4 + 0x20 + param_1)) ^ uVar6;
            *(char *)(uVar4 + 0x20 + param_1) = (char)uVar5;
            if (*(uint *)(param_1 + 0x18) <= uVar3 + 1) goto DAT_1807b0974;
            *(char *)(uVar4 + 0x21 + param_1) = (char)(uVar5 >> 8);
            if (*(uint *)(param_1 + 0x18) <= uVar3 + 2) goto DAT_1807b0974;
            *(char *)(uVar4 + 0x22 + param_1) = (char)(uVar5 >> 0x10);
            if (*(uint *)(param_1 + 0x18) <= uVar3 + 3) goto DAT_1807b0974;
            uVar6 = uVar6 - uVar5;
            *(char *)(uVar4 + 0x23 + param_1) = (char)(uVar5 >> 0x18);
            uVar4 = (ulonglong)(uVar3 - 4);
          } while (2 < (int)(uVar3 - 4));
        }
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
DAT_1807b0974:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

