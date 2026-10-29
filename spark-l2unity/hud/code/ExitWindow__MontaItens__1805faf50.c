// ExitWindow__MontaItens__1805faf50 @ 0x1805faf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ExitWindow__MontaItens__1805faf50(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar13;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  ulonglong uVar11;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (cRam00000001834b3bf2 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Count'");
    FUN_180315380(LIT_"'No items acquired yet.'");
    FUN_180315380(LIT_"'Acquired Items'");
    FUN_180315380(LIT_"'Item'");
    cRam00000001834b3bf2 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar4 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x43eb0000,0);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = *plVar3;
      uVar12 = 0;
      uVar6 = *puVar4;
      uVar1 = *(undefined4 *)(puVar4 + 1);
      if (*(ushort *)(lVar5 + 0x12e) != 0) {
        uVar11 = uVar12;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar4 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar11 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar5);
            goto code_r0x0001805fb0d9;
          }
          uVar10 = (short)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
      }
      puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805fb0d9:
      uStack_d8 = uVar6;
      uStack_d0 = uVar1;
      (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = SparkEstilo__Painel__180721ce0(0);
      if (lVar5 != 0) {
        plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = *plVar3;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar4 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0x67) * 0x10
                          + 0x138 + lVar7);
                goto code_r0x0001805fb199;
              }
              uVar10 = (short)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x67);
code_r0x0001805fb199:
          (*(code *)*puVar4)(plVar3,uVar6,puVar4[1]);
          plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar4 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x436c0000,0);
          if (plVar3 != (longlong *)0x0) {
            lVar7 = *plVar3;
            uVar6 = *puVar4;
            uVar1 = *(undefined4 *)(puVar4 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar11 = uVar12;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar4 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0x47) *
                            0x10 + 0x138 + lVar7);
                  goto code_r0x0001805fb229;
                }
                uVar10 = (short)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805fb229:
            uStack_d8 = uVar6;
            uStack_d0 = uVar1;
            (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
            plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            puVar4 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x42400000,0);
            if (plVar3 != (longlong *)0x0) {
              lVar7 = *plVar3;
              uVar6 = *puVar4;
              uVar1 = *(undefined4 *)(puVar4 + 1);
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar11 = uVar12;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar4 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0x73) *
                              0x10 + 0x138 + lVar7);
                    goto code_r0x0001805fb2c9;
                  }
                  uVar10 = (short)uVar11 + 1;
                  uVar11 = (ulonglong)uVar10;
                } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001805fb2c9:
              uStack_d8 = uVar6;
              uStack_d0 = uVar1;
              (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
              plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              puVar4 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x435b0000,0);
              if (plVar3 != (longlong *)0x0) {
                lVar7 = *plVar3;
                uVar6 = *puVar4;
                uVar1 = *(undefined4 *)(puVar4 + 1);
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar11 = uVar12;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar4 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0xad) *
                                0x10 + 0x138 + lVar7);
                      goto code_r0x0001805fb369;
                    }
                    uVar10 = (short)uVar11 + 1;
                    uVar11 = (ulonglong)uVar10;
                  } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805fb369:
                uStack_d8 = uVar6;
                uStack_d0 = uVar1;
                (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                puVar4 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x41800000,0);
                if (plVar3 != (longlong *)0x0) {
                  lVar7 = *plVar3;
                  uVar6 = *puVar4;
                  uVar1 = *(undefined4 *)(puVar4 + 1);
                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                    uVar11 = uVar12;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar4 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar11 * 0x10) + 0x2d)
                                  * 0x10 + 0x138 + lVar7);
                        goto code_r0x0001805fb409;
                      }
                      uVar10 = (short)uVar11 + 1;
                      uVar11 = (ulonglong)uVar10;
                    } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                  }
                  puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805fb409:
                  uStack_d8 = uVar6;
                  uStack_d0 = uVar1;
                  (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                    SparkEstilo__Espaco__18071fb80
                              (lVar5,0x40800000,0x40800000,0x40800000,CONCAT44(uVar13,0x40800000),0)
                    ;
                    lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    uStack_d8 = *(undefined8 *)(lVar7 + 0x70);
                    uStack_d0 = *(undefined4 *)(lVar7 + 0x78);
                    uStack_cc = *(undefined4 *)(lVar7 + 0x7c);
                    uStack_a8 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    func_0x000180cb7cb0(&uStack_b8,&uStack_d8,MR_System.Nullable<UnityEngine.Color>..ctor);
                    uStack_d8 = uStack_b8;
                    uStack_d0 = (undefined4)uStack_b0;
                    uStack_cc = uStack_b0._4_4_;
                    uStack_c8 = uStack_a8;
                    lVar7 = SparkEstilo__Texto__180722af0(LIT_"'Acquired Items'",0xb,&uStack_d8,0,0);
                    if (lVar7 != 0) {
                      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                      uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                      if (lVar8 != 0) {
                        FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                        plVar3 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                        puVar4 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_d8,0x40c00000,0);
                        if (plVar3 != (longlong *)0x0) {
                          lVar8 = *plVar3;
                          uVar6 = *puVar4;
                          uVar13 = *(undefined4 *)(puVar4 + 1);
                          if (*(ushort *)(lVar8 + 0x12e) != 0) {
                            uVar11 = uVar12;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar4 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar11 * 0x10)
                                          + 0x51) * 0x10 + 0x138 + lVar8);
                                goto code_r0x0001805fb5b9;
                              }
                              uVar10 = (short)uVar11 + 1;
                              uVar11 = (ulonglong)uVar10;
                            } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                          }
                          puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805fb5b9:
                          uStack_d8 = uVar6;
                          uStack_d0 = uVar13;
                          (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                          plVar3 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          puVar4 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_d8,0x40c00000,0);
                          if (plVar3 != (longlong *)0x0) {
                            lVar8 = *plVar3;
                            uVar6 = *puVar4;
                            uVar13 = *(undefined4 *)(puVar4 + 1);
                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                              uVar11 = uVar12;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar4 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                     uVar11 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar8);
                                  goto code_r0x0001805fb649;
                                }
                                uVar10 = (short)uVar11 + 1;
                                uVar11 = (ulonglong)uVar10;
                              } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                            }
                            puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805fb649:
                            uStack_d8 = uVar6;
                            uStack_d0 = uVar13;
                            (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar6 = func_0x000182601c10(0,0);
                            if (lVar8 != 0) {
                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                              UnityEngine_UIElements_VisualElement__Add(lVar5,lVar7,0);
                              lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                              UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                              if (lVar7 != 0) {
                                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                if (lVar8 != 0) {
                                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                                  lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                  if (lVar8 != 0) {
                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                                    plVar3 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar7,0);
                                    puVar4 = (undefined8 *)
                                             UnityEngine_UIElements_StyleLength__op_Implicit
                                                       (&uStack_d8,0x40c00000,0);
                                    if (plVar3 != (longlong *)0x0) {
                                      lVar8 = *plVar3;
                                      uVar6 = *puVar4;
                                      uVar13 = *(undefined4 *)(puVar4 + 1);
                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                        uVar11 = uVar12;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar4 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                               uVar11 * 0x10) + 0x61) * 0x10 + 0x138
                                                     + lVar8);
                                            goto code_r0x0001805fb7b9;
                                          }
                                          uVar10 = (short)uVar11 + 1;
                                          uVar11 = (ulonglong)uVar10;
                                        } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                      }
                                      puVar4 = (undefined8 *)
                                               FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805fb7b9:
                                      uStack_d8 = uVar6;
                                      uStack_d0 = uVar13;
                                      (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                      plVar3 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar7,0);
                                      puVar4 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_d8,0x41600000,0);
                                      if (plVar3 != (longlong *)0x0) {
                                        lVar8 = *plVar3;
                                        uVar6 = *puVar4;
                                        uVar13 = *(undefined4 *)(puVar4 + 1);
                                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                          uVar11 = uVar12;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar4 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                                 uVar11 * 0x10) + 99) * 0x10 + 0x138
                                                       + lVar8);
                                              goto code_r0x0001805fb859;
                                            }
                                            uVar10 = (short)uVar11 + 1;
                                            uVar11 = (ulonglong)uVar10;
                                          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                        }
                                        puVar4 = (undefined8 *)
                                                 FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,99);
