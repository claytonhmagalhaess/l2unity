// SkillbarMain__UpdateVisuals__1807035e0 @ 0x1807035e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarMain__UpdateVisuals__1807035e0(longlong param_1)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (cRam00000001834b415f == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(MD_SkillbarMain._UpdateVisuals_b__6_2);
    FUN_180315380(MD_SkillbarMain._UpdateVisuals_b__6_3);
    FUN_180315380(MD_SkillbarMain._UpdateVisuals_b__6_4);
    FUN_180315380(MD_SkillbarMain.__c._UpdateVisuals_b__6_0);
    FUN_180315380(MD_SkillbarMain.__c._UpdateVisuals_b__6_1);
    FUN_180315380(TI_SkillbarMain.<>c);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ExpandBtn'");
    FUN_180315380(LIT_"'RotateBtn'");
    FUN_180315380(LIT_"'TooltipBtn'");
    FUN_180315380(LIT_"'MinimizeBtn'");
    FUN_180315380(LIT_"'LockBtn'");
    cRam00000001834b415f = '\x01';
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_180b0e310(uVar4,LIT_"'ExpandBtn'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  func_0x000180314690(param_1 + 0x48,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
  BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar4,0);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar5,0);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(TI_SkillbarMain.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = *(longlong *)(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(TI_SkillbarMain.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = **(undefined8 **)(TI_SkillbarMain.<>c + 0xb8);
    lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_18055b980(lVar6,uVar4,MD_SkillbarMain.__c._UpdateVisuals_b__6_0,0);
    *(longlong *)(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 8) = lVar6;
    func_0x000180314690(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 8,lVar6);
  }
  if (lVar7 != 0) {
    FUN_180990d50(lVar7,lVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = FUN_180b0e310(uVar4,LIT_"'MinimizeBtn'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    func_0x000180314690(param_1 + 0x50,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
    BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar4,0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar5,0);
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(int *)(TI_SkillbarMain.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 0x10);
    if (lVar6 == 0) {
      if (*(int *)(TI_SkillbarMain.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = **(undefined8 **)(TI_SkillbarMain.<>c + 0xb8);
      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
      FUN_18055b980(lVar6,uVar4,MD_SkillbarMain.__c._UpdateVisuals_b__6_1,0);
      *(longlong *)(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 0x10) = lVar6;
      func_0x000180314690(*(longlong *)(TI_SkillbarMain.<>c + 0xb8) + 0x10,lVar6);
    }
    if (lVar7 != 0) {
      FUN_180990d50(lVar7,lVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = FUN_180b0e310(uVar4,LIT_"'RotateBtn'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
      *(undefined8 *)(param_1 + 0x68) = uVar4;
      func_0x000180314690(param_1 + 0x68,uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar4,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar5,0);
      uVar4 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x10),LIT_"'LockBtn'",0,
                            MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
      *(undefined8 *)(param_1 + 0x60) = uVar4;
      func_0x000180314690(param_1 + 0x60,uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar4,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar5,0);
      uVar4 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x10),LIT_"'TooltipBtn'",0,
                            MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      func_0x000180314690(param_1 + 0x58,uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar4,0);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar5,0);
      lVar7 = *(longlong *)(param_1 + 0x68);
      uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
      FUN_18055b980(uVar4,param_1,MD_SkillbarMain._UpdateVisuals_b__6_2,0);
      if (lVar7 != 0) {
        FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
        lVar7 = *(longlong *)(param_1 + 0x60);
        uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
        FUN_18055b980(uVar4,param_1,MD_SkillbarMain._UpdateVisuals_b__6_3,0);
        if (lVar7 != 0) {
          FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
          lVar7 = *(longlong *)(param_1 + 0x58);
          uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
          FUN_18055b980(uVar4,param_1,MD_SkillbarMain._UpdateVisuals_b__6_4,0);
          if (lVar7 != 0) {
            FUN_180990d50(lVar7,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
            if (cRam00000001834b4160 == '\0') {
              FUN_180315380(TI_UnityEngine.UIElements.IStyle);
              FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              cRam00000001834b4160 = '\x01';
            }
            if (*(longlong *)(param_1 + 0x50) != 0) {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x50),0);
              uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar7 != 0) {
                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                if (*(longlong *)(param_1 + 0x48) != 0) {
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x48),0);
                  uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  if (plVar8 != (longlong *)0x0) {
                    uVar2 = 0;
                    lVar7 = *plVar8;
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar3 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                             (ulonglong)uVar2 * 0x10) + 0x33) * 0x10 + 0x138 + lVar7
                                   );
                          goto LAB_1800050ad;
                        }
                        uVar2 = uVar2 + 1;
                      } while (uVar2 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar3 = (undefined8 *)FUN_180312860(plVar8);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
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
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

