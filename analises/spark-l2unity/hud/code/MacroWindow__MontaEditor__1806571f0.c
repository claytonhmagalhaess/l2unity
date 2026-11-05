// MacroWindow__MontaEditor__1806571f0 @ 0x1806571f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__MontaEditor__1806571f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int aiStackX_8 [2];
  longlong lStackX_10;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [80];
  
  lStackX_10 = param_2;
  if (cRam00000001834b3d69 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add);
    FUN_180315380(MD_MacroWindow.Grava);
    FUN_180315380(MD_MacroWindow.VoltaParaLista);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Name'");
    FUN_180315380(LIT_"'Short'");
    FUN_180315380(LIT_"'Info'");
    FUN_180315380(LIT_"'Cancel'");
    FUN_180315380(LIT_"'Save'");
    FUN_180315380(LIT_"'Drag a skill, action or item (from its window or the sho...");
    cRam00000001834b3d69 = '\x01';
  }
  aiStackX_8[0] = 0;
  uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  func_0x000180314690(param_1 + 0xb0,uVar5);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    uVar5 = func_0x000182601c10(0x3f800000,0);
    if (lVar6 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        plVar7 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
        puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_f8,0,0);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = *plVar7;
          uVar5 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                          0x57) * 0x10 + 0x138 + lVar6);
                goto code_r0x000180657429;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180657429:
          uStack_108 = uVar5;
          uStack_100 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
          lVar6 = *(longlong *)(param_1 + 0xb0);
          uVar5 = SparkUI__Campo(0x10,0);
          *(undefined8 *)(param_1 + 200) = uVar5;
          func_0x000180314690(param_1 + 200,uVar5);
          uVar5 = MacroWindow__Rotulado(LIT_"'Name'",uVar5,0);
          if (lVar6 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
            lVar6 = *(longlong *)(param_1 + 0xb0);
            uVar5 = SparkUI__Campo(4,0);
            *(undefined8 *)(param_1 + 0xd0) = uVar5;
            func_0x000180314690(param_1 + 0xd0,uVar5);
            uVar5 = MacroWindow__Rotulado(LIT_"'Short'",uVar5,0);
            if (lVar6 != 0) {
              UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
              lVar6 = *(longlong *)(param_1 + 0xb0);
              uVar5 = SparkUI__Campo(0x20,0);
              *(undefined8 *)(param_1 + 0xd8) = uVar5;
              func_0x000180314690(param_1 + 0xd8,uVar5);
              uVar5 = MacroWindow__Rotulado(LIT_"'Info'",uVar5,0);
              if (lVar6 != 0) {
                UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
                uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
                *(undefined8 *)(param_1 + 0xc0) = uVar5;
                func_0x000180314690(param_1 + 0xc0,uVar5);
                if (*(longlong *)(param_1 + 0xc0) != 0) {
                  lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xc0),0);
                  uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                  if (lVar6 != 0) {
                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                      plVar7 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(param_1 + 0xc0),0);
                      puVar8 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_f8,0x40c00000,0);
                      if (plVar7 != (longlong *)0x0) {
                        lVar6 = *plVar7;
                        uVar5 = *puVar8;
                        uVar1 = *(undefined4 *)(puVar8 + 1);
                        if (*(ushort *)(lVar6 + 0x12e) != 0) {
                          uVar12 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                 (ulonglong)uVar12 * 0x10) + 0x51) * 0x10 + 0x138 +
                                       lVar6);
                              goto code_r0x000180657649;
                            }
                            uVar12 = uVar12 + 1;
                          } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180657649:
                        uStack_108 = uVar5;
                        uStack_100 = uVar1;
                        (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
                        if (*(longlong *)(param_1 + 0xc0) != 0) {
                          lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xc0),0);
                          uVar5 = func_0x000182601c10(0,0);
                          if (lVar6 != 0) {
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                            if (*(longlong *)(param_1 + 0xb0) != 0) {
                              UnityEngine_UIElements_VisualElement__Add
                                        (*(longlong *)(param_1 + 0xb0),
                                         *(undefined8 *)(param_1 + 0xc0),0);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              lVar6 = SparkEstilo__Lista__1807211b0(0);
                              if (lVar6 != 0) {
                                lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                uVar5 = func_0x000182601c10(0x3f800000,0);
                                if (lVar9 != 0) {
                                  FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                  lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                  uVar5 = func_0x000182601c10(0x3f800000,0);
                                  if (lVar9 != 0) {
                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                    plVar7 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar6,0);
                                    puVar8 = (undefined8 *)
                                             UnityEngine_UIElements_StyleLength__op_Implicit
                                                       (&uStack_f8,0,0);
                                    if (plVar7 != (longlong *)0x0) {
                                      lVar9 = *plVar7;
                                      uVar5 = *puVar8;
                                      uVar1 = *(undefined4 *)(puVar8 + 1);
                                      if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                        uVar12 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar9 + 0xb0) +
                                               (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar8 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                               (ulonglong)uVar12 * 0x10) + 0x37) *
                                                      0x10 + 0x138 + lVar9);
                                            goto code_r0x0001806577d9;
                                          }
                                          uVar12 = uVar12 + 1;
                                        } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                                      }
                                      puVar8 = (undefined8 *)
                                               FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x0001806577d9:
                                      uStack_108 = uVar5;
                                      uStack_100 = uVar1;
                                      (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
                                      plVar7 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar6,0);
                                      puVar8 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_f8,0,0);
                                      if (plVar7 != (longlong *)0x0) {
                                        lVar9 = *plVar7;
                                        uVar5 = *puVar8;
                                        uVar1 = *(undefined4 *)(puVar8 + 1);
                                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                          uVar12 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar9 + 0xb0) +
                                                 (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar8 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                                 (ulonglong)uVar12 * 0x10) + 0x57) *
                                                        0x10 + 0x138 + lVar9);
                                              goto code_r0x000180657869;
                                            }
                                            uVar12 = uVar12 + 1;
                                          } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180657869:
                                        uStack_108 = uVar5;
                                        uStack_100 = uVar1;
                                        (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
                                        plVar7 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar6,0);
                                        puVar8 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_f8,0x40c00000,0);
                                        if (plVar7 != (longlong *)0x0) {
                                          lVar9 = *plVar7;
                                          uVar15 = 0;
                                          uVar5 = *puVar8;
                                          uVar1 = *(undefined4 *)(puVar8 + 1);
                                          if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                            uVar13 = uVar15;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar9 + 0xb0) + uVar13 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar8 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8
                                                                   + uVar13 * 0x10) + 0x51) * 0x10 +
                                                          0x138 + lVar9);
                                                goto code_r0x000180657929;
                                              }
                                              uVar12 = (short)uVar13 + 1;
                                              uVar13 = (ulonglong)uVar12;
                                            } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                                          }
                                          puVar8 = (undefined8 *)
                                                   FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180657929:
                                          uStack_108 = uVar5;
                                          uStack_100 = uVar1;
                                          (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
                                          do {
                                            uVar13 = 0;
                                            lVar9 = SparkUI__Campo(100,0);
                                            MacroWindow__Escuro(lVar9,0);
                                            if (lVar9 == 0) {
code_r0x000180658487:
                                              FUN_1803155d0();
                                              pcVar4 = (code *)swi(3);
                                              (*pcVar4)();
                                              return;
                                            }
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar9,0);
                                            puVar8 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (auStack_88,0x40000000,0);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar10 = *plVar7;
                                            uVar5 = *puVar8;
                                            uVar1 = *(undefined4 *)(puVar8 + 1);
                                            if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                              uVar14 = uVar13;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar10 + 0xb0) + uVar14 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar10 + 0xb0) +
                                                                      8 + uVar14 * 0x10) + 0x4b) *
                                                            0x10 + 0x138 + lVar10);
                                                  goto code_r0x000180657aa9;
                                                }
                                                uVar12 = (short)uVar14 + 1;
                                                uVar14 = (ulonglong)uVar12;
                                              } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180657aa9:
                                            uStack_108 = uVar5;
                                            uStack_100 = uVar1;
                                            (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
                                            lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                            UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
                                            if (lVar10 == 0) goto code_r0x000180658487;
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar10,0);
                                            uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar11 = *plVar7;
                                            if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                              uVar14 = uVar13;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar11 + 0xb0) +
                                                                      8 + uVar14 * 0x10) + 0x39) *
                                                            0x10 + 0x138 + lVar11);
                                                  goto code_r0x000180657b59;
                                                }
                                                uVar12 = (short)uVar14 + 1;
                                                uVar14 = (ulonglong)uVar12;
                                              } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x000180657b59:
                                            (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar10,0);
                                            uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar11 = *plVar7;
                                            if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                              uVar14 = uVar13;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar11 + 0xb0) +
                                                                      8 + uVar14 * 0x10) + 3) * 0x10
                                                            + 0x138 + lVar11);
                                                  goto code_r0x000180657bd9;
                                                }
                                                uVar12 = (short)uVar14 + 1;
                                                uVar14 = (ulonglong)uVar12;
                                              } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,3);
