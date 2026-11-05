// OptionsWindow__.cctor__1806a2200 @ 0x1806a2200

/* WARNING: Possible PIC construction at 0x0001806a232a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806a2366: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806a239a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001806a236b) */
/* WARNING: Removing unreachable block (ram,0x0001806a2371) */
/* WARNING: Removing unreachable block (ram,0x0001806a238b) */
/* WARNING: Removing unreachable block (ram,0x0001806a232f) */
/* WARNING: Removing unreachable block (ram,0x0001806a2339) */
/* WARNING: Removing unreachable block (ram,0x0001806a2357) */
/* WARNING: Removing unreachable block (ram,0x0001806a239f) */
/* WARNING: Removing unreachable block (ram,0x0001806a23a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong OptionsWindow___cctor__1806a2200(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b3ea4 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'System/Audio'");
    FUN_180315380(LIT_"'Shortcut'");
    FUN_180315380(LIT_"'Game Play'");
    FUN_180315380(LIT_"'Chat'");
    FUN_180315380(LIT_"'Video'");
    FUN_180315380(LIT_"'UI'");
    cRam00000001834b3ea4 = '\x01';
  }
  lVar3 = *(longlong *)(TI_OptionsWindow + 0xb8);
  *(undefined4 *)(lVar3 + 8) = 0x3f68e8e9;
  *(undefined4 *)(lVar3 + 0xc) = 0x3f64e4e5;
  *(undefined4 *)(lVar3 + 0x10) = 0x3f58d8d9;
  *(undefined4 *)(lVar3 + 0x14) = 0x3f800000;
  lVar3 = *(longlong *)(TI_OptionsWindow + 0xb8);
  *(undefined4 *)(lVar3 + 0x18) = 0x3f64e4e5;
  *(undefined4 *)(lVar3 + 0x1c) = 0x3f44c4c5;
  *(undefined4 *)(lVar3 + 0x20) = 0x3ef0f0f1;
  *(undefined4 *)(lVar3 + 0x24) = 0x3f800000;
  lVar3 = *(longlong *)(TI_OptionsWindow + 0xb8);
  *(undefined4 *)(lVar3 + 0x28) = 0x3f4ececf;
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f4acacb;
  *(undefined4 *)(lVar3 + 0x30) = 0x3f3ebebf;
  *(undefined4 *)(lVar3 + 0x34) = 0x3f800000;
  uVar5 = func_0x000180314710(TI_string__,6);
  if (uVar5 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  if (*(int *)(uVar5 + 0x18) == 0) {
    FUN_1803155c0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  *(undefined8 *)(uVar5 + 0x20) = LIT_"'Video'";
  if (_DAT_1834c7d58 != 0) {
    uVar6 = (uint)(uVar5 + 0x20 >> 0xc);
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

