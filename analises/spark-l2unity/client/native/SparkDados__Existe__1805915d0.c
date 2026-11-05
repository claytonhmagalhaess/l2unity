// SparkDados__Existe__1805915d0 @ 0x1805915d0

byte SparkDados__Existe__1805915d0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b39ef == '\0') {
    puStack_30 = &UNK_1805915ee;
    FUN_180315380(0x183303ff8);
    cRam00000001834b39ef = '\x01';
  }
  puStack_30 = &UNK_180591607;
  uVar6 = FUN_1817037f0(param_1,uRam0000000183303ff8,0);
  puStack_30 = &UNK_180591611;
  cVar2 = FUN_18185a2e0(uVar6,0);
  if (cVar2 != '\0') {
    return 1;
  }
  if (cRam00000001834b93e9 == '\0') {
    FUN_180315380(0x1832c9f80);
    FUN_180315380(0x1832c9cc0);
    cRam00000001834b93e9 = '\x01';
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    if (*(int *)(lRam00000001832c9cc0 + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = FUN_181877210(param_1,0);
    if (lVar7 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    if (0 < *(int *)(lVar7 + 0x10)) {
      sVar4 = FUN_18170d430(lVar7,*(int *)(lVar7 + 0x10) + -1,0);
      if (*(int *)(lRam00000001832c9f80 + 0xe4) == 0) {
        func_0x000180315660();
      }
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        return 0;
      }
    }
    uStack_38 = 0;
    puStack_30 = (undefined *)0x0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    iVar5 = FUN_181859080(lVar7,&uStack_38,1,0);
    if ((iVar5 == 0) && ((uint)uStack_38 != 0xffffffff)) {
      return ~(byte)((uint)uStack_38 >> 4) & 1;
    }
  }
  return 0;
}

