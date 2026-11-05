// OptionsWindow__Barra__18068bee0 @ 0x18068bee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Barra__18068bee0
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ushort uVar17;
  int iVar18;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar19;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  if (cRam00000001834b3ea1 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__3);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__4);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__5);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass70_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Opcoes/slider_mark'");
    FUN_180315380(LIT_"'Opcoes/slider_cursor'");
    FUN_180315380(LIT_"'Opcoes/slider_back'");
    cRam00000001834b3ea1 = '\x01';
  }
  lVar9 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass70_0);
  func_0x0001803f01b0(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x20) = param_2;
    func_0x000180314690(lVar9 + 0x20,param_2);
    *(undefined4 *)(lVar9 + 0x30) = param_5;
    *(undefined8 *)(lVar9 + 0x40) = param_3;
    func_0x000180314690(lVar9 + 0x40,param_3);
    lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
    if (lVar10 != 0) {
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar11 != (longlong *)0x0) {
        lVar13 = *plVar11;
        uVar14 = *puVar12;
        uVar1 = *(undefined4 *)(puVar12 + 1);
        if (*(ushort *)(lVar13 + 0x12e) != 0) {
          uVar17 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar12 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) +
                         0xad) * 0x10 + 0x138 + lVar13);
              goto code_r0x00018068c1b9;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
        }
        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018068c1b9:
        uStack_138 = uVar14;
        uStack_130 = uVar1;
        (*(code *)*puVar12)(plVar11,&uStack_138,puVar12[1]);
        lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
        uVar14 = func_0x000182601c10(0,0);
        if (lVar13 != 0) {
          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar14);
          uVar14 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(uVar14,0);
          *(undefined8 *)(lVar9 + 0x10) = uVar14;
          func_0x000180314690(lVar9 + 0x10,uVar14);
          if (*(longlong *)(lVar9 + 0x10) != 0) {
            plVar11 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar9 + 0x10),0)
            ;
            puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar11 != (longlong *)0x0) {
              lVar13 = *plVar11;
              uVar14 = *puVar12;
              uVar1 = *(undefined4 *)(puVar12 + 1);
              if (*(ushort *)(lVar13 + 0x12e) != 0) {
                uVar17 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10
                                        ) + 0x43) * 0x10 + 0x138 + lVar13);
                    goto code_r0x00018068c2b9;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068c2b9:
              uStack_138 = uVar14;
              uStack_130 = uVar1;
              (*(code *)*puVar12)(plVar11,&uStack_138,puVar12[1]);
              if (*(longlong *)(lVar9 + 0x10) != 0) {
                lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar9 + 0x10),0);
                uVar14 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                if (lVar13 != 0) {
                  FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar14);
                  UnityEngine_UIElements_VisualElement__Add(lVar10,*(undefined8 *)(lVar9 + 0x10),0);
                  lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
                  if (lVar13 != 0) {
                    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                    if (plVar11 != (longlong *)0x0) {
                      lVar15 = *plVar11;
                      uVar14 = *puVar12;
                      uVar1 = *(undefined4 *)(puVar12 + 1);
                      if (*(ushort *)(lVar15 + 0x12e) != 0) {
                        uVar17 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar12 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                (ulonglong)uVar17 * 0x10) + 0x43) * 0x10 + 0x138 +
                                      lVar15);
                            goto code_r0x00018068c3d9;
                          }
                          uVar17 = uVar17 + 1;
                        } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                      }
                      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068c3d9:
                      uStack_138 = uVar14;
                      uStack_130 = uVar1;
                      (*(code *)*puVar12)(plVar11,&uStack_138,puVar12[1]);
                      plVar11 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar14 = SparkEstilo__Textura(LIT_"'Opcoes/slider_back'",0);
                      puVar12 = (undefined8 *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&uStack_c8,uVar14,0);
                      if (plVar11 != (longlong *)0x0) {
                        lVar15 = *plVar11;
                        uVar16 = *puVar12;
                        uVar5 = puVar12[1];
                        uVar6 = puVar12[2];
                        uVar7 = puVar12[3];
                        uVar14 = puVar12[4];
                        if (*(ushort *)(lVar15 + 0x12e) != 0) {
                          uVar17 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar12 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                  (ulonglong)uVar17 * 0x10) + 0xb) * 0x10 + 0x138 +
                                        lVar15);
                              goto code_r0x00018068c499;
                            }
                            uVar17 = uVar17 + 1;
                          } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                        }
                        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018068c499:
                        uStack_128 = uVar16;
                        uStack_120 = uVar5;
                        uStack_118 = uVar6;
                        uStack_110 = uVar7;
                        uStack_108 = uVar14;
                        (*(code *)*puVar12)(plVar11,&uStack_128,puVar12[1]);
                        SparkEstilo__Fatia(lVar13,5,4,5,CONCAT44(uVar19,4),0);
                        UnityEngine_UIElements_VisualElement__set_pickingMode(lVar13,1,0);
                        if (*(longlong *)(lVar9 + 0x10) != 0) {
                          UnityEngine_UIElements_VisualElement__Add
                                    (*(longlong *)(lVar9 + 0x10),lVar13,0);
                          uVar14 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
                          FUN_180bba2e0(uVar14,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
                          *(undefined8 *)(lVar9 + 0x28) = uVar14;
                          func_0x000180314690(lVar9 + 0x28,uVar14);
                          for (iVar18 = 0;
                              (0 < *(int *)(lVar9 + 0x30) && (iVar18 <= *(int *)(lVar9 + 0x30)));
                              iVar18 = iVar18 + 1) {
                            lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
                            if (lVar13 == 0) goto code_r0x00018068d236;
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            uVar14 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068d236;
                            lVar15 = *plVar11;
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      (ulonglong)uVar17 * 0x10) + 0x67) * 0x10 +
                                             0x138 + lVar15);
                                  goto code_r0x00018068c609;
                                }
                                uVar17 = uVar17 + 1;
                              } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x00018068c609:
                            (*(code *)*puVar12)(plVar11,uVar14,puVar12[1]);
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            puVar12 = (undefined8 *)
                                      UnityEngine_UIElements_StyleLength__op_Implicit();
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068d236;
                            lVar15 = *plVar11;
                            uVar14 = *puVar12;
                            uVar19 = *(undefined4 *)(puVar12 + 1);
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      (ulonglong)uVar17 * 0x10) + 0xad) * 0x10 +
                                             0x138 + lVar15);
                                  goto code_r0x00018068c699;
                                }
                                uVar17 = uVar17 + 1;
                              } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018068c699:
                            uStack_138 = uVar14;
                            uStack_130 = uVar19;
                            (*(code *)*puVar12)(plVar11,&uStack_138,puVar12[1]);
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            puVar12 = (undefined8 *)
                                      UnityEngine_UIElements_StyleLength__op_Implicit();
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068d236;
                            lVar15 = *plVar11;
                            uVar14 = *puVar12;
                            uVar19 = *(undefined4 *)(puVar12 + 1);
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      (ulonglong)uVar17 * 0x10) + 0x43) * 0x10 +
                                             0x138 + lVar15);
                                  goto code_r0x00018068c739;
                                }
                                uVar17 = uVar17 + 1;
                              } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068c739:
                            uStack_98 = uVar14;
                            uStack_90 = uVar19;
                            (*(code *)*puVar12)(plVar11,&uStack_98,puVar12[1]);
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            puVar12 = (undefined8 *)
                                      UnityEngine_UIElements_StyleLength__op_Implicit();
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068d236;
                            lVar15 = *plVar11;
                            uVar14 = *puVar12;
                            uVar19 = *(undefined4 *)(puVar12 + 1);
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      (ulonglong)uVar17 * 0x10) + 0x73) * 0x10 +
                                             0x138 + lVar15);
                                  goto code_r0x00018068c7c9;
                                }
                                uVar17 = uVar17 + 1;
                              } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018068c7c9:
                            uStack_148 = uVar14;
                            uStack_140 = uVar19;
                            (*(code *)*puVar12)(plVar11,&uStack_148,puVar12[1]);
                            plVar11 = (longlong *)
                                      UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar14 = SparkEstilo__Textura(LIT_"'Opcoes/slider_mark'",0);
                            puVar12 = (undefined8 *)
                                      UnityEngine_UIElements_StyleBackground__op_Implicit
                                                (&uStack_c8,uVar14,0);
                            if (plVar11 == (longlong *)0x0) goto code_r0x00018068d236;
                            lVar15 = *plVar11;
                            uVar16 = *puVar12;
                            uVar5 = puVar12[1];
                            uVar6 = puVar12[2];
                            uVar7 = puVar12[3];
                            uVar14 = puVar12[4];
                            if (*(ushort *)(lVar15 + 0x12e) != 0) {
                              uVar17 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar12 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                      (ulonglong)uVar17 * 0x10) + 0xb) * 0x10 +
                                             0x138 + lVar15);
                                  goto code_r0x00018068c889;
                                }
                                uVar17 = uVar17 + 1;
                              } while (uVar17 < *(ushort *)(lVar15 + 0x12e));
                            }
                            puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018068c889:
                            uStack_c8 = uVar16;
                            uStack_c0 = uVar5;
                            uStack_b8 = uVar6;
                            uStack_b0 = uVar7;
                            uStack_a8 = uVar14;
                            (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar13,1,0);
                            lVar8 = MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add;
                            lVar15 = *(longlong *)(lVar9 + 0x28);
                            if (lVar15 == 0) goto code_r0x00018068d236;
                            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                            lVar3 = *(longlong *)(lVar15 + 0x10);
                            if (lVar3 == 0) goto code_r0x00018068d236;
                            uVar2 = *(uint *)(lVar15 + 0x18);
                            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                              if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                                FUN_1803155c0();
                                pcVar4 = (code *)swi(3);
                                lVar9 = (*pcVar4)();
                                return lVar9;
                              }
                              *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = lVar13;
                              func_0x000180314690(lVar3 + ((longlong)(int)uVar2 + 4) * 8,lVar13);
                            }
                            else {
                              FUN_181645af0(lVar15,lVar13,
                                            *(undefined8 *)
                                             (*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xc0) +
                                             0x70));
                            }
                            if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x00018068d236;
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(lVar9 + 0x10),lVar13,0);
                          }
                          uVar14 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          UnityEngine_UIElements_VisualElement___ctor(uVar14,0);
                          *(undefined8 *)(lVar9 + 0x18) = uVar14;
                          func_0x000180314690(lVar9 + 0x18,uVar14);
                          if (*(longlong *)(lVar9 + 0x18) != 0) {
                            lVar13 = UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(lVar9 + 0x18),0);
                            uVar14 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                            if (lVar13 != 0) {
                              FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar13,uVar14);
                              if (*(longlong *)(lVar9 + 0x18) != 0) {
                                plVar11 = (longlong *)
                                          UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(lVar9 + 0x18),0);
                                puVar12 = (undefined8 *)
                                          UnityEngine_UIElements_StyleLength__op_Implicit();
                                if (plVar11 != (longlong *)0x0) {
                                  lVar13 = *plVar11;
                                  uVar14 = *puVar12;
                                  uVar19 = *(undefined4 *)(puVar12 + 1);
                                  if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                    uVar17 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar12 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                            (ulonglong)uVar17 * 0x10) + 0xad) * 0x10
                                                   + 0x138 + lVar13);
                                        goto code_r0x00018068cb79;
                                      }
                                      uVar17 = uVar17 + 1;
                                    } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
                                  }
                                  puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad)
                                  ;
