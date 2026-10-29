// LoginWindow__HideLogo__18079d520 @ 0x18079d520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__HideLogo__18079d520(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b44d9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b44d9 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x88),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x00018079d70b;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xb8),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x00018079d70b;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xc0),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x00018079d70b;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 200),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) {
code_r0x00018079d70b:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4370 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b4370 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar1 = (longlong *)**(longlong **)(TI_OptionsWindow + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x1d0));
  }
  return;
}