code_r0x000180657bd9:
                                            (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar10,0);
                                            uVar5 = func_0x000182601c10(0,0);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar11 = *plVar7;
                                            if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar11 + 0xb0) + uVar13 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar11 + 0xb0) +
                                                                      8 + uVar13 * 0x10) + 0x3d) *
                                                            0x10 + 0x138 + lVar11);
                                                  goto code_r0x000180657c59;
                                                }
                                                uVar12 = (short)uVar13 + 1;
                                                uVar13 = (ulonglong)uVar12;
                                              } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x000180657c59:
                                            (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
                                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            uStack_c8 = 0;
                                            uStack_c0 = 0;
                                            SparkEstilo__Borda__18071da60
                                                      (lVar10,&uStack_c8,0x3f800000,0,0);
                                            aiStackX_8[0] = (int)uVar15 + 1;
                                            uVar5 = System_Int32__ToString(aiStackX_8,0);
                                            uStack_c8 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x50);
                                            uStack_c0 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x58);
                                            uStack_d8 = 0;
                                            uStack_e8 = 0;
                                            uStack_e0 = 0;
                                            func_0x000180cb7cb0(&uStack_e8,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor
                                                               );
                                            uStack_a8 = uStack_d8;
                                            uStack_b8 = (undefined4)uStack_e8;
                                            uStack_b4 = uStack_e8._4_4_;
                                            uStack_b0 = (undefined4)uStack_e0;
                                            uStack_ac = uStack_e0._4_4_;
                                            lVar11 = SparkEstilo__Texto__180722af0
                                                               (uVar5,10,&uStack_b8,0,0);
                                            if (lVar11 == 0) goto code_r0x000180658487;
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar11,0);
                                            puVar8 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (auStack_98,0x41900000,0);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar2 = *plVar7;
                                            uVar5 = *puVar8;
                                            uVar1 = *(undefined4 *)(puVar8 + 1);
                                            if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                              uVar12 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar2 + 0xb0) +
                                                     (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar2 + 0xb0) +
                                                                      8 + (ulonglong)uVar12 * 0x10)
                                                            + 0xad) * 0x10 + 0x138 + lVar2);
                                                  goto code_r0x000180657da9;
                                                }
                                                uVar12 = uVar12 + 1;
                                              } while (uVar12 < *(ushort *)(lVar2 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180657da9:
                                            uStack_f8 = uVar5;
                                            uStack_f0 = uVar1;
                                            (*(code *)*puVar8)(plVar7,&uStack_f8,puVar8[1]);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar10,lVar11,0);
                                            plVar7 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar9,0);
                                            uVar5 = func_0x000182601c10(0x3f800000,0);
                                            if (plVar7 == (longlong *)0x0)
                                            goto code_r0x000180658487;
                                            lVar11 = *plVar7;
                                            if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                              uVar12 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar11 + 0xb0) +
                                                     (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar11 + 0xb0) +
                                                                      8 + (ulonglong)uVar12 * 0x10)
                                                            + 0x3b) * 0x10 + 0x138 + lVar11);
                                                  goto code_r0x000180657e49;
                                                }
                                                uVar12 = uVar12 + 1;
                                              } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x3b);
