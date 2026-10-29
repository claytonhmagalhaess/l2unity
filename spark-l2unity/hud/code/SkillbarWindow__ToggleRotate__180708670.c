// SkillbarWindow__ToggleRotate__180708670 @ 0x180708670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__ToggleRotate__180708670(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b4188 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4188 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x89);
  lVar3 = *(longlong *)(param_1 + 0xb0);
  *(bool *)(param_1 + 0x89) = cVar1 == '\0';
  if (lVar3 == 0) goto code_r0x0001807087c9;
  if (cVar1 == '\0') {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807087c9;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001807087c9;
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    uVar4 = 0;
  }
  else {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807087c9;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001807087c9;
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    uVar4 = 1;
  }
  uVar4 = FUN_180eb5810(uVar4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar3 != 0) {
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
    SkillbarWindow__AplicaEscala__1807062b0(param_1,0);
    lVar3 = *(longlong *)(param_1 + 0xf8);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    return;
  }
code_r0x0001807087c9:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

