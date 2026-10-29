// SkillWindow__LoadAssets__1807028a0 @ 0x1807028a0

/* WARNING: Possible PIC construction at 0x000180702912: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018070293a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180702962: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018070298a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180702967) */
/* WARNING: Removing unreachable block (ram,0x00018070293f) */
/* WARNING: Removing unreachable block (ram,0x000180702917) */
/* WARNING: Removing unreachable block (ram,0x00018070298f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SkillWindow__LoadAssets__1807028a0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b411e == '\0') {
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillTabHeader'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillWindow'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillTabSmall'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillTab'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillSection'");
    cRam00000001834b411e = '\x01';
  }
  uVar3 = L2Window__LoadAsset__180799ec0(param_1,LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillWindow'",0);
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

