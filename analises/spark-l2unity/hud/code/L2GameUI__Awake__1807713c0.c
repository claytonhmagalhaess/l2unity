// L2GameUI__Awake__1807713c0 @ 0x1807713c0

/* WARNING: Possible PIC construction at 0x000180771487: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2GameUI__Awake__1807713c0(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b43e9 == '\0') {
    FUN_180315380(TI_L2GameUI);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<L2PopupWindow>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b43e9 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  uVar4 = TI_L2GameUI;
  if (cVar2 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__Destroy(param_1,0);
    uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<L2PopupWindow>);
    uVar4 = FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<L2PopupWindow>..ctor);
    uVar5 = param_1 + 0x80;
    *(undefined8 *)(param_1 + 0x80) = uVar3;
  }
  else {
    **(longlong **)(TI_L2GameUI + 0xb8) = param_1;
    uVar5 = *(ulonglong *)(TI_L2GameUI + 0xb8);
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

