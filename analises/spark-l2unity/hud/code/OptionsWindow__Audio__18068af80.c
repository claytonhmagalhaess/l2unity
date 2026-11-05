// OptionsWindow__Audio__18068af80 @ 0x18068af80

undefined8 OptionsWindow__Audio__18068af80(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lStackX_18;
  longlong lStackX_20;
  ulonglong in_stack_ffffffffffffff98;
  longlong lStack_48;
  undefined8 uStack_40;
  
  if (cRam00000001834b3e86 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action<float>);
    FUN_180315380(TI_System.Func<float>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_0);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_10);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_11);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_12);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_13);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_1);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_2);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_3);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_4);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_5);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_6);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_7);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_8);
    FUN_180315380(MD_OptionsWindow.__c._Audio_b__41_9);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'Mute All Sounds'");
    FUN_180315380(LIT_"'Advanced Settings'");
    FUN_180315380(LIT_"'Specific Volume Settings'");
    FUN_180315380(LIT_"'Max.'");
    FUN_180315380(LIT_"'SFX Vol.'");
    FUN_180315380(LIT_"'Mute when the game is in the background'");
    FUN_180315380(LIT_"'Global Volume Settings'");
    FUN_180315380(LIT_"'Default Settings'");
    FUN_180315380(LIT_"'Total Sound'");
    FUN_180315380(LIT_"'Environmental Sound'");
    FUN_180315380(LIT_"'Min.'");
    FUN_180315380(LIT_"'Music Vol.'");
    FUN_180315380(LIT_"'Interface Sound'");
    cRam00000001834b3e86 = '\x01';
  }
  lStackX_20 = 0;
  lStack_48 = 0;
  lStackX_18 = 0;
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = OptionsWindow__Rolagem__1806998f0(&lStackX_20,0);
  lVar4 = lStackX_20;
  uStack_40 = uVar5;
  uVar6 = OptionsWindow__Secao__180699d10(LIT_"'Default Settings'",0);
  if (lVar4 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar4,uVar6,0);
    uVar6 = OptionsWindow__Grupo__180694480(LIT_"'Global Volume Settings'",&lStack_48,0);
    if (lStackX_20 != 0) {
      UnityEngine_UIElements_VisualElement__Add(lStackX_20,uVar6,0);
      lVar4 = lStack_48;
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = LIT_"'Mute All Sounds'";
      lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2e8);
      if (lVar7 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar1 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar7 = func_0x000180315580(TI_System.Func<bool>);
        FUN_1814af410(lVar7,uVar1,MD_OptionsWindow.__c._Audio_b__41_0,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2e8) = lVar7;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2e8,lVar7);
        uStack_40 = uVar5;
      }
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f0);
      if (lVar8 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar8 = func_0x000180315580(TI_System.Action<bool>);
        FUN_180b7dfa0(lVar8,uVar5,MD_OptionsWindow.__c._Audio_b__41_1,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f0) = lVar8;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f0,lVar8);
      }
      if (param_1 != 0) {
        uVar5 = OptionsWindow__Marca__180697090
                          (param_1,uVar6,lVar7,lVar8,in_stack_ffffffffffffff98 & 0xffffffff00000000,
                           0);
        if (lVar4 != 0) {
          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
          lVar4 = lStack_48;
          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar1 = LIT_"'Total Sound'";
          uVar6 = LIT_"'Min.'";
          uVar5 = LIT_"'Max.'";
          lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f8);
          if (lVar7 == 0) {
            if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
            lVar7 = func_0x000180315580(TI_System.Func<float>);
            FUN_1814af380(lVar7,uVar2,MD_OptionsWindow.__c._Audio_b__41_2,0);
            *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f8) = lVar7;
            func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x2f8,lVar7);
          }
          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x300);
          if (lVar8 == 0) {
            if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
            lVar8 = func_0x000180315580(TI_System.Action<float>);
            FUN_180b7e1e0(lVar8,uVar2,MD_OptionsWindow.__c._Audio_b__41_3,0);
            *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x300) = lVar8;
            func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x300,lVar8);
          }
          uVar5 = OptionsWindow__BlocoBarra__18068d250(param_1,uVar1,uVar6,uVar5,lVar7,lVar8,4,0);
          if (lVar4 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
            lVar4 = lStackX_20;
            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar5 = OptionsWindow__Secao__180699d10(LIT_"'Advanced Settings'",0);
            if (lVar4 != 0) {
              UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
              uVar5 = OptionsWindow__Grupo__180694480(LIT_"'Specific Volume Settings'",&lStackX_18,0);
              if (lStackX_20 != 0) {
                UnityEngine_UIElements_VisualElement__Add(lStackX_20,uVar5,0);
                lVar4 = lStackX_18;
                if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar1 = LIT_"'Music Vol.'";
                uVar6 = LIT_"'Min.'";
                uVar5 = LIT_"'Max.'";
                lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x308);
                if (lVar7 == 0) {
                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                  lVar7 = func_0x000180315580(TI_System.Func<float>);
                  FUN_1814af380(lVar7,uVar2,MD_OptionsWindow.__c._Audio_b__41_4,0);
                  *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x308) = lVar7;
                  func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x308,lVar7);
                }
                if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x310);
                if (lVar8 == 0) {
                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                  lVar8 = func_0x000180315580(TI_System.Action<float>);
                  FUN_180b7e1e0(lVar8,uVar2,MD_OptionsWindow.__c._Audio_b__41_5,0);
                  *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x310) = lVar8;
                  func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x310,lVar8);
                }
                uVar5 = OptionsWindow__BlocoBarra__18068d250
                                  (param_1,uVar1,uVar6,uVar5,lVar7,lVar8,4,0);
                if (lVar4 != 0) {
                  UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                  lVar4 = lStackX_18;
                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar1 = LIT_"'SFX Vol.'";
                  uVar6 = LIT_"'Min.'";
                  uVar5 = LIT_"'Max.'";
                  lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x318);
                  if (lVar7 == 0) {
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                    lVar7 = func_0x000180315580(TI_System.Func<float>);
                    FUN_1814af380(lVar7,uVar2,MD_OptionsWindow.__c._Audio_b__41_6,0);
                    *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x318) = lVar7;
                    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x318,lVar7);
                  }
                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 800);
                  if (lVar8 == 0) {
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                    lVar8 = func_0x000180315580(TI_System.Action<float>);
                    FUN_180b7e1e0(lVar8,uVar2,MD_OptionsWindow.__c._Audio_b__41_7,0);
                    *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 800) = lVar8;
                    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 800,lVar8);
                  }
                  uVar5 = OptionsWindow__BlocoBarra__18068d250
                                    (param_1,uVar1,uVar6,uVar5,lVar7,lVar8,4,0);
                  if (lVar4 != 0) {
                    UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                    lVar4 = lStackX_18;
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar1 = LIT_"'Min.'";
                    uVar6 = LIT_"'Environmental Sound'";
                    uVar5 = LIT_"'Max.'";
                    lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x328);
                    if (lVar7 == 0) {
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                      lVar7 = func_0x000180315580(TI_System.Func<float>);
                      FUN_1814af380(lVar7,uVar2,MD_OptionsWindow.__c._Audio_b__41_8,0);
                      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x328) = lVar7;
                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x328,lVar7);
                    }
                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x330);
                    if (lVar8 == 0) {
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                      lVar8 = func_0x000180315580(TI_System.Action<float>);
                      FUN_180b7e1e0(lVar8,uVar2,MD_OptionsWindow.__c._Audio_b__41_9,0);
                      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x330) = lVar8;
                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x330,lVar8);
                    }
                    uVar5 = OptionsWindow__BlocoBarra__18068d250
                                      (param_1,uVar6,uVar1,uVar5,lVar7,lVar8,4,0);
                    if (lVar4 != 0) {
                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                      lVar4 = lStackX_18;
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar1 = LIT_"'Interface Sound'";
                      uVar6 = LIT_"'Min.'";
                      uVar5 = LIT_"'Max.'";
                      uVar9 = *(ulonglong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x338);
                      if (uVar9 == 0) {
                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                        uVar9 = func_0x000180315580(TI_System.Func<float>);
                        FUN_1814af380(uVar9,uVar2,MD_OptionsWindow.__c._Audio_b__41_10,0);
                        *(ulonglong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x338) = uVar9;
                        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x338,uVar9
                                           );
                      }
                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x340);
                      if (lVar7 == 0) {
                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                        lVar7 = func_0x000180315580(TI_System.Action<float>);
                        FUN_180b7e1e0(lVar7,uVar2,MD_OptionsWindow.__c._Audio_b__41_11,0);
                        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x340) = lVar7;
                        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x340,lVar7
                                           );
                      }
                      uVar5 = OptionsWindow__BlocoBarra__18068d250
                                        (param_1,uVar1,uVar6,uVar5,uVar9,lVar7,4,0);
                      if (lVar4 != 0) {
                        UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                        lVar4 = lStackX_18;
                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar5 = LIT_"'Mute when the game is in the background'";
                        lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x348);
                        if (lVar7 == 0) {
                          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                          lVar7 = func_0x000180315580(TI_System.Func<bool>);
                          FUN_1814af410(lVar7,uVar6,MD_OptionsWindow.__c._Audio_b__41_12,0);
                          *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x348) = lVar7;
                          func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x348,
                                              lVar7);
                        }
                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        lVar8 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x350);
                        if (lVar8 == 0) {
                          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                          lVar8 = func_0x000180315580(TI_System.Action<bool>);
                          FUN_180b7dfa0(lVar8,uVar6,MD_OptionsWindow.__c._Audio_b__41_13,0);
                          *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x350) = lVar8;
                          func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x350,
                                              lVar8);
                        }
                        uVar5 = OptionsWindow__Marca__180697090
                                          (param_1,uVar5,lVar7,lVar8,uVar9 & 0xffffffff00000000,0);
                        if (lVar4 != 0) {
                          UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
                          return uStack_40;
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
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

