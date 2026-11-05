// SparkQuestHud__Monta__1806b1a70 @ 0x1806b1a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__Monta__1806b1a70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar15;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uVar14;
  
  if (cRam00000001834b3fd9 == '\0') {
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
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.UIElements.ScrollView);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkQuestHud.AtualizaContas);
    FUN_180315380(MD_SparkQuestHud.PosicaoInicial);
    FUN_180315380(MD_SparkQuestHud.Redesenha);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__0);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__1);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__2);
    FUN_180315380(TI_SparkQuestHud.<>c__DisplayClass19_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Quest/spark_quest_seta'");
    FUN_180315380(LIT_"'QUEST'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'::::'");
    cRam00000001834b3fd9 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_SparkQuestHud.<>c__DisplayClass19_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar6,0);
  if (lVar6 != 0) {
    *(longlong *)(lVar6 + 0x10) = param_1;
    func_0x000180314690(lVar6 + 0x10,param_1);
    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    func_0x000180314690(param_1 + 0x20,uVar7);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
      uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar8 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          plVar9 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
          puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_f8);
          if (plVar9 != (longlong *)0x0) {
            lVar8 = *plVar9;
            uVar15 = 0;
            uVar7 = *puVar10;
            uVar1 = *(undefined4 *)(puVar10 + 1);
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar14 = uVar15;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar14 * 0x10) + 0x69) *
                             0x10 + 0x138 + lVar8);
                  goto code_r0x0001806b1d99;
                }
                uVar13 = (short)uVar14 + 1;
                uVar14 = (ulonglong)uVar13;
              } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001806b1d99:
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
            uStack_f8 = uVar7;
            (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
            if (*(longlong *)(param_1 + 0x20) != 0) {
              plVar9 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x20),0);
              puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_f8);
              if (plVar9 != (longlong *)0x0) {
                lVar8 = *plVar9;
                uVar7 = *puVar10;
                uVar1 = *(undefined4 *)(puVar10 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar14 = uVar15;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar14 * 0x10) + 0x73)
                                 * 0x10 + 0x138 + lVar8);
                      goto code_r0x0001806b1e39;
                    }
                    uVar13 = (short)uVar14 + 1;
                    uVar14 = (ulonglong)uVar13;
                  } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806b1e39:
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                uStack_f8 = uVar7;
                (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
                if (*(longlong *)(param_1 + 0x20) != 0) {
                  plVar9 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x20),0);
                  puVar10 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_f8);
                  if (plVar9 != (longlong *)0x0) {
                    lVar8 = *plVar9;
                    uVar7 = *puVar10;
                    uVar1 = *(undefined4 *)(puVar10 + 1);
                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                      uVar14 = uVar15;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar10 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar14 * 0x10) +
                                     0xad) * 0x10 + 0x138 + lVar8);
                          goto code_r0x0001806b1ed9;
                        }
                        uVar13 = (short)uVar14 + 1;
                        uVar14 = (ulonglong)uVar13;
                      } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                    }
                    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806b1ed9:
                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                    uStack_f8 = uVar7;
                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
                    if (*(longlong *)(param_1 + 0x20) != 0) {
                      plVar9 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(param_1 + 0x20),0);
                      uStack_f8 = 0;
                      uStack_f0 = 0x3ee6666600000000;
                      puVar10 = (undefined8 *)
                                UnityEngine_UIElements_StyleColor__op_Implicit
                                          (&uStack_88,&uStack_f8,0);
                      if (plVar9 != (longlong *)0x0) {
                        lVar8 = *plVar9;
                        uVar7 = *puVar10;
                        uVar11 = puVar10[1];
                        uVar1 = *(undefined4 *)(puVar10 + 2);
                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                          uVar14 = uVar15;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar14 * 0x10)
                                         + 9) * 0x10 + 0x138 + lVar8);
                              goto code_r0x0001806b1f89;
                            }
                            uVar13 = (short)uVar14 + 1;
                            uVar14 = (ulonglong)uVar13;
                          } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806b1f89:
                        uStack_f8 = uVar7;
                        uStack_f0 = uVar11;
                        uStack_e8 = uVar1;
                        (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
                        uVar7 = *(undefined8 *)(param_1 + 0x20);
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uStack_f8 = 0x3ea8f5c33eb851ec;
                        uStack_f0 = 0x3f19999a3e851eb8;
                        SparkEstilo__Borda__18071da60(uVar7,&uStack_f8,0x3f800000,0x40400000,0);
                        SparkEstilo__Espaco__18071fb80(*(undefined8 *)(param_1 + 0x20));
                        if (*(longlong *)(param_1 + 0x20) != 0) {
                          UnityEngine_UIElements_VisualElement__set_pickingMode
                                    (*(longlong *)(param_1 + 0x20),0,0);
                          uVar7 = *(undefined8 *)(param_1 + 0x20);
                          uVar11 = func_0x000180315580(TI_MouseOverDetectionManipulator);
                          MouseOverDetectionManipulator___ctor__1807b03c0(uVar11,uVar7,0);
                          UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                    (uVar7,uVar11,0);
                          uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                          UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
                          *(undefined8 *)(lVar6 + 0x18) = uVar7;
                          func_0x000180314690(lVar6 + 0x18,uVar7);
                          if (*(longlong *)(lVar6 + 0x18) != 0) {
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(lVar6 + 0x18),0);
                            uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                            if (lVar8 != 0) {
                              FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                              if (*(longlong *)(lVar6 + 0x18) != 0) {
                                lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar6 + 0x18),0);
                                uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                if (lVar8 != 0) {
                                  FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                                    plVar9 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*(longlong *)(lVar6 + 0x18),0);
                                    puVar10 = (undefined8 *)
                                              UnityEngine_UIElements_StyleLength__op_Implicit
                                                        (&uStack_f8);
                                    if (plVar9 != (longlong *)0x0) {
                                      lVar8 = *plVar9;
                                      uVar7 = *puVar10;
                                      uVar1 = *(undefined4 *)(puVar10 + 1);
                                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                        uVar14 = uVar15;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar10 = (undefined8 *)
                                                      ((longlong)
                                                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                                uVar14 * 0x10) + 0x43) * 0x10 +
                                                       0x138 + lVar8);
                                            goto code_r0x0001806b21a9;
                                          }
                                          uVar13 = (short)uVar14 + 1;
                                          uVar14 = (ulonglong)uVar13;
                                        } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                                      }
                                      puVar10 = (undefined8 *)
                                                FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806b21a9:
                                      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                      uStack_f8 = uVar7;
                                      (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
                                      if (*(longlong *)(lVar6 + 0x18) != 0) {
                                        plVar9 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (*(longlong *)(lVar6 + 0x18),0);
                                        puVar10 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                        if (plVar9 != (longlong *)0x0) {
                                          lVar8 = *plVar9;
                                          uVar7 = *puVar10;
                                          uVar1 = *(undefined4 *)(puVar10 + 1);
                                          if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                            uVar14 = uVar15;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar8 + 0xb0) + uVar14 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar10 = (undefined8 *)
                                                          ((longlong)
                                                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8
                                                                    + uVar14 * 0x10) + 0x4b) * 0x10
                                                           + 0x138 + lVar8);
                                                goto code_r0x0001806b2249;
                                              }
                                              uVar13 = (short)uVar14 + 1;
                                              uVar14 = (ulonglong)uVar13;
                                            } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                                          }
                                          puVar10 = (undefined8 *)
                                                    FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001806b2249:
                                          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                          uStack_f8 = uVar7;
                                          (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]);
                                          uStack_f8 = *(undefined8 *)
                                                       (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50)
                                          ;
                                          uStack_f0 = *(undefined8 *)
                                                       (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58)
                                          ;
                                          uStack_c8 = 0;
                                          uStack_d8 = 0;
                                          uStack_d0 = 0;
                                          func_0x000180cb7cb0(&uStack_d8,&uStack_f8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                          uStack_f8 = uStack_d8;
                                          uStack_f0 = uStack_d0;
                                          uStack_e8 = uStack_c8;
                                          lVar8 = SparkEstilo__Texto__180722af0
                                                            (LIT_"'QUEST'",9,&uStack_f8,1,0);
                                          if (lVar8 != 0) {
                                            lVar12 = UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar8,0);
                                            uVar7 = func_0x000182601c10();
                                            if (lVar12 != 0) {
                                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar7);
                                              if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (*(longlong *)(lVar6 + 0x18),lVar8,0);
                                                lVar8 = *(longlong *)(lVar6 + 0x18);
                                                uStack_f8 = *(undefined8 *)
                                                             (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                             0x50);
                                                uStack_f0 = *(undefined8 *)
                                                             (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                             0x58);
                                                uStack_b0 = 0;
                                                uStack_c0 = 0;
                                                uStack_b8 = 0;
                                                func_0x000180cb7cb0(&uStack_c0,&uStack_f8,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_f8 = uStack_c0;
                                                uStack_f0 = uStack_b8;
                                                uStack_e8 = uStack_b0;
                                                uVar7 = SparkEstilo__Texto__180722af0
                                                                  (LIT_"'::::'",9,&uStack_f8
                                                                   ,1,0);
                                                if (lVar8 != 0) {
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar8,uVar7,0);
                                                  if (*(longlong *)(lVar6 + 0x18) != 0) {
                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(lVar6 + 0x18),0,0);
                                                  lVar8 = *(longlong *)(lVar6 + 0x18);
                                                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                  FUN_18055b980(uVar7,lVar6,MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__0,0);
                                                  if (lVar8 != 0) {
                                                    FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                    lVar8 = *(longlong *)(lVar6 + 0x18);
                                                    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                    FUN_18055b980(uVar7,lVar6,MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__1,0
                                                                 );
                                                    if (lVar8 != 0) {
                                                      FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent>);
                                                      lVar8 = *(longlong *)(lVar6 + 0x18);
                                                      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                      FUN_18055b980(uVar7,lVar6,MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__2
                                                                    ,0);
                                                      if (lVar8 != 0) {
                                                        FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                                                        if (*(longlong *)(param_1 + 0x20) != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (*(longlong *)(param_1 + 0x20),
                                                                     *(undefined8 *)(lVar6 + 0x18),0
                                                                    );
                                                          uVar7 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.ScrollView);
                                                  UnityEngine_UIElements_ScrollView___ctor
                                                            (uVar7,0,0);
                                                  *(undefined8 *)(param_1 + 0x40) = uVar7;
                                                  func_0x000180314690(param_1 + 0x40,uVar7);
                                                  if (*(longlong *)(param_1 + 0x40) != 0) {
                                                                                                        
                                                  UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility
                                                            (*(longlong *)(param_1 + 0x40),2,0);
                                                  SparkUI__Rolagem(*(undefined8 *)(param_1 + 0x40),0
                                                                  );
                                                  if (*(longlong *)(param_1 + 0x40) != 0) {
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x40),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0x53)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2599;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x53);
code_r0x0001806b2599:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    plVar9 = *(longlong **)(param_1 + 0x40);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      uVar7 = (**(code **)(*plVar9 + 0x9d8))
                                                                        (plVar9,*(undefined8 *)
                                                                                 (*plVar9 + 0x9e0));
                                                      *(undefined8 *)(param_1 + 0x28) = uVar7;
                                                      func_0x000180314690(param_1 + 0x28,uVar7);
                                                      if (*(longlong *)(param_1 + 0x20) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x20),
                                                                   *(undefined8 *)(param_1 + 0x40),0
                                                                  );
                                                        if (param_2 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (param_2,*(undefined8 *)
                                                                              (param_1 + 0x20),0);
                                                          lVar6 = *(longlong *)(param_1 + 0x20);
                                                          uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>
                                                                                     );
                                                          FUN_18055b980(uVar7,param_1,
                                                                        MD_SparkQuestHud.PosicaoInicial,0);
                                                          if (lVar6 != 0) {
                                                            FUN_180990d50(lVar6,uVar7,0,
                                                                          MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
                                                            uVar7 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.VisualElement);
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (uVar7,0);
                                                  *(undefined8 *)(param_1 + 0x30) = uVar7;
                                                  func_0x000180314690(param_1 + 0x30,uVar7);
                                                  if (*(longlong *)(param_1 + 0x30) != 0) {
                                                    lVar6 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar6 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                                    if (*(longlong *)(param_1 + 0x30) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0xad)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2759;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0xad);
code_r0x0001806b2759:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x30) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0x43)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b27f9;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x0001806b27f9:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x30) != 0) {
                                                      lVar6 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar6 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                                    if (*(longlong *)(param_1 + 0x30) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(param_1 + 0x30),1,0);
                                                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (uVar7,0);
                                                  *(undefined8 *)(param_1 + 0x38) = uVar7;
                                                  func_0x000180314690(param_1 + 0x38,uVar7);
                                                  if (*(longlong *)(param_1 + 0x38) != 0) {
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x38),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0xad)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2929;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0xad);
code_r0x0001806b2929:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x38) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x38),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0x43)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b29c9;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x0001806b29c9:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x38) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x38),0);
                                                  uVar7 = SparkEstilo__Textura__180723790
                                                                    (LIT_"'Quest/spark_quest_seta'",0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackground__op_Implicit
                                                            (&uStack_88,uVar7,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar11 = *puVar10;
                                                    uVar3 = puVar10[1];
                                                    uVar4 = puVar10[2];
                                                    uVar5 = puVar10[3];
                                                    uVar7 = puVar10[4];
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0xb)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2a89;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0xb);
code_r0x0001806b2a89:
                                                    uStack_88 = uVar11;
                                                    uStack_80 = uVar3;
                                                    uStack_78 = uVar4;
                                                    uStack_70 = uVar5;
                                                    uStack_68 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x38) != 0) {
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (*(longlong *)(param_1 + 0x38),1,0);
                                                  if (*(longlong *)(param_1 + 0x30) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0x30),
                                                               *(undefined8 *)(param_1 + 0x38),0);
                                                    uStack_f8 = 0x3f5cdcdd3f800000;
                                                    uStack_f0 = 0x3f8000003f0c8c8d;
                                                    uStack_a8 = 0;
                                                    uStack_a0 = 0;
                                                    uStack_98 = 0;
                                                    func_0x000180cb7cb0(&uStack_a8,&uStack_f8,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_f8 = uStack_a8;
                                                    uStack_f0 = uStack_a0;
                                                    uStack_e8 = uStack_98;
                                                    uVar7 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"''",0xb,&uStack_f8
                                                                       ,1,0);
                                                    *(undefined8 *)(param_1 + 0x58) = uVar7;
                                                    func_0x000180314690(param_1 + 0x58,uVar7);
                                                    if (*(longlong *)(param_1 + 0x58) != 0) {
                                                      lVar6 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x58),0);
                                                  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar6 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                                    if (*(longlong *)(param_1 + 0x58) != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x58),0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_f8);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar14 * 0x10) + 0x51)
                                                                     * 0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2c29;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x51);
