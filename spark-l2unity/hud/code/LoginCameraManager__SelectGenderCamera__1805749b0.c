// LoginCameraManager__SelectGenderCamera__1805749b0 @ 0x1805749b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
LoginCameraManager__SelectGenderCamera__1805749b0
          (longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong alStackX_8 [4];
  
  if (cRam00000001834b390b == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b390b = '\x01';
  }
  if (cRam00000001834b390a == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue);
    cRam00000001834b390a = '\x01';
  }
  alStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x000180574b32;
  cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x28),param_2,alStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue);
  if (cVar2 == '\0') {
    lVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      if (alStackX_8[0] == 0) goto code_r0x000180574b32;
      lVar3 = UnityEngine_Component__get_transform(alStackX_8[0],0);
      if (lVar3 == 0) goto code_r0x000180574b32;
      uVar5 = 0;
    }
    else {
      if (alStackX_8[0] == 0) goto code_r0x000180574b32;
      lVar3 = UnityEngine_Component__get_transform(alStackX_8[0],0);
      if (lVar3 == 0) goto code_r0x000180574b32;
      uVar5 = 1;
    }
    lVar3 = UnityEngine_Transform__GetChild(lVar3,uVar5,0);
    if (lVar3 == 0) {
code_r0x000180574b32:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    lVar3 = FUN_180997040(lVar3,MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 == '\0') {
    return 0;
  }
  if (lVar3 != 0) {
    lVar3 = UnityEngine_Component__get_transform(lVar3,0);
    if (param_4 == 0) {
      if (lVar3 == 0) goto code_r0x000180574b38;
      uVar5 = 0;
    }
    else {
      if (lVar3 == 0) goto code_r0x000180574b38;
      uVar5 = 1;
    }
    lVar4 = UnityEngine_Transform__GetChild(lVar3,uVar5,0);
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
code_r0x000180574b38:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

