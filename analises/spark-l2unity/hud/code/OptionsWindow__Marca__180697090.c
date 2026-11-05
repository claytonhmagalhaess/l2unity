// OptionsWindow__Marca__180697090 @ 0x180697090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OptionsWindow__Marca__180697090
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ushort uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (cRam00000001834b3e9f == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass68_0._Marca_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass68_0._Marca_b__1);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass68_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e9f = '\x01';
  }
  lVar6 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass68_0);
  func_0x0001803f01b0(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x18) = param_3;
    func_0x000180314690(lVar6 + 0x18,param_3);
    *(undefined8 *)(lVar6 + 0x28) = param_4;
    func_0x000180314690(lVar6 + 0x28,param_4);
    *(longlong *)(lVar6 + 0x30) = param_1;
    func_0x000180314690(lVar6 + 0x30,param_1);
    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    func_0x000180314690(lVar6 + 0x20,uVar7);
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
      uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar8 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
        if (*(longlong *)(lVar6 + 0x20) != 0) {
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
          uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar8 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
            if (*(longlong *)(lVar6 + 0x20) != 0) {
              plVar9 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar6 + 0x20),0);
              puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar9 != (longlong *)0x0) {
                lVar8 = *plVar9;
                uVar7 = *puVar10;
                uVar1 = *(undefined4 *)(puVar10 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar13 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                          (ulonglong)uVar13 * 0x10) + 0x43) * 0x10 + 0x138 + lVar8);
                      goto code_r0x000180697309;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180697309:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar7;
                (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                if (*(longlong *)(lVar6 + 0x20) != 0) {
                  lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lVar6 + 0x20),0);
                  uVar7 = func_0x000182601c10(0,0);
                  if (lVar8 != 0) {
                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
                    if (param_5 < 1) {
code_r0x00018069740e:
                      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
                      *(undefined8 *)(lVar6 + 0x10) = uVar7;
                      func_0x000180314690(lVar6 + 0x10,uVar7);
                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                        plVar9 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(lVar6 + 0x10),0);
                        if (*(longlong *)(lVar6 + 0x10) != 0) {
                          plVar11 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(lVar6 + 0x10),0);
                          puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                          if (plVar11 != (longlong *)0x0) {
                            lVar8 = *plVar11;
                            uVar7 = *puVar10;
                            uVar1 = *(undefined4 *)(puVar10 + 1);
                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                              uVar13 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar10 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                      (ulonglong)uVar13 * 0x10) + 0x43) * 0x10 +
                                             0x138 + lVar8);
                                  goto code_r0x0001806974fa;
                                }
                                uVar13 = uVar13 + 1;
                              } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                            }
                            puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806974fa:
                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                            uStack_88 = uVar7;
                            (*(code *)*puVar10)(plVar11,&uStack_88,puVar10[1]);
                            if (plVar9 != (longlong *)0x0) {
                              lVar8 = *plVar9;
                              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                uVar13 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar10 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                        (ulonglong)uVar13 * 0x10) + 0xad) * 0x10 +
                                               0x138 + lVar8);
                                    goto code_r0x000180697569;
                                  }
                                  uVar13 = uVar13 + 1;
                                } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                              }
                              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180697569:
                              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                              uStack_88 = uVar7;
                              (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                              if (*(longlong *)(lVar6 + 0x10) != 0) {
                                plVar9 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(lVar6 + 0x10),0);
                                puVar10 = (undefined8 *)
                                          UnityEngine_UIElements_StyleLength__op_Implicit();
                                if (plVar9 != (longlong *)0x0) {
                                  lVar8 = *plVar9;
                                  uVar7 = *puVar10;
                                  uVar1 = *(undefined4 *)(puVar10 + 1);
                                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                    uVar13 = 0;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar10 = (undefined8 *)
                                                  ((longlong)
                                                   (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                            (ulonglong)uVar13 * 0x10) + 0x4f) * 0x10
                                                   + 0x138 + lVar8);
                                        goto code_r0x000180697609;
                                      }
                                      uVar13 = uVar13 + 1;
                                    } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                                  }
                                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180697609:
                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                                  uStack_88 = uVar7;
                                  (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                                  if (*(longlong *)(lVar6 + 0x20) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(lVar6 + 0x20),
                                               *(undefined8 *)(lVar6 + 0x10),0);
                                    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                      func_0x000180315660(TI_OptionsWindow);
                                    }
                                    uStack_88 = *(undefined8 *)
                                                 (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28)
                                    ;
                                    uStack_80 = *(undefined8 *)
                                                 (*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30)
                                    ;
                                    uStack_68 = 0;
                                    uStack_60 = 0;
                                    uStack_58 = 0;
                                    func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor);
                                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                      func_0x000180315660();
                                    }
                                    uStack_78 = uStack_58;
                                    uStack_88 = uStack_68;
                                    uStack_80 = uStack_60;
                                    uVar7 = SparkEstilo__Texto(param_2,0xb,&uStack_88,0,0);
                                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                                      UnityEngine_UIElements_VisualElement__Add
                                                (*(longlong *)(lVar6 + 0x20),uVar7,0);
                                      lVar12 = func_0x000180315580(TI_System.Action);
                                      FUN_1816a9c60(lVar12,lVar6,MD_OptionsWindow.__c__DisplayClass68_0._Marca_b__0,0);
                                      lVar8 = *(longlong *)(lVar6 + 0x20);
                                      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                                      FUN_18055b980(uVar7,lVar6,MD_OptionsWindow.__c__DisplayClass68_0._Marca_b__1,0);
                                      if (lVar8 != 0) {
                                        FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                                        lVar5 = MR_System.Collections.Generic.List<System.Action>.Add;
                                        lVar8 = *(longlong *)(param_1 + 0xb0);
                                        if (lVar8 != 0) {
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          lVar3 = *(longlong *)(lVar8 + 0x10);
                                          if (lVar3 != 0) {
                                            uVar2 = *(uint *)(lVar8 + 0x18);
                                            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                              if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                                                FUN_1803155c0();
                                                pcVar4 = (code *)swi(3);
                                                uVar7 = (*pcVar4)();
                                                return uVar7;
                                              }
                                              *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8)
                                                   = lVar12;
                                              func_0x000180314690(lVar3 + 0x20 +
                                                                  (longlong)(int)uVar2 * 8,lVar12);
                                            }
                                            else {
                                              FUN_181645af0(lVar8,lVar12,
                                                            *(undefined8 *)
                                                             (*(longlong *)
                                                               (*(longlong *)(lVar5 + 0x20) + 0xc0)
                                                             + 0x70));
                                            }
                                            if (lVar12 != 0) {
                                              (**(code **)(lVar12 + 0x18))
                                                        (*(undefined8 *)(lVar12 + 0x40),
                                                         *(undefined8 *)(lVar12 + 0x28));
                                              return *(undefined8 *)(lVar6 + 0x20);
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
                      pcVar4 = (code *)swi(3);
                      uVar7 = (*pcVar4)();
                      return uVar7;
                    }
                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                      plVar9 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(lVar6 + 0x20),0);
                      puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                      if (plVar9 != (longlong *)0x0) {
                        lVar8 = *plVar9;
                        uVar7 = *puVar10;
                        uVar1 = *(undefined4 *)(puVar10 + 1);
                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                          uVar13 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                  (ulonglong)uVar13 * 0x10) + 0xad) * 0x10 + 0x138 +
                                        lVar8);
                              goto code_r0x0001806973f9;
                            }
                            uVar13 = uVar13 + 1;
                          } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806973f9:
                        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                        uStack_88 = uVar7;
                        (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                        goto code_r0x00018069740e;
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
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}

