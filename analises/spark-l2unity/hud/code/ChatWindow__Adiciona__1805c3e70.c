// ChatWindow__Adiciona__1805c3e70 @ 0x1805c3e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__Adiciona__1805c3e70(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b3ac9 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent>);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__0);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__1);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__2);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass67_0);
    FUN_180315380(LIT_"'<link=\"'");
    cRam00000001834b3ac9 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass67_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  cVar3 = ChatWindow__Segue__1805ce320(param_1,param_2,0);
  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
  UnityEngine_UIElements_Label___ctor(uVar7,param_3,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    func_0x000180314690(lVar6 + 0x10,uVar7);
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      UnityEngine_UIElements_TextElement__set_enableRichText(*(longlong *)(lVar6 + 0x10),1,0);
      if (*(longlong *)(lVar6 + 0x10) != 0) {
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x10),0);
        uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
        if (lVar8 != 0) {
          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
          if (*(longlong *)(lVar6 + 0x10) != 0) {
            plVar9 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x10),0);
            if (*(longlong *)(lVar6 + 0x10) != 0) {
              plVar10 = (longlong *)
                        UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lVar6 + 0x10),0);
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0,0);
              if (plVar10 != (longlong *)0x0) {
                lVar8 = *plVar10;
                uVar7 = *puVar11;
                uVar1 = *(undefined4 *)(puVar11 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar11 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                          (ulonglong)uVar12 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar8);
                      goto code_r0x0001805c40da;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805c40da:
                uStack_58 = uVar7;
                uStack_50 = uVar1;
                (*(code *)*puVar11)(plVar10,&uStack_58,puVar11[1]);
                if (plVar9 != (longlong *)0x0) {
                  lVar8 = *plVar9;
                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar11 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                            (ulonglong)uVar12 * 0x10) + 0x51) * 0x10 + 0x138 + lVar8
                                  );
                        goto code_r0x0001805c4149;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                  }
                  puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805c4149:
                  uStack_58 = uVar7;
                  uStack_50 = uVar1;
                  (*(code *)*puVar11)(plVar9,&uStack_58,puVar11[1]);
                  if (*(longlong *)(lVar6 + 0x10) != 0) {
                    plVar9 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(lVar6 + 0x10),0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0,0);
                    if (plVar9 != (longlong *)0x0) {
                      lVar8 = *plVar9;
                      uVar7 = *puVar11;
                      uVar1 = *(undefined4 *)(puVar11 + 1);
                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                        uVar12 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar11 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                (ulonglong)uVar12 * 0x10) + 0x65) * 0x10 + 0x138 +
                                      lVar8);
                            goto code_r0x0001805c41e9;
                          }
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                      }
                      puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x65);
code_r0x0001805c41e9:
                      uStack_58 = uVar7;
                      uStack_50 = uVar1;
                      (*(code *)*puVar11)(plVar9,&uStack_58,puVar11[1]);
                      if (*(longlong *)(lVar6 + 0x10) != 0) {
                        plVar9 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(lVar6 + 0x10),0);
                        puVar11 = (undefined8 *)
                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                            (&uStack_58,0x40000000,0);
                        if (plVar9 != (longlong *)0x0) {
                          lVar8 = *plVar9;
                          uVar7 = *puVar11;
                          uVar1 = *(undefined4 *)(puVar11 + 1);
                          if (*(ushort *)(lVar8 + 0x12e) != 0) {
                            uVar12 = 0;
                            do {
                              if (*(longlong *)
                                   (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar11 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                    (ulonglong)uVar12 * 0x10) + 0x5f) * 0x10 + 0x138
                                          + lVar8);
                                goto code_r0x0001805c4289;
                              }
                              uVar12 = uVar12 + 1;
                            } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                          }
                          puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x5f);
code_r0x0001805c4289:
                          uStack_58 = uVar7;
                          uStack_50 = uVar1;
                          (*(code *)*puVar11)(plVar9,&uStack_58,puVar11[1]);
                          if (*(longlong *)(lVar6 + 0x10) != 0) {
                            plVar9 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(lVar6 + 0x10),0);
                            puVar11 = (undefined8 *)
                                      UnityEngine_UIElements_StyleLength__op_Implicit
                                                (&uStack_58,0x40800000,0);
                            if (plVar9 != (longlong *)0x0) {
                              lVar8 = *plVar9;
                              uVar7 = *puVar11;
                              uVar1 = *(undefined4 *)(puVar11 + 1);
                              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                uVar12 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar11 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                        (ulonglong)uVar12 * 0x10) + 0x61) * 0x10 +
                                               0x138 + lVar8);
                                    goto code_r0x0001805c4329;
                                  }
                                  uVar12 = uVar12 + 1;
                                } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
                              }
                              puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805c4329:
                              uStack_58 = uVar7;
                              uStack_50 = uVar1;
                              (*(code *)*puVar11)(plVar9,&uStack_58,puVar11[1]);
                              uVar7 = *(undefined8 *)(lVar6 + 0x10);
                              iVar5 = *(int *)(param_1 + 0x114);
                              if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              ChatWindow__Fonte__1805c7120(uVar7,iVar5 + 0xb,0);
                              if (*(longlong *)(lVar6 + 0x10) != 0) {
                                UnityEngine_UIElements_VisualElement__set_pickingMode
                                          (*(longlong *)(lVar6 + 0x10),1,0);
                                if (param_3 != 0) {
                                  cVar4 = System_String__Contains(param_3,LIT_"'<link=\"'",0);
                                  if (cVar4 != '\0') {
                                    if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x0001805c4621;
                                    UnityEngine_UIElements_VisualElement__set_pickingMode
                                              (*(longlong *)(lVar6 + 0x10),0,0);
                                    lVar8 = *(longlong *)(lVar6 + 0x10);
                                    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent>);
                                    FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__0,0);
                                    if (lVar8 == 0) goto code_r0x0001805c4621;
                                    FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent>);
                                    lVar8 = *(longlong *)(lVar6 + 0x10);
                                    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent>);
                                    FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__1,0);
                                    if (lVar8 == 0) goto code_r0x0001805c4621;
                                    FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent>);
                                    lVar8 = *(longlong *)(lVar6 + 0x10);
                                    uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                    FUN_18055b980(uVar7,lVar6,MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__2,0);
                                    if (lVar8 == 0) goto code_r0x0001805c4621;
                                    FUN_180990d50(lVar8,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>);
                                  }
                                  if (param_2 != (longlong *)0x0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (param_2,*(undefined8 *)(lVar6 + 0x10),0);
                                    while( true ) {
                                      lVar6 = (**(code **)(*param_2 + 0x9d8))
                                                        (param_2,*(undefined8 *)(*param_2 + 0x9e0));
                                      if (lVar6 == 0) break;
                                      iVar5 = UnityEngine_UIElements_VisualElement__get_childCount
                                                        (lVar6,0);
                                      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      if (iVar5 <= *(int *)(*(longlong *)(TI_ChatWindow + 0xb8) + 4
                                                           )) {
                                        if (cVar3 != '\0') {
                                          ChatWindow__RolaParaBaixo__1805ce1f0(param_1,param_2,0,0);
                                        }
                                        return;
                                      }
                                      lVar6 = (**(code **)(*param_2 + 0x9d8))
                                                        (param_2,*(undefined8 *)(*param_2 + 0x9e0));
                                      if (lVar6 == 0) break;
                                      UnityEngine_UIElements_VisualElement__RemoveAt(lVar6,0);
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
code_r0x0001805c4621:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

