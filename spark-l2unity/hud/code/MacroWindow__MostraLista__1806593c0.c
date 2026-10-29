// MacroWindow__MostraLista__1806593c0 @ 0x1806593c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__MostraLista__1806593c0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  int aiStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong lStack_128;
  undefined4 uStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  if (cRam00000001834b3d66 == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_MacroSlot);
    FUN_180315380(MD_MacroWindow._MostraLista_b__30_0);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'\\n'");
    FUN_180315380(LIT_"'Macros: {0}/{1}'");
    FUN_180315380(LIT_"'You have no macros. Press New to create one.'");
    FUN_180315380(LIT_"'<color=#E8D4A0>'");
    FUN_180315380(LIT_"' | '");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'</color>  '");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'<color=#A09682>'");
    FUN_180315380(LIT_"'Click a macro to run it. Drag a macro to the shortcut bar.'");
    cRam00000001834b3d66 = '\x01';
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xb8),0);
    uVar1 = *(undefined4 *)(param_1 + 0xfc);
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = SparkMacros__Busca__1804744f0(uVar1,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    if (**(longlong **)(TI_SparkMacros + 0xb8) != 0) {
      aiStackX_18[0] = 0;
      FUN_180bada40(&uStack_148,**(longlong **)(TI_SparkMacros + 0xb8),MR_System.Collections.Generic.List<SparkMacros.Macro>.GetEnumerator);
      uStack_d0._0_4_ = uStack_148;
      uStack_d0._4_4_ = uStack_144;
      uStack_c8 = uStack_140;
      uStack_c4 = uStack_13c;
      lStack_c0 = CONCAT44(uStack_134,uStack_138);
      uStack_178 = 0;
      puStack_170 = &uStack_d0;
      while( true ) {
        cVar5 = FUN_1812fa7e0(&uStack_d0,MR_System.Collections.Generic.List<SparkMacros.Macro>.MoveNext);
        lVar6 = lStack_c0;
        uVar15 = 0;
        if (cVar5 == '\0') break;
        lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
        if (lVar7 == 0) goto code_r0x00018065a3b1;
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        plVar9 = (longlong *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x42780000,0);
        if (plVar8 == (longlong *)0x0) goto code_r0x00018065a3ac;
        lVar12 = *plVar9;
        lVar4 = plVar9[1];
        lVar2 = *plVar8;
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar14 = uVar15;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                         0xad) * 0x10 + 0x138 + lVar2);
              goto code_r0x000180659789;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180659789:
        lStack_118 = lVar12;
        uStack_110 = (int)lVar4;
        (*(code *)*puVar10)(plVar8,&lStack_118,puVar10[1]);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar11 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
        if (plVar8 == (longlong *)0x0) goto code_r0x00018065a3a7;
        lVar12 = *plVar8;
        if (*(ushort *)(lVar12 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 3)
                         * 0x10 + 0x138 + lVar12);
              goto code_r0x000180659829;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(lVar12 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,3);
code_r0x000180659829:
        (*(code *)*puVar10)(plVar8,uVar11,puVar10[1]);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        plVar9 = (longlong *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98,0x40c00000,0);
        if (plVar8 == (longlong *)0x0) goto code_r0x00018065a3a2;
        lVar12 = *plVar9;
        lVar4 = plVar9[1];
        lVar2 = *plVar8;
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar16 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + uVar16 * 0x10) + 0x4b) * 0x10 +
                         0x138 + lVar2);
              goto code_r0x0001806598b9;
            }
            uVar15 = (short)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001806598b9:
        lStack_128 = lVar12;
        uStack_120 = (int)lVar4;
        (*(code *)*puVar10)(plVar8,&lStack_128,puVar10[1]);
        if (DAT_1834b3d0f == '\0') {
          FUN_180315380(TI_L2SlotManager);
          DAT_1834b3d0f = '\x01';
        }
        uVar11 = **(undefined8 **)(TI_L2SlotManager + 0xb8);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if (cVar5 == '\0') {
code_r0x000180659a1f:
          uVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(uVar11,0);
        }
        else {
          lVar12 = FUN_18061dfc0(0);
          if (lVar12 == 0) goto code_r0x00018065a37a;
          uVar11 = *(undefined8 *)(lVar12 + 0xa0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if (cVar5 == '\0') goto code_r0x000180659a1f;
          lVar12 = FUN_18061dfc0(0);
          if (lVar12 == 0) goto code_r0x00018065a375;
          if (*(longlong *)(lVar12 + 0xa0) == 0) goto code_r0x00018065a370;
          lVar12 = UnityEngine_UIElements_VisualTreeAsset__Instantiate
                             (*(longlong *)(lVar12 + 0xa0),0);
          if (lVar12 == 0) goto code_r0x00018065a36a;
          uVar11 = UnityEngine_UIElements_VisualElement__get_Item(lVar12,0,0);
        }
        lVar12 = func_0x000180315580(TI_MacroSlot);
        ActionSlot___ctor__1805a3170(lVar12,uVar11,aiStackX_18[0],0xc,0);
        if (lVar12 == 0) goto code_r0x00018065a39d;
        MacroSlot__AssignMacro__180623db0(lVar12,lVar6,0);
        uVar13 = func_0x000180315580(TI_System.Action<int>);
        FUN_180b7db20(uVar13,param_1,MD_MacroWindow._MostraLista_b__30_0,0);
        *(undefined8 *)(lVar12 + 0x88) = uVar13;
        func_0x000180314690(lVar12 + 0x88,uVar13);
        if (lVar6 == 0) goto code_r0x00018065a398;
        if (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xfc)) {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_108 = *(undefined4 *)(lVar12 + 0x60);
          uStack_104 = *(undefined4 *)(lVar12 + 100);
          uStack_100 = *(undefined4 *)(lVar12 + 0x68);
          uStack_fc = *(undefined4 *)(lVar12 + 0x6c);
          SparkEstilo__Borda__18071da60(uVar11,&uStack_108,0x3f800000,0,0);
        }
        UnityEngine_UIElements_VisualElement__Add(lVar7,uVar11,0);
        uVar11 = *(undefined8 *)(lVar6 + 0x18);
        if (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xfc)) {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_108 = *(undefined4 *)(lVar6 + 0x60);
          uStack_104 = *(undefined4 *)(lVar6 + 100);
          uStack_100 = *(undefined4 *)(lVar6 + 0x68);
          uStack_fc = *(undefined4 *)(lVar6 + 0x6c);
        }
        else {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_108 = *(undefined4 *)(lVar6 + 0x40);
          uStack_104 = *(undefined4 *)(lVar6 + 0x44);
          uStack_100 = *(undefined4 *)(lVar6 + 0x48);
          uStack_fc = *(undefined4 *)(lVar6 + 0x4c);
        }
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        func_0x000180cb7cb0(&uStack_168,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_148 = (undefined4)uStack_168;
        uStack_144 = uStack_168._4_4_;
        uStack_140 = (undefined4)uStack_160;
        uStack_13c = uStack_160._4_4_;
        uStack_138 = uStack_158;
        lVar6 = SparkEstilo__Texto__180722af0(uVar11,9,&uStack_148,0,0);
        if (lVar6 == 0) goto code_r0x00018065a393;
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        uVar11 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
        if (lVar12 == 0) goto code_r0x00018065a38e;
        FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar11);
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        puVar10 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e0,0x42700000,0);
        if (lVar12 == 0) goto code_r0x00018065a389;
        uStack_188 = *puVar10;
        uStack_180 = *(undefined4 *)(puVar10 + 1);
        FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_188);
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
        if (lVar12 == 0) goto code_r0x00018065a384;
        FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle);
        UnityEngine_UIElements_VisualElement__Add(lVar7,lVar6);
        if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x00018065a37f;
        aiStackX_18[0] = aiStackX_18[0] + 1;
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar7);
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_d0,MR_System.Collections.Generic.List<SparkMacros.Macro>.Dispose);
      if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkMacros + 0xb8) != 0) {
        if (*(int *)(**(longlong **)(TI_SparkMacros + 0xb8) + 0x18) == 0) {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar6 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_108 = *(undefined4 *)(lVar6 + 0x50);
          uStack_104 = *(undefined4 *)(lVar6 + 0x54);
          uStack_100 = *(undefined4 *)(lVar6 + 0x58);
          uStack_fc = *(undefined4 *)(lVar6 + 0x5c);
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          func_0x000180cb7cb0(&uStack_168,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_148 = (undefined4)uStack_168;
          uStack_144 = uStack_168._4_4_;
          uStack_140 = (undefined4)uStack_160;
          uStack_13c = uStack_160._4_4_;
          uStack_138 = uStack_158;
          lVar6 = SparkEstilo__Texto__180722af0(LIT_"'You have no macros. Press New to create one.'",0xb,&uStack_148,0,0);
          if (lVar6 == 0) {
code_r0x00018065a3bd:
            FUN_1803155d0();
code_r0x00018065a3c3:
            FUN_1803155d0();
code_r0x00018065a3c8:
            FUN_1803155d0();
            FUN_180311490();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e0,0x40800000,0);
          if (plVar8 == (longlong *)0x0) goto code_r0x00018065a3bd;
          uVar11 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          lVar7 = *plVar8;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar16 * 0x10) + 0x4d) * 0x10
                           + 0x138 + lVar7);
                goto code_r0x000180659eb9;
              }
              uVar15 = (short)uVar16 + 1;
              uVar16 = (ulonglong)uVar15;
            } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180659eb9:
          uStack_188 = uVar11;
          uStack_180 = uVar1;
          (*(code *)*puVar10)(plVar8,&uStack_188,puVar10[1]);
          plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e0,0x40c00000,0);
          if (plVar8 == (longlong *)0x0) goto code_r0x00018065a3bd;
          uVar11 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          lVar7 = *plVar8;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar16 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar16 * 0x10) + 0x51) * 0x10
                           + 0x138 + lVar7);
                goto code_r0x000180659f59;
              }
              uVar15 = (short)uVar16 + 1;
              uVar16 = (ulonglong)uVar15;
            } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180659f59:
          uStack_188 = uVar11;
          uStack_180 = uVar1;
          (*(code *)*puVar10)(plVar8,&uStack_188,puVar10[1]);
          if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x00018065a3bd;
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar6,0);
        }
        plVar8 = *(longlong **)(param_1 + 0x98);
        if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkMacros + 0xb8) != 0) {
          aiStackX_18[0] = *(int *)(**(longlong **)(TI_SparkMacros + 0xb8) + 0x18);
          uVar11 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
          auStackX_20[0] = 0x18;
          uVar13 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
          uVar11 = System_String__Format(LIT_"'Macros: {0}/{1}'",uVar11,uVar13,0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0xe48))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0xe50));
            lVar6 = SparkMacros__Busca__1804744f0(*(undefined4 *)(param_1 + 0xfc),0);
            lStack_128 = lVar6;
            if (lVar6 == 0) {
              plVar8 = *(longlong **)(param_1 + 0xa0);
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0xe48))
                          (plVar8,LIT_"'Click a macro to run it. Drag a macro to the shortcut bar.'",*(undefined8 *)(*plVar8 + 0xe50));
                return;
              }
            }
            else {
              lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
              FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<string>..ctor);
              if (*(longlong *)(lVar6 + 0x38) != 0) {
                lStack_118 = lVar7;
                FUN_180bada40(&uStack_148,*(longlong *)(lVar6 + 0x38),MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator);
                uStack_f8 = CONCAT44(uStack_144,uStack_148);
                uStack_f0 = CONCAT44(uStack_13c,uStack_140);
                lStack_e8 = CONCAT44(uStack_134,uStack_138);
                uStack_178 = 0;
                puStack_170 = &uStack_f8;
                while (cVar5 = FUN_1812fa7e0(&uStack_f8,MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext), lVar12 = lStack_e8,
                      cVar5 != '\0') {
                  if (lStack_e8 == 0) goto code_r0x00018065a3c8;
                  cVar5 = func_0x000181707e50(*(undefined8 *)(lStack_e8 + 0x20),0);
                  if (cVar5 == '\0') {
                    if (lVar7 == 0) goto code_r0x00018065a3c3;
                    FUN_180002eb0(lVar7,*(undefined8 *)(lVar12 + 0x20));
                  }
                }
                Gear__UpdateWeaponType__1803dadf0(&uStack_f8,MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose);
                cVar5 = func_0x000181707e50(*(undefined8 *)(lVar6 + 0x20),0);
                uVar11 = LIT_"''";
                if (cVar5 == '\0') {
                  uVar11 = System_String__Concat(*(undefined8 *)(lVar6 + 0x20),LIT_"'\\n'",0);
                }
                plVar8 = *(longlong **)(param_1 + 0xa0);
                lVar12 = func_0x000180314710(TI_string__,7);
                if (lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    *(undefined8 *)(lVar12 + 0x20) = LIT_"'<color=#E8D4A0>'";
                    func_0x000180314690(lVar12 + 0x20);
                    if (1 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
                      func_0x000180314690(lVar12 + 0x28);
                      if (2 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x30) = LIT_"'</color>  '";
                        func_0x000180314690(lVar12 + 0x30);
                        if (3 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + 0x38) = uVar11;
                          func_0x000180314690(lVar12 + 0x38,uVar11);
                          if (4 < *(uint *)(lVar12 + 0x18)) {
                            *(undefined8 *)(lVar12 + 0x40) = LIT_"'<color=#A09682>'";
                            func_0x000180314690(lVar12 + 0x40);
                            uVar11 = System_String__Join(LIT_"' | '",lVar7,0);
                            if (5 < *(uint *)(lVar12 + 0x18)) {
                              *(undefined8 *)(lVar12 + 0x48) = uVar11;
                              func_0x000180314690(lVar12 + 0x48,uVar11);
                              if (6 < *(uint *)(lVar12 + 0x18)) {
                                *(undefined8 *)(lVar12 + 0x50) = LIT_"'</color>'";
                                func_0x000180314690(lVar12 + 0x50);
                                uVar11 = System_String__Concat(lVar12,0);
                                if (plVar8 != (longlong *)0x0) {
                                  (**(code **)(*plVar8 + 0xe48))
                                            (plVar8,uVar11,*(undefined8 *)(*plVar8 + 0xe50));
                                  return;
                                }
                                goto code_r0x00018065a364;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  FUN_1803155c0();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
            goto code_r0x00018065a364;
          }
        }
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_r0x00018065a364:
  FUN_1803155d0();
code_r0x00018065a36a:
  FUN_1803155d0();
code_r0x00018065a370:
  FUN_1803155d0();
code_r0x00018065a375:
  FUN_1803155d0();
code_r0x00018065a37a:
  FUN_1803155d0();
code_r0x00018065a37f:
  FUN_1803155d0();
code_r0x00018065a384:
  FUN_1803155d0();
code_r0x00018065a389:
  FUN_1803155d0();
code_r0x00018065a38e:
  FUN_1803155d0();
code_r0x00018065a393:
  FUN_1803155d0();
code_r0x00018065a398:
  FUN_1803155d0();
code_r0x00018065a39d:
  FUN_1803155d0();
code_r0x00018065a3a2:
  FUN_1803155d0();
code_r0x00018065a3a7:
  FUN_1803155d0();
code_r0x00018065a3ac:
  FUN_1803155d0();
code_r0x00018065a3b1:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

