// BuffSlot__AddTooltip__1805bf2a0 @ 0x1805bf2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__AddTooltip__1805bf2a0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 == 0) {
    return;
  }
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x68);
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(lVar4 + 0x18U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar3 = *puVar1;
      LOCK();
      uVar2 = *puVar1;
      if (uVar3 == uVar2) {
        *puVar1 = uVar3 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar2);
  }
  return;
}

