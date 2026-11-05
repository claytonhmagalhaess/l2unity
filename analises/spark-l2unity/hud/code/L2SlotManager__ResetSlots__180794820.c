// L2SlotManager__ResetSlots__180794820 @ 0x180794820

/* WARNING: Possible PIC construction at 0x00018079483d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180794842) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotManager__ResetSlots__180794820(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x88U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar3 = *puVar1;
      LOCK();
      uVar2 = *puVar1;
      if (uVar3 == uVar2) {
        *puVar1 = uVar3 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar2);
  }
  return;
}

