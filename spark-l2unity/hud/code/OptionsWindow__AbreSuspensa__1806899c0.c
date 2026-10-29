// OptionsWindow__AbreSuspensa__1806899c0 @ 0x1806899c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__AbreSuspensa__1806899c0
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4,undefined8 param_5
               )

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
  longlong *plVar14;
  ushort uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 auStackX_18 [2];
  uint uStackX_20;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar19;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 auStack_120 [2];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [112];
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uStackX_20 = param_4;
  if (cRam00000001834b3e9e == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_object__);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass65_0._AbreSuspensa_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass65_0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__2);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__3);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass65_1);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'abriu a lista ({0} opcoes, atual {1}) em {2:0},{3:0}'");
    FUN_180315380(LIT_"'Opcoes/ComboBox_DF_Dropmenu_Bg'");
    cRam00000001834b3e9e = '\x01';
  }
  uStack_138 = 0;
  uStack_130 = 0;
  lVar7 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass65_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_3;
    func_0x000180314690(lVar7 + 0x10,param_3);
    *(longlong *)(lVar7 + 0x20) = param_1;
    func_0x000180314690(lVar7 + 0x20,param_1);
    *(undefined8 *)(lVar7 + 0x28) = param_5;
    func_0x000180314690(lVar7 + 0x28);
    lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
    if (lVar8 != 0) {
      UnityEngine_UIElements_VisualElement__set_userData(lVar8,param_2,0);
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if ((lVar9 != 0) && (FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10), param_2 != 0)) {
        UnityEngine_UIElements_VisualElement__get_worldBound(&uStack_108,param_2,0);
        if (*(longlong *)(param_1 + 0x30) != 0) {
          UnityEngine_UIElements_VisualElement__get_worldBound
                    (&uStack_108,*(longlong *)(param_1 + 0x30),0);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar11 != (longlong *)0x0) {
            lVar9 = *plVar11;
            uVar10 = *puVar12;
            uVar1 = *(undefined4 *)(puVar12 + 1);
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                             0x47) * 0x10 + 0x138 + lVar9);
                  goto code_r0x000180689d27;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180689d27:
            uStack_158 = uVar10;
            uStack_150 = uVar1;
            (*(code *)*puVar12)(plVar11,&uStack_158,puVar12[1]);
            plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar11 != (longlong *)0x0) {
              lVar9 = *plVar11;
              uVar10 = *puVar12;
              uVar1 = *(undefined4 *)(puVar12 + 1);
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                               + 0x73) * 0x10 + 0x138 + lVar9);
                    goto code_r0x000180689dc9;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180689dc9:
              uStack_158 = uVar10;
              uStack_150 = uVar1;
              (*(code *)*puVar12)(plVar11,&uStack_158,puVar12[1]);
              plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
              puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar11 != (longlong *)0x0) {
                lVar9 = *plVar11;
                uVar10 = *puVar12;
                uVar1 = *(undefined4 *)(puVar12 + 1);
                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                  uVar15 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar12 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                          (ulonglong)uVar15 * 0x10) + 0xad) * 0x10 + 0x138 + lVar9);
                      goto code_r0x000180689e69;
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < *(ushort *)(lVar9 + 0x12e));
                }
                puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180689e69:
                uStack_158 = uVar10;
                uStack_150 = uVar1;
                (*(code *)*puVar12)(plVar11,&uStack_158,puVar12[1]);
                if (*(longlong *)(lVar7 + 0x10) != 0) {
                  fVar17 = (float)*(int *)(*(longlong *)(lVar7 + 0x10) + 0x18) * 18.0 + 4.0;
                  fVar18 = 220.0;
                  if (fVar17 <= 220.0) {
                    fVar18 = fVar17;
                  }
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar11 != (longlong *)0x0) {
                    lVar9 = *plVar11;
                    uVar10 = *puVar12;
                    uVar1 = *(undefined4 *)(puVar12 + 1);
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar15 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar15 * 0x10) + 0x43) * 0x10 + 0x138 +
                                    lVar9);
                          goto code_r0x000180689f49;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180689f49:
                    uStack_158 = uVar10;
                    uStack_150 = uVar1;
                    (*(code *)*puVar12)(plVar11,&uStack_158,puVar12[1]);
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                    if (lVar9 != 0) {
                      FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
                      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0)
                      ;
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar10 = SparkEstilo__Textura__180723790(LIT_"'Opcoes/ComboBox_DF_Dropmenu_Bg'",0);
                      puVar12 = (undefined8 *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&uStack_d8,uVar10,0);
                      if (plVar11 != (longlong *)0x0) {
                        lVar9 = *plVar11;
                        uVar3 = *puVar12;
                        uVar4 = puVar12[1];
                        uVar5 = puVar12[2];
                        uVar6 = puVar12[3];
                        uVar10 = puVar12[4];
                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                          uVar15 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar12 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                  (ulonglong)uVar15 * 0x10) + 0xb) * 0x10 + 0x138 +
                                        lVar9);
                              goto code_r0x00018068a049;
                            }
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < *(ushort *)(lVar9 + 0x12e));
                        }
                        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018068a049:
                        uStack_d8 = uVar3;
                        uStack_d0 = uVar4;
                        uStack_c8 = uVar5;
                        uStack_c0 = uVar6;
                        uStack_b8 = uVar10;
                        (*(code *)*puVar12)(plVar11,&uStack_d8,puVar12[1]);
                        SparkEstilo__Fatia__1807203e0(lVar8,3,3,3,CONCAT44(uVar19,3),0);
                        SparkEstilo__Espaco__18071fb80(lVar8);
                        uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                        UnityEngine_UIElements_VisualElement___ctor(uVar10,0);
                        *(undefined8 *)(lVar7 + 0x38) = uVar10;
                        func_0x000180314690(lVar7 + 0x38,uVar10);
                        UnityEngine_UIElements_VisualElement__Add
                                  (lVar8,*(undefined8 *)(lVar7 + 0x38),0);
                        uVar16 = 0;
                        *(undefined1 *)(lVar7 + 0x18) = 0;
                        while (lVar9 = *(longlong *)(lVar7 + 0x10), lVar9 != 0) {
                          if (*(int *)(lVar9 + 0x18) <= (int)uVar16) {
                            if (lVar9 == 0) goto code_r0x00018068aab7;
                            fVar17 = ((float)*(int *)(lVar9 + 0x18) * 18.0 + 4.0) - fVar18;
                            if (fVar17 < 0.0) {
                              fVar17 = 0.0;
                            }
                            *(float *)(lVar7 + 0x34) = fVar17;
                            fVar18 = (float)(int)param_4 * 18.0 - fVar18 * 0.5;
                            if (fVar18 < 0.0) {
                              fVar18 = 0.0;
                            }
                            else if (fVar17 < fVar18) {
                              fVar18 = fVar17;
                            }
                            *(float *)(lVar7 + 0x30) = fVar18;
                            if (*(longlong *)(lVar7 + 0x38) == 0) goto code_r0x00018068aab7;
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(lVar7 + 0x38),0);
                            puVar12 = (undefined8 *)
                                      UnityEngine_UIElements_StyleLength__op_Implicit();
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068aab7;
                            lVar9 = *plVar11;
                            uVar10 = *puVar12;
                            uVar19 = *(undefined4 *)(puVar12 + 1);
                            if (*(ushort *)(lVar9 + 0x12e) == 0) goto code_r0x00018068a638;
                            uVar15 = 0;
                            goto code_r0x00018068a620;
                          }
                          lVar9 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass65_1);
                          SparkMapaWindow_Loja___ctor__1803f01b0(lVar9,0);
                          if (lVar9 == 0) break;
                          *(longlong *)(lVar9 + 0x20) = lVar7;
                          func_0x000180314690(lVar9 + 0x20,lVar7);
                          *(uint *)(lVar9 + 0x18) = uVar16;
                          if ((*(longlong *)(lVar9 + 0x20) == 0) ||
                             (lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x10),
                             lVar13 == 0)) break;
                          if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                            FUN_1803155c0();
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          uVar10 = *(undefined8 *)(lVar13 + 0x20 + (longlong)(int)uVar16 * 8);
                          if (uVar16 == param_4) {
                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                              func_0x000180315660(TI_SparkEstilo);
                            }
                            uStack_108 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
                            uStack_100 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
                          }
                          else {
                            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                              func_0x000180315660(TI_OptionsWindow);
                            }
                            uStack_108 = *(undefined8 *)
                                          (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28);
                            uStack_100 = *(undefined8 *)
                                          (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30);
                          }
                          uStack_f8 = 0;
                          uStack_f0 = 0;
                          uStack_e8 = 0;
                          func_0x000180cb7cb0(&uStack_f8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uStack_c8 = CONCAT44(uStack_c8._4_4_,uStack_e8);
                          uStack_d8 = uStack_f8;
                          uStack_d0 = uStack_f0;
                          uVar10 = SparkEstilo__Texto__180722af0(uVar10,0xb,&uStack_d8,0,0);
                          *(undefined8 *)(lVar9 + 0x10) = uVar10;
                          func_0x000180314690(lVar9 + 0x10,uVar10);
                          if (*(longlong *)(lVar9 + 0x10) == 0) {
code_r0x00018068aa65:
                            FUN_1803155d0();
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar9 + 0x10),0);
                          puVar12 = (undefined8 *)
                                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          uStack_150 = *(undefined4 *)(puVar12 + 1);
                          uStack_158 = *puVar12;
                          FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_158);
                          if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x00018068aa65;
                          lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar9 + 0x10),0);
                          uVar10 = func_0x000182601c10();
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
                          if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x00018068aa65;
                          lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar9 + 0x10),0);
                          puVar12 = (undefined8 *)
                                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_118);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          uStack_140 = *(undefined4 *)(puVar12 + 1);
                          uStack_148 = *puVar12;
                          FUN_1800050f0(0x61,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_148);
                          if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x00018068aa65;
                          lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar9 + 0x10),0);
                          uVar10 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar10);
                          if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x00018068aa65;
                          UnityEngine_UIElements_VisualElement__set_pickingMode
                                    (*(longlong *)(lVar9 + 0x10),0,0);
                          lVar13 = *(longlong *)(lVar9 + 0x10);
                          uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                          FUN_18055b980(uVar10,lVar9,MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__1,0);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          FUN_180990d50(lVar13,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                          lVar13 = *(longlong *)(lVar9 + 0x10);
                          uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                          FUN_18055b980(uVar10,lVar9,MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__2,0);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          FUN_180990d50(lVar13,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                          lVar13 = *(longlong *)(lVar9 + 0x10);
                          uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                          FUN_18055b980(uVar10,lVar9,MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__3,0);
                          if (lVar13 == 0) goto code_r0x00018068aa65;
                          FUN_180990d50(lVar13,uVar10);
                          if ((*(longlong *)(lVar9 + 0x20) == 0) ||
                             (*(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x38) == 0))
                          goto code_r0x00018068aa65;
                          UnityEngine_UIElements_VisualElement__Add();
                          uVar16 = uVar16 + 1;
                          param_4 = uStackX_20;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
  while (uVar15 = uVar15 + 1, uVar15 < *(ushort *)(lVar9 + 0x12e)) {
code_r0x00018068a620:
    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar12 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0x73) *
                 0x10 + 0x138 + lVar9);
      goto code_r0x00018068a649;
    }
  }
