// FriendWindow__MontaAmigos__1805fda10 @ 0x1805fda10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FriendWindow__MontaAmigos__1805fda10(longlong param_1,longlong param_2)

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
  
  if (cRam00000001834b3c03 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(MD_FriendWindow.Adiciona);
    FUN_180315380(MD_FriendWindow.Remove);
    FUN_180315380(MD_FriendWindow.Sussurra);
    FUN_180315380(MD_FriendWindow._MontaAmigos_b__20_0);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkAmigos.PedeLista);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Add'");
    FUN_180315380(LIT_"'Leave the name empty to invite your target.'");
    FUN_180315380(LIT_"'Delete'");
    FUN_180315380(LIT_"'Whisper'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Refresh'");
    cRam00000001834b3c03 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  func_0x000180314690(param_1 + 0x90,uVar3);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
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
                goto code_r0x0001805fdc69;
              }
              uVar8 = (short)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001805fdc69:
          uStack_88 = uVar3;
          uStack_80 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
          lVar4 = *(longlong *)(param_1 + 0x90);
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
          *(undefined8 *)(param_1 + 0xa8) = uVar3;
          func_0x000180314690(param_1 + 0xa8,uVar3);
          if (lVar4 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
            if (*(longlong *)(param_1 + 0xa8) != 0) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xa8),0);
              uVar3 = func_0x000182601c10(0,0);
              if (lVar4 != 0) {
                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                if (*(longlong *)(param_1 + 0xa8) != 0) {
                  plVar5 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 0xa8),0);
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x40800000,0);
                  if (plVar5 != (longlong *)0x0) {
                    lVar4 = *plVar5;
                    uVar3 = *puVar6;
                    uVar1 = *(undefined4 *)(puVar6 + 1);
                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                      uVar9 = uVar10;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar9 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar9 * 0x10) + 0x4b
                                    ) * 0x10 + 0x138 + lVar4);
                          goto code_r0x0001805fde09;
                        }
                        uVar8 = (short)uVar9 + 1;
                        uVar9 = (ulonglong)uVar8;
                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805fde09:
                    uStack_88 = uVar3;
                    uStack_80 = uVar1;
                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                    uVar3 = SparkEstilo__Lista__1807211b0(0);
                    *(undefined8 *)(param_1 + 0xa0) = uVar3;
                    func_0x000180314690(param_1 + 0xa0,uVar3);
                    if (*(longlong *)(param_1 + 0xa0) != 0) {
                      lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0xa0),0);
                      uVar3 = func_0x000182601c10(0x3f800000,0);
                      if (lVar4 != 0) {
                        FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                        if (*(longlong *)(param_1 + 0xa0) != 0) {
                          lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xa0),0);
                          uVar3 = func_0x000182601c10(0x3f800000,0);
                          if (lVar4 != 0) {
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                            if (*(longlong *)(param_1 + 0xa0) != 0) {
                              plVar5 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style
                                                 (*(longlong *)(param_1 + 0xa0),0);
                              puVar6 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_88,0,0);
                              if (plVar5 != (longlong *)0x0) {
                                lVar4 = *plVar5;
                                uVar3 = *puVar6;
                                uVar1 = *(undefined4 *)(puVar6 + 1);
                                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                  uVar9 = uVar10;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar9 * 0x10) ==
                                        TI_UnityEngine.UIElements.IStyle) {
                                      puVar6 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                         uVar9 * 0x10) + 0x37) * 0x10 + 0x138 +
                                               lVar4);
                                      goto code_r0x0001805fdf49;
                                    }
                                    uVar8 = (short)uVar9 + 1;
                                    uVar9 = (ulonglong)uVar8;
                                  } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                }
                                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x0001805fdf49:
                                uStack_88 = uVar3;
                                uStack_80 = uVar1;
                                (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                if (*(longlong *)(param_1 + 0xa0) != 0) {
                                  plVar5 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0xa0),0);
                                  puVar6 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_88,0,0);
                                  if (plVar5 != (longlong *)0x0) {
                                    lVar4 = *plVar5;
                                    uVar3 = *puVar6;
                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                      uVar9 = uVar10;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar4 + 0xb0) + uVar9 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar6 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                             uVar9 * 0x10) + 0x57) * 0x10 + 0x138 +
                                                   lVar4);
                                          goto code_r0x0001805fdfe9;
                                        }
                                        uVar8 = (short)uVar9 + 1;
                                        uVar9 = (ulonglong)uVar8;
                                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                    }
                                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57)
                                    ;
