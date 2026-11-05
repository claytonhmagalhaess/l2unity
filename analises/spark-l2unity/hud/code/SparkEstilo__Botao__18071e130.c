// SparkEstilo__Botao__18071e130 @ 0x18071e130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkEstilo__Botao__18071e130(undefined8 param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (cRam00000001834b41f4 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.AttachToPanelEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.AttachToPanelEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__1);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__2);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__3);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__4);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__5);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__6);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass28_0._Botao_g__Pinta_0);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass28_0);
    FUN_180315380(LIT_"''");
    cRam00000001834b41f4 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass28_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x28) = param_4;
    *(undefined8 *)(lVar5 + 0x40) = param_2;
    func_0x000180314690(lVar5 + 0x40,param_2);
    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.Button);
    UnityEngine_UIElements_Button___ctor(uVar6,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    func_0x000180314690(lVar5 + 0x10,uVar6);
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0xe48))(plVar7,LIT_"''",*(undefined8 *)(*plVar7 + 0xe50));
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x248))(plVar7,0,*(undefined8 *)(*plVar7 + 0x250));
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          plVar7 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 != (longlong *)0x0) {
            lVar12 = *plVar7;
            uVar6 = *puVar8;
            uVar18 = *(undefined4 *)(puVar8 + 1);
            if (*(ushort *)(lVar12 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar12);
                  goto code_r0x00018071e409;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071e409:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
            uStack_88 = uVar6;
            (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
            if (0 < param_3) {
              if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x00018071effb;
              plVar7 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar5 + 0x10),0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar7 == (longlong *)0x0) goto code_r0x00018071effb;
              lVar12 = *plVar7;
              uVar6 = *puVar8;
              uVar18 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar12 + 0x12e) != 0) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10)
                              + 0xad) * 0x10 + 0x138 + lVar12);
                    goto code_r0x00018071e4b9;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018071e4b9:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
              uStack_88 = uVar6;
              (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
            }
            if (*(longlong *)(lVar5 + 0x10) != 0) {
              plVar7 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar5 + 0x10),0);
              if (*(longlong *)(lVar5 + 0x10) != 0) {
                plVar9 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar5 + 0x10),0);
                if (*(longlong *)(lVar5 + 0x10) != 0) {
                  plVar10 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(lVar5 + 0x10),0);
                  if (*(longlong *)(lVar5 + 0x10) != 0) {
                    plVar11 = (longlong *)
                              UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar5 + 0x10),0);
                    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                    if (plVar11 != (longlong *)0x0) {
                      lVar12 = *plVar11;
                      uVar6 = *puVar8;
                      uVar18 = *(undefined4 *)(puVar8 + 1);
                      if (*(ushort *)(lVar12 + 0x12e) != 0) {
                        uVar14 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar14 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                               (ulonglong)uVar14 * 0x10) + 0x4b) * 0x10 + 0x138 +
                                     lVar12);
                            goto code_r0x00018071e597;
                          }
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018071e597:
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                      uStack_88 = uVar6;
                      (*(code *)*puVar8)(plVar11,&uStack_88,puVar8[1]);
                      if (plVar10 != (longlong *)0x0) {
                        lVar12 = *plVar10;
                        uVar16 = 0;
                        if (*(ushort *)(lVar12 + 0x12e) != 0) {
                          uVar15 = uVar16;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar15 * 0x10)
                                        + 0x51) * 0x10 + 0x138 + lVar12);
                              goto code_r0x00018071e609;
                            }
                            uVar14 = (short)uVar15 + 1;
                            uVar15 = (ulonglong)uVar14;
                          } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018071e609:
                        uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                        uStack_88 = uVar6;
                        (*(code *)*puVar8)(plVar10,&uStack_88,puVar8[1]);
                        if (plVar9 != (longlong *)0x0) {
                          lVar12 = *plVar9;
                          if (*(ushort *)(lVar12 + 0x12e) != 0) {
                            uVar15 = uVar16;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar8 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar15 * 0x10
                                                   ) + 0x4f) * 0x10 + 0x138 + lVar12);
                                goto code_r0x00018071e679;
                              }
                              uVar14 = (short)uVar15 + 1;
                              uVar15 = (ulonglong)uVar14;
                            } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                          }
                          puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018071e679:
                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                          uStack_88 = uVar6;
                          (*(code *)*puVar8)(plVar9,&uStack_88,puVar8[1]);
                          if (plVar7 != (longlong *)0x0) {
                            lVar12 = *plVar7;
                            if (*(ushort *)(lVar12 + 0x12e) != 0) {
                              uVar15 = uVar16;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar8 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                                     uVar15 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar12)
                                  ;
                                  goto code_r0x00018071e6e9;
                                }
                                uVar14 = (short)uVar15 + 1;
                                uVar15 = (ulonglong)uVar14;
                              } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                            }
                            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018071e6e9:
                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                            uStack_88 = uVar6;
                            (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
                            if (*(longlong *)(lVar5 + 0x10) != 0) {
                              plVar7 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style
                                                 (*(longlong *)(lVar5 + 0x10),0);
                              if (*(longlong *)(lVar5 + 0x10) != 0) {
                                plVar9 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(lVar5 + 0x10),0);
                                puVar8 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88)
                                ;
                                if (plVar9 != (longlong *)0x0) {
                                  lVar12 = *plVar9;
                                  uVar6 = *puVar8;
                                  uVar18 = *(undefined4 *)(puVar8 + 1);
                                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                    uVar15 = uVar16;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                          TI_UnityEngine.UIElements.IStyle) {
                                        puVar8 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                                           uVar15 * 0x10) + 99) * 0x10 + 0x138 +
                                                 lVar12);
                                        goto code_r0x00018071e7a7;
                                      }
                                      uVar14 = (short)uVar15 + 1;
                                      uVar15 = (ulonglong)uVar14;
                                    } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                  }
                                  puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,99);
