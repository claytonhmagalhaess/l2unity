// SparkEstilo__Lista__1807211b0 @ 0x1807211b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Lista__1807211b0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b41f8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.ScrollView);
    cRam00000001834b41f8 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_UnityEngine.UIElements.ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(lVar2,0,0);
  if (lVar2 != 0) {
    UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(lVar2,2,0);
    SparkUI__Rolagem(lVar2,0);
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
    uVar4 = func_0x000182601c10(0x3f800000,0);
    if (lVar3 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
      return lVar2;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

