// SkillLearnWindow__ToggleShowSkillDetail__180700950 @ 0x180700950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillLearnWindow__ToggleShowSkillDetail__180700950(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b4134 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_L2ScrollableList<SkillWindowInfo>.ToggleShowHide);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b4134 = '\x01';
  }
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
    if (*(longlong *)(param_1 + 0x90) != 0) {
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style();
        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 == 0) goto code_r0x000180700ae9;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (*(longlong *)(param_1 + 0x88) == 0) goto code_r0x000180700ae9;
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x88),0);
        uVar4 = 1;
      }
      else {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style();
        uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 == 0) goto code_r0x000180700ae9;
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (*(longlong *)(param_1 + 0x88) == 0) goto code_r0x000180700ae9;
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x88),0);
        uVar4 = 0;
      }
      uVar4 = FUN_180eb5810(uVar4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        lVar3 = *(longlong *)(param_1 + 0x100);
        if (lVar3 != 0) {
          if (cRam00000001834b83dd == '\0') {
            FUN_180315380(TI_UnityEngine.UIElements.IStyle);
            FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value);
            FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            cRam00000001834b83dd = '\x01';
          }
          if (*(longlong *)(lVar3 + 0x20) != 0) {
            lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x20),0);
            if (*(longlong *)(lVar3 + 0x20) != 0) {
              lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x20),0)
              ;
              if (lVar3 != 0) {
                FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar3);
                iVar2 = func_0x000180eb5200(&stack0x00000008,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value);
                uVar4 = FUN_180eb5810(iVar2 != 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar5 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                  return;
                }
              }
            }
          }
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
code_r0x000180700ae9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

