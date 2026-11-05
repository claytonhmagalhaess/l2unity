// LoginClient__Awake__180529590 @ 0x180529590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginClient__Awake__180529590(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b378e == '\0') {
    FUN_180315380(TI_LoginClient);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b378e = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660(TI_LoginClient);
  }
  uVar2 = *(undefined8 *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if (cVar1 == '\0') {
    if (*(int *)(TI_LoginClient + 0xe4) == 0) {
      func_0x000180315660(TI_LoginClient);
    }
    uVar2 = *(undefined8 *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = UnityEngine_Object__op_Inequality(uVar2,param_1,0);
    if (cVar1 != '\0') {
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
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (_DAT_1834c1338 == (code *)0x0) {
        _DAT_1834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
      }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_1834c1338)(uVar2,0);
      return;
    }
  }
  else {
    if (*(int *)(TI_LoginClient + 0xe4) == 0) {
      func_0x000180315660(TI_LoginClient);
    }
    *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8) = param_1;
    func_0x000180314690(*(longlong *)(TI_LoginClient + 0xb8) + 8,param_1);
  }
  return;
}

