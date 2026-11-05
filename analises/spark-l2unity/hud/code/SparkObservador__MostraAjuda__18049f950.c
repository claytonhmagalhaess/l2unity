// SparkObservador__MostraAjuda__18049f950 @ 0x18049f950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkObservador__MostraAjuda__18049f950(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (cRam00000001834b3244 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'spark.obs.ajuda.fechada'");
    cRam00000001834b3244 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     ((iVar4 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.obs.ajuda.fechada'",0,0), iVar4 != 1 ||
      (param_2 != '\0')))) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
      uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
        if (*(longlong *)(param_1 + 0x28) != 0) {
          UnityEngine_UIElements_VisualElement__BringToFront(*(longlong *)(param_1 + 0x28),0);
          return;
        }
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

