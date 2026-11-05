// L2ToolTip__AddEffectTooltip__180795920 @ 0x180795920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ToolTip__AddEffectTooltip__180795920(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4472 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'EffectTooltipDurationContainer'");
    FUN_180315380(LIT_"'EffectTooltipLevelValue'");
    FUN_180315380(LIT_"'EffectTooltipName'");
    FUN_180315380(LIT_"'EffectTooltipDescription'");
    cRam00000001834b4472 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(undefined8 *)(param_1 + 0xb8),0);
  }
  plVar2 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'EffectTooltipName'",0);
  if ((param_2 != 0) && (plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0xe48))
              (plVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*plVar2 + 0xe50));
    plVar2 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'EffectTooltipLevelValue'",0);
    auStackX_8[0] = *(undefined4 *)(param_2 + 0x28);
    uVar3 = System_Int32__ToString(auStackX_8,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xe48))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0xe50));
      lVar4 = L2Window__GetElementById__180799820(param_1,LIT_"'EffectTooltipDurationContainer'",0);
      if (*(int *)(param_2 + 0x2c) < 0) {
        if (lVar4 == 0) goto code_r0x000180795b6b;
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar3 = 1;
      }
      else {
        if (cRam00000001834b446f == '\0') {
          FUN_180315380(TI_L2ToolTip.<UpdateTimerCoroutine>d__30);
          cRam00000001834b446f = '\x01';
        }
        lVar5 = func_0x000180315580(TI_L2ToolTip.<UpdateTimerCoroutine>d__30);
        Gear__UpdateWeaponType__1803dadf0(lVar5,0);
        *(undefined4 *)(lVar5 + 0x10) = 0;
        *(longlong *)(lVar5 + 0x20) = param_1;
        func_0x000180314690(lVar5 + 0x20,param_1);
        *(longlong *)(lVar5 + 0x28) = param_2;
        func_0x000180314690(lVar5 + 0x28,param_2);
        uVar3 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar5,0);
        *(undefined8 *)(param_1 + 0xb8) = uVar3;
        func_0x000180314690(param_1 + 0xb8,uVar3);
        if (lVar4 == 0) goto code_r0x000180795b6b;
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        uVar3 = 0;
      }
      uVar3 = FUN_180eb5810(uVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
        plVar2 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'EffectTooltipDescription'",0);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0xe48))
                    (plVar2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(*plVar2 + 0xe50));
          return;
        }
      }
    }
  }
code_r0x000180795b6b:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

