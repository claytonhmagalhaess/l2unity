// ClanWindow__MontaMembros__1805e1830 @ 0x1805e1830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ClanWindow__MontaMembros__1805e1830(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar15;
  int iVar16;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  ulonglong uVar14;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  if (cRam00000001834b3b5d == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ClanWindow._MontaMembros_b__63_0);
    FUN_180315380(MD_ClanWindow._MontaMembros_b__63_1);
    FUN_180315380(MD_ClanWindow._MontaMembros_b__63_2);
    FUN_180315380(MD_ClanWindow._MontaMembros_b__63_3);
    FUN_180315380(MD_ClanWindow._MontaMembros_b__63_4);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Class'");
    FUN_180315380(LIT_"'Move'");
    FUN_180315380(LIT_"'Dismiss'");
    FUN_180315380(LIT_"'Rank'");
    FUN_180315380(LIT_"'Title'");
    FUN_180315380(LIT_"'Party Invite'");
    FUN_180315380(LIT_"'Name'");
    FUN_180315380(LIT_"'Unit'");
    FUN_180315380(LIT_"'Select a member to see the details.'");
    FUN_180315380(LIT_"'Lv'");
    FUN_180315380(LIT_"'Privileges'");
    FUN_180315380(LIT_"'Set Rank'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Set Title'");
    cRam00000001834b3b5d = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (lVar4 != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar5 != 0) {
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
      if (lVar5 != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        uVar6 = func_0x000182601c10(0x3f800000,0);
        if (lVar7 != 0) {
          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar9 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_198,0x41200000,0);
          if (plVar8 != (longlong *)0x0) {
            lVar7 = *plVar8;
            uVar15 = 0;
            uVar6 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar14 = uVar15;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar14 * 0x10) + 0x4f) *
                            0x10 + 0x138 + lVar7);
                  goto code_r0x0001805e1b89;
                }
                uVar13 = (short)uVar14 + 1;
                uVar14 = (ulonglong)uVar13;
              } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805e1b89:
            uStack_198 = uVar6;
            uStack_190 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1]);
            UnityEngine_UIElements_VisualElement__Add(lVar4,lVar5,0);
            uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
            *(undefined8 *)(param_1 + 0xf0) = uVar6;
            func_0x000180314690(param_1 + 0xf0,uVar6);
            if (*(longlong *)(param_1 + 0xf0) != 0) {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xf0),0);
              uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
              if (lVar7 != 0) {
                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                if (*(longlong *)(param_1 + 0xf0) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xf0),0);
                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(0x3f,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                      plVar8 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(param_1 + 0xf0),0);
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_198,0x40c00000,0);
                      if (plVar8 != (longlong *)0x0) {
                        lVar7 = *plVar8;
                        uVar6 = *puVar9;
                        uVar1 = *(undefined4 *)(puVar9 + 1);
                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                          uVar14 = uVar15;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar14 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar9 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar14 * 0x10) +
                                        0x4b) * 0x10 + 0x138 + lVar7);
                              goto code_r0x0001805e1d09;
                            }
                            uVar13 = (short)uVar14 + 1;
                            uVar14 = (ulonglong)uVar13;
                          } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                        }
                        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805e1d09:
                        uStack_198 = uVar6;
                        uStack_190 = uVar1;
                        (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1]);
                        UnityEngine_UIElements_VisualElement__Add
                                  (lVar5,*(undefined8 *)(param_1 + 0xf0),0);
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        lVar7 = SparkEstilo__Painel__180721ce0(0);
                        if (lVar7 != 0) {
                          lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          uVar6 = func_0x000182601c10(0x3f800000,0);
                          if (lVar10 != 0) {
                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                            UnityEngine_UIElements_VisualElement__Add(lVar5,lVar7,0);
                            lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                            if (lVar5 != 0) {
                              lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                              uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                              if (lVar10 != 0) {
                                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                                plVar8 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                                puVar9 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit
                                                   (&uStack_198,0x41b00000,0);
                                if (plVar8 != (longlong *)0x0) {
                                  lVar10 = *plVar8;
                                  uVar6 = *puVar9;
                                  uVar1 = *(undefined4 *)(puVar9 + 1);
                                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                    uVar14 = uVar15;
                                    do {
                                      if (*(longlong *)
                                           (*(longlong *)(lVar10 + 0xb0) + uVar14 * 0x10) ==
                                          TI_UnityEngine.UIElements.IStyle) {
                                        puVar9 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                           uVar14 * 0x10) + 0x43) * 0x10 + 0x138 +
                                                 lVar10);
                                        goto code_r0x0001805e1e89;
                                      }
                                      uVar13 = (short)uVar14 + 1;
                                      uVar14 = (ulonglong)uVar13;
                                    } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                                  }
                                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805e1e89:
                                  uStack_198 = uVar6;
                                  uStack_190 = uVar1;
                                  (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1]);
                                  lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                  if (lVar10 != 0) {
                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                                    plVar8 = (longlong *)
                                             UnityEngine_UIElements_VisualElement__get_style
                                                       (lVar5,0);
                                    puVar9 = (undefined8 *)
                                             UnityEngine_UIElements_StyleLength__op_Implicit
                                                       (&uStack_198,0x40c00000,0);
                                    if (plVar8 != (longlong *)0x0) {
                                      lVar10 = *plVar8;
                                      uVar6 = *puVar9;
                                      uVar1 = *(undefined4 *)(puVar9 + 1);
                                      if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                        uVar14 = uVar15;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar10 + 0xb0) + uVar14 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar9 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                                               uVar14 * 0x10) + 0x61) * 0x10 + 0x138
                                                     + lVar10);
                                            goto code_r0x0001805e1f59;
                                          }
                                          uVar13 = (short)uVar14 + 1;
                                          uVar14 = (ulonglong)uVar13;
                                        } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                                      }
                                      puVar9 = (undefined8 *)
                                               FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x61);
