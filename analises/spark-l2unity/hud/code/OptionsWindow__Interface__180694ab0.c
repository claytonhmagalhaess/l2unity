// OptionsWindow__Interface__180694ab0 @ 0x180694ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OptionsWindow__Interface__180694ab0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lStackX_18;
  longlong lStackX_20;
  undefined4 uVar9;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b3e89 == '\0') {
    FUN_180315380(TI_System.Action<float>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_System.Func<float>);
    FUN_180315380(TI_System.Func<string__>);
    FUN_180315380(TI_System.Func<int>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_10);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_11);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_12);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_6);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_7);
    FUN_180315380(MD_OptionsWindow.__c._Interface_b__44_8);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__2);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__3);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__4);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__5);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__9);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass44_0);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'Weather'");
    FUN_180315380(LIT_"'Sky'");
    FUN_180315380(LIT_"'Changes only the size of the shortcut bar and of the aut...");
    FUN_180315380(LIT_"'Max.'");
    FUN_180315380(LIT_"'Only changes the sky on your screen. Auto (Server time) ...");
    FUN_180315380(LIT_"'Chat Background Opacity'");
    FUN_180315380(LIT_"'Buff Bar'");
    FUN_180315380(LIT_"'Default Settings'");
    FUN_180315380(LIT_"'Chat'");
    FUN_180315380(LIT_"'Only changes the weather on your screen: rain with wet g...");
    FUN_180315380(LIT_"'Size of the buff and debuff icons, 12 per row at any siz...");
    FUN_180315380(LIT_"'Min.'");
    FUN_180315380(LIT_"'Darkens the background of the chat and of the system mes...");
    FUN_180315380(LIT_"'Buff Icon Size'");
    FUN_180315380(LIT_"'Shortcut Bar and Auto Potion Size'");
    FUN_180315380(LIT_"'Shortcut Bar'");
    cRam00000001834b3e89 = '\x01';
  }
  lStackX_18 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStackX_20 = 0;
  lVar2 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass44_0);
  func_0x0001803f01b0(lVar2,0);
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x28) = param_1;
    func_0x000180314690(lVar2 + 0x28,param_1);
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = OptionsWindow__Rolagem__1806998f0(&lStackX_18,0);
    lVar6 = lStackX_18;
    uStack_78 = uVar3;
    uVar4 = OptionsWindow__Secao__180699d10(LIT_"'Default Settings'",0);
    if (lVar6 != 0) {
      UnityEngine_UIElements_VisualElement__Add(lVar6,uVar4,0);
      *(undefined4 *)(lVar2 + 0x10) = 0x3f2eaeaf;
      *(undefined4 *)(lVar2 + 0x14) = 0x3f666666;
      uVar4 = OptionsWindow__Grupo__180694480(LIT_"'Chat'",&lStack_a8,0);
      if (lStackX_18 != 0) {
        UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
        uVar4 = func_0x000180315580(TI_System.Func<float>);
        FUN_1814af380(uVar4,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__0,0);
        uVar5 = func_0x000180315580(TI_System.Action<float>);
        FUN_180b7e1e0(uVar5,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__1,0);
        uVar4 = OptionsWindow__BlocoBarra__18068d250
                          (param_1,LIT_"'Chat Background Opacity'",LIT_"'Min.'",LIT_"'Max.'",
                           uVar4,uVar5,0xb,0);
        if (lStack_a8 != 0) {
          UnityEngine_UIElements_VisualElement__Add(lStack_a8,uVar4,0);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
          lStack_c8 = *(longlong *)(lVar6 + 0x50);
          uStack_c0 = *(undefined4 *)(lVar6 + 0x58);
          uStack_bc = *(undefined4 *)(lVar6 + 0x5c);
          lStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          func_0x000180cb7cb0(&lStack_70,&lStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
          lStack_e8 = lStack_70;
          uStack_e0 = uStack_68;
          uStack_d8 = uStack_60;
          lVar6 = SparkEstilo__Texto(LIT_"'Darkens the background of the chat and of the system mes...",9,&lStack_e8,0,0);
          if (lVar6 != 0) {
            lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
            if (lVar7 != 0) {
              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
              if (lStack_a8 != 0) {
                UnityEngine_UIElements_VisualElement__Add(lStack_a8,lVar6,0);
                *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
                *(undefined4 *)(lVar2 + 0x1c) = 0x3fa66666;
                uVar4 = OptionsWindow__Grupo__180694480(LIT_"'Shortcut Bar'",&lStack_a0,0);
                if (lStackX_18 != 0) {
                  UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
                  uVar4 = func_0x000180315580(TI_System.Func<float>);
                  FUN_1814af380(uVar4,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__2,0);
                  uVar5 = func_0x000180315580(TI_System.Action<float>);
                  FUN_180b7e1e0(uVar5,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__3,0);
                  uVar4 = OptionsWindow__BlocoBarra__18068d250
                                    (param_1,LIT_"'Shortcut Bar and Auto Potion Size'",LIT_"'Min.'",
                                     LIT_"'Max.'",uVar4,uVar5,6,0);
                  if (lStack_a0 != 0) {
                    UnityEngine_UIElements_VisualElement__Add(lStack_a0,uVar4,0);
                    lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    lStack_c8 = *(longlong *)(lVar6 + 0x50);
                    uStack_c0 = *(undefined4 *)(lVar6 + 0x58);
                    uStack_bc = *(undefined4 *)(lVar6 + 0x5c);
                    uStack_48 = 0;
                    lStack_58 = 0;
                    uStack_50 = 0;
                    func_0x000180cb7cb0(&lStack_58,&lStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                    lStack_e8 = lStack_58;
                    uStack_e0 = uStack_50;
                    uStack_d8 = uStack_48;
                    lVar6 = SparkEstilo__Texto(LIT_"'Changes only the size of the shortcut bar and of the aut...",9,&lStack_e8,0,0);
                    if (lVar6 != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                      uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                      if (lVar7 != 0) {
                        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                        if (lStack_a0 != 0) {
                          UnityEngine_UIElements_VisualElement__Add(lStack_a0,lVar6,0);
                          *(undefined4 *)(lVar2 + 0x20) = 0x18;
                          *(undefined4 *)(lVar2 + 0x24) = 0x1e;
                          uVar4 = OptionsWindow__Grupo__180694480(LIT_"'Buff Bar'",&lStack_98,0)
                          ;
                          if (lStackX_18 != 0) {
                            UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
                            uVar4 = func_0x000180315580(TI_System.Func<float>);
                            FUN_1814af380(uVar4,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__4,0);
                            uVar5 = func_0x000180315580(TI_System.Action<float>);
                            FUN_180b7e1e0(uVar5,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__5,0);
                            uVar4 = OptionsWindow__BlocoBarra__18068d250
                                              (param_1,LIT_"'Buff Icon Size'",LIT_"'Min.'",
                                               LIT_"'Max.'",uVar4,uVar5,
                                               (*(int *)(lVar2 + 0x24) - *(int *)(lVar2 + 0x20)) + 1
                                               ,0);
                            if (lStack_98 != 0) {
                              UnityEngine_UIElements_VisualElement__Add(lStack_98,uVar4,0);
                              lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
                              lStack_c8 = *(longlong *)(lVar6 + 0x50);
                              uStack_c0 = *(undefined4 *)(lVar6 + 0x58);
                              uStack_bc = *(undefined4 *)(lVar6 + 0x5c);
                              uStack_80 = 0;
                              lStack_90 = 0;
                              uStack_88 = 0;
                              func_0x000180cb7cb0(&lStack_90,&lStack_c8,MR_System.Nullable<UnityEngine.Color>..ctor);
                              lStack_e8 = lStack_90;
                              uStack_e0 = uStack_88;
                              uStack_d8 = uStack_80;
                              uVar9 = 0;
                              lVar6 = SparkEstilo__Texto(LIT_"'Size of the buff and debuff icons, 12 per row at any siz...",9,&lStack_e8,0,0);
                              if (lVar6 != 0) {
                                lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                if (lVar7 != 0) {
                                  FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                                  if (lStack_98 != 0) {
                                    UnityEngine_UIElements_VisualElement__Add(lStack_98,lVar6,0);
                                    uVar4 = OptionsWindow__Grupo__180694480
                                                      (LIT_"'Sky'",&lStackX_20,0);
                                    if (lStackX_18 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add(lStackX_18,uVar4,0);
                                      lStack_c8 = lStackX_20;
                                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      uVar4 = LIT_"'Sky'";
                                      lVar6 = *(longlong *)
                                               (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3b8);
                                      if (lVar6 == 0) {
                                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uVar5 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                        lVar6 = func_0x000180315580(TI_System.Func<string__>);
                                        FUN_1814af140(lVar6,uVar5,MD_OptionsWindow.__c._Interface_b__44_6,0);
                                        *(longlong *)
                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3b8) =
                                             lVar6;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_OptionsWindow.<>c + 0xb8) + 0x3b8,
                                                            lVar6);
                                        uStack_78 = uVar3;
                                      }
                                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      lVar7 = *(longlong *)
                                               (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3c0);
                                      if (lVar7 == 0) {
                                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uVar3 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                        lVar7 = func_0x000180315580(TI_System.Func<int>);
                                        FUN_1814af140(lVar7,uVar3,MD_OptionsWindow.__c._Interface_b__44_7,0);
                                        *(longlong *)
                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3c0) =
                                             lVar7;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_OptionsWindow.<>c + 0xb8) + 0x3c0,
                                                            lVar7);
                                      }
                                      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      lVar8 = *(longlong *)
                                               (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3c8);
                                      if (lVar8 == 0) {
                                        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uVar3 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
                                        lVar8 = func_0x000180315580(TI_System.Action<int>);
                                        FUN_180b7db20(lVar8,uVar3,MD_OptionsWindow.__c._Interface_b__44_8,0);
                                        *(longlong *)
                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x3c8) =
                                             lVar8;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_OptionsWindow.<>c + 0xb8) + 0x3c8,
                                                            lVar8);
                                      }
                                      if (param_1 != 0) {
                                        uVar3 = OptionsWindow__Escolha__180692e50
                                                          (param_1,lVar6,lVar7,lVar8,
                                                           CONCAT44(uVar9,0xa0),0);
                                        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        uVar3 = OptionsWindow__Linha__180696fc0(uVar4,uVar3,0);
                                        if (lStack_c8 != 0) {
                                          UnityEngine_UIElements_VisualElement__Add
                                                    (lStack_c8,uVar3,0);
                                          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                            func_0x000180315660(TI_SparkEstilo);
                                          }
                                          lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          lStack_c8 = *(longlong *)(lVar6 + 0x50);
                                          uStack_c0 = *(undefined4 *)(lVar6 + 0x58);
                                          uStack_bc = *(undefined4 *)(lVar6 + 0x5c);
                                          lStack_e8 = 0;
                                          uStack_e0 = 0;
                                          uStack_d8 = 0;
                                          func_0x000180cb7cb0(&lStack_e8,&lStack_c8,
                                                              MR_System.Nullable<UnityEngine.Color>..ctor);
                                          lStack_c8 = lStack_e8;
                                          uStack_c0 = (undefined4)uStack_e0;
                                          uStack_bc = uStack_e0._4_4_;
                                          uStack_b8 = uStack_d8;
                                          uVar9 = 0;
                                          lVar6 = SparkEstilo__Texto(LIT_"'Only changes the sky on your screen. Auto (Server time) ...",9,
                                                                     &lStack_c8,0,0);
                                          if (lVar6 != 0) {
                                            lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar6,0);
                                            uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                            if (lVar7 != 0) {
                                              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                              if (lStackX_20 != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lStackX_20,lVar6,0);
                                                uVar3 = func_0x000180315580(TI_System.Action);
                                                FUN_1816a9c60(uVar3,lVar2,MD_OptionsWindow.__c__DisplayClass44_0._Interface_b__9,0);
                                                *(undefined8 *)(param_1 + 0xa8) = uVar3;
                                                func_0x000180314690(param_1 + 0xa8,uVar3);
                                                uVar3 = *(undefined8 *)(param_1 + 0xa8);
                                                if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                SparkOpcoes__add_CeuMudou(uVar3,0);
                                                lVar2 = lStackX_20;
                                                if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                uVar3 = LIT_"'Weather'";
                                                lVar6 = *(longlong *)
                                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8)
                                                         + 0x3d0);
                                                if (lVar6 == 0) {
                                                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar4 = **(undefined8 **)
                                                            (TI_OptionsWindow.<>c + 0xb8);
                                                  lVar6 = func_0x000180315580(TI_System.Func<string__>);
                                                  FUN_1814af140(lVar6,uVar4,MD_OptionsWindow.__c._Interface_b__44_10,0);
                                                  *(longlong *)
                                                   (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) +
                                                   0x3d0) = lVar6;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_OptionsWindow.<>c + 0xb8)
                                                                      + 0x3d0,lVar6);
                                                }
                                                if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                lVar7 = *(longlong *)
                                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8)
                                                         + 0x3d8);
                                                if (lVar7 == 0) {
                                                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar4 = **(undefined8 **)
                                                            (TI_OptionsWindow.<>c + 0xb8);
                                                  lVar7 = func_0x000180315580(TI_System.Func<int>);
                                                  FUN_1814af140(lVar7,uVar4,MD_OptionsWindow.__c._Interface_b__44_11,0);
                                                  *(longlong *)
                                                   (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) +
                                                   0x3d8) = lVar7;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_OptionsWindow.<>c + 0xb8)
                                                                      + 0x3d8,lVar7);
                                                }
                                                if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                lVar8 = *(longlong *)
                                                         (*(longlong *)(TI_OptionsWindow.<>c + 0xb8)
                                                         + 0x3e0);
                                                if (lVar8 == 0) {
                                                  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar4 = **(undefined8 **)
                                                            (TI_OptionsWindow.<>c + 0xb8);
                                                  lVar8 = func_0x000180315580(TI_System.Action<int>);
                                                  FUN_180b7db20(lVar8,uVar4,MD_OptionsWindow.__c._Interface_b__44_12,0);
                                                  *(longlong *)
                                                   (*(longlong *)(TI_OptionsWindow.<>c + 0xb8) +
                                                   0x3e0) = lVar8;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_OptionsWindow.<>c + 0xb8)
                                                                      + 0x3e0,lVar8);
                                                }
                                                uVar4 = OptionsWindow__Escolha__180692e50
                                                                  (param_1,lVar6,lVar7,lVar8,
                                                                   CONCAT44(uVar9,0xa0),0);
                                                if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                uVar3 = OptionsWindow__Linha__180696fc0
                                                                  (uVar3,uVar4,0);
                                                if (lVar2 != 0) {
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar2,uVar3,0);
                                                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                    func_0x000180315660(TI_SparkEstilo);
                                                  }
                                                  lVar2 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                  lStack_c8 = *(longlong *)(lVar2 + 0x50);
                                                  uStack_c0 = *(undefined4 *)(lVar2 + 0x58);
                                                  uStack_bc = *(undefined4 *)(lVar2 + 0x5c);
                                                  lStack_90 = 0;
                                                  uStack_88 = 0;
                                                  uStack_80 = 0;
                                                  func_0x000180cb7cb0(&lStack_90,&lStack_c8,
                                                                      MR_System.Nullable<UnityEngine.Color>..ctor);
                                                  lStack_e8 = lStack_90;
                                                  uStack_e0 = uStack_88;
                                                  uStack_d8 = uStack_80;
                                                  lVar2 = SparkEstilo__Texto(LIT_"'Only changes the weather on your screen: rain with wet g...",9,
                                                                             &lStack_e8,0,0);
                                                  if (lVar2 != 0) {
                                                    lVar6 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar2,0);
                                                  uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar6 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar6,uVar3);
                                                    if (lStackX_20 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lStackX_20,lVar2,0);
                                                      uVar3 = *(undefined8 *)(param_1 + 0xa8);
                                                      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      SparkOpcoes__add_ClimaMudou(uVar3,0);
                                                      lVar2 = lStackX_18;
                                                      uVar3 = 
                                                  OptionsWindow__BlocoTextoDano__18068d790
                                                            (param_1,0);
                                                  if (lVar2 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar2,uVar3,0);
                                                    return uStack_78;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                FUN_1803155d0();
                                                pcVar1 = (code *)swi(3);
                                                uVar3 = (*pcVar1)();
                                                return uVar3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      FUN_1803155d0();
                                      pcVar1 = (code *)swi(3);
                                      uVar3 = (*pcVar1)();
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
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

