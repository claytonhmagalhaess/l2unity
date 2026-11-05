// SparkTextoDano__Golpe__18074ac40 @ 0x18074ac40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Golpe__18074ac40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (cRam00000001834b429b == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429b = '\x01';
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
  cVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if (cVar1 != '\0') {
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
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = 0xb;
      uVar8 = 0xf;
      uVar3 = 0;
      uVar7 = 0x12;
      uVar6 = 0x11;
      uVar5 = 0xd;
      uVar2 = param_2;
      goto code_r0x00018074aeb7;
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
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = 0x1a;
    uVar8 = 0x1d;
    uVar3 = 2;
    uVar7 = 0x1f;
    uVar6 = 0xffffffff;
    uVar5 = 0x1c;
    uVar2 = param_2;
  }
  else {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = 4;
    uVar8 = 7;
    uVar3 = 1;
    uVar7 = 10;
    uVar6 = 9;
    uVar5 = 6;
  }
code_r0x00018074aeb7:
  SparkTextoDano__MostraGolpe__18074c640(uVar2,uVar3,param_3,uVar4,uVar5,uVar6,uVar7,uVar8,0);
  return;
}

