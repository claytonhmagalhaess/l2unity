// Nameplate__Exibe__1806768f0 @ 0x1806768f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__Exibe__1806768f0(longlong param_1,byte param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (DAT_1834b3e01 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    DAT_1834b3e01 = '\x01';
  }
  if (param_2 != *(byte *)(param_1 + 0x90)) {
    *(byte *)(param_1 + 0x90) = param_2;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
      uVar3 = FUN_180eb5810(param_2 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
        if (param_2 != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x8c) = 0x7fc00000;
        *(undefined4 *)(param_1 + 0x88) = 0x7fc00000;
        *(undefined4 *)(param_1 + 0x84) = 0x7fc00000;
        *(undefined4 *)(param_1 + 0x80) = 0x7fc00000;
        return;
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

