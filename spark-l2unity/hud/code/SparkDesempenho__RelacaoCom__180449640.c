// SparkDesempenho__RelacaoCom__180449640 @ 0x180449640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDesempenho__RelacaoCom__180449640(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (cRam00000001834b2f72 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b2f72 = '\x01';
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = SparkDesempenho__RelacaoCom__180449730(param_1,0);
  if (uVar2 != 2) {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
    if (cVar1 == '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = UnityEngine_Object__op_Equality(param_2,param_1,0);
      if (cVar1 == '\0') {
        if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar3 = SparkDesempenho__RelacaoCom__180449730(param_2,0);
        if ((int)uVar2 < (int)uVar3) {
          return uVar3;
        }
      }
    }
  }
  return (ulonglong)uVar2;
}

