// SparkEnchantSkillWindow__MontaInfo__180709710 @ 0x180709710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantSkillWindow__MontaInfo__180709710(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar11;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar12;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
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
  ulonglong uVar10;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  if (cRam00000001834b4148 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MD_SparkEnchantSkillWindow.Aprende);
    FUN_180315380(MD_SparkEnchantSkillWindow._MontaInfo_b__50_0);
    FUN_180315380(TI_SparkEnchantSkillWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'XP'");
    FUN_180315380(LIT_"'Success Rate'");
    FUN_180315380(LIT_"'Required SP'");
    FUN_180315380(LIT_"'Req. XP'");
    FUN_180315380(LIT_"'Requirements'");
    FUN_180315380(LIT_"'List'");
    FUN_180315380(LIT_"'Learn'");
    FUN_180315380(LIT_"'SP'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4148 = '\x01';
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkEstilo__Painel__180721ce0(0);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  func_0x000180314690(param_1 + 0x98,uVar3);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
    uVar3 = func_0x000182601c10(0x3f800000,0);
    if (lVar4 != 0) {
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
      if (*(longlong *)(param_1 + 0x98) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_108,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *plVar5;
          uVar11 = 0;
          uVar3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            uVar10 = uVar11;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar10 * 0x10) + 0x57) * 0x10
                          + 0x138 + lVar4);
                goto code_r0x0001807099a9;
              }
              uVar9 = (short)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x0001807099a9:
          uStack_108 = uVar3;
          uStack_100 = uVar1;
          (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
          if (*(longlong *)(param_1 + 0x98) != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0)
            ;
            uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
            if (lVar4 != 0) {
              FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
              SparkEstilo__Espaco__18071fb80
                        (*(undefined8 *)(param_1 + 0x98),0x41000000,0x41200000,0x41000000,
                         CONCAT44(uVar12,0x41200000),0);
              lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
              if (lVar4 != 0) {
                lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                if (lVar7 != 0) {
                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                  if (lVar7 != 0) {
                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                    uVar3 = func_0x000182601c10(0,0);
                    if (lVar7 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                      if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar3 = SparkEnchantSkillWindow__Icone(0);
                      *(undefined8 *)(param_1 + 0xc0) = uVar3;
                      func_0x000180314690(param_1 + 0xc0,uVar3);
                      UnityEngine_UIElements_VisualElement__Add
                                (lVar4,*(undefined8 *)(param_1 + 0xc0),0);
                      lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                      if (lVar7 != 0) {
                        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                        uVar3 = func_0x000182601c10(0x3f800000,0);
                        if (lVar8 != 0) {
                          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                          uVar3 = func_0x000182601c10(0x3f800000,0);
                          if (lVar8 != 0) {
                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                            plVar5 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            puVar6 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                               (&uStack_108,0x40c00000,0);
                            if (plVar5 != (longlong *)0x0) {
                              lVar8 = *plVar5;
                              uVar3 = *puVar6;
                              uVar12 = *(undefined4 *)(puVar6 + 1);
                              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                uVar10 = uVar11;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar10 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar6 = (undefined8 *)
                                             ((longlong)
                                              (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                       uVar10 * 0x10) + 0x4d) * 0x10 + 0x138 + lVar8
                                             );
                                    goto code_r0x000180709c69;
                                  }
                                  uVar9 = (short)uVar10 + 1;
                                  uVar10 = (ulonglong)uVar9;
                                } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                              }
                              puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180709c69:
                              uStack_108 = uVar3;
                              uStack_100 = uVar12;
                              (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
                              lVar8 = *(longlong *)(TI_SparkEstilo + 0xb8);
                              uStack_108 = *(undefined8 *)(lVar8 + 0x40);
                              uStack_100 = *(undefined4 *)(lVar8 + 0x48);
                              uStack_fc = *(undefined4 *)(lVar8 + 0x4c);
                              uStack_d8 = 0;
                              uStack_e8 = 0;
                              uStack_e0 = 0;
                              func_0x000180cb7cb0(&uStack_e8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
                              uStack_108 = uStack_e8;
                              uStack_100 = (undefined4)uStack_e0;
                              uStack_fc = uStack_e0._4_4_;
                              uStack_f8 = uStack_d8;
                              uVar3 = SparkEstilo__Texto__180722af0
                                                (LIT_"''",0xb,&uStack_108,1,0);
                              *(undefined8 *)(param_1 + 0xd8) = uVar3;
                              func_0x000180314690(param_1 + 0xd8,uVar3);
                              UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
                              lVar8 = *(longlong *)(TI_SparkEnchantSkillWindow + 0xb8);
                              uStack_108 = *(undefined8 *)(lVar8 + 0x18);
                              uStack_100 = *(undefined4 *)(lVar8 + 0x20);
                              uStack_fc = *(undefined4 *)(lVar8 + 0x24);
                              uStack_c0 = 0;
                              uStack_d0 = 0;
                              uStack_c8 = 0;
                              func_0x000180cb7cb0(&uStack_d0,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
                              uStack_108 = uStack_d0;
                              uStack_100 = (undefined4)uStack_c8;
                              uStack_fc = uStack_c8._4_4_;
                              uStack_f8 = uStack_c0;
                              uVar12 = 0;
                              uVar3 = SparkEstilo__Texto__180722af0
                                                (LIT_"''",0xb,&uStack_108,0,0);
                              *(undefined8 *)(param_1 + 0xe0) = uVar3;
                              func_0x000180314690(param_1 + 0xe0,uVar3);
                              UnityEngine_UIElements_VisualElement__Add(lVar7,uVar3,0);
                              if (*(longlong *)(param_1 + 0xe0) != 0) {
                                plVar5 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(param_1 + 0xe0),0);
                                puVar6 = (undefined8 *)
                                         UnityEngine_UIElements_StyleLength__op_Implicit
                                                   (&uStack_108,0x40400000,0);
                                if (plVar5 != (longlong *)0x0) {
                                  lVar8 = *plVar5;
                                  uVar3 = *puVar6;
                                  uVar1 = *(undefined4 *)(puVar6 + 1);
                                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                    uVar10 = uVar11;
                                    do {
                                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar10 * 0x10)
                                          == TI_UnityEngine.UIElements.IStyle) {
                                        puVar6 = (undefined8 *)
                                                 ((longlong)
                                                  (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                           uVar10 * 0x10) + 0x51) * 0x10 + 0x138 +
                                                 lVar8);
                                        goto code_r0x000180709e39;
                                      }
                                      uVar9 = (short)uVar10 + 1;
                                      uVar10 = (ulonglong)uVar9;
                                    } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                  }
                                  puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180709e39:
                                  uStack_108 = uVar3;
                                  uStack_100 = uVar1;
                                  (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
                                  UnityEngine_UIElements_VisualElement__Add(lVar4,lVar7,0);
                                  if (*(longlong *)(param_1 + 0x98) != 0) {
                                    UnityEngine_UIElements_VisualElement__Add
                                              (*(longlong *)(param_1 + 0x98),lVar4,0);
                                    lVar4 = *(longlong *)(param_1 + 0x98);
                                    uVar3 = SparkEnchantSkillWindow__Par
                                                      (LIT_"'Success Rate'",param_1 + 0xe8,8,0);
                                    if (lVar4 != 0) {
                                      UnityEngine_UIElements_VisualElement__Add(lVar4,uVar3,0);
                                      lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                      UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
                                      if (lVar4 != 0) {
                                        plVar5 = (longlong *)
                                                 UnityEngine_UIElements_VisualElement__get_style
                                                           (lVar4,0);
                                        puVar6 = (undefined8 *)
                                                 UnityEngine_UIElements_StyleLength__op_Implicit
                                                           (&uStack_108,0x42d00000,0);
                                        if (plVar5 != (longlong *)0x0) {
                                          lVar7 = *plVar5;
                                          uVar3 = *puVar6;
                                          uVar1 = *(undefined4 *)(puVar6 + 1);
                                          if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                            uVar10 = uVar11;
                                            do {
                                              if (*(longlong *)
                                                   (*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) ==
                                                  TI_UnityEngine.UIElements.IStyle) {
                                                puVar6 = (undefined8 *)
                                                         ((longlong)
                                                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8
                                                                   + uVar10 * 0x10) + 0x43) * 0x10 +
                                                          0x138 + lVar7);
                                                goto code_r0x000180709f59;
                                              }
                                              uVar9 = (short)uVar10 + 1;
                                              uVar10 = (ulonglong)uVar9;
                                            } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                          }
                                          puVar6 = (undefined8 *)
                                                   FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180709f59:
                                          uStack_108 = uVar3;
                                          uStack_100 = uVar1;
                                          (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
                                          lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                          uVar3 = func_0x000182601c10(0,0);
                                          if (lVar7 != 0) {
                                            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                            plVar5 = (longlong *)
                                                     UnityEngine_UIElements_VisualElement__get_style
                                                               (lVar4,0);
                                            puVar6 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (&uStack_108,0x40c00000,0);
                                            if (plVar5 != (longlong *)0x0) {
                                              lVar7 = *plVar5;
                                              uVar3 = *puVar6;
                                              uVar1 = *(undefined4 *)(puVar6 + 1);
                                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                uVar10 = uVar11;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10)
                                                      == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar6 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar7 + 0xb0)
                                                                        + 8 + uVar10 * 0x10) + 0x51)
                                                              * 0x10 + 0x138 + lVar7);
                                                    goto code_r0x00018070a029;
                                                  }
                                                  uVar9 = (short)uVar10 + 1;
                                                  uVar10 = (ulonglong)uVar9;
                                                } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                              }
                                              puVar6 = (undefined8 *)
                                                       FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018070a029:
                                              uStack_108 = uVar3;
                                              uStack_100 = uVar1;
                                              (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1]);
                                              lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                              uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                                              if (lVar7 != 0) {
                                                FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                SparkEstilo__Moldura__180721b40(lVar4,0);
                                                SparkEstilo__Espaco__18071fb80
                                                          (lVar4,0x40800000,0x40c00000,0x40800000,
                                                           CONCAT44(uVar12,0x40c00000),0);
                                                lVar7 = *(longlong *)(TI_SparkEnchantSkillWindow + 0xb8);
                                                uStack_108 = *(undefined8 *)(lVar7 + 0x28);
                                                uStack_100 = *(undefined4 *)(lVar7 + 0x30);
                                                uStack_fc = *(undefined4 *)(lVar7 + 0x34);
                                                uStack_a8 = 0;
                                                uStack_b8 = 0;
                                                uStack_b0 = 0;
                                                func_0x000180cb7cb0(&uStack_b8,&uStack_108,
                                                                    MR_System.Nullable<UnityEngine.Color>..ctor);
                                                uStack_108 = uStack_b8;
                                                uStack_100 = (undefined4)uStack_b0;
                                                uStack_fc = uStack_b0._4_4_;
                                                uStack_f8 = uStack_a8;
                                                uVar3 = SparkEstilo__Texto__180722af0
                                                                  (LIT_"''",0xb,&uStack_108,0,
                                                                   0);
                                                *(undefined8 *)(param_1 + 0xf0) = uVar3;
                                                func_0x000180314690(param_1 + 0xf0,uVar3);
                                                if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                  lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xf0),0);
                                                  uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    if (*(longlong *)(param_1 + 0xf0) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xf0),0);
                                                  uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x6f)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x00018070a1f9;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x6f);
