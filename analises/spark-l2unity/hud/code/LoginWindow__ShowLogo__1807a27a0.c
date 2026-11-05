// LoginWindow__ShowLogo__1807a27a0 @ 0x1807a27a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__ShowLogo__1807a27a0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b44d8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b44d8 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x88),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) goto code_r0x0001807a28fd;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xb8),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) goto code_r0x0001807a28fd;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xc0),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) goto code_r0x0001807a28fd;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 200),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) {
code_r0x0001807a28fd:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
  }
  return;
}

