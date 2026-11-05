// InventoryWindow__OnMinimizeInventoryClick__180622d50 @ 0x180622d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventoryWindow__OnMinimizeInventoryClick__180622d50(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3cd8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3cd8 = '\x01';
  }
  if (param_1[0x15] != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x15],0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      if (param_1[0x16] != 0) {
        MouseOverDetectionManipulator__Enable__1807afe20(param_1[0x16],0);
                    /* WARNING: Could not recover jumptable at 0x000180622df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

