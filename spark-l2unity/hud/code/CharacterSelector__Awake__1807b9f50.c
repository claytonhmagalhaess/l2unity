// CharacterSelector__Awake__1807b9f50 @ 0x1807b9f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterSelector__Awake__1807b9f50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b45f3 == '\0') {
    FUN_180315380(TI_CharacterSelector);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b45f3 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_CharacterSelector + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar2 == '\0') {
    lVar1 = **(longlong **)(TI_CharacterSelector + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(lVar1,param_1,0);
    if (cVar2 != '\0') {
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
      uVar3 = 0;
      if (param_1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (_DAT_1834c1338 == (code *)0x0) {
        _DAT_1834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
      }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_1834c1338)(uVar3,0);
      return;
    }
  }
  else {
    **(longlong **)(TI_CharacterSelector + 0xb8) = param_1;
    func_0x000180314690(*(undefined8 *)(TI_CharacterSelector + 0xb8),param_1);
  }
  return;
}

