// SparkSons__TocaInterfaceFonte__1805864b0 @ 0x1805864b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkSons__TocaInterfaceFonte__1805864b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if (cRam00000001834b38d9 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    FUN_180315380(LIT_"'ItemSound3.'");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b38d9 = '\x01';
  }
  cVar2 = func_0x000181707e50(param_2,0);
  if (cVar2 == '\0') {
    if (param_2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    cVar2 = System_String__Contains(param_2,LIT_"'.'",0);
    if (cVar2 == '\0') {
      param_2 = System_String__Concat(LIT_"'ItemSound3.'",param_2,0);
    }
    cVar2 = SparkSons__Tem__180585fa0(param_1,param_2,0);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = SparkSons__Clipe__180584eb0(param_1,param_2,0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if (cVar2 == '\0') {
      *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) =
           *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) + 1;
      if (cRam00000001834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        cRam00000001834b2e67 = '\x01';
      }
      uStack_18 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
      uStack_10 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
      uVar3 = SparkSons__TocaAgora__180586020(param_1,uVar3,&uStack_18,0,0,1,1,0);
      return uVar3;
    }
  }
  return 0;
}

