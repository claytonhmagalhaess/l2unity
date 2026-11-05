// ChatWindow__AbreMenuDaAba__1805c3220 @ 0x1805c3220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__AbreMenuDaAba__1805c3220(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar14;
  uint uVar15;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_78 [80];
  ulonglong uVar13;
  
  if (cRam00000001834b3abf == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass56_0._AbreMenuDaAba_b__0);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass56_0);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__1);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__2);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__3);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass56_1);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3abf = '\x01';
  }
  lVar4 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass56_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x10) = param_1;
    func_0x000180314690(lVar4 + 0x10,param_1);
    *(undefined4 *)(lVar4 + 0x18) = param_2;
    ChatWindow__FechaMenuDaAba__1805c6e10(param_1,0);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
    if (lVar5 != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8);
        if (plVar8 != (longlong *)0x0) {
          lVar6 = *plVar8;
          uVar14 = 0;
          uVar7 = *puVar9;
          uVar1 = *(undefined4 *)(puVar9 + 1);
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar13 = uVar14;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar13 * 0x10) + 0x47) * 0x10
                          + 0x138 + lVar6);
                goto code_r0x0001805c34c9;
              }
              uVar12 = (short)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
            } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805c34c9:
          uStack_d8 = uVar7;
          uStack_d0 = uVar1;
          (*(code *)*puVar9)(plVar8,&uStack_d8,puVar9[1]);
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8);
          if (plVar8 != (longlong *)0x0) {
            lVar6 = *plVar8;
            uVar7 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar13 = uVar14;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar13 * 0x10) + 0x2d) *
                            0x10 + 0x138 + lVar6);
                  goto code_r0x0001805c3559;
                }
                uVar12 = (short)uVar13 + 1;
                uVar13 = (ulonglong)uVar12;
              } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805c3559:
            uStack_d8 = uVar7;
            uStack_d0 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_d8,puVar9[1]);
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8);
            if (plVar8 != (longlong *)0x0) {
              lVar6 = *plVar8;
              uVar7 = *puVar9;
              uVar1 = *(undefined4 *)(puVar9 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar13 = uVar14;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar9 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar13 * 0x10) + 0xad) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x0001805c35e9;
                  }
                  uVar12 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar12;
                } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805c35e9:
              uStack_d8 = uVar7;
              uStack_d0 = uVar1;
              (*(code *)*puVar9)(plVar8,&uStack_d8,puVar9[1]);
              plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              uStack_98 = 0x3d3851ec3d4ccccd;
              uStack_90 = 0x3f7851ec3d0f5c29;
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_b8,&uStack_98,0);
              if (plVar8 != (longlong *)0x0) {
                lVar6 = *plVar8;
                uVar7 = *puVar9;
                uVar10 = puVar9[1];
                uVar1 = *(undefined4 *)(puVar9 + 2);
                if (*(ushort *)(lVar6 + 0x12e) != 0) {
                  uVar13 = uVar14;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar9 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar13 * 0x10) + 9) *
                                0x10 + 0x138 + lVar6);
                      goto code_r0x0001805c3689;
                    }
                    uVar12 = (short)uVar13 + 1;
                    uVar13 = (ulonglong)uVar12;
                  } while (uVar12 < *(ushort *)(lVar6 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001805c3689:
                uStack_b8 = uVar7;
                uStack_b0 = uVar10;
                uStack_a8 = uVar1;
                (*(code *)*puVar9)(plVar8,&uStack_b8,puVar9[1]);
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkEstilo);
                }
                uStack_98 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
                uStack_90 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
                SparkEstilo__Borda__18071da60(lVar5,&uStack_98,0x3f800000,0,0);
                SparkEstilo__Espaco__18071fb80(lVar5);
                uVar1 = *(undefined4 *)(lVar4 + 0x18);
                if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
                  func_0x000180315660();
                }
                iVar3 = SparkChatFiltro__Casa(uVar1,0);
                while( true ) {
                  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkChatFiltro);
                  }
                  lVar6 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
                  if (lVar6 == 0) goto code_r0x0001805c3dbb;
                  uVar15 = (uint)uVar14;
                  if (*(int *)(lVar6 + 0x18) <= (int)uVar15) break;
                  lVar6 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass56_1);
                  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
                  if (lVar6 == 0) goto code_r0x0001805c3dbb;
                  *(longlong *)(lVar6 + 0x20) = lVar4;
                  func_0x000180314690(lVar6 + 0x20,lVar4);
                  *(uint *)(lVar6 + 0x18) = uVar15;
                  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkChatFiltro);
                  }
                  lVar11 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8);
                  if (lVar11 == 0) goto code_r0x0001805c3dbb;
                  if (*(uint *)(lVar11 + 0x18) <= uVar15) {
                    FUN_1803155c0();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar7 = *(undefined8 *)(lVar11 + 0x20 + (longlong)(int)uVar15 * 8);
                  uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
                  UnityEngine_UIElements_Label___ctor(uVar10,uVar7,0);
                  *(undefined8 *)(lVar6 + 0x10) = uVar10;
                  func_0x000180314690(lVar6 + 0x10,uVar10);
                  uVar7 = *(undefined8 *)(lVar6 + 0x10);
                  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  ChatWindow__Fonte__1805c7120(uVar7,0xb,0);
                  if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x0001805c3dbb;
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar6 + 0x10),0);
                  puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001805c3dbb;
                  lVar11 = *plVar8;
                  uVar7 = *puVar9;
                  uVar1 = *(undefined4 *)(puVar9 + 1);
                  if (*(ushort *)(lVar11 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 0x43) * 0x10 + 0x138 + lVar11
                                 );
                        goto code_r0x0001805c38d9;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805c38d9:
                  uStack_d8 = uVar7;
                  uStack_d0 = uVar1;
                  (*(code *)*puVar9)(plVar8,&uStack_d8,puVar9[1]);
                  if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x0001805c3dbb;
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar6 + 0x10),0);
                  puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001805c3dbb;
                  lVar11 = *plVar8;
                  uVar7 = *puVar9;
                  uVar1 = *(undefined4 *)(puVar9 + 1);
                  if (*(ushort *)(lVar11 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 0x61) * 0x10 + 0x138 + lVar11
                                 );
                        goto code_r0x0001805c3979;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805c3979:
                  uStack_c8 = uVar7;
                  uStack_c0 = uVar1;
                  (*(code *)*puVar9)(plVar8,&uStack_c8,puVar9[1]);
                  if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x0001805c3dbb;
                  plVar8 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar6 + 0x10),0);
                  uVar7 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001805c3dbb;
                  lVar11 = *plVar8;
                  if (*(ushort *)(lVar11 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 0x9d) * 0x10 + 0x138 + lVar11
                                 );
                        goto code_r0x0001805c3a19;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x9d);
