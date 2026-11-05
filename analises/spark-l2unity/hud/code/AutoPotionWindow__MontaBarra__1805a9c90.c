// AutoPotionWindow__MontaBarra__1805a9c90 @ 0x1805a9c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__MontaBarra__1805a9c90(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ushort uVar13;
  uint uVar15;
  ulonglong uVar16;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStackX_20;
  undefined4 uVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_30;
  ulonglong uVar14;
  
  if (cRam00000001834b3a40 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_AutoPotionWindow.Prende);
    FUN_180315380(TI_AutoPotionWindow);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MD_AutoPotionWindow.__c._MontaBarra_b__36_0);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__1);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__2);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__3);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__4);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__5);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__6);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__7);
    FUN_180315380(TI_AutoPotionWindow.<>c__DisplayClass36_0);
    FUN_180315380(TI_AutoPotionWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'SkillBar/Buttons/spark_autopot_gear'");
    FUN_180315380(LIT_"'SkillBar/Buttons/spark_autopot_gear_down'");
    FUN_180315380(LIT_"'Auto potion'");
    FUN_180315380(LIT_"'SkillBar/Buttons/spark_autopot_gear_over'");
    FUN_180315380(LIT_"'spark.ap.x'");
    FUN_180315380(LIT_"'Auto potion settings'");
    FUN_180315380(LIT_"'spark.ap.y'");
    cRam00000001834b3a40 = '\x01';
  }
  uStack_30 = (undefined1 *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  lVar5 = func_0x000180315580(TI_AutoPotionWindow.<>c__DisplayClass36_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x30) = param_1;
    func_0x000180314690(lVar5 + 0x30,param_1);
    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    func_0x000180314690(param_1 + 0x98,uVar6);
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
      uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar7 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
        if (*(longlong *)(param_1 + 0x98) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
          uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
            if (*(longlong *)(param_1 + 0x98) != 0) {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x98),0);
              uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar7 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                if (*(longlong *)(param_1 + 0x98) != 0) {
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x98),0);
                  if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
                    func_0x000180315660(TI_AutoPotionWindow);
                  }
                  uStack_a8 = *(undefined8 *)(*(longlong *)(TI_AutoPotionWindow + 0xb8) + 8);
                  uStack_a0 = *(undefined8 *)(*(longlong *)(TI_AutoPotionWindow + 0xb8) + 0x10);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_88,&uStack_a8,0);
                  if (plVar8 != (longlong *)0x0) {
                    lVar7 = *plVar8;
                    uVar16 = 0;
                    uVar6 = *puVar9;
                    uVar10 = puVar9[1];
                    uVar17 = *(undefined4 *)(puVar9 + 2);
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar14 = uVar16;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar9 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar14 * 0x10) + 9)
                                    * 0x10 + 0x138 + lVar7);
                          goto code_r0x0001805aa0d9;
                        }
                        uVar13 = (short)uVar14 + 1;
                        uVar14 = (ulonglong)uVar13;
                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001805aa0d9:
                    uStack_a8 = uVar6;
                    uStack_a0 = uVar10;
                    uStack_98 = uVar17;
                    (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                    uVar6 = *(undefined8 *)(param_1 + 0x98);
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    uVar17 = 0;
                    uStack_a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
                    uStack_a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
                    SparkEstilo__Borda__18071da60(uVar6,&uStack_a8,0x3f800000,0,0);
                    SparkEstilo__Espaco__18071fb80
                              (*(undefined8 *)(param_1 + 0x98),0x3f800000,0x40000000,0x3f800000,
                               CONCAT44(uVar17,0x3f800000),0);
                    if (*(longlong *)(param_1 + 0x98) != 0) {
                      UnityEngine_UIElements_VisualElement__set_pickingMode
                                (*(longlong *)(param_1 + 0x98),0,0);
                      uVar6 = *(undefined8 *)(param_1 + 0x98);
                      uVar10 = func_0x000180315580(TI_MouseOverDetectionManipulator);
                      MouseOverDetectionManipulator___ctor__1807b03c0(uVar10,uVar6,0);
                      *(undefined8 *)(param_1 + 0xb8) = uVar10;
                      func_0x000180314690(param_1 + 0xb8,uVar10);
                      UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                (*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb8),0);
                      if (*(longlong *)(param_1 + 0x98) != 0) {
                        plVar8 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 0x98),0);
                        uStackX_20 = 0;
                        func_0x0001825fc4d0(&uStackX_20,0x42480000,1,0);
                        puVar9 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_a8,uStackX_20,0);
                        if (plVar8 != (longlong *)0x0) {
                          lVar7 = *plVar8;
                          uVar6 = *puVar9;
                          uVar17 = *(undefined4 *)(puVar9 + 1);
                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                            uVar14 = uVar16;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar14 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar9 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar14 * 0x10)
                                          + 0x47) * 0x10 + 0x138 + lVar7);
                                goto code_r0x0001805aa279;
                              }
                              uVar13 = (short)uVar14 + 1;
                              uVar14 = (ulonglong)uVar13;
                            } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                          }
                          puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805aa279:
                          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                          uStack_a8 = uVar6;
                          (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                          if (*(longlong *)(param_1 + 0x98) != 0) {
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0x98),0);
                            puVar9 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_a8,0x42f00000,0);
                            if (plVar8 != (longlong *)0x0) {
                              lVar7 = *plVar8;
                              uVar6 = *puVar9;
                              uVar17 = *(undefined4 *)(puVar9 + 1);
                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                uVar14 = uVar16;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar14 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar9 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                       uVar14 * 0x10) + 0x2d) * 0x10 + 0x138 + lVar7
                                             );
                                    goto code_r0x0001805aa319;
                                  }
                                  uVar13 = (short)uVar14 + 1;
                                  uVar14 = (ulonglong)uVar13;
                                } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                              }
                              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805aa319:
                              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                              uStack_a8 = uVar6;
                              (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                              UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark.ap.x'",0);
                              UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark.ap.y'",0);
                              lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                              UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                              *(longlong *)(param_1 + 0xa8) = lVar7;
                              func_0x000180314690(param_1 + 0xa8,lVar7);
                              if (lVar7 != 0) {
                                plVar8 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                puVar9 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit
                                                   (&uStack_a8,0x41200000,0);
                                if (plVar8 != (longlong *)0x0) {
                                  lVar11 = *plVar8;
                                  uVar6 = *puVar9;
                                  uVar17 = *(undefined4 *)(puVar9 + 1);
                                  if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                    uVar14 = uVar16;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10) ==
                                          TI_UnityEngine.UIElements.IStyle) {
                                        puVar9 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                                           uVar14 * 0x10) + 0xad) * 0x10 + 0x138 +
                                                 lVar11);
                                        goto code_r0x0001805aa409;
                                      }
                                      uVar13 = (short)uVar14 + 1;
                                      uVar14 = (ulonglong)uVar13;
                                    } while (uVar13 < *(ushort *)(lVar11 + 0x12e));
                                  }
                                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805aa409:
                                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                  uStack_a8 = uVar6;
                                  (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                  plVar8 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                  puVar9 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_a8,0x41c00000,0);
                                  if (plVar8 != (longlong *)0x0) {
                                    lVar11 = *plVar8;
                                    uVar6 = *puVar9;
                                    uVar17 = *(undefined4 *)(puVar9 + 1);
                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                      uVar14 = uVar16;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar9 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                                             uVar14 * 0x10) + 0x43) * 0x10 + 0x138 +
                                                   lVar11);
                                          goto code_r0x0001805aa4a9;
                                        }
                                        uVar13 = (short)uVar14 + 1;
                                        uVar14 = (ulonglong)uVar13;
                                      } while (uVar13 < *(ushort *)(lVar11 + 0x12e));
                                    }
                                    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43)
                                    ;
