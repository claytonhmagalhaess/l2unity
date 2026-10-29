// SparkApiGrafica__.cctor__180495350 @ 0x180495350

/* WARNING: Possible PIC construction at 0x000180495424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180495460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001804954c2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001804954fe: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018049555d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180495591: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180495562) */
/* WARNING: Removing unreachable block (ram,0x000180495568) */
/* WARNING: Removing unreachable block (ram,0x000180495582) */
/* WARNING: Removing unreachable block (ram,0x000180495503) */
/* WARNING: Removing unreachable block (ram,0x000180495548) */
/* WARNING: Removing unreachable block (ram,0x00018049554e) */
/* WARNING: Removing unreachable block (ram,0x0001804954c7) */
/* WARNING: Removing unreachable block (ram,0x0001804954d1) */
/* WARNING: Removing unreachable block (ram,0x0001804954ef) */
/* WARNING: Removing unreachable block (ram,0x000180495465) */
/* WARNING: Removing unreachable block (ram,0x0001804954a9) */
/* WARNING: Removing unreachable block (ram,0x0001804954b3) */
/* WARNING: Removing unreachable block (ram,0x000180495429) */
/* WARNING: Removing unreachable block (ram,0x000180495433) */
/* WARNING: Removing unreachable block (ram,0x000180495451) */
/* WARNING: Removing unreachable block (ram,0x000180495596) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkApiGrafica___cctor__180495350(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3269 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'DirectX 11'");
    FUN_180315380(LIT_"'Vulkan'");
    FUN_180315380(LIT_"'DirectX 12'");
    FUN_180315380(LIT_"'vulkan'");
    FUN_180315380(LIT_"'-force-d3d11'");
    FUN_180315380(LIT_"'dx12'");
    FUN_180315380(LIT_"'dx11'");
    FUN_180315380(LIT_"'-force-vulkan'");
    FUN_180315380(LIT_"'-force-d3d12'");
    cRam00000001834b3269 = '\x01';
  }
  uVar4 = func_0x000180314710(TI_string__,3);
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
  *(undefined8 *)(uVar4 + 0x20) = LIT_"'DirectX 11'";
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

