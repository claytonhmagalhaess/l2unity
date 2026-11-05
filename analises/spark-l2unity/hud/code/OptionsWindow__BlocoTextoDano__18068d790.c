// OptionsWindow__BlocoTextoDano__18068d790 @ 0x18068d790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__BlocoTextoDano__18068d790(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ushort uVar16;
  ulonglong uVar18;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar19;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  ulonglong uVar17;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if (cRam00000001834b3e8a == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__2);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__3);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__4);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__5);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass45_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Over-hit'");
    FUN_180315380(LIT_"'Acquire SP'");
    FUN_180315380(LIT_"'Block'");
    FUN_180315380(LIT_"'Evasion'");
    FUN_180315380(LIT_"'Crit. Rate'");
    FUN_180315380(LIT_"'Immunity'");
    FUN_180315380(LIT_"'Recover HP'");
    FUN_180315380(LIT_"'Shows floating numbers and words over the characters, be...");
    FUN_180315380(LIT_"'Recovery Target'");
    FUN_180315380(LIT_"'Normal Damage'");
    FUN_180315380(LIT_"'Reset Settings'");
    FUN_180315380(LIT_"'Recover MP'");
    FUN_180315380(LIT_"'Servitor'");
    FUN_180315380(LIT_"'Resistance'");
    FUN_180315380(LIT_"'Player'");
    FUN_180315380(LIT_"'Attack Target'");
    FUN_180315380(LIT_"'All On'");
    FUN_180315380(LIT_"'DOT Damage'");
    FUN_180315380(LIT_"'Damage Text'");
    FUN_180315380(LIT_"'Acquire XP'");
    FUN_180315380(LIT_"'Opcoes/GroupBox_DF'");
    cRam00000001834b3e8a = '\x01';
  }
  lVar7 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass45_0);
  func_0x0001803f01b0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_1;
    func_0x000180314690(lVar7 + 0x10,param_1);
    lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
    if (lVar8 != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar10 = func_0x000182601c10(0,0);
      if (lVar9 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
        plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
        puVar12 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x40c00000,0);
        if (plVar11 != (longlong *)0x0) {
          lVar9 = *plVar11;
          uVar18 = 0;
          uVar10 = *puVar12;
          uVar1 = *(undefined4 *)(puVar12 + 1);
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar17 = uVar18;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10) + 0x4b) * 0x10
                           + 0x138 + lVar9);
                goto code_r0x00018068db29;
              }
              uVar16 = (short)uVar17 + 1;
              uVar17 = (ulonglong)uVar16;
            } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018068db29:
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar1);
          uStack_c8 = uVar10;
          (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar10 = SparkEstilo__Textura(LIT_"'Opcoes/GroupBox_DF'",0);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_c8,uVar10,0);
          if (plVar11 != (longlong *)0x0) {
            lVar9 = *plVar11;
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar10 = puVar12[4];
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar17 = uVar18;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar17 * 0x10) + 0xb) *
                             0x10 + 0x138 + lVar9);
                  goto code_r0x00018068dbe9;
                }
                uVar16 = (short)uVar17 + 1;
                uVar17 = (ulonglong)uVar16;
              } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018068dbe9:
            uStack_c8 = uVar3;
            uStack_c0 = uVar4;
            uStack_b8 = uVar5;
            uStack_b0 = uVar6;
            uStack_a8 = uVar10;
            (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
            SparkEstilo__Fatia(lVar8,3,3,3,CONCAT44(uVar19,3),0);
            SparkEstilo__Espaco(lVar8,0x40800000,0x41000000,0x40c00000,0x41000000,0);
            lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
            if (lVar9 != 0) {
              lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
              uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
              if (lVar13 != 0) {
                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
                lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                if (lVar13 != 0) {
                  FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                  puVar12 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x41c80000,0)
                  ;
                  if (plVar11 != (longlong *)0x0) {
                    lVar13 = *plVar11;
                    uVar10 = *puVar12;
                    uVar19 = *(undefined4 *)(puVar12 + 1);
                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                      uVar17 = uVar18;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar17 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar17 * 0x10) +
                                     0x43) * 0x10 + 0x138 + lVar13);
                          goto code_r0x00018068dd79;
                        }
                        uVar16 = (short)uVar17 + 1;
                        uVar17 = (ulonglong)uVar16;
                      } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068dd79:
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                    uStack_c8 = uVar10;
                    (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                    uVar10 = func_0x000182601c10(0,0);
                    if (lVar13 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
                      UnityEngine_UIElements_VisualElement__Add(lVar8,lVar9,0);
                      lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
                      if (lVar13 != 0) {
                        lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                        uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                        if (lVar14 != 0) {
                          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                          lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                          uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                          if (lVar14 != 0) {
                            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                            lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            uVar10 = func_0x000182601c10(0x3f800000,0);
                            if (lVar14 != 0) {
                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                              plVar11 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                              puVar12 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (&uStack_c8,0x41c80000,0);
                              if (plVar11 != (longlong *)0x0) {
                                lVar14 = *plVar11;
                                uVar10 = *puVar12;
                                uVar19 = *(undefined4 *)(puVar12 + 1);
                                if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                  uVar17 = uVar18;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar12 = (undefined8 *)
                                                ((longlong)
                                                 (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                          uVar17 * 0x10) + 0x43) * 0x10 + 0x138 +
                                                lVar14);
                                      goto code_r0x00018068df29;
                                    }
                                    uVar16 = (short)uVar17 + 1;
                                    uVar17 = (ulonglong)uVar16;
                                  } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                }
                                puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068df29:
                                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                uStack_c8 = uVar10;
                                (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                                uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                UnityEngine_UIElements_VisualElement___ctor(uVar10,0);
                                *(undefined8 *)(lVar7 + 0x18) = uVar10;
                                func_0x000180314690(lVar7 + 0x18,uVar10);
                                if (*(longlong *)(lVar7 + 0x18) != 0) {
                                  plVar11 = (longlong *)
                                            UnityEngine_UIElements_VisualElement__get_style
                                                      (*(longlong *)(lVar7 + 0x18),0);
                                  if (*(longlong *)(lVar7 + 0x18) != 0) {
                                    plVar15 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (*(longlong *)(lVar7 + 0x18),0);
                                    puVar12 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit
                                                        (&uStack_c8,0x41600000,0);
                                    if (plVar15 != (longlong *)0x0) {
                                      lVar14 = *plVar15;
                                      uVar10 = *puVar12;
                                      uVar19 = *(undefined4 *)(puVar12 + 1);
                                      if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                        uVar16 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar14 + 0xb0) +
                                               (ulonglong)uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar12 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                                                (ulonglong)uVar16 * 0x10) + 0x43) *
                                                       0x10 + 0x138 + lVar14);
                                            goto code_r0x00018068e009;
                                          }
                                          uVar16 = uVar16 + 1;
                                        } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                      }
                                      puVar12 = (undefined8 *)
                                                FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068e009:
                                      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                      uStack_c8 = uVar10;
                                      (*(code *)*puVar12)(plVar15,&uStack_c8,puVar12[1]);
                                      if (plVar11 != (longlong *)0x0) {
                                        lVar14 = *plVar11;
                                        if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                          uVar17 = uVar18;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar12 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8
                                                                  + uVar17 * 0x10) + 0xad) * 0x10 +
                                                         0x138 + lVar14);
                                              goto code_r0x00018068e079;
                                            }
                                            uVar16 = (short)uVar17 + 1;
                                            uVar17 = (ulonglong)uVar16;
                                          } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                        }
                                        puVar12 = (undefined8 *)
                                                  FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018068e079:
                                        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                        uStack_c8 = uVar10;
                                        (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                                        if (*(longlong *)(lVar7 + 0x18) != 0) {
                                          plVar11 = (longlong *)
                                                    UnityEngine_UIElements_VisualElement__get_style
                                                              (*(longlong *)(lVar7 + 0x18),0);
                                          puVar12 = (undefined8 *)
                                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                                              (&uStack_c8,0x40c00000,0);
                                          if (plVar11 != (longlong *)0x0) {
                                            lVar14 = *plVar11;
                                            uVar10 = *puVar12;
                                            uVar19 = *(undefined4 *)(puVar12 + 1);
                                            if (*(ushort *)(lVar14 + 0x12e) != 0) {
                                              uVar17 = uVar18;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar12 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar14 + 0xb0)
                                                                       + 8 + uVar17 * 0x10) + 0x4f)
                                                             * 0x10 + 0x138 + lVar14);
                                                  goto code_r0x00018068e119;
                                                }
                                                uVar16 = (short)uVar17 + 1;
                                                uVar17 = (ulonglong)uVar16;
                                              } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
                                            }
                                            puVar12 = (undefined8 *)
                                                      FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018068e119:
                                            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                            uStack_c8 = uVar10;
                                            (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                                            if (*(longlong *)(lVar7 + 0x18) != 0) {
                                              lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar7 + 0x18),0);
                                              uVar10 = func_0x000182601c10(0,0);
                                              if (lVar14 != 0) {
                                                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar13,*(undefined8 *)(lVar7 + 0x18),0);
                                                if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                                  func_0x000180315660(TI_OptionsWindow);
                                                }
                                                uStack_c8 = *(undefined8 *)
                                                             (*(longlong *)
                                                               (TI_OptionsWindow + 0xb8) + 0x18)
                                                ;
                                                uStack_c0 = *(undefined8 *)
                                                             (*(longlong *)
                                                               (TI_OptionsWindow + 0xb8) + 0x20)
                                                ;
                                                uStack_98 = 0;
                                                uStack_90 = 0;
                                                uStack_88 = 0;
                                                func_0x000180cb7cb0(&uStack_98,&uStack_c8,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_c8 = uStack_98;
                                                uStack_c0 = uStack_90;
                                                uStack_b8 = CONCAT44(uStack_b8._4_4_,uStack_88);
                                                uVar10 = SparkEstilo__Texto(LIT_"'Damage Text'",0xb
                                                                            ,&uStack_c8,1,0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar13,uVar10,0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar9,lVar13,0);
                                                uVar10 = func_0x000180315580(TI_System.Action);
                                                FUN_1816a9c60(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__0,0);
                                                uVar10 = SparkEstilo__Botao(LIT_"'All On'",
                                                                            uVar10,0x50,0,0);
                                                *(undefined8 *)(lVar7 + 0x30) = uVar10;
                                                func_0x000180314690(lVar7 + 0x30,uVar10);
                                                if (*(longlong *)(lVar7 + 0x30) != 0) {
                                                  lVar14 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar7 + 0x30),0);
                                                  uVar10 = func_0x000182601c10(0,0);
                                                  if (lVar14 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar14,uVar10)
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,*(undefined8 *)(lVar7 + 0x30),0
                                                              );
                                                    uVar10 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.VisualElement);
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (uVar10,0);
                                                  *(undefined8 *)(lVar7 + 0x28) = uVar10;
                                                  func_0x000180314690(lVar7 + 0x28,uVar10);
                                                  if (*(longlong *)(lVar7 + 0x28) != 0) {
                                                    lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar7 + 0x28),0);
                                                  uVar10 = func_0x000182601c10(0,0);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                                                    if (*(longlong *)(lVar7 + 0x28) != 0) {
                                                      plVar11 = (longlong *)
                                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar7 + 0x28),0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0x40800000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar9 = *plVar11;
                                                    uVar10 = *puVar12;
                                                    uVar19 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar17 = uVar18;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar9 + 0xb0) + 8 +
                                                                              uVar17 * 0x10) + 0x51)
                                                                     * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018068e3a9;
                                                        }
                                                        uVar16 = (short)uVar17 + 1;
                                                        uVar17 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x51);
