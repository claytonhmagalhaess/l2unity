// SparkResolucao__LigaNativa__1804c8b50 @ 0x1804c8b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkResolucao__LigaNativa__1804c8b50(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  if (cRam00000001834b32e1 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b32e1 = '\x01';
  }
  lVar3 = UnityEngine_Camera__get_main(0);
  *(longlong *)(param_1 + 0x60) = lVar3;
  func_0x000180314690(param_1 + 0x60,lVar3);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 != '\0') {
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar2 = UnityEngine_Camera__get_allowDynamicResolution(lVar3,0);
    if (cVar2 != param_2) {
      UnityEngine_Camera__set_allowDynamicResolution(lVar3,param_2,0);
    }
  }
  if ((param_2 == '\0') &&
     ((fVar4 = (float)FUN_1823e2460(0), fVar4 < 0.999 ||
      (fVar4 = (float)FUN_1823e2430(0), fVar4 < 0.999)))) {
    FUN_1823e23e0(0x3f800000,0x3f800000,0);
  }
  return;
}

