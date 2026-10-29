// SparkMapaWindow__TamanhoDaVista__180649960 @ 0x180649960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__TamanhoDaVista__180649960(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (cRam00000001834b3d3e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    cRam00000001834b3d3e = '\x01';
  }
  fVar6 = NAN;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    fVar5 = NAN;
  }
  else {
    lVar3 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0xb0),0);
    if (lVar3 == 0) goto code_r0x000180649a8a;
    fVar5 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar3);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0xb0),0);
    if (lVar3 == 0) {
code_r0x000180649a8a:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    fVar6 = (float)FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar3);
  }
  if ((0x7f800000 < (uint)ABS(fVar5)) || (fVar5 < 10.0)) {
    iVar2 = 0x14e;
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      iVar2 = 0x2ac;
    }
    fVar5 = (float)iVar2;
  }
  if ((0x7f800000 < (uint)ABS(fVar6)) || (fVar6 < 10.0)) {
    iVar2 = 0xf0;
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      iVar2 = 0x230;
    }
    fVar6 = (float)iVar2;
  }
  return CONCAT44(fVar6,fVar5);
}

