// SparkRadarWindow__Botao__1806e50d0 @ 0x1806e50d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Botao__1806e50d0
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ushort uVar14;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_30;
  
  if (cRam00000001834b4092 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__0);
    FUN_180315380(MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__1);
    FUN_180315380(MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__2);
    FUN_180315380(MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__3);
    FUN_180315380(TI_SparkRadarWindow.<>c__DisplayClass98_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'_Over'");
    FUN_180315380(LIT_"'_Down'");
    cRam00000001834b4092 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_SparkRadarWindow.<>c__DisplayClass98_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x38) = param_7;
    func_0x000180314690(lVar7 + 0x38);
    if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkRadarWindow__Tex__1806eaca0(param_2,0);
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    func_0x000180314690(lVar7 + 0x28,uVar8);
    uVar8 = System_String__Concat(param_2,LIT_"'_Over'",0);
    uVar8 = SparkRadarWindow__Tex__1806eaca0(uVar8,0);
    *(undefined8 *)(lVar7 + 0x20) = uVar8;
    func_0x000180314690(lVar7 + 0x20,uVar8);
    uVar8 = System_String__Concat(param_2,LIT_"'_Down'",0);
    uVar8 = SparkRadarWindow__Tex__1806eaca0(uVar8,0);
    *(undefined8 *)(lVar7 + 0x30) = uVar8;
    func_0x000180314690(lVar7 + 0x30,uVar8);
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if (cVar6 != '\0') {
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x28);
      func_0x000180314690(lVar7 + 0x20);
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x30);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if (cVar6 != '\0') {
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar7 + 0x28);
      func_0x000180314690(lVar7 + 0x30);
    }
    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
    *(undefined8 *)(lVar7 + 0x18) = uVar8;
    func_0x000180314690(lVar7 + 0x18,uVar8);
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x18),0);
      uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar9 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
        if (*(longlong *)(lVar7 + 0x18) != 0) {
          plVar10 = (longlong *)
                    UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x18),0);
          puVar11 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_3,0);
          if (plVar10 != (longlong *)0x0) {
            lVar9 = *plVar10;
            uVar8 = *puVar11;
            uVar1 = *(undefined4 *)(puVar11 + 1);
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                             0x47) * 0x10 + 0x138 + lVar9);
                  goto code_r0x0001806e5439;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806e5439:
            uStack_88 = uVar8;
            uStack_80 = uVar1;
            (*(code *)*puVar11)(plVar10,&uStack_88,puVar11[1]);
            if (*(longlong *)(lVar7 + 0x18) != 0) {
              plVar10 = (longlong *)
                        UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lVar7 + 0x18),0);
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_4,0);
              if (plVar10 != (longlong *)0x0) {
                lVar9 = *plVar10;
                uVar8 = *puVar11;
                uVar1 = *(undefined4 *)(puVar11 + 1);
                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                  uVar14 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar11 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                          (ulonglong)uVar14 * 0x10) + 0x73) * 0x10 + 0x138 + lVar9);
                      goto code_r0x0001806e54d9;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
                }
                puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806e54d9:
                uStack_88 = uVar8;
                uStack_80 = uVar1;
                (*(code *)*puVar11)(plVar10,&uStack_88,puVar11[1]);
                if (*(longlong *)(lVar7 + 0x18) != 0) {
                  plVar10 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(lVar7 + 0x18),0);
                  if (*(longlong *)(lVar7 + 0x18) != 0) {
                    plVar12 = (longlong *)
                              UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(lVar7 + 0x18),0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_5,0);
                    if (plVar12 != (longlong *)0x0) {
                      lVar9 = *plVar12;
                      uVar8 = *puVar11;
                      uVar1 = *(undefined4 *)(puVar11 + 1);
                      if (*(ushort *)(lVar9 + 0x12e) != 0) {
                        uVar14 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar11 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                (ulonglong)uVar14 * 0x10) + 0x43) * 0x10 + 0x138 +
                                      lVar9);
                            goto code_r0x0001806e55a7;
                          }
                          uVar14 = uVar14 + 1;
                        } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
                      }
                      puVar11 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e55a7:
                      uStack_88 = uVar8;
                      uStack_80 = uVar1;
                      (*(code *)*puVar11)(plVar12,&uStack_88,puVar11[1]);
                      if (plVar10 != (longlong *)0x0) {
                        lVar9 = *plVar10;
                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                          uVar14 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar11 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                  (ulonglong)uVar14 * 0x10) + 0xad) * 0x10 + 0x138 +
                                        lVar9);
                              goto code_r0x0001806e5629;
                            }
                            uVar14 = uVar14 + 1;
                          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
                        }
                        puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806e5629:
                        uStack_88 = uVar8;
                        uStack_80 = uVar1;
                        (*(code *)*puVar11)(plVar10,&uStack_88,puVar11[1]);
                        if (*(longlong *)(lVar7 + 0x18) != 0) {
                          plVar10 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(lVar7 + 0x18),0);
                          puVar11 = (undefined8 *)
                                    UnityEngine_UIElements_StyleBackground__op_Implicit
                                              (&uStack_78,*(undefined8 *)(lVar7 + 0x28),0);
                          if (plVar10 != (longlong *)0x0) {
                            lVar9 = *plVar10;
                            uVar13 = *puVar11;
                            uVar3 = puVar11[1];
                            uVar4 = puVar11[2];
                            uVar5 = puVar11[3];
                            uVar8 = puVar11[4];
                            if (*(ushort *)(lVar9 + 0x12e) != 0) {
                              uVar14 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar11 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                      (ulonglong)uVar14 * 0x10) + 0xb) * 0x10 +
                                             0x138 + lVar9);
                                  goto code_r0x0001806e56d7;
                                }
                                uVar14 = uVar14 + 1;
                              } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
                            }
                            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806e56d7:
                            uStack_78 = uVar13;
                            uStack_70 = uVar3;
                            uStack_68 = uVar4;
                            uStack_60 = uVar5;
                            uStack_58 = uVar8;
                            (*(code *)*puVar11)(plVar10,&uStack_78,puVar11[1]);
                            if (*(longlong *)(lVar7 + 0x18) != 0) {
                              UnityEngine_UIElements_VisualElement__set_tooltip
                                        (*(longlong *)(lVar7 + 0x18),param_6,0);
                              lVar9 = *(longlong *)(lVar7 + 0x18);
                              *(undefined1 *)(lVar7 + 0x10) = 0;
                              uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent>);
                              FUN_18055b980(uVar8,lVar7,MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__0,0);
                              if (lVar9 != 0) {
                                FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent>);
                                lVar9 = *(longlong *)(lVar7 + 0x18);
                                uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                FUN_18055b980(uVar8,lVar7,MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__1,0);
                                if (lVar9 != 0) {
                                  FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                  lVar9 = *(longlong *)(lVar7 + 0x18);
                                  uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                                  FUN_18055b980(uVar8,lVar7,MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__2,0);
                                  if (lVar9 != 0) {
                                    FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                                    lVar9 = *(longlong *)(lVar7 + 0x18);
                                    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent>);
                                    FUN_18055b980(uVar8,lVar7,MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__3,0);
                                    if (lVar9 != 0) {
                                      FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>);
                                      plVar10 = *(longlong **)(param_1 + 0x30);
                                      if (plVar10 != (longlong *)0x0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x18);
                                        if (lVar7 != 0) {
                                          puStack_30 = (undefined1 *)0x1825c42fe;
                                          plVar12 = (longlong *)
                                                    (**(code **)(*plVar10 + 0x9d8))
                                                              (plVar10,*(undefined8 *)
                                                                        (*plVar10 + 0x9e0),0);
                                          if (plVar12 == (longlong *)0x0) {
                                            puStack_30 = (undefined1 *)0x1825c435b;
                                            uVar8 = func_0x0001803153a0(TI_System.InvalidOperationException);
                                            puStack_30 = (undefined1 *)0x1825c4363;
                                            uVar8 = func_0x000180315580(uVar8);
                                            puStack_30 = (undefined1 *)0x1825c4372;
                                            uVar13 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                                            puStack_30 = (undefined1 *)0x1825c4380;
                                            System_InvalidOperationException___ctor(uVar8,uVar13,0);
                                            puStack_30 = (undefined1 *)0x1825c438c;
                                            uVar13 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                                            puStack_30 = (undefined1 *)0x1825c4397;
                                            FUN_180315590(uVar8,uVar13);
                                            pcVar2 = (code *)swi(3);
                                            (*pcVar2)();
                                            return;
                                          }
                                          if (plVar12 == plVar10) {
                                            puStack_30 = &LAB_1825c432e;
                                            UnityEngine_UIElements_VisualElement_Hierarchy__Add
                                                      (&stack0x00000010,lVar7,0);
                                          }
                                          else {
                                            puStack_30 = (undefined1 *)0x1825c4316;
                                            UnityEngine_UIElements_VisualElement__Add(plVar12);
                                          }
                                          *(longlong **)(lVar7 + 0x288) = plVar10;
                                          puStack_30 = (undefined1 *)0x1825c4344;
                                          func_0x000180314690(lVar7 + 0x288,plVar10);
                                        }
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

