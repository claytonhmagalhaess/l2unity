// OptionsWindow__Teclas__18069a450 @ 0x18069a450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Teclas__18069a450(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uVar10;
  
  if (cRam00000001834b3e8f == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Shortcut'");
    FUN_180315380(LIT_"'Click a box and press the key or combination (Alt, Ctrl ...");
    FUN_180315380(LIT_"''");
    cRam00000001834b3e8f = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    uVar5 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *plVar6;
        uVar11 = 0;
        uVar5 = *puVar7;
        uVar1 = *(undefined4 *)(puVar7 + 1);
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          uVar10 = uVar11;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)(*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar10 * 0x10) + 0x57)
                        * 0x10 + 0x138 + lVar4);
              goto code_r0x00018069a5e9;
            }
            uVar9 = (short)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018069a5e9:
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
        uStack_98 = uVar5;
        (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkEstilo__Espaco__18071fb80(lVar3);
        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = OptionsWindow__Secao(LIT_"'Shortcut'",0);
        UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
        uStack_98 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28);
        uStack_90 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30);
        uStack_68 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        func_0x000180cb7cb0(&uStack_78,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_98 = uStack_78;
        uStack_90 = uStack_70;
        uStack_88 = uStack_68;
        lVar4 = SparkEstilo__Texto__180722af0(LIT_"'Click a box and press the key or combination (Alt, Ctrl ...",10,&uStack_98,0,0);
        if (lVar4 != 0) {
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar8 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uVar5 = func_0x000182601c10(0,0);
            if (lVar8 != 0) {
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
              UnityEngine_UIElements_VisualElement__Add(lVar3,lVar4,0);
              uStack_98 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
              uStack_90 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
              uStack_50 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              func_0x000180cb7cb0(&uStack_60,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_98 = uStack_60;
              uStack_90 = uStack_58;
              uStack_88 = uStack_50;
              uVar5 = SparkEstilo__Texto__180722af0(LIT_"''",9,&uStack_98,0,0);
              *(undefined8 *)(param_1 + 200) = uVar5;
              func_0x000180314690(param_1 + 200,uVar5);
              UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
              if (*(longlong *)(param_1 + 200) != 0) {
                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 200),0);
                uVar5 = func_0x000182601c10(0,0);
                if (lVar4 != 0) {
                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                  if (*(longlong *)(param_1 + 200) != 0) {
                    lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 200),0);
                    uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                    if (lVar4 != 0) {
                      FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                      if (*(longlong *)(param_1 + 200) != 0) {
                        plVar6 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 200),0);
                        puVar7 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
                        if (plVar6 != (longlong *)0x0) {
                          lVar4 = *plVar6;
                          uVar5 = *puVar7;
                          uVar1 = *(undefined4 *)(puVar7 + 1);
                          if (*(ushort *)(lVar4 + 0x12e) != 0) {
                            uVar10 = uVar11;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar10 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar7 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar10 * 0x10)
                                          + 0x51) * 0x10 + 0x138 + lVar4);
                                goto code_r0x00018069a8f9;
                              }
                              uVar9 = (short)uVar10 + 1;
                              uVar10 = (ulonglong)uVar9;
                            } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                          }
                          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018069a8f9:
                          uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                          uStack_98 = uVar5;
                          (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
                          uStack_98 = 0x3f1a9a9b3f800000;
                          uStack_90 = 0x3f8000003f008081;
                          uStack_48 = 0;
                          uStack_40 = 0;
                          uStack_38 = 0;
                          func_0x000180cb7cb0(&uStack_48,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
                          uStack_98 = uStack_48;
                          uStack_90 = uStack_40;
                          uStack_88 = uStack_38;
                          uVar5 = SparkEstilo__Texto__180722af0(LIT_"''",10,&uStack_98,0,0);
                          *(undefined8 *)(param_1 + 0xc0) = uVar5;
                          func_0x000180314690(param_1 + 0xc0,uVar5);
                          UnityEngine_UIElements_VisualElement__Add(lVar3,uVar5,0);
                          if (*(longlong *)(param_1 + 0xc0) != 0) {
                            lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0xc0),0);
                            uVar5 = func_0x000182601c10(0,0);
                            if (lVar4 != 0) {
                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                              if (*(longlong *)(param_1 + 0xc0) != 0) {
                                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 0xc0),0);
                                uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                if (lVar4 != 0) {
                                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                                  lVar4 = SparkEstilo__Lista__1807211b0(0);
                                  if (lVar4 != 0) {
                                    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0)
                                    ;
                                    uVar5 = func_0x000182601c10(0x3f800000,0);
                                    if (lVar8 != 0) {
                                      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                                      lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar4,0);
                                      uVar5 = func_0x000182601c10(0x3f800000,0);
                                      if (lVar8 != 0) {
                                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar5);
                                        plVar6 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar4,0);
                                        puVar7 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_98);
                                        if (plVar6 != (longlong *)0x0) {
                                          lVar8 = *plVar6;
                                          uVar5 = *puVar7;
                                          uVar1 = *(undefined4 *)(puVar7 + 1);
                                          if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                            uVar10 = uVar11;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar8 + 0xb0) + uVar10 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar7 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8
                                                                   + uVar10 * 0x10) + 0x37) * 0x10 +
                                                          0x138 + lVar8);
                                                goto code_r0x00018069ab29;
                                              }
                                              uVar9 = (short)uVar10 + 1;
                                              uVar10 = (ulonglong)uVar9;
                                            } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                          }
                                          puVar7 = (undefined8 *)
                                                   FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x00018069ab29:
                                          uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                                          uStack_98 = uVar5;
                                          (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
                                          plVar6 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar4,0);
                                          puVar7 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_98);
                                          if (plVar6 != (longlong *)0x0) {
                                            lVar8 = *plVar6;
                                            uVar5 = *puVar7;
                                            uVar1 = *(undefined4 *)(puVar7 + 1);
                                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                              uVar10 = uVar11;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar8 + 0xb0) + uVar10 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar7 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar8 + 0xb0) +
                                                                      8 + uVar10 * 0x10) + 0x57) *
                                                            0x10 + 0x138 + lVar8);
                                                  goto code_r0x00018069abb9;
                                                }
                                                uVar9 = (short)uVar10 + 1;
                                                uVar10 = (ulonglong)uVar9;
                                              } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018069abb9:
                                            uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                                            uStack_98 = uVar5;
                                            (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
                                            plVar6 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar4,0);
                                            puVar7 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (&uStack_98);
                                            if (plVar6 != (longlong *)0x0) {
                                              lVar8 = *plVar6;
                                              uVar5 = *puVar7;
                                              uVar1 = *(undefined4 *)(puVar7 + 1);
                                              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar8 + 0xb0) + uVar11 * 0x10)
                                                      == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar7 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar8 + 0xb0)
                                                                        + 8 + uVar11 * 0x10) + 0x51)
                                                              * 0x10 + 0x138 + lVar8);
                                                    goto code_r0x00018069ac59;
                                                  }
                                                  uVar9 = (short)uVar11 + 1;
                                                  uVar11 = (ulonglong)uVar9;
                                                } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                              }
                                              puVar7 = (undefined8 *)
                                                       FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018069ac59:
                                              uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                                              uStack_98 = uVar5;
                                              (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
                                              *(longlong *)(param_1 + 0xb8) = lVar4;
                                              func_0x000180314690(param_1 + 0xb8,lVar4);
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (lVar3,lVar4,0);
                                              return lVar3;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  lVar3 = (*pcVar2)();
  return lVar3;
}

