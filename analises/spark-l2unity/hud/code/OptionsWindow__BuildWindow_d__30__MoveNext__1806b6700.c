// OptionsWindow__BuildWindow_d__30__MoveNext__1806b6700 @ 0x1806b6700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong OptionsWindow__BuildWindow_d__30__MoveNext__1806b6700(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong **pplVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ushort uVar20;
  ushort uVar21;
  longlong lVar22;
  longlong *aplStackX_8 [2];
  longlong lStackX_18;
  longlong *plStackX_20;
  undefined8 uVar23;
  undefined4 uVar24;
  longlong lStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_d8;
  longlong **pplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_a8;
  longlong *plStack_98;
  undefined4 uStack_90;
  
  puVar8 = (undefined1 *)register0x00000020;
  if (cRam00000001834b3f67 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_DragManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MD_OptionsWindow.Aplica);
    FUN_180315380(MD_OptionsWindow.Cancela);
    FUN_180315380(MD_OptionsWindow.ResetDaAba);
    FUN_180315380(MD_OptionsWindow._BuildWindow_b__30_0);
    FUN_180315380(MD_OptionsWindow._BuildWindow_b__30_2);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c._BuildWindow_b__30_1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass30_0._BuildWindow_b__3);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass30_0);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Apply and Close Window'");
    FUN_180315380(LIT_"'windows-name-label'");
    FUN_180315380(LIT_"'Reset Window Location'");
    FUN_180315380(LIT_"'Cancel'");
    FUN_180315380(LIT_"'btn-close-frame'");
    FUN_180315380(LIT_"'Apply'");
    FUN_180315380(LIT_"'Reset Settings'");
    FUN_180315380(LIT_"'Content'");
    FUN_180315380(LIT_"'drag-area'");
    puVar8 = (undefined1 *)FUN_180315380(LIT_"'Options'");
    cRam00000001834b3f67 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) != 0) {
code_r0x0001806b840f:
    return (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  plStackX_20 = plVar2;
  plStack_98 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*plVar2 + 0x1b0));
    uVar9 = L2Window__GetElementByClass(plVar2,LIT_"'drag-area'",0);
    lVar12 = plVar2[6];
    uVar10 = func_0x000180315580(TI_DragManipulator);
    uVar19 = 0;
    uVar23 = 0;
    DragManipulator___ctor(uVar10,uVar9,lVar12,plVar2,0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar9,uVar10,0);
    L2PopupWindow__RegisterCloseWindowEvent(plVar2,LIT_"'btn-close-frame'",0);
    L2PopupWindow__RegisterClickWindowEvent(plVar2,plVar2[6],uVar9,0);
    plVar11 = (longlong *)L2Window__GetElementById(plVar2,LIT_"'windows-name-label'",0);
    if (plVar11 != (longlong *)0x0) {
      lVar12 = *plVar11;
      if ((*(byte *)(lVar12 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.Label + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(lVar12 + 200) + -8 +
           (ulonglong)*(byte *)(TI_UnityEngine.UIElements.Label + 0x130) * 8) != TI_UnityEngine.UIElements.Label)) {
        FUN_1803146d0(plVar11,TI_UnityEngine.UIElements.Label);
        pcVar3 = (code *)swi(3);
        uVar19 = (*pcVar3)();
        return uVar19;
      }
      (**(code **)(lVar12 + 0xe48))(plVar11,LIT_"'Options'",*(undefined8 *)(lVar12 + 0xe50));
      lVar12 = plVar2[6];
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar12 = FUN_180b0e310(lVar12,LIT_"'Content'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
      lStack_a8 = lVar12;
      if ((lVar12 != 0) &&
         (lVar13 = UnityEngine_UIElements_VisualElement__Children(lVar12,0), lVar13 != 0)) {
        lStackX_18 = lVar12;
        aplStackX_8[0] = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar13);
        uStack_d8 = 0;
        pplStack_d0 = aplStackX_8;
        lVar13 = lVar12;
        while (aplStackX_8[0] != (longlong *)0x0) {
          cVar6 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
          plVar11 = aplStackX_8[0];
          uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
          uVar20 = 0;
          if (cVar6 == '\0') {
            if (aplStackX_8[0] != (longlong *)0x0) {
              FUN_180002390(0,TI_System.IDisposable,aplStackX_8[0]);
            }
            if (lVar13 == 0) goto code_r0x0001806b84c0;
            plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
            puVar14 = (undefined8 *)
                      UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_d8,3,0);
            if (plVar11 == (longlong *)0x0) goto code_r0x0001806b84c0;
            uVar9 = *puVar14;
            pplVar4 = (longlong **)puVar14[1];
            uStack_c8 = puVar14[2];
            uStack_c0 = puVar14[3];
            uStack_b8 = puVar14[4];
            lVar15 = *plVar11;
            if (*(ushort *)(lVar15 + 0x12e) == 0) goto code_r0x0001806b6c78;
            uVar21 = uVar20;
            goto code_r0x0001806b6c60;
          }
          if (aplStackX_8[0] == (longlong *)0x0) goto code_r0x0001806b84cc;
          lVar15 = *aplStackX_8[0];
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar17 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + uVar17 * 0x10) ==
                  TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
                puVar14 = (undefined8 *)
                          ((longlong)*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + uVar17 * 0x10) *
                           0x10 + 0x138 + lVar15);
                goto code_r0x0001806b6b32;
              }
              uVar20 = (short)uVar17 + 1;
              uVar17 = (ulonglong)uVar20;
            } while (uVar20 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar14 = (undefined8 *)FUN_180312860(aplStackX_8[0],TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x0001806b6b32:
          lVar15 = (*(code *)*puVar14)(plVar11,puVar14[1]);
          if (lVar15 == 0) goto code_r0x0001806b84c6;
          uVar9 = func_0x00018239a460(lVar15,0);
          cVar6 = func_0x0001817058a0(uVar9,LIT_"'Content'",0);
          if (cVar6 != '\0') {
            lVar13 = lVar15;
            lStackX_18 = lVar15;
          }
        }
        goto code_r0x0001806b84d1;
      }
    }
  }
  goto code_r0x0001806b84c0;
  while (uVar21 = uVar21 + 1, uVar21 < *(ushort *)(lVar15 + 0x12e)) {
code_r0x0001806b6c60:
    if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      lVar18 = (longlong)*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10);
      uStack_d8 = uVar9;
      pplStack_d0 = pplVar4;
      (**(code **)(lVar15 + 0x1e8 + lVar18 * 0x10))
                (plVar11,&uStack_d8,*(undefined8 *)(lVar15 + 0x1f0 + lVar18 * 0x10));
      goto code_r0x0001806b6ca8;
    }
  }