code_r0x0001805fb859:
                                        uStack_d8 = uVar6;
                                        uStack_d0 = uVar13;
                                        (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                        lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar7,0);
                                        uVar6 = func_0x000182601c10(0,0);
                                        if (lVar8 != 0) {
                                          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                                          SparkEstilo__CabecalhoDeLista__18071f010(lVar7,0);
                                          lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_d8 = *(undefined8 *)(lVar8 + 0x50);
                                          uStack_d0 = *(undefined4 *)(lVar8 + 0x58);
                                          uStack_cc = *(undefined4 *)(lVar8 + 0x5c);
                                          uStack_90 = 0;
                                          uStack_a0 = 0;
                                          uStack_98 = 0;
                                          func_0x000180cb7cb0(&uStack_a0,&uStack_d8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                          uStack_d8 = uStack_a0;
                                          uStack_d0 = (undefined4)uStack_98;
                                          uStack_cc = uStack_98._4_4_;
                                          uStack_c8 = uStack_90;
                                          lVar8 = SparkEstilo__Texto__180722af0
                                                            (LIT_"'Item'",0xb,&uStack_d8,1,0
                                                            );
                                          if (lVar8 != 0) {
                                            lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar8,0);
                                            uVar6 = func_0x000182601c10(0x3f800000,0);
                                            if (lVar9 != 0) {
                                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                                              plVar3 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                              puVar4 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0x41f00000,0);
                                              if (plVar3 != (longlong *)0x0) {
                                                lVar9 = *plVar3;
                                                uVar13 = *(undefined4 *)(puVar4 + 1);
                                                uVar6 = *puVar4;
                                                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                  uVar11 = uVar12;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar9 + 0xb0) +
                                                         uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar4 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar9 + 0xb0) + 8 +
                                                                         uVar11 * 0x10) + 0x4d) *
                                                                0x10 + 0x138 + lVar9);
                                                      goto code_r0x0001805fb9e9;
                                                    }
                                                    uVar10 = (short)uVar11 + 1;
                                                    uVar11 = (ulonglong)uVar10;
                                                  } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                }
                                                puVar4 = (undefined8 *)
                                                         FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805fb9e9:
                                                uStack_d8 = uVar6;
                                                uStack_d0 = uVar13;
                                                (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar7,lVar8,0);
                                                lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                uStack_d8 = *(undefined8 *)(lVar8 + 0x50);
                                                uStack_d0 = *(undefined4 *)(lVar8 + 0x58);
                                                uStack_cc = *(undefined4 *)(lVar8 + 0x5c);
                                                uStack_78 = 0;
                                                uStack_88 = 0;
                                                uStack_80 = 0;
                                                func_0x000180cb7cb0(&uStack_88,&uStack_d8,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_d8 = uStack_88;
                                                uStack_d0 = (undefined4)uStack_80;
                                                uStack_cc = uStack_80._4_4_;
                                                uStack_c8 = uStack_78;
                                                uVar6 = SparkEstilo__Texto__180722af0
                                                                  (LIT_"'Count'",0xb,
                                                                   &uStack_d8,1,0);
                                                uVar6 = ExitWindow__Coluna(uVar6,0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar7,uVar6,0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar5,lVar7,0);
                                                uVar6 = SparkEstilo__Lista__1807211b0(0);
                                                *(undefined8 *)(param_1 + 0xc0) = uVar6;
                                                func_0x000180314690(param_1 + 0xc0,uVar6);
                                                if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                  lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  uVar6 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  uVar6 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      plVar3 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  puVar4 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0,0);
                                                  if (plVar3 != (longlong *)0x0) {
                                                    lVar7 = *plVar3;
                                                    uVar6 = *puVar4;
                                                    uVar13 = *(undefined4 *)(puVar4 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar4 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x37)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fbbd9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar4 = (undefined8 *)
                                                             FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,
                                                                           0x37);
