// SparkPescaJanela__Monta__18084a3c0 @ 0x18084a3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkPescaJanela__Monta__18084a3c0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [56];
  ulonglong uVar12;
  
  if (cRam00000001834b4883 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkPescaJanela.Relogio);
    FUN_180315380(TI_SparkPescaJanela);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Fishing'");
    FUN_180315380(LIT_"'SparkPescaJanela'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4883 = '\x01';
  }
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30) != 0) {
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
    if (lVar4 == 0) goto DAT_18084c39e;
    lVar4 = func_0x0001825d76c0(lVar4,0);
    if (lVar4 != 0) {
      return 1;
    }
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar3 != '\0') {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
DAT_18084c39e:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    lVar4 = *(longlong *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x20);
    if (lVar4 != 0) {
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
      if (lVar5 != 0) {
        UnityEngine_UIElements_VisualElement__set_name(lVar5,LIT_"'SparkPescaJanela'",0);
        UnityEngine_UIElements_VisualElement__set_pickingMode(lVar5,1,0);
        if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
          func_0x000180315660(TI_SparkPescaJanela);
        }
        *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30) = lVar5;
        func_0x000180314690(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30,lVar5);
        lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
        if (lVar5 != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
            if (lVar5 != 0) {
              plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              uVar6 = func_0x0001825fc350();
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,uVar6,0);
              if (plVar7 != (longlong *)0x0) {
                lVar5 = *plVar7;
                uVar13 = 0;
                uVar6 = *puVar8;
                uVar14 = *(undefined4 *)(puVar8 + 1);
                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                  uVar12 = uVar13;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar8 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar12 * 0x10) + 0x73) *
                                0x10 + 0x138 + lVar5);
                      goto code_r0x00018084a789;
                    }
                    uVar11 = (short)uVar12 + 1;
                    uVar12 = (ulonglong)uVar11;
                  } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018084a789:
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                uStack_e8 = uVar6;
                (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
                if (lVar5 != 0) {
                  plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                  uVar6 = func_0x0001825fc350();
                  puVar8 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,uVar6,0);
                  if (plVar7 != (longlong *)0x0) {
                    lVar5 = *plVar7;
                    uVar6 = *puVar8;
                    uVar14 = *(undefined4 *)(puVar8 + 1);
                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                      uVar12 = uVar13;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar8 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar12 * 0x10) +
                                    0x47) * 0x10 + 0x138 + lVar5);
                          goto code_r0x00018084a849;
                        }
                        uVar11 = (short)uVar12 + 1;
                        uVar12 = (ulonglong)uVar11;
                      } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                    }
                    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018084a849:
                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                    uStack_e8 = uVar6;
                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                    lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
                    if (lVar5 != 0) {
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      puVar8 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_e8,0x437a0000,0);
                      if (plVar7 != (longlong *)0x0) {
                        lVar5 = *plVar7;
                        uVar6 = *puVar8;
                        uVar14 = *(undefined4 *)(puVar8 + 1);
                        if (*(ushort *)(lVar5 + 0x12e) != 0) {
                          uVar12 = uVar13;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar8 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar12 * 0x10) +
                                        0xad) * 0x10 + 0x138 + lVar5);
                              goto code_r0x00018084a8f9;
                            }
                            uVar11 = (short)uVar12 + 1;
                            uVar12 = (ulonglong)uVar11;
                          } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                        }
                        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018084a8f9:
                        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                        uStack_e8 = uVar6;
                        (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                        lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
                        if (lVar5 != 0) {
                          plVar7 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                          puVar8 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_e8,0xc2fa0000,0);
                          if (plVar7 != (longlong *)0x0) {
                            lVar5 = *plVar7;
                            uVar6 = *puVar8;
                            uVar14 = *(undefined4 *)(puVar8 + 1);
                            if (*(ushort *)(lVar5 + 0x12e) != 0) {
                              uVar12 = uVar13;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar8 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                     uVar12 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar5);
                                  goto code_r0x00018084a9a9;
                                }
                                uVar11 = (short)uVar12 + 1;
                                uVar12 = (ulonglong)uVar11;
                              } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                            }
                            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018084a9a9:
                            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                            uStack_e8 = uVar6;
                            (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                            lVar5 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30)
                            ;
                            if (lVar5 != 0) {
                              plVar7 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660(TI_SparkEstilo);
                              }
                              uStack_e8 = **(undefined8 **)(TI_SparkEstilo + 0xb8);
                              uStack_e0 = (*(undefined8 **)(TI_SparkEstilo + 0xb8))[1];
                              puVar8 = (undefined8 *)
                                       UnityEngine_UIElements_StyleColor__op_Implicit
                                                 (auStack_50,&uStack_e8,0);
                              if (plVar7 != (longlong *)0x0) {
                                lVar5 = *plVar7;
                                uVar6 = *puVar8;
                                uVar2 = puVar8[1];
                                uVar14 = *(undefined4 *)(puVar8 + 2);
                                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                  uVar12 = uVar13;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar8 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                         uVar12 * 0x10) + 9) * 0x10 + 0x138 + lVar5)
                                      ;
                                      goto code_r0x00018084aa89;
                                    }
                                    uVar11 = (short)uVar12 + 1;
                                    uVar12 = (ulonglong)uVar11;
                                  } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                                }
                                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018084aa89:
                                uStack_e8 = uVar6;
                                uStack_e0 = uVar2;
                                uStack_d8 = uVar14;
                                (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                uVar14 = 0;
                                uStack_e8 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
                                uStack_e0 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
                                SparkEstilo__Borda__18071da60
                                          (*(undefined8 *)
                                            (*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30),
                                           &uStack_e8,0x3f800000,0x40400000,0);
                                SparkEstilo__Espaco__18071fb80
                                          (*(undefined8 *)
                                            (*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30),
                                           0x40800000,0x41000000,0x40c00000,
                                           CONCAT44(uVar14,0x41000000),0);
                                lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                                if (lVar5 != 0) {
                                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar5,1,0);
                                  plVar7 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                  if (plVar7 != (longlong *)0x0) {
                                    lVar9 = *plVar7;
                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                      uVar12 = uVar13;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar9 + 0xb0) + uVar12 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar8 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                             uVar12 * 0x10) + 0x39) * 0x10 + 0x138 +
                                                   lVar9);
                                          goto code_r0x00018084abc9;
                                        }
                                        uVar11 = (short)uVar12 + 1;
                                        uVar12 = (ulonglong)uVar11;
                                      } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                    }
                                    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x39)
                                    ;