code_r0x0001806b6c78:
  puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
  uStack_d8 = uVar9;
  pplStack_d0 = pplVar4;
  (*(code *)*puVar14)(plVar11,&uStack_d8,puVar14[1]);
code_r0x0001806b6ca8:
  if (plVar2[6] != 0) {
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar2[6],0);
    plVar16 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0x443e0000,0);
    if (plVar11 != (longlong *)0x0) {
      lVar15 = *plVar16;
      lVar5 = plVar16[1];
      lVar18 = *plVar11;
      if (*(ushort *)(lVar18 + 0x12e) != 0) {
        uVar21 = uVar20;
        do {
          if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0xad
                       ) * 0x10 + 0x138 + lVar18);
            goto code_r0x0001806b6d39;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806b6d39:
      lStack_f8 = lVar15;
      uStack_f0 = (int)lVar5;
      (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
      if (plVar2[6] != 0) {
        plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar2[6],0);
        plVar16 = (longlong *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0x44138000,0);
        if (plVar11 != (longlong *)0x0) {
          lVar15 = *plVar16;
          lVar5 = plVar16[1];
          lVar18 = *plVar11;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            uVar21 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                lVar22 = (longlong)
                         *(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10);
                lStack_f8 = lVar15;
                uStack_f0 = (int)lVar5;
                (**(code **)(lVar18 + 0x568 + lVar22 * 0x10))
                          (plVar11,&lStack_f8,*(undefined8 *)(lVar18 + 0x570 + lVar22 * 0x10));
                goto code_r0x0001806b6df1;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
          lStack_f8 = lVar15;
          uStack_f0 = (int)lVar5;
          (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
code_r0x0001806b6df1:
          lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
          uVar9 = func_0x000182601c10();
          if (lVar15 != 0) {
            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
            lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
            uVar9 = func_0x000182601c10();
            if (lVar15 != 0) {
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
              plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
              plVar16 = (longlong *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0x440a0000,0);
              if (plVar11 != (longlong *)0x0) {
                lVar15 = *plVar16;
                lVar5 = plVar16[1];
                lVar18 = *plVar11;
                if (*(ushort *)(lVar18 + 0x12e) != 0) {
                  uVar21 = uVar20;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar14 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 +
                                          (ulonglong)uVar21 * 0x10) + 0x43) * 0x10 + 0x138 + lVar18)
                      ;
                      goto code_r0x0001806b6ee9;
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
                }
                puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806b6ee9:
                lStack_f8 = lVar15;
                uStack_f0 = (int)lVar5;
                (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                plVar16 = (longlong *)
                          UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0,0);
                if (plVar11 != (longlong *)0x0) {
                  lVar15 = *plVar16;
                  lVar5 = plVar16[1];
                  lVar18 = *plVar11;
                  if (*(ushort *)(lVar18 + 0x12e) != 0) {
                    uVar21 = uVar20;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar14 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 +
                                            (ulonglong)uVar21 * 0x10) + 0x57) * 0x10 + 0x138 +
                                  lVar18);
                        goto code_r0x0001806b6f89;
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
                  }
                  puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001806b6f89:
                  lStack_f8 = lVar15;
                  uStack_f0 = (int)lVar5;
                  (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                  lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                  uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                  if (lVar12 != 0) {
                    FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
                    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                    plVar16 = (longlong *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0,0);
                    if (plVar11 != (longlong *)0x0) {
                      lVar12 = *plVar16;
                      lVar18 = plVar16[1];
                      lVar15 = *plVar11;
                      if (*(ushort *)(lVar15 + 0x12e) != 0) {
                        uVar21 = uVar20;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar21 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar14 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                (ulonglong)uVar21 * 0x10) + 0x57) * 0x10 + 0x138 +
                                      lVar15);
                            goto code_r0x0001806b7059;
                          }
                          uVar21 = uVar21 + 1;
                        } while (uVar21 < *(ushort *)(lVar15 + 0x12e));
                      }
                      puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001806b7059:
                      lStack_f8 = lVar12;
                      uStack_f0 = (int)lVar18;
                      (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                      uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                      if (lVar12 != 0) {
                        FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        SparkEstilo__Espaco(lVar13,0x40800000,0x41400000,0x41800000,
                                            CONCAT44(uVar24,0x41400000),0);
                        lVar12 = plVar2[6];
                        uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                        FUN_18055b980(uVar9,plVar2,MD_OptionsWindow._BuildWindow_b__30_0,0);
                        if (lVar12 != 0) {
                          FUN_180990d50(lVar12,uVar9,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                          lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          lStack_a8 = lVar12;
                          UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                          if (lVar12 != 0) {
                            lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                            uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                            if (lVar15 != 0) {
                              FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                              lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                              uVar9 = func_0x000182601c10();
                              if (lVar15 != 0) {
                                FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                                plVar11 = (longlong *)
                                          UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                                plVar16 = (longlong *)
                                          UnityEngine_UIElements_StyleLength__op_Implicit
                                                    (&lStack_f8,0,0);
                                if (plVar11 != (longlong *)0x0) {
                                  lVar15 = *plVar16;
                                  lVar5 = plVar16[1];
                                  lVar18 = *plVar11;
                                  if (*(ushort *)(lVar18 + 0x12e) != 0) {
                                    uVar21 = uVar20;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar14 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 +
                                                            (ulonglong)uVar21 * 0x10) + 0x57) * 0x10
                                                   + 0x138 + lVar18);
                                        goto code_r0x0001806b7269;
                                      }
                                      uVar21 = uVar21 + 1;
                                    } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
                                  }
                                  puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x57)
                                  ;
code_r0x0001806b7269:
                                  lStack_f8 = lVar15;
                                  uStack_f0 = (int)lVar5;
                                  (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                                  UnityEngine_UIElements_VisualElement__Add(lVar13,lVar12,0);
                                  lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                  lStack_f8 = lVar13;
                                  UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
                                  if (lVar13 != 0) {
                                    plVar11 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar13,0);
                                    plVar16 = (longlong *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit
                                                        (&plStack_98,0x42f80000,0);
                                    if (plVar11 != (longlong *)0x0) {
                                      plVar1 = (longlong *)*plVar16;
                                      lVar18 = plVar16[1];
                                      lVar15 = *plVar11;
                                      if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                        uVar21 = uVar20;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar15 + 0xb0) +
                                               (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar14 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                                (ulonglong)uVar21 * 0x10) + 0xad) *
                                                       0x10 + 0x138 + lVar15);
                                            goto code_r0x0001806b7339;
                                          }
                                          uVar21 = uVar21 + 1;
                                        } while (uVar21 < *(ushort *)(lVar15 + 0x12e));
                                      }
                                      puVar14 = (undefined8 *)
                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806b7339:
                                      plStack_98 = plVar1;
                                      uStack_90 = (int)lVar18;
                                      (*(code *)*puVar14)(plVar11,&plStack_98,puVar14[1]);
                                      lVar15 = UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar13,0);
                                      uVar9 = func_0x000182601c10();
                                      if (lVar15 != 0) {
                                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                                        plVar11 = (longlong *)
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar13,0);
                                        uStack_d8 = 0;
                                        pplStack_d0 = (longlong **)0x3eb3333300000000;
                                        puVar14 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&plStack_98,&uStack_d8,0);
                                        if (plVar11 != (longlong *)0x0) {
                                          uVar9 = *puVar14;
                                          uVar10 = puVar14[1];
                                          uVar24 = *(undefined4 *)(puVar14 + 2);
                                          lVar15 = *plVar11;
                                          if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                            uVar21 = uVar20;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar15 + 0xb0) +
                                                   (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar14 = (undefined8 *)
                                                          ((longlong)
                                                           (*(int *)(*(longlong *)(lVar15 + 0xb0) +
                                                                     8 + (ulonglong)uVar21 * 0x10) +
                                                           9) * 0x10 + 0x138 + lVar15);
                                                goto code_r0x0001806b7429;
                                              }
                                              uVar21 = uVar21 + 1;
                                            } while (uVar21 < *(ushort *)(lVar15 + 0x12e));
                                          }
                                          puVar14 = (undefined8 *)
                                                    FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806b7429:
                                          uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar24);
                                          uStack_d8 = uVar9;
                                          pplStack_d0 = (longlong **)uVar10;
                                          (*(code *)*puVar14)(plVar11,&uStack_d8,puVar14[1]);
                                          uStack_d8 = 0x3e8a3d713e99999a;
                                          pplStack_d0 = (longlong **)0x3f3333333e570a3d;
                                          SparkEstilo__Borda(lVar13,&uStack_d8,0x3f800000,0,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar12,lVar13,0)
                                          ;
                                          uVar17 = uVar19;
                                          do {
                                            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                              func_0x000180315660(TI_OptionsWindow);
                                            }
                                            lVar12 = *(longlong *)
                                                      (*(longlong *)(TI_OptionsWindow + 0xb8) +
                                                      0x38);
                                            if (lVar12 == 0) break;
                                            uVar7 = (uint)uVar17;
                                            if (*(int *)(lVar12 + 0x18) <= (int)uVar7) {
                                              lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                              UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                                              if (lVar12 == 0) break;
                                              lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar12,0);
                                              uVar9 = func_0x000182601c10();
                                              if (lVar13 == 0) break;
                                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                                              plVar11 = (longlong *)
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar12,0);
                                              plVar16 = (longlong *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&lStack_f8,0,0);
                                              if (plVar11 == (longlong *)0x0) break;
                                              lVar13 = *plVar16;
                                              lVar18 = plVar16[1];
                                              lVar15 = *plVar11;
                                              if (*(ushort *)(lVar15 + 0x12e) == 0)
                                              goto code_r0x0001806b7838;
                                              uVar21 = uVar20;
                                              goto code_r0x0001806b7820;
                                            }
                                            lVar12 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass30_0);
                                            func_0x0001803dadf0(lVar12,0);
                                            if (lVar12 == 0) break;
                                            *(longlong **)(lVar12 + 0x18) = plVar2;
                                            func_0x000180314690(lVar12 + 0x18);
                                            if (((char)plVar2[0x11] == '\0') || ((int)uVar7 < 2)) {
                                              *(uint *)(lVar12 + 0x10) = uVar7;
                                              plVar11 = (longlong *)plVar2[0x13];
                                              if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                                func_0x000180315660(TI_OptionsWindow);
                                              }
                                              lVar13 = *(longlong *)
                                                        (*(longlong *)(TI_OptionsWindow + 0xb8)
                                                        + 0x38);
                                              if (lVar13 == 0) break;
                                              if (*(uint *)(lVar13 + 0x18) <= uVar7)
                                              goto code_r0x0001806b854d;
                                              uVar9 = *(undefined8 *)
                                                       (lVar13 + 0x20 + (longlong)(int)uVar7 * 8);
                                              uVar10 = func_0x000180315580(TI_System.Action);
                                              FUN_1816a9c60(uVar10,lVar12,MD_OptionsWindow.__c__DisplayClass30_0._BuildWindow_b__3,0);
                                              lVar12 = OptionsWindow__BotaoDeAba
                                                                 (plVar2,uVar9,uVar10);
                                              if (plVar11 == (longlong *)0x0) break;
                                              if ((lVar12 != 0) &&
                                                 (lVar13 = func_0x0001803146b0(lVar12,*(undefined8 *
                                                                                       )(*plVar11 +
                                                                                        0x40)),
                                                 lVar13 == 0)) {
                                                uVar9 = func_0x000180314f80();
                                                FUN_180315590(uVar9,0);
                                                pcVar3 = (code *)swi(3);
                                                uVar19 = (*pcVar3)();
                                                return uVar19;
                                              }
                                              if (*(uint *)(plVar11 + 3) <= uVar7)
                                              goto code_r0x0001806b854d;
                                              plVar11[(longlong)(int)uVar7 + 4] = lVar12;
                                              func_0x000180314690(plVar11 + (longlong)(int)uVar7 + 4
                                                                  ,lVar12);
                                              lVar12 = plVar2[0x13];
                                              if (lVar12 == 0) break;
                                              if (*(uint *)(lVar12 + 0x18) <= uVar7)
                                              goto code_r0x0001806b854d;
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (lStack_f8,
                                                         *(undefined8 *)
                                                          (lVar12 + 0x20 + (longlong)(int)uVar7 * 8)
                                                         ,0);
                                            }
                                            uVar17 = (ulonglong)(uVar7 + 1);
                                          } while( true );
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
  goto code_r0x0001806b84c0;
  while (uVar21 = uVar21 + 1, uVar21 < *(ushort *)(lVar15 + 0x12e)) {
code_r0x0001806b7820:
    if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar14 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x57) *
                 0x10 + 0x138 + lVar15);
      goto code_r0x0001806b7849;
    }
  }
