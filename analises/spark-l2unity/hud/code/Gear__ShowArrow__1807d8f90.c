// Gear__ShowArrow__1807d8f90 @ 0x1807d8f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gear__ShowArrow__1807d8f90(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b468d == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMultidao);
    cRam00000001834b468d = '\x01';
  }
  lVar3 = param_1[0xd];
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  }
  lVar3 = param_1[0xd];
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 == '\0') {
    return;
  }
  if (param_1[0xd] != 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_1[0xd],0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,1,0);
      lVar3 = param_1[4];
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        if (param_1[4] == 0) goto code_r0x0001807d90b3;
        uVar4 = *(undefined8 *)(param_1[4] + 0x20);
      }
      if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkMultidao__Anexou(uVar4,0);
      return;
    }
  }
code_r0x0001807d90b3:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

