// SparkHtml_Bloco__Inteiro__180734740 @ 0x180734740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml_Bloco__Inteiro__180734740(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b426e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    cRam00000001834b426e = '\x01';
  }
  if (cRam00000001834b426f == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b426f = '\x01';
  }
  SparkHtml_Bloco__SoltaTexto__180734d30(param_1,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000180314690(param_1 + 0x20,0);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (param_2 == 0) goto code_r0x000180734839;
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_2,0);
    uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar2 == 0) goto code_r0x000180734839;
    FUN_180005060(5,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x10),param_2,0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
code_r0x000180734839:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

