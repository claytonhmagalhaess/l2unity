// SparkMapaWindow__PontoNoMapa__180641740 @ 0x180641740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkMapaWindow__PontoNoMapa__180641740
          (undefined8 param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ushort uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [64];
  
  if (cRam00000001834b3d3a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__0);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__1);
    FUN_180315380(TI_SparkMapaWindow.<>c__DisplayClass184_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3d3a = '\x01';
  }
  lVar5 = func_0x000180315580(TI_SparkMapaWindow.<>c__DisplayClass184_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    func_0x000180314690(lVar5 + 0x18,uVar6);
    if (*(longlong *)(lVar5 + 0x18) != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x18),0);
      uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar7 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          plVar8 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x18),0);
          if (*(longlong *)(lVar5 + 0x18) != 0) {
            plVar9 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x18),0);
            puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar9 != (longlong *)0x0) {
              lVar7 = *plVar9;
              uVar6 = *puVar10;
              uVar1 = *(undefined4 *)(puVar10 + 1);
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar11 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar10 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10)
                               + 0x43) * 0x10 + 0x138 + lVar7);
                    goto code_r0x000180641977;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180641977:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              uStack_88 = uVar6;
              (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
              if (plVar8 != (longlong *)0x0) {
                lVar7 = *plVar8;
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                          (ulonglong)uVar11 * 0x10) + 0xad) * 0x10 + 0x138 + lVar7);
                      goto code_r0x0001806419e9;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806419e9:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar6;
                (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                if (*(longlong *)(lVar5 + 0x18) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lVar5 + 0x18),0);
                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                    if (*(longlong *)(lVar5 + 0x18) != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar5 + 0x18),0);
                      uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                      if (lVar7 != 0) {
                        FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                        if (*(longlong *)(lVar5 + 0x18) != 0) {
                          plVar8 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(lVar5 + 0x18),0);
                          uStack_88 = 0;
                          uStack_80 = 0x3f0ccccd00000000;
                          puVar10 = (undefined8 *)
                                    UnityEngine_UIElements_StyleColor__op_Implicit
                                              (auStack_68,&uStack_88,0);
                          if (plVar8 != (longlong *)0x0) {
                            lVar7 = *plVar8;
                            uVar6 = *puVar10;
                            uVar4 = puVar10[1];
                            uVar1 = *(undefined4 *)(puVar10 + 2);
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar11 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar10 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                      (ulonglong)uVar11 * 0x10) + 9) * 0x10 + 0x138
                                            + lVar7);
                                  goto code_r0x000180641b29;
                                }
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180641b29:
                            uStack_88 = uVar6;
                            uStack_80 = uVar4;
                            uStack_78 = uVar1;
                            (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                            if (*(longlong *)(lVar5 + 0x18) != 0) {
                              plVar8 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style
                                                 (*(longlong *)(lVar5 + 0x18),0);
                              if (*(longlong *)(lVar5 + 0x18) != 0) {
                                plVar9 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(lVar5 + 0x18),0);
                                puVar10 = (undefined8 *)
                                          UnityEngine_UIElements_StyleLength__op_Implicit
                                                    (&uStack_88,(float)param_3 * 0.5,0);
                                if (plVar9 != (longlong *)0x0) {
                                  lVar7 = *plVar9;
                                  uVar6 = *puVar10;
                                  uVar1 = *(undefined4 *)(puVar10 + 1);
                                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                    uVar11 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar10 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                            (ulonglong)uVar11 * 0x10) + 0x29) * 0x10
                                                   + 0x138 + lVar7);
                                        goto code_r0x000180641bea;
                                      }
                                      uVar11 = uVar11 + 1;
                                    } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                  }
                                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x29);
code_r0x000180641bea:
                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                  uStack_88 = uVar6;
                                  (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                                  if (plVar8 != (longlong *)0x0) {
                                    lVar7 = *plVar8;
                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                      uVar11 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10
                                             ) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar10 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                              (ulonglong)uVar11 * 0x10) + 0x27) *
                                                     0x10 + 0x138 + lVar7);
                                          goto code_r0x000180641c59;
                                        }
                                        uVar11 = uVar11 + 1;
                                      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                    }
                                    puVar10 = (undefined8 *)
                                              FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x27);
code_r0x000180641c59:
                                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                    uStack_88 = uVar6;
                                    (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                                    if (*(longlong *)(lVar5 + 0x18) != 0) {
                                      plVar8 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(lVar5 + 0x18),0);
                                      if (*(longlong *)(lVar5 + 0x18) != 0) {
                                        plVar9 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (*(longlong *)(lVar5 + 0x18),0);
                                        puVar10 = (undefined8 *)
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,(float)param_3 * 0.5,0);
                                        if (plVar9 != (longlong *)0x0) {
                                          lVar7 = *plVar9;
                                          uVar6 = *puVar10;
                                          uVar1 = *(undefined4 *)(puVar10 + 1);
                                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                            uVar11 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar7 + 0xb0) +
                                                   (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar10 = (undefined8 *)
                                                          ((longlong)
                                                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8
                                                                    + (ulonglong)uVar11 * 0x10) +
                                                           0x19) * 0x10 + 0x138 + lVar7);
                                                goto code_r0x000180641d17;
                                              }
                                              uVar11 = uVar11 + 1;
                                            } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                          }
                                          puVar10 = (undefined8 *)
                                                    FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x19);
