// ChatWindow__Lista__1805c7760 @ 0x1805c7760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ChatWindow__Lista__1805c7760(void)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 auStackX_10 [3];
  
  if (cRam00000001834b3ae7 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.UIElements.ScrollView);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.UIElements.StyleSheet>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(LIT_"'l2-scroll-view'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2ScrollView/L2Scrollview'");
    cRam00000001834b3ae7 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.ScrollView);
  UnityEngine_UIElements_ScrollView___ctor(lVar3,0,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(lVar3,2,0);
      UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(lVar3,0,0);
      UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(lVar3,0x41900000,0);
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,0,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = FUN_180a90ae0(LIT_"'Data/UI/_Elements/Components/L2ScrollView/L2Scrollview'",MR_SparkArte.Load<UnityEngine.UIElements.StyleSheet>);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (cVar2 != '\0') {
        auStackX_10[0] = UnityEngine_UIElements_VisualElement__get_styleSheets(lVar3,0);
        UnityEngine_UIElements_VisualElementStyleSheetSet__Add(auStackX_10,uVar5,0);
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,LIT_"'l2-scroll-view'",0);
      }
      return lVar3;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