code_r0x0001805e1f59:
                                      uStack_198 = uVar6;
                                      uStack_190 = uVar1;
                                      (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1]);
                                      lVar10 = UnityEngine_UIElements_VisualElement__get_style
                                                         (lVar5,0);
                                      uVar6 = func_0x000182601c10(0x3f800000,0);
                                      if (lVar10 != 0) {
                                        FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                                        plVar8 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar5,0);
                                        lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                        uStack_198 = *(undefined8 *)(lVar10 + 0x30);
                                        uStack_190 = *(undefined4 *)(lVar10 + 0x38);
                                        uStack_18c = *(undefined4 *)(lVar10 + 0x3c);
                                        puVar9 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleColor__op_Implicit
                                                           (&uStack_188,&uStack_198,0);
                                        if (plVar8 != (longlong *)0x0) {
                                          lVar10 = *plVar8;
                                          uVar6 = *puVar9;
                                          uVar17 = puVar9[1];
                                          uVar1 = *(undefined4 *)(puVar9 + 2);
                                          if (*(ushort *)(lVar10 + 0x12e) != 0) {
                                            uVar14 = uVar15;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar10 + 0xb0) + uVar14 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar9 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8
                                                                   + uVar14 * 0x10) + 0x15) * 0x10 +
                                                          0x138 + lVar10);
                                                goto code_r0x0001805e2049;
                                              }
                                              uVar13 = (short)uVar14 + 1;
                                              uVar14 = (ulonglong)uVar13;
                                            } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
                                          }
                                          puVar9 = (undefined8 *)
                                                   FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x15);
