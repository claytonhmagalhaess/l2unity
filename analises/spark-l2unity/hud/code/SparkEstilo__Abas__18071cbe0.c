// SparkEstilo__Abas__18071cbe0 @ 0x18071cbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkEstilo__Abas__18071cbe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong in_stack_fffffffffffffe68;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [112];
  
  if (cRam00000001834b41f7 == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass31_0._Abas_b__0);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass31_0);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__1);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__2);
    FUN_180315380(MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__3);
    FUN_180315380(TI_SparkEstilo.<>c__DisplayClass31_1);
    FUN_180315380(MR_System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>..ctor);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Tab/Tab_DF_Bg_line'");
    FUN_180315380(LIT_"'Tab/Tab_DF_Tab_Unselected'");
    cRam00000001834b41f7 = '\x01';
  }
  lVar9 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass31_0);
  Gear__UpdateWeaponType__1803dadf0(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x28) = param_3;
    func_0x000180314690(lVar9 + 0x28,param_3);
    lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
    if (lVar10 != 0) {
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      uVar12 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar11 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
        plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
        puVar14 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_178,0x41c80000,0);
        if (plVar13 != (longlong *)0x0) {
          lVar11 = *plVar13;
          uVar12 = *puVar14;
          uVar2 = *(undefined4 *)(puVar14 + 1);
          if (*(ushort *)(lVar11 + 0x12e) != 0) {
            uVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar14 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar11);
                goto code_r0x00018071cea9;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar11 + 0x12e));
          }
          puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071cea9:
          uStack_188 = uVar12;
          uStack_180 = uVar2;
          (*(code *)*puVar14)(plVar13,&uStack_188,puVar14[1]);
          lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          uVar12 = func_0x000182601c10(0,0);
          if (lVar11 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            uVar12 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
            if (lVar11 != 0) {
              FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
              if (param_1 != 0) {
                UnityEngine_UIElements_VisualElement__Add(param_1,lVar10,0);
                lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
                if (lVar11 != 0) {
                  plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                  puVar14 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit
                                      (&uStack_178,0x40000000,0);
                  if (plVar13 != (longlong *)0x0) {
                    lVar15 = *plVar13;
                    uVar12 = *puVar14;
                    uVar2 = *(undefined4 *)(puVar14 + 1);
                    if (*(ushort *)(lVar15 + 0x12e) != 0) {
                      uVar16 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10)
                            == TI_UnityEngine.UIElements.IStyle) {
                          puVar14 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                              (ulonglong)uVar16 * 0x10) + 0x43) * 0x10 + 0x138 +
                                    lVar15);
                          goto code_r0x00018071cff9;
                        }
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                    }
                    puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071cff9:
                    uStack_188 = uVar12;
                    uStack_180 = uVar2;
                    (*(code *)*puVar14)(plVar13,&uStack_188,puVar14[1]);
                    lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                    uVar12 = func_0x000182601c10(0,0);
                    if (lVar15 != 0) {
                      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar15,uVar12);
                      plVar13 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar12 = SparkEstilo__Textura__180723790(LIT_"'Tab/Tab_DF_Bg_line'",0);
                      puVar14 = (undefined8 *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&uStack_e8,uVar12,0);
                      if (plVar13 != (longlong *)0x0) {
                        lVar15 = *plVar13;
                        uVar5 = *puVar14;
                        uVar6 = puVar14[1];
                        uVar7 = puVar14[2];
                        uVar8 = puVar14[3];
                        uVar12 = puVar14[4];
                        if (*(ushort *)(lVar15 + 0x12e) != 0) {
                          uVar16 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar14 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                  (ulonglong)uVar16 * 0x10) + 0xb) * 0x10 + 0x138 +
                                        lVar15);
                              goto code_r0x00018071d0e9;
                            }
                            uVar16 = uVar16 + 1;
                          } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                        }
                        puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018071d0e9:
                        uStack_118 = uVar5;
                        uStack_110 = uVar6;
                        uStack_108 = uVar7;
                        uStack_100 = uVar8;
                        uStack_f8 = uVar12;
                        (*(code *)*puVar14)(plVar13,&uStack_118,puVar14[1]);
                        lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                        uVar12 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit);
                        if (lVar15 != 0) {
                          FUN_180005060(0xb0,TI_UnityEngine.UIElements.IStyle,lVar15,uVar12);
                          UnityEngine_UIElements_VisualElement__Add(param_1,lVar11,0);
                          uVar12 = func_0x000180315580(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>);
                          FUN_180bba2e0(uVar12,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>..ctor);
                          *(undefined8 *)(lVar9 + 0x20) = uVar12;
                          func_0x000180314690(lVar9 + 0x20,uVar12);
                          *(undefined8 *)(lVar9 + 0x18) = 0;
                          func_0x000180314690(lVar9 + 0x18,0);
                          *(undefined4 *)(lVar9 + 0x10) = 0xffffffff;
                          if (param_2 != 0) {
                            uVar18 = 0;
                            while( true ) {
                              if (*(int *)(param_2 + 0x18) <= (int)uVar18) {
                                uVar12 = func_0x000180315580(TI_System.Action<int>);
                                FUN_180b7db20(uVar12,lVar9,MD_SparkEstilo.__c__DisplayClass31_0._Abas_b__0,0);
                                *(undefined8 *)(lVar9 + 0x18) = uVar12;
                                func_0x000180314690(lVar9 + 0x18,uVar12);
                                return *(undefined8 *)(lVar9 + 0x18);
                              }
                              lVar11 = func_0x000180315580(TI_SparkEstilo.<>c__DisplayClass31_1);
                              Gear__UpdateWeaponType__1803dadf0(lVar11,0);
                              if (lVar11 == 0) break;
                              *(longlong *)(lVar11 + 0x28) = lVar9;
                              func_0x000180314690(lVar11 + 0x28,lVar9);
                              *(uint *)(lVar11 + 0x10) = uVar18;
                              uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                              UnityEngine_UIElements_VisualElement___ctor(uVar12,0);
                              *(undefined8 *)(lVar11 + 0x18) = uVar12;
                              func_0x000180314690(lVar11 + 0x18,uVar12);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              puVar14 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (auStack_b8,0x41c80000,0);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              uVar12 = *puVar14;
                              uVar2 = *(undefined4 *)(puVar14 + 1);
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 0x43) * 0x10 +
                                               0x138 + lVar15);
                                    goto code_r0x00018071d2c9;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071d2c9:
                              uStack_188 = uVar12;
                              uStack_180 = uVar2;
                              (*(code *)*puVar14)(plVar13,&uStack_188,puVar14[1]);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              puVar14 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (auStack_a8,0x42b00000,0);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              uVar12 = *puVar14;
                              uVar2 = *(undefined4 *)(puVar14 + 1);
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 0xad) * 0x10 +
                                               0x138 + lVar15);
                                    goto code_r0x00018071d369;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018071d369:
                              uStack_168 = uVar12;
                              uStack_160 = uVar2;
                              (*(code *)*puVar14)(plVar13,&uStack_168,puVar14[1]);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              puVar14 = (undefined8 *)
                                        UnityEngine_UIElements_StyleLength__op_Implicit
                                                  (auStack_98,0x3f800000,0);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              uVar12 = *puVar14;
                              uVar2 = *(undefined4 *)(puVar14 + 1);
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 0x4f) * 0x10 +
                                               0x138 + lVar15);
                                    goto code_r0x00018071d409;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018071d409:
                              uStack_178 = uVar12;
                              uStack_170 = uVar2;
                              (*(code *)*puVar14)(plVar13,&uStack_178,puVar14[1]);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 0x45) * 0x10 +
                                               0x138 + lVar15);
                                    goto code_r0x00018071d4a9;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x45);