code_r0x00018070a1f9:
                                                    (*(code *)*puVar6)(plVar5,uVar3,puVar6[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,*(undefined8 *)(param_1 + 0xf0)
                                                               ,0);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x98),lVar4
                                                                 ,0);
                                                      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_108 = *(undefined8 *)(lVar4 + 0x40);
                                                      uStack_100 = *(undefined4 *)(lVar4 + 0x48);
                                                      uStack_fc = *(undefined4 *)(lVar4 + 0x4c);
                                                      uStack_90 = 0;
                                                      uStack_a0 = 0;
                                                      uStack_98 = 0;
                                                      func_0x000180cb7cb0(&uStack_a0,&uStack_108,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_108 = uStack_a0;
                                                      uStack_100 = (undefined4)uStack_98;
                                                      uStack_fc = uStack_98._4_4_;
                                                      uStack_f8 = uStack_90;
                                                      lVar4 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"'Requirements'",0xb,
                                                                         &uStack_108,1,0);
                                                      if (lVar4 != 0) {
                                                        plVar5 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_108,0x41000000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar12 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x00018070a329;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018070a329:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar12;
                                                    (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1])
                                                    ;
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x98),lVar4
                                                                 ,0);
                                                      lVar4 = *(longlong *)(param_1 + 0x98);
                                                      uVar3 = SparkEnchantSkillWindow__Par
                                                                        (LIT_"'Req. XP'",
                                                                         param_1 + 0xf8,4,0);
                                                      if (lVar4 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar4,uVar3,0);
                                                        lVar4 = *(longlong *)(param_1 + 0x98);
                                                        uVar3 = SparkEnchantSkillWindow__Par
                                                                          (LIT_"'Required SP'",
                                                                           param_1 + 0x100,2,0);
                                                        if (lVar4 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar4,uVar3,0);
                                                          uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement
                                                                                     );
                                                                                                                    
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (uVar3,0);
                                                  *(undefined8 *)(param_1 + 0xd0) = uVar3;
                                                  func_0x000180314690(param_1 + 0xd0,uVar3);
                                                  if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                    lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_108,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar12 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar4);
                                                          goto code_r0x00018070a569;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018070a569:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar12;
                                                    (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1])
                                                    ;
                                                    uVar3 = SparkEnchantSkillWindow__Icone(0);
                                                    *(undefined8 *)(param_1 + 200) = uVar3;
                                                    func_0x000180314690(param_1 + 200,uVar3);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xd0),
                                                                 *(undefined8 *)(param_1 + 200),0);
                                                      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                                                      uStack_108 = *(undefined8 *)(lVar4 + 0x40);
                                                      uStack_100 = *(undefined4 *)(lVar4 + 0x48);
                                                      uStack_fc = *(undefined4 *)(lVar4 + 0x4c);
                                                      uStack_78 = 0;
                                                      uStack_88 = 0;
                                                      uStack_80 = 0;
                                                      func_0x000180cb7cb0(&uStack_88,&uStack_108,
                                                                          MR_System.Nullable<UnityEngine.Color>..ctor);
                                                      uStack_108 = uStack_88;
                                                      uStack_100 = (undefined4)uStack_80;
                                                      uStack_fc = uStack_80._4_4_;
                                                      uStack_f8 = uStack_78;
                                                      uVar3 = SparkEstilo__Texto__180722af0
                                                                        (LIT_"''",0xb,
                                                                         &uStack_108,0,0);
                                                      *(undefined8 *)(param_1 + 0x108) = uVar3;
                                                      func_0x000180314690(param_1 + 0x108,uVar3);
                                                      if (*(longlong *)(param_1 + 0x108) != 0) {
                                                        plVar5 = (longlong *)
                                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x108),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_108,0x40c00000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar4 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar12 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar4 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar4 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar4 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x4d)
                                                                    * 0x10 + 0x138 + lVar4);
                                                          goto code_r0x00018070a6c9;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar4 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x00018070a6c9:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar12;
                                                    (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1])
                                                    ;
                                                    if (*(longlong *)(param_1 + 0x108) != 0) {
                                                      lVar4 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x108),0);
                                                  uVar3 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar4 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar4,uVar3);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xd0),
                                                                 *(undefined8 *)(param_1 + 0x108),0)
                                                      ;
                                                      if (*(longlong *)(param_1 + 0x98) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0x98),
                                                                   *(undefined8 *)(param_1 + 0xd0),0
                                                                  );
                                                        lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                        UnityEngine_UIElements_VisualElement___ctor
                                                                  (lVar4,0);
                                                        if (lVar4 != 0) {
                                                          lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = func_0x000182601c10(0x3f800000,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x98),lVar4
                                                                 ,0);
                                                      lVar4 = *(longlong *)(param_1 + 0x98);
                                                      uVar3 = SparkEstilo__Divisor__18071f770(0);
                                                      if (lVar4 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (lVar4,uVar3,0);
                                                        lVar4 = *(longlong *)(param_1 + 0x98);
                                                        uVar3 = SparkEnchantSkillWindow__Par
                                                                          (LIT_"'XP'",
                                                                           param_1 + 0x118,4,0);
                                                        if (lVar4 != 0) {
                                                          UnityEngine_UIElements_VisualElement__Add
                                                                    (lVar4,uVar3,0);
                                                          lVar4 = *(longlong *)(param_1 + 0x98);
                                                          uVar3 = SparkEnchantSkillWindow__Par
                                                                            (LIT_"'SP'",
                                                                             param_1 + 0x110,2,0);
                                                          if (lVar4 != 0) {
                                                                                                                        
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar4,uVar3,0);
                                                  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                  UnityEngine_UIElements_VisualElement___ctor
                                                            (lVar4,0);
                                                  if (lVar4 != 0) {
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  uVar3 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar3);
                                                    plVar5 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar4,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_108,0x41000000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar12 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar10 = uVar11;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar10 * 0x10) + 0x51)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x00018070a9c9;
                                                        }
                                                        uVar9 = (short)uVar10 + 1;
                                                        uVar10 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x51);
