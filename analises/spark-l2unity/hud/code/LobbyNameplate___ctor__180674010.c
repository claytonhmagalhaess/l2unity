// LobbyNameplate___ctor__180674010 @ 0x180674010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong LobbyNameplate___ctor__180674010
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (cRam00000001834b3dfa == '\0') {
    FUN_180315380(TI_Nameplate);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'DeleteTimer'");
    cRam00000001834b3dfa = '\x01';
  }
  if (*(int *)(TI_Nameplate + 0xe4) == 0) {
    func_0x000180315660();
  }
  Nameplate___ctor__1806785e0(param_1,param_2,param_3,param_4,param_5,0);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180b0e310(param_2,LIT_"'DeleteTimer'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  *(ulonglong *)(param_1 + 0x138) = uVar3;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x138U >> 0xc);
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