code_r0x0001805e2049:
                                          uStack_188 = uVar6;
                                          uStack_180 = uVar17;
                                          uStack_178 = uVar1;
                                          (*(code *)*puVar9)(plVar8,&uStack_188,puVar9[1]);
                                          SparkEstilo__CabecalhoDeLista__18071f010(lVar5,0);
                                          lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_198 = *(undefined8 *)(lVar10 + 0x50);
                                          uStack_190 = *(undefined4 *)(lVar10 + 0x58);
                                          uStack_18c = *(undefined4 *)(lVar10 + 0x5c);
                                          uStack_138 = 0;
                                          uStack_148 = 0;
                                          uStack_140 = 0;
                                          func_0x000180cb7cb0(&uStack_148,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor
                                                             );
                                          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          uStack_188 = uStack_148;
                                          uStack_180 = uStack_140;
                                          uStack_178 = uStack_138;
                                          uVar6 = ClanWindow__Coluna(LIT_"''",0xe,&uStack_188,
                                                                     0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
                                          lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_198 = *(undefined8 *)(lVar10 + 0x50);
                                          uStack_190 = *(undefined4 *)(lVar10 + 0x58);
                                          uStack_18c = *(undefined4 *)(lVar10 + 0x5c);
                                          uStack_120 = 0;
                                          uStack_130 = 0;
                                          uStack_128 = 0;
                                          func_0x000180cb7cb0(&uStack_130,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor
                                                             );
                                          uStack_188 = uStack_130;
                                          uStack_180 = uStack_128;
                                          uStack_178 = uStack_120;
                                          uVar6 = ClanWindow__Coluna(LIT_"'Name'",0x96,
                                                                     &uStack_188,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
                                          lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_198 = *(undefined8 *)(lVar10 + 0x50);
                                          uStack_190 = *(undefined4 *)(lVar10 + 0x58);
                                          uStack_18c = *(undefined4 *)(lVar10 + 0x5c);
                                          uStack_108 = 0;
                                          uStack_118 = 0;
                                          uStack_110 = 0;
                                          func_0x000180cb7cb0(&uStack_118,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor
                                                             );
                                          uStack_188 = uStack_118;
                                          uStack_180 = uStack_110;
                                          uStack_178 = uStack_108;
                                          uVar6 = ClanWindow__Coluna(LIT_"'Lv'",0x22,
                                                                     &uStack_188,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
                                          lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                          uStack_198 = *(undefined8 *)(lVar10 + 0x50);
                                          uStack_190 = *(undefined4 *)(lVar10 + 0x58);
                                          uStack_18c = *(undefined4 *)(lVar10 + 0x5c);
                                          uStack_f0 = 0;
                                          uStack_100 = 0;
                                          uStack_f8 = 0;
                                          func_0x000180cb7cb0(&uStack_100,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor
                                                             );
                                          uStack_178 = uStack_f0;
                                          uStack_188 = uStack_100;
                                          uStack_180 = uStack_f8;
                                          uVar6 = ClanWindow__Coluna(LIT_"'Class'",0x28,
                                                                     &uStack_188,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
                                          UnityEngine_UIElements_VisualElement__Add(lVar7,lVar5,0);
                                          uVar6 = SparkEstilo__Lista__1807211b0(0);
                                          *(undefined8 *)(param_1 + 0xf8) = uVar6;
                                          func_0x000180314690(param_1 + 0xf8,uVar6);
                                          UnityEngine_UIElements_VisualElement__Add
                                                    (lVar7,*(undefined8 *)(param_1 + 0xf8),0);
                                          lVar5 = SparkEstilo__Painel__180721ce0(0);
                                          if (lVar5 != 0) {
                                            plVar8 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar5,0);
                                            puVar9 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (&uStack_198,0x43680000,0);
                                            if (plVar8 != (longlong *)0x0) {
                                              lVar7 = *plVar8;
                                              uVar6 = *puVar9;
                                              uVar1 = *(undefined4 *)(puVar9 + 1);
                                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar7 + 0xb0) + uVar15 * 0x10)
                                                      == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar9 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar7 + 0xb0)
                                                                        + 8 + uVar15 * 0x10) + 0xad)
                                                              * 0x10 + 0x138 + lVar7);
                                                    goto code_r0x0001805e2319;
                                                  }
                                                  uVar13 = (short)uVar15 + 1;
                                                  uVar15 = (ulonglong)uVar13;
                                                } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                              }
                                              puVar9 = (undefined8 *)
                                                       FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805e2319:
                                              uStack_198 = uVar6;
                                              uStack_190 = uVar1;
                                              (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1]);
                                              lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                              uVar6 = func_0x000182601c10(0,0);
                                              if (lVar7 != 0) {
                                                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                SparkEstilo__Espaco__18071fb80
                                                          (lVar5,0x41200000,0x41200000,0x41200000,
                                                           CONCAT44(uVar18,0x41200000),0);
                                                UnityEngine_UIElements_VisualElement__Add
                                                          (lVar4,lVar5,0);
                                                lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                uStack_198 = *(undefined8 *)(lVar7 + 0x50);
                                                uStack_190 = *(undefined4 *)(lVar7 + 0x58);
                                                uStack_18c = *(undefined4 *)(lVar7 + 0x5c);
                                                uStack_d8 = 0;
                                                uStack_e8 = 0;
                                                uStack_e0 = 0;
                                                func_0x000180cb7cb0(&uStack_e8,&uStack_198,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_188 = uStack_e8;
                                                uStack_180 = uStack_e0;
                                                uStack_178 = uStack_d8;
                                                uVar6 = SparkEstilo__Texto__180722af0
                                                                  (LIT_"'Select a member to see the details.'",0xb,
                                                                   &uStack_188,0,0);
                                                *(undefined8 *)(param_1 + 0x118) = uVar6;
                                                func_0x000180314690(param_1 + 0x118,uVar6);
                                                if (*(longlong *)(param_1 + 0x118) != 0) {
                                                  lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x118),0);
                                                  uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x118),0);
                                                    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (uVar6,0);
                                                    *(undefined8 *)(param_1 + 0x110) = uVar6;
                                                    func_0x000180314690(param_1 + 0x110,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x110),0);
                                                    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar5,0);
                                                    if (lVar5 != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (uVar6,0);
                                                    *(undefined8 *)(param_1 + 0x160) = uVar6;
                                                    func_0x000180314690(param_1 + 0x160,uVar6);
                                                    if (*(longlong *)(param_1 + 0x160) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x160),0);
                                                  if (*(longlong *)(param_1 + 0x160) != 0) {
                                                    plVar11 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x160),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x41c00000,0);
                                                  if (plVar11 != (longlong *)0x0) {
                                                    lVar7 = *plVar11;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x43) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805e2629;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,
                                                                           0x43);
