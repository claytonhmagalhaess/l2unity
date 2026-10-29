// LoginCameraManager__DisableMainCamera__180574450 @ 0x180574450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginCameraManager__DisableMainCamera__180574450(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b390f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b390f = '\x01';
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    LoginCameraManager__Initialize(param_1,0);
  }
  uVar4 = UnityEngine_Camera__get_main(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar3 == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if (cVar3 != '\0') {
      if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180574524;
      UnityEngine_Behaviour__set_enabled(*(longlong *)(param_1 + 0x30),0,0);
    }
    return;
  }
  lVar5 = UnityEngine_Camera__get_main(0);
  if (lVar5 != 0) {
    if (DAT_1834c1083 == '\0') {
      FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Behaviour>,0,0);
      DAT_1834c1083 = '\x01';
    }
    if (lVar5 != 0) {
      lVar1 = *(longlong *)(lVar5 + 0x10);
      if (lVar1 == 0) {
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(lVar5,0);
      }
      if (_DAT_1834c1090 == (code *)0x0) {
        _DAT_1834c1090 = (code *)FUN_180315630(&UNK_1829411c0);
      }
                    /* WARNING: Could not recover jumptable at 0x00018242012e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_1834c1090)(lVar1,0);
      return;
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_r0x000180574524:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

