// SparkCraftWindow__MontaLista__1805f0f50 @ 0x1805f0f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__MontaLista__1805f0f50(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uStackX_18;
  undefined4 auStackX_20 [2];
  undefined4 auStack_208 [4];
  longlong lStack_1f8;
  undefined4 uStack_1f0;
  undefined4 auStack_1e8 [2];
  longlong lStack_1e0;
  longlong alStack_1d8 [2];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_90 [88];
  
  if (cRam00000001834b3bb0 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,int>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<int>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_SparkCraftWindow.__c__DisplayClass47_0._MontaLista_b__0);
    FUN_180315380(TI_SparkCraftWindow.<>c__DisplayClass47_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Lv {0}  ·  {1}%  ·  MP {2}'");
    FUN_180315380(LIT_"'Nothing to craft here.'");
    FUN_180315380(LIT_"'{0:N0} Adena  ·  '");
    FUN_180315380(LIT_"'Recipes ({0})'");
    FUN_180315380(LIT_"'Items made here ({0})'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Your recipe book is empty. Use a recipe to learn it.'");
    cRam00000001834b3bb0 = '\x01';
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  auStackX_20[0] = 0;
  if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001805f2092;
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xd8),0);
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
  FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<int>..ctor);
  alStack_1d8[0] = lVar5;
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,int>);
  lStack_188 = lVar6;
  FUN_1811e4340(lVar6,MR_System.Collections.Generic.Dictionary<int,int>..ctor);
  lStack_1e0 = lVar6;
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660(TI_SparkCraft);
    }
    if (lVar5 == 0) goto code_r0x0001805f2092;
    uVar8 = **(undefined8 **)(TI_SparkCraft + 0xb8);
code_r0x0001805f13d4:
    func_0x00018162d1b0(lVar5,uVar8,MR_System.Collections.Generic.List<int>.AddRange);
  }
  else {
    if (*(int *)(param_1 + 0x8c) == 1) {
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCraft);
      }
      if (lVar5 == 0) goto code_r0x0001805f2092;
      uVar8 = *(undefined8 *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x28);
      goto code_r0x0001805f13d4;
    }
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660(TI_SparkCraft);
    }
    lVar9 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x58);
    if (lVar9 == 0) goto code_r0x0001805f2092;
    FUN_180bada40(&uStack_168,lVar9,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator);
    uStack_108 = uStack_168;
    uStack_100 = uStack_160;
    uStack_f8 = CONCAT44(uStack_154,uStack_158);
    uStack_180 = 0;
    puStack_178 = &uStack_108;
    while (cVar3 = FUN_1812ed5e0(&uStack_108,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext), uVar18 = uStack_f8,
          lVar9 = MR_System.Collections.Generic.List<int>.Add, cVar3 != '\0') {
      uStackX_18 = uStack_f8;
      if (lVar5 == 0) goto code_r0x0001805f202c;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      lVar13 = *(longlong *)(lVar5 + 0x10);
      if (lVar13 == 0) {
code_r0x0001805f2027:
        FUN_1803155d0();
code_r0x0001805f202c:
        FUN_1803155d0();
        FUN_180311490();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(int *)(lVar13 + 0x20 + (longlong)(int)uVar1 * 4) = (int)uStack_f8;
          goto code_r0x0001805f12e3;
        }
        FUN_1803155c0();
code_r0x0001805f2022:
        FUN_1803155d0();
        goto code_r0x0001805f2027;
      }
      FUN_18162d2b0(lVar5,uStack_f8 & 0xffffffff,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xc0) + 0x70));
