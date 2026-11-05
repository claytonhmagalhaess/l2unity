// ChatWindow__TrocaOpcoes__1805cf380 @ 0x1805cf380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TrocaOpcoes__1805cf380(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulonglong uVar15;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar16;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uVar14;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (cRam00000001834b3ac7 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_System.Func<string,System.Func<bool>,System.Action<bool>,UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.Action>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkChatFiltro.VoltaAoPadrao);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_ChatWindow.__c._TrocaOpcoes_b__64_2);
    FUN_180315380(MD_ChatWindow.__c._TrocaOpcoes_b__64_3);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__0);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__1);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__4);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass64_0);
    FUN_180315380(TI_ChatWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Chat Options'");
    FUN_180315380(LIT_"'Default'");
    FUN_180315380(LIT_"'Show system message window'");
    FUN_180315380(LIT_"'Right-click a chat tab to change it. Each tab shows the ...");
    cRam00000001834b3ac7 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass64_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x10) = param_1;
    func_0x000180314690(lVar4 + 0x10,param_1);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      uVar5 = func_0x000180315580(TI_System.Collections.Generic.List<System.Action>);
      FUN_180bba2e0(uVar5,MR_System.Collections.Generic.List<System.Action>..ctor);
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      func_0x000180314690(lVar4 + 0x18,uVar5);
      uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
      *(undefined8 *)(param_1 + 0xf0) = uVar5;
      func_0x000180314690(param_1 + 0xf0,uVar5);
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0);
        uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (lVar6 != 0) {
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar5);
          if (*(longlong *)(param_1 + 0xf0) != 0) {
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xf0),0);
            uVar5 = func_0x0001825fc350(0x42c80000,0);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,uVar5,0);
            if (plVar7 != (longlong *)0x0) {
              lVar6 = *plVar7;
              uVar15 = 0;
              uVar5 = *puVar8;
              uVar1 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar14 = uVar15;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar14 * 0x10) + 0x47) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x0001805cf6c9;
                  }
                  uVar13 = (short)uVar14 + 1;
                  uVar14 = (ulonglong)uVar13;
                } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805cf6c9:
              uStack_98 = uVar5;
              uStack_90 = uVar1;
              (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
              if (*(longlong *)(param_1 + 0xf0) != 0) {
                plVar7 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0xf0),0);
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0,0);
                if (plVar7 != (longlong *)0x0) {
                  lVar6 = *plVar7;
                  uVar5 = *puVar8;
                  uVar1 = *(undefined4 *)(puVar8 + 1);
                  if (*(ushort *)(lVar6 + 0x12e) != 0) {
                    uVar14 = uVar15;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar8 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar14 * 0x10) + 0x2d)
                                  * 0x10 + 0x138 + lVar6);
                        goto code_r0x0001805cf769;
                      }
                      uVar13 = (short)uVar14 + 1;
                      uVar14 = (ulonglong)uVar13;
                    } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                  }
                  puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805cf769:
                  uStack_98 = uVar5;
                  uStack_90 = uVar1;
                  (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                  if (*(longlong *)(param_1 + 0xf0) != 0) {
                    plVar7 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0xf0),0);
                    puVar8 = (undefined8 *)
                             UnityEngine_UIElements_StyleLength__op_Implicit
                                       (&uStack_98,0x40c00000,0);
                    if (plVar7 != (longlong *)0x0) {
                      lVar6 = *plVar7;
                      uVar5 = *puVar8;
                      uVar1 = *(undefined4 *)(puVar8 + 1);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar14 = uVar15;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 0x10) ==
                              TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar14 * 0x10) +
                                      0x4d) * 0x10 + 0x138 + lVar6);
                            goto code_r0x0001805cf809;
                          }
                          uVar13 = (short)uVar14 + 1;
                          uVar14 = (ulonglong)uVar13;
                        } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805cf809:
                      uStack_98 = uVar5;
                      uStack_90 = uVar1;
                      (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                      if (*(longlong *)(param_1 + 0xf0) != 0) {
                        plVar7 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 0xf0),0);
                        puVar8 = (undefined8 *)
                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                           (&uStack_98,0x43e10000,0);
                        if (plVar7 != (longlong *)0x0) {
                          lVar6 = *plVar7;
                          uVar5 = *puVar8;
                          uVar1 = *(undefined4 *)(puVar8 + 1);
                          if (*(ushort *)(lVar6 + 0x12e) != 0) {
                            uVar14 = uVar15;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar8 = (undefined8 *)
                                         ((longlong)
                                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar14 * 0x10)
                                          + 0xad) * 0x10 + 0x138 + lVar6);
                                goto code_r0x0001805cf8a9;
                              }
                              uVar13 = (short)uVar14 + 1;
                              uVar14 = (ulonglong)uVar13;
                            } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                          }
                          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805cf8a9:
                          uStack_98 = uVar5;
                          uStack_90 = uVar1;
                          (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                          if (*(longlong *)(param_1 + 0xf0) != 0) {
                            plVar7 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0xf0),0);
                            puVar8 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_98,0x43d70000,0);
                            if (plVar7 != (longlong *)0x0) {
                              lVar6 = *plVar7;
                              uVar5 = *puVar8;
                              uVar1 = *(undefined4 *)(puVar8 + 1);
                              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                                uVar14 = uVar15;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar8 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                                       uVar14 * 0x10) + 0x43) * 0x10 + 0x138 + lVar6
                                             );
                                    goto code_r0x0001805cf949;
                                  }
                                  uVar13 = (short)uVar14 + 1;
                                  uVar14 = (ulonglong)uVar13;
                                } while (uVar13 < *(ushort *)(lVar6 + 0x12e));
                              }
                              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805cf949:
                              uStack_98 = uVar5;
                              uStack_90 = uVar1;
                              (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                              if (*(longlong *)(param_1 + 0xf0) != 0) {
                                UnityEngine_UIElements_VisualElement__set_pickingMode
                                          (*(longlong *)(param_1 + 0xf0),0,0);
                                uVar5 = *(undefined8 *)(param_1 + 0xf0);
                                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                SparkEstilo__Janela__180720aa0(uVar5,0);
                                SparkEstilo__Espaco__18071fb80
                                          (*(undefined8 *)(param_1 + 0xf0),0x41000000,0x41200000,
                                           0x41200000,CONCAT44(uVar16,0x41200000),0);
                                lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
                                if (lVar6 != 0) {
                                  lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                                  uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                  if (lVar9 != 0) {
                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0)
                                    ;
                                    uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                    if (lVar9 != 0) {
                                      FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                      lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar6,0);
                                      uVar5 = func_0x000182601c10(0,0);
                                      if (lVar9 != 0) {
                                        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                        plVar7 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar6,0);
                                        puVar8 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_98,0x41a00000,0);
                                        if (plVar7 != (longlong *)0x0) {
                                          lVar9 = *plVar7;
                                          uVar5 = *puVar8;
                                          uVar16 = *(undefined4 *)(puVar8 + 1);
                                          if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar9 + 0xb0) + uVar15 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar8 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8
                                                                   + uVar15 * 0x10) + 0x43) * 0x10 +
                                                          0x138 + lVar9);
                                                goto code_r0x0001805cfb29;
                                              }
                                              uVar13 = (short)uVar15 + 1;
                                              uVar15 = (ulonglong)uVar13;
                                            } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
                                          }
                                          puVar8 = (undefined8 *)
                                                   FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805cfb29:
                                          uStack_98 = uVar5;
                                          uStack_90 = uVar16;
                                          (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                                          lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_98 = *(undefined8 *)(lVar9 + 0x70);
                                          uStack_90 = *(undefined4 *)(lVar9 + 0x78);
                                          uStack_8c = *(undefined4 *)(lVar9 + 0x7c);
                                          uStack_68 = 0;
                                          uStack_78 = 0;
                                          uStack_70 = 0;
                                          func_0x000180cb7cb0(&uStack_78,&uStack_98,MR_System.Nullable<UnityEngine.Color>..ctor);
                                          uStack_58 = uStack_78;
                                          uStack_50 = uStack_70;
                                          uStack_48 = uStack_68;
                                          lVar9 = SparkEstilo__Texto__180722af0
                                                            (LIT_"'Chat Options'",0xc,&uStack_58,1,0
                                                            );
                                          if (lVar9 != 0) {
                                            lVar10 = UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar9,0);
                                            uVar5 = func_0x000182601c10(0x3f800000,0);
                                            if (lVar10 != 0) {
                                              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (lVar6,lVar9,0);
                                              uVar5 = func_0x000180315580(TI_System.Action);
                                              FUN_1816a9c60(uVar5,lVar4,MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__0,0);
                                              uVar5 = SparkEstilo__Fechar__180720510(uVar5,0);
                                              UnityEngine_UIElements_VisualElement__Add
                                                        (lVar6,uVar5,0);
                                              if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (*(longlong *)(param_1 + 0xf0),lVar6,0);
                                                lVar9 = func_0x000180315580(TI_System.Func<string,System.Func<bool>,System.Action<bool>,UnityEngine.UIElements.VisualElement>);
                                                FUN_1814b3ac0(lVar9,lVar4,MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__1,0);
                                                lVar6 = *(longlong *)(param_1 + 0xf0);
                                                if (*(int *)(TI_ChatWindow.<>c + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                uVar5 = LIT_"'Show system message window'";
                                                lVar10 = *(longlong *)
                                                          (*(longlong *)
                                                            (TI_ChatWindow.<>c + 0xb8) + 8);
                                                if (lVar10 == 0) {
                                                  if (*(int *)(TI_ChatWindow.<>c + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar12 = **(undefined8 **)
                                                             (TI_ChatWindow.<>c + 0xb8);
                                                  lVar10 = func_0x000180315580(TI_System.Func<bool>)
                                                  ;
                                                  FUN_1814af410(lVar10,uVar12,MD_ChatWindow.__c._TrocaOpcoes_b__64_2,0
                                                               );
                                                  *(longlong *)
                                                   (*(longlong *)(TI_ChatWindow.<>c + 0xb8) + 8)
                                                       = lVar10;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_ChatWindow.<>c + 0xb8)
                                                                      + 8,lVar10);
                                                }
                                                if (*(int *)(TI_ChatWindow.<>c + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                lVar11 = *(longlong *)
                                                          (*(longlong *)
                                                            (TI_ChatWindow.<>c + 0xb8) + 0x10);
                                                if (lVar11 == 0) {
                                                  if (*(int *)(TI_ChatWindow.<>c + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar12 = **(undefined8 **)
                                                             (TI_ChatWindow.<>c + 0xb8);
                                                  lVar11 = func_0x000180315580(TI_System.Action<bool>)
                                                  ;
                                                  FUN_180b7dfa0(lVar11,uVar12,MD_ChatWindow.__c._TrocaOpcoes_b__64_3,0
                                                               );
                                                  *(longlong *)
                                                   (*(longlong *)(TI_ChatWindow.<>c + 0xb8) +
                                                   0x10) = lVar11;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_ChatWindow.<>c + 0xb8)
                                                                      + 0x10,lVar11);
                                                }
                                                if ((lVar9 != 0) &&
                                                   (uVar5 = (**(code **)(lVar9 + 0x18))
                                                                      (*(undefined8 *)(lVar9 + 0x40)
                                                                       ,uVar5,lVar10,lVar11,
                                                                       *(undefined8 *)(lVar9 + 0x28)
                                                                      ), lVar6 != 0)) {
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar6,uVar5,0);
                                                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                    func_0x000180315660(TI_SparkEstilo);
                                                  }
                                                  lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                  uStack_98 = *(undefined8 *)(lVar6 + 0x50);
                                                  uStack_90 = *(undefined4 *)(lVar6 + 0x58);
                                                  uStack_8c = *(undefined4 *)(lVar6 + 0x5c);
                                                  uStack_58 = 0;
                                                  uStack_50 = 0;
                                                  uStack_48 = 0;
                                                  func_0x000180cb7cb0(&uStack_58,&uStack_98,
                                                                      MR_System.Nullable<UnityEngine.Color>..ctor);
                                                  uVar15 = 0;
                                                  uStack_98 = uStack_58;
                                                  uStack_90 = (undefined4)uStack_50;
                                                  uStack_8c = uStack_50._4_4_;
                                                  uStack_88 = uStack_48;
                                                  lVar6 = SparkEstilo__Texto__180722af0
                                                                    (LIT_"'Right-click a chat tab to change it. Each tab shows the ...",9,
                                                                     &uStack_98,0,0);
                                                  if (lVar6 != 0) {
                                                    lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                                    lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = func_0x000182601c10(0,0);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xf0),lVar6
                                                                 ,0);
                                                      lVar6 = SparkEstilo__Lista__1807211b0(0);
                                                      if (lVar6 != 0) {
                                                        lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                                    lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98,0,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar16 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar14 * 0x10) + 0x37)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x0001805d0009;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x37);
code_r0x0001805d0009:
                                                    uStack_98 = uVar5;
                                                    uStack_90 = uVar16;
                                                    (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98,0,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar16 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar14 * 0x10) + 0x57)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x0001805d0099;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x57);