code_r0x00018071e7a7:
                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                                  uStack_88 = uVar6;
                                  (*(code *)*puVar8)(plVar9,&uStack_88,puVar8[1]);
                                  if (plVar7 != (longlong *)0x0) {
                                    lVar12 = *plVar7;
                                    if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                      uVar15 = uVar16;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar8 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                                             uVar15 * 0x10) + 0x61) * 0x10 + 0x138 +
                                                   lVar12);
                                          goto code_r0x00018071e819;
                                        }
                                        uVar14 = (short)uVar15 + 1;
                                        uVar15 = (ulonglong)uVar14;
                                      } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                    }
                                    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x61)
                                    ;
code_r0x00018071e819:
                                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                                    uStack_88 = uVar6;
                                    (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                      plVar7 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(lVar5 + 0x10),0);
                                      if (*(longlong *)(lVar5 + 0x10) != 0) {
                                        plVar9 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (*(longlong *)(lVar5 + 0x10),0);
                                        puVar8 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_88);
                                        if (plVar9 != (longlong *)0x0) {
                                          lVar12 = *plVar9;
                                          uVar6 = *puVar8;
                                          uVar18 = *(undefined4 *)(puVar8 + 1);
                                          if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                            uVar15 = uVar16;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar8 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8
                                                                   + uVar15 * 0x10) + 0x5f) * 0x10 +
                                                          0x138 + lVar12);
                                                goto code_r0x00018071e8c7;
                                              }
                                              uVar14 = (short)uVar15 + 1;
                                              uVar15 = (ulonglong)uVar14;
                                            } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                          }
                                          puVar8 = (undefined8 *)
                                                   FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x00018071e8c7:
                                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                                          uStack_88 = uVar6;
                                          (*(code *)*puVar8)(plVar9,&uStack_88,puVar8[1]);
                                          if (plVar7 != (longlong *)0x0) {
                                            lVar12 = *plVar7;
                                            if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                              uVar15 = uVar16;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar12 + 0xb0) + uVar15 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar8 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar12 + 0xb0) +
                                                                      8 + uVar15 * 0x10) + 0x65) *
                                                            0x10 + 0x138 + lVar12);
                                                  goto code_r0x00018071e939;
                                                }
                                                uVar14 = (short)uVar15 + 1;
                                                uVar15 = (ulonglong)uVar14;
                                              } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                            }
                                            puVar8 = (undefined8 *)
                                                     FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x00018071e939:
                                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar18);
                                            uStack_88 = uVar6;
                                            (*(code *)*puVar8)(plVar7,&uStack_88,puVar8[1]);
                                            if (*(longlong *)(lVar5 + 0x10) != 0) {
                                              plVar7 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                              uStack_88 = 0;
                                              uStack_80 = 0;
                                              puVar8 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_68,&uStack_88,0);
                                              if (plVar7 != (longlong *)0x0) {
                                                lVar12 = *plVar7;
                                                uVar6 = *puVar8;
                                                uVar13 = puVar8[1];
                                                uVar18 = *(undefined4 *)(puVar8 + 2);
                                                if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar12 + 0xb0) +
                                                         uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar8 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar12 + 0xb0) + 8 +
                                                                         uVar16 * 0x10) + 9) * 0x10
                                                                + 0x138 + lVar12);
                                                      goto code_r0x00018071e9d9;
                                                    }
                                                    uVar14 = (short)uVar16 + 1;
                                                    uVar16 = (ulonglong)uVar14;
                                                  } while (uVar14 < *(ushort *)(lVar12 + 0x12e));
                                                }
                                                puVar8 = (undefined8 *)
                                                         FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018071e9d9:
                                                uStack_68 = uVar6;
                                                uStack_60 = uVar13;
                                                uStack_58 = uVar18;
                                                (*(code *)*puVar8)(plVar7,&uStack_68,puVar8[1]);
                                                uVar6 = *(undefined8 *)(lVar5 + 0x10);
                                                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                uVar18 = 0;
                                                uStack_88 = 0;
                                                uStack_80 = 0;
                                                SparkEstilo__Borda__18071da60(uVar6,&uStack_88);
                                                SparkEstilo__Fatia__1807203e0
                                                          (*(undefined8 *)(lVar5 + 0x10),6,6,6,
                                                           CONCAT44(uVar18,6),0);
                                                if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                  lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                      lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x10),0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                                                    bVar17 = *(char *)(lVar5 + 0x28) == '\0';
                                                    *(undefined4 *)(lVar5 + 0x2c) = 0x3f800000;
                                                    iVar2 = 0xaa;
                                                    if (bVar17) {
                                                      iVar2 = 0xf9;
                                                    }
                                                    iVar3 = 0xa0;
                                                    if (bVar17) {
                                                      iVar3 = 0xe3;
                                                    }
                                                    iVar4 = 0xff;
                                                    if (bVar17) {
                                                      iVar4 = 0xf5;
                                                    }
                                                    uStack_58 = 0;
                                                    uStack_68 = 0;
                                                    uStack_60 = 0;
                                                    uVar18 = *(undefined4 *)(lVar5 + 0x2c);
                                                    *(undefined4 *)(lVar5 + 0x2c) = uVar18;
                                                    *(float *)(lVar5 + 0x30) = (float)iVar2 / 255.0;
                                                    *(float *)(lVar5 + 0x34) = (float)iVar3 / 255.0;
                                                    *(float *)(lVar5 + 0x38) = (float)iVar4 / 255.0;
                                                    uStack_88 = CONCAT44((float)iVar2 / 255.0,uVar18
                                                                        );
                                                    uStack_80 = CONCAT44((float)iVar4 / 255.0,
                                                                         (float)iVar3 / 255.0);
                                                    func_0x000180cb7cb0(&uStack_68,&uStack_88,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                      func_0x000180315660();
                                                    }
                                                    uStack_88 = uStack_68;
                                                    uStack_80 = uStack_60;
                                                    uStack_78 = uStack_58;
                                                    uVar6 = SparkEstilo__Texto__180722af0
                                                                      (param_1,0xb,&uStack_88,0,0);
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    func_0x000180314690(lVar5 + 0x20,uVar6);
                                                    if (*(longlong *)(lVar5 + 0x20) != 0) {
                                                      lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(lVar5 + 0x20),0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                                                    if (*(longlong *)(lVar5 + 0x10) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(lVar5 + 0x10),
                                                                 *(undefined8 *)(lVar5 + 0x20),0);
                                                      lVar12 = *(longlong *)(lVar5 + 0x10);
                                                      *(undefined2 *)(lVar5 + 0x18) = 0;
                                                      uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                                                      FUN_18055b980(uVar6,lVar5,MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__1
                                                                    ,0);
                                                      if (lVar12 != 0) {
                                                        FUN_180990d50(lVar12,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>)
                                                        ;
                                                        lVar12 = *(longlong *)(lVar5 + 0x10);
                                                        uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                        FUN_18055b980(uVar6,lVar5,
                                                                      MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__2,0);
                                                        if (lVar12 != 0) {
                                                          FUN_180990d50(lVar12,uVar6,0,
                                                                        MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                                          lVar12 = *(longlong *)(lVar5 + 0x10);
                                                          uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>
                                                                                     );
                                                          FUN_18055b980(uVar6,lVar5,
                                                                        MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__3,0);
                                                          if (lVar12 != 0) {
                                                            FUN_180990d50(lVar12,uVar6,1,
                                                                          MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                            lVar12 = *(longlong *)(lVar5 + 0x10);
                                                            uVar6 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                  FUN_18055b980(uVar6,lVar5,MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__4,0);
                                                  if (lVar12 != 0) {
                                                    FUN_180990d50(lVar12,uVar6,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                    lVar12 = *(longlong *)(lVar5 + 0x10);
                                                    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.AttachToPanelEvent>
                                                                               );
                                                    FUN_18055b980(uVar6,lVar5,MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__5,0
                                                                 );
                                                    if (lVar12 != 0) {
                                                      FUN_180990d50(lVar12,uVar6,0,
                                                                    MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.AttachToPanelEvent>);
                                                      lVar12 = *(longlong *)(lVar5 + 0x10);
                                                      uVar6 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar6,lVar5,MD_SparkEstilo.__c__DisplayClass28_0._Botao_g__Pinta_0
                                                                    ,0);
                                                      if (lVar12 != 0) {
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__set_userData
                                                            (lVar12,uVar6,0);
                                                  uVar6 = *(undefined8 *)(lVar5 + 0x10);
                                                  uVar13 = func_0x000180315580(TI_ButtonClickSoundManipulator);
                                                  BlinkingCursorManipulator___ctor__1807aa3c0
                                                            (uVar13,uVar6,0);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (uVar6,uVar13,0);
                                                  lVar12 = *(longlong *)(lVar5 + 0x10);
                                                  uVar6 = func_0x000180315580(TI_System.Action);
                                                  FUN_1816a9c60(uVar6,lVar5,MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__6,0);
                                                  if (lVar12 != 0) {
                                                    UnityEngine_UIElements_Button__add_clicked
                                                              (lVar12,uVar6,0);
                                                                                                        
                                                  SparkEstilo___c__DisplayClass28_0___Botao_g__Pinta_0
                                                            (lVar5,0);
                                                  return *(undefined8 *)(lVar5 + 0x10);
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
                                                  uVar6 = (*pcVar1)();
                                                  return uVar6;
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
code_r0x00018071effb:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

