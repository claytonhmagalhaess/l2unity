// OptionsWindow__ModosDeTela__1806978d0 @ 0x1806978d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__ModosDeTela__1806978d0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  ushort uVar15;
  uint uVar16;
  undefined4 auStackX_20 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  longlong lStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_c8 [144];
  
  if (cRam00000001834b3e85 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_int__);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass40_0._ModosDeTela_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass40_0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass40_1._ModosDeTela_b__1);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass40_1);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'↖   ↗\\n\\n↙   ↘'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3e85 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass40_0);
  lStack_180 = lVar5;
  func_0x0001803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    lStack_178 = lVar6;
    UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
    if (lVar6 != 0) {
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      plVar8 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar7 != (longlong *)0x0) {
        lVar12 = *plVar7;
        lVar11 = *plVar8;
        lVar4 = plVar8[1];
        if (*(ushort *)(lVar12 + 0x12e) != 0) {
          uVar15 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                        0x4b) * 0x10 + 0x138 + lVar12);
              goto code_r0x000180697b19;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180697b19:
        lStack_1c8 = lVar11;
        uStack_1c0 = (int)lVar4;
        (*(code *)*puVar9)(plVar7,&lStack_1c8,puVar9[1]);
        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
          func_0x000180315660(TI_OptionsWindow);
        }
        uStack_f8 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x28);
        uStack_f0 = *(undefined8 *)(*(longlong *)(TI_OptionsWindow + 0xb8) + 0x30);
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        func_0x000180cb7cb0(&uStack_138,&uStack_f8,MR_System.Nullable<UnityEngine.Color>..ctor);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_1e8 = uStack_138;
        uStack_1e0 = uStack_130;
        uStack_1d8 = uStack_128;
        uVar10 = SparkEstilo__Texto(LIT_"''",0xb,&uStack_1e8,0,0);
        *(undefined8 *)(lVar5 + 0x18) = uVar10;
        func_0x000180314690(lVar5 + 0x18,uVar10);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          plVar7 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x18),0);
          plVar8 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 != (longlong *)0x0) {
            lVar12 = *plVar7;
            lVar11 = *plVar8;
            lVar4 = plVar8[1];
            if (*(ushort *)(lVar12 + 0x12e) != 0) {
              uVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                            0x4b) * 0x10 + 0x138 + lVar12);
                  goto code_r0x000180697c69;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180697c69:
            lStack_1c8 = lVar11;
            uStack_1c0 = (int)lVar4;
            (*(code *)*puVar9)(plVar7,&lStack_1c8,puVar9[1]);
            UnityEngine_UIElements_VisualElement__Add(lVar6,*(undefined8 *)(lVar5 + 0x18),0);
            lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            lStack_188 = lVar11;
            UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
            if (lVar11 != 0) {
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
              uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
              if (lVar12 != 0) {
                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
                lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                uVar10 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                if (lVar12 != 0) {
                  FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
                  UnityEngine_UIElements_VisualElement__Add(lVar6,lVar11,0);
                  lVar6 = func_0x000180314710(TI_int__,3);
                  lStack_1c8 = lVar6;
                  if (lVar6 != 0) {
                    if ((*(int *)(lVar6 + 0x18) == 0) ||
                       (*(undefined4 *)(lVar6 + 0x20) = 2, *(uint *)(lVar6 + 0x18) < 2)) {
                      FUN_1803155c0();
                      pcVar2 = (code *)swi(3);
                      lVar5 = (*pcVar2)();
                      return lVar5;
                    }
                    *(undefined4 *)(lVar6 + 0x24) = 1;
                    uVar10 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
                    FUN_180bba2e0(uVar10,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
                    *(undefined8 *)(lVar5 + 0x20) = uVar10;
                    func_0x000180314690(lVar5 + 0x20,uVar10);
                    for (uVar16 = 0; (int)uVar16 < *(int *)(lVar6 + 0x18); uVar16 = uVar16 + 1) {
                      if (*(uint *)(lVar6 + 0x18) <= uVar16) goto code_r0x000180698ba1;
                      uVar1 = *(undefined4 *)(lVar6 + 0x20 + (longlong)(int)uVar16 * 4);
                      lVar6 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass40_1);
                      lStack_198 = lVar6;
                      func_0x0001803f01b0(lVar6,0);
                      if (lVar6 == 0) goto code_r0x000180698ba7;
                      *(longlong *)(lVar6 + 0x18) = lVar5;
                      func_0x000180314690(lVar6 + 0x18,lVar5);
                      *(undefined4 *)(lVar6 + 0x10) = uVar1;
                      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      lStack_190 = lVar5;
                      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                      if (lVar5 == 0) goto code_r0x000180698ba7;
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      uVar10 = *puVar9;
                      uVar1 = *(undefined4 *)(puVar9 + 1);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0xad) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180697f39;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180697f39:
                      uStack_168 = uVar10;
                      uStack_160 = uVar1;
                      (*(code *)*puVar9)(plVar7,&uStack_168,puVar9[1]);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      uVar10 = *puVar9;
                      uVar1 = *(undefined4 *)(puVar9 + 1);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x43) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180697fc9;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180697fc9:
                      uStack_158 = uVar10;
                      uStack_150 = uVar1;
                      (*(code *)*puVar9)(plVar7,&uStack_158,puVar9[1]);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      uStack_1a8 = 0x3ca3d70a3ca3d70a;
                      uStack_1a0 = 0x3f6666663ca3d70a;
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleColor__op_Implicit
                                         (&uStack_118,&uStack_1a8,0);
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      uVar10 = *puVar9;
                      uVar3 = puVar9[1];
                      uVar1 = *(undefined4 *)(puVar9 + 2);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 9) * 0x10 + 0x138 + lVar6
                                     );
                            goto code_r0x000180698069;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180698069:
                      uStack_1e8 = uVar10;
                      uStack_1e0 = uVar3;
                      uStack_1d8 = uVar1;
                      (*(code *)*puVar9)(plVar7,&uStack_1e8,puVar9[1]);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x45) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x0001806980f9;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x45);
