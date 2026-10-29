// OptionsWindow__CoresDaParty__180691ff0 @ 0x180691ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__CoresDaParty__180691ff0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  if (cRam00000001834b3e8e == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass49_0._CoresDaParty_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass49_0._CoresDaParty_b__1);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass49_0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass49_1._CoresDaParty_b__2);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass49_1);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'None (no ring)'");
    FUN_180315380(LIT_"'X'");
    FUN_180315380(LIT_"'Party effect color'");
    cRam00000001834b3e8e = '\x01';
  }
  lVar6 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass49_0);
  func_0x0001803f01b0(lVar6,0);
  if (lVar6 != 0) {
    *(longlong *)(lVar6 + 0x10) = param_1;
    func_0x000180314690(lVar6 + 0x10,param_1);
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = OptionsWindow__LinhaSimples__180696c40(LIT_"'Party effect color'",0);
    uVar8 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    FUN_180bba2e0(uVar8,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    func_0x000180314690(lVar6 + 0x18,uVar8);
    uVar15 = 0;
    while( true ) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      lVar9 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa0);
      if (lVar9 == 0) break;
      if (*(int *)(lVar9 + 0x18) <= (int)uVar15) {
        uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        func_0x000180314690(lVar6 + 0x20,uVar8);
        if (*(longlong *)(lVar6 + 0x20) == 0) goto code_r0x000180692cf6;
        plVar11 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
        if (*(longlong *)(lVar6 + 0x20) == 0) goto code_r0x000180692cf6;
        plVar12 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
        puVar13 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x41900000,0);
        if (plVar12 == (longlong *)0x0) goto code_r0x000180692cf6;
        lVar9 = *plVar12;
        uVar8 = *puVar13;
        uVar1 = *(undefined4 *)(puVar13 + 1);
        if (*(ushort *)(lVar9 + 0x12e) == 0) goto code_r0x0001806927c9;
        uVar14 = 0;
        goto code_r0x0001806927b0;
      }
      lVar9 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass49_1);
      func_0x0001803f01b0(lVar9,0);
      if (lVar9 == 0) break;
      *(longlong *)(lVar9 + 0x18) = lVar6;
      func_0x000180314690(lVar9 + 0x18,lVar6);
      *(uint *)(lVar9 + 0x10) = uVar15;
      lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
      if (lVar10 == 0) break;
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      plVar12 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_e8,0x41900000,0);
      if (plVar12 == (longlong *)0x0) break;
      lVar3 = *plVar12;
      uVar8 = *puVar13;
      uVar1 = *(undefined4 *)(puVar13 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x43)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x00018069235a;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018069235a:
      uStack_c8 = uVar8;
      uStack_c0 = uVar1;
      (*(code *)*puVar13)(plVar12,&uStack_c8,puVar13[1]);
      if (plVar11 == (longlong *)0x0) break;
      lVar3 = *plVar11;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0xad)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x0001806923c9;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806923c9:
      uStack_b8 = uVar8;
      uStack_b0 = uVar1;
      (*(code *)*puVar13)(plVar11,&uStack_b8,puVar13[1]);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x40800000,0);
      if (plVar11 == (longlong *)0x0) break;
      lVar3 = *plVar11;
      uVar8 = *puVar13;
      uVar1 = *(undefined4 *)(puVar13 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x4d)
                       * 0x10 + 0x138 + lVar3);
            goto code_r0x000180692459;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180692459:
      uStack_118 = uVar8;
      uStack_110 = uVar1;
      (*(code *)*puVar13)(plVar11,&uStack_118,puVar13[1]);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa0);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar15) {
code_r0x000180692cea:
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        lVar6 = (*pcVar4)();
        return lVar6;
      }
      puVar13 = (undefined8 *)(lVar3 + ((longlong)(int)uVar15 + 2) * 0x10);
      uStack_108 = *puVar13;
      uStack_100 = puVar13[1];
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleColor__op_Implicit(auStack_98,&uStack_108,0);
      if (plVar11 == (longlong *)0x0) break;
      lVar3 = *plVar11;
      uVar8 = *puVar13;
      uVar5 = puVar13[1];
      uVar1 = *(undefined4 *)(puVar13 + 2);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 9) *
                       0x10 + 0x138 + lVar3);
            goto code_r0x000180692549;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180692549:
      uStack_108 = uVar8;
      uStack_100 = uVar5;
      uStack_f8 = uVar1;
      (*(code *)*puVar13)(plVar11,&uStack_108,puVar13[1]);
      lVar3 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x98);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar15) goto code_r0x000180692cea;
      UnityEngine_UIElements_VisualElement__set_tooltip
                (lVar10,*(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar15 * 8),0);
      uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
      FUN_18055b980(uVar8,lVar9,MD_OptionsWindow.__c__DisplayClass49_1._CoresDaParty_b__2,0);
      FUN_180990d50(lVar10,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
      if ((*(longlong *)(lVar9 + 0x18) == 0) ||
         (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x18), lVar9 == 0)) break;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      lVar3 = *(longlong *)(lVar9 + 0x10);
      if (lVar3 == 0) break;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar2) goto code_r0x000180692cea;
        *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = lVar10;
        func_0x000180314690(lVar3 + ((longlong)(int)uVar2 + 4) * 8,lVar10);
      }
      else {
        FUN_181645af0(lVar9,lVar10);
      }
      if (lVar7 == 0) break;
      UnityEngine_UIElements_VisualElement__Add(lVar7);
      uVar15 = uVar15 + 1;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar6 = (*pcVar4)();
  return lVar6;
  while (uVar14 = uVar14 + 1, uVar14 < *(ushort *)(lVar9 + 0x12e)) {
code_r0x0001806927b0:
    if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
      puVar13 = (undefined8 *)
                ((longlong)
                 (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x43) *
                 0x10 + 0x138 + lVar9);
      goto code_r0x0001806927d7;
    }
  }