code_r0x0001805fdfe9:
                                    uStack_88 = uVar3;
                                    uStack_80 = uVar1;
                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                    if (*(longlong *)(param_1 + 0x90) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(param_1 + 0x90),
                                                 *(undefined8 *)(param_1 + 0xa0),0);
                                      if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      lVar4 = FriendWindow__Fileira(0);
                                      if (lVar4 != 0) {
                                        lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar4,0);
                                        uVar3 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                        if (lVar7 != 0) {
                                          FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                          uVar3 = func_0x000180315580(TI_System.Action);
                                          FUN_1816a9c60(uVar3,param_1,MD_FriendWindow.Sussurra,0);
                                          uVar3 = SparkEstilo__Botao__18071e130
                                                            (LIT_"'Whisper'",uVar3,0x54,0,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                          uVar3 = func_0x000180315580(TI_System.Action);
                                          FUN_1816a9c60(uVar3,param_1,MD_FriendWindow.Remove,0);
                                          uVar3 = SparkEstilo__Botao__18071e130
                                                            (LIT_"'Delete'",uVar3,0x54,1,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                          uVar3 = func_0x000180315580(TI_System.Action);
                                          FUN_1816a9c60(uVar3,0,MD_SparkAmigos.PedeLista,0);
                                          uVar3 = SparkEstilo__Botao__18071e130
                                                            (LIT_"'Refresh'",uVar3,0x54,0,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                          if (*(longlong *)(param_1 + 0x90) != 0) {
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (*(longlong *)(param_1 + 0x90),lVar4,0);
                                            lVar4 = FriendWindow__Fileira(0);
                                            if (lVar4 != 0) {
                                              lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                              uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                              if (lVar7 != 0) {
                                                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                uVar3 = SparkUI__Campo(0x10,0);
                                                *(undefined8 *)(param_1 + 0xb0) = uVar3;
                                                func_0x000180314690(param_1 + 0xb0,uVar3);
                                                if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                  lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xb0),0);
                                                  uVar3 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xb0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar9 = uVar10;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar9 * 0x10) + 0x4f) *
                                                                    0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fe2d9;
                                                        }
                                                        uVar8 = (short)uVar9 + 1;
                                                        uVar9 = (ulonglong)uVar8;
                                                      } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x0001805fe2d9:
                                                    uStack_88 = uVar3;
                                                    uStack_80 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    FriendWindow__Escuro
                                                              (*(undefined8 *)(param_1 + 0xb0),0);
                                                    lVar7 = *(longlong *)(param_1 + 0xb0);
                                                    uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>
                                                                               );
                                                    FUN_18055b980(uVar3,param_1,MD_FriendWindow._MontaAmigos_b__20_0
                                                                  ,0);
                                                    if (lVar7 != 0) {
                                                      FUN_180990d50(lVar7,uVar3,1,
                                                                    MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar4,*(undefined8 *)
                                                                        (param_1 + 0xb0),0);
                                                      uVar3 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(uVar3,param_1,
                                                                    MD_FriendWindow.Adiciona,0);
                                                      uVar3 = SparkEstilo__Botao__18071e130
                                                                        (LIT_"'Add'",uVar3,
                                                                         0x46,0,0);
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar4,uVar3,0);
                                                      if (*(longlong *)(param_1 + 0x90) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x90),
                                                                   lVar4,0);
                                                        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8)
                                                        ;
                                                        uStack_88 = *(undefined8 *)(lVar4 + 0x50);
                                                        uStack_80 = *(undefined4 *)(lVar4 + 0x58);
                                                        uStack_7c = *(undefined4 *)(lVar4 + 0x5c);
                                                        uStack_40 = 0;
                                                        uStack_50 = 0;
                                                        uStack_48 = 0;
                                                        func_0x000180cb7cb0(&uStack_50,&uStack_88,
                                                                            MR_System.Nullable<UnityEngine.Color>..ctor);
                                                        uStack_88 = uStack_50;
                                                        uStack_80 = (undefined4)uStack_48;
                                                        uStack_7c = uStack_48._4_4_;
                                                        uStack_78 = uStack_40;
                                                        lVar4 = SparkEstilo__Texto__180722af0
                                                                          (LIT_"'Leave the name empty to invite your target.'",9,
                                                                           &uStack_88,0,0);
                                                        if (lVar4 != 0) {
                                                          lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    plVar5 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x40000000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x0001805fe4e9;
                                                        }
                                                        uVar8 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar8;
                                                      } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805fe4e9:
                                                    uStack_88 = uVar3;
                                                    uStack_80 = uVar1;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    if (*(longlong *)(param_1 + 0x90) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x90),lVar4
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0x90),0);
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

