// L2_login_NewCrypt__verifyChecksum__1807b0c30 @ 0x1807b0c30

ulonglong L2_login_NewCrypt__verifyChecksum__1807b0c30(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((param_3 & 3) != 0) || ((int)param_3 < 5)) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((int)param_2 < (int)(param_3 - 4)) {
    if (param_1 == 0) {
code_r0x0001807b0d45:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    uVar5 = 0;
    do {
      if ((((*(uint *)(param_1 + 0x18) <= param_2) || (*(uint *)(param_1 + 0x18) <= param_2 + 1)) ||
          (*(uint *)(param_1 + 0x18) <= param_2 + 2)) || (*(uint *)(param_1 + 0x18) <= param_2 + 3))
      goto code_r0x0001807b0d3f;
      lVar4 = (longlong)(int)param_2;
      param_2 = param_2 + 4;
      uVar5 = uVar5 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x23 + param_1),
                                                 *(undefined1 *)(lVar4 + 0x22 + param_1)),
                                        *(undefined1 *)(lVar4 + 0x21 + param_1)),
                               *(undefined1 *)(lVar4 + 0x20 + param_1));
    } while ((int)param_2 < (int)(param_3 - 4));
  }
  else {
    if (param_1 == 0) goto code_r0x0001807b0d45;
    uVar5 = 0;
  }
  if (((param_2 < *(uint *)(param_1 + 0x18)) && (param_2 + 1 < *(uint *)(param_1 + 0x18))) &&
     ((param_2 + 2 < *(uint *)(param_1 + 0x18) && (param_2 + 3 < *(uint *)(param_1 + 0x18))))) {
    bVar1 = *(byte *)((longlong)(int)param_2 + 0x23 + param_1);
    return CONCAT71((int7)(((ulonglong)bVar1 << 0x18) >> 8),
                    CONCAT13(bVar1,CONCAT21(CONCAT11(*(undefined1 *)
                                                      ((longlong)(int)param_2 + 0x22 + param_1),
                                                     *(undefined1 *)
                                                      ((longlong)(int)param_2 + 0x21 + param_1)),
                                            *(undefined1 *)((longlong)(int)param_2 + 0x20 + param_1)
                                           )) == uVar5);
  }
code_r0x0001807b0d3f:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

