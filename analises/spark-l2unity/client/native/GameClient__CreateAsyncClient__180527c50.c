// GameClient__CreateAsyncClient__180527c50 @ 0x180527c50

/* WARNING: Possible PIC construction at 0x000180527cbe: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180527ced: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180527cc3) */
/* WARNING: Removing unreachable block (ram,0x000180527cf2) */

ulonglong GameClient__CreateAsyncClient__180527c50(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3786 == '\0') {
    FUN_180315380(0x1832d6110);
    FUN_180315380(0x183308598);
    FUN_180315380(0x1833089d0);
    cRam00000001834b3786 = '\x01';
  }
  uVar3 = func_0x000180315580(uRam0000000183308598);
  uVar4 = L2_login_NewCrypt___ctor__1803f01b0(uVar3,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  if (iRam00000001834c7d58 != 0) {
    uVar5 = (uint)(param_1 + 0xa8U >> 0xc);
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

