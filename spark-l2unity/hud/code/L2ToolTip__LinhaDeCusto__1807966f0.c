// L2ToolTip__LinhaDeCusto__1807966f0 @ 0x1807966f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong L2ToolTip__LinhaDeCusto__1807966f0
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b4471 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'tooltip-group-label'");
    FUN_180315380(LIT_"'SkillTooltipSecond'");
    FUN_180315380(LIT_"'skill-tooltip-group'");
    FUN_180315380(LIT_"'tooltip-group-value'");
    cRam00000001834b4471 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,LIT_"'skill-tooltip-group'",0);
    lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
    UnityEngine_UIElements_Label___ctor(lVar4,param_2,0);
    if (lVar4 != 0) {
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar4,param_3,0);
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar4,LIT_"'tooltip-group-label'",0);
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
      func_0x00018270a450(lVar5,0);
      if (lVar5 != 0) {
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar5,param_4,0);
        UnityEngine_UIElements_VisualElement__AddToClassList(lVar5,LIT_"'tooltip-group-value'",0);
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
        if (lVar6 != 0) {
          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          uVar7 = func_0x000182601c10(0x3f800000,0);
          if (lVar6 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
            UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
            UnityEngine_UIElements_VisualElement__Add(lVar3,lVar5,0);
            lVar4 = L2Window__GetElementById__180799820(param_1,LIT_"'SkillTooltipSecond'",0);
            if (lVar4 != 0) {
              iVar2 = UnityEngine_UIElements_VisualElement__get_childCount(lVar4,0);
              if (param_5 < iVar2) {
                iVar2 = param_5;
              }
              UnityEngine_UIElements_VisualElement__Insert(lVar4,iVar2,lVar3,0);
              return lVar5;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

