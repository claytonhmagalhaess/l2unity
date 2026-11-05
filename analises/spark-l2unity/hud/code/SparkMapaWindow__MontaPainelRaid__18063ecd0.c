// SparkMapaWindow__MontaPainelRaid__18063ecd0 @ 0x18063ecd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MontaPainelRaid__18063ecd0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort uVar11;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar12;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (cRam00000001834b3d2e == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeBosses>);
    FUN_180315380(TI_SparkMapaWindow.ListaDeBosses);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.TextAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkMapaWindow.MostraAbaRaid);
    FUN_180315380(MD_SparkMapaWindow._MontaPainelRaid_b__169_1);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkMapaWindow.__c._MontaPainelRaid_b__169_0);
    FUN_180315380(TI_SparkMapaWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Raid Boss'");
    FUN_180315380(LIT_"'SparkMapaWindow: sem Data/Npc/spark_raidboss.json'");
    FUN_180315380(LIT_"'Grand Boss'");
    FUN_180315380(LIT_"'Data/Npc/spark_raidboss'");
    cRam00000001834b3d2e = '\x01';
  }
  uVar5 = func_0x000180315580(TI_SparkMapaWindow.ListaDeBosses);
  SparkMapaWindow_Loja___ctor__1803f01b0(uVar5,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  func_0x000180314690(param_1 + 0x1b0,uVar5);
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = FUN_180a90ae0(LIT_"'Data/Npc/spark_raidboss'",MR_SparkArte.Load<UnityEngine.TextAsset>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if (cVar4 == '\0') {
    if (lVar6 != 0) {
      uVar5 = UnityEngine_TextAsset__ToString(lVar6,0);
      lVar7 = FUN_180a18af0(uVar5,MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeBosses>);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x1b0);
      }
      *(longlong *)(param_1 + 0x1b0) = lVar7;
      func_0x000180314690(param_1 + 0x1b0,lVar7);
      UnityEngine_Resources__UnloadAsset(lVar6,0);
      goto code_r0x00018063efc2;
    }
  }
  else {
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(LIT_"'SparkMapaWindow: sem Data/Npc/spark_raidboss.json'",0);
code_r0x00018063efc2:
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
    *(undefined8 *)(param_1 + 0x1b8) = uVar5;
    func_0x000180314690(param_1 + 0x1b8,uVar5);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0);
      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
        if (*(longlong *)(param_1 + 0x1b8) != 0) {
          plVar8 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0)
          ;
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
          if (plVar8 != (longlong *)0x0) {
            uVar5 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            lVar6 = *plVar8;
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar6);
                  goto code_r0x00018063f0c9;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x00018063f0c9:
            uStack_88 = uVar5;
            uStack_80 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
            if (*(longlong *)(param_1 + 0x1b8) != 0) {
              plVar8 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x1b8),0);
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
              if (plVar8 != (longlong *)0x0) {
                uVar5 = *puVar9;
                uVar1 = *(undefined4 *)(puVar9 + 1);
                lVar6 = *plVar8;
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar9 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10
                                         ) + 0x73) * 0x10 + 0x138 + lVar6);
                      goto code_r0x00018063f169;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018063f169:
                uStack_88 = uVar5;
                uStack_80 = uVar1;
                (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
                if (*(longlong *)(param_1 + 0x1b8) != 0) {
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x1b8),0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
                  if (plVar8 != (longlong *)0x0) {
                    uVar5 = *puVar9;
                    uVar1 = *(undefined4 *)(puVar9 + 1);
                    lVar6 = *plVar8;
                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                      uVar11 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar9 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                             (ulonglong)uVar11 * 0x10) + 0x2d) * 0x10 + 0x138 +
                                   lVar6);
                          goto code_r0x00018063f209;
                        }
                        uVar11 = uVar11 + 1;
                      } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x00018063f209:
                    uStack_88 = uVar5;
                    uStack_80 = uVar1;
                    (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
                    if (*(longlong *)(param_1 + 0x1b8) != 0) {
                      lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0x1b8),0);
                      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      if (lVar6 != 0) {
                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                        uVar5 = *(undefined8 *)(param_1 + 0x1b8);
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        SparkEstilo__Moldura__180721b40(uVar5,0);
                        if (*(longlong *)(param_1 + 0x1b8) != 0) {
                          plVar8 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(param_1 + 0x1b8),0);
                          puVar9 = *(undefined8 **)(TI_SparkEstilo + 0xb8);
                          uStack_88 = *puVar9;
                          uStack_80 = *(undefined4 *)(puVar9 + 1);
                          uStack_7c = *(undefined4 *)((longlong)puVar9 + 0xc);
                          puVar9 = (undefined8 *)
                                   UnityEngine_UIElements_StyleColor__op_Implicit
                                             (&uStack_68,&uStack_88,0);
                          if (plVar8 != (longlong *)0x0) {
                            uVar5 = *puVar9;
                            uVar3 = puVar9[1];
                            uVar1 = *(undefined4 *)(puVar9 + 2);
                            lVar6 = *plVar8;
                            if (*(ushort *)(lVar6 + 0x12e) != 0) {
                              uVar11 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                     (ulonglong)uVar11 * 0x10) + 9) * 0x10 + 0x138 +
                                           lVar6);
                                  goto code_r0x00018063f339;
                                }
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018063f339:
                            uStack_68 = uVar5;
                            uStack_60 = uVar3;
                            uStack_58 = uVar1;
                            (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
                            SparkEstilo__Espaco__18071fb80
                                      (*(undefined8 *)(param_1 + 0x1b8),0x40800000,0x40800000,
                                       0x40800000,CONCAT44(uVar12,0x40800000),0);
                            lVar6 = *(longlong *)(param_1 + 0x1b8);
                            if (*(int *)(TI_SparkMapaWindow.<>c + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow.<>c + 0xb8) + 8);
                            if (lVar7 == 0) {
                              if (*(int *)(TI_SparkMapaWindow.<>c + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar5 = **(undefined8 **)(TI_SparkMapaWindow.<>c + 0xb8);
                              lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent>);
                              FUN_18055b980(lVar7,uVar5,MD_SparkMapaWindow.__c._MontaPainelRaid_b__169_0,0);
                              *(longlong *)(*(longlong *)(TI_SparkMapaWindow.<>c + 0xb8) + 8) = lVar7;
                              func_0x000180314690(*(longlong *)(TI_SparkMapaWindow.<>c + 0xb8) + 8,
                                                  lVar7);
                            }
                            if (lVar6 == 0) {
code_r0x00018063fa63:
                              FUN_1803155d0();
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            FUN_180990d50(lVar6,lVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>);
                            lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
                            if (lVar6 == 0) goto code_r0x00018063fa63;
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                            uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                            if (plVar8 == (longlong *)0x0) goto code_r0x00018063fa63;
                            lVar7 = *plVar8;
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar11 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                     (ulonglong)uVar11 * 0x10) + 0x39) * 0x10 +
                                            0x138 + lVar7);
                                  goto code_r0x00018063f4d9;
                                }
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x00018063f4d9:
                            (*(code *)*puVar9)(plVar8,uVar5,puVar9[1]);
                            lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                            uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                            if (lVar7 == 0) goto code_r0x00018063fa63;
                            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar5);
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                            puVar9 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_88,0x41a00000,0);
                            if (plVar8 == (longlong *)0x0) goto code_r0x00018063fa63;
                            uVar5 = *puVar9;
                            uVar12 = *(undefined4 *)(puVar9 + 1);
                            lVar7 = *plVar8;
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar11 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                     (ulonglong)uVar11 * 0x10) + 0x43) * 0x10 +
                                            0x138 + lVar7);
                                  goto code_r0x00018063f5a9;
                                }
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063f5a9:
                            uStack_88 = uVar5;
                            uStack_80 = uVar12;
                            (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
                            lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                            uVar5 = func_0x000182601c10(0,0);
                            if (lVar7 == 0) goto code_r0x00018063fa63;
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar5);
                            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                              func_0x000180315660(TI_SparkEstilo);
                            }
                            lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                            uStack_88 = *(undefined8 *)(lVar7 + 0x70);
                            uStack_80 = *(undefined4 *)(lVar7 + 0x78);
                            uStack_7c = *(undefined4 *)(lVar7 + 0x7c);
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_58 = 0;
                            func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
                            uStack_88 = uStack_68;
                            uStack_80 = (undefined4)uStack_60;
                            uStack_7c = uStack_60._4_4_;
                            uStack_78 = uStack_58;
                            lVar7 = SparkEstilo__Texto__180722af0
                                              (LIT_"'Raid Boss'",0xc,&uStack_88,1,0);
                            if (lVar7 == 0) goto code_r0x00018063fa63;
                            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar5 = func_0x000182601c10(0x3f800000,0);
                            if (lVar10 == 0) goto code_r0x00018063fa63;
                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            puVar9 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_88,0x40000000,0);
                            if (plVar8 == (longlong *)0x0) goto code_r0x00018063fa63;
                            uVar5 = *puVar9;
                            uVar12 = *(undefined4 *)(puVar9 + 1);
                            lVar10 = *plVar8;
                            if (*(ushort *)(lVar10 + 0x12e) != 0) {
                              uVar11 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                     (ulonglong)uVar11 * 0x10) + 0x4d) * 0x10 +
                                            0x138 + lVar10);
                                  goto code_r0x00018063f749;
                                }
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018063f749:
                            uStack_88 = uVar5;
                            uStack_80 = uVar12;
                            (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
                            UnityEngine_UIElements_VisualElement__Add(lVar6,lVar7,0);
                            uVar5 = func_0x000180315580(TI_System.Action);
                            FUN_1816a9c60(uVar5,param_1,MD_SparkMapaWindow._MontaPainelRaid_b__169_1,0);
                            uVar5 = SparkEstilo__Fechar__180720510(uVar5,0);
                            UnityEngine_UIElements_VisualElement__Add(lVar6,uVar5,0);
                            if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x00018063fa63;
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(param_1 + 0x1b8),lVar6,0);
                            lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
                            if (lVar6 == 0) goto code_r0x00018063fa63;
                            lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                            uVar5 = func_0x000182601c10(0,0);
                            if (lVar7 == 0) goto code_r0x00018063fa63;
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar5);
                            if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x00018063fa63;
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(param_1 + 0x1b8),lVar6,0);
                            uVar5 = SparkEstilo__Lista__1807211b0(0);
                            *(undefined8 *)(param_1 + 0x1c0) = uVar5;
                            func_0x000180314690(param_1 + 0x1c0,uVar5);
                            if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x00018063fa63;
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(param_1 + 0x1b8),
                                       *(undefined8 *)(param_1 + 0x1c0),0);
                            if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x00018063fa63;
                            UnityEngine_UIElements_VisualElement__Add
                                      (*(longlong *)(param_1 + 0xb0),
                                       *(undefined8 *)(param_1 + 0x1b8),0);
                            SparkMapaWindow__AjustaPainelRaid__180637cb0(param_1,0);
                            lVar7 = func_0x000180314710(TI_string__,2);
                            if (lVar7 == 0) goto code_r0x00018063fa63;
                            if (*(int *)(lVar7 + 0x18) != 0) {
                              *(undefined8 *)(lVar7 + 0x20) = LIT_"'Raid Boss'";
                              func_0x000180314690(lVar7 + 0x20);
                              if (1 < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x28) = LIT_"'Grand Boss'";
                                func_0x000180314690(lVar7 + 0x28);
                                uVar5 = func_0x000180315580(TI_System.Action<int>);
                                FUN_180b7db20(uVar5,param_1,MD_SparkMapaWindow.MostraAbaRaid,0);
                                lVar6 = SparkEstilo__Abas__18071cbe0(lVar6,lVar7,uVar5,0);
                                if (lVar6 != 0) {
                                  (**(code **)(lVar6 + 0x18))
                                            (*(undefined8 *)(lVar6 + 0x40),0,
                                             *(undefined8 *)(lVar6 + 0x28));
                                  return;
                                }
                                goto code_r0x00018063fa63;
                              }
                            }
                            goto code_r0x00018063fa5d;
                          }
                        }
                      }
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
  }
  FUN_1803155d0();
code_r0x00018063fa5d:
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

