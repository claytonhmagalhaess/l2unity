// L2Window__HideWindow__180799d10 @ 0x180799d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__HideWindow__180799d10(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (DAT_1834b4487 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    DAT_1834b4487 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x38) = 0;
        if (*(char *)(lVar2 + 0x39) != '\0') {
          *(undefined1 *)(lVar2 + 0x39) = 0;
          if (*(longlong *)(lVar2 + 0x40) == 0) {
            FUN_1803155d0(lVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(undefined1 *)(*(longlong *)(lVar2 + 0x40) + 0x38) = 0;
        }
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