code_r0x00018068cb79:
                                  uStack_148 = uVar14;
                                  uStack_140 = uVar19;
                                  (*(code *)*puVar12)(plVar11,&uStack_148,puVar12[1]);
                                  if (*(longlong *)(lVar9 + 0x18) != 0) {
                                    plVar11 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (*(longlong *)(lVar9 + 0x18),0);
                                    puVar12 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit();
                                    if (plVar11 != (longlong *)0x0) {
                                      lVar13 = *plVar11;
                                      uVar14 = *puVar12;
                                      uVar19 = *(undefined4 *)(puVar12 + 1);
                                      if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                        uVar17 = 0;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar13 + 0xb0) +
                                               (ulonglong)uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                            puVar12 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 +
                                                                (ulonglong)uVar17 * 0x10) + 0x43) *
                                                       0x10 + 0x138 + lVar13);
                                            goto code_r0x00018068cc19;
                                          }
                                          uVar17 = uVar17 + 1;
                                        } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
                                      }
                                      puVar12 = (undefined8 *)
                                                FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018068cc19:
                                      uStack_148 = uVar14;
                                      uStack_140 = uVar19;
                                      (*(code *)*puVar12)(plVar11,&uStack_148,puVar12[1]);
                                      if (*(longlong *)(lVar9 + 0x18) != 0) {
                                        plVar11 = (longlong *)
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar9 + 0x18),0);
                                        puVar12 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit();
                                        if (plVar11 != (longlong *)0x0) {
                                          lVar13 = *plVar11;
                                          uVar14 = *puVar12;
                                          uVar19 = *(undefined4 *)(puVar12 + 1);
                                          if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                            uVar17 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar13 + 0xb0) +
                                                   (ulonglong)uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar12 = (undefined8 *)
                                                          ((longlong)
                                                           (*(int *)(*(longlong *)(lVar13 + 0xb0) +
                                                                     8 + (ulonglong)uVar17 * 0x10) +
                                                           0x73) * 0x10 + 0x138 + lVar13);
                                                goto code_r0x00018068ccb9;
                                              }
                                              uVar17 = uVar17 + 1;
                                            } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
                                          }
                                          puVar12 = (undefined8 *)
                                                    FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018068ccb9:
                                          uStack_148 = uVar14;
                                          uStack_140 = uVar19;
                                          (*(code *)*puVar12)(plVar11,&uStack_148,puVar12[1]);
                                          if (*(longlong *)(lVar9 + 0x18) != 0) {
                                            plVar11 = (longlong *)
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar9 + 0x18),0);
                                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            uVar14 = SparkEstilo__Textura(LIT_"'Opcoes/slider_cursor'",0);
                                            puVar12 = (undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_c8,uVar14,0);
                                            if (plVar11 != (longlong *)0x0) {
                                              lVar13 = *plVar11;
                                              uVar16 = *puVar12;
                                              uVar5 = puVar12[1];
                                              uVar6 = puVar12[2];
                                              uVar7 = puVar12[3];
                                              uVar14 = puVar12[4];
                                              if (*(ushort *)(lVar13 + 0x12e) != 0) {
                                                uVar17 = 0;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar13 + 0xb0) +
                                                       (ulonglong)uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                                                  {
                                                    puVar12 = (undefined8 *)
                                                              ((longlong)
                                                               (*(int *)(*(longlong *)
                                                                          (lVar13 + 0xb0) + 8 +
                                                                        (ulonglong)uVar17 * 0x10) +
                                                               0xb) * 0x10 + 0x138 + lVar13);
                                                    goto code_r0x00018068cd89;
                                                  }
                                                  uVar17 = uVar17 + 1;
                                                } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
                                              }
                                              puVar12 = (undefined8 *)
                                                        FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018068cd89:
                                              uStack_c8 = uVar16;
                                              uStack_c0 = uVar5;
                                              uStack_b8 = uVar6;
                                              uStack_b0 = uVar7;
                                              uStack_a8 = uVar14;
                                              (*(code *)*puVar12)(plVar11,&uStack_c8,puVar12[1]);
                                              if (*(longlong *)(lVar9 + 0x18) != 0) {
                                                UnityEngine_UIElements_VisualElement__set_pickingMode
                                                          (*(longlong *)(lVar9 + 0x18),1,0);
                                                if (*(longlong *)(lVar9 + 0x10) != 0) {
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (*(longlong *)(lVar9 + 0x10),
                                                             *(undefined8 *)(lVar9 + 0x18),0);
                                                  lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement)
                                                  ;
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (lVar13,0);
                                                  if (lVar13 != 0) {
                                                    lVar15 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar13,0);
                                                  uVar14 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar15 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar15,uVar14)
                                                    ;
                                                    lVar15 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar13,0);
                                                  uVar14 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar15 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar15,uVar14)
                                                    ;
                                                    if (*(int *)(TI_OptionsWindow + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660(TI_OptionsWindow);
                                                    }
                                                    uStack_128 = *(undefined8 *)
                                                                  (*(longlong *)
                                                                    (TI_OptionsWindow + 0xb8) +
                                                                  0x28);
                                                    uStack_120 = *(undefined8 *)
                                                                  (*(longlong *)
                                                                    (TI_OptionsWindow + 0xb8) +
                                                                  0x30);
                                                    uStack_e0 = 0;
                                                    uStack_d8 = 0;
                                                    uStack_d0 = 0;
                                                    func_0x000180cb7cb0(&uStack_e0,&uStack_128,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_128 = uStack_e0;
                                                    uStack_120 = uStack_d8;
                                                    uStack_118._0_4_ = uStack_d0;
                                                    uVar14 = SparkEstilo__Texto(param_6,10,
                                                                                &uStack_128,0,0);
                                                    uStack_128 = *(undefined8 *)
                                                                  (*(longlong *)
                                                                    (TI_OptionsWindow + 0xb8) +
                                                                  0x28);
                                                    uStack_120 = *(undefined8 *)
                                                                  (*(longlong *)
                                                                    (TI_OptionsWindow + 0xb8) +
                                                                  0x30);
                                                    uStack_e8 = 0;
                                                    uStack_f8 = 0;
                                                    uStack_f0 = 0;
                                                    func_0x000180cb7cb0(&uStack_f8,&uStack_128,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_128 = uStack_f8;
                                                    uStack_120 = uStack_f0;
                                                    uStack_118 = CONCAT44(uStack_118._4_4_,uStack_e8
                                                                         );
                                                    uVar16 = SparkEstilo__Texto(param_7,10,
                                                                                &uStack_128,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar13,uVar14,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar13,uVar16,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar10,lVar13,0);
                                                    uVar14 = func_0x000180315580(
                                                  TI_System.Action);
                                                  FUN_1816a9c60(uVar14,lVar9,MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__0,0)
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x38) = uVar14;
                                                  func_0x000180314690(lVar9 + 0x38,uVar14);
                                                  lVar13 = *(longlong *)(lVar9 + 0x10);
                                                  uVar14 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>)
                                                  ;
                                                  FUN_18055b980(uVar14,lVar9,MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__1,0)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar14,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
                                                    lVar13 = *(longlong *)(lVar9 + 0x10);
                                                    *(undefined1 *)(lVar9 + 0x48) = 0;
                                                    uVar14 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                  FUN_18055b980(uVar14,lVar9,MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__3,0)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar14,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                    lVar13 = *(longlong *)(lVar9 + 0x10);
                                                    uVar14 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                  FUN_18055b980(uVar14,lVar9,MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__4,0)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar14,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                    lVar13 = *(longlong *)(lVar9 + 0x10);
                                                    uVar14 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                  FUN_18055b980(uVar14,lVar9,MD_OptionsWindow.__c__DisplayClass70_0._Barra_b__5,0)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_180990d50(lVar13,uVar14,0,
                                                                  MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                    lVar15 = MR_System.Collections.Generic.List<System.Action>.Add;
                                                    lVar13 = *(longlong *)(param_1 + 0xb0);
                                                    if (lVar13 != 0) {
                                                      uVar14 = *(undefined8 *)(lVar9 + 0x38);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      lVar9 = *(longlong *)(lVar13 + 0x10);
                                                      if (lVar9 != 0) {
                                                        uVar2 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                                                            FUN_1803155c0();
                                                            pcVar4 = (code *)swi(3);
                                                            lVar9 = (*pcVar4)();
                                                            return lVar9;
                                                          }
                                                          *(undefined8 *)
                                                           (lVar9 + 0x20 + (longlong)(int)uVar2 * 8)
                                                               = uVar14;
                                                          func_0x000180314690(lVar9 + 0x20 +
                                                                              (longlong)(int)uVar2 *
                                                                              8);
                                                        }
                                                        else {
                                                          FUN_181645af0(lVar13,uVar14,
                                                                        *(undefined8 *)
                                                                         (*(longlong *)
                                                                           (*(longlong *)
                                                                             (lVar15 + 0x20) + 0xc0)
                                                                         + 0x70));
                                                        }
                                                        return lVar10;
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
                          pcVar4 = (code *)swi(3);
                          lVar9 = (*pcVar4)();
                          return lVar9;
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
code_r0x00018068d236:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar9 = (*pcVar4)();
  return lVar9;
}

