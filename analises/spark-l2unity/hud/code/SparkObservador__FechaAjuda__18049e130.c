// SparkObservador__FechaAjuda__18049e130 @ 0x18049e130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkObservador__FechaAjuda__18049e130(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3245 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'spark.obs.ajuda.fechada'");
    cRam00000001834b3245 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x28),0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  UnityEngine_PlayerPrefs__SetInt(LIT_"'spark.obs.ajuda.fechada'",1,0);
  FUN_18242e9f0(0);
  return;
}

