// NameplatesManagerLobby__SetActiveCamera__18067cca0 @ 0x18067cca0

/* WARNING: Possible PIC construction at 0x00018067cd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018067cd22: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00018067cd11) */
/* WARNING: Removing unreachable block (ram,0x00018067cd27) */
/* WARNING: Removing unreachable block (ram,0x00018067cd29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong NameplatesManagerLobby__SetActiveCamera__18067cca0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b3e3a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e3a = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((char)uVar4 == '\0') {
    if (param_2 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    uVar4 = UnityEngine_Component__get_transform(param_2,0);
    *(ulonglong *)(param_1 + 0x38) = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(param_1 + 0x38U >> 0xc);
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