code_r0x00018068a638:
  puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018068a649:
  uStack_148 = uVar10;
  uStack_140 = uVar19;
  (*(code *)*puVar12)(plVar11,&uStack_148,puVar12[1]);
  uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
  FUN_18055b980(uVar10,lVar7,MD_OptionsWindow.__c__DisplayClass65_0._AbreSuspensa_b__0,0);
  FUN_180990d50(lVar8,uVar10,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar8,0);
    *(longlong *)(param_1 + 0xd8) = lVar8;
    func_0x000180314690(param_1 + 0xd8,lVar8);
    plVar11 = (longlong *)func_0x000180314710(TI_object__,4);
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      auStackX_18[0] = *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 0x18);
      lVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
      if (plVar11 != (longlong *)0x0) {
        if ((lVar7 != 0) &&
           (lVar9 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar10 = func_0x000180314f80();
          FUN_180315590(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)plVar11[3] != 0) {
          plVar11[4] = lVar7;
          func_0x000180314690(plVar11 + 4,lVar7);
          uStack_128 = param_4;
          lVar7 = func_0x000180314670(_DAT_1834c6268,&uStack_128);
          if ((lVar7 != 0) &&
             (lVar9 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
            uVar10 = func_0x000180314f80();
            FUN_180315590(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (1 < *(uint *)(plVar11 + 3)) {
            plVar11[5] = lVar7;
            func_0x000180314690(plVar11 + 5,lVar7);
            plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            if (plVar14 == (longlong *)0x0) goto code_r0x00018068aab7;
            lVar7 = *plVar14;
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                             0x46) * 0x10 + 0x138 + lVar7);
                  goto code_r0x00018068a829;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x46);
code_r0x00018068a829:
            puVar12 = (undefined8 *)(*(code *)*puVar12)(auStack_118,plVar14,puVar12[1]);
            uStack_138 = *puVar12;
            uStack_130 = *(undefined4 *)(puVar12 + 1);
            uStack_158 = func_0x000182602770(&uStack_138,0);
            uStack_124 = (undefined4)uStack_158;
            lVar7 = func_0x000180314670(_DAT_1834c6298,&uStack_124);
            if ((lVar7 != 0) &&
               (lVar9 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
              uVar10 = func_0x000180314f80();
              FUN_180315590(uVar10,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (2 < *(uint *)(plVar11 + 3)) {
              plVar11[6] = lVar7;
              func_0x000180314690(plVar11 + 6,lVar7);
              plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
              if (plVar14 == (longlong *)0x0) goto code_r0x00018068aab7;
              lVar7 = *plVar14;
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                               + 0x72) * 0x10 + 0x138 + lVar7);
                    goto code_r0x00018068a939;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x72);
code_r0x00018068a939:
              puVar12 = (undefined8 *)(*(code *)*puVar12)(auStack_118,plVar14,puVar12[1]);
              uStack_138 = *puVar12;
              uStack_130 = *(undefined4 *)(puVar12 + 1);
              uStack_158 = func_0x000182602770(&uStack_138,0);
              auStack_120[0] = (undefined4)uStack_158;
              lVar7 = func_0x000180314670(_DAT_1834c6298,auStack_120);
              if ((lVar7 != 0) &&
                 (lVar8 = func_0x0001803146b0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
              {
                uVar10 = func_0x000180314f80();
                FUN_180315590(uVar10,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (3 < *(uint *)(plVar11 + 3)) {
                plVar11[7] = lVar7;
                func_0x000180314690(plVar11 + 7,lVar7);
                System_String__Format(LIT_"'abriu a lista ({0} opcoes, atual {1}) em {2:0},{3:0}'",plVar11,0);
                if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                  func_0x000180315660();
                }
                return;
              }
            }
          }
        }
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
code_r0x00018068aab7:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