code_r0x0001805d0099:
                                                    uStack_98 = uVar5;
                                                    uStack_90 = uVar16;
                                                    (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98,0x40800000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar16 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                                      uVar14 = uVar15;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar10 + 0xb0) +
                                                             uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar10 + 0xb0) + 8 +
                                                                             uVar14 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar10);
                                                          goto code_r0x0001805d0139;
                                                        }
                                                        uVar13 = (short)uVar14 + 1;
                                                        uVar14 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar10 + 0x12e))
                                                      ;
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805d0139:
                                                    uStack_98 = uVar5;
                                                    uStack_90 = uVar16;
                                                    (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                                                    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    SparkChatFiltro__MontaFiltros__1805d3260
                                                              (lVar6,lVar9,0);
                                                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xf0),lVar6
                                                                 ,0);
                                                      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                      UnityEngine_UIElements_VisualElement___ctor
                                                                (lVar6,0);
                                                      if (lVar6 != 0) {
                                                        lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                                    lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                                    lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  uVar5 = func_0x000182601c10(0,0);
                                                  if (lVar9 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar5);
                                                    plVar7 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar6,0);
                                                  puVar8 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98,0x40c00000,0);
                                                  if (plVar7 != (longlong *)0x0) {
                                                    lVar9 = *plVar7;
                                                    uVar5 = *puVar8;
                                                    uVar16 = *(undefined4 *)(puVar8 + 1);
                                                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar9 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar8 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar9 + 0xb0) + 8 +
                                                                             uVar15 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar9);
                                                          goto code_r0x0001805d02e9;
                                                        }
                                                        uVar13 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar13;
                                                      } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805d02e9:
                                                    uStack_98 = uVar5;
                                                    uStack_90 = uVar16;
                                                    (*(code *)*puVar8)(plVar7,&uStack_98,puVar8[1]);
                                                    uVar5 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar5,0,MD_SparkChatFiltro.VoltaAoPadrao,0);
                                                    uVar5 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Default'",uVar5,
                                                                       100,0,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar6,uVar5,0);
                                                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xf0),lVar6
                                                                 ,0);
                                                      uVar5 = func_0x000180315580(
                                                  TI_System.Action<int>);
                                                  FUN_180b7db20(uVar5,lVar4,MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__4,0);
                                                  *(undefined8 *)(param_1 + 0xf8) = uVar5;
                                                  func_0x000180314690(param_1 + 0xf8,uVar5);
                                                  SparkChatFiltro__add_Mudou
                                                            (*(undefined8 *)(param_1 + 0xf8),0);
                                                  if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0xb8),
                                                               *(undefined8 *)(param_1 + 0xf0),0);
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
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0);
      if ((*(longlong *)(param_1 + 0xf0) != 0) &&
         (lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0),
         lVar6 != 0)) {
        uVar5 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar6);
        uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        bVar3 = FUN_180eb54b0(uVar5,uVar12,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
        uVar5 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

