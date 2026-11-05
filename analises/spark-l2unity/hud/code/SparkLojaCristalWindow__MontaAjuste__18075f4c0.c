// SparkLojaCristalWindow__MontaAjuste__18075f4c0 @ 0x18075f4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__MontaAjuste__18075f4c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar12;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uVar10;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (cRam00000001834b435d == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
    FUN_180315380(MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkLojaCristalWindow.Inicia);
    FUN_180315380(MD_SparkLojaCristalWindow._MontaAjuste_b__36_0);
    FUN_180315380(MD_SparkLojaCristalWindow._MontaAjuste_b__36_1);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'SHOP FEE'");
    FUN_180315380(LIT_"'Start'");
    FUN_180315380(LIT_"'Cancel'");
    FUN_180315380(LIT_"'Crystals kept by you (%):'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'SHOP MESSAGE'");
    cRam00000001834b435d = '\x01';
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkEstilo__Painel__180721ce0(0);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  func_0x000180314690(param_1 + 0x98,uVar3);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      uVar11 = 0;
      SparkEstilo__Espaco__18071fb80
                (*(undefined8 *)(param_1 + 0x98),0x41000000,0x41200000,0x41000000,
                 CONCAT44(uVar12,0x41200000),0);
      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_a8 = *(undefined8 *)(lVar4 + 0x60);
      uStack_a0 = *(undefined4 *)(lVar4 + 0x68);
      uStack_9c = *(undefined4 *)(lVar4 + 0x6c);
      uStack_78 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x000180cb7cb0(&uStack_88,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_a8 = uStack_88;
      uStack_a0 = (undefined4)uStack_80;
      uStack_9c = uStack_80._4_4_;
      uStack_98 = uStack_78;
      uVar3 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_a8,1,0);
      *(undefined8 *)(param_1 + 0xc0) = uVar3;
      func_0x000180314690(param_1 + 0xc0,uVar3);
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
        uVar3 = func_0x000182601c10(0,0);
        if (lVar4 != 0) {
          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
          if (*(longlong *)(param_1 + 0x98) != 0) {
            UnityEngine_UIElements_VisualElement__Add
                      (*(longlong *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xc0),0);
            lVar4 = *(longlong *)(param_1 + 0x98);
            uVar3 = SparkLojaCristalWindow__Secao(LIT_"'SHOP FEE'",0);
            if (lVar4 != 0) {
              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
              lVar5 = SparkLojaCristalWindow__Fila(0);
              lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
              uStack_a8 = *(undefined8 *)(lVar4 + 0x50);
              uStack_a0 = *(undefined4 *)(lVar4 + 0x58);
              uStack_9c = *(undefined4 *)(lVar4 + 0x5c);
              uStack_60 = 0;
              uStack_70 = 0;
              uStack_68 = 0;
              func_0x000180cb7cb0(&uStack_70,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_a8 = uStack_70;
              uStack_a0 = (undefined4)uStack_68;
              uStack_9c = uStack_68._4_4_;
              uStack_98 = uStack_60;
              lVar4 = SparkEstilo__Texto__180722af0(LIT_"'Crystals kept by you (%):'",0xb,&uStack_a8,0,0);
              if (lVar4 != 0) {
                plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                puVar7 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x40c00000,0);
                if (plVar6 != (longlong *)0x0) {
                  lVar1 = *plVar6;
                  uVar3 = *puVar7;
                  uVar12 = *(undefined4 *)(puVar7 + 1);
                  if (*(ushort *)(lVar1 + 0x12e) != 0) {
                    uVar10 = uVar11;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + uVar10 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar7 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + uVar10 * 0x10) + 0x4f)
                                  * 0x10 + 0x138 + lVar1);
                        goto code_r0x00018075f899;
                      }
                      uVar9 = (short)uVar10 + 1;
                      uVar10 = (ulonglong)uVar9;
                    } while (uVar9 < *(ushort *)(lVar1 + 0x12e));
                  }
                  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018075f899:
                  uStack_a8 = uVar3;
                  uStack_a0 = uVar12;
                  (*(code *)*puVar7)(plVar6,&uStack_a8,puVar7[1]);
                  if (lVar5 != 0) {
                    UnityEngine_UIElements_VisualElement__Add(lVar5,lVar4,0);
                    uVar3 = SparkEstilo__Campo__18071f2b0(2,0x32,0);
                    *(undefined8 *)(param_1 + 0x108) = uVar3;
                    func_0x000180314690(param_1 + 0x108,uVar3);
                    uVar3 = *(undefined8 *)(param_1 + 0x108);
                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
                    FUN_18055b980(uVar8,param_1,MD_SparkLojaCristalWindow._MontaAjuste_b__36_0,0);
                    FUN_1809fd010(uVar3,uVar8,MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
                    UnityEngine_UIElements_VisualElement__Add
                              (lVar5,*(undefined8 *)(param_1 + 0x108),0);
                    if (*(longlong *)(param_1 + 0x98) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0x98),lVar5,0);
                      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uStack_a8 = *(undefined8 *)(lVar4 + 0x50);
                      uStack_a0 = *(undefined4 *)(lVar4 + 0x58);
                      uStack_9c = *(undefined4 *)(lVar4 + 0x5c);
                      uStack_48 = 0;
                      uStack_58 = 0;
                      uStack_50 = 0;
                      func_0x000180cb7cb0(&uStack_58,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uStack_a8 = uStack_58;
                      uStack_a0 = (undefined4)uStack_50;
                      uStack_9c = uStack_50._4_4_;
                      uStack_98 = uStack_48;
                      uVar3 = SparkEstilo__Texto__180722af0(LIT_"''",10,&uStack_a8,0,0);
                      *(undefined8 *)(param_1 + 200) = uVar3;
                      func_0x000180314690(param_1 + 200,uVar3);
                      if (*(longlong *)(param_1 + 200) != 0) {
                        plVar6 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 200),0);
                        puVar7 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_a8,0x40800000,0);
                        if (plVar6 != (longlong *)0x0) {
                          lVar4 = *plVar6;
                          uVar3 = *puVar7;
                          uVar12 = *(undefined4 *)(puVar7 + 1);
                          if (*(ushort *)(lVar4 + 0x12e) != 0) {
                            uVar10 = uVar11;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar10 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar7 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar10 * 0x10)
                                          + 0x51) * 0x10 + 0x138 + lVar4);
                                goto code_r0x00018075fa59;
                              }
                              uVar9 = (short)uVar10 + 1;
                              uVar10 = (ulonglong)uVar9;
                            } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                          }
                          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018075fa59:
                          uStack_a8 = uVar3;
                          uStack_a0 = uVar12;
                          (*(code *)*puVar7)(plVar6,&uStack_a8,puVar7[1]);
                          if (*(longlong *)(param_1 + 200) != 0) {
                            lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 200),0);
                            uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                            if (lVar4 != 0) {
                              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                              if (*(longlong *)(param_1 + 200) != 0) {
                                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(param_1 + 200),0);
                                uVar3 = func_0x000182601c10(0,0);
                                if (lVar4 != 0) {
                                  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                  if (*(longlong *)(param_1 + 0x98) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(param_1 + 0x98),
                                               *(undefined8 *)(param_1 + 200),0);
                                    lVar4 = *(longlong *)(param_1 + 0x98);
                                    uVar3 = SparkLojaCristalWindow__Secao(LIT_"'SHOP MESSAGE'",0);
                                    if (lVar4 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                      uVar3 = SparkEstilo__Campo__18071f2b0(0x1d,0x104,0);
                                      *(undefined8 *)(param_1 + 0x110) = uVar3;
                                      func_0x000180314690(param_1 + 0x110,uVar3);
                                      if (*(longlong *)(param_1 + 0x98) != 0) {
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (*(longlong *)(param_1 + 0x98),
                                                   *(undefined8 *)(param_1 + 0x110),0);
                                        lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                        UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
                                        if (lVar4 != 0) {
                                          lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                          uVar3 = func_0x000182601c10(0x3f800000,0);
                                          if (lVar5 != 0) {
                                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                                            if (*(longlong *)(param_1 + 0x98) != 0) {
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (*(longlong *)(param_1 + 0x98),lVar4,0);
                                              lVar4 = SparkLojaCristalWindow__Fila(0);
                                              if (lVar4 != 0) {
                                                lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                if (lVar5 != 0) {
                                                  FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar5,uVar3);
                                                  plVar6 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40c00000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar5 = *plVar6;
                                                    uVar3 = *puVar7;
                                                    uVar12 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar5);
                                                          goto code_r0x00018075fcd9;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018075fcd9:
                                                    uStack_a8 = uVar3;
                                                    uStack_a0 = uVar12;
                                                    (*(code *)*puVar7)(plVar6,&uStack_a8,puVar7[1]);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkLojaCristalWindow._MontaAjuste_b__36_1
                                                                  ,0);
                                                    lVar5 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Cancel'",uVar3,
                                                                       0x5a,0,0);
                                                    if (lVar5 != 0) {
                                                      plVar6 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_a8,0x40c00000,0);
                                                  if (plVar6 != (longlong *)0x0) {
                                                    lVar1 = *plVar6;
                                                    uVar3 = *puVar7;
                                                    uVar12 = *(undefined4 *)(puVar7 + 1);
                                                    if (*(ushort *)(lVar1 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar1 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar7 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar1 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x4f)
                                                                    * 0x10 + 0x138 + lVar1);
                                                          goto code_r0x00018075fdb9;
                                                        }
                                                        uVar9 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar1 + 0x12e));
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x00018075fdb9:
                                                    uStack_a8 = uVar3;
                                                    uStack_a0 = uVar12;
                                                    (*(code *)*puVar7)(plVar6,&uStack_a8,puVar7[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,lVar5,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkLojaCristalWindow.Inicia
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Start'",uVar3,
                                                                       0x5a,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x98),lVar4
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0x98),0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

