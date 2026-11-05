// SparkCripto___cctor__180591360 @ 0x180591360

/* WARNING: Possible PIC construction at 0x000180591426: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180591461: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018059149d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001805914d1: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805914a2) */
/* WARNING: Removing unreachable block (ram,0x0001805914a8) */
/* WARNING: Removing unreachable block (ram,0x0001805914c2) */
/* WARNING: Removing unreachable block (ram,0x000180591466) */
/* WARNING: Removing unreachable block (ram,0x000180591470) */
/* WARNING: Removing unreachable block (ram,0x00018059148e) */
/* WARNING: Removing unreachable block (ram,0x00018059142b) */
/* WARNING: Removing unreachable block (ram,0x000180591448) */
/* WARNING: Removing unreachable block (ram,0x000180591511) */
/* WARNING: Removing unreachable block (ram,0x000180591452) */
/* WARNING: Removing unreachable block (ram,0x0001805914d6) */

ulonglong SparkCripto___cctor__180591360(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b39ee == '\0') {
    FUN_180315380(0x1832eb8c8);
    FUN_180315380(0x1832c4538);
    FUN_180315380(0x183328970);
    FUN_180315380(0x183308760);
    FUN_180315380(0x18330cb50);
    FUN_180315380(0x1833113e8);
    FUN_180315380(0x1832da008);
    FUN_180315380(0x1833280d0);
    cRam00000001834b39ee = '\x01';
  }
  plVar4 = (longlong *)FUN_18172d780(0);
  if (plVar4 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  uVar5 = (**(code **)(*plVar4 + 0x248))
                    (plVar4,uRam0000000183328970,*(undefined8 *)(*plVar4 + 0x250));
  **(ulonglong **)(lRam00000001832eb8c8 + 0xb8) = uVar5;
  if (iRam00000001834c7d58 != 0) {
    uVar6 = (uint)(*(ulonglong *)(lRam00000001832eb8c8 + 0xb8) >> 0xc);
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

