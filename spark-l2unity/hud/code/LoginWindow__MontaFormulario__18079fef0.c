// LoginWindow__MontaFormulario__18079fef0 @ 0x18079fef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LoginWindow__MontaFormulario__18079fef0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [64];
  ulonglong uVar11;
  
  if (cRam00000001834b44d1 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_LoginWindow.FechaFormulario);
    FUN_180315380(MD_LoginWindow.SalvaFormulario);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Login'");
    FUN_180315380(LIT_"'Password'");
    FUN_180315380(LIT_"'Cancel'");
    FUN_180315380(LIT_"'Save'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'New login'");
    FUN_180315380(LIT_"'Description'");
    cRam00000001834b44d1 = '\x01';
  }
  uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  func_0x000180314690(param_1 + 0xd8,uVar5);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
    uVar5 = func_0x000182601c10(0,0);
    if (lVar6 != 0) {
      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        plVar7 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x40c00000,0);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = *plVar7;
          uVar12 = 0;
          uVar5 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar11 * 0x10) + 0x51) * 0x10
                          + 0x138 + lVar6);
                goto code_r0x0001807a0119;
              }
              uVar10 = (short)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001807a0119:
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          uStack_a8 = uVar5;
          (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xd8),0);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x41000000,0);
            if (plVar7 != (longlong *)0x0) {
              lVar6 = *plVar7;
              uVar5 = *puVar8;
              uVar1 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar11 = uVar12;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar11 * 0x10) + 0x65) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x0001807a01b9;
                  }
                  uVar10 = (short)uVar11 + 1;
                  uVar11 = (ulonglong)uVar10;
                } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x0001807a01b9:
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
              uStack_a8 = uVar5;
              (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
              if (*(longlong *)(param_1 + 0xd8) != 0) {
                lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0xd8),0);
                uVar5 = func_0x000182601c10(0x3f800000,0);
                if (lVar6 != 0) {
                  FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                  if (*(longlong *)(param_1 + 0xd8) != 0) {
                    plVar7 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0xd8),0);
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    uStack_a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x30);
                    uStack_a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x38);
                    puVar8 = (undefined8 *)
                             UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_a8,0)
                    ;
                    if (plVar7 != (longlong *)0x0) {
                      lVar6 = *plVar7;
                      uVar5 = *puVar8;
                      uVar4 = puVar8[1];
                      uVar1 = *(undefined4 *)(puVar8 + 2);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar11 = uVar12;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar11 * 0x10) ==
                              TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar11 * 0x10) +
                                      0x25) * 0x10 + 0x138 + lVar6);
                            goto code_r0x0001807a02c9;
                          }
                          uVar10 = (short)uVar11 + 1;
                          uVar11 = (ulonglong)uVar10;
                        } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x25);
