// MacroWindow__MontaLista__180658490 @ 0x180658490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__MontaLista__180658490(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar10;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uVar9;
  
  if (cRam00000001834b3d65 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_MacroWindow.Apaga);
    FUN_180315380(MD_MacroWindow.NaBarra);
    FUN_180315380(MD_MacroWindow._MontaLista_b__29_0);
    FUN_180315380(MD_MacroWindow._MontaLista_b__29_1);
    FUN_180315380(MD_MacroWindow._MontaLista_b__29_2);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Run'");
    FUN_180315380(LIT_"'To Bar'");
    FUN_180315380(LIT_"'Delete'");
    FUN_180315380(LIT_"'Edit'");
    FUN_180315380(LIT_"'New'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d65 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  func_0x000180314690(param_1 + 0xa8,uVar3);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar10 = 0;
          uVar3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar9 = uVar10;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar9 * 0x10) + 0x57) * 0x10 +
                          0x138 + lVar4);
                goto code_r0x0001806586d9;
              }
              uVar8 = (short)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001806586d9:
          uStack_88 = uVar3;
          uStack_80 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
          lVar4 = *(longlong *)(param_1 + 0xa8);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_88 = *(undefined8 *)(lVar7 + 0x50);
          uStack_80 = *(undefined4 *)(lVar7 + 0x58);
          uStack_7c = *(undefined4 *)(lVar7 + 0x5c);
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_88 = uStack_68;
          uStack_80 = (undefined4)uStack_60;
          uStack_7c = uStack_60._4_4_;
          uStack_78 = uStack_58;
          uVar3 = SparkEstilo__Texto__180722af0(LIT_"''",10,&uStack_88,0,0);
          *(undefined8 *)(param_1 + 0x98) = uVar3;
          func_0x000180314690(param_1 + 0x98,uVar3);
          if (lVar4 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
            if (*(longlong *)(param_1 + 0x98) != 0) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x98),0);
              uVar3 = func_0x000182601c10(0,0);
              if (lVar4 != 0) {
                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                lVar4 = SparkEstilo__Lista__1807211b0(0);
                if (lVar4 != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  uVar3 = func_0x000182601c10(0x3f800000,0);
                  if (lVar7 != 0) {
                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    uVar3 = func_0x000182601c10(0x3f800000,0);
                    if (lVar7 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                      puVar6 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
                      if (plVar5 != (longlong *)0x0) {
                        lVar7 = *plVar5;
                        uVar3 = *puVar6;
                        uVar1 = *(undefined4 *)(puVar6 + 1);
                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                          uVar9 = uVar10;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar9 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar6 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar9 * 0x10) +
                                        0x37) * 0x10 + 0x138 + lVar7);
                              goto code_r0x0001806588e9;
                            }
                            uVar8 = (short)uVar9 + 1;
                            uVar9 = (ulonglong)uVar8;
                          } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                        }
                        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x0001806588e9:
                        uStack_88 = uVar3;
                        uStack_80 = uVar1;
                        (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                        plVar5 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                        puVar6 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
                        if (plVar5 != (longlong *)0x0) {
                          lVar7 = *plVar5;
                          uVar3 = *puVar6;
                          uVar1 = *(undefined4 *)(puVar6 + 1);
                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                            uVar9 = uVar10;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar9 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar6 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar9 * 0x10)
                                          + 0x57) * 0x10 + 0x138 + lVar7);
                                goto code_r0x000180658979;
                              }
                              uVar8 = (short)uVar9 + 1;
                              uVar9 = (ulonglong)uVar8;
                            } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                          }
                          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x000180658979:
                          uStack_88 = uVar3;
                          uStack_80 = uVar1;
                          (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                          plVar5 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                          puVar6 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_88,0x40800000,0);
                          if (plVar5 != (longlong *)0x0) {
                            lVar7 = *plVar5;
                            uVar3 = *puVar6;
                            uVar1 = *(undefined4 *)(puVar6 + 1);
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar9 = uVar10;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar9 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar6 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar9 * 0x10
                                                     ) + 0x51) * 0x10 + 0x138 + lVar7);
                                  goto code_r0x000180658a19;
                                }
                                uVar8 = (short)uVar9 + 1;
                                uVar9 = (ulonglong)uVar8;
                              } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180658a19:
                            uStack_88 = uVar3;
                            uStack_80 = uVar1;
                            (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                            uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
                            *(undefined8 *)(param_1 + 0xb8) = uVar3;
                            func_0x000180314690(param_1 + 0xb8,uVar3);
                            if (*(longlong *)(param_1 + 0xb8) != 0) {
                              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(param_1 + 0xb8),0);
                              uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                              if (lVar7 != 0) {
                                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                if (*(longlong *)(param_1 + 0xb8) != 0) {
                                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(param_1 + 0xb8),0);
                                  uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
                                  if (lVar7 != 0) {
                                    FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                    UnityEngine_UIElements_VisualElement__Add
                                              (lVar4,*(undefined8 *)(param_1 + 0xb8),0);
                                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(param_1 + 0xa8),lVar4,0);
                                      lVar4 = *(longlong *)(param_1 + 0xa8);
                                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                      uStack_88 = *(undefined8 *)(lVar7 + 0x40);
                                      uStack_80 = *(undefined4 *)(lVar7 + 0x48);
                                      uStack_7c = *(undefined4 *)(lVar7 + 0x4c);
                                      uStack_40 = 0;
                                      uStack_50 = 0;
                                      uStack_48 = 0;
                                      func_0x000180cb7cb0(&uStack_50,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
                                      uStack_88 = uStack_50;
                                      uStack_80 = (undefined4)uStack_48;
                                      uStack_7c = uStack_48._4_4_;
                                      uStack_78 = uStack_40;
                                      uVar3 = SparkEstilo__Texto__180722af0
                                                        (LIT_"''",10,&uStack_88,0,0);
                                      *(undefined8 *)(param_1 + 0xa0) = uVar3;
                                      func_0x000180314690(param_1 + 0xa0,uVar3);
                                      if (lVar4 != 0) {
                                        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                        if (*(longlong *)(param_1 + 0xa0) != 0) {
                                          lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                          uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                          if (lVar4 != 0) {
                                            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                            if (*(longlong *)(param_1 + 0xa0) != 0) {
                                              lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                              uVar3 = func_0x000182601c10(0,0);
                                              if (lVar4 != 0) {
                                                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                  plVar5 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x42280000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar9 = uVar10;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             uVar9 * 0x10) + 0x57) *
                                                                    0x10 + 0x138 + lVar4);
                                                          goto code_r0x000180658cd9;
                                                        }
                                                        uVar8 = (short)uVar9 + 1;
                                                        uVar9 = (ulonglong)uVar8;
                                                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x57);
code_r0x000180658cd9:
                                                    uStack_88 = uVar3;
                                                    uStack_80 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xa0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x40800000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar4);
                                                          goto code_r0x000180658d79;
                                                        }
                                                        uVar8 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar8;
                                                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x000180658d79:
                                                    uStack_88 = uVar3;
                                                    uStack_80 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    lVar4 = MacroWindow__Fileira(0);
                                                    if (lVar4 != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_MacroWindow._MontaLista_b__29_0
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'New'",uVar3,
                                                                       0x46,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_MacroWindow._MontaLista_b__29_1
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Edit'",uVar3,
                                                                       0x46,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_MacroWindow.Apaga
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Delete'",uVar3,
                                                                       0x46,1,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xa8),lVar4
                                                                 ,0);
                                                      lVar4 = MacroWindow__Fileira(0);
                                                      if (lVar4 != 0) {
                                                        lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_MacroWindow._MontaLista_b__29_2
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Run'",uVar3,
                                                                       100,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_MacroWindow.NaBarra
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'To Bar'",uVar3,
                                                                       100,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    if (*(longlong *)(param_1 + 0xa8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xa8),lVar4
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0xa8),0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

