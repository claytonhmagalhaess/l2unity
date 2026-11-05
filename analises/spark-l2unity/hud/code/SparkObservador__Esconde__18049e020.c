// SparkObservador__Esconde__18049e020 @ 0x18049e020

void SparkObservador__Esconde__18049e020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  if (cRam00000001834b324a == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Renderer>.Add);
    cRam00000001834b324a = '\x01';
  }
  fVar6 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x70) <= fVar6) {
    fVar6 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x70) = fVar6 + 0.5;
    if ((param_2 == 0) || (lVar4 = FUN_1809972e0(param_2,1,MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer>), lVar4 == 0)) {
code_r0x00018049e11c:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    for (uVar5 = 0; (int)uVar5 < *(int *)(lVar4 + 0x18); uVar5 = uVar5 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar5 * 8);
      if (lVar1 == 0) goto code_r0x00018049e11c;
      cVar3 = UnityEngine_Renderer__get_enabled(lVar1,0);
      if (cVar3 != '\0') {
        UnityEngine_Renderer__set_enabled(lVar1,0,0);
        if (*(longlong *)(param_1 + 0x68) == 0) goto code_r0x00018049e11c;
        FUN_180002eb0();
      }
    }
  }
  return;
}

