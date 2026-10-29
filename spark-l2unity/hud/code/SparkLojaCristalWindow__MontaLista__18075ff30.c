// SparkLojaCristalWindow__MontaLista__18075ff30 @ 0x18075ff30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__MontaLista__18075ff30(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined4 auStackX_18 [2];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_178;
  undefined4 *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [80];
  
  if (cRam00000001834b4366 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_SparkLojaCristalWindow.__c__DisplayClass45_0._MontaLista_b__0);
    FUN_180315380(TI_SparkLojaCristalWindow.<>c__DisplayClass45_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'You have no items this shop can crystallize.'");
    FUN_180315380(LIT_"'You receive {0:N0} {1}'");
    FUN_180315380(LIT_"'Your items ({0})'");
    cRam00000001834b4366 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
code_r0x000180760bde:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x118),0);
  if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
    func_0x000180315660(TI_SparkLojaCristal);
  }
  lVar9 = *(longlong *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x38);
  if (lVar9 == 0) goto code_r0x000180760bde;
  plVar7 = *(longlong **)(param_1 + 0xd0);
  auStackX_18[0] = *(undefined4 *)(lVar9 + 0x18);
  uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
  uVar4 = System_String__Format(LIT_"'Your items ({0})'",uVar4,0);
  if (plVar7 == (longlong *)0x0) goto code_r0x000180760bde;
  (**(code **)(*plVar7 + 0xe48))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0xe50));
  if (*(int *)(lVar9 + 0x18) == 0) {
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_178 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    puStack_170 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000180cb7cb0(&uStack_198,&uStack_178,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_158 = uStack_198;
    uStack_150 = uStack_190;
    uStack_148 = uStack_188;
    lVar5 = SparkEstilo__Texto__180722af0(LIT_"'You have no items this shop can crystallize.'",0xb,&uStack_158,0,0);
    if (lVar5 != 0) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
      if (lVar6 != 0) {
        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar6,uVar4);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_168,0x41000000,0);
        if (plVar7 != (longlong *)0x0) {
          uVar4 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          lVar6 = *plVar7;
          uVar15 = 0;
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            uVar14 = uVar15;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                          0x4d) * 0x10 + 0x138 + lVar6);
                goto code_r0x000180760259;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180760259:
          uStack_1a8 = uVar4;
          uStack_1a0 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_1a8,puVar8[1]);
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar8 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_168,0x41000000,0);
          if (plVar7 != (longlong *)0x0) {
            uVar4 = *puVar8;
            uVar1 = *(undefined4 *)(puVar8 + 1);
            lVar6 = *plVar7;
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) +
                            0x51) * 0x10 + 0x138 + lVar6);
                  goto code_r0x0001807602f9;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001807602f9:
            uStack_1a8 = uVar4;
            uStack_1a0 = uVar1;
            (*(code *)*puVar8)(plVar7,&uStack_1a8,puVar8[1]);
            if (*(longlong *)(param_1 + 0x118) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x118),lVar5,0);
              goto code_r0x00018076038c;
            }
          }
        }
      }
    }
    FUN_1803155d0();
code_r0x000180760b81:
    FUN_1803155d0();
code_r0x000180760b87:
    FUN_1803155d0();
code_r0x000180760b8c:
    FUN_1803155d0();
code_r0x000180760b91:
    FUN_1803155d0();
code_r0x000180760b96:
    FUN_1803155d0();
code_r0x000180760b9b:
    FUN_1803155d0();
code_r0x000180760ba0:
    FUN_1803155d0();
code_r0x000180760ba5:
    FUN_1803155d0();
code_r0x000180760baa:
    FUN_1803155d0();
code_r0x000180760baf:
    FUN_1803155d0();
code_r0x000180760bb4:
    FUN_1803155d0();
code_r0x000180760bb9:
    FUN_1803155d0();
code_r0x000180760bbe:
    FUN_1803155d0();
code_r0x000180760bc3:
    FUN_1803155d0();
code_r0x000180760bc8:
    FUN_1803155d0();
