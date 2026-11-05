// SparkGmWindow__MontaQuest__18060fbd0 @ 0x18060fbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__MontaQuest__18060fbd0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulonglong uVar10;
  undefined8 uStackX_8;
  undefined8 uStackX_20;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uVar9;
  
  if (cRam00000001834b3c31 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkGmWindow.MostraQuests);
    FUN_180315380(MD_SparkGmWindow._MontaQuest_b__68_0);
    FUN_180315380(MD_SparkGmWindow._MontaQuest_b__68_1);
    FUN_180315380(MD_SparkGmWindow._MontaQuest_b__68_2);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(LIT_"'Only quests the player has'");
    FUN_180315380(LIT_"'Load player reads the quests of the name at the top. Pic...");
    FUN_180315380(LIT_"'Load player'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Search'");
    cRam00000001834b3c31 = '\x01';
  }
  uVar10 = 0;
  uStackX_20 = 0;
  uStackX_8 = 0;
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkGmWindow__Linha(0);
  uVar4 = SparkGmWindow__Campo(0x28,0x96,1,0);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  func_0x000180314690(param_1 + 0x148,uVar4);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
    uVar4 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar4,param_1,MD_SparkGmWindow.MostraQuests,0);
    uVar4 = SparkGmWindow__Botao__180603b90(LIT_"'Search'",uVar4,0x46,0);
    UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
    uVar4 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar4,param_1,MD_SparkGmWindow._MontaQuest_b__68_0,0);
    uVar4 = SparkGmWindow__Botao__180603b90(LIT_"'Load player'",uVar4,0x5a,0);
    UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
    if (param_2 != 0) {
      UnityEngine_UIElements_VisualElement__Add(param_2,lVar3,0);
      lVar3 = *(longlong *)(param_1 + 0x148);
      uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent>);
      FUN_18055b980(uVar4,param_1,MD_SparkGmWindow._MontaQuest_b__68_1,0);
      if (lVar3 != 0) {
        FUN_180990d50(lVar3,uVar4,1,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent>);
        uVar4 = func_0x000180315580(TI_System.Action<bool>);
        FUN_180b7dfa0(uVar4,param_1,MD_SparkGmWindow._MontaQuest_b__68_2,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar3 = SparkEstilo__Marcador__180721460
                          (LIT_"'Only quests the player has'",uVar4,&uStackX_20,&uStackX_8,0);
        if (lVar3 != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
          uVar4 = func_0x000182601c10(0,0);
          if (lVar5 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
            plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x40800000,0);
            if (plVar6 != (longlong *)0x0) {
              lVar5 = *plVar6;
              uVar4 = *puVar7;
              uVar1 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                uVar9 = uVar10;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar9 * 0x10) + 0x4b) *
                              0x10 + 0x138 + lVar5);
                    goto code_r0x00018060ff69;
                  }
                  uVar8 = (short)uVar9 + 1;
                  uVar9 = (ulonglong)uVar8;
                } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018060ff69:
              uStack_78 = uVar4;
              uStack_70 = uVar1;
              (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
              UnityEngine_UIElements_VisualElement__Add(param_2,lVar3,0);
              uVar4 = SparkGmWindow__Dica(LIT_"'Load player reads the quests of the name at the top. Pic...",0);
              UnityEngine_UIElements_VisualElement__Add(param_2,uVar4,0);
              lVar3 = *(longlong *)(TI_SparkEstilo + 0xb8);
              uStack_78 = *(undefined8 *)(lVar3 + 0x50);
              uStack_70 = *(undefined4 *)(lVar3 + 0x58);
              uStack_6c = *(undefined4 *)(lVar3 + 0x5c);
              uStack_48 = 0;
              uStack_58 = 0;
              uStack_50 = 0;
              func_0x000180cb7cb0(&uStack_58,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_78 = uStack_58;
              uStack_70 = (undefined4)uStack_50;
              uStack_6c = uStack_50._4_4_;
              uStack_68 = uStack_48;
              uVar4 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_78,1,0);
              *(undefined8 *)(param_1 + 0x158) = uVar4;
              func_0x000180314690(param_1 + 0x158,uVar4);
              if (*(longlong *)(param_1 + 0x158) != 0) {
                lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0x158),0);
                uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                if (lVar3 != 0) {
                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
                  if (*(longlong *)(param_1 + 0x158) != 0) {
                    lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0x158),0);
                    uVar4 = func_0x000182601c10(0,0);
                    if (lVar3 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
                      if (*(longlong *)(param_1 + 0x158) != 0) {
                        plVar6 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 0x158),0);
                        puVar7 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_78,0x40000000,0);
                        if (plVar6 != (longlong *)0x0) {
                          lVar3 = *plVar6;
                          uVar4 = *puVar7;
                          uVar1 = *(undefined4 *)(puVar7 + 1);
                          if (*(ushort *)(lVar3 + 0x12e) != 0) {
                            uVar9 = uVar10;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar9 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar7 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + uVar9 * 0x10)
                                          + 0x51) * 0x10 + 0x138 + lVar3);
                                goto code_r0x000180610149;
                              }
                              uVar8 = (short)uVar9 + 1;
                              uVar9 = (ulonglong)uVar8;
                            } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                          }
                          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180610149:
                          uStack_78 = uVar4;
                          uStack_70 = uVar1;
                          (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
                          if (*(longlong *)(param_1 + 0x158) != 0) {
                            plVar6 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0x158),0);
                            puVar7 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_78,0x40800000,0);
                            if (plVar6 != (longlong *)0x0) {
                              lVar3 = *plVar6;
                              uVar4 = *puVar7;
                              uVar1 = *(undefined4 *)(puVar7 + 1);
                              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                uVar9 = uVar10;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar9 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar7 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                       uVar9 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar3)
                                    ;
                                    goto code_r0x0001806101e9;
                                  }
                                  uVar8 = (short)uVar9 + 1;
                                  uVar9 = (ulonglong)uVar8;
                                } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                              }
                              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001806101e9:
                              uStack_78 = uVar4;
                              uStack_70 = uVar1;
                              (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
                              UnityEngine_UIElements_VisualElement__Add
                                        (param_2,*(undefined8 *)(param_1 + 0x158),0);
                              uVar4 = SparkEstilo__Lista__1807211b0(0);
                              *(undefined8 *)(param_1 + 0x150) = uVar4;
                              func_0x000180314690(param_1 + 0x150,uVar4);
                              if (*(longlong *)(param_1 + 0x150) != 0) {
                                plVar6 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(param_1 + 0x150),0);
                                puVar7 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit
                                                   (&uStack_78,0,0);
                                if (plVar6 != (longlong *)0x0) {
                                  lVar3 = *plVar6;
                                  uVar4 = *puVar7;
                                  uVar1 = *(undefined4 *)(puVar7 + 1);
                                  if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                    uVar9 = uVar10;
                                    do {
                                      if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar9 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar7 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                           uVar9 * 0x10) + 0x57) * 0x10 + 0x138 +
                                                 lVar3);
                                        goto code_r0x0001806102b9;
                                      }
                                      uVar8 = (short)uVar9 + 1;
                                      uVar9 = (ulonglong)uVar8;
                                    } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                                  }
                                  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001806102b9:
                                  uStack_78 = uVar4;
                                  uStack_70 = uVar1;
                                  (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
                                  if (*(longlong *)(param_1 + 0x150) != 0) {
                                    plVar6 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (*(longlong *)(param_1 + 0x150),0);
                                    puVar7 = (undefined8 *)
                                             UnityEngine_UIElements_StyleLength__op_Implicit
                                                       (&uStack_78,0,0);
                                    if (plVar6 != (longlong *)0x0) {
                                      lVar3 = *plVar6;
                                      uVar4 = *puVar7;
                                      uVar1 = *(undefined4 *)(puVar7 + 1);
                                      if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                        uVar9 = uVar10;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar3 + 0xb0) + uVar9 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar7 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 +
                                                               uVar9 * 0x10) + 0x37) * 0x10 + 0x138
                                                     + lVar3);
                                            goto code_r0x000180610359;
                                          }
                                          uVar8 = (short)uVar9 + 1;
                                          uVar9 = (ulonglong)uVar8;
                                        } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                                      }
                                      puVar7 = (undefined8 *)
                                               FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x37);
