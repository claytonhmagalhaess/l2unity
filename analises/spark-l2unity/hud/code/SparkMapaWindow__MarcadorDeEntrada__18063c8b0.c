// SparkMapaWindow__MarcadorDeEntrada__18063c8b0 @ 0x18063c8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__MarcadorDeEntrada__18063c8b0(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [56];
  
  if (cRam00000001834b3d37 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__0);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__1);
    FUN_180315380(MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__2);
    FUN_180315380(TI_SparkMapaWindow.<>c__DisplayClass181_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'+'");
    cRam00000001834b3d37 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SparkMapaWindow.<>c__DisplayClass181_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_1;
    func_0x000180314690(lVar4 + 0x18,param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    func_0x000180314690(lVar4 + 0x20,param_2);
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
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
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
                    goto code_r0x00018063cb37;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063cb37:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              uStack_88 = uVar5;
              (*(code *)*puVar9)(plVar8,&uStack_88,puVar9[1]);
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
                      goto code_r0x00018063cba9;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063cba9:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar5;
                (*(code *)*puVar9)(plVar7,&uStack_88,puVar9[1]);
                if (*(longlong *)(lVar4 + 0x10) != 0) {
                  plVar7 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar4 + 0x10),0);
                  uStack_88 = 0x3d8f5c293d4ccccd;
                  uStack_80 = 0x3f59999a3dcccccd;
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleColor__op_Implicit(auStack_50,&uStack_88,0);
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
                          goto code_r0x00018063cc59;
                        }
                        uVar11 = uVar11 + 1;
                      } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018063cc59:
                    uStack_88 = uVar5;
                    uStack_80 = uVar3;
                    uStack_78 = uVar1;
                    (*(code *)*puVar9)(plVar7,&uStack_88,puVar9[1]);
                    uVar5 = *(undefined8 *)(lVar4 + 0x10);
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uStack_88 = 0x3f4dcdce3f2aaaab;
                    uStack_80 = 0x3f8000003f6bebec;
                    SparkEstilo__Borda__18071da60(uVar5,&uStack_88,0x3f800000,0x40400000,0);
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
                            uStack_88 = 0x3f4dcdce3f2aaaab;
                            uStack_80 = 0x3f8000003f6bebec;
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_58 = 0;
                            func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
                            uStack_88 = uStack_68;
                            uStack_80 = uStack_60;
                            uStack_78 = uStack_58;
                            lVar6 = SparkEstilo__Texto__180722af0(LIT_"'+'",0xc,&uStack_88,1,0)
                            ;
                            if (lVar6 != 0) {
                              lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                              uVar5 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                              if (lVar10 != 0) {
                                FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                plVar7 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                puVar9 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit();
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
                                        goto code_r0x00018063ce69;
                                      }
                                      uVar11 = uVar11 + 1;
                                    } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
                                  }
                                  puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018063ce69:
                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                  uStack_88 = uVar5;
                                  (*(code *)*puVar9)(plVar7,&uStack_88,puVar9[1]);
                                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0);
                                  if (*(longlong *)(lVar4 + 0x10) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(lVar4 + 0x10),lVar6,0);
                                    if (*(longlong *)(lVar4 + 0x10) != 0) {
                                      UnityEngine_UIElements_VisualElement__set_userData
                                                (*(longlong *)(lVar4 + 0x10),
                                                 *(undefined8 *)(lVar4 + 0x20),0);
                                      lVar6 = *(longlong *)(lVar4 + 0x10);
                                      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                      FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__0,0);
                                      if (lVar6 != 0) {
                                        FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                        lVar6 = *(longlong *)(lVar4 + 0x10);
                                        uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                        FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__1,0);
                                        if (lVar6 != 0) {
                                          FUN_180990d50(lVar6,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                          lVar6 = *(longlong *)(lVar4 + 0x10);
                                          uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                                          FUN_18055b980(uVar5,lVar4,MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__2,0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

