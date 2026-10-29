// SparkDetalhePersonagem___c__.cctor__1804ae1b0 @ 0x1804ae1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem___c___cctor__1804ae1b0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3282 == '\0') {
    FUN_180315380(TI_SparkDetalhePersonagem.<>c);
    cRam00000001834b3282 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_SparkDetalhePersonagem.<>c);
  uVar4 = func_0x0001803dadf0(uVar3,0);
  **(undefined8 **)(TI_SparkDetalhePersonagem.<>c + 0xb8) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(TI_SparkDetalhePersonagem.<>c + 0xb8) >> 0xc);
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

