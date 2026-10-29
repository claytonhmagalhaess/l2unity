// NpcHtmlWindow__LoadAssets__180680af0 @ 0x180680af0

/* WARNING: Possible PIC construction at 0x000180680b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680c0a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680c32: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680c5a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680c82: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180680caa: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180680c87) */
/* WARNING: Removing unreachable block (ram,0x000180680c5f) */
/* WARNING: Removing unreachable block (ram,0x000180680c37) */
/* WARNING: Removing unreachable block (ram,0x000180680c0f) */
/* WARNING: Removing unreachable block (ram,0x000180680bed) */
/* WARNING: Removing unreachable block (ram,0x000180680bc5) */
/* WARNING: Removing unreachable block (ram,0x000180680b9d) */
/* WARNING: Removing unreachable block (ram,0x000180680caf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NpcHtmlWindow__LoadAssets__180680af0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b3e3e == '\0') {
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/NpcHtmlWindow'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/HtmlRow'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Dropdown/L2Dropdown'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Input/L2Input'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/HtmlCell'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/HtmlTable'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/HtmlHyperlink'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/NpcHtmlWindow/HtmlWrapper'");
    cRam00000001834b3e3e = '\x01';
  }
  uVar3 = L2Window__LoadAsset__180799ec0(param_1,LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'",0);
  *(ulonglong *)(param_1 + 0x88) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x88U >> 0xc);
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