code_r0x0001805aa4a9:
                                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                    uStack_a8 = uVar6;
                                    (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                    lVar11 = UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar7,0);
                                    uVar6 = func_0x000182601c10(0,0);
                                    if (lVar11 != 0) {
                                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar6);
                                      lVar11 = UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar7,0);
                                      uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                      if (lVar11 != 0) {
                                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar11,uVar6);
                                        lVar11 = UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar7,0);
                                        uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                        if (lVar11 != 0) {
                                          FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar11,uVar6);
                                          plVar8 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar7,0);
                                          puVar9 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_a8,0x3f800000,0);
                                          if (plVar8 != (longlong *)0x0) {
                                            lVar11 = *plVar8;
                                            uVar6 = *puVar9;
                                            uVar17 = *(undefined4 *)(puVar9 + 1);
                                            if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                              uVar14 = uVar16;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar9 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar11 + 0xb0) +
                                                                      8 + uVar14 * 0x10) + 0x4f) *
                                                            0x10 + 0x138 + lVar11);
                                                  goto code_r0x0001805aa5e9;
                                                }
                                                uVar13 = (short)uVar14 + 1;
                                                uVar14 = (ulonglong)uVar13;
                                              } while (uVar13 < *(ushort *)(lVar11 + 0x12e));
                                            }
                                            puVar9 = (undefined8 *)
                                                     FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805aa5e9:
                                            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                            uStack_a8 = uVar6;
                                            (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                            uStack_a8 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x80);
                                            uStack_a0 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x88);
                                            uVar6 = SparkEstilo__Ponto__180721e60(&uStack_a8,6,0);
                                            *(undefined8 *)(param_1 + 0xa0) = uVar6;
                                            func_0x000180314690(param_1 + 0xa0,uVar6);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar7,*(undefined8 *)(param_1 + 0xa0),0);
                                            if (*(int *)(TI_AutoPotionWindow.<>c + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            lVar11 = *(longlong *)
                                                      (*(longlong *)(TI_AutoPotionWindow.<>c + 0xb8) +
                                                      8);
                                            if (lVar11 == 0) {
                                              if (*(int *)(TI_AutoPotionWindow.<>c + 0xe4) == 0) {
                                                func_0x000180315660();
                                              }
                                              uVar6 = **(undefined8 **)(TI_AutoPotionWindow.<>c + 0xb8)
                                              ;
                                              lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                                              FUN_18055b980(lVar11,uVar6,MD_AutoPotionWindow.__c._MontaBarra_b__36_0,0);
                                              *(longlong *)
                                               (*(longlong *)(TI_AutoPotionWindow.<>c + 0xb8) + 8) =
                                                   lVar11;
                                              func_0x000180314690(*(longlong *)
                                                                   (TI_AutoPotionWindow.<>c + 0xb8) + 8
                                                                  ,lVar11);
                                            }
                                            FUN_180990d50(lVar7,lVar11,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                                            uVar6 = func_0x000180315580(TI_TooltipManipulator);
                                            TooltipManipulator___ctor__1807b5900
                                                      (uVar6,lVar7,1,LIT_"'Auto potion'",0);
                                            *(undefined8 *)(param_1 + 200) = uVar6;
                                            func_0x000180314690(param_1 + 200,uVar6);
                                            UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                      (lVar7,*(undefined8 *)(param_1 + 200),0);
                                            if (*(longlong *)(param_1 + 0x98) != 0) {
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (*(longlong *)(param_1 + 0x98),lVar7,0);
                                              do {
                                                plVar8 = *(longlong **)(param_1 + 0xc0);
                                                uVar15 = (uint)uVar16;
                                                lVar7 = AutoPotionWindow__NovaCasa(param_1,uVar16,0)
                                                ;
                                                if (plVar8 == (longlong *)0x0)
                                                goto code_r0x0001805ab235;
                                                if (lVar7 != 0) {
                                                  lVar11 = func_0x0001803146b0(lVar7,*(undefined8 *)
                                                                                      (*plVar8 +
                                                                                      0x40));
                                                  if (lVar11 == 0) {
                                                    uVar6 = func_0x000180314f80();
                                                    FUN_180315590(uVar6,0);
                                                    pcVar1 = (code *)swi(3);
                                                    (*pcVar1)();
                                                    return;
                                                  }
                                                }
                                                if (*(uint *)(plVar8 + 3) <= uVar15) {
code_r0x0001805ab22f:
                                                  FUN_1803155c0();
                                                  pcVar1 = (code *)swi(3);
                                                  (*pcVar1)();
                                                  return;
                                                }
                                                plVar8[uVar16 + 4] = lVar7;
                                                func_0x000180314690(plVar8 + uVar16 + 4,lVar7);
                                                lVar7 = *(longlong *)(param_1 + 0xc0);
                                                if (lVar7 == 0) goto code_r0x0001805ab235;
                                                if (*(uint *)(lVar7 + 0x18) <= uVar15)
                                                goto code_r0x0001805ab22f;
                                                lVar7 = *(longlong *)(lVar7 + 0x20 + uVar16 * 8);
                                                if ((lVar7 == 0) ||
                                                   (*(longlong *)(param_1 + 0x98) == 0))
                                                goto code_r0x0001805ab235;
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (*(longlong *)(param_1 + 0x98),
                                                           *(undefined8 *)(lVar7 + 0x10));
                                                uVar16 = (ulonglong)(uVar15 + 1);
                                              } while ((int)(uVar15 + 1) < 6);
                                              uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                              UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
                                              *(undefined8 *)(param_1 + 0xb0) = uVar6;
                                              func_0x000180314690(param_1 + 0xb0,uVar6);
                                              *(undefined8 *)(lVar5 + 0x10) = uVar6;
                                              func_0x000180314690(lVar5 + 0x10,uVar6);
                                              if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                plVar8 = (longlong *)
                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                  plVar12 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x41600000,0);
                                                  if (plVar12 != (longlong *)0x0) {
                                                    lVar7 = *plVar12;
                                                    uVar6 = *puVar9;
                                                    uVar17 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x43) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805aa917;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,
                                                                           0x43);
code_r0x0001805aa917:
                                                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                                    uStack_a8 = uVar6;
                                                    (*(code *)*puVar9)(plVar12,&uStack_a8,puVar9[1])
                                                    ;
                                                    if (plVar8 != (longlong *)0x0) {
                                                      lVar7 = *plVar8;
                                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                        uVar13 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar7 + 0xb0) +
                                                               (ulonglong)uVar13 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar9 = (undefined8 *)
                                                                     ((longlong)
                                                                      (*(int *)(*(longlong *)
                                                                                 (lVar7 + 0xb0) + 8
                                                                               + (ulonglong)uVar13 *
                                                                                 0x10) + 0xad) *
                                                                      0x10 + 0x138 + lVar7);
                                                            goto code_r0x0001805aa989;
                                                          }
                                                          uVar13 = uVar13 + 1;
                                                        } while (uVar13 < *(ushort *)(lVar7 + 0x12e)
                                                                );
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                             0xad);
code_r0x0001805aa989:
                                                      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                                      uStack_a8 = uVar6;
                                                      (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]
                                                                        );
                                                      if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                        plVar8 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40400000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar17 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x4d) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805aaa29;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x0001805aaa29:
                                                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                                    uStack_a8 = uVar6;
                                                    (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x3f800000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar17 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x4f) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805aaac9;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x0001805aaac9:
                                                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
                                                    uStack_a8 = uVar6;
                                                    (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  uVar6 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                      func_0x000180315660();
                                                    }
                                                    uVar6 = SparkEstilo__Textura__180723790
                                                                      (LIT_"'SkillBar/Buttons/spark_autopot_gear'",0);
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    func_0x000180314690(lVar5 + 0x20,uVar6);
                                                    uVar6 = SparkEstilo__Textura__180723790
                                                                      (LIT_"'SkillBar/Buttons/spark_autopot_gear_over'",0);
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar6;
                                                    func_0x000180314690(lVar5 + 0x18,uVar6);
                                                    uVar6 = SparkEstilo__Textura__180723790
                                                                      (LIT_"'SkillBar/Buttons/spark_autopot_gear_down'",0);
                                                    *(undefined8 *)(lVar5 + 0x28) = uVar6;
                                                    func_0x000180314690(lVar5 + 0x28,uVar6);
                                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_88,
                                                             *(undefined8 *)(lVar5 + 0x20),0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar10 = *puVar9;
                                                    uVar2 = puVar9[1];
                                                    uVar3 = puVar9[2];
                                                    uVar4 = puVar9[3];
                                                    uVar6 = puVar9[4];
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0xb) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805aac19;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb
                                                                          );
