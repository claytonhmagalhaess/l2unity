// DefaultClient___cctor__180526a10 @ 0x180526a10

ulonglong DefaultClient___cctor__180526a10(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b377c == '\0') {
    FUN_180315380(0x1832f6930);
    FUN_180315380(0x1832d36f0);
    FUN_180315380(0x1832fc5e8);
    cRam00000001834b377c = '\x01';
  }
  uVar3 = func_0x000180315580(uRam00000001832fc5e8);
  uVar4 = FUN_180bba2e0(uVar3,uRam00000001832d36f0);
  *(undefined8 *)(*(longlong *)(lRam00000001832f6930 + 0xb8) + 8) = uVar3;
  if (iRam00000001834c7d58 != 0) {
    uVar5 = (uint)(*(longlong *)(lRam00000001832f6930 + 0xb8) + 8U >> 0xc);
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

