// ChatWindow___cctor__1805d15d0 @ 0x1805d15d0

/* WARNING: Possible PIC construction at 0x0001805d1678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805d167d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ChatWindow___cctor__1805d15d0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3aed == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    cRam00000001834b3aed = '\x01';
  }
  **(undefined4 **)(TI_ChatWindow + 0xb8) = 0x19;
  *(undefined4 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 4) = 100;
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  uVar4 = FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<string>..ctor);
  *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10U >> 0xc);
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

