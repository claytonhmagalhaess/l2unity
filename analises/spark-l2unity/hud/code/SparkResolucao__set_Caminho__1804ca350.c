// SparkResolucao__set_Caminho__1804ca350 @ 0x1804ca350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkResolucao__set_Caminho__1804ca350(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b32d2 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32d2 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x20) = param_1;
  uVar3 = TI_SparkResolucao;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x20U >> 0xc);
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