code_r0x000180610359:
                                      uStack_78 = uVar4;
                                      uStack_70 = uVar1;
                                      (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
                                      plVar6 = *(longlong **)(param_1 + 0x150);
                                      if (plVar6 != (longlong *)0x0) {
                                        lVar3 = (**(code **)(*plVar6 + 0x9d8))
                                                          (plVar6,*(undefined8 *)(*plVar6 + 0x9e0));
                                        if (lVar3 != 0) {
                                          plVar6 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar3,0);
                                          puVar7 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_78,0x40800000,0);
                                          if (plVar6 != (longlong *)0x0) {
                                            lVar3 = *plVar6;
                                            uVar4 = *puVar7;
                                            uVar1 = *(undefined4 *)(puVar7 + 1);
                                            if (*(ushort *)(lVar3 + 0x12e) != 0) {
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar3 + 0xb0) + uVar10 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar7 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar3 + 0xb0) +
                                                                      8 + uVar10 * 0x10) + 99) *
                                                            0x10 + 0x138 + lVar3);
                                                  goto code_r0x000180610419;
                                                }
                                                uVar8 = (short)uVar10 + 1;
                                                uVar10 = (ulonglong)uVar8;
                                              } while (uVar8 < *(ushort *)(lVar3 + 0x12e));
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,99);
code_r0x000180610419:
                                            uStack_78 = uVar4;
                                            uStack_70 = uVar1;
                                            (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
                                            UnityEngine_UIElements_VisualElement__Add
                                                      (param_2,*(undefined8 *)(param_1 + 0x150),0);
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