code_r0x0001805aac19:
                                                    uStack_88 = uVar10;
                                                    uStack_80 = uVar2;
                                                    uStack_78 = uVar3;
                                                    uStack_70 = uVar4;
                                                    uStack_68 = uVar6;
                                                    (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
                                                    lVar7 = *(longlong *)(lVar5 + 0x10);
                                                    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                    FUN_18055b980(uVar6,lVar5,MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__1,0
                                                                 );
                                                    if (lVar7 != 0) {
                                                      FUN_180990d50(lVar7,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                      lVar7 = *(longlong *)(lVar5 + 0x10);
                                                      uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                      FUN_18055b980(uVar6,lVar5,MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__2
                                                                    ,0);
                                                      if (lVar7 != 0) {
                                                        FUN_180990d50(lVar7,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                        lVar7 = *(longlong *)(lVar5 + 0x10);
                                                        uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
                                                        FUN_18055b980(uVar6,lVar5,
                                                                      MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__3,0);
                                                        if (lVar7 != 0) {
                                                          FUN_180990d50(lVar7,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>
                                                                       );
                                                          lVar7 = *(longlong *)(lVar5 + 0x10);
                                                          uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>
                                                                                     );
                                                          FUN_18055b980(uVar6,lVar5,
                                                                        MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__4,0);
                                                          if (lVar7 != 0) {
                                                            FUN_180990d50(lVar7,uVar6,0,
                                                                          MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                                                            uVar6 = *(undefined8 *)(lVar5 + 0x10);
                                                            uVar10 = func_0x000180315580(
                                                  TI_TooltipManipulator);
                                                  TooltipManipulator___ctor__1807b5900
                                                            (uVar10,uVar6,1,LIT_"'Auto potion settings'",0);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (uVar6,uVar10,0);
                                                  if (*(longlong *)(param_1 + 0x98) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0x98),
                                                               *(undefined8 *)(lVar5 + 0x10),0);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x98),0);
                                                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                                                                            
                                                  MouseOverDetectionManipulator__Disable__1807afdf0
                                                            (*(longlong *)(param_1 + 0xb8),0);
                                                  if (param_2 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,*(undefined8 *)
                                                                        (param_1 + 0x98),0);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      lVar7 = func_0x0001818f3de0(*(longlong *)
                                                                                   (param_1 + 0x98),
                                                                                  0);
                                                      uVar6 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar6,lVar5,MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__5
                                                                    ,0);
                                                      if (lVar7 != 0) {
                                                        lVar7 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler
                                                                              ,lVar7,uVar6);
                                                        if (lVar7 != 0) {
                                                          FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar7
                                                                        ,500);
                                                          if (*(longlong *)(param_1 + 0x98) != 0) {
                                                            lVar7 = func_0x0001818f3de0(*(longlong *
                                                                                         )(param_1 +
                                                                                          0x98),0);
                                                            uVar6 = func_0x000180315580(
                                                  TI_System.Action);
                                                  FUN_1816a9c60(uVar6,param_1,MD_AutoPotionWindow.Prende,0
                                                               );
                                                  if (lVar7 != 0) {
                                                    lVar7 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,
                                                                          lVar7,uVar6);
                                                    if (lVar7 != 0) {
                                                      plVar8 = (longlong *)
                                                               FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,
                                                                             lVar7,100);
                                                      uVar6 = func_0x000180315580(
                                                  TI_System.Func<bool>);
                                                  FUN_1814af410(uVar6,lVar5,MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__6,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar13 = 0;
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 6) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805aafa9;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduledItem,6);
code_r0x0001805aafa9:
                                                  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
                                                  if (*(longlong *)(param_1 + 0x98) != 0) {
                                                    lVar7 = func_0x0001818f3de0(*(longlong *)
                                                                                 (param_1 + 0x98),0)
                                                    ;
                                                    uVar6 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar6,lVar5,MD_AutoPotionWindow.__c__DisplayClass36_0._MontaBarra_b__7,0
                                                                 );
                                                    if (lVar7 != 0) {
                                                      plVar8 = (longlong *)
                                                               FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,
                                                                             lVar7,uVar6);
                                                      if (plVar8 != (longlong *)0x0) {
                                                        uVar13 = 0;
                                                        lVar5 = *plVar8;
                                                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                          do {
                                                            if (*(longlong *)
                                                                 (*(longlong *)(lVar5 + 0xb0) +
                                                                 (ulonglong)uVar13 * 0x10) ==
                                                                TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                                                              puVar9 = (undefined8 *)
                                                                       ((longlong)
                                                                        (*(int *)(*(longlong *)
                                                                                   (lVar5 + 0xb0) +
                                                                                  8 + (ulonglong)
                                                                                      uVar13 * 0x10)
                                                                        + 5) * 0x10 + 0x138 + lVar5)
                                                              ;
                                                              goto LAB_180002080;
                                                            }
                                                            uVar13 = uVar13 + 1;
                                                          } while (uVar13 < *(ushort *)
                                                                             (lVar5 + 0x12e));
                                                        }
                                                        uStack_30 = &LAB_180002080;
                                                        puVar9 = (undefined8 *)FUN_180312860(plVar8)
                                                        ;
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                        (*(code *)*puVar9)(plVar8,100,puVar9[1]);
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
code_r0x0001805ab235:
                                            FUN_1803155d0();
                                            pcVar1 = (code *)swi(3);
                                            (*pcVar1)();
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

