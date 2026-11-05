// SparkHtml_Bloco__Peca__180734aa0 @ 0x180734aa0

void SparkHtml_Bloco__Peca__180734aa0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  SparkHtml_Bloco__SoltaTexto__180734d30(param_1,0);
  lVar2 = SparkHtml_Bloco__Linha__180734840(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar2,param_2,0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

