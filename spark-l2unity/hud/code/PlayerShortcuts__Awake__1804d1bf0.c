// PlayerShortcuts__Awake__1804d1bf0 @ 0x1804d1bf0

/* WARNING: Possible PIC construction at 0x0001804d1d15: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001804d1d4b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001804d1ce7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001804d1d1a) */
/* WARNING: Removing unreachable block (ram,0x0001804d1d50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong PlayerShortcuts__Awake__1804d1bf0(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b3401 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    FUN_180315380(TI_int__);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerShortcuts);
    FUN_180315380(FI_119);
    cRam00000001834b3401 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_PlayerShortcuts + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  uVar4 = TI_PlayerShortcuts;
  if (cVar2 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__Destroy(param_1,0);
    uVar3 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    uVar4 = FUN_1811e4340(uVar3,MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    uVar5 = param_1 + 0x30;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
    **(longlong **)(TI_PlayerShortcuts + 0xb8) = param_1;
    uVar5 = *(ulonglong *)(TI_PlayerShortcuts + 0xb8);
  }
  if (_DAT_1834c7d58 != 0) {
    uVar6 = (uint)(uVar5 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar5 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar7 = uVar5 == uVar4;
      if (bVar7) {
        *puVar1 = uVar5 | 1L << (uVar6 & 0x3f);
        uVar4 = uVar5;
      }
      UNLOCK();
    } while (!bVar7);
  }
  return uVar4;
}