code_r0x0001806980f9:
                      (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      uVar10 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar5 = *plVar7;
                      if (*(ushort *)(lVar5 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 3) * 0x10 + 0x138 + lVar5
                                     );
                            goto code_r0x000180698189;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar5 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,3);
code_r0x000180698189:
                      (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
                      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                      if (lVar5 == 0) goto code_r0x000180698ba7;
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0)
                      ;
                      plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0)
                      ;
                      uVar10 = func_0x000182601c10(0x3f800000,0);
                      if (plVar14 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar14;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x23) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698259;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x23);
code_r0x000180698259:
                      (*(code *)*puVar9)(plVar14,uVar10,puVar9[1]);
                      if (plVar13 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar13;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x1f) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x0001806982b9;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x1f);
code_r0x0001806982b9:
                      (*(code *)*puVar9)(plVar13,uVar10,puVar9[1]);
                      if (plVar8 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar8;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x1b) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698319;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x1b);
code_r0x000180698319:
                      (*(code *)*puVar9)(plVar8,uVar10,puVar9[1]);
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x2b) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698379;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2b);
code_r0x000180698379:
                      (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
                      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0)
                      ;
                      plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0)
                      ;
                      uStack_1a8 = 0x3f1eb8523f1eb852;
                      uStack_1a0 = 0x3f8000003f19999a;
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleColor__op_Implicit
                                         (&uStack_118,&uStack_1a8,0);
                      if (plVar14 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar14;
                      uVar10 = *puVar9;
                      uVar3 = puVar9[1];
                      uVar1 = *(undefined4 *)(puVar9 + 2);
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x21) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698439;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x21);
code_r0x000180698439:
                      uStack_1e8 = uVar10;
                      uStack_1e0 = uVar3;
                      uStack_1d8 = uVar1;
                      (*(code *)*puVar9)(plVar14,&uStack_1e8,puVar9[1]);
                      if (plVar13 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar13;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x1d) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x0001806984a9;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar13,TI_UnityEngine.UIElements.IStyle,0x1d);
code_r0x0001806984a9:
                      uStack_1e8 = uVar10;
                      uStack_1e0 = uVar3;
                      uStack_1d8 = uVar1;
                      (*(code *)*puVar9)(plVar13,&uStack_1e8,puVar9[1]);
                      if (plVar8 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar8;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x15) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698519;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x15);