code_r0x00018070a9c9:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar12;
                                                    (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1])
                                                    ;
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkEnchantSkillWindow.Aprende
                                                                  ,0);
                                                    uVar3 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'Learn'",uVar3,
                                                                       0x50,0,0);
                                                    *(undefined8 *)(param_1 + 0x120) = uVar3;
                                                    func_0x000180314690(param_1 + 0x120,uVar3);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,uVar3,0);
                                                    uVar3 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar3,param_1,MD_SparkEnchantSkillWindow._MontaInfo_b__50_0
                                                                  ,0);
                                                    lVar7 = SparkEstilo__Botao__18071e130
                                                                      (LIT_"'List'",uVar3,
                                                                       0x50,0,0);
                                                    if (lVar7 != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar7,0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_108,0x40800000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar8 = *plVar5;
                                                    uVar3 = *puVar6;
                                                    uVar12 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar8 + 0xb0) +
                                                             uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar8 + 0xb0) + 8 +
                                                                             uVar11 * 0x10) + 0x4d)
                                                                    * 0x10 + 0x138 + lVar8);
                                                          goto code_r0x00018070ab19;
                                                        }
                                                        uVar9 = (short)uVar11 + 1;
                                                        uVar11 = (ulonglong)uVar9;
                                                      } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x4d);
code_r0x00018070ab19:
                                                    uStack_108 = uVar3;
                                                    uStack_100 = uVar12;
                                                    (*(code *)*puVar6)(plVar5,&uStack_108,puVar6[1])
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar4,lVar7,0);
                                                    if (*(longlong *)(param_1 + 0x98) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0x98),lVar4
                                                                 ,0);
                                                      if (param_2 != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (param_2,*(undefined8 *)
                                                                            (param_1 + 0x98),0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

