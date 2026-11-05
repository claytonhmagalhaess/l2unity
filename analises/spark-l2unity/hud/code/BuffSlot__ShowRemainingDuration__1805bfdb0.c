// BuffSlot__ShowRemainingDuration__1805bfdb0 @ 0x1805bfdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__ShowRemainingDuration__1805bfdb0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 auStackX_10 [6];
  
  if (cRam00000001834b3a90 == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
    cRam00000001834b3a90 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  auStackX_10[0] = func_0x0001803aaa10(param_2);
  if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar3 = System_Single__ToString(auStackX_10,uVar3,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
    if ((*(longlong *)(param_1 + 0x70) != 0) &&
       (lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0),
       lVar6 != 0)) {
      uVar3 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar6);
      uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cVar5 = FUN_180eb5870(uVar3,uVar4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
      if (cVar5 == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0);
        uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar6 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar3);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

