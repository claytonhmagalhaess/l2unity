// SparkSons__Toca__180586970 @ 0x180586970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__Toca__180586970
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b38d8 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    cRam00000001834b38d8 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar1 == '\0') {
    uStack_28 = *param_3;
    *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) =
         *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) + 1;
    uStack_20 = *(undefined4 *)(param_3 + 1);
    SparkSons__TocaAgora__180586020(param_1,param_2,&uStack_28,param_4,param_5,param_6,0,0);
  }
  return;
}