code_r0x0001805c3a19:
                  (*(code *)*puVar9)(plVar8,uVar7,puVar9[1]);
                  if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x0001805c3dbb;
                  lVar11 = UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(lVar6 + 0x10),0);
                  if (*(int *)(lVar6 + 0x18) == iVar3) {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    uStack_b8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
                    uStack_b0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
                  }
                  else {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    uStack_b8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x40);
                    uStack_b0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x48);
                  }
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleColor__op_Implicit(auStack_78,&uStack_b8,0);
                  if (lVar11 == 0) goto code_r0x0001805c3dbb;
                  uStack_b8 = *puVar9;
                  uStack_b0 = puVar9[1];
                  uStack_a8 = *(undefined4 *)(puVar9 + 2);
                  FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_b8);
                  lVar11 = *(longlong *)(lVar6 + 0x10);
                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                  FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__1,0);
                  if (lVar11 == 0) goto code_r0x0001805c3dbb;
                  FUN_180990d50(lVar11,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                  lVar11 = *(longlong *)(lVar6 + 0x10);
                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                  FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__2,0);
                  if (lVar11 == 0) goto code_r0x0001805c3dbb;
                  FUN_180990d50(lVar11,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                  lVar11 = *(longlong *)(lVar6 + 0x10);
                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                  FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__3,0);
                  if (lVar11 == 0) goto code_r0x0001805c3dbb;
                  FUN_180990d50(lVar11,uVar7);
                  UnityEngine_UIElements_VisualElement__Add(lVar5);
                  uVar14 = (ulonglong)(uVar15 + 1);
                }
                if (*(longlong *)(param_1 + 0xb8) != 0) {
                  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar5,0);
                  *(longlong *)(param_1 + 0xe0) = lVar5;
                  func_0x000180314690(param_1 + 0xe0,lVar5);
                  if (*(longlong *)(param_1 + 0xb8) != 0) {
                    lVar5 = func_0x0001825d76c0(*(longlong *)(param_1 + 0xb8),0);
                    if (lVar5 != 0) {
                      lVar5 = FUN_1800020c0(0,TI_UnityEngine.UIElements.IPanel,lVar5);
                      if (lVar5 != 0) {
                        uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
                        FUN_18055b980(uVar7,lVar4,MD_ChatWindow.__c__DisplayClass56_0._AbreMenuDaAba_b__0,0);
                        *(undefined8 *)(param_1 + 0xe8) = uVar7;
                        func_0x000180314690(param_1 + 0xe8,uVar7);
                        FUN_180990d50(lVar5,*(undefined8 *)(param_1 + 0xe8),1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
                      }
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
code_r0x0001805c3dbb:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

