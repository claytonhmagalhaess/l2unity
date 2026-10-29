// ChatWindow__Botao__1805c55e0 @ 0x1805c55e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ChatWindow__Botao__1805c55e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000048;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (cRam00000001834b3aeb == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass116_0._Botao_b__0);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass116_0._Botao_b__1);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass116_0._Botao_b__2);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass116_0._Botao_b__3);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass116_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/UI/Assets/SparkChat/'");
    cRam00000001834b3aeb = '\x01';
  }
  lVar7 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass116_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x18) = param_2;
    func_0x000180314690(lVar7 + 0x18,param_2);
    *(undefined8 *)(lVar7 + 0x20) = param_1;
    func_0x000180314690(lVar7 + 0x20,param_1);
    *(undefined8 *)(lVar7 + 0x30) = param_3;
    func_0x000180314690(lVar7 + 0x30,param_3);
    *(undefined1 *)(lVar7 + 0x38) = in_stack_00000048;
    *(undefined8 *)(lVar7 + 0x40) = in_stack_00000040;
    func_0x000180314690(lVar7 + 0x40);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    func_0x000180314690(lVar7 + 0x28,0);
    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar8;
    func_0x000180314690(lVar7 + 0x10,uVar8);
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
      uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar9 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          plVar10 = (longlong *)
                    UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
          puVar11 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar10 != (longlong *)0x0) {
            lVar9 = *plVar10;
            uVar8 = *puVar11;
            uVar1 = *(undefined4 *)(puVar11 + 1);
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                             0x47) * 0x10 + 0x138 + lVar9);
                  goto code_r0x0001805c5879;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805c5879:
            uStack_98 = uVar8;
            uStack_90 = uVar1;
            (*(code *)*puVar11)(plVar10,&uStack_98,puVar11[1]);
            if (*(longlong *)(lVar7 + 0x10) != 0) {
              plVar10 = (longlong *)
                        UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lVar7 + 0x10),0);
              puVar11 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar10 != (longlong *)0x0) {
                lVar9 = *plVar10;
                uVar8 = *puVar11;
                uVar1 = *(undefined4 *)(puVar11 + 1);
                if (*(ushort *)(lVar9 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar11 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                          (ulonglong)uVar12 * 0x10) + 0x2d) * 0x10 + 0x138 + lVar9);
                      goto code_r0x0001805c5929;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                }
                puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805c5929:
                uStack_98 = uVar8;
                uStack_90 = uVar1;
                (*(code *)*puVar11)(plVar10,&uStack_98,puVar11[1]);
                if (*(longlong *)(lVar7 + 0x10) != 0) {
                  plVar10 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(lVar7 + 0x10),0);
                  puVar11 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar10 != (longlong *)0x0) {
                    lVar9 = *plVar10;
                    uVar8 = *puVar11;
                    uVar1 = *(undefined4 *)(puVar11 + 1);
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar12 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar11 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar12 * 0x10) + 0xad) * 0x10 + 0x138 +
                                    lVar9);
                          goto code_r0x0001805c59d9;
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c59d9:
                    uStack_98 = uVar8;
                    uStack_90 = uVar1;
                    (*(code *)*puVar11)(plVar10,&uStack_98,puVar11[1]);
                    if (*(longlong *)(lVar7 + 0x10) != 0) {
                      plVar10 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(lVar7 + 0x10),0);
                      puVar11 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                      if (plVar10 != (longlong *)0x0) {
                        lVar9 = *plVar10;
                        uVar8 = *puVar11;
                        uVar1 = *(undefined4 *)(puVar11 + 1);
                        if (*(ushort *)(lVar9 + 0x12e) != 0) {
                          uVar12 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar11 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                  (ulonglong)uVar12 * 0x10) + 0x43) * 0x10 + 0x138 +
                                        lVar9);
                              goto code_r0x0001805c5a89;
                            }
                            uVar12 = uVar12 + 1;
                          } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                        }
                        puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805c5a89:
                        uStack_98 = uVar8;
                        uStack_90 = uVar1;
                        (*(code *)*puVar11)(plVar10,&uStack_98,puVar11[1]);
                        if (*(longlong *)(lVar7 + 0x10) != 0) {
                          plVar10 = (longlong *)
                                    UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(lVar7 + 0x10),0);
                          uVar8 = System_String__Concat
                                            (LIT_"'Data/UI/Assets/SparkChat/'",*(undefined8 *)(lVar7 + 0x20),0);
                          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar8 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
                          puVar11 = (undefined8 *)
                                    UnityEngine_UIElements_StyleBackground__op_Implicit
                                              (&uStack_88,uVar8,0);
                          if (plVar10 != (longlong *)0x0) {
                            lVar9 = *plVar10;
                            uVar3 = *puVar11;
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar8 = puVar11[4];
                            if (*(ushort *)(lVar9 + 0x12e) != 0) {
                              uVar12 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar11 = (undefined8 *)
                                            ((longlong)
                                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                                      (ulonglong)uVar12 * 0x10) + 0xb) * 0x10 +
                                             0x138 + lVar9);
                                  goto code_r0x0001805c5b77;
                                }
                                uVar12 = uVar12 + 1;
                              } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
                            }
                            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805c5b77:
                            uStack_88 = uVar3;
                            uStack_80 = uVar4;
                            uStack_78 = uVar5;
                            uStack_70 = uVar6;
                            uStack_68 = uVar8;
                            (*(code *)*puVar11)(plVar10,&uStack_88,puVar11[1]);
                            lVar9 = *(longlong *)(lVar7 + 0x10);
                            uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                            FUN_18055b980(uVar8,lVar7,MD_ChatWindow.__c__DisplayClass116_0._Botao_b__0,0);
                            if (lVar9 != 0) {
                              FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                              lVar9 = *(longlong *)(lVar7 + 0x10);
                              uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                              FUN_18055b980(uVar8,lVar7,MD_ChatWindow.__c__DisplayClass116_0._Botao_b__1,0);
                              if (lVar9 != 0) {
                                FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                                lVar9 = *(longlong *)(lVar7 + 0x10);
                                uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                                FUN_18055b980(uVar8,lVar7,MD_ChatWindow.__c__DisplayClass116_0._Botao_b__2,0);
                                if (lVar9 != 0) {
                                  FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                                  lVar9 = *(longlong *)(lVar7 + 0x10);
                                  uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
                                  FUN_18055b980(uVar8,lVar7,MD_ChatWindow.__c__DisplayClass116_0._Botao_b__3,0);
                                  if (lVar9 != 0) {
                                    FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
                                    return *(undefined8 *)(lVar7 + 0x10);
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
  uVar8 = (*pcVar2)();
  return uVar8;
}

