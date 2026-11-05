// AutoPotionWindow__FechaLista__1805a7640 @ 0x1805a7640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__FechaLista__1805a7640(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3a49 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3a49 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xe0),0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      MouseOverDetectionManipulator__Disable__1807afdf0(*(longlong *)(param_1 + 0xe8),0);
    }
  }
  return;
}

