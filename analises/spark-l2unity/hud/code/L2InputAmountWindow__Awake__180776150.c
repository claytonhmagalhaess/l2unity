// L2InputAmountWindow__Awake__180776150 @ 0x180776150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2InputAmountWindow__Awake__180776150(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b43f4 == '\0') {
    FUN_180315380(TI_L2InputAmountWindow);
    cRam00000001834b43f4 = '\x01';
  }
  uVar3 = TI_L2InputAmountWindow;
  **(undefined8 **)(TI_L2InputAmountWindow + 0xb8) = param_1;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(*(ulonglong *)(TI_L2InputAmountWindow + 0xb8) >> 0xc);
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

