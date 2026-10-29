// SparkResolucao__.cctor__1804c9da0 @ 0x1804c9da0

/* WARNING: Possible PIC construction at 0x0001804c9e2e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001804c9e33) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkResolucao___cctor__1804c9da0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b32e7 == '\0') {
    FUN_180315380(TI_float__);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(FI_40);
    FUN_180315380(LIT_"'off'");
    cRam00000001834b32e7 = '\x01';
  }
  uVar3 = func_0x000180314710(TI_float__,10);
  uVar4 = System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    (uVar3,FI_40,0);
  **(undefined8 **)(TI_SparkResolucao + 0xb8) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(TI_SparkResolucao + 0xb8) >> 0xc);
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

