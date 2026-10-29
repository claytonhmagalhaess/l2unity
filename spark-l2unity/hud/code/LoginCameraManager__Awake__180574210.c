// LoginCameraManager__Awake__180574210 @ 0x180574210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginCameraManager__Awake__180574210(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  if (cRam00000001834b3908 == '\0') {
    FUN_180315380(TI_LoginCameraManager);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3908 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_LoginCameraManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar3 == '\0') {
    lVar2 = **(longlong **)(TI_LoginCameraManager + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(lVar2,param_1,0);
    if (cVar3 != '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__Destroy(param_1,0);
    }
  }
  else {
    **(longlong **)(TI_LoginCameraManager + 0xb8) = param_1;
    func_0x000180314690(*(undefined8 *)(TI_LoginCameraManager + 0xb8),param_1);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    LoginCameraManager__Initialize(param_1,0);
  }
  return;
}