code_r0x00018084abc9:
                                    (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
                                    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0)
                                    ;
                                    uVar6 = func_0x000182601c10();
                                    if (lVar9 != 0) {
                                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                                      plVar7 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar5,0);
                                      uVar6 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                      if (plVar7 != (longlong *)0x0) {
                                        lVar9 = *plVar7;
                                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                          uVar12 = uVar13;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar9 + 0xb0) + uVar12 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar8 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                                 uVar12 * 0x10) + 0x45) * 0x10 +
                                                        0x138 + lVar9);
                                              goto code_r0x00018084ac89;
                                            }
                                            uVar11 = (short)uVar12 + 1;
                                            uVar12 = (ulonglong)uVar11;
                                          } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x45);
code_r0x00018084ac89:
                                        (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
                                        uStack_e8 = *(undefined8 *)
                                                     (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x70);
                                        uStack_e0 = *(undefined8 *)
                                                     (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x78);
                                        uStack_b8 = 0;
                                        uStack_c8 = 0;
                                        uStack_c0 = 0;
                                        func_0x000180cb7cb0(&uStack_c8,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                        uStack_e8 = uStack_c8;
                                        uStack_e0 = uStack_c0;
                                        uStack_d8 = uStack_b8;
                                        uVar6 = SparkEstilo__Texto__180722af0
                                                          (LIT_"'Fishing'",0xc,&uStack_e8,1,0);
                                        UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
                                        uStack_e8 = *(undefined8 *)
                                                     (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x40);
                                        uStack_e0 = *(undefined8 *)
                                                     (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x48);
                                        uStack_a0 = 0;
                                        uStack_b0 = 0;
                                        uStack_a8 = 0;
                                        func_0x000180cb7cb0(&uStack_b0,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                        uStack_e8 = uStack_b0;
                                        uStack_e0 = uStack_a8;
                                        uStack_d8 = uStack_a0;
                                        uVar6 = SparkEstilo__Texto__180722af0
                                                          (LIT_"''",0xc,&uStack_e8,1,0);
                                        *(undefined8 *)
                                         (*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x40) = uVar6
                                        ;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_SparkPescaJanela + 0xb8) + 0x40,
                                                            uVar6);
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (lVar5,*(undefined8 *)
                                                          (*(longlong *)
                                                            (TI_SparkPescaJanela + 0xb8) + 0x40),0)
                                        ;
                                        lVar9 = *(longlong *)
                                                 (*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30)
                                        ;
                                        if (lVar9 != 0) {
                                          UnityEngine_UIElements_VisualElement__Add(lVar9,lVar5,0);
                                          lVar5 = *(longlong *)
                                                   (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                   0x30);
                                          uVar6 = SparkEstilo__Divisor__18071f770(0);
                                          if (lVar5 != 0) {
                                            UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0)
                                            ;
                                            lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                            UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                                            if (lVar5 != 0) {
                                              UnityEngine_UIElements_VisualElement__set_pickingMode
                                                        (lVar5,1,0);
                                              plVar7 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                              puVar8 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x41200000,0);
                                              if (plVar7 != (longlong *)0x0) {
                                                lVar9 = *plVar7;
                                                uVar6 = *puVar8;
                                                uVar14 = *(undefined4 *)(puVar8 + 1);
                                                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                  uVar12 = uVar13;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar9 + 0xb0) +
                                                         uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar8 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar9 + 0xb0) + 8 +
                                                                         uVar12 * 0x10) + 0x43) *
                                                                0x10 + 0x138 + lVar9);
                                                      goto code_r0x00018084aec9;
                                                    }
                                                    uVar11 = (short)uVar12 + 1;
                                                    uVar12 = (ulonglong)uVar11;
                                                  } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                                }
                                                puVar8 = (undefined8 *)
                                                         FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018084aec9:
                                                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                uStack_e8 = uVar6;
                                                (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                uVar6 = func_0x000182601c10();
                                                if (lVar9 != 0) {
                                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                                                  plVar7 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40a00000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018084af99;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018084af99:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uStack_e8 = 0;
                                                  uStack_e0 = 0x3f0ccccd00000000;
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (auStack_50,&uStack_e8,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar2 = puVar8[1];
                                                    uVar14 = *(undefined4 *)(puVar8 + 2);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 9) *
                                                                    0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018084b039;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018084b039:
                                                    uStack_e8 = uVar6;
                                                    uStack_e0 = uVar2;
                                                    uStack_d8 = uVar14;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    uStack_e8 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x30);
                                                    uStack_e0 = *(undefined8 *)
                                                                 (*(longlong *)
                                                                   (TI_SparkEstilo + 0xb8) + 0x38);
                                                    SparkEstilo__Borda__18071da60
                                                              (lVar5,&uStack_e8,0x3f800000,0,0);
                                                    lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar9,0);
                                                    if (lVar9 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar9,1,0);
                                                  *(longlong *)
                                                   (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                   0x38) = lVar9;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_SparkPescaJanela + 0xb8)
                                                                      + 0x38,lVar9);
                                                  lVar9 = *(longlong *)
                                                           (*(longlong *)
                                                             (TI_SparkPescaJanela + 0xb8) + 0x38);
                                                  if (lVar9 != 0) {
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar6 = func_0x0001825fc350();
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,uVar6,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x43)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018084b189;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x43);
code_r0x00018084b189:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    lVar9 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x38)
                                                    ;
                                                    if (lVar9 != 0) {
                                                      plVar7 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uStack_e8 = **(undefined8 **)
                                                                (TI_SparkPescaJanela + 0xb8);
                                                  uStack_e0 = (*(undefined8 **)
                                                                (TI_SparkPescaJanela + 0xb8))[1];
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (auStack_50,&uStack_e8,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar2 = puVar8[1];
                                                    uVar14 = *(undefined4 *)(puVar8 + 2);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 9) *
                                                                    0x10 + 0x138 + lVar9);
                                                          goto code_r0x00018084b249;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018084b249:
                                                    uStack_e8 = uVar6;
                                                    uStack_e0 = uVar2;
                                                    uStack_d8 = uVar14;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (*(longlong *)
                                                                        (TI_SparkPescaJanela + 0xb8
                                                                        ) + 0x38),0);
                                                    lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar9,0);
                                                    if (lVar9 != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar9,1,0);
                                                  lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uVar6 = func_0x0001825fc350();
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,uVar6,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x47)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x00018084b379;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x47);
code_r0x00018084b379:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0xc0000000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x73)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x00018084b419;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x73);
code_r0x00018084b419:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0xc0000000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x2d)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x00018084b4b9;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x2d);
code_r0x00018084b4b9:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x3f800000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0xad)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x00018084b559;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0xad);
code_r0x00018084b559:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  uStack_e8 = *(undefined8 *)
                                                               (*(longlong *)(TI_SparkEstilo + 0xb8)
                                                               + 0x60);
                                                  uStack_e0 = *(undefined8 *)
                                                               (*(longlong *)(TI_SparkEstilo + 0xb8)
                                                               + 0x68);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (auStack_50,&uStack_e8,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar2 = puVar8[1];
                                                    uVar14 = *(undefined4 *)(puVar8 + 2);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 9) *
                                                                    0x10 + 0x138 + lVar10);
                                                          goto code_r0x00018084b609;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018084b609:
                                                    uStack_e8 = uVar6;
                                                    uStack_e0 = uVar2;
                                                    uStack_d8 = uVar14;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,lVar9,0);
                                                    lVar9 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar9 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar9,lVar5,0);
                                                      uStack_e8 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x50)
                                                      ;
                                                      uStack_e0 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x58)
                                                      ;
                                                      uStack_88 = 0;
                                                      uStack_98 = 0;
                                                      uStack_90 = 0;
                                                      func_0x000180cb7cb0(&uStack_98,&uStack_e8,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_e8 = uStack_98;
                                                      uStack_e0 = uStack_90;
                                                      uStack_d8 = uStack_88;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",10,
                                                                         &uStack_e8,0,0);
                                                      *(undefined8 *)
                                                       (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                       0x48) = uVar6;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkPescaJanela +
                                                                           0xb8) + 0x48,uVar6);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x48);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x48)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,*(undefined8 *)
                                                                        (*(longlong *)
                                                                          (TI_SparkPescaJanela +
                                                                          0xb8) + 0x48),0);
                                                      uStack_e8 = 0;
                                                      uStack_e0 = 0;
                                                      uStack_d8 = 0;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xb,
                                                                         &uStack_e8,0,0);
                                                      *(undefined8 *)
                                                       (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                       0x50) = uVar6;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkPescaJanela +
                                                                           0xb8) + 0x50,uVar6);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x50);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x50)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x50)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      plVar7 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40000000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar5 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018084b949;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018084b949:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,*(undefined8 *)
                                                                        (*(longlong *)
                                                                          (TI_SparkPescaJanela +
                                                                          0xb8) + 0x50),0);
                                                      uStack_e8 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x60)
                                                      ;
                                                      uStack_e0 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x68)
                                                      ;
                                                      uStack_70 = 0;
                                                      uStack_80 = 0;
                                                      uStack_78 = 0;
                                                      func_0x000180cb7cb0(&uStack_80,&uStack_e8,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_e8 = uStack_80;
                                                      uStack_e0 = uStack_78;
                                                      uStack_d8 = uStack_70;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xe,
                                                                         &uStack_e8,1,0);
                                                      *(undefined8 *)
                                                       (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                       0x58) = uVar6;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkPescaJanela +
                                                                           0xb8) + 0x58,uVar6);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x58);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x58)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x58)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      plVar7 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x40400000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar5 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018084bb59;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018084bb59:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,*(undefined8 *)
                                                                        (*(longlong *)
                                                                          (TI_SparkPescaJanela +
                                                                          0xb8) + 0x58),0);
                                                      uStack_e8 = 0;
                                                      uStack_e0 = 0;
                                                      uStack_d8 = 0;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",10,
                                                                         &uStack_e8,0,0);
                                                      *(undefined8 *)
                                                       (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                       0x68) = uVar6;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkPescaJanela +
                                                                           0xb8) + 0x68,uVar6);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x68);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x68)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x68)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      plVar7 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_e8,0x41500000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar5 = *plVar7;
                                                    uVar6 = *puVar8;
                                                    uVar14 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x57)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018084bd29;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x57);