code_r0x000180760bcd:
    FUN_1803155d0();
  }
  else {
code_r0x00018076038c:
    FUN_180bada40(&uStack_108,lVar9,MR_System.Collections.Generic.List<SparkLojaCristal.Item>.GetEnumerator);
    uStack_d8 = (undefined4)uStack_108;
    uStack_d4 = uStack_108._4_4_;
    uStack_d0 = (undefined4)uStack_100;
    uStack_cc = uStack_100._4_4_;
    uStack_c8 = CONCAT44(uStack_f4,uStack_f8);
    uStack_178 = 0;
    puStack_170 = &uStack_d8;
    while( true ) {
      cVar3 = FUN_1812fa7e0(&uStack_d8,MR_System.Collections.Generic.List<SparkLojaCristal.Item>.MoveNext);
      uVar4 = uStack_c8;
      if (cVar3 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Dispose);
        return;
      }
      lVar9 = func_0x000180315580(TI_SparkLojaCristalWindow.<>c__DisplayClass45_0);
      SparkMapaWindow_Loja___ctor__1803f01b0(lVar9,0);
      if (lVar9 == 0) break;
      *(longlong *)(lVar9 + 0x18) = param_1;
      func_0x000180314690(lVar9 + 0x18,param_1);
      *(undefined8 *)(lVar9 + 0x10) = uVar4;
      func_0x000180314690(lVar9 + 0x10,uVar4);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = SparkEstilo__Linha__180720db0(0x26,0);
      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
      if (lVar6 == 0) goto code_r0x000180760bcd;
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0x42000000,0);
      if (plVar10 == (longlong *)0x0) goto code_r0x000180760bc8;
      uVar4 = *puVar8;
      uVar1 = *(undefined4 *)(puVar8 + 1);
      lVar11 = *plVar10;
      uVar15 = 0;
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0x43)
                      * 0x10 + 0x138 + lVar11);
            goto code_r0x000180760529;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180760529:
      uStack_1a8 = uVar4;
      uStack_1a0 = uVar1;
      (*(code *)*puVar8)(plVar10,&uStack_1a8,puVar8[1]);
      if (plVar7 == (longlong *)0x0) goto code_r0x000180760bc3;
      lVar11 = *plVar7;
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        uVar15 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 0xad)
                      * 0x10 + 0x138 + lVar11);
            goto code_r0x000180760599;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180760599:
      uStack_138 = uVar4;
      uStack_130 = uVar1;
      (*(code *)*puVar8)(plVar7,&uStack_138,puVar8[1]);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41000000,0);
      if (plVar7 == (longlong *)0x0) goto code_r0x000180760bbe;
      uVar4 = *puVar8;
      uVar1 = *(undefined4 *)(puVar8 + 1);
      lVar11 = *plVar7;
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        uVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar16 * 0x10) + 0x4f)
                      * 0x10 + 0x138 + lVar11);
            goto code_r0x000180760649;
          }
          uVar15 = (short)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180760649:
      uStack_168 = uVar4;
      uStack_160 = uVar1;
      (*(code *)*puVar8)(plVar7,&uStack_168,puVar8[1]);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar4 = func_0x000182601c10(0,0);
      if (plVar7 == (longlong *)0x0) goto code_r0x000180760bb9;
      lVar11 = *plVar7;
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        uVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar16 * 0x10) + 0x3d)
                      * 0x10 + 0x138 + lVar11);
            goto code_r0x0001807606d9;
          }
          uVar15 = (short)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x0001807606d9:
      (*(code *)*puVar8)(plVar7,uVar4,puVar8[1]);
      SparkEstilo__Moldura__180721b40(lVar6,0);
      lVar11 = IconTable__get_Instance(0);
      if (lVar11 != 0) {
        lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        lVar12 = IconTable__get_Instance(0);
        if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x000180760b8c;
        if (lVar12 == 0) goto code_r0x000180760b87;
        uVar4 = IconTable__GetIcon(lVar12,*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x14),0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_b8,uVar4,0);
        if (lVar11 == 0) goto code_r0x000180760b81;
        uStack_108 = *puVar8;
        uStack_100 = puVar8[1];
        uStack_f8 = *(undefined4 *)(puVar8 + 2);
        uStack_f4 = *(undefined4 *)((longlong)puVar8 + 0x14);
        uStack_f0 = *(undefined4 *)(puVar8 + 3);
        uStack_ec = *(undefined4 *)((longlong)puVar8 + 0x1c);
        uStack_e8 = puVar8[4];
        FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_108);
      }
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0);
      if (lVar5 == 0) goto code_r0x000180760bb4;
      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar6,0);
      lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
      if (lVar6 == 0) goto code_r0x000180760baf;
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar4 = func_0x000182601c10(0x3f800000,0);
      if (lVar11 == 0) goto code_r0x000180760baa;
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar11,uVar4);
      lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar4 = func_0x000182601c10(0x3f800000,0);
      if (lVar11 == 0) goto code_r0x000180760ba5;
      FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar4);
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0);
      uVar4 = SparkLojaCristalWindow__NomeDo(*(undefined8 *)(lVar9 + 0x10),0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_198 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x40);
      uStack_190 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x48);
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x000180cb7cb0(&uStack_128,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_b8 = (undefined4)uStack_128;
      uStack_b4 = uStack_128._4_4_;
      uStack_b0 = (undefined4)uStack_120;
      uStack_ac = uStack_120._4_4_;
      uStack_a8 = uStack_118;
      uVar4 = SparkEstilo__Texto__180722af0(uVar4,0xb,&uStack_b8,1,0);
      UnityEngine_UIElements_VisualElement__Add(lVar6,uVar4,0);
      if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x000180760ba0;
      auStackX_18[0] = *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x24);
      uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
      if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x000180760b9b;
      uVar13 = SparkUI__NomeDoItem(*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x1c),0);
      uVar4 = System_String__Format(LIT_"'You receive {0:N0} {1}'",uVar4,uVar13,0);
      uStack_198 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x80);
      uStack_190 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x88);
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      func_0x000180cb7cb0(&uStack_158,&uStack_198,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_108 = uStack_158;
      uStack_100 = uStack_150;
      uStack_f8 = uStack_148;
      uVar4 = SparkEstilo__Texto__180722af0(uVar4,10,&uStack_108,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar6,uVar4,0);
      UnityEngine_UIElements_VisualElement__Add(lVar5,lVar6,0);
      if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x000180760b96;
      SparkEstilo__Marca__180721270
                (lVar5,*(int *)(*(longlong *)(lVar9 + 0x10) + 0x10) == *(int *)(param_1 + 0x128),0);
      uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar4,lVar9,MD_SparkLojaCristalWindow.__c__DisplayClass45_0._MontaLista_b__0,0);
      FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
      if (*(longlong *)(param_1 + 0x118) == 0) goto code_r0x000180760b91;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x118),lVar5);
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