code_r0x000180657e49:
                                            (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar10,lVar9,0);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar6,lVar10,0);
                                            lVar2 = MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.Add;
                                            lVar11 = *(longlong *)(param_1 + 0xe0);
                                            if (lVar11 == 0) goto code_r0x000180658487;
                                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                            lVar3 = *(longlong *)(lVar11 + 0x10);
                                            if (lVar3 == 0) goto code_r0x000180658487;
                                            uVar16 = *(uint *)(lVar11 + 0x18);
                                            if (uVar16 < *(uint *)(lVar3 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar16 + 1;
                                              if (*(uint *)(lVar3 + 0x18) <= uVar16)
                                              goto code_r0x000180658481;
                                              *(longlong *)
                                               (lVar3 + 0x20 + (longlong)(int)uVar16 * 8) = lVar9;
                                              func_0x000180314690(lVar3 + 0x20 +
                                                                  (longlong)(int)uVar16 * 8,lVar9);
                                            }
                                            else {
                                              FUN_181645af0(lVar11,lVar9,
                                                            *(undefined8 *)
                                                             (*(longlong *)
                                                               (*(longlong *)(lVar2 + 0x20) + 0xc0)
                                                             + 0x70));
                                            }
                                            lVar9 = *(longlong *)(param_1 + 0xe8);
                                            if (lVar9 == 0) goto code_r0x000180658487;
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            lVar11 = *(longlong *)(lVar9 + 0x10);
                                            if (lVar11 == 0) goto code_r0x000180658487;
                                            uVar16 = *(uint *)(lVar9 + 0x18);
                                            if (uVar16 < *(uint *)(lVar11 + 0x18)) {
                                              *(uint *)(lVar9 + 0x18) = uVar16 + 1;
                                              if (*(uint *)(lVar11 + 0x18) <= uVar16) {
code_r0x000180658481:
                                                FUN_1803155c0();
                                                pcVar4 = (code *)swi(3);
                                                (*pcVar4)();
                                                return;
                                              }
                                              *(longlong *)
                                               (lVar11 + 0x20 + (longlong)(int)uVar16 * 8) = lVar10;
                                              func_0x000180314690(lVar11 + 0x20 +
                                                                  (longlong)(int)uVar16 * 8);
                                            }
                                            else {
                                              FUN_181645af0();
                                            }
                                            uVar16 = (int)uVar15 + 1;
                                            uVar15 = (ulonglong)uVar16;
                                          } while ((int)uVar16 < 0xc);
                                          *(longlong *)(param_1 + 0xf0) = lVar6;
                                          func_0x000180314690(param_1 + 0xf0,lVar6);
                                          if (*(longlong *)(param_1 + 0xb0) != 0) {
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (*(longlong *)(param_1 + 0xb0),lVar6,0);
                                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                              func_0x000180315660(TI_SparkEstilo);
                                            }
                                            uStack_c8 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x50);
                                            uStack_c0 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x58);
                                            uStack_e8 = 0;
                                            uStack_e0 = 0;
                                            uStack_d8 = 0;
                                            func_0x000180cb7cb0(&uStack_e8,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor
                                                               );
                                            uVar15 = 0;
                                            uStack_b8 = (undefined4)uStack_e8;
                                            uStack_b4 = uStack_e8._4_4_;
                                            uStack_b0 = (undefined4)uStack_e0;
                                            uStack_ac = uStack_e0._4_4_;
                                            uStack_a8 = uStack_d8;
                                            lVar6 = SparkEstilo__Texto__180722af0
                                                              (LIT_"'Drag a skill, action or item (from its window or the sho...",9,&uStack_b8,0,0
                                                              );
                                            if (lVar6 != 0) {
                                              lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                              uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                              if (lVar9 != 0) {
                                                FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                                lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                uVar5 = func_0x000182601c10(0,0);
                                                if (lVar9 != 0) {
                                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                                  plVar7 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (auStack_98,0x40800000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar1 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar13 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar13 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x0001806581e9;
                                                        }
                                                        uVar12 = (short)uVar13 + 1;
                                                        uVar13 = (ulonglong)uVar12;
                                                      } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001806581e9:
                                                    uStack_f8 = uVar5;
                                                    uStack_f0 = uVar1;
                                                    (*(code *)*puVar8)(plVar7,&uStack_f8,puVar8[1]);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb0),lVar6
                                                                 ,0);
                                                      lVar6 = MacroWindow__Fileira(0);
                                                      uVar5 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar5,param_1,
                                                                    MD_MacroWindow.VoltaParaLista,0);
                                                      uVar5 = SparkEstilo__Botao__18071e130
                                                                        (LIT_"'Cancel'",uVar5,
                                                                         0x50,0,0);
                                                      if (lVar6 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar6,uVar5,0);
                                                        lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                        UnityEngine_UIElements_VisualElement___ctor
                                                                  (lVar9,0);
                                                        if (lVar9 != 0) {
                                                          plVar7 = (longlong *)
                                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (auStack_98,0x40c00000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar1 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar15 * 0x10) + 0xad)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x000180658329;
                                                        }
                                                        uVar12 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar12;
                                                      } while (uVar12 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0xad);
code_r0x000180658329:
                                                    uStack_f8 = uVar5;
                                                    uStack_f0 = uVar1;
                                                    (*(code *)*puVar8)(plVar7,&uStack_f8,puVar8[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar6,lVar9,0);
                                                    uVar5 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar5,param_1,MD_MacroWindow.Grava
                                                                  ,0);
                                                    uVar5 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Save'",uVar5,
                                                                       0x5a,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar6,uVar5,0);
                                                    if ((*(longlong *)(param_1 + 0xb0) != 0) &&
                                                       (UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0xb0),
                                                                   lVar6,0), lStackX_10 != 0)) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lStackX_10,
                                                                 *(undefined8 *)(param_1 + 0xb0),0);
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
                                          FUN_1803155d0();
                                          pcVar4 = (code *)swi(3);
                                          (*pcVar4)();
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
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