code_r0x00018084bd29:
                                                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
                                                    uStack_e8 = uVar6;
                                                    (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,*(undefined8 *)
                                                                        (*(longlong *)
                                                                          (TI_SparkPescaJanela +
                                                                          0xb8) + 0x68),0);
                                                      uStack_e8 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x60)
                                                      ;
                                                      uStack_e0 = *(undefined8 *)
                                                                   (*(longlong *)
                                                                     (TI_SparkEstilo + 0xb8) + 0x68)
                                                      ;
                                                      uStack_58 = 0;
                                                      uStack_68 = 0;
                                                      uStack_60 = 0;
                                                      func_0x000180cb7cb0(&uStack_68,&uStack_e8,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_e8 = uStack_68;
                                                      uStack_e0 = uStack_60;
                                                      uStack_d8 = uStack_58;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",10,
                                                                         &uStack_e8,0,0);
                                                      *(undefined8 *)
                                                       (*(longlong *)(TI_SparkPescaJanela + 0xb8) +
                                                       0x60) = uVar6;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkPescaJanela +
                                                                           0xb8) + 0x60,uVar6);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x60);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x60)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    lVar5 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,*(undefined8 *)
                                                                        (*(longlong *)
                                                                          (TI_SparkPescaJanela +
                                                                          0xb8) + 0x60),0);
                                                      lVar5 = *(longlong *)
                                                               (*(longlong *)
                                                                 (TI_SparkPescaJanela + 0xb8) +
                                                               0x30);
                                                      if (lVar5 != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,*(undefined8 *)
                                                                      (*(longlong *)
                                                                        (TI_SparkPescaJanela + 0xb8
                                                                        ) + 0x30),0);
                                                    lVar4 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SparkPescaJanela + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar4 != 0) {
                                                      plVar7 = (longlong *)
                                                               func_0x0001818f3de0(lVar4,0);
                                                      uVar6 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar6,0,MD_SparkPescaJanela.Relogio,0);
                                                      if (plVar7 != (longlong *)0x0) {
                                                        lVar4 = *plVar7;
                                                        if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                          uVar12 = uVar13;
                                                          do {
                                                            if (*(longlong *)
                                                                 (*(longlong *)(lVar4 + 0xb0) +
                                                                 uVar12 * 0x10) ==
                                                                TI_UnityEngine.UIElements.IVisualElementScheduler) {
                                                              puVar8 = (undefined8 *)
                                                                       ((longlong)
                                                                        (*(int *)(*(longlong *)
                                                                                   (lVar4 + 0xb0) +
                                                                                  8 + uVar12 * 0x10)
                                                                        + 1) * 0x10 + 0x138 + lVar4)
                                                              ;
                                                              goto code_r0x00018084bfd9;
                                                            }
                                                            uVar11 = (short)uVar12 + 1;
                                                            uVar12 = (ulonglong)uVar11;
                                                          } while (uVar11 < *(ushort *)
                                                                             (lVar4 + 0x12e));
                                                        }
                                                        puVar8 = (undefined8 *)
                                                                 FUN_180312860(plVar7,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduler,1);
code_r0x00018084bfd9:
                                                  plVar7 = (longlong *)
                                                           (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]
                                                                             );
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar4 = *plVar7;
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             uVar13 * 0x10) == TI_UnityEngine.UIElements.IVisualElementScheduledItem)
                                                        {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             uVar13 * 0x10) + 5) *
                                                                    0x10 + 0x138 + lVar4);
                                                          goto code_r0x00018084c049;
                                                        }
                                                        uVar11 = (short)uVar13 + 1;
                                                        uVar13 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduledItem,5);
code_r0x00018084c049:
                                                  (*(code *)*puVar8)(plVar7,100,puVar8[1]);
                                                  return 1;
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
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
  }
  return 0;
}

