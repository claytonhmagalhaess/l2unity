// SparkSons__TocaInterface__180586640 @ 0x180586640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkSons__TocaInterface__180586640(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if (cRam00000001834b38da == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    FUN_180315380(LIT_"'voice.'");
    FUN_180315380(LIT_"'ItemSound3.'");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b38da = '\x01';
  }
  cVar3 = func_0x000181707e50(param_2,0);
  if (cVar3 != '\0') {
    return 0;
  }
  if (param_2 != 0) {
    cVar3 = System_String__Contains(param_2,LIT_"'.'",0);
    if (cVar3 == '\0') {
      param_2 = System_String__Concat(LIT_"'ItemSound3.'",param_2,0);
    }
    cVar3 = SparkSons__Tem__180585fa0(param_1,param_2,0);
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = SparkSons__Clipe__180584eb0(param_1,param_2,0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if (cVar3 != '\0') {
      return 0;
    }
    *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) =
         *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) + 1;
    lVar6 = SparkSons__Chave__180584d90(param_2,0);
    if (lVar6 != 0) {
      cVar3 = System_String__StartsWith(lVar6,LIT_"'voice.'",0);
      if (cVar3 != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
        if (cVar4 != '\0') {
          if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x000180586879;
          cVar4 = UnityEngine_AudioSource__get_isPlaying(*(longlong *)(param_1 + 0x58),0);
          if (cVar4 != '\0') {
            if (*(longlong *)(param_1 + 0x58) == 0) goto code_r0x000180586879;
            UnityEngine_AudioSource__Stop(*(longlong *)(param_1 + 0x58),0);
          }
        }
      }
      if (cRam00000001834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        cRam00000001834b2e67 = '\x01';
      }
      uStack_18 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
      uStack_10 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
      uVar5 = SparkSons__TocaAgora__180586020(param_1,uVar5,&uStack_18,0,0,1,1,0);
      if (cVar3 != '\0') {
        *(undefined8 *)(param_1 + 0x58) = uVar5;
        func_0x000180314690(param_1 + 0x58,uVar5);
      }
      return 1;
    }
  }
code_r0x000180586879:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