code_r0x00018071d4a9:
                              (*(code *)*puVar14)(plVar13,uVar12,puVar14[1]);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              uVar12 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)
                                       (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        (ulonglong)uVar16 * 0x10) + 3) * 0x10 +
                                               0x138 + lVar15);
                                    goto code_r0x00018071d539;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,3);
code_r0x00018071d539:
                              (*(code *)*puVar14)(plVar13,uVar12,puVar14[1]);
                              uVar12 = *(undefined8 *)(lVar11 + 0x18);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar17 = 0;
                              SparkEstilo__Fatia__1807203e0
                                        (uVar12,5,0x18,5,
                                         in_stack_fffffffffffffe68 & 0xffffffff00000000,0);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              plVar13 = (longlong *)
                                        UnityEngine_UIElements_VisualElement__get_style
                                                  (*(longlong *)(lVar11 + 0x18),0);
                              uVar12 = SparkEstilo__Textura__180723790(LIT_"'Tab/Tab_DF_Tab_Unselected'",0);
                              puVar14 = (undefined8 *)
                                        UnityEngine_UIElements_StyleBackground__op_Implicit
                                                  (&uStack_e8,uVar12,0);
                              if (plVar13 == (longlong *)0x0) break;
                              lVar15 = *plVar13;
                              uVar5 = *puVar14;
                              uVar6 = puVar14[1];
                              uVar7 = puVar14[2];
                              uVar8 = puVar14[3];
                              uVar12 = puVar14[4];
                              if (*(ushort *)(lVar15 + 0x12e) != 0) {
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + uVar17 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar14 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 +
                                                        uVar17 * 0x10) + 0xb) * 0x10 + 0x138 +
                                              lVar15);
                                    goto code_r0x00018071d619;
                                  }
                                  uVar16 = (short)uVar17 + 1;
                                  uVar17 = (ulonglong)uVar16;
                                } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
                              }
                              puVar14 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018071d619:
                              uStack_e8 = uVar5;
                              uStack_e0 = uVar6;
                              uStack_d8 = uVar7;
                              uStack_d0 = uVar8;
                              uStack_c8 = uVar12;
                              (*(code *)*puVar14)(plVar13,&uStack_e8,puVar14[1]);
                              if (*(uint *)(param_2 + 0x18) <= uVar18) {
DAT_18071da46:
                                FUN_1803155c0();
                                pcVar4 = (code *)swi(3);
                                uVar12 = (*pcVar4)();
                                return uVar12;
                              }
                              uVar12 = *(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar18 * 8);
                              lVar15 = *(longlong *)(TI_SparkEstilo + 0xb8);
                              uStack_158 = *(undefined4 *)(lVar15 + 0x50);
                              uStack_154 = *(undefined4 *)(lVar15 + 0x54);
                              uStack_150 = *(undefined4 *)(lVar15 + 0x58);
                              uStack_14c = *(undefined4 *)(lVar15 + 0x5c);
                              uStack_138 = 0;
                              uStack_148 = 0;
                              uStack_140 = 0;
                              func_0x000180cb7cb0(&uStack_148,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
                              uStack_108 = CONCAT44(uStack_108._4_4_,uStack_138);
                              uStack_118 = uStack_148;
                              uStack_110 = uStack_140;
                              in_stack_fffffffffffffe68 = 0;
                              uVar12 = SparkEstilo__Texto__180722af0(uVar12,0xb,&uStack_118,0,0);
                              *(undefined8 *)(lVar11 + 0x20) = uVar12;
                              func_0x000180314690(lVar11 + 0x20,uVar12);
                              if (*(longlong *)(lVar11 + 0x18) == 0) break;
                              UnityEngine_UIElements_VisualElement__Add
                                        (*(longlong *)(lVar11 + 0x18),*(undefined8 *)(lVar11 + 0x20)
                                         ,0);
                              lVar15 = *(longlong *)(lVar11 + 0x18);
                              uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                              FUN_18055b980(uVar12,lVar11,MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__1,0);
                              if (lVar15 == 0) break;
                              FUN_180990d50(lVar15,uVar12,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                              lVar15 = *(longlong *)(lVar11 + 0x18);
                              uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                              FUN_18055b980(uVar12,lVar11,MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__2,0);
                              if (lVar15 == 0) break;
                              FUN_180990d50(lVar15,uVar12,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                              lVar15 = *(longlong *)(lVar11 + 0x18);
                              uVar12 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                              FUN_18055b980(uVar12,lVar11,MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__3,0);
                              if (lVar15 == 0) break;
                              FUN_180990d50(lVar15,uVar12,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                              UnityEngine_UIElements_VisualElement__Add
                                        (lVar10,*(undefined8 *)(lVar11 + 0x18),0);
                              if (*(longlong *)(lVar11 + 0x28) == 0) break;
                              lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x20);
                              uStack_128 = 0;
                              uStack_120 = 0;
                              System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                                        (&uStack_128,*(undefined8 *)(lVar11 + 0x18),
                                         *(undefined8 *)(lVar11 + 0x20));
                              if (lVar15 == 0) break;
                              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                              lVar11 = *(longlong *)(lVar15 + 0x10);
                              if (lVar11 == 0) break;
                              uVar3 = *(uint *)(lVar15 + 0x18);
                              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                                if (*(uint *)(lVar11 + 0x18) <= uVar3) goto DAT_18071da46;
                                puVar1 = (undefined4 *)(lVar11 + ((longlong)(int)uVar3 + 2) * 0x10);
                                *puVar1 = (undefined4)uStack_128;
                                puVar1[1] = uStack_128._4_4_;
                                puVar1[2] = (undefined4)uStack_120;
                                puVar1[3] = uStack_120._4_4_;
                                func_0x000180314690(((longlong)(int)uVar3 + 2) * 0x10 + lVar11);
                                uVar18 = uVar18 + 1;
                              }
                              else {
                                uStack_158 = (undefined4)uStack_128;
                                uStack_154 = uStack_128._4_4_;
                                uStack_150 = (undefined4)uStack_120;
                                uStack_14c = uStack_120._4_4_;
                                FUN_180ba8bc0(lVar15);
                                uVar18 = uVar18 + 1;
                              }
                            }
                            FUN_1803155d0();
                            pcVar4 = (code *)swi(3);
                            uVar12 = (*pcVar4)();
                            return uVar12;
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
  pcVar4 = (code *)swi(3);
  uVar12 = (*pcVar4)();
  return uVar12;
}