code_r0x0001805e2629:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar11,&uStack_198,puVar9[1]
                                                                      );
                                                    if (plVar8 != (longlong *)0x0) {
                                                      lVar7 = *plVar8;
                                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                        uVar13 = 0;
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar7 + 0xb0) +
                                                               (ulonglong)uVar13 * 0x10) ==
                                                              TI_UnityEngine.UIElements.IStyle) {
                                                            puVar9 = (undefined8 *)
                                                                     ((longlong)
                                                                      (*(int *)(*(longlong *)
                                                                                 (lVar7 + 0xb0) + 8
                                                                               + (ulonglong)uVar13 *
                                                                                 0x10) + 0xad) *
                                                                      0x10 + 0x138 + lVar7);
                                                            goto code_r0x0001805e2699;
                                                          }
                                                          uVar13 = uVar13 + 1;
                                                        } while (uVar13 < *(ushort *)(lVar7 + 0x12e)
                                                                );
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                             0xad);
code_r0x0001805e2699:
                                                      uStack_198 = uVar6;
                                                      uStack_190 = uVar18;
                                                      (*(code *)*puVar9)(plVar8,&uStack_198,
                                                                         puVar9[1]);
                                                      if (*(longlong *)(param_1 + 0x160) != 0) {
                                                        plVar8 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x160),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x41000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x4f) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805e2749;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4f);
