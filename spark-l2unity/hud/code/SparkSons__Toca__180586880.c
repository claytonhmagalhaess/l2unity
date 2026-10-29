// SparkSons__Toca__180586880 @ 0x180586880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__Toca__180586880
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b38de == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b38de = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(param_3,0,0);
  if (cVar2 != '\0') {
    if (param_3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar3 = (undefined8 *)UnityEngine_Transform__get_position(auStack_28,param_3,0);
    uStack_38 = *puVar3;
    uStack_30 = *(undefined4 *)(puVar3 + 1);
    SparkSons__Toca__180586a60(param_1,param_2,&uStack_38,param_4,param_5,param_6,0,0);
  }
  return;
}