code_r0x0001805f12e3:
      if (lVar6 == 0) goto code_r0x0001805f2022;
      FUN_1811f4b00(lVar6,uVar18 & 0xffffffff);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_108,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose);
  }
  plVar10 = *(longlong **)(param_1 + 0x98);
  if (*(int *)(param_1 + 0x8c) == 2) {
    if (lVar5 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStackX_18 = CONCAT44(uStackX_18._4_4_,*(undefined4 *)(lVar5 + 0x18));
    uVar7 = func_0x000180314670(_DAT_1834c6268,&uStackX_18);
    uVar8 = LIT_"'Items made here ({0})'";
  }
  else {
    if (lVar5 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    auStack_208[0] = *(undefined4 *)(lVar5 + 0x18);
    uVar7 = func_0x000180314670(_DAT_1834c6268,auStack_208);
    uVar8 = LIT_"'Recipes ({0})'";
  }
  uVar8 = System_String__Format(uVar8,uVar7,0);
  if (plVar10 == (longlong *)0x0) {
code_r0x0001805f2092:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(*plVar10 + 0xe48))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0xe50));
  if (*(int *)(lVar5 + 0x18) == 0) {
    uVar8 = LIT_"'Your recipe book is empty. Use a recipe to learn it.'";
    if (*(int *)(param_1 + 0x8c) == 2) {
      uVar8 = LIT_"'Nothing to craft here.'";
    }
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_1a8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    puStack_1a0 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x000180cb7cb0(&uStack_1c8,&uStack_1a8,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_138 = uStack_1c8;
    uStack_130 = uStack_1c0;
    uStack_128 = uStack_1b8;
    lVar6 = SparkEstilo__Texto__180722af0(uVar8,0xb,&uStack_138,0,0);
    if (lVar6 != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
      if (lVar9 != 0) {
        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
        plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        plVar11 = (longlong *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_198,0x41000000,0);
        if (plVar10 != (longlong *)0x0) {
          lVar9 = *plVar11;
          lVar14 = plVar11[1];
          lVar13 = *plVar10;
          uVar17 = 0;
          if (*(ushort *)(lVar13 + 0x12e) != 0) {
            uVar16 = uVar17;
            do {
              if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) +
                           0x4d) * 0x10 + 0x138 + lVar13);
                goto code_r0x0001805f1609;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar13 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805f1609:
          lStack_1f8 = lVar9;
          uStack_1f0 = (int)lVar14;
          (*(code *)*puVar12)(plVar10,&lStack_1f8,puVar12[1]);
          plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          plVar11 = (longlong *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_198,0x41000000,0);
          if (plVar10 != (longlong *)0x0) {
            lVar9 = *plVar11;
            lVar14 = plVar11[1];
            lVar13 = *plVar10;
            if (*(ushort *)(lVar13 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10)
                             + 0x51) * 0x10 + 0x138 + lVar13);
                  goto code_r0x0001805f16a5;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805f16a5:
            lStack_1f8 = lVar9;
            uStack_1f0 = (int)lVar14;
            (*(code *)*puVar12)(plVar10,&lStack_1f8,puVar12[1]);
            if (*(longlong *)(param_1 + 0xd8) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xd8),lVar6,0);
              goto code_r0x0001805f1725;
            }
          }
        }
      }
    }
    FUN_1803155d0();
code_r0x0001805f2044:
    FUN_1803155d0();
code_r0x0001805f2049:
    FUN_1803155d0();
code_r0x0001805f204e:
    FUN_1803155d0();
code_r0x0001805f2053:
    FUN_1803155d0();
code_r0x0001805f2058:
    FUN_1803155d0();
code_r0x0001805f205d:
    FUN_1803155d0();
code_r0x0001805f2062:
    FUN_1803155d0();
code_r0x0001805f2067:
    FUN_1803155d0();
code_r0x0001805f206c:
    FUN_1803155d0();
code_r0x0001805f2071:
    FUN_1803155d0();
code_r0x0001805f2076:
    FUN_1803155d0();
