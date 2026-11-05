// BuffSlot__HideRemainingDuration__1805bfcc0 @ 0x1805bfcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__HideRemainingDuration__1805bfcc0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (cRam00000001834b3a91 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
    cRam00000001834b3a91 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0),
     lVar5 != 0)) {
    uVar2 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar5);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cVar4 = FUN_180eb5870(uVar2,uVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
    if (cVar4 == '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0);
      uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar2);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