code_r0x00018068e3a9:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                                    uStack_c8 = uVar10;
                                                    (*(code *)*puVar12)(plVar11,&uStack_c8,
                                                                        puVar12[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar8,*(undefined8 *)(lVar7 + 0x28),0
                                                              );
                                                    *(undefined2 *)(lVar7 + 0x20) = 0;
                                                    uVar10 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                  FUN_18055b980(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__2,0)
                                                  ;
                                                  FUN_180990d50(lVar13,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>
                                                               );
                                                  uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>)
                                                  ;
                                                  FUN_18055b980(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__3,0)
                                                  ;
                                                  FUN_180990d50(lVar13,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>
                                                               );
                                                  uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>)
                                                  ;
                                                  FUN_18055b980(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__4,0)
                                                  ;
                                                  FUN_180990d50(lVar13,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>
                                                               );
                                                  OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_g__Pinta_1__1806c1340
                                                            (lVar7,0);
                                                  lVar9 = *(longlong *)(lVar7 + 0x28);
                                                  lVar13 = func_0x000180314710(TI_string__,0xb);
                                                  if (lVar13 != 0) {
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           LIT_"'Recover HP'";
                                                      func_0x000180314690(lVar13 + 0x20);
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             LIT_"'Recover MP'";
                                                        func_0x000180314690(lVar13 + 0x28);
                                                        if (2 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x30) =
                                                               LIT_"'Acquire XP'";
                                                          func_0x000180314690(lVar13 + 0x30);
                                                          if (3 < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x38) =
                                                                 LIT_"'Acquire SP'";
                                                            func_0x000180314690(lVar13 + 0x38);
                                                            if (4 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x40) =
                                                                   LIT_"'Normal Damage'";
                                                              func_0x000180314690(lVar13 + 0x40);
                                                              if (5 < *(uint *)(lVar13 + 0x18)) {
                                                                *(undefined8 *)(lVar13 + 0x48) =
                                                                     LIT_"'DOT Damage'";
                                                                func_0x000180314690(lVar13 + 0x48);
                                                                if (6 < *(uint *)(lVar13 + 0x18)) {
                                                                  *(undefined8 *)(lVar13 + 0x50) =
                                                                       LIT_"'Crit. Rate'";
                                                                  func_0x000180314690(lVar13 + 0x50)
                                                                  ;
                                                                  if (7 < *(uint *)(lVar13 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar13 + 0x58) =
                                                                         LIT_"'Immunity'";
                                                                    func_0x000180314690(lVar13 + 
                                                  0x58);
                                                  if (8 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x60) =
                                                         LIT_"'Resistance'";
                                                    func_0x000180314690(lVar13 + 0x60);
                                                    if (9 < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x68) =
                                                           LIT_"'Block'";
                                                      func_0x000180314690(lVar13 + 0x68);
                                                      if (10 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x70) =
                                                             LIT_"'Evasion'";
                                                        func_0x000180314690(lVar13 + 0x70);
                                                        uVar10 = 
                                                  OptionsWindow__GrupoTextoDano__180693b40
                                                            (param_1,LIT_"'Player'",0,lVar13,0
                                                            );
                                                  if (lVar9 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar10,0);
                                                    lVar9 = *(longlong *)(lVar7 + 0x28);
                                                    lVar13 = func_0x000180314710(TI_string__,8);
                                                    if (lVar13 != 0) {
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             LIT_"'Normal Damage'";
                                                        func_0x000180314690(lVar13 + 0x20);
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               LIT_"'DOT Damage'";
                                                          func_0x000180314690(lVar13 + 0x28);
                                                          if (2 < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x30) =
                                                                 LIT_"'Crit. Rate'";
                                                            func_0x000180314690(lVar13 + 0x30);
                                                            if (3 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x38) =
                                                                   LIT_"'Over-hit'";
                                                              func_0x000180314690(lVar13 + 0x38);
                                                              if (4 < *(uint *)(lVar13 + 0x18)) {
                                                                *(undefined8 *)(lVar13 + 0x40) =
                                                                     LIT_"'Immunity'";
                                                                func_0x000180314690(lVar13 + 0x40);
                                                                if (5 < *(uint *)(lVar13 + 0x18)) {
                                                                  *(undefined8 *)(lVar13 + 0x48) =
                                                                       LIT_"'Resistance'";
                                                                  func_0x000180314690(lVar13 + 0x48)
                                                                  ;
                                                                  if (6 < *(uint *)(lVar13 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                                         LIT_"'Block'";
                                                                    func_0x000180314690(lVar13 + 
                                                  0x50);
                                                  if (7 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x58) =
                                                         LIT_"'Evasion'";
                                                    func_0x000180314690(lVar13 + 0x58);
                                                    uVar10 = 
                                                  OptionsWindow__GrupoTextoDano__180693b40
                                                            (param_1,LIT_"'Attack Target'",0xb,lVar13
                                                             ,0);
                                                  if (lVar9 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar10,0);
                                                    lVar9 = *(longlong *)(lVar7 + 0x28);
                                                    lVar13 = func_0x000180314710(TI_string__,4);
                                                    if (lVar13 != 0) {
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             LIT_"'Recover HP'";
                                                        func_0x000180314690(lVar13 + 0x20);
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               LIT_"'Recover MP'";
                                                          func_0x000180314690(lVar13 + 0x28);
                                                          if (2 < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x30) =
                                                                 LIT_"'Crit. Rate'";
                                                            func_0x000180314690(lVar13 + 0x30);
                                                            if (3 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x38) =
                                                                   LIT_"'Immunity'";
                                                              func_0x000180314690(lVar13 + 0x38);
                                                              uVar10 = 
                                                  OptionsWindow__GrupoTextoDano__180693b40
                                                            (param_1,LIT_"'Recovery Target'",0x13,
                                                             lVar13,0);
                                                  if (lVar9 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar10,0);
                                                    lVar9 = *(longlong *)(lVar7 + 0x28);
                                                    lVar13 = func_0x000180314710(TI_string__,9);
                                                    if (lVar13 != 0) {
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             LIT_"'Recover HP'";
                                                        func_0x000180314690(lVar13 + 0x20);
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               LIT_"'Recover MP'";
                                                          func_0x000180314690(lVar13 + 0x28);
                                                          if (2 < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x30) =
                                                                 LIT_"'Acquire XP'";
                                                            func_0x000180314690(lVar13 + 0x30);
                                                            if (3 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x38) =
                                                                   LIT_"'Normal Damage'";
                                                              func_0x000180314690(lVar13 + 0x38);
                                                              if (4 < *(uint *)(lVar13 + 0x18)) {
                                                                *(undefined8 *)(lVar13 + 0x40) =
                                                                     LIT_"'DOT Damage'";
                                                                func_0x000180314690(lVar13 + 0x40);
                                                                if (5 < *(uint *)(lVar13 + 0x18)) {
                                                                  *(undefined8 *)(lVar13 + 0x48) =
                                                                       LIT_"'Crit. Rate'";
                                                                  func_0x000180314690(lVar13 + 0x48)
                                                                  ;
                                                                  if (6 < *(uint *)(lVar13 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                                         LIT_"'Immunity'";
                                                                    func_0x000180314690(lVar13 + 
                                                  0x50);
                                                  if (7 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x58) =
                                                         LIT_"'Resistance'";
                                                    func_0x000180314690(lVar13 + 0x58);
                                                    if (8 < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x60) =
                                                           LIT_"'Evasion'";
                                                      func_0x000180314690(lVar13 + 0x60);
                                                      uVar10 = 
                                                  OptionsWindow__GrupoTextoDano__180693b40
                                                            (param_1,LIT_"'Servitor'",0x17,
                                                             lVar13,0);
                                                  if (lVar9 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar9,uVar10,0);
                                                    uStack_c8 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x50);
                                                    uStack_c0 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x58);
                                                    uStack_70 = 0;
                                                    uStack_80 = 0;
                                                    uStack_78 = 0;
                                                    func_0x000180cb7cb0(&uStack_80,&uStack_c8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_c8 = uStack_80;
                                                    uStack_c0 = uStack_78;
                                                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uStack_70);
                                                    lVar9 = SparkEstilo__Texto(LIT_"'Shows floating numbers and words over the characters, be...",
                                                                               9,&uStack_c8,0,0);
                                                    if (lVar9 != 0) {
                                                      lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar13 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10)
                                                    ;
                                                    lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar10 = func_0x000182601c10(0,0);
                                                  if (lVar13 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10)
                                                    ;
                                                    if (*(longlong *)(lVar7 + 0x28) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(lVar7 + 0x28),lVar9,0
                                                                );
                                                      lVar9 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.VisualElement);
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (lVar9,0);
                                                  if (lVar9 != 0) {
                                                    lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar13 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10)
                                                    ;
                                                    lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar13 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10)
                                                    ;
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar12 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0x40800000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar13 = *plVar11;
                                                    uVar10 = *puVar12;
                                                    uVar19 = *(undefined4 *)(puVar12 + 1);
                                                    if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar13 + 0xb0) +
                                                             uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar12 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar13 + 0xb0) + 8
                                                                              + uVar18 * 0x10) +
                                                                     0x51) * 0x10 + 0x138 + lVar13);
                                                          goto code_r0x00018068ebb9;
                                                        }
                                                        uVar16 = (short)uVar18 + 1;
                                                        uVar18 = (ulonglong)uVar16;
                                                      } while (uVar16 < *(ushort *)(lVar13 + 0x12e))
                                                      ;
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                            0x51);
code_r0x00018068ebb9:
                                                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
                                                    uStack_c8 = uVar10;
                                                    (*(code *)*puVar12)(plVar11,&uStack_c8,
                                                                        puVar12[1]);
                                                    lVar13 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar10 = func_0x000182601c10(0,0);
                                                  if (lVar13 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10)
                                                    ;
                                                    uVar10 = func_0x000180315580(
                                                  TI_System.Action);
                                                  FUN_1816a9c60(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass45_0._BlocoTextoDano_b__5,0)
                                                  ;
                                                  uVar10 = SparkEstilo__Botao(LIT_"'Reset Settings'",
                                                                              uVar10,0x86,0,0);
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar9,uVar10,0);
                                                  if (*(longlong *)(lVar7 + 0x28) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(lVar7 + 0x28),lVar9,0);
                                                    return lVar8;
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
                                                  goto code_r0x00018068edf0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_r0x00018068edf6;
                                                  }
                                                  }
                                                  goto code_r0x00018068edf0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_r0x00018068edf6;
                                                  }
                                                  }
                                                  goto code_r0x00018068edf0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_r0x00018068edf6;
                                                  }
                                                  }
                                                  goto code_r0x00018068edf0;
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
code_r0x00018068edf6:
                                                  FUN_1803155c0();
                                                  pcVar2 = (code *)swi(3);
                                                  lVar7 = (*pcVar2)();
                                                  return lVar7;
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
code_r0x00018068edf0:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar7 = (*pcVar2)();
  return lVar7;
}