code_r0x0001807a02c9:
                      uStack_a8 = uVar5;
                      uStack_a0 = uVar4;
                      uStack_98 = uVar1;
                      (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
                      if (*(longlong *)(param_1 + 0xd8) != 0) {
                        lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0xd8),0);
                        uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        if (lVar6 != 0) {
                          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                          uStack_a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
                          uStack_a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
                          uStack_78 = 0;
                          uStack_88 = 0;
                          uStack_80 = 0;
                          func_0x000180cb7cb0(&uStack_88,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                          uStack_a8 = uStack_88;
                          uStack_a0 = uStack_80;
                          uStack_98 = uStack_78;
                          uVar5 = SparkEstilo__Texto__180722af0
                                            (LIT_"'New login'",0xb,&uStack_a8,1,0);
                          *(undefined8 *)(param_1 + 0xe0) = uVar5;
                          func_0x000180314690(param_1 + 0xe0,uVar5);
                          if (*(longlong *)(param_1 + 0xe0) != 0) {
                            plVar7 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0xe0),0);
                            puVar8 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_a8,0x40c00000,0);
                            if (plVar7 != (longlong *)0x0) {
                              lVar6 = *plVar7;
                              uVar5 = *puVar8;
                              uVar1 = *(undefined4 *)(puVar8 + 1);
                              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                uVar11 = uVar12;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar11 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar8 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                       uVar11 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar6
                                             );
                                    goto code_r0x0001807a0429;
                                  }
                                  uVar10 = (short)uVar11 + 1;
                                  uVar11 = (ulonglong)uVar10;
                                } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
                              }
                              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001807a0429:
                              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                              uStack_a8 = uVar5;
                              (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
                              if (*(longlong *)(param_1 + 0xd8) != 0) {
                                UnityEngine_UIElements_VisualElement__Add
                                          (*(longlong *)(param_1 + 0xd8),
                                           *(undefined8 *)(param_1 + 0xe0),0);
                                uVar5 = LoginWindow__LinhaDoFormulario
                                                  (param_1,LIT_"'Description'",0x12,0,0);
                                *(undefined8 *)(param_1 + 0xe8) = uVar5;
                                func_0x000180314690(param_1 + 0xe8,uVar5);
                                uVar5 = LoginWindow__LinhaDoFormulario
                                                  (param_1,LIT_"'Login'",0x10,0,0);
                                *(undefined8 *)(param_1 + 0xf0) = uVar5;
                                func_0x000180314690(param_1 + 0xf0,uVar5);
                                uVar5 = LoginWindow__LinhaDoFormulario
                                                  (param_1,LIT_"'Password'",0x10,1,0);
                                *(undefined8 *)(param_1 + 0xf8) = uVar5;
                                func_0x000180314690(param_1 + 0xf8,uVar5);
                                uStack_a8 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
                                uStack_a0 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
                                uStack_60 = 0;
                                uStack_70 = 0;
                                uStack_68 = 0;
                                func_0x000180cb7cb0(&uStack_70,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                uStack_a8 = uStack_70;
                                uStack_a0 = uStack_68;
                                uStack_98 = uStack_60;
                                uVar5 = SparkEstilo__Texto__180722af0
                                                  (LIT_"''",0xb,&uStack_a8,0,0);
                                *(undefined8 *)(param_1 + 0x100) = uVar5;
                                func_0x000180314690(param_1 + 0x100,uVar5);
                                if (*(longlong *)(param_1 + 0x100) != 0) {
                                  lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(param_1 + 0x100),0);
                                  uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                  if (lVar6 != 0) {
                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                                    if (*(longlong *)(param_1 + 0xd8) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(param_1 + 0xd8),
                                                 *(undefined8 *)(param_1 + 0x100),0);
                                      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                      UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
                                      if (lVar6 != 0) {
                                        lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar6,0);
                                        uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                        if (lVar9 != 0) {
                                          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                          lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                          uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                          if (lVar9 != 0) {
                                            FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                            lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar6,0);
                                            uVar5 = func_0x000182601c10(0,0);
                                            if (lVar9 != 0) {
                                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                              plVar7 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                              puVar8 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40800000,0);
                                              if (plVar7 != (longlong *)0x0) {
                                                lVar9 = *plVar7;
                                                uVar5 = *puVar8;
                                                uVar1 = *(undefined4 *)(puVar8 + 1);
                                                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                  uVar11 = uVar12;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar9 + 0xb0) +
                                                         uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar8 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar9 + 0xb0) + 8 +
                                                                         uVar11 * 0x10) + 0x51) *
                                                                0x10 + 0x138 + lVar9);
                                                      goto code_r0x0001807a0739;
                                                    }
                                                    uVar10 = (short)uVar11 + 1;
                                                    uVar11 = (ulonglong)uVar10;
                                                  } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                }
                                                puVar8 = (undefined8 *)
                                                         FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001807a0739:
                                                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                                                uStack_a8 = uVar5;
                                                (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
                                                uVar5 = func_0x000180315580(TI_System.Action);
                                                FUN_1816a9c60(uVar5,param_1,MD_LoginWindow.SalvaFormulario,0);
                                                uVar5 = SparkEstilo__Botao__18071e130
                                                                  (LIT_"'Save'",uVar5,0x46,0
                                                                   ,0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar6,uVar5,0);
                                                uVar5 = func_0x000180315580(TI_System.Action);
                                                FUN_1816a9c60(uVar5,param_1,MD_LoginWindow.FechaFormulario,0);
                                                lVar9 = SparkEstilo__Botao__18071e130
                                                                  (LIT_"'Cancel'",uVar5,0x46,0
                                                                   ,0);
                                                if (lVar9 != 0) {
                                                  plVar7 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar9,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40800000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar2 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar1 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar2 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x4d)
                                                                    * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x0001807a0879;
                                                        }
                                                        uVar10 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar10;
                                                      } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x0001807a0879:
                                                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                                                    uStack_a8 = uVar5;
                                                    (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar6,lVar9,0);
                                                    if (*(longlong *)(param_1 + 0xd8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xd8),lVar6
                                                                 ,0);
                                                      return *(undefined8 *)(param_1 + 0xd8);
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
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

