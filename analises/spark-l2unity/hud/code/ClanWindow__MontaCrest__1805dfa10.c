// ClanWindow__MontaCrest__1805dfa10 @ 0x1805dfa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaCrest__1805dfa10(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar14;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [56];
  ulonglong uVar12;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (cRam00000001834b3b79 == '\0') {
    FUN_180315380(TI_System.Action<byte__>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ClanWindow._MontaCrest_b__132_0);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_ClanWindow.Envio);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkClan.GravaCrest);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'New crest'");
    FUN_180315380(LIT_"'Choose the clan crest'");
    FUN_180315380(LIT_"'16x12, shown next to the name of every member. Any .png,...");
    FUN_180315380(LIT_"'Delete'");
    FUN_180315380(LIT_"'Current Clan Crest'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3b79 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar2,0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkEstilo__Painel__180721ce0(0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        uVar13 = 0;
        SparkEstilo__Espaco__18071fb80
                  (lVar3,0x41400000,0x41400000,0x41400000,CONCAT44(uVar14,0x41400000),0);
        uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
        *(undefined8 *)(param_1 + 0x2b8) = uVar5;
        func_0x000180314690(param_1 + 0x2b8,uVar5);
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x2b8),0)
          ;
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x42800000,0);
          if (plVar6 != (longlong *)0x0) {
            lVar4 = *plVar6;
            uVar5 = *puVar7;
            uVar14 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              uVar12 = uVar13;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar12 * 0x10) + 0xad) *
                            0x10 + 0x138 + lVar4);
                  goto code_r0x0001805dfce9;
                }
                uVar11 = (short)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while (uVar11 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805dfce9:
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
            uStack_c8 = uVar5;
            (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
            if (*(longlong *)(param_1 + 0x2b8) != 0) {
              plVar6 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x2b8),0);
              puVar7 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x42400000,0);
              if (plVar6 != (longlong *)0x0) {
                lVar4 = *plVar6;
                uVar5 = *puVar7;
                uVar14 = *(undefined4 *)(puVar7 + 1);
                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                  uVar12 = uVar13;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar12 * 0x10) + 0x43) *
                                0x10 + 0x138 + lVar4);
                      goto code_r0x0001805dfd89;
                    }
                    uVar11 = (short)uVar12 + 1;
                    uVar12 = (ulonglong)uVar11;
                  } while (uVar11 < *(ushort *)(lVar4 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805dfd89:
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                uStack_c8 = uVar5;
                (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
                if (*(longlong *)(param_1 + 0x2b8) != 0) {
                  plVar6 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0x2b8),0);
                  puVar7 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x41600000,0);
                  if (plVar6 != (longlong *)0x0) {
                    lVar4 = *plVar6;
                    uVar5 = *puVar7;
                    uVar14 = *(undefined4 *)(puVar7 + 1);
                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                      uVar12 = uVar13;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar7 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar12 * 0x10) +
                                    0x4f) * 0x10 + 0x138 + lVar4);
                          goto code_r0x0001805dfe29;
                        }
                        uVar11 = (short)uVar12 + 1;
                        uVar12 = (ulonglong)uVar11;
                      } while (uVar11 < *(ushort *)(lVar4 + 0x12e));
                    }
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805dfe29:
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                    uStack_c8 = uVar5;
                    (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
                    if (*(longlong *)(param_1 + 0x2b8) != 0) {
                      lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0x2b8),0);
                      uVar5 = func_0x000182601c10();
                      if (lVar4 != 0) {
                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                        if (*(longlong *)(param_1 + 0x2b8) != 0) {
                          plVar6 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(param_1 + 0x2b8),0);
                          uStack_c8 = 0;
                          uStack_c0 = 0x3ecccccd00000000;
                          puVar7 = (undefined8 *)
                                   UnityEngine_UIElements_StyleColor__op_Implicit
                                             (auStack_60,&uStack_c8,0);
                          if (plVar6 != (longlong *)0x0) {
                            lVar4 = *plVar6;
                            uVar5 = *puVar7;
                            uVar10 = puVar7[1];
                            uVar14 = *(undefined4 *)(puVar7 + 2);
                            if (*(ushort *)(lVar4 + 0x12e) != 0) {
                              do {
                                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar13 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar7 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                     uVar13 * 0x10) + 9) * 0x10 + 0x138 + lVar4);
                                  goto code_r0x0001805dff19;
                                }
                                uVar11 = (short)uVar13 + 1;
                                uVar13 = (ulonglong)uVar11;
                              } while (uVar11 < *(ushort *)(lVar4 + 0x12e));
                            }
                            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001805dff19:
                            uStack_c8 = uVar5;
                            uStack_c0 = uVar10;
                            uStack_b8 = uVar14;
                            (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
                            uStack_c8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x30)
                            ;
                            uStack_c0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x38)
                            ;
                            SparkEstilo__Borda__18071da60
                                      (*(undefined8 *)(param_1 + 0x2b8),&uStack_c8,0x3f800000,0,0);
                            UnityEngine_UIElements_VisualElement__Add
                                      (lVar3,*(undefined8 *)(param_1 + 0x2b8),0);
                            lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
                            if (lVar4 != 0) {
                              lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                              uVar5 = func_0x000182601c10();
                              if (lVar8 != 0) {
                                FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                                uVar5 = func_0x000182601c10();
                                if (lVar8 != 0) {
                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                                  uStack_c8 = *(undefined8 *)
                                               (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x70);
                                  uStack_c0 = *(undefined8 *)
                                               (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x78);
                                  uStack_98 = 0;
                                  uStack_a8 = 0;
                                  uStack_a0 = 0;
                                  func_0x000180cb7cb0(&uStack_a8,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                  uStack_c8 = uStack_a8;
                                  uStack_c0 = uStack_a0;
                                  uStack_b8 = uStack_98;
                                  uVar5 = SparkEstilo__Texto__180722af0
                                                    (LIT_"'Current Clan Crest'",0xe,&uStack_c8,1,0);
                                  UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                                  uStack_c8 = *(undefined8 *)
                                               (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
                                  uStack_c0 = *(undefined8 *)
                                               (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
                                  uStack_80 = 0;
                                  uStack_90 = 0;
                                  uStack_88 = 0;
                                  func_0x000180cb7cb0(&uStack_90,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                  uStack_c8 = uStack_90;
                                  uStack_c0 = uStack_88;
                                  uStack_b8 = uStack_80;
                                  lVar8 = SparkEstilo__Texto__180722af0
                                                    (LIT_"'16x12, shown next to the name of every member. Any .png,...",0xb,&uStack_c8,0,0);
                                  if (lVar8 != 0) {
                                    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0)
                                    ;
                                    uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                    if (lVar9 != 0) {
                                      FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                      plVar6 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar8,0);
                                      puVar7 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_c8,0x40800000,0);
                                      if (plVar6 != (longlong *)0x0) {
                                        lVar9 = *plVar6;
                                        uVar5 = *puVar7;
                                        uVar14 = *(undefined4 *)(puVar7 + 1);
                                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                          uVar11 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar9 + 0xb0) +
                                                 (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar7 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                                 (ulonglong)uVar11 * 0x10) + 0x51) *
                                                        0x10 + 0x138 + lVar9);
                                              goto code_r0x0001805e01a9;
                                            }
                                            uVar11 = uVar11 + 1;
                                          } while (uVar11 < *(ushort *)(lVar9 + 0x12e));
                                        }
                                        puVar7 = (undefined8 *)
                                                 FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e01a9:
                                        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                                        uStack_c8 = uVar5;
                                        (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
                                        UnityEngine_UIElements_VisualElement__Add(lVar4,lVar8,0);
                                        UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
                                        uVar5 = func_0x000180315580(TI_System.Action);
                                        FUN_1816a9c60(uVar5,param_1,MD_ClanWindow._MontaCrest_b__132_0,0);
                                        uVar13 = 0;
                                        uVar5 = SparkEstilo__Botao__18071e130
                                                          (LIT_"'Delete'",uVar5,0x4c,1,0);
                                        *(undefined8 *)(param_1 + 0x2c8) = uVar5;
                                        func_0x000180314690(param_1 + 0x2c8,uVar5);
                                        UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                                        if (lVar2 != 0) {
                                          UnityEngine_UIElements_VisualElement__Add(lVar2,lVar3,0);
                                          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          uVar5 = ClanWindow__Secao(LIT_"'New crest'",0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar2,uVar5,0);
                                          uVar5 = func_0x000180315580(TI_System.Action<byte__>);
                                          FUN_18055b980(uVar5,0,MD_SparkClan.GravaCrest,0);
                                          uVar10 = func_0x000180315580(TI_ClanWindow.Envio);
                                          ClanWindow_Envio___ctor
                                                    (uVar10,0x10,0xc,4,LIT_"'Choose the clan crest'",uVar5,0)
                                          ;
                                          *(undefined8 *)(param_1 + 0x2c0) = uVar10;
                                          func_0x000180314690(param_1 + 0x2c0,uVar10);
                                          if (*(longlong *)(param_1 + 0x2c0) != 0) {
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (lVar2,*(undefined8 *)
                                                              (*(longlong *)(param_1 + 0x2c0) + 0x10
                                                              ),0);
                                            uStack_c8 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x50);
                                            uStack_c0 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x58);
                                            uStack_68 = 0;
                                            uStack_78 = 0;
                                            uStack_70 = 0;
                                            func_0x000180cb7cb0(&uStack_78,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor
                                                               );
                                            uStack_c8 = uStack_78;
                                            uStack_c0 = uStack_70;
                                            uStack_b8 = uStack_68;
                                            uVar5 = SparkEstilo__Texto__180722af0
                                                              (LIT_"''",0xb,&uStack_c8,0,0);
                                            *(undefined8 *)(param_1 + 0x2d0) = uVar5;
                                            func_0x000180314690(param_1 + 0x2d0,uVar5);
                                            UnityEngine_UIElements_VisualElement__Add(lVar2,uVar5,0)
                                            ;
                                            if (*(longlong *)(param_1 + 0x2d0) != 0) {
                                              plVar6 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x2d0),0);
                                              puVar7 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_c8,0x41400000,0);
                                              if (plVar6 != (longlong *)0x0) {
                                                lVar3 = *plVar6;
                                                uVar5 = *puVar7;
                                                uVar14 = *(undefined4 *)(puVar7 + 1);
                                                if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar3 + 0xb0) +
                                                         uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar7 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar3 + 0xb0) + 8 +
                                                                         uVar13 * 0x10) + 0x51) *
                                                                0x10 + 0x138 + lVar3);
                                                      goto code_r0x0001805e0439;
                                                    }
                                                    uVar11 = (short)uVar13 + 1;
                                                    uVar13 = (ulonglong)uVar11;
                                                  } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
                                                }
                                                puVar7 = (undefined8 *)
                                                         FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e0439:
                                                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                                                uStack_c8 = uVar5;
                                                (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
                                                if (*(longlong *)(param_1 + 0x2d0) != 0) {
                                                  lVar3 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x2d0),0);
                                                  uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar3 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar3,uVar5);
                                                    return lVar2;
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
  lVar2 = (*pcVar1)();
  return lVar2;
}

