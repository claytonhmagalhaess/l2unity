// SparkCifraStream___cctor__18058f9e0 @ 0x18058f9e0

/* WARNING: Possible PIC construction at 0x00018058fa7a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00018058fa7f) */

ulonglong SparkCifraStream___cctor__18058f9e0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b39e8 == '\0') {
    FUN_180315380(0x183331868);
    FUN_180315380(0x1832eb0e0);
    FUN_180315380(0x1832ffa38);
    FUN_180315380(0x183302300);
    FUN_180315380(0x1832c6378);
    cRam00000001834b39e8 = '\x01';
  }
  uVar3 = func_0x000180314710(uRam0000000183331868,4);
  uVar4 = FUN_1817c2f60(uVar3,uRam0000000183302300,0);
  **(undefined8 **)(lRam00000001832eb0e0 + 0xb8) = uVar3;
  if (iRam00000001834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(lRam00000001832eb0e0 + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar6 = uVar2 == uVar4;
      if (bVar6) {
        *puVar1 = uVar2 | 1L << (uVar5 & 0x3f);
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar4;
}