code_r0x0001806927c9:
  puVar13 = (undefined8 *)FUN_180312860(plVar12,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806927d7:
  uStack_118 = uVar8;
  uStack_110 = uVar1;
  (*(code *)*puVar13)(plVar12,&uStack_118,puVar13[1]);
  if (plVar11 != (longlong *)0x0) {
    lVar9 = *plVar11;
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      uVar14 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar13 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0xad) *
                     0x10 + 0x138 + lVar9);
          goto code_r0x000180692849;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
    }
    puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180692849:
    uStack_118 = uVar8;
    uStack_110 = uVar1;
    (*(code *)*puVar13)(plVar11,&uStack_118,puVar13[1]);
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      plVar11 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
      puVar13 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x41000000,0);
      if (plVar11 != (longlong *)0x0) {
        lVar9 = *plVar11;
        uVar8 = *puVar13;
        uVar1 = *(undefined4 *)(puVar13 + 1);
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar13 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                         0x4d) * 0x10 + 0x138 + lVar9);
              goto code_r0x0001806928e9;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001806928e9:
        uStack_118 = uVar8;
        uStack_110 = uVar1;
        (*(code *)*puVar13)(plVar11,&uStack_118,puVar13[1]);
        if (*(longlong *)(lVar6 + 0x20) != 0) {
          plVar11 = (longlong *)
                    UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0);
          uStack_108 = 0x3df5c28f3df5c28f;
          uStack_100 = 0x3f8000003df5c28f;
          puVar13 = (undefined8 *)
                    UnityEngine_UIElements_StyleColor__op_Implicit(auStack_98,&uStack_108,0);
          if (plVar11 != (longlong *)0x0) {
            lVar9 = *plVar11;
            uVar8 = *puVar13;
            uVar5 = puVar13[1];
            uVar1 = *(undefined4 *)(puVar13 + 2);
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar13 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                             9) * 0x10 + 0x138 + lVar9);
                  goto code_r0x000180692999;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar13 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180692999:
            uStack_108 = uVar8;
            uStack_100 = uVar5;
            uStack_f8 = uVar1;
            (*(code *)*puVar13)(plVar11,&uStack_108,puVar13[1]);
            if (*(longlong *)(lVar6 + 0x20) != 0) {
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x20),0)
              ;
              uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar9 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                if (*(longlong *)(lVar6 + 0x20) != 0) {
                  lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lVar6 + 0x20),0);
                  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                  if (lVar9 != 0) {
                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                      UnityEngine_UIElements_VisualElement__set_tooltip
                                (*(longlong *)(lVar6 + 0x20),LIT_"'None (no ring)'",0);
                      lVar9 = *(longlong *)(lVar6 + 0x20);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      uStack_108 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
                      uStack_100 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
                      uStack_e8 = 0;
                      uStack_e0 = 0;
                      uStack_d8 = 0;
                      func_0x000180cb7cb0(&uStack_e8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
                      uStack_108 = uStack_e8;
                      uStack_100 = uStack_e0;
                      uStack_f8 = uStack_d8;
                      uVar8 = SparkEstilo__Texto(LIT_"'X'",10,&uStack_108,0,0);
                      if (lVar9 != 0) {
                        UnityEngine_UIElements_VisualElement__Add(lVar9,uVar8,0);
                        lVar9 = *(longlong *)(lVar6 + 0x20);
                        uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent>);
                        FUN_18055b980(uVar8,lVar6,MD_OptionsWindow.__c__DisplayClass49_0._CoresDaParty_b__0,0);
                        if (lVar9 != 0) {
                          FUN_180990d50(lVar9,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent>);
                          if (lVar7 != 0) {
                            UnityEngine_UIElements_VisualElement__Add
                                      (lVar7,*(undefined8 *)(lVar6 + 0x20),0);
                            lVar9 = *(longlong *)(param_1 + 0xb0);
                            uVar8 = func_0x000180315580(TI_System.Action);
                            FUN_1816a9c60(uVar8,lVar6,MD_OptionsWindow.__c__DisplayClass49_0._CoresDaParty_b__1,0);
                            lVar6 = MR_System.Collections.Generic.List<System.Action>.Add;
                            if (lVar9 != 0) {
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              lVar10 = *(longlong *)(lVar9 + 0x10);
                              if (lVar10 != 0) {
                                uVar15 = *(uint *)(lVar9 + 0x18);
                                if (uVar15 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar15 + 1;
                                  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                                    FUN_1803155c0();
                                    pcVar4 = (code *)swi(3);
                                    lVar6 = (*pcVar4)();
                                    return lVar6;
                                  }
                                  *(undefined8 *)(lVar10 + 0x20 + (longlong)(int)uVar15 * 8) = uVar8
                                  ;
                                  func_0x000180314690(lVar10 + 0x20 + (longlong)(int)uVar15 * 8,
                                                      uVar8);
                                }
                                else {
                                  FUN_181645af0(lVar9,uVar8,
                                                *(undefined8 *)
                                                 (*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0)
                                                 + 0x70));
                                }
                                return lVar7;
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
code_r0x000180692cf6:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar6 = (*pcVar4)();
  return lVar6;
}