code_r0x000180641d17:
                                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                          uStack_88 = uVar6;
                                          (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                                          if (plVar8 != (longlong *)0x0) {
                                            lVar7 = *plVar8;
                                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                              uVar11 = 0;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar7 + 0xb0) +
                                                     (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar10 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar7 + 0xb0) +
                                                                       8 + (ulonglong)uVar11 * 0x10)
                                                             + 0x17) * 0x10 + 0x138 + lVar7);
                                                  goto code_r0x000180641d89;
                                                }
                                                uVar11 = uVar11 + 1;
                                              } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                            }
                                            puVar10 = (undefined8 *)
                                                      FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x17);
code_r0x000180641d89:
                                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                            uStack_88 = uVar6;
                                            (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                                            lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                            UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                                            if (lVar7 != 0) {
                                              plVar8 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                              plVar9 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                              puVar10 = (undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit();
                                              if (plVar9 != (longlong *)0x0) {
                                                lVar2 = *plVar9;
                                                uVar6 = *puVar10;
                                                uVar1 = *(undefined4 *)(puVar10 + 1);
                                                if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                  uVar11 = 0;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar2 + 0xb0) +
                                                         (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
                                                       ) {
                                                      puVar10 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar2 + 0xb0) + 8 +
                                                                          (ulonglong)uVar11 * 0x10)
                                                                 + 0x43) * 0x10 + 0x138 + lVar2);
                                                      goto code_r0x000180641e5a;
                                                    }
                                                    uVar11 = uVar11 + 1;
                                                  } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
                                                }
                                                puVar10 = (undefined8 *)
                                                          FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180641e5a:
                                                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                                uStack_88 = uVar6;
                                                (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                                                if (plVar8 != (longlong *)0x0) {
                                                  lVar2 = *plVar8;
                                                  if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                    uVar11 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar2 + 0xb0) +
                                                           (ulonglong)uVar11 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar10 = (undefined8 *)
                                                                  ((longlong)
                                                                   (*(int *)(*(longlong *)
                                                                              (lVar2 + 0xb0) + 8 +
                                                                            (ulonglong)uVar11 * 0x10
                                                                            ) + 0xad) * 0x10 + 0x138
                                                                  + lVar2);
                                                        goto code_r0x000180641ec9;
                                                      }
                                                      uVar11 = uVar11 + 1;
                                                    } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
                                                  }
                                                  puVar10 = (undefined8 *)
                                                            FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad
                                                                         );
code_r0x000180641ec9:
                                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                                  uStack_88 = uVar6;
                                                  (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]);
                                                  plVar8 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                                  uStack_88 = *param_2;
                                                  uStack_80 = param_2[1];
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (auStack_68,&uStack_88,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar2 = *plVar8;
                                                    uVar6 = *puVar10;
                                                    uVar4 = puVar10[1];
                                                    uVar1 = *(undefined4 *)(puVar10 + 2);
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      uVar11 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             (ulonglong)uVar11 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar2 + 0xb0) + 8 +
                                                                              (ulonglong)uVar11 *
                                                                              0x10) + 9) * 0x10 +
                                                                     0x138 + lVar2);
                                                          goto code_r0x000180641f69;
                                                        }
                                                        uVar11 = uVar11 + 1;
                                                      } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9)
                                                    ;
code_r0x000180641f69:
                                                    uStack_88 = uVar6;
                                                    uStack_80 = uVar4;
                                                    uStack_78 = uVar1;
                                                    (*(code *)*puVar10)(plVar8,&uStack_88,puVar10[1]
                                                                       );
                                                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                      func_0x000180315660();
                                                    }
                                                    uStack_88 = 0x3f8000003f800000;
                                                    uStack_80 = 0x3f8000003f800000;
                                                    SparkEstilo__Borda__18071da60
                                                              (lVar7,&uStack_88,0x40000000,
                                                               (float)param_4 * 0.5,0);
                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar7,1,0);
                                                  if (*(longlong *)(lVar5 + 0x18) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(lVar5 + 0x18),lVar7,0);
                                                    lVar7 = *(longlong *)(lVar5 + 0x18);
                                                    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>
                                                                               );
                                                    FUN_18055b980(uVar6,lVar5,MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__0,0
                                                                 );
                                                    if (lVar7 != 0) {
                                                      FUN_180990d50(lVar7,uVar6,0,
                                                                    MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                                      lVar7 = *(longlong *)(lVar5 + 0x18);
                                                      uVar6 = func_0x000180315580(
                                                  TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                                  FUN_18055b980(uVar6,lVar5,MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__1,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180990d50(lVar7,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>
                                                                 );
                                                    return *(undefined8 *)(lVar5 + 0x18);
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  uVar6 = (*pcVar3)();
  return uVar6;
}

