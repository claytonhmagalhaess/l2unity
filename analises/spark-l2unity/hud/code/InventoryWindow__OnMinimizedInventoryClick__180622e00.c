// InventoryWindow__OnMinimizedInventoryClick__180622e00 @ 0x180622e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventoryWindow__OnMinimizedInventoryClick__180622e00(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3cd9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b3cd9 = '\x01';
  }
  if (param_1[0x17] != 0) {
    if (*(char *)(param_1[0x17] + 0x5a) != '\0') {
      return;
    }
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      if (param_1[0x15] != 0) {
        lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x15],0);
        uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar2 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
          if (param_1[0x16] != 0) {
            MouseOverDetectionManipulator__Disable__1807afdf0(param_1[0x16],0);
            (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
            return;
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