code_r0x0001805f207b:
    FUN_1803155d0();
  }
  else {
code_r0x0001805f1725:
    FUN_180be3fd0(&uStack_168,lVar5,MR_System.Collections.Generic.List<int>.GetEnumerator);
    uStack_f0 = uStack_168;
    uStack_e8 = uStack_160;
    uStack_e0 = CONCAT44(uStack_154,uStack_158);
    uStack_1a8 = 0;
    puStack_1a0 = &uStack_f0;
    while( true ) {
      cVar3 = FUN_1812f11f0(&uStack_f0,MR_System.Collections.Generic.List<int>.MoveNext);
      uVar18 = uStack_e0;
      if (cVar3 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_f0,MR_System.Collections.Generic.List<int>.Dispose);
        return;
      }
      uVar19 = (undefined4)uStack_e0;
      uStackX_18 = CONCAT44(uStackX_18._4_4_,(undefined4)uStack_e0);
      lVar5 = func_0x000180315580(TI_SparkCraftWindow.<>c__DisplayClass47_0);
      lStack_1f8 = lVar5;
      SparkMapaWindow_Loja___ctor__1803f01b0(lVar5,0);
      if (lVar5 == 0) break;
      *(longlong *)(lVar5 + 0x18) = param_1;
      func_0x000180314690(lVar5 + 0x18,param_1);
      *(undefined4 *)(lVar5 + 0x10) = uVar19;
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = SparkCraft__Info(uVar18 & 0xffffffff,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar6 = SparkEstilo__Linha__180720db0(0x26,0);
      lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
      if (lVar9 == 0) goto code_r0x0001805f207b;
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      puVar12 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_90,0x42000000,0);
      if (plVar11 == (longlong *)0x0) goto code_r0x0001805f2076;
      uVar8 = *puVar12;
      uVar19 = *(undefined4 *)(puVar12 + 1);
      lVar13 = *plVar11;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        uVar17 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) + 0x43
                       ) * 0x10 + 0x138 + lVar13);
            goto code_r0x0001805f18e9;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805f18e9:
      uStack_d8 = uVar8;
      uStack_d0 = uVar19;
      (*(code *)*puVar12)(plVar11,&uStack_d8,puVar12[1]);
      if (plVar10 == (longlong *)0x0) goto code_r0x0001805f2071;
      lVar13 = *plVar10;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        uVar17 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) + 0xad
                       ) * 0x10 + 0x138 + lVar13);
            goto code_r0x0001805f1969;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805f1969:
      uStack_c8 = uVar8;
      uStack_c0 = uVar19;
      (*(code *)*puVar12)(plVar10,&uStack_c8,puVar12[1]);
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      puVar12 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_180,0x41000000,0);
      if (plVar10 == (longlong *)0x0) goto code_r0x0001805f206c;
      uVar8 = *puVar12;
      uVar19 = *(undefined4 *)(puVar12 + 1);
      lVar13 = *plVar10;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)(*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar18 * 0x10) + 0x4f)
                       * 0x10 + 0x138 + lVar13);
            goto code_r0x0001805f1a19;
          }
          uVar17 = (short)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
        } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805f1a19:
      uStack_198 = uVar8;
      uStack_190 = uVar19;
      (*(code *)*puVar12)(plVar10,&uStack_198,puVar12[1]);
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      uVar8 = func_0x000182601c10(0,0);
      if (plVar10 == (longlong *)0x0) goto code_r0x0001805f2067;
      lVar13 = *plVar10;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        uVar18 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + uVar18 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)(*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + uVar18 * 0x10) + 0x3d)
                       * 0x10 + 0x138 + lVar13);
            goto code_r0x0001805f1aa9;
          }
          uVar17 = (short)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
        } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x0001805f1aa9:
      (*(code *)*puVar12)(plVar10,uVar8,puVar12[1]);
      SparkEstilo__Moldura__180721b40(lVar9,0);
      if ((lVar5 != 0) && (lVar13 = IconTable__get_Instance(0), lVar13 != 0)) {
        lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
        lVar14 = IconTable__get_Instance(0);
        if (lVar14 == 0) goto code_r0x0001805f2049;
        uVar8 = IconTable__GetIcon(lVar14,*(undefined4 *)(lVar5 + 0x30),0);
        puVar12 = (undefined8 *)
                  UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_138,uVar8,0);
        if (lVar13 == 0) goto code_r0x0001805f2044;
        uStack_168 = *puVar12;
        uStack_160 = puVar12[1];
        uStack_158 = *(undefined4 *)(puVar12 + 2);
        uStack_154 = *(undefined4 *)((longlong)puVar12 + 0x14);
        uStack_150 = *(undefined4 *)(puVar12 + 3);
        uStack_14c = *(undefined4 *)((longlong)puVar12 + 0x1c);
        uStack_148 = puVar12[4];
        FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_168);
      }
      if (lVar6 == 0) goto code_r0x0001805f2062;
      UnityEngine_UIElements_VisualElement__Add(lVar6,lVar9,0);
      lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
      if (lVar9 == 0) goto code_r0x0001805f205d;
      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
      uVar8 = func_0x000182601c10(0x3f800000,0);
      if (lVar13 == 0) goto code_r0x0001805f2058;
      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar13,uVar8);
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0);
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar18 = uStackX_18;
      cVar3 = SparkCraft__TemMateriais(uStackX_18 & 0xffffffff,0);
      uVar8 = SparkCraft__NomeDoProduto(uVar18 & 0xffffffff,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_1c8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x40);
      uStack_1c0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x48);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      func_0x000180cb7cb0(&uStack_b8,&uStack_1c8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_138 = uStack_b8;
      uStack_130 = uStack_b0;
      uStack_128 = uStack_a8;
      uVar8 = SparkEstilo__Texto__180722af0(uVar8,0xb,&uStack_138,1,0);
      UnityEngine_UIElements_VisualElement__Add(lVar9,uVar8,0);
      uVar8 = LIT_"''";
      if (lVar5 != 0) {
        auStack_208[0] = *(undefined4 *)(lVar5 + 0x24);
        uVar8 = func_0x000180314670(_DAT_1834c6268,auStack_208);
        auStack_1e8[0] = *(undefined4 *)(lVar5 + 0x3c);
        uVar7 = func_0x000180314670(_DAT_1834c6268,auStack_1e8);
        lStack_1e0 = CONCAT44(lStack_1e0._4_4_,*(undefined4 *)(lVar5 + 0x38));
        uVar15 = func_0x000180314670(_DAT_1834c6268,&lStack_1e0);
        uVar8 = System_String__Format(LIT_"'Lv {0}  ·  {1}%  ·  MP {2}'",uVar8,uVar7,uVar15,0);
      }
      if (lStack_188 == 0) goto code_r0x0001805f2053;
      cVar4 = FUN_1811f1940(lStack_188,uStackX_18 & 0xffffffff,auStackX_20,MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
      if (cVar4 != '\0') {
        alStack_1d8[0] = CONCAT44(alStack_1d8[0]._4_4_,auStackX_20[0]);
        uVar7 = func_0x000180314670(_DAT_1834c6268,alStack_1d8);
        uVar7 = System_String__Format(LIT_"'{0:N0} Adena  ·  '",uVar7,0);
        uVar8 = System_String__Concat(uVar7,uVar8,0);
      }
      if (cVar3 == '\0') {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar19 = *(undefined4 *)(lVar5 + 0x50);
        uVar20 = *(undefined4 *)(lVar5 + 0x54);
        uVar21 = *(undefined4 *)(lVar5 + 0x58);
        uVar22 = *(undefined4 *)(lVar5 + 0x5c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uVar19 = *(undefined4 *)(lVar5 + 0x80);
        uVar20 = *(undefined4 *)(lVar5 + 0x84);
        uVar21 = *(undefined4 *)(lVar5 + 0x88);
        uVar22 = *(undefined4 *)(lVar5 + 0x8c);
      }
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_1c8 = CONCAT44(uVar20,uVar19);
      uStack_1c0 = CONCAT44(uVar22,uVar21);
      func_0x000180cb7cb0(&uStack_138,&uStack_1c8,MR_System.Nullable<UnityEngine.Color>..ctor);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_168 = uStack_138;
      uStack_160 = uStack_130;
      uStack_158 = uStack_128;
      uVar8 = SparkEstilo__Texto__180722af0(uVar8,10,&uStack_168,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar9,uVar8,0);
      UnityEngine_UIElements_VisualElement__Add(lVar6,lVar9,0);
      SparkEstilo__Marca__180721270(lVar6,(int)uStackX_18 == *(int *)(param_1 + 0x138),0);
      uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar8,lStack_1f8,MD_SparkCraftWindow.__c__DisplayClass47_0._MontaLista_b__0,0);
      FUN_180990d50(lVar6,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
      if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001805f204e;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xd8),lVar6);
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

