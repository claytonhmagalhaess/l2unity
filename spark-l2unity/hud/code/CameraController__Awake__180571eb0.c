// CameraController__Awake__180571eb0 @ 0x180571eb0

/* WARNING: Possible PIC construction at 0x000180571f6b: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong CameraController__Awake__180571eb0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b38fa == '\0') {
    FUN_180315380(TI_CameraController);
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b38fa = '\x01';
  }
  uVar2 = **(undefined8 **)(TI_CameraController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  uVar4 = TI_CameraController;
  if (cVar3 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__Destroy(param_1,0);
    uVar4 = FUN_180997040(param_1,MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    uVar5 = param_1 + 0x98;
    *(ulonglong *)(param_1 + 0x98) = uVar4;
  }
  else {
    **(longlong **)(TI_CameraController + 0xb8) = param_1;
    uVar5 = *(ulonglong *)(TI_CameraController + 0xb8);
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