code_r0x0001806b2c29:
                                                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
                                                    uStack_f8 = uVar7;
                                                    (*(code *)*puVar10)(plVar9,&uStack_f8,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0x30) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x30),
                                                                 *(undefined8 *)(param_1 + 0x58),0);
                                                      if (*(longlong *)(param_1 + 0x30) != 0) {
                                                        lVar6 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar6 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (param_2,*(undefined8 *)
                                                                        (param_1 + 0x30),0);
                                                    uVar7 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar7,param_1,MD_SparkQuestHud.Redesenha
                                                                  ,0);
                                                    if (*(int *)(TI_SparkQuests + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    SparkQuests__add_Mudou(uVar7,0);
                                                    uVar7 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar7,param_1,MD_SparkQuestHud.Redesenha
                                                                  ,0);
                                                    SparkQuests__add_MudouAcompanhamento(uVar7,0);
                                                    if (*(longlong *)(param_1 + 0x20) != 0) {
                                                      plVar9 = (longlong *)
                                                               func_0x0001818f3de0(*(longlong *)
                                                                                    (param_1 + 0x20)
                                                                                   ,0);
                                                      uVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar7,param_1,
                                                                    MD_SparkQuestHud.AtualizaContas,0);
                                                      if (plVar9 != (longlong *)0x0) {
                                                        lVar6 = *plVar9;
                                                        if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                          uVar14 = uVar15;
                                                          do {
                                                            if (*(longlong *)
                                                                 (*(longlong *)(lVar6 + 0xb0) +
                                                                 uVar14 * 0x10) ==
                                                                TI_UnityEngine.UIElements.IVisualElementScheduler) {
                                                              puVar10 = (undefined8 *)
                                                                        ((longlong)
                                                                         (*(int *)(*(longlong *)
                                                                                    (lVar6 + 0xb0) +
                                                                                   8 + uVar14 * 0x10
                                                                                  ) + 1) * 0x10 +
                                                                         0x138 + lVar6);
                                                              goto code_r0x0001806b2db9;
                                                            }
                                                            uVar13 = (short)uVar14 + 1;
                                                            uVar14 = (ulonglong)uVar13;
                                                          } while (uVar13 < *(ushort *)
                                                                             (lVar6 + 0x12e));
                                                        }
                                                        puVar10 = (undefined8 *)
                                                                  FUN_180312860(plVar9,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduler,1);
code_r0x0001806b2db9:
                                                  plVar9 = (longlong *)
                                                           (*(code *)*puVar10)(plVar9,uVar7,
                                                                               puVar10[1]);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    lVar6 = *plVar9;
                                                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar6 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IVisualElementScheduledItem)
                                                        {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar6 + 0xb0) + 8 +
                                                                              uVar15 * 0x10) + 5) *
                                                                     0x10 + 0x138 + lVar6);
                                                          goto code_r0x0001806b2e29;
                                                        }
                                                        uVar13 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,
                                                  TI_UnityEngine.UIElements.IVisualElementScheduledItem,5);
code_r0x0001806b2e29:
                                                  (*(code *)*puVar10)(plVar9,1000,puVar10[1]);
                                                  SparkQuestHud__Redesenha__1806b3b90(param_1,0);
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