code_r0x000180698519:
                      uStack_1e8 = uVar10;
                      uStack_1e0 = uVar3;
                      uStack_1d8 = uVar1;
                      (*(code *)*puVar9)(plVar8,&uStack_1e8,puVar9[1]);
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180698ba7;
                      lVar6 = *plVar7;
                      if (*(ushort *)(lVar6 + 0x12e) != 0) {
                        uVar15 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 +
                                               (ulonglong)uVar15 * 0x10) + 0x25) * 0x10 + 0x138 +
                                     lVar6);
                            goto code_r0x000180698589;
                          }
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x25);
code_r0x000180698589:
                      uStack_1e8 = uVar10;
                      uStack_1e0 = uVar3;
                      uStack_1d8 = uVar1;
                      (*(code *)*puVar9)(plVar7,&uStack_1e8,puVar9[1]);
                      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      lVar6 = lStack_198;
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c8);
                      if (lVar11 == 0) goto code_r0x000180698ba7;
                      uStack_148 = *puVar9;
                      uStack_140 = *(undefined4 *)(puVar9 + 1);
                      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_148);
                      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_f8);
                      if (lVar11 == 0) goto code_r0x000180698ba7;
                      uStack_1b8 = *puVar9;
                      uStack_1b0 = *(undefined4 *)(puVar9 + 1);
                      FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_1b8);
                      if (*(int *)(lVar6 + 0x10) != 2) {
                        lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                        uVar10 = func_0x000182601c10(0x40a00000,0);
                        if (lVar11 == 0) goto code_r0x000180698ba7;
                        FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar11,uVar10);
                      }
                      uVar10 = LIT_"'↖   ↗\\n\\n↙   ↘'";
                      if (*(int *)(lVar6 + 0x10) == 0) {
                        uVar10 = LIT_"''";
                      }
                      uStack_1a8 = 0x3f1eb8523f1eb852;
                      uStack_1a0 = 0x3f8000003f19999a;
                      uStack_1e8 = 0;
                      uStack_1e0 = 0;
                      uStack_1d8 = 0;
                      func_0x000180cb7cb0(&uStack_1e8,&uStack_1a8,MR_System.Nullable<UnityEngine.Color>..ctor);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uStack_108 = uStack_1d8;
                      uStack_118 = (undefined4)uStack_1e8;
                      uStack_114 = uStack_1e8._4_4_;
                      uStack_110 = (undefined4)uStack_1e0;
                      uStack_10c = uStack_1e0._4_4_;
                      lVar11 = SparkEstilo__Texto(uVar10,8,&uStack_118,0,0);
                      if (lVar11 == 0) {
DAT_180698b9b:
                        FUN_1803155d0();
                        pcVar2 = (code *)swi(3);
                        lVar5 = (*pcVar2)();
                        return lVar5;
                      }
                      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                      uVar10 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                      if (lVar12 == 0) goto DAT_180698b9b;
                      FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
                      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
                      uVar10 = func_0x000182601c10(0x3f800000,0);
                      if (lVar12 == 0) goto DAT_180698b9b;
                      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar10);
                      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar11,0);
                      lVar11 = lStack_190;
                      UnityEngine_UIElements_VisualElement__Add(lStack_190,lVar5,0);
                      uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
                      FUN_18055b980(uVar10,lVar6,MD_OptionsWindow.__c__DisplayClass40_1._ModosDeTela_b__1,0);
                      FUN_180990d50(lVar11,uVar10,0);
                      auStackX_20[0] = *(undefined4 *)(lVar6 + 0x10);
                      uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
                      UnityEngine_UIElements_VisualElement__set_userData(lVar11,uVar10,0);
                      if ((*(longlong *)(lVar6 + 0x18) == 0) ||
                         (lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x20), lVar5 == 0))
                      goto DAT_180698b9b;
                      FUN_180002eb0(lVar5,lVar11);
                      UnityEngine_UIElements_VisualElement__Add(lStack_188);
                      lVar5 = lStack_180;
                      lVar6 = lStack_1c8;
                    }
                    lVar6 = *(longlong *)(param_1 + 0xb0);
                    uVar10 = func_0x000180315580(TI_System.Action);
                    FUN_1816a9c60(uVar10,lVar5,MD_OptionsWindow.__c__DisplayClass40_0._ModosDeTela_b__0,0);
                    lVar5 = MR_System.Collections.Generic.List<System.Action>.Add;
                    if (lVar6 != 0) {
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      lVar11 = *(longlong *)(lVar6 + 0x10);
                      if (lVar11 != 0) {
                        uVar16 = *(uint *)(lVar6 + 0x18);
                        if (uVar16 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar16 + 1;
                          if (*(uint *)(lVar11 + 0x18) <= uVar16) {
code_r0x000180698ba1:
                            FUN_1803155c0();
                            pcVar2 = (code *)swi(3);
                            lVar5 = (*pcVar2)();
                            return lVar5;
                          }
                          *(undefined8 *)(lVar11 + 0x20 + (longlong)(int)uVar16 * 8) = uVar10;
                          func_0x000180314690(lVar11 + (longlong)(int)uVar16 * 8 + 0x20,uVar10);
                        }
                        else {
                          FUN_181645af0(lVar6,uVar10,
                                        *(undefined8 *)
                                         (*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x70))
                          ;
                        }
                        return lStack_178;
                      }
                    }
code_r0x000180698ba7:
                    FUN_1803155d0();
                    pcVar2 = (code *)swi(3);
                    lVar5 = (*pcVar2)();
                    return lVar5;
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
  lVar5 = (*pcVar2)();
  return lVar5;
}

