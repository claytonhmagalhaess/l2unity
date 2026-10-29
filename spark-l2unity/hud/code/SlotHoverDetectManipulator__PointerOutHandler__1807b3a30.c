// SlotHoverDetectManipulator__PointerOutHandler__1807b3a30 @ 0x1807b3a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SlotHoverDetectManipulator__PointerOutHandler__1807b3a30(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (DAT_1834b3d0f == '\0') {
    FUN_180315380(TI_L2SlotManager);
    DAT_1834b3d0f = '\x01';
  }
  uVar5 = TI_L2SlotManager;
  lVar3 = **(longlong **)(TI_L2SlotManager + 0xb8);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  *(undefined8 *)(lVar3 + 0x90) = 0;
  if (_DAT_1834c7d58 != 0) {
    uVar6 = (uint)(lVar3 + 0x90U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar5 = *puVar1;
      bVar7 = uVar2 == uVar5;
      if (bVar7) {
        *puVar1 = uVar2 | 1L << (uVar6 & 0x3f);
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (!bVar7);
  }
  return uVar5;
}

