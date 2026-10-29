// DebuffWindow__LoadAssets__1805d1da0 @ 0x1805d1da0

/* WARNING: Possible PIC construction at 0x0001805d1dee: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805d1df3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong DebuffWindow__LoadAssets__1805d1da0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b3a9c == '\0') {
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/BuffWindow/DebuffWindow'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/BuffWindow/DebuffSlot'");
    cRam00000001834b3a9c = '\x01';
  }
  uVar3 = L2Window__LoadAsset__180799ec0(param_1,LIT_"'Data/UI/_Elements/Game/BuffWindow/DebuffWindow'",0);
  *(ulonglong *)(param_1 + 0x28) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x28U >> 0xc);
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

