// SparkApiGrafica_Conferente__Update__180493ea0 @ 0x180493ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkApiGrafica_Conferente__Update__180493ea0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 uVar2;
  float fVar3;
  
  if (cRam00000001834b326a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkApiGrafica);
    cRam00000001834b326a = '\x01';
  }
  fVar3 = (float)FUN_182436510(0);
  if (6.0 <= fVar3) {
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkApiGrafica__Confere__180494210(0);
    lVar1 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834c12ff == '\0') {
      FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
      cRam00000001834c12ff = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834c12fe == '\0') {
      FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>);
      FUN_180315380(TI_UnityEngine.Object);
      cRam00000001834c12fe = '\x01';
    }
    if (*(longlong *)(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object> + 0x38) == 0) {
      FUN_180312fc0();
    }
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (pcRam00000001834c1338 == (code *)0x0) {
      pcRam00000001834c1338 = (code *)FUN_180315630(&UNK_1829428f0);
    }
                    /* WARNING: Could not recover jumptable at 0x00018242a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001834c1338)(uVar2,0);
    return;
  }
  return;
}

