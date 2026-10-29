// L2_login_NewCrypt__verifyChecksum__1807b0d50 @ 0x1807b0d50

ulonglong L2_login_NewCrypt__verifyChecksum__1807b0d50(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (((uVar2 & 3) != 0) || ((int)uVar2 < 5)) {
    return (ulonglong)(uVar2 & 0xffffff00);
  }
  uVar8 = 0;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    if ((((uVar2 <= uVar6) || (uVar2 <= uVar6 + 1)) || (uVar2 <= uVar6 + 2)) || (uVar2 <= uVar6 + 3)
       ) goto DAT_1807b0e64;
    lVar5 = (longlong)(int)uVar6;
    uVar7 = uVar6 + 4;
    uVar8 = uVar8 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x23 + param_1),
                                               *(undefined1 *)(lVar5 + 0x22 + param_1)),
                                      *(undefined1 *)(lVar5 + 0x21 + param_1)),
                             *(undefined1 *)(lVar5 + 0x20 + param_1));
  } while ((int)uVar7 < (int)(uVar2 - 4));
  if (uVar7 < uVar2) {
    if (uVar6 + 5 < uVar2) {
      if ((uVar6 + 6 < uVar2) && (uVar6 + 7 < *(uint *)(param_1 + 0x18))) {
        bVar1 = *(byte *)((longlong)(int)uVar7 + 0x23 + param_1);
        return CONCAT71((int7)(((ulonglong)bVar1 << 0x18) >> 8),
                        CONCAT13(bVar1,CONCAT21(CONCAT11(*(undefined1 *)
                                                          ((longlong)(int)uVar7 + 0x22 + param_1),
                                                         *(undefined1 *)
                                                          ((longlong)(int)uVar7 + 0x21 + param_1)),
                                                *(undefined1 *)
                                                 ((longlong)(int)uVar7 + 0x20 + param_1))) == uVar8)
        ;
      }
    }
  }
DAT_1807b0e64:
  FUN_1803155c0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