code_r0x0001805fbbd9:
                                                    uStack_d8 = uVar6;
                                                    uStack_d0 = uVar13;
                                                    (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      plVar3 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  puVar4 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0,0);
                                                  if (plVar3 != (longlong *)0x0) {
                                                    lVar7 = *plVar3;
                                                    uVar6 = *puVar4;
                                                    uVar13 = *(undefined4 *)(puVar4 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar4 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x57)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fbc79;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar4 = (undefined8 *)
                                                             FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,
                                                                           0x57);
code_r0x0001805fbc79:
                                                    uStack_d8 = uVar6;
                                                    uStack_d0 = uVar13;
                                                    (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)(param_1 + 0xc0)
                                                               ,0);
                                                    lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_d8 = *(undefined8 *)(lVar7 + 0x50);
                                                    uStack_d0 = *(undefined4 *)(lVar7 + 0x58);
                                                    uStack_cc = *(undefined4 *)(lVar7 + 0x5c);
                                                    uStack_60 = 0;
                                                    uStack_70 = 0;
                                                    uStack_68 = 0;
                                                    func_0x000180cb7cb0(&uStack_70,&uStack_d8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_d8 = uStack_70;
                                                    uStack_d0 = (undefined4)uStack_68;
                                                    uStack_cc = uStack_68._4_4_;
                                                    uStack_c8 = uStack_60;
                                                    uVar6 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"'No items acquired yet.'",0xb,
                                                                       &uStack_d8,0,0);
                                                    *(undefined8 *)(param_1 + 200) = uVar6;
                                                    func_0x000180314690(param_1 + 200,uVar6);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      plVar3 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  puVar4 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0x41000000,0);
                                                  if (plVar3 != (longlong *)0x0) {
                                                    lVar7 = *plVar3;
                                                    uVar6 = *puVar4;
                                                    uVar13 = *(undefined4 *)(puVar4 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar11 = uVar12;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar4 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x4d)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fbda9;
                                                        }
                                                        uVar10 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar4 = (undefined8 *)
                                                             FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x0001805fbda9:
                                                    uStack_d8 = uVar6;
                                                    uStack_d0 = uVar13;
                                                    (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      plVar3 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  puVar4 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_d8,0x40c00000,0);
                                                  if (plVar3 != (longlong *)0x0) {
                                                    lVar7 = *plVar3;
                                                    uVar6 = *puVar4;
                                                    uVar13 = *(undefined4 *)(puVar4 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar4 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fbe49;
                                                        }
                                                        uVar10 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar4 = (undefined8 *)
                                                             FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805fbe49:
                                                    uStack_d8 = uVar6;
                                                    uStack_d0 = uVar13;
                                                    (*(code *)*puVar4)(plVar3,&uStack_d8,puVar4[1]);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xc0),
                                                                 *(undefined8 *)(param_1 + 200),0);
                                                      if (*(longlong *)(param_1 + 0x30) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x30),
                                                                   lVar5,0);
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
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