code_r0x0001805e2749:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x160),0);
                                                    lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar7,0);
                                                    if (lVar7 != 0) {
                                                      lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                                  uVar6 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar10 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6);
                                                    lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_198 = *(undefined8 *)(lVar10 + 0x70);
                                                    uStack_190 = *(undefined4 *)(lVar10 + 0x78);
                                                    uStack_18c = *(undefined4 *)(lVar10 + 0x7c);
                                                    uStack_c0 = 0;
                                                    uStack_d0 = 0;
                                                    uStack_c8 = 0;
                                                    func_0x000180cb7cb0(&uStack_d0,&uStack_198,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_188 = uStack_d0;
                                                    uStack_180 = uStack_c8;
                                                    uStack_178 = uStack_c0;
                                                    uVar6 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"''",0xe,
                                                                       &uStack_188,1,0);
                                                    *(undefined8 *)(param_1 + 0x120) = uVar6;
                                                    func_0x000180314690(param_1 + 0x120,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar7,uVar6,0);
                                                    lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar10,0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar10,0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                                                    lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar10,0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                                                    lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_198 = *(undefined8 *)(lVar12 + 0x50);
                                                    uStack_190 = *(undefined4 *)(lVar12 + 0x58);
                                                    uStack_18c = *(undefined4 *)(lVar12 + 0x5c);
                                                    uStack_a8 = 0;
                                                    uStack_b8 = 0;
                                                    uStack_b0 = 0;
                                                    func_0x000180cb7cb0(&uStack_b8,&uStack_198,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_188 = uStack_b8;
                                                    uStack_180 = uStack_b0;
                                                    uStack_178 = uStack_a8;
                                                    uVar6 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"''",0xb,
                                                                       &uStack_188,0,0);
                                                    *(undefined8 *)(param_1 + 0x128) = uVar6;
                                                    func_0x000180314690(param_1 + 0x128,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar10,uVar6,0);
                                                    lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_198 = *(undefined8 *)(lVar12 + 0x80);
                                                    uStack_190 = *(undefined4 *)(lVar12 + 0x88);
                                                    uStack_18c = *(undefined4 *)(lVar12 + 0x8c);
                                                    uStack_90 = 0;
                                                    uStack_a0 = 0;
                                                    uStack_98 = 0;
                                                    func_0x000180cb7cb0(&uStack_a0,&uStack_198,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_188 = uStack_a0;
                                                    uStack_180 = uStack_98;
                                                    uStack_178 = uStack_90;
                                                    uVar6 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"''",0xb,
                                                                       &uStack_188,0,0);
                                                    *(undefined8 *)(param_1 + 0x130) = uVar6;
                                                    func_0x000180314690(param_1 + 0x130,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar10,uVar6,0);
                                                    if (*(longlong *)(param_1 + 0x130) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x130),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x41000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar12 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar12 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar12 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar12 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x4d) * 0x10 +
                                                                    0x138 + lVar12);
                                                          goto code_r0x0001805e2ab9;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar12 + 0x12e))
                                                      ;
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x0001805e2ab9:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar7,lVar10,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,lVar7,0);
                                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x110),
                                                                 lVar5,0);
                                                      lVar5 = *(longlong *)(param_1 + 0x110);
                                                      uVar6 = ClanWindow__Divisoria(0);
                                                      if (lVar5 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar5,uVar6,0);
                                                        lVar5 = *(longlong *)(param_1 + 0x110);
                                                        uVar6 = ClanWindow__Campo(
                                                  LIT_"'Title'",param_1 + 0x138,0);
                                                  if (lVar5 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar6,0);
                                                    lVar5 = *(longlong *)(param_1 + 0x110);
                                                    uVar6 = ClanWindow__Campo(LIT_"'Rank'",
                                                                              param_1 + 0x140,0);
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,uVar6,0);
                                                      lVar5 = *(longlong *)(param_1 + 0x110);
                                                      uVar6 = ClanWindow__Campo(LIT_"'Unit'"
                                                                                ,param_1 + 0x148,0);
                                                      if (lVar5 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar5,uVar6,0);
                                                        lVar5 = *(longlong *)(param_1 + 0x110);
                                                        lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8)
                                                        ;
                                                        uStack_198 = *(undefined8 *)(lVar7 + 0x50);
                                                        uStack_190 = *(undefined4 *)(lVar7 + 0x58);
                                                        uStack_18c = *(undefined4 *)(lVar7 + 0x5c);
                                                        uStack_158 = 0;
                                                        uStack_168 = 0;
                                                        uStack_160 = 0;
                                                        func_0x000180cb7cb0(&uStack_168,&uStack_198,
                                                                            MR_System.Nullable<UnityEngine.Color>..ctor);
                                                        uStack_188 = uStack_168;
                                                        uStack_180 = uStack_160;
                                                        uStack_178 = uStack_158;
                                                        uVar6 = SparkEstilo__Texto__180722af0
                                                                          (LIT_"''",0xb,
                                                                           &uStack_188,0,0);
                                                        *(undefined8 *)(param_1 + 0x150) = uVar6;
                                                        func_0x000180314690(param_1 + 0x150,uVar6);
                                                        if (lVar5 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar5,uVar6,0);
                                                          if (*(longlong *)(param_1 + 0x150) != 0) {
                                                            plVar8 = (longlong *)
                                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x150),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x40000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar5 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x51) * 0x10 +
                                                                    0x138 + lVar5);
                                                          goto code_r0x0001805e2d09;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805e2d09:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    lVar5 = *(longlong *)(param_1 + 0x110);
                                                    uVar6 = ClanWindow__Divisoria(0);
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,uVar6,0);
                                                      uVar6 = ClanWindow__LinhaDeEdicao(0);
                                                      *(undefined8 *)(param_1 + 0x168) = uVar6;
                                                      func_0x000180314690(param_1 + 0x168,uVar6);
                                                      uVar6 = SparkEstilo__Campo__18071f2b0
                                                                        (0x10,0x88,0);
                                                      *(undefined8 *)(param_1 + 0x180) = uVar6;
                                                      func_0x000180314690(param_1 + 0x180,uVar6);
                                                      if (*(longlong *)(param_1 + 0x168) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x168),
                                                                   *(undefined8 *)(param_1 + 0x180),
                                                                   0);
                                                        lVar5 = *(longlong *)(param_1 + 0x168);
                                                        uVar6 = func_0x000180315580(TI_System.Action);
                                                        FUN_1816a9c60(uVar6,param_1,
                                                                      MD_ClanWindow._MontaMembros_b__63_0,0);
                                                        uVar17 = 0;
                                                        uVar6 = SparkEstilo__Botao__18071e130
                                                                          (LIT_"'Set Title'",
                                                                           uVar6,0x46,0,0);
                                                        uVar6 = ClanWindow__Pequeno(uVar6,0);
                                                        if (lVar5 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar5,uVar6,0);
                                                          if (*(longlong *)(param_1 + 0x110) != 0) {
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (*(longlong *)(param_1 + 0x110),
                                                             *(undefined8 *)(param_1 + 0x168),0);
                                                  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
                                                  FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<string>..ctor);
                                                  iVar16 = 2;
                                                  do {
                                                    if (*(int *)(TI_SparkClan + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar6 = SparkClan__NomeDoRank(iVar16,0);
                                                    lVar7 = MR_System.Collections.Generic.List<string>.Add;
                                                    if (lVar5 == 0) {
code_r0x0001805e3913:
                                                      FUN_1803155d0();
                                                      pcVar3 = (code *)swi(3);
                                                      lVar4 = (*pcVar3)();
                                                      return lVar4;
                                                    }
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    lVar10 = *(longlong *)(lVar5 + 0x10);
                                                    if (lVar10 == 0) goto code_r0x0001805e3913;
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                                                        FUN_1803155c0();
                                                        pcVar3 = (code *)swi(3);
                                                        lVar4 = (*pcVar3)();
                                                        return lVar4;
                                                      }
                                                      *(undefined8 *)
                                                       (lVar10 + 0x20 + (longlong)(int)uVar2 * 8) =
                                                           uVar6;
                                                      func_0x000180314690(lVar10 + (longlong)
                                                                                   (int)uVar2 * 8 +
                                                                          0x20);
                                                    }
                                                    else {
                                                      FUN_181645af0(lVar5,uVar6,
                                                                    *(undefined8 *)
                                                                     (*(longlong *)
                                                                       (*(longlong *)(lVar7 + 0x20)
                                                                       + 0xc0) + 0x70));
                                                    }
                                                    uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20)
                                                    ;
                                                    iVar16 = iVar16 + 1;
                                                  } while (iVar16 < 9);
                                                  if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar6 = ClanWindow__LinhaDeEdicao(0);
                                                  *(undefined8 *)(param_1 + 0x170) = uVar6;
                                                  func_0x000180314690(param_1 + 0x170,uVar6);
                                                  lVar7 = *(longlong *)(param_1 + 0x170);
                                                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  uVar6 = SparkEstilo__Seletor__180722450
                                                                    (lVar5,0,param_1 + 0x188,
                                                                     param_1 + 0x198,
                                                                     CONCAT44(uVar18,0x88),0);
                                                  if (lVar7 != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar7,uVar6,0);
                                                    lVar5 = *(longlong *)(param_1 + 0x170);
                                                    uVar6 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar6,param_1,MD_ClanWindow._MontaMembros_b__63_1
                                                                  ,0);
                                                    uVar18 = 0;
                                                    uVar6 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Set Rank'",uVar6,
                                                                       0x46,0,0);
                                                    uVar6 = ClanWindow__Pequeno(uVar6,0);
                                                    if (lVar5 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (lVar5,uVar6,0);
                                                      if (*(longlong *)(param_1 + 0x110) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x110),
                                                                   *(undefined8 *)(param_1 + 0x170),
                                                                   0);
                                                        uVar6 = ClanWindow__LinhaDeEdicao(0);
                                                        *(undefined8 *)(param_1 + 0x178) = uVar6;
                                                        func_0x000180314690(param_1 + 0x178,uVar6);
                                                        lVar5 = *(longlong *)(param_1 + 0x178);
                                                        uVar6 = SparkEstilo__Seletor__180722450
                                                                          (*(undefined8 *)
                                                                            (param_1 + 0x1a8),0,
                                                                           param_1 + 400,
                                                                           param_1 + 0x1a0,
                                                                           CONCAT44(uVar18,0x88),0);
                                                        if (lVar5 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar5,uVar6,0);
                                                          lVar5 = *(longlong *)(param_1 + 0x178);
                                                          uVar6 = func_0x000180315580(TI_System.Action
                                                                                     );
                                                          FUN_1816a9c60(uVar6,param_1,
                                                                        MD_ClanWindow._MontaMembros_b__63_2,0);
                                                          uVar6 = SparkEstilo__Botao__18071e130
                                                                            (LIT_"'Move'",
                                                                             uVar6,0x46,0,0);
                                                          uVar6 = ClanWindow__Pequeno(uVar6,0);
                                                          if (lVar5 != 0) {
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar5,uVar6,0);
                                                  if (*(longlong *)(param_1 + 0x110) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0x110),
                                                               *(undefined8 *)(param_1 + 0x178),0);
                                                    lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                    uStack_198 = *(undefined8 *)(lVar5 + 0x50);
                                                    uStack_190 = *(undefined4 *)(lVar5 + 0x58);
                                                    uStack_18c = *(undefined4 *)(lVar5 + 0x5c);
                                                    uStack_78 = 0;
                                                    uStack_88 = 0;
                                                    uStack_80 = 0;
                                                    func_0x000180cb7cb0(&uStack_88,&uStack_198,
                                                                        MR_System.Nullable<UnityEngine.Color>..ctor);
                                                    uStack_168 = uStack_88;
                                                    uStack_160 = uStack_80;
                                                    uStack_158 = uStack_78;
                                                    lVar5 = SparkEstilo__Texto__180722af0
                                                                      (LIT_"'Privileges'",10,
                                                                       &uStack_168,1,0);
                                                    if (lVar5 != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x41000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x51) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805e3369;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805e3369:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x110),
                                                                 lVar5,0);
                                                      lVar5 = *(longlong *)(param_1 + 0x110);
                                                      lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_198 = *(undefined8 *)(lVar7 + 0x40);
                                                      uStack_190 = *(undefined4 *)(lVar7 + 0x48);
                                                      uStack_18c = *(undefined4 *)(lVar7 + 0x4c);
                                                      uStack_178 = 0;
                                                      uStack_188 = 0;
                                                      uStack_180 = 0;
                                                      func_0x000180cb7cb0(&uStack_188,&uStack_198,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_168 = uStack_188;
                                                      uStack_160 = uStack_180;
                                                      uStack_158 = uStack_178;
                                                      uVar6 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xb,
                                                                         &uStack_168,0,0);
                                                      *(undefined8 *)(param_1 + 0x158) = uVar6;
                                                      func_0x000180314690(param_1 + 0x158,uVar6);
                                                      if (lVar5 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar5,uVar6,0);
                                                        if (*(longlong *)(param_1 + 0x158) != 0) {
                                                          lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x158),0);
                                                  uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    if (*(longlong *)(param_1 + 0x158) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x158),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x40000000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar5 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar5 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar5 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x51) * 0x10 +
                                                                    0x138 + lVar5);
                                                          goto code_r0x0001805e3519;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar5 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805e3519:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                    UnityEngine_UIElements_VisualElement___ctor
                                                              (lVar5,0);
                                                    if (lVar5 != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                                                    plVar8 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x41200000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x51) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805e3619;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x0001805e3619:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    uVar6 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar6,param_1,MD_ClanWindow._MontaMembros_b__63_3
                                                                  ,0);
                                                    uVar6 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Party Invite'",uVar6,
                                                                       0x68,0,0);
                                                    *(undefined8 *)(param_1 + 0x1b8) = uVar6;
                                                    func_0x000180314690(param_1 + 0x1b8,uVar6);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,uVar6,0);
                                                    uVar6 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar6,param_1,MD_ClanWindow._MontaMembros_b__63_4
                                                                  ,0);
                                                    uVar6 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Dismiss'",uVar6,
                                                                       0x68,1,0);
                                                    *(undefined8 *)(param_1 + 0x1c0) = uVar6;
                                                    func_0x000180314690(param_1 + 0x1c0,uVar6);
                                                    if (*(longlong *)(param_1 + 0x1c0) != 0) {
                                                      plVar8 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x1c0),0);
                                                  puVar9 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_198,0x40800000,0);
                                                  if (plVar8 != (longlong *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar6 = *puVar9;
                                                    uVar18 = *(undefined4 *)(puVar9 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar13 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar13 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar9 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar13 *
                                                                             0x10) + 0x4d) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x0001805e3789;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                      } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x0001805e3789:
                                                    uStack_198 = uVar6;
                                                    uStack_190 = uVar18;
                                                    (*(code *)*puVar9)(plVar8,&uStack_198,puVar9[1])
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)
                                                                      (param_1 + 0x1c0),0);
                                                    if (*(longlong *)(param_1 + 0x110) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x110),
                                                                 lVar5,0);
                                                      if (*(longlong *)(param_1 + 0x110) != 0) {
                                                        lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x110),0);
                                                  uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    return lVar4;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  FUN_1803155d0();
                                                  pcVar3 = (code *)swi(3);
                                                  lVar4 = (*pcVar3)();
                                                  return lVar4;
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
                                                  pcVar3 = (code *)swi(3);
                                                  lVar4 = (*pcVar3)();
                                                  return lVar4;
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
  lVar4 = (*pcVar3)();
  return lVar4;
}

