// SparkGmWindow__MontaBusca__18060c250 @ 0x18060c250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MontaBusca__18060c250(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3c2d == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkGmWindow.Busca);
    FUN_180315380(MD_SparkGmWindow._MontaBusca_b__57_0);
    FUN_180315380(MD_SparkGmWindow._MontaBusca_b__57_1);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'Items'");
    FUN_180315380(LIT_"'Amount'");
    FUN_180315380(LIT_"'NPCs'");
    FUN_180315380(LIT_"'Skills'");
    FUN_180315380(LIT_"'Skill lv'");
    FUN_180315380(LIT_"'Click a result: items (with the amount) and skills go to...");
    FUN_180315380(LIT_"'1'");
    FUN_180315380(LIT_"'Search'");
    cRam00000001834b3c2d = '\x01';
  }
  lVar4 = func_0x000180314710(TI_string__,3);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = LIT_"'Items'";
      func_0x000180314690(lVar4 + 0x20);
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = LIT_"'NPCs'";
        func_0x000180314690(lVar4 + 0x28);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = LIT_"'Skills'";
          func_0x000180314690(lVar4 + 0x30);
          uVar5 = func_0x000180315580(TI_System.Action<int>);
          FUN_180b7db20(uVar5,param_1,MD_SparkGmWindow._MontaBusca_b__57_0,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar5 = SparkEstilo__Abas__18071cbe0(param_2,lVar4,uVar5,0);
          *(undefined8 *)(param_1 + 0x140) = uVar5;
          func_0x000180314690(param_1 + 0x140,uVar5);
          if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar4 = SparkGmWindow__Linha(0);
          if (lVar4 != 0) {
            plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x40c00000,0);
            if (plVar6 != (longlong *)0x0) {
              lVar2 = *plVar6;
              uVar5 = *puVar7;
              uVar1 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar8 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                              0x51) * 0x10 + 0x138 + lVar2);
                    goto code_r0x00018060c4e9;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018060c4e9:
              uStack_28 = uVar5;
              uStack_20 = uVar1;
              (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
              uVar5 = SparkGmWindow__Campo(0x28,200,1,0);
              *(undefined8 *)(param_1 + 0xd8) = uVar5;
              func_0x000180314690(param_1 + 0xd8,uVar5);
              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
              uVar5 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar5,param_1,MD_SparkGmWindow.Busca,0);
              uVar5 = SparkGmWindow__Botao__180603b90(LIT_"'Search'",uVar5,0x50,0);
              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
              if (param_2 != 0) {
                UnityEngine_UIElements_VisualElement__Add(param_2,lVar4,0);
                lVar4 = *(longlong *)(param_1 + 0xd8);
                uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
                FUN_18055b980(uVar5,param_1,MD_SparkGmWindow._MontaBusca_b__57_1,0);
                if (lVar4 != 0) {
                  FUN_180990d50(lVar4,uVar5,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
                  lVar4 = SparkGmWindow__Linha(0);
                  uVar5 = SparkGmWindow__Rotulo(LIT_"'Amount'",0x32,0);
                  if (lVar4 != 0) {
                    UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                    uVar5 = SparkGmWindow__Campo(10,0x50,0,0);
                    *(undefined8 *)(param_1 + 0xe0) = uVar5;
                    func_0x000180314690(param_1 + 0xe0,uVar5);
                    UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                    plVar6 = *(longlong **)(param_1 + 0xe0);
                    if (plVar6 != (longlong *)0x0) {
                      (**(code **)(*plVar6 + 0xa88))
                                (plVar6,LIT_"'1'",*(undefined8 *)(*plVar6 + 0xa90));
                      uVar5 = SparkGmWindow__Rotulo(LIT_"'Skill lv'",0x32,0);
                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                      uVar5 = SparkGmWindow__Campo(3,0x28,0,0);
                      *(undefined8 *)(param_1 + 0xe8) = uVar5;
                      func_0x000180314690(param_1 + 0xe8,uVar5);
                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                      plVar6 = *(longlong **)(param_1 + 0xe8);
                      if (plVar6 != (longlong *)0x0) {
                        (**(code **)(*plVar6 + 0xa88))
                                  (plVar6,LIT_"'1'",*(undefined8 *)(*plVar6 + 0xa90));
                        UnityEngine_UIElements_VisualElement__Add(param_2,lVar4,0);
                        uVar5 = SparkGmWindow__Dica(LIT_"'Click a result: items (with the amount) and skills go to...",0);
                        UnityEngine_UIElements_VisualElement__Add(param_2,uVar5,0);
                        uVar5 = SparkEstilo__Lista__1807211b0(0);
                        *(undefined8 *)(param_1 + 0x130) = uVar5;
                        func_0x000180314690(param_1 + 0x130,uVar5);
                        if (*(longlong *)(param_1 + 0x130) != 0) {
                          plVar6 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style
                                             (*(longlong *)(param_1 + 0x130),0);
                          puVar7 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0,0);
                          if (plVar6 != (longlong *)0x0) {
                            lVar4 = *plVar6;
                            uVar5 = *puVar7;
                            uVar1 = *(undefined4 *)(puVar7 + 1);
                            if (*(ushort *)(lVar4 + 0x12e) != 0) {
                              uVar8 = 0;
                              do {
                                if (*(longlong *)
                                     (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar7 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                     (ulonglong)uVar8 * 0x10) + 0x57) * 0x10 + 0x138
                                           + lVar4);
                                  goto code_r0x00018060c7d9;
                                }
                                uVar8 = uVar8 + 1;
                              } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                            }
                            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018060c7d9:
                            uStack_28 = uVar5;
                            uStack_20 = uVar1;
                            (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                            if (*(longlong *)(param_1 + 0x130) != 0) {
                              plVar6 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style
                                                 (*(longlong *)(param_1 + 0x130),0);
                              puVar7 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_28,0,0);
                              if (plVar6 != (longlong *)0x0) {
                                lVar4 = *plVar6;
                                uVar5 = *puVar7;
                                uVar1 = *(undefined4 *)(puVar7 + 1);
                                if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                  uVar8 = 0;
                                  do {
                                    if (*(longlong *)
                                         (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                                        TI_UnityEngine.UIElements.IStyle) {
                                      puVar7 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                         (ulonglong)uVar8 * 0x10) + 0x37) * 0x10 +
                                                0x138 + lVar4);
                                      goto code_r0x00018060c879;
                                    }
                                    uVar8 = uVar8 + 1;
                                  } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                }
                                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x00018060c879:
                                uStack_28 = uVar5;
                                uStack_20 = uVar1;
                                (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                                if (*(longlong *)(param_1 + 0x130) != 0) {
                                  plVar6 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0x130),0);
                                  puVar7 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_28,0x40800000,0);
                                  if (plVar6 != (longlong *)0x0) {
                                    lVar4 = *plVar6;
                                    uVar5 = *puVar7;
                                    uVar1 = *(undefined4 *)(puVar7 + 1);
                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                      uVar8 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10)
                                            == TI_UnityEngine.UIElements.IStyle) {
                                          puVar7 = (undefined8 *)
                                                   ((longlong)
                                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                             (ulonglong)uVar8 * 0x10) + 0x51) * 0x10
                                                    + 0x138 + lVar4);
                                          goto code_r0x00018060c929;
                                        }
                                        uVar8 = uVar8 + 1;
                                      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
                                    }
                                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51)
                                    ;
code_r0x00018060c929:
                                    uStack_28 = uVar5;
                                    uStack_20 = uVar1;
                                    (*(code *)*puVar7)(plVar6,&uStack_28,puVar7[1]);
                                    UnityEngine_UIElements_VisualElement__Add
                                              (param_2,*(undefined8 *)(param_1 + 0x130),0);
                                    lVar4 = *(longlong *)(param_1 + 0x140);
                                    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018060c986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                      (**(code **)(lVar4 + 0x18))
                                                (*(undefined8 *)(lVar4 + 0x40),0,
                                                 *(undefined8 *)(lVar4 + 0x28));
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
          goto code_r0x00018060ca12;
        }
      }
    }
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_r0x00018060ca12:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

