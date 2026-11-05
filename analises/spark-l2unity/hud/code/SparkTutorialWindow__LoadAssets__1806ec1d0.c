// SparkTutorialWindow__LoadAssets__1806ec1d0 @ 0x1806ec1d0

/* WARNING: Possible PIC construction at 0x0001806ec230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806ec258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001806ec235) */
/* WARNING: Removing unreachable block (ram,0x0001806ec25d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTutorialWindow__LoadAssets__1806ec1d0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b4076 == '\0') {
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/NpcHtmlWindow'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Dropdown/L2Dropdown'");
    cRam00000001834b4076 = '\x01';
  }
  uVar3 = L2Window__LoadAsset__180799ec0(param_1,LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'",0);
  *(ulonglong *)(param_1 + 0x90) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x90U >> 0xc);
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

