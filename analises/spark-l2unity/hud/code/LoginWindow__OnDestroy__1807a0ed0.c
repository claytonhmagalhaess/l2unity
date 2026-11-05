// LoginWindow__OnDestroy__1807a0ed0 @ 0x1807a0ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * LoginWindow__OnDestroy__1807a0ed0(void)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b44be == '\0') {
    FUN_180315380(TI_LoginWindow);
    cRam00000001834b44be = '\x01';
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660(TI_LoginWindow);
  }
  puVar3 = *(undefined8 **)(TI_LoginWindow + 0xb8);
  *puVar3 = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(*(ulonglong *)(TI_LoginWindow + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      puVar2 = (undefined8 *)*puVar1;
      LOCK();
      puVar3 = (undefined8 *)*puVar1;
      bVar5 = puVar2 == puVar3;
      if (bVar5) {
        *puVar1 = (ulonglong)puVar2 | 1L << (uVar4 & 0x3f);
        puVar3 = puVar2;
      }
      UNLOCK();
    } while (!bVar5);
  }
  return puVar3;
}

