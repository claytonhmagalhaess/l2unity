// SparkMapaWindow__Marcador__18063d060 @ 0x18063d060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__Marcador__18063d060(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [64];
  
  if (cRam00000001834b3d24 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_SparkMapaWindow.Cidade);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__0);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__1);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__2);
    FUN_180315380(TI_SparkMapaWindow.<>c__DisplayClass156_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'+'");
    cRam00000001834b3d24 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SparkMapaWindow.<>c__DisplayClass156_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    func_0x000180314690(lVar4 + 0x18,param_1);
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    *(undefined8 *)(lVar4 + 0x20) = *param_2;
    *(undefined8 *)(lVar4 + 0x28) = uVar3;
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    func_0x000180314690(lVar4 + 0x20,0);
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    func_0x000180314690(lVar4 + 0x10,uVar5);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x10),0);
      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          plVar7 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x10),0);
          if (*(longlong *)(lVar4 + 0x10) != 0) {
            plVar8 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x10),0);
            puVar9 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x41900000,0);
            if (plVar8 != (longlong *)0x0) {
              lVar6 = *plVar8;
              uVar5 = *puVar9;
              uVar1 = *(undefined4 *)(puVar9 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar11 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar9 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10)
                              + 0x43) * 0x10 + 0x138 + lVar6);
                    goto code_r0x00018063d307;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063d307:
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
              uStack_a8 = uVar5;
              (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
              if (plVar7 != (longlong *)0x0) {
                lVar6 = *plVar7;
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar9 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10
                                         ) + 0xad) * 0x10 + 0x138 + lVar6);
                      goto code_r0x00018063d379;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063d379:
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                uStack_a8 = uVar5;
                (*(code *)*puVar9)(plVar7,&uStack_a8,puVar9[1]);
                if (*(longlong *)(lVar4 + 0x10) != 0) {
                  plVar7 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar4 + 0x10),0);
                  uStack_a8 = 0x3d8f5c293da3d70a;
                  uStack_a0 = 0x3f59999a3d4ccccd;
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_a8,0);
                  if (plVar7 != (longlong *)0x0) {
                    lVar6 = *plVar7;
                    uVar5 = *puVar9;
                    uVar3 = puVar9[1];
                    uVar1 = *(undefined4 *)(puVar9 + 2);
                    if (*(ushort *)(lVar6 + 0x12e) != 0) {
                      uVar11 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar9 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                             (ulonglong)uVar11 * 0x10) + 9) * 0x10 + 0x138 + lVar6);
                          goto code_r0x00018063d429;
                        }
                        uVar11 = uVar11 + 1;
                      } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018063d429:
                    uStack_a8 = uVar5;
                    uStack_a0 = uVar3;
                    uStack_98 = uVar1;
                    (*(code *)*puVar9)(plVar7,&uStack_a8,puVar9[1]);
                    uVar5 = *(undefined8 *)(lVar4 + 0x10);
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    uStack_a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
                    uStack_a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
                    SparkEstilo__Borda__18071da60(uVar5,&uStack_a8,0x3f800000,0x41100000,0);
                    if (*(longlong *)(lVar4 + 0x10) != 0) {
                      lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar4 + 0x10),0);
                      uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                      if (lVar6 != 0) {
                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                        if (*(longlong *)(lVar4 + 0x10) != 0) {
                          lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(lVar4 + 0x10),0);
                          uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                          if (lVar6 != 0) {
                            FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
                            uStack_a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60)
                            ;
                            uStack_a0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68)
                            ;
                            uStack_78 = 0;
                            uStack_88 = 0;
                            uStack_80 = 0;
                            func_0x000180cb7cb0(&uStack_88,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                            uStack_a8 = uStack_88;
                            uStack_a0 = uStack_80;
                            uStack_98 = uStack_78;
                            lVar6 = SparkEstilo__Texto__180722af0(LIT_"'+'",0xe,&uStack_a8,1,0)
                            ;
                            if (lVar6 != 0) {
                              lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                              uVar5 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                              if (lVar10 != 0) {
                                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                plVar7 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                puVar9 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit
                                                   (&uStack_a8,0xc0000000,0);
                                if (plVar7 != (longlong *)0x0) {
                                  lVar10 = *plVar7;
                                  uVar5 = *puVar9;
                                  uVar1 = *(undefined4 *)(puVar9 + 1);
                                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                    uVar11 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar9 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                           (ulonglong)uVar11 * 0x10) + 0x51) * 0x10
                                                  + 0x138 + lVar10);
                                        goto code_r0x00018063d659;
                                      }
                                      uVar11 = uVar11 + 1;
                                    } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
                                  }
                                  puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018063d659:
                                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                                  uStack_a8 = uVar5;
                                  (*(code *)*puVar9)(plVar7,&uStack_a8,puVar9[1]);
                                  if (*(longlong *)(lVar4 + 0x10) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(lVar4 + 0x10),lVar6,0);
                                    uVar5 = *(undefined8 *)(lVar4 + 0x20);
                                    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
                                      func_0x000180315660(TI_SparkMapaWindow);
                                    }
                                    uStack_a8 = *(undefined8 *)
                                                 (*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x30)
                                    ;
                                    uStack_a0 = *(undefined8 *)
                                                 (*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x38)
                                    ;
                                    lVar6 = SparkMapaWindow__Rotulo__180648b00
                                                      (uVar5,0xf,&uStack_a8,0);
                                    if (lVar6 != 0) {
                                      plVar7 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar6,0);
                                      puVar9 = (undefined8 *)
                                               UnityEngine_UIElements_StyleLength__op_Implicit
                                                         (&uStack_a8,0xc2a20000,0);
                                      if (plVar7 != (longlong *)0x0) {
                                        lVar10 = *plVar7;
                                        uVar5 = *puVar9;
                                        uVar1 = *(undefined4 *)(puVar9 + 1);
                                        if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                          uVar11 = 0;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar10 + 0xb0) +
                                                 (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                              puVar9 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                                 (ulonglong)uVar11 * 0x10) + 0x47) *
                                                        0x10 + 0x138 + lVar10);
                                              goto code_r0x00018063d759;
                                            }
                                            uVar11 = uVar11 + 1;
                                          } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
                                        }
                                        puVar9 = (undefined8 *)
                                                 FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018063d759:
                                        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                                        uStack_a8 = uVar5;
                                        (*(code *)*puVar9)(plVar7,&uStack_a8,puVar9[1]);
                                        plVar7 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar6,0);
                                        puVar9 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_a8,0x41980000,0);
                                        if (plVar7 != (longlong *)0x0) {
                                          lVar10 = *plVar7;
                                          uVar5 = *puVar9;
                                          uVar1 = *(undefined4 *)(puVar9 + 1);
                                          if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                            uVar11 = 0;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar10 + 0xb0) +
                                                   (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                puVar9 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8
                                                                   + (ulonglong)uVar11 * 0x10) +
                                                          0x73) * 0x10 + 0x138 + lVar10);
                                                goto code_r0x00018063d7f9;
                                              }
                                              uVar11 = uVar11 + 1;
                                            } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
                                          }
                                          puVar9 = (undefined8 *)
                                                   FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018063d7f9:
                                          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
                                          uStack_a8 = uVar5;
                                          (*(code *)*puVar9)(plVar7,&uStack_a8,puVar9[1]);
                                          lVar10 = UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar6,0);
                                          uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                          if (lVar10 != 0) {
                                            FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                            if (*(longlong *)(lVar4 + 0x10) != 0) {
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (*(longlong *)(lVar4 + 0x10),lVar6,0);
                                              uStack_70 = *(undefined8 *)(lVar4 + 0x20);
                                              uStack_68 = *(undefined8 *)(lVar4 + 0x28);
                                              lVar6 = *(longlong *)(lVar4 + 0x10);
                                              uStack_60 = *(undefined8 *)(lVar4 + 0x30);
                                              uVar5 = func_0x000180314670(TI_SparkMapaWindow.Cidade,
                                                                          &uStack_70);
                                              if (lVar6 != 0) {
                                                UnityEngine_UIElements_VisualElement__set_userData
                                                          (lVar6,uVar5,0);
                                                lVar6 = *(longlong *)(lVar4 + 0x10);
                                                uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                                FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__0,0);
                                                if (lVar6 != 0) {
                                                  FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                                  lVar6 = *(longlong *)(lVar4 + 0x10);
                                                  uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                                  FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__1,0);
                                                  if (lVar6 != 0) {
                                                    FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>
                                                                 );
                                                    lVar6 = *(longlong *)(lVar4 + 0x10);
                                                    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                    FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__2,0
                                                                 );
                                                    if (lVar6 != 0) {
                                                      FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                                      return *(undefined8 *)(lVar4 + 0x10);
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
  uVar5 = (*pcVar2)();
  return uVar5;
}

