// SparkLootingRights___c__.cctor__180752620 @ 0x180752620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkLootingRights___c___cctor__180752620(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b4282 == '\0') {
    FUN_180315380(TI_SparkLootingRights.<>c);
    cRam00000001834b4282 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_SparkLootingRights.<>c);
  uVar4 = func_0x0001803dadf0(uVar3,0);
  **(undefined8 **)(TI_SparkLootingRights.<>c + 0xb8) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(ulonglong *)(TI_SparkLootingRights.<>c + 0xb8) >> 0xc);
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

