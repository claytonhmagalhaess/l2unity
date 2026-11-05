// SparkTextoDano__Espera__180747c40 @ 0x180747c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Espera__180747c40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b429a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429a = '\x01';
  }
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkTextoDano__get_Ligado(0);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_1804169f0(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_1,uVar2,0);
  if (cVar1 != '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = UnityEngine_Object__op_Inequality(param_2,uVar2,0);
    if (cVar1 != '\0') {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48) = param_2;
      func_0x000180314690(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48,param_2);
    }
  }
  cVar1 = Hit__isMiss(param_3,0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(param_3 + 0x14) < 1) {
    return;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_1,uVar2,0);
  if (cVar1 != '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = UnityEngine_Object__op_Inequality(param_2,uVar2,0);
    if (cVar1 != '\0') {
      uVar3 = *(undefined4 *)(param_3 + 0x14);
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = 0;
      uVar2 = 1;
      goto code_r0x000180747eb5;
    }
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_2,uVar2,0);
  if (cVar1 == '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkTextoDano__EhServo__180747b30(param_2,0);
    if (cVar1 == '\0') {
      return;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = 2;
    uVar2 = uVar4;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = 1;
    uVar2 = uVar4;
  }
code_r0x000180747eb5:
  SparkTextoDano__Guarda__18074aee0(uVar4,uVar3,uVar2,0);
  return;
}

