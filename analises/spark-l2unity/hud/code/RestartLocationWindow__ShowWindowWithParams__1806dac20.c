// RestartLocationWindow__ShowWindowWithParams__1806dac20 @ 0x1806dac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RestartLocationWindow__ShowWindowWithParams__1806dac20
               (longlong *param_1,byte param_2,byte param_3,byte param_4,byte param_5,byte param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b40bb == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b40bb = '\x01';
  }
  if (param_1[0x11] != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x11],0);
    uVar3 = FUN_180eb5810(param_2 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      if (param_1[0x12] != 0) {
        lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x12],0);
        uVar3 = FUN_180eb5810(param_3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar2 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
          if (param_1[0x13] != 0) {
            lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x13],0);
            uVar3 = FUN_180eb5810(param_4 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar2 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
              if (param_1[0x14] != 0) {
                lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
                uVar3 = FUN_180eb5810(param_5 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar2 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
                  if (param_1[0x15] != 0) {
                    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x15],0);
                    uVar3 = FUN_180eb5810(param_6 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    if (lVar2 != 0) {
                      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001806dadf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

