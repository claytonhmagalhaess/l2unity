// OptionsWindow__Chat__180690930 @ 0x180690930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OptionsWindow__Chat__180690930(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  longlong lStackX_18;
  longlong lStackX_20;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong uVar12;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  longlong alStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b3e88 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_System.Func<string,System.Func<bool>,System.Action<bool>,UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_OptionsWindow._Chat_b__43_4);
    FUN_180315380(MD_OptionsWindow._Chat_b__43_5);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c._Chat_b__43_0);
    FUN_180315380(MD_OptionsWindow.__c._Chat_b__43_1);
    FUN_180315380(MD_OptionsWindow.__c._Chat_b__43_2);
    FUN_180315380(MD_OptionsWindow.__c._Chat_b__43_3);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'Channels by tab'");
    FUN_180315380(LIT_"'Chat input'");
    FUN_180315380(LIT_"'Enter chat on: press Enter to type and single keys are s...");
    FUN_180315380(LIT_"'The window above the chat with damage, items, XP/SP and ...");
    FUN_180315380(LIT_"'Enter chat'");
    FUN_180315380(LIT_"'Default Settings'");
    FUN_180315380(LIT_"'Right-click a chat tab to change it (General, Trade, Par...");
    FUN_180315380(LIT_"'System messages'");
    FUN_180315380(LIT_"'Show system message window'");
    FUN_180315380(LIT_"'Chat Tab Filters'");
    cRam00000001834b3e88 = '\x01';
  }
  lStackX_18 = 0;
  lStackX_20 = 0;
  alStack_98[0] = 0;
  uStack_68 = 0;
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = OptionsWindow__Rolagem__1806998f0(&lStackX_18,0);
  lVar7 = lStackX_18;
  uVar4 = OptionsWindow__Secao__180699d10(LIT_"'Default Settings'",0);
  if (lVar7 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0);
    uVar4 = OptionsWindow__Grupo__180694480(LIT_"'Chat input'",&lStackX_20,0);
    if (lStackX_18 != 0) {
      UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
      lVar7 = lStackX_20;
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = LIT_"'Enter chat'";
      lVar5 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x398);
      if (lVar5 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar5 = func_0x000180315580(TI_System.Func<bool>);
        FUN_1814af410(lVar5,uVar10,MD_OptionsWindow.__c._Chat_b__43_0,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x398) = lVar5;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x398,lVar5);
      }
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar6 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a0);
      if (lVar6 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar10 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar6 = func_0x000180315580(TI_System.Action<bool>);
        FUN_180b7dfa0(lVar6,uVar10,MD_OptionsWindow.__c._Chat_b__43_1,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a0) = lVar6;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a0,lVar6);
      }
      if (param_1 != 0) {
        uVar4 = OptionsWindow__Marca__180697090
                          (param_1,uVar4,lVar5,lVar6,in_stack_ffffffffffffff28 & 0xffffffff00000000,
                           0);
        if (lVar7 != 0) {
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_c8 = *(undefined8 *)(lVar7 + 0x50);
          uStack_c0 = *(undefined4 *)(lVar7 + 0x58);
          uStack_bc = *(undefined4 *)(lVar7 + 0x5c);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          func_0x000180cb7cb0(&uStack_b8,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_88 = uStack_b8;
          uStack_80 = uStack_b0;
          uStack_78 = uStack_a8;
          uVar12 = 0;
          lVar7 = SparkEstilo__Texto(LIT_"'Enter chat on: press Enter to type and single keys are s...",9,&uStack_88,0,0);
          if (lVar7 != 0) {
            lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
            uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
            if (lVar5 != 0) {
              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
              plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_c8,0x41b00000,0);
              if (plVar8 != (longlong *)0x0) {
                lVar5 = *plVar8;
                uVar4 = *puVar9;
                uVar1 = *(undefined4 *)(puVar9 + 1);
                if (*(ushort *)(lVar5 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar9 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10
                                         ) + 0x4d) * 0x10 + 0x138 + lVar5);
                      goto code_r0x000180690e19;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                }
                puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180690e19:
                uStack_c8 = uVar4;
                uStack_c0 = uVar1;
                (*(code *)*puVar9)(plVar8,&uStack_c8,puVar9[1]);
                if (lStackX_20 != 0) {
                  UnityEngine_UIElements_VisualElement__Add(lStackX_20,lVar7,0);
                  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar4 = OptionsWindow__Grupo__180694480(LIT_"'System messages'",alStack_98,0);
                  if (lStackX_18 != 0) {
                    UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
                    lVar7 = alStack_98[0];
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar4 = LIT_"'Show system message window'";
                    lVar5 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a8);
                    if (lVar5 == 0) {
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar10 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                      lVar5 = func_0x000180315580(TI_System.Func<bool>);
                      FUN_1814af410(lVar5,uVar10,MD_OptionsWindow.__c._Chat_b__43_2,0);
                      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a8) = lVar5;
                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3a8,lVar5);
                    }
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar6 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3b0);
                    if (lVar6 == 0) {
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar10 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                      lVar6 = func_0x000180315580(TI_System.Action<bool>);
                      FUN_180b7dfa0(lVar6,uVar10,MD_OptionsWindow.__c._Chat_b__43_3,0);
                      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3b0) = lVar6;
                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3b0,lVar6);
                    }
                    uVar4 = OptionsWindow__Marca__180697090
                                      (param_1,uVar4,lVar5,lVar6,uVar12 & 0xffffffff00000000,0);
                    if (lVar7 != 0) {
                      UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uStack_c8 = *(undefined8 *)(lVar7 + 0x50);
                      uStack_c0 = *(undefined4 *)(lVar7 + 0x58);
                      uStack_bc = *(undefined4 *)(lVar7 + 0x5c);
                      uStack_60 = 0;
                      uStack_58 = 0;
                      uStack_50 = 0;
                      func_0x000180cb7cb0(&uStack_60,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uVar12 = 0;
                      uStack_b8 = uStack_60;
                      uStack_b0 = uStack_58;
                      uStack_a8 = uStack_50;
                      lVar7 = SparkEstilo__Texto(LIT_"'The window above the chat with damage, items, XP/SP and ...",9,&uStack_b8,0,0);
                      if (lVar7 != 0) {
                        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                        if (lVar5 != 0) {
                          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                          plVar8 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          puVar9 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_c8,0x41b00000,0);
                          if (plVar8 != (longlong *)0x0) {
                            lVar5 = *plVar8;
                            uVar4 = *puVar9;
                            uVar1 = *(undefined4 *)(puVar9 + 1);
                            if (*(ushort *)(lVar5 + 0x12e) != 0) {
                              do {
                                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar12 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                                     uVar12 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar5);
                                  goto code_r0x000180691159;
                                }
                                uVar11 = (short)uVar12 + 1;
                                uVar12 = (ulonglong)uVar11;
                              } while (uVar11 < *(ushort *)(lVar5 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180691159:
                            uStack_c8 = uVar4;
                            uStack_c0 = uVar1;
                            (*(code *)*puVar9)(plVar8,&uStack_c8,puVar9[1]);
                            if (alStack_98[0] != 0) {
                              UnityEngine_UIElements_VisualElement__Add(alStack_98[0],lVar7,0);
                              lVar7 = lStackX_18;
                              if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar4 = OptionsWindow__Secao__180699d10(LIT_"'Chat Tab Filters'",0);
                              if (lVar7 != 0) {
                                UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0);
                                lVar7 = *(longlong *)(TI_OptionsWindow + 0xb8);
                                uStack_c8 = *(undefined8 *)(lVar7 + 0x28);
                                uStack_c0 = *(undefined4 *)(lVar7 + 0x30);
                                uStack_bc = *(undefined4 *)(lVar7 + 0x34);
                                uStack_78 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                func_0x000180cb7cb0(&uStack_88,&uStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                                uStack_b8 = uStack_88;
                                uStack_b0 = uStack_80;
                                uStack_a8 = uStack_78;
                                lVar7 = SparkEstilo__Texto(LIT_"'Right-click a chat tab to change it (General, Trade, Par...",10,&uStack_b8,0,0);
                                if (lVar7 != 0) {
                                  lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                                  uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                  if (lVar5 != 0) {
                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0)
                                    ;
                                    uVar4 = func_0x000182601c10(0,0);
                                    if (lVar5 != 0) {
                                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
                                      if (lStackX_18 != 0) {
                                        UnityEngine_UIElements_VisualElement__Add
                                                  (lStackX_18,lVar7,0);
                                        uVar4 = OptionsWindow__Grupo__180694480
                                                          (LIT_"'Channels by tab'",&uStack_68,0);
                                        if (lStackX_18 != 0) {
                                          UnityEngine_UIElements_VisualElement__Add
                                                    (lStackX_18,uVar4,0);
                                          uVar4 = uStack_68;
                                          uVar10 = func_0x000180315580(TI_System.Func<string,System.Func<bool>,System.Action<bool>,UnityEngine.UIElements.VisualElement>);
                                          FUN_1814b3ac0(uVar10,param_1,MD_OptionsWindow._Chat_b__43_4,0);
                                          if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          SparkChatFiltro__MontaFiltros(uVar4,uVar10,0);
                                          uVar4 = func_0x000180315580(TI_System.Action<int>);
                                          FUN_180b7db20(uVar4,param_1,MD_OptionsWindow._Chat_b__43_5,0);
                                          *(undefined8 *)(param_1 + 0xa0) = uVar4;
                                          func_0x000180314690(param_1 + 0xa0,uVar4);
                                          SparkChatFiltro__add_Mudou__1805d4e30
                                                    (*(undefined8 *)(param_1 + 0xa0),0);
                                          return uVar3;
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
                    uVar3 = (*pcVar2)();
                    return uVar3;
                  }
                }
              }
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

