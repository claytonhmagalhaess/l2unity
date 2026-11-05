// L2ToolTip__AddSkillTooltip__180795b80 @ 0x180795b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ToolTip__AddSkillTooltip__180795b80(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined4 auStackX_10 [2];
  undefined4 auStackX_20 [2];
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar12;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if (cRam00000001834b4470 == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'l2-color-4'");
    FUN_180315380(LIT_"'SkillTooltipMpCostValue'");
    FUN_180315380(LIT_"'SkillTooltipRangeValue'");
    FUN_180315380(LIT_"'SkillTooltipDescription'");
    FUN_180315380(LIT_"'l2-color-2'");
    FUN_180315380(LIT_"'Consumes :'");
    FUN_180315380(LIT_"'SkillTooltipReuseTimeValue'");
    FUN_180315380(LIT_"'SkillTooltipCastingTime'");
    FUN_180315380(LIT_"' <color=#FFD969>'");
    FUN_180315380(LIT_"'l2-color-5'");
    FUN_180315380(LIT_"'SkillTooltipName'");
    FUN_180315380(LIT_"'HP Cost :'");
    FUN_180315380(LIT_"'SkillTooltipLevelValue'");
    FUN_180315380(LIT_"'{0:n0} {1}'");
    FUN_180315380(LIT_"'SkillTooltipRange'");
    FUN_180315380(LIT_"'l2-color-3'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'SkillTooltipReuseTime'");
    FUN_180315380(LIT_"'SkillTooltipType'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'SkillTooltipMpCost'");
    FUN_180315380(LIT_"'SkillTooltipCastingTimeValue'");
    FUN_180315380(LIT_"'SkillTooltipIcon'");
    cRam00000001834b4470 = '\x01';
  }
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStackX_20[0] = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar6 = IconTable__get_Instance(0);
  if ((param_2 != 0) && (lVar6 != 0)) {
    uVar7 = IconTable__LoadTextureByName(lVar6,*(undefined8 *)(param_2 + 0x38),0);
    UnityEngine_UIElements_StyleBackground___ctor(&uStack_b0,uVar7,0);
    lVar6 = L2Window__GetElementById__180799820(param_1,LIT_"'SkillTooltipIcon'",0);
    if ((lVar6 != 0) &&
       (plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0),
       uVar4 = uStack_90, uVar3 = uStack_98, uVar2 = uStack_a0, uVar10 = uStack_a8,
       uVar7 = uStack_b0, plVar8 != (longlong *)0x0)) {
      lVar6 = *plVar8;
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180795df9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180795df9:
      uStack_88 = uVar7;
      uStack_80 = uVar10;
      uStack_78 = uVar2;
      uStack_70 = uVar3;
      uStack_68 = uVar4;
      (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
      plVar8 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'SkillTooltipName'",0);
      cVar5 = func_0x000181707e50(*(undefined8 *)(param_2 + 0x20),0);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      if (cVar5 == '\0') {
        uVar12 = 0;
        uVar7 = System_String__Concat
                          (uVar7,LIT_"' <color=#FFD969>'",*(undefined8 *)(param_2 + 0x20),LIT_"'</color>'"
                           ,0);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
        plVar8 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'SkillTooltipLevelValue'",0);
        auStackX_10[0] = func_0x0001804d58b0(param_2,0);
        uVar7 = System_Int32__ToString(auStackX_10,0);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
          plVar8 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'SkillTooltipType'",0);
          uVar7 = SkillWindowInfo__GetSkillType(param_2,0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
            plVar8 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'SkillTooltipDescription'",0);
            uVar7 = SkillWindowInfo__ComposeDescription(param_2,0);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7);
              if (*(int *)(param_2 + 0x48) < 1) {
                lVar6 = L2Window__GetElementById__180799820(param_1,LIT_"'SkillTooltipMpCost'");
                if (lVar6 == 0) goto code_r0x000180796533;
                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                uVar7 = 1;
              }
              else {
                plVar8 = (longlong *)L2Window__GetLabelById__1807998f0(param_1,LIT_"'SkillTooltipMpCostValue'")
                ;
                auStackX_10[0] = *(undefined4 *)(param_2 + 0x48);
                uVar7 = System_Int32__ToString(auStackX_10,0);
                if (plVar8 == (longlong *)0x0) goto code_r0x000180796533;
                (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                lVar6 = L2Window__GetElementById__180799820(param_1,LIT_"'SkillTooltipMpCost'",0);
                if (lVar6 == 0) goto code_r0x000180796533;
                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                uVar7 = 0;
              }
              uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar6 != 0) {
                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                if (*(longlong *)(param_1 + 0xc0) == 0) {
                  uVar10 = CONCAT44(uVar12,1);
                  uVar7 = L2ToolTip__LinhaDeCusto__1807966f0
                                    (param_1,LIT_"'HP Cost :'",LIT_"'l2-color-4'",
                                     LIT_"'l2-color-5'",uVar10,0);
                  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
                  *(undefined8 *)(param_1 + 0xc0) = uVar7;
                  func_0x000180314690(param_1 + 0xc0,uVar7);
                }
                auStackX_10[0] = *(undefined4 *)(param_2 + 0x4c);
                plVar8 = *(longlong **)(param_1 + 0xc0);
                uVar7 = System_Int32__ToString(auStackX_10,0);
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
                     (lVar6 = func_0x0001825d76d0(*(longlong *)(param_1 + 0xc0),0), lVar6 != 0)) {
                    lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                    uVar7 = FUN_180eb5810(*(int *)(param_2 + 0x4c) < 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    if (lVar6 != 0) {
                      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                      if (*(longlong *)(param_1 + 200) == 0) {
                        uVar7 = L2ToolTip__LinhaDeCusto__1807966f0
                                          (param_1,LIT_"'Consumes :'",LIT_"'l2-color-3'",
                                           LIT_"'l2-color-2'",CONCAT44(uVar12,2),0);
                        *(undefined8 *)(param_1 + 200) = uVar7;
                        func_0x000180314690(param_1 + 200,uVar7);
                      }
                      plVar8 = *(longlong **)(param_1 + 200);
                      uVar7 = LIT_"''";
                      if (0 < *(int *)(param_2 + 0x50)) {
                        auStack_b8[0] = *(undefined4 *)(param_2 + 0x54);
                        uVar7 = func_0x000180314670(_DAT_1834c6268,auStack_b8);
                        uVar10 = SparkUI__NomeDoItem(*(undefined4 *)(param_2 + 0x50),0);
                        uVar7 = System_String__Format(LIT_"'{0:n0} {1}'",uVar7,uVar10,0);
                      }
                      if (plVar8 != (longlong *)0x0) {
                        (**(code **)(*plVar8 + 0xe48))
                                  (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                        if ((*(longlong *)(param_1 + 200) != 0) &&
                           (lVar6 = func_0x0001825d76d0(*(longlong *)(param_1 + 200),0), lVar6 != 0)
                           ) {
                          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                          uVar7 = FUN_180eb5810(*(int *)(param_2 + 0x50) < 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                          if (lVar6 != 0) {
                            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                            if (*(int *)(param_2 + 0x5c) < 1) {
                              lVar6 = L2Window__GetElementById__180799820
                                                (param_1,LIT_"'SkillTooltipRange'");
                              if (lVar6 == 0) goto code_r0x000180796533;
                              lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                              uVar7 = 1;
                            }
                            else {
                              plVar8 = (longlong *)
                                       L2Window__GetLabelById__1807998f0
                                                 (param_1,LIT_"'SkillTooltipRangeValue'");
                              auStackX_10[0] = *(undefined4 *)(param_2 + 0x5c);
                              uVar7 = System_Int32__ToString(auStackX_10,0);
                              if (plVar8 == (longlong *)0x0) goto code_r0x000180796533;
                              (**(code **)(*plVar8 + 0xe48))
                                        (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                              lVar6 = L2Window__GetElementById__180799820
                                                (param_1,LIT_"'SkillTooltipRange'",0);
                              if (lVar6 == 0) goto code_r0x000180796533;
                              lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                              uVar7 = 0;
                            }
                            uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                            if (lVar6 != 0) {
                              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                              if (0.0 < *(float *)(param_2 + 0x68)) {
                                plVar8 = (longlong *)
                                         L2Window__GetLabelById__1807998f0
                                                   (param_1,LIT_"'SkillTooltipCastingTimeValue'",0);
                                auStackX_20[0] = *(undefined4 *)(param_2 + 0x68);
                                if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                                uVar7 = System_Single__ToString(auStackX_20,uVar7,0);
                                if (plVar8 == (longlong *)0x0) goto code_r0x000180796533;
                                (**(code **)(*plVar8 + 0xe48))
                                          (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                                lVar6 = L2Window__GetElementById__180799820
                                                  (param_1,LIT_"'SkillTooltipCastingTime'",0);
                                if (lVar6 == 0) goto code_r0x000180796533;
                                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                uVar7 = 0;
                              }
                              else {
                                lVar6 = L2Window__GetElementById__180799820
                                                  (param_1,LIT_"'SkillTooltipCastingTime'");
                                if (lVar6 == 0) goto code_r0x000180796533;
                                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                uVar7 = 1;
                              }
                              uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                              if (lVar6 != 0) {
                                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                cVar5 = func_0x0001804d5330(param_2,0);
                                if ((cVar5 == '\0') && (*(int *)(param_2 + 100) != 5)) {
                                  plVar8 = (longlong *)
                                           L2Window__GetLabelById__1807998f0
                                                     (param_1,LIT_"'SkillTooltipReuseTimeValue'",0);
                                  auStackX_20[0] = *(undefined4 *)(param_2 + 0x6c);
                                  if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                                  uVar7 = System_Single__ToString(auStackX_20,uVar7,0);
                                  if (plVar8 == (longlong *)0x0) goto code_r0x000180796533;
                                  (**(code **)(*plVar8 + 0xe48))
                                            (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0xe50));
                                  lVar6 = L2Window__GetElementById__180799820
                                                    (param_1,LIT_"'SkillTooltipReuseTime'",0);
                                  if (lVar6 == 0) goto code_r0x000180796533;
                                  lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                  uVar7 = 0;
                                }
                                else {
                                  lVar6 = L2Window__GetElementById__180799820
                                                    (param_1,LIT_"'SkillTooltipReuseTime'",0);
                                  if (lVar6 == 0) goto code_r0x000180796533;
                                  lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                  uVar7 = 1;
                                }
                                uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                if (lVar6 != 0) {
                                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000180796533:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

