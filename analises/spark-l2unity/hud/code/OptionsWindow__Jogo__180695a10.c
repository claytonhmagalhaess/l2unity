// OptionsWindow__Jogo__180695a10 @ 0x180695a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OptionsWindow__Jogo__180695a10(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lStackX_18;
  longlong lStackX_20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  longlong alStack_50 [3];
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (cRam00000001834b3e87 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_System.Func<string__>);
    FUN_180315380(TI_System.Func<int>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_OptionsWindow.TrocaLoot);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_0);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_1);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_2);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_3);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_4);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_5);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_6);
    FUN_180315380(MD_OptionsWindow.__c._Jogo_b__42_7);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'Shows the same ring of duels and events under every memb...");
    FUN_180315380(LIT_"'The mouse wheel option only changes the camera zoom.'");
    FUN_180315380(LIT_"'Without a party: the loot your next party starts with. I...");
    FUN_180315380(LIT_"'Controls'");
    FUN_180315380(LIT_"'Alt+H hides the whole interface, Alt+J hides the chat, \"...");
    FUN_180315380(LIT_"'Invert camera Y axis'");
    FUN_180315380(LIT_"'Interface'");
    FUN_180315380(LIT_"'Default Settings'");
    FUN_180315380(LIT_"'Party loot'");
    FUN_180315380(LIT_"'Party effect (ring under your party members)'");
    FUN_180315380(LIT_"'Party'");
    FUN_180315380(LIT_"'Invert mouse wheel'");
    cRam00000001834b3e87 = '\x01';
  }
  lStackX_20 = 0;
  lStackX_18 = 0;
  lStack_88 = 0;
  alStack_50[0] = 0;
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = OptionsWindow__Rolagem__1806998f0(&lStackX_20,0);
  lVar7 = lStackX_20;
  uVar3 = OptionsWindow__Secao__180699d10(LIT_"'Default Settings'",0);
  if (lVar7 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
    uVar3 = OptionsWindow__Grupo__180694480(LIT_"'Party'",&lStackX_18,0);
    if (lStackX_20 != 0) {
      UnityEngine_UIElements_VisualElement__Add(lStackX_20,uVar3,0);
      lVar7 = lStackX_18;
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = LIT_"'Party loot'";
      lVar4 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x358);
      if (lVar4 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar4 = func_0x000180315580(TI_System.Func<string__>);
        FUN_1814af140(lVar4,uVar6,MD_OptionsWindow.__c._Jogo_b__42_0,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x358) = lVar4;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x358,lVar4);
      }
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x360);
      if (lVar5 == 0) {
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
        lVar5 = func_0x000180315580(TI_System.Func<int>);
        FUN_1814af140(lVar5,uVar6,MD_OptionsWindow.__c._Jogo_b__42_1,0);
        *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x360) = lVar5;
        func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x360,lVar5);
      }
      uVar6 = func_0x000180315580(TI_System.Action<int>);
      FUN_180b7db20(uVar6,param_1,MD_OptionsWindow.TrocaLoot,0);
      if (param_1 != 0) {
        uVar12 = CONCAT44(uVar14,200);
        uVar6 = OptionsWindow__Escolha__180692e50(param_1,lVar4,lVar5,uVar6,uVar12,0);
        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar3 = OptionsWindow__Linha__180696fc0(uVar3,uVar6,0);
        if (lVar7 != 0) {
          UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
          lVar7 = lStackX_18;
          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar3 = LIT_"'Party effect (ring under your party members)'";
          lVar4 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x368);
          if (lVar4 == 0) {
            if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
            lVar4 = func_0x000180315580(TI_System.Func<bool>);
            FUN_1814af410(lVar4,uVar6,MD_OptionsWindow.__c._Jogo_b__42_2,0);
            *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x368) = lVar4;
            func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x368,lVar4);
          }
          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar5 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x370);
          if (lVar5 == 0) {
            if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
            lVar5 = func_0x000180315580(TI_System.Action<bool>);
            FUN_180b7dfa0(lVar5,uVar6,MD_OptionsWindow.__c._Jogo_b__42_3,0);
            *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x370) = lVar5;
            func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x370,lVar5);
          }
          uVar3 = OptionsWindow__Marca__180697090
                            (param_1,uVar3,lVar4,lVar5,uVar12 & 0xffffffff00000000,0);
          if (lVar7 != 0) {
            UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
            lVar7 = lStackX_18;
            uVar3 = OptionsWindow__CoresDaParty__180691ff0(param_1,0);
            if (lVar7 != 0) {
              UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660(TI_SparkEstilo);
              }
              lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
              uStack_a8 = *(undefined8 *)(lVar7 + 0x50);
              uStack_a0 = *(undefined4 *)(lVar7 + 0x58);
              uStack_9c = *(undefined4 *)(lVar7 + 0x5c);
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_70 = 0;
              func_0x000180cb7cb0(&uStack_80,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
              uVar12 = 0;
              uStack_a8 = uStack_80;
              uStack_a0 = (undefined4)uStack_78;
              uStack_9c = uStack_78._4_4_;
              uStack_98 = uStack_70;
              lVar7 = SparkEstilo__Texto(LIT_"'Shows the same ring of duels and events under every memb...",9,&uStack_a8,0,0);
              if (lVar7 != 0) {
                lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                if (lVar4 != 0) {
                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_a8,0x41b00000,0);
                  if (plVar8 != (longlong *)0x0) {
                    lVar4 = *plVar8;
                    uVar3 = *puVar9;
                    uVar14 = *(undefined4 *)(puVar9 + 1);
                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                      uVar13 = uVar12;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar13 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar9 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar13 * 0x10) +
                                    0x4d) * 0x10 + 0x138 + lVar4);
                          goto code_r0x000180696139;
                        }
                        uVar10 = (short)uVar13 + 1;
                        uVar13 = (ulonglong)uVar10;
                      } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                    }
                    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180696139:
                    uStack_a8 = uVar3;
                    uStack_a0 = uVar14;
                    (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                    if (lStackX_18 != 0) {
                      UnityEngine_UIElements_VisualElement__Add(lStackX_18,lVar7,0);
                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uStack_a8 = *(undefined8 *)(lVar7 + 0x50);
                      uStack_a0 = *(undefined4 *)(lVar7 + 0x58);
                      uStack_9c = *(undefined4 *)(lVar7 + 0x5c);
                      uStack_58 = 0;
                      uStack_68 = 0;
                      uStack_60 = 0;
                      func_0x000180cb7cb0(&uStack_68,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uStack_a8 = uStack_68;
                      uStack_a0 = (undefined4)uStack_60;
                      uStack_9c = uStack_60._4_4_;
                      uStack_98 = uStack_58;
                      uVar13 = 0;
                      lVar7 = SparkEstilo__Texto(LIT_"'Without a party: the loot your next party starts with. I...",9,&uStack_a8,0,0);
                      if (lVar7 != 0) {
                        lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                        uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                        if (lVar4 != 0) {
                          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                          plVar8 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          puVar9 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_a8,0x41b00000,0);
                          if (plVar8 != (longlong *)0x0) {
                            lVar4 = *plVar8;
                            uVar3 = *puVar9;
                            uVar14 = *(undefined4 *)(puVar9 + 1);
                            if (*(ushort *)(lVar4 + 0x12e) != 0) {
                              uVar11 = uVar12;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar9 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                     uVar11 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar4);
                                  goto code_r0x000180696299;
                                }
                                uVar10 = (short)uVar11 + 1;
                                uVar11 = (ulonglong)uVar10;
                              } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                            }
                            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180696299:
                            uStack_a8 = uVar3;
                            uStack_a0 = uVar14;
                            (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                            plVar8 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            puVar9 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_a8,0x40000000,0);
                            if (plVar8 != (longlong *)0x0) {
                              lVar4 = *plVar8;
                              uVar3 = *puVar9;
                              uVar14 = *(undefined4 *)(puVar9 + 1);
                              if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar9 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 +
                                                       uVar12 * 0x10) + 0x51) * 0x10 + 0x138 + lVar4
                                             );
                                    goto code_r0x000180696339;
                                  }
                                  uVar10 = (short)uVar12 + 1;
                                  uVar12 = (ulonglong)uVar10;
                                } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                              }
                              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180696339:
                              uStack_a8 = uVar3;
                              uStack_a0 = uVar14;
                              (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                              if (lStackX_18 != 0) {
                                UnityEngine_UIElements_VisualElement__Add(lStackX_18,lVar7,0);
                                if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar3 = OptionsWindow__Grupo__180694480
                                                  (LIT_"'Controls'",&lStack_88,0);
                                if (lStackX_20 != 0) {
                                  UnityEngine_UIElements_VisualElement__Add(lStackX_20,uVar3,0);
                                  lVar7 = lStack_88;
                                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  uVar3 = LIT_"'Invert camera Y axis'";
                                  lVar4 = *(longlong *)
                                           (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x378);
                                  if (lVar4 == 0) {
                                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                      func_0x000180315660();
                                    }
                                    uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                    lVar4 = func_0x000180315580(TI_System.Func<bool>);
                                    FUN_1814af410(lVar4,uVar6,MD_OptionsWindow.__c._Jogo_b__42_4,0);
                                    *(longlong *)
                                     (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x378) = lVar4;
                                    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) +
                                                        0x378,lVar4);
                                  }
                                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                    func_0x000180315660();
                                  }
                                  lVar5 = *(longlong *)
                                           (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x380);
                                  if (lVar5 == 0) {
                                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                      func_0x000180315660();
                                    }
                                    uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                    lVar5 = func_0x000180315580(TI_System.Action<bool>);
                                    FUN_180b7dfa0(lVar5,uVar6,MD_OptionsWindow.__c._Jogo_b__42_5,0);
                                    *(longlong *)
                                     (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x380) = lVar5;
                                    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) +
                                                        0x380,lVar5);
                                  }
                                  uVar13 = uVar13 & 0xffffffff00000000;
                                  uVar3 = OptionsWindow__Marca__180697090
                                                    (param_1,uVar3,lVar4,lVar5,uVar13,0);
                                  if (lVar7 != 0) {
                                    UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
                                    lVar7 = lStack_88;
                                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                      func_0x000180315660();
                                    }
                                    uVar3 = LIT_"'Invert mouse wheel'";
                                    lVar4 = *(longlong *)
                                             (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x388);
                                    if (lVar4 == 0) {
                                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                      lVar4 = func_0x000180315580(TI_System.Func<bool>);
                                      FUN_1814af410(lVar4,uVar6,MD_OptionsWindow.__c._Jogo_b__42_6,0);
                                      *(longlong *)
                                       (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x388) = lVar4;
                                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8)
                                                          + 0x388,lVar4);
                                    }
                                    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                      func_0x000180315660();
                                    }
                                    lVar5 = *(longlong *)
                                             (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x390);
                                    if (lVar5 == 0) {
                                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      uVar6 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                      lVar5 = func_0x000180315580(TI_System.Action<bool>);
                                      FUN_180b7dfa0(lVar5,uVar6,MD_OptionsWindow.__c._Jogo_b__42_7,0);
                                      *(longlong *)
                                       (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x390) = lVar5;
                                      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8)
                                                          + 0x390,lVar5);
                                    }
                                    uVar3 = OptionsWindow__Marca__180697090
                                                      (param_1,uVar3,lVar4,lVar5,
                                                       uVar13 & 0xffffffff00000000,0);
                                    if (lVar7 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
                                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                        func_0x000180315660(TI_SparkEstilo);
                                      }
                                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                      uStack_a8 = *(undefined8 *)(lVar7 + 0x50);
                                      uStack_a0 = *(undefined4 *)(lVar7 + 0x58);
                                      uStack_9c = *(undefined4 *)(lVar7 + 0x5c);
                                      uStack_68 = 0;
                                      uStack_60 = 0;
                                      uStack_58 = 0;
                                      func_0x000180cb7cb0(&uStack_68,&uStack_a8,MR_System.Nullable<UnityEngine.Color>..ctor
                                                         );
                                      uVar12 = 0;
                                      uStack_a8 = uStack_68;
                                      uStack_a0 = (undefined4)uStack_60;
                                      uStack_9c = uStack_60._4_4_;
                                      uStack_98 = uStack_58;
                                      lVar7 = SparkEstilo__Texto(LIT_"'The mouse wheel option only changes the camera zoom.'",9,&uStack_a8,0
                                                                 ,0);
                                      if (lVar7 != 0) {
                                        lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar7,0);
                                        uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                        if (lVar4 != 0) {
                                          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                          plVar8 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar7,0);
                                          puVar9 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_a8,0x41b00000,0);
                                          if (plVar8 != (longlong *)0x0) {
                                            lVar4 = *plVar8;
                                            uVar3 = *puVar9;
                                            uVar14 = *(undefined4 *)(puVar9 + 1);
                                            if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar4 + 0xb0) + uVar12 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar9 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar4 + 0xb0) +
                                                                      8 + uVar12 * 0x10) + 0x4d) *
                                                            0x10 + 0x138 + lVar4);
                                                  goto code_r0x0001806967f9;
                                                }
                                                uVar10 = (short)uVar12 + 1;
                                                uVar12 = (ulonglong)uVar10;
                                              } while (uVar10 < *(ushort *)(lVar4 + 0x12e));
                                            }
                                            puVar9 = (undefined8 *)
                                                     FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806967f9:
                                            uStack_a8 = uVar3;
                                            uStack_a0 = uVar14;
                                            (*(code *)*puVar9)(plVar8,&uStack_a8,puVar9[1]);
                                            if (lStack_88 != 0) {
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (lStack_88,lVar7,0);
                                              if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                                func_0x000180315660();
                                              }
                                              uVar3 = OptionsWindow__Grupo__180694480
                                                                (LIT_"'Interface'",alStack_50,0);
                                              if (lStackX_20 != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lStackX_20,uVar3,0);
                                                lVar7 = *(longlong *)(TI_OptionsWindow + 0xb8);
                                                uStack_a8 = *(undefined8 *)(lVar7 + 0x28);
                                                uStack_a0 = *(undefined4 *)(lVar7 + 0x30);
                                                uStack_9c = *(undefined4 *)(lVar7 + 0x34);
                                                uStack_70 = 0;
                                                uStack_80 = 0;
                                                uStack_78 = 0;
                                                func_0x000180cb7cb0(&uStack_80,&uStack_a8,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_a8 = uStack_80;
                                                uStack_a0 = (undefined4)uStack_78;
                                                uStack_9c = uStack_78._4_4_;
                                                uStack_98 = uStack_70;
                                                lVar7 = SparkEstilo__Texto(LIT_"'Alt+H hides the whole interface, Alt+J hides the chat, \"...",10,
                                                                           &uStack_a8,0,0);
                                                if (lVar7 != 0) {
                                                  lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                                  uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (alStack_50[0] != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (alStack_50[0],lVar7,0);
                                                      return uVar2;
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
                                    pcVar1 = (code *)swi(3);
                                    uVar2 = (*pcVar1)();
                                    return uVar2;
                                  }
                                  goto code_r0x0001806969e8;
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
          pcVar1 = (code *)swi(3);
          uVar2 = (*pcVar1)();
          return uVar2;
        }
      }
    }
  }
code_r0x0001806969e8:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

