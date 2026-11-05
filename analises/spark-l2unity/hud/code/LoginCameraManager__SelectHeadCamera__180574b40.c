// LoginCameraManager__SelectHeadCamera__180574b40 @ 0x180574b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
LoginCameraManager__SelectHeadCamera__180574b40
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b390c == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b390c = '\x01';
  }
  lVar3 = LoginCameraManager__SelectGenderCamera__1805749b0(param_1,param_2,param_3,param_4,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 == '\0') {
    return 0;
  }
  if (lVar3 != 0) {
    lVar3 = UnityEngine_Component__get_transform(lVar3,0);
    if (lVar3 != 0) {
      lVar4 = UnityEngine_Transform__GetChild(lVar3,0,0);
      lVar3 = MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>;
      if (lVar4 != 0) {
        if (*(longlong *)(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> + 0x38) == 0) {
          FUN_180312fc0(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
        }
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
        if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
        UnityEngine_Component__GetComponentFastPath(lVar4,uVar5,&stack0xfffffffffffffff0,0);
        return 0;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

