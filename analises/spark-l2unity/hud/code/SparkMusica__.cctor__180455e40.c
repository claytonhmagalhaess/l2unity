// SparkMusica__.cctor__180455e40 @ 0x180455e40

/* WARNING: Possible PIC construction at 0x000180455ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180455f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180455f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180455f1d) */
/* WARNING: Removing unreachable block (ram,0x000180455f23) */
/* WARNING: Removing unreachable block (ram,0x000180455f3d) */
/* WARNING: Removing unreachable block (ram,0x000180455ee5) */
/* WARNING: Removing unreachable block (ram,0x000180455eef) */
/* WARNING: Removing unreachable block (ram,0x000180455f09) */
/* WARNING: Removing unreachable block (ram,0x000180455f51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkMusica___cctor__180455e40(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3009 == '\0') {
    FUN_180315380(TI_SparkMusica);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'ct_dwarf'");
    FUN_180315380(LIT_"'ct_human'");
    FUN_180315380(LIT_"'ct_elf'");
    FUN_180315380(LIT_"'ct_orc'");
    FUN_180315380(LIT_"'ct_darkelf'");
    cRam00000001834b3009 = '\x01';
  }
  uVar4 = func_0x000180314710(TI_string__,5);
  if (uVar4 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  if (*(int *)(uVar4 + 0x18) == 0) {
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  *(undefined8 *)(uVar4 + 0x20) = LIT_"'ct_human'";
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(uVar4 + 0x20 >> 0xc);
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