code_r0x0001806b7838:
  puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001806b7849:
  lStack_f8 = lVar13;
  uStack_f0 = (int)lVar18;
  (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
  plVar16 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&lStack_f8,0x40800000,0);
  if (plVar11 != (longlong *)0x0) {
    lVar13 = *plVar16;
    lVar18 = plVar16[1];
    lVar15 = *plVar11;
    if (*(ushort *)(lVar15 + 0x12e) != 0) {
      uVar21 = uVar20;
      do {
        if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar14 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x4d)
                     * 0x10 + 0x138 + lVar15);
          goto code_r0x0001806b78e9;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)(lVar15 + 0x12e));
    }
    puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806b78e9:
    lStack_f8 = lVar13;
    uStack_f0 = (int)lVar18;
    (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
    uStack_d8 = 0x3d03126f3d0f5c29;
    pplStack_d0 = (longlong **)0x3f6b851f3ce56042;
    puVar14 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&lStack_f8,&uStack_d8,0);
    if (plVar11 != (longlong *)0x0) {
      uVar9 = *puVar14;
      uVar10 = puVar14[1];
      uVar24 = *(undefined4 *)(puVar14 + 2);
      lVar13 = *plVar11;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) + 9) *
                       0x10 + 0x138 + lVar13);
            goto code_r0x0001806b7989;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806b7989:
      uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar24);
      uStack_d8 = uVar9;
      pplStack_d0 = (longlong **)uVar10;
      (*(code *)*puVar14)(plVar11,&uStack_d8,puVar14[1]);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_d8 = 0x3e8a3d713e99999a;
      pplStack_d0 = (longlong **)0x3f3333333e570a3d;
      SparkEstilo__Borda(lVar12,&uStack_d8,0x3f800000,0,0);
      UnityEngine_UIElements_VisualElement__Add(lStack_a8,lVar12,0);
      plVar11 = (longlong *)plVar2[0x12];
      lVar13 = OptionsWindow__Video__18069b880(plVar2,0);
      if (plVar11 != (longlong *)0x0) {
        if ((lVar13 != 0) &&
           (lVar15 = func_0x0001803146b0(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
          uVar9 = func_0x000180314f80();
          FUN_180315590(uVar9,0);
          pcVar3 = (code *)swi(3);
          uVar19 = (*pcVar3)();
          return uVar19;
        }
        if ((int)plVar11[3] == 0) {
code_r0x0001806b854d:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          uVar19 = (*pcVar3)();
          return uVar19;
        }
        plVar11[4] = lVar13;
        func_0x000180314690(plVar11 + 4,lVar13);
        plVar11 = (longlong *)plVar2[0x12];
        lVar13 = OptionsWindow__Audio__18068af80(plVar2,0);
        if (plVar11 != (longlong *)0x0) {
          if ((lVar13 != 0) &&
             (lVar15 = func_0x0001803146b0(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
            uVar9 = func_0x000180314f80();
            FUN_180315590(uVar9,0);
            pcVar3 = (code *)swi(3);
            uVar19 = (*pcVar3)();
            return uVar19;
          }
          if (*(uint *)(plVar11 + 3) < 2) goto code_r0x0001806b854d;
          plVar11[5] = lVar13;
          func_0x000180314690(plVar11 + 5,lVar13);
          plVar11 = (longlong *)plVar2[0x12];
          uVar17 = uVar19;
          if ((char)plVar2[0x11] == '\0') {
            uVar17 = OptionsWindow__Jogo__180695a10(plVar2,0);
          }
          if (plVar11 != (longlong *)0x0) {
            if ((uVar17 != 0) &&
               (lVar13 = func_0x0001803146b0(uVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
            {
              uVar9 = func_0x000180314f80();
              FUN_180315590(uVar9,0);
              pcVar3 = (code *)swi(3);
              uVar19 = (*pcVar3)();
              return uVar19;
            }
            if (*(uint *)(plVar11 + 3) < 3) goto code_r0x0001806b854d;
            plVar11[6] = uVar17;
            func_0x000180314690(plVar11 + 6,uVar17);
            plVar11 = (longlong *)plVar2[0x12];
            uVar17 = uVar19;
            if ((char)plVar2[0x11] == '\0') {
              uVar17 = OptionsWindow__Teclas(plVar2,0);
            }
            if (plVar11 != (longlong *)0x0) {
              if ((uVar17 != 0) &&
                 (lVar13 = func_0x0001803146b0(uVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0
                 )) {
                uVar9 = func_0x000180314f80();
                FUN_180315590(uVar9,0);
                pcVar3 = (code *)swi(3);
                uVar19 = (*pcVar3)();
                return uVar19;
              }
              if (*(uint *)(plVar11 + 3) < 4) goto code_r0x0001806b854d;
              plVar11[7] = uVar17;
              func_0x000180314690(plVar11 + 7,uVar17);
              plVar11 = (longlong *)plVar2[0x12];
              uVar17 = uVar19;
              if ((char)plVar2[0x11] == '\0') {
                uVar17 = OptionsWindow__Chat__180690930(plVar2,0);
              }
              if (plVar11 != (longlong *)0x0) {
                if ((uVar17 != 0) &&
                   (lVar13 = func_0x0001803146b0(uVar17,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar13 == 0)) {
                  uVar9 = func_0x000180314f80();
                  FUN_180315590(uVar9,0);
                  pcVar3 = (code *)swi(3);
                  uVar19 = (*pcVar3)();
                  return uVar19;
                }
                if (*(uint *)(plVar11 + 3) < 5) goto code_r0x0001806b854d;
                plVar11[8] = uVar17;
                func_0x000180314690(plVar11 + 8,uVar17);
                plVar11 = (longlong *)plVar2[0x12];
                uVar17 = uVar19;
                if ((char)plVar2[0x11] == '\0') {
                  uVar17 = OptionsWindow__Interface__180694ab0(plVar2,0);
                }
                if (plVar11 != (longlong *)0x0) {
                  if ((uVar17 != 0) &&
                     (lVar13 = func_0x0001803146b0(uVar17,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar13 == 0)) {
                    uVar9 = func_0x000180314f80();
                    FUN_180315590(uVar9,0);
                    pcVar3 = (code *)swi(3);
                    uVar19 = (*pcVar3)();
                    return uVar19;
                  }
                  if (*(uint *)(plVar11 + 3) < 6) goto code_r0x0001806b854d;
                  plVar11[9] = uVar17;
                  func_0x000180314690(plVar11 + 9,uVar17);
                  lVar13 = plVar2[0x12];
                  uVar17 = uVar19;
                  if (lVar13 != 0) {
                    while (uVar7 = (uint)uVar17, (int)uVar7 < *(int *)(lVar13 + 0x18)) {
                      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto code_r0x0001806b854d;
                      lVar15 = *(longlong *)(lVar13 + 0x20 + (longlong)(int)uVar7 * 8);
                      if (lVar15 != 0) {
                        UnityEngine_UIElements_VisualElement__Add(lVar12,lVar15,0);
                      }
                      uVar17 = (ulonglong)(uVar7 + 1);
                    }
                    lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                    UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                    if (lVar12 != 0) {
                      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                      uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                      if (lVar13 != 0) {
                        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                        lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                        uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                        if (lVar13 != 0) {
                          FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                          plVar11 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                          plVar16 = (longlong *)
                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                              (&lStack_f8,0x40a00000,0);
                          if (plVar11 != (longlong *)0x0) {
                            lVar13 = *plVar16;
                            lVar18 = plVar16[1];
                            lVar15 = *plVar11;
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar14 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      uVar17 * 0x10) + 0x51) * 0x10 + 0x138 + lVar15
                                            );
                                  goto code_r0x0001806b7df9;
                                }
                                uVar20 = (short)uVar17 + 1;
                                uVar17 = (ulonglong)uVar20;
                              } while (uVar20 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar14 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001806b7df9:
                            lStack_f8 = lVar13;
                            uStack_f0 = (int)lVar18;
                            (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                            lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                            uVar9 = func_0x000182601c10();
                            if (lVar13 != 0) {
                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                              uVar9 = func_0x000180315580(TI_System.Action);
                              FUN_1816a9c60(uVar9,plVar2,MD_OptionsWindow.ResetDaAba,0);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar9 = SparkEstilo__Botao(LIT_"'Reset Settings'",uVar9,0x86,0,0);
                              UnityEngine_UIElements_VisualElement__Add(lVar12,uVar9,0);
                              lVar13 = lStackX_18;
                              UnityEngine_UIElements_VisualElement__Add(lStackX_18,lVar12,0);
                              lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                              UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                              if (lVar12 != 0) {
                                lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                                uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                if (lVar15 != 0) {
                                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                                  lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0)
                                  ;
                                  uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                  if (lVar15 != 0) {
                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                                    plVar11 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar12,0);
                                    plVar16 = (longlong *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit
                                                        (&lStack_f8,0x40c00000,0);
                                    if (plVar11 != (longlong *)0x0) {
                                      lVar15 = *plVar16;
                                      lVar5 = plVar16[1];
                                      lVar18 = *plVar11;
                                      if (*(ushort *)(lVar18 + 0x12e) != 0) {
                                        uVar17 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar18 + 0xb0) + uVar17 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar14 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 +
                                                                uVar17 * 0x10) + 0x51) * 0x10 +
                                                       0x138 + lVar18);
                                            goto code_r0x0001806b7fe9;
                                          }
                                          uVar20 = (short)uVar17 + 1;
                                          uVar17 = (ulonglong)uVar20;
                                        } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
                                      }
                                      puVar14 = (undefined8 *)
                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001806b7fe9:
                                      lStack_f8 = lVar15;
                                      uStack_f0 = (int)lVar5;
                                      (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                                      lVar15 = UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar12,0);
                                      uVar9 = func_0x000182601c10();
                                      if (lVar15 != 0) {
                                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar9);
                                        if ((char)plVar2[0x11] == '\0') {
                                          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          uVar9 = LIT_"'Reset Window Location'";
                                          lVar15 = *(longlong *)
                                                    (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 8)
                                          ;
                                          if (lVar15 == 0) {
                                            if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            uVar10 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                            lVar15 = func_0x000180315580(TI_System.Action);
                                            FUN_1816a9c60(lVar15,uVar10,MD_OptionsWindow.__c._BuildWindow_b__30_1,0);
                                            *(longlong *)
                                             (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 8) =
                                                 lVar15;
                                            func_0x000180314690(*(longlong *)
                                                                 (TI_OptionsWindow.<>c + 0xb8) + 8,
                                                                lVar15);
                                          }
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          uVar9 = SparkEstilo__Botao(uVar9,lVar15,0xa0,0,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar12,uVar9,0);
                                        }
                                        lVar15 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                        UnityEngine_UIElements_VisualElement___ctor(lVar15,0);
                                        if (lVar15 != 0) {
                                          lVar18 = UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar15,0);
                                          uVar9 = func_0x000182601c10();
                                          if (lVar18 != 0) {
                                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar18,uVar9);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar12,lVar15,0);
                                            uVar9 = func_0x000180315580(TI_System.Action);
                                            FUN_1816a9c60(uVar9,plVar2,MD_OptionsWindow._BuildWindow_b__30_2,0);
                                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            uVar9 = SparkEstilo__Botao(LIT_"'Apply and Close Window'",uVar9,
                                                                       0xa0,0,0);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar12,uVar9,0);
                                            uVar9 = func_0x000180315580(TI_System.Action);
                                            FUN_1816a9c60(uVar9,plVar2,MD_OptionsWindow.Aplica,0);
                                            lVar15 = SparkEstilo__Botao(LIT_"'Apply'",uVar9,
                                                                        0x5a,0,0);
                                            if (lVar15 != 0) {
                                              plVar11 = (longlong *)
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                              plVar16 = (longlong *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&lStack_f8,0x40800000,0);
                                              if (plVar11 != (longlong *)0x0) {
                                                lVar18 = *plVar16;
                                                lVar22 = plVar16[1];
                                                lVar5 = *plVar11;
                                                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                  uVar17 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar5 + 0xb0) +
                                                         uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar14 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar5 + 0xb0) + 8 +
                                                                          uVar17 * 0x10) + 0x4d) *
                                                                 0x10 + 0x138 + lVar5);
                                                      goto code_r0x0001806b82b9;
                                                    }
                                                    uVar20 = (short)uVar17 + 1;
                                                    uVar17 = (ulonglong)uVar20;
                                                  } while (uVar20 < *(ushort *)(lVar5 + 0x12e));
                                                }
                                                puVar14 = (undefined8 *)
                                                          FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4d)
                                                ;
code_r0x0001806b82b9:
                                                lStack_f8 = lVar18;
                                                uStack_f0 = (int)lVar22;
                                                (*(code *)*puVar14)(plVar11,&lStack_f8,puVar14[1]);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar12,lVar15,0);
                                                uVar9 = func_0x000180315580(TI_System.Action);
                                                FUN_1816a9c60(uVar9,plVar2,MD_OptionsWindow.Cancela,0);
                                                lVar15 = SparkEstilo__Botao(LIT_"'Cancel'",
                                                                            uVar9,0x6e,0,0);
                                                if (lVar15 != 0) {
                                                  plVar11 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar15,0);
                                                  plVar16 = (longlong *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&lStack_f8,0x40800000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar18 = *plVar16;
                                                    lVar22 = plVar16[1];
                                                    lVar5 = *plVar11;
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar19 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar14 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar5 + 0xb0) + 8 +
                                                                              uVar19 * 0x10) + 0x4d)
                                                                     * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x0001806b83a9;
                                                        }
                                                        uVar20 = (short)uVar19 + 1;
                                                        uVar19 = (ulonglong)uVar20;
                                                      } while (uVar20 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar14 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x4d);
code_r0x0001806b83a9:
                                                    lStack_f8 = lVar18;
                                                    uStack_f0 = (int)lVar22;
                                                    (*(code *)*puVar14)(plVar11,&lStack_f8,
                                                                        puVar14[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar12,lVar15,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar13,lVar12,0);
                                                    OptionsWindow__Aba__180689810(plVar2,0,0);
                                                    *(undefined1 *)((longlong)plVar2 + 0x89) = 1;
                                                    puVar8 = (undefined1 *)
                                                             (**(code **)(*plStackX_20 + 0x1c8))
                                                                       (plVar2,1,*(undefined8 *)
                                                                                  (*plStackX_20 +
                                                                                  0x1d0));
                                                    goto code_r0x0001806b840f;
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
code_r0x0001806b84c0:
  FUN_1803155d0();
code_r0x0001806b84c6:
  FUN_1803155d0();
code_r0x0001806b84cc:
  FUN_1803155d0();
code_r0x0001806b84d1:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  uVar19 = (*pcVar3)();
  return uVar19;
}

