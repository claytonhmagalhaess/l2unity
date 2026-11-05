// MailWindow__Awake__18065c480 @ 0x18065c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong MailWindow__Awake__18065c480(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b3d84 == '\0') {
    FUN_180315380(TI_MailWindow);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3d84 = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_MailWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  uVar4 = TI_MailWindow;
  if (cVar3 != '\0') {
    **(longlong **)(TI_MailWindow + 0xb8) = param_1;
    if (_DAT_1834c7d58 != 0) {
      uVar6 = (uint)(*(ulonglong *)(TI_MailWindow + 0xb8) >> 0xc);
      puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
      do {
        uVar2 = *puVar1;
        LOCK();
        uVar4 = *puVar1;
        bVar7 = uVar2 == uVar4;
        if (bVar7) {
          *puVar1 = uVar2 | 1L << (uVar6 & 0x3f);
          uVar4 = uVar2;
        }
        UNLOCK();
      } while (!bVar7);
    }
    return uVar4;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c12ff == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0);
    DAT_1834c12ff = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c12fe == '\0') {
    FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>);
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834c12fe = '\x01';
  }
  if (*(longlong *)(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object> + 0x38) == 0) {
    FUN_180312fc0();
  }
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (_DAT_1834c1338 == (code *)0x0) {
    _DAT_1834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*_DAT_1834c1338)(uVar5,0);
  return uVar4;
}

