// BuffSlot__UpdateRemainingDuration__1805bffd0 @ 0x1805bffd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__UpdateRemainingDuration__1805bffd0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 auStackX_8 [2];
  
  lVar6 = *(longlong *)(param_1 + 0x68);
  if (lVar6 == 0) goto code_r0x0001805c02df;
  if (-2 < *(int *)(lVar6 + 0x2c)) {
    iVar2 = *(int *)(lVar6 + 0x2c);
    fVar1 = *(float *)(lVar6 + 0x34);
    fVar9 = (float)FUN_1824366b0(0);
    fVar9 = ((float)iVar2 + fVar1) - fVar9;
    if (fVar9 < 60.0) {
      if (cRam00000001834b3a8f == '\0') {
        FUN_180315380(LIT_"'fade-high'");
        FUN_180315380(LIT_"'fade-low'");
        cRam00000001834b3a8f = '\x01';
      }
      if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001805c02df;
      cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains
                        (*(longlong *)(param_1 + 0x40),LIT_"'fade-low'",0);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (lVar6 == 0) goto code_r0x0001805c02df;
      if (cVar5 == '\0') {
        UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar6,LIT_"'fade-high'",0);
        lVar6 = *(longlong *)(param_1 + 0x40);
        uVar7 = LIT_"'fade-low'";
      }
      else {
        UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar6,LIT_"'fade-low'",0);
        lVar6 = *(longlong *)(param_1 + 0x40);
        uVar7 = LIT_"'fade-high'";
      }
      if (lVar6 == 0) goto code_r0x0001805c02df;
      UnityEngine_UIElements_VisualElement__AddToClassList(lVar6,uVar7,0);
      if (*(longlong *)(param_1 + 0x68) == 0) goto code_r0x0001805c02df;
      if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x2c) == -1) {
        return;
      }
      if (cRam00000001834b3a90 == '\0') {
        FUN_180315380(TI_System.Globalization.CultureInfo);
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
        cRam00000001834b3a90 = '\x01';
      }
      plVar3 = *(longlong **)(param_1 + 0x70);
      auStackX_8[0] = func_0x0001803aaa10(fVar9);
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar7 = System_Single__ToString(auStackX_8,uVar7,0);
      if (plVar3 == (longlong *)0x0) {
code_r0x0001805c02e5:
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0xe48))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0xe50));
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         (lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0),
         lVar6 == 0)) goto code_r0x0001805c02e5;
      uVar7 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar6);
      uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cVar5 = FUN_180eb5870(uVar7,uVar8,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
      if (cVar5 == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x0001805c02e5;
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0);
      uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar6 == 0) goto code_r0x0001805c02e5;
    }
    else {
      if (cRam00000001834b3a91 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
        cRam00000001834b3a91 = '\x01';
      }
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         (lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0),
         lVar6 == 0)) {
code_r0x0001805c02df:
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar6);
      uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cVar5 = FUN_180eb5870(uVar7,uVar8,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality);
      if (cVar5 == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x0001805c02df;
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x70),0);
      uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar6 == 0) goto code_r0x0001805c02df;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
  }
  return;
}

