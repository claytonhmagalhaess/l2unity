// SparkHtml___ctor__18051e380 @ 0x18051e380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkHtml___ctor__18051e380(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x10U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar3 = *puVar1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *puVar1 = uVar2 | 1L << (uVar4 & 0x3f);
        uVar3 = uVar2;
      }
      UNLOCK();
    } while (!bVar5);
  }
  return uVar3;
}

