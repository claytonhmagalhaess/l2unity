// SparkRefinoWindow__MontaLista__1805b4df0 @ 0x1805b4df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__MontaLista__1805b4df0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong *plStackX_20;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined4 auStack_150 [2];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_90 [88];
  
  if (cRam00000001834b3a2c == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<ItemInstance>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkForjaEfeitos);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MD_SparkRefinoWindow.__c__DisplayClass48_0._MontaLista_b__0);
    FUN_180315380(TI_SparkRefinoWindow.<>c__DisplayClass48_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(TI_Weapon);
    FUN_180315380(LIT_"'You have no augmented items.'");
    FUN_180315380(LIT_"'You have no weapon that can be augmented.'");
    FUN_180315380(LIT_"'You have no Life Stones.'");
    FUN_180315380(LIT_"'<color=#FFDD8C>+{0}</color> {1}'");
    FUN_180315380(LIT_"'  <color=#C8B88A>x{0:N0}</color>'");
    FUN_180315380(LIT_"'  <color=#A0A0A0>(equipped)</color>'");
    FUN_180315380(LIT_"'Life Stone'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3a2c = '\x01';
  }
  uStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<ItemInstance>);
  FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<ItemInstance>..ctor);
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  uVar9 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar4 == '\0') {
code_r0x0001805b5217:
    uVar16 = 0;
    plVar6 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
    System_Text_StringBuilder___ctor(plVar6,0);
    plStackX_20 = plVar6;
    if ((((plVar6 != (longlong *)0x0) &&
         (lVar7 = System_Text_StringBuilder__Append(plVar6,*(undefined1 *)(param_1 + 0x89),0),
         lVar7 != 0)) &&
        ((lVar7 = System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar7 != 0 &&
         (((lVar7 = System_Text_StringBuilder__Append(lVar7,*(undefined4 *)(param_1 + 0x100),0),
           lVar7 != 0 && (lVar7 = System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar7 != 0)) &&
          (lVar7 = System_Text_StringBuilder__Append(lVar7,*(undefined4 *)(param_1 + 0x104),0),
          lVar7 != 0)))))) && (System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar5 != 0)) {
      FUN_180bada40(&uStack_148,lVar5,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
      uStack_168 = uStack_148;
      uStack_160 = uStack_140;
      lStack_158 = CONCAT44(uStack_134,uStack_138);
      uStack_188 = 0;
      puStack_180 = &uStack_168;
      while (cVar4 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext), lVar7 = lStack_158, cVar4 != '\0') {
        if (lStack_158 == 0) goto code_r0x0001805b6056;
        lVar8 = System_Text_StringBuilder__Append(plVar6,*(undefined4 *)(lStack_158 + 0x18));
        if (lVar8 == 0) goto code_r0x0001805b6051;
        lVar8 = System_Text_StringBuilder__Append(lVar8,0x3a);
        if (lVar8 == 0) goto code_r0x0001805b604c;
        lVar8 = System_Text_StringBuilder__Append(lVar8,*(undefined4 *)(lVar7 + 0x28));
        if (lVar8 == 0) goto code_r0x0001805b6047;
        lVar8 = System_Text_StringBuilder__Append(lVar8,0x3a);
        if (lVar8 == 0) goto code_r0x0001805b6042;
        lVar7 = System_Text_StringBuilder__Append(lVar8,*(undefined4 *)(lVar7 + 0x44));
        if (lVar7 == 0) goto code_r0x0001805b603d;
        System_Text_StringBuilder__Append(lVar7,0x2c);
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      cVar4 = func_0x0001817058a0(uVar9,*(undefined8 *)(param_1 + 0x120),0);
      if (cVar4 != '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0x120) = uVar9;
      func_0x000180314690(param_1 + 0x120,uVar9);
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xb8),0);
        if (((*(char *)(param_1 + 0x89) == '\0') && (*(int *)(param_1 + 0x100) != 0)) &&
           (*(int *)(param_1 + 0x104) != 0)) {
          if (*(longlong *)(param_1 + 0xc0) != 0) {
            lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0)
            ;
            uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar5 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar9);
              return;
            }
          }
        }
        else if (*(longlong *)(param_1 + 0xc0) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
            if (*(int *)(lVar5 + 0x18) == 0) {
              uVar9 = LIT_"'You have no augmented items.'";
              if ((*(char *)(param_1 + 0x89) == '\0') &&
                 (uVar9 = LIT_"'You have no Life Stones.'", *(int *)(param_1 + 0x100) == 0)) {
                uVar9 = LIT_"'You have no weapon that can be augmented.'";
              }
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660(TI_SparkEstilo);
              }
              uStack_108 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
              puStack_100 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
              uStack_f8 = 0;
              uStack_f0 = 0;
              uStack_e8 = 0;
              func_0x000180cb7cb0(&uStack_f8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_148 = uStack_f8;
              uStack_140 = uStack_f0;
              uStack_138 = uStack_e8;
              lVar5 = SparkEstilo__Texto__180722af0(uVar9,0xb,&uStack_148,0,0);
              if (lVar5 != 0) {
                plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                puVar11 = (undefined8 *)
                          UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,0x41000000,0);
                if (plVar6 != (longlong *)0x0) {
                  uVar9 = *puVar11;
                  uVar2 = *(undefined4 *)(puVar11 + 1);
                  lVar7 = *plVar6;
                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                    uVar13 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar13 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar11 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar13 * 0x10) + 0x4d
                                   ) * 0x10 + 0x138 + lVar7);
                        goto code_r0x0001805b5f19;
                      }
                      uVar15 = (short)uVar13 + 1;
                      uVar13 = (ulonglong)uVar15;
                    } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                  }
                  puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805b5f19:
                  uStack_178 = uVar9;
                  uStack_170 = uVar2;
                  (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
                  plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                  puVar11 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit
                                      (&uStack_188,0x40c00000,0);
                  if (plVar6 != (longlong *)0x0) {
                    uVar9 = *puVar11;
                    uVar2 = *(undefined4 *)(puVar11 + 1);
                    lVar7 = *plVar6;
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar16 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar11 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar16 * 0x10) +
                                     0x51) * 0x10 + 0x138 + lVar7);
                          goto code_r0x0001805b5fa7;
                        }
                        uVar15 = (short)uVar16 + 1;
                        uVar16 = (ulonglong)uVar15;
                      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805b5fa7:
                    uStack_178 = uVar9;
                    uStack_170 = uVar2;
                    (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0xb8),lVar5,0);
                      return;
                    }
                  }
                }
              }
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar1 = 0;
            FUN_180bada40(&uStack_148,lVar5,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
            uStack_168 = uStack_148;
            uStack_160 = uStack_140;
            lStack_158 = CONCAT44(uStack_134,uStack_138);
            uStack_108 = 0;
            uVar13 = uVar16;
            puStack_100 = &uStack_168;
            while( true ) {
              cVar4 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
              lVar5 = lStack_158;
              if (cVar4 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
                return;
              }
              lVar7 = func_0x000180315580(TI_SparkRefinoWindow.<>c__DisplayClass48_0);
              lStack_d0 = lVar7;
              Gear__UpdateWeaponType__1803dadf0(lVar7,0);
              if (lVar7 == 0) break;
              *(longlong *)(lVar7 + 0x18) = param_1;
              func_0x000180314690(lVar7 + 0x18,param_1);
              *(longlong *)(lVar7 + 0x10) = lVar5;
              func_0x000180314690(lVar7 + 0x10,lVar5);
              if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
                func_0x000180315660();
              }
              lStack_118 = SparkForjaEfeitos__LinhaAlternada(uVar13,0x24,0);
              lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
              UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
              if (lVar7 == 0) goto code_r0x0001805b60a8;
              plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(auStack_90,0x41f00000,0);
              if (plVar10 == (longlong *)0x0) goto code_r0x0001805b60a3;
              uVar9 = *puVar11;
              uVar2 = *(undefined4 *)(puVar11 + 1);
              lVar8 = *plVar10;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x43) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805b5729;
                  }
                  uVar15 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar15;
                } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805b5729:
              uStack_c8 = uVar9;
              uStack_c0 = uVar2;
              (*(code *)*puVar11)(plVar10,&uStack_c8,puVar11[1]);
              if (plVar6 == (longlong *)0x0) goto code_r0x0001805b609e;
              lVar8 = *plVar6;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0xad) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805b57a9;
                  }
                  uVar15 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar15;
                } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805b57a9:
              uStack_b8 = uVar9;
              uStack_b0 = uVar2;
              (*(code *)*puVar11)(plVar6,&uStack_b8,puVar11[1]);
              plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,0x41000000,0);
              if (plVar6 == (longlong *)0x0) goto code_r0x0001805b6099;
              uVar9 = *puVar11;
              uVar2 = *(undefined4 *)(puVar11 + 1);
              lVar8 = *plVar6;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x4f) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805b5849;
                  }
                  uVar15 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar15;
                } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805b5849:
              uStack_178 = uVar9;
              uStack_170 = uVar2;
              (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
              plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar9 = func_0x000182601c10(0,0);
              if (plVar6 == (longlong *)0x0) goto code_r0x0001805b6094;
              lVar8 = *plVar6;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x3d) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805b58d9;
                  }
                  uVar15 = (short)uVar13 + 1;
                  uVar13 = (ulonglong)uVar15;
                } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x0001805b58d9:
              (*(code *)*puVar11)(plVar6,uVar9,puVar11[1]);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkEstilo__Moldura__180721b40(lVar7,0);
              lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              lVar12 = IconTable__get_Instance(0);
              uVar13 = uVar16;
              if (lVar12 != 0) {
                lVar12 = IconTable__get_Instance(0);
                if (lVar5 == 0) goto code_r0x0001805b6067;
                if (lVar12 == 0) goto code_r0x0001805b6062;
                uVar13 = IconTable__GetIcon(lVar12,*(undefined4 *)(lVar5 + 0x1c),0);
              }
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_f8,uVar13,0);
              if (lVar8 == 0) goto code_r0x0001805b608f;
              uStack_148 = *puVar11;
              uStack_140 = puVar11[1];
              uStack_138 = *(undefined4 *)(puVar11 + 2);
              uStack_134 = *(undefined4 *)((longlong)puVar11 + 0x14);
              uStack_130 = *(undefined4 *)(puVar11 + 3);
              uStack_12c = *(undefined4 *)((longlong)puVar11 + 0x1c);
              uStack_128 = puVar11[4];
              FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_148);
              lVar8 = lStack_118;
              if (lStack_118 == 0) goto code_r0x0001805b608a;
              UnityEngine_UIElements_VisualElement__Add(lStack_118,lVar7,0);
              if (lVar5 == 0) goto code_r0x0001805b6085;
              uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x1c),0);
              if (0 < *(int *)(lVar5 + 0x34)) {
                plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,*(undefined4 *)(lVar5 + 0x34));
                uVar14 = func_0x000180314670(_DAT_1834c6268,&plStackX_20);
                uVar9 = System_String__Format(LIT_"'<color=#FFDD8C>+{0}</color> {1}'",uVar14,uVar9,0);
              }
              if (1 < *(int *)(lVar5 + 0x28)) {
                auStack_150[0] = *(undefined4 *)(lVar5 + 0x28);
                uVar14 = func_0x000180314670(_DAT_1834c6268,auStack_150);
                uVar14 = System_String__Format(LIT_"'  <color=#C8B88A>x{0:N0}</color>'",uVar14,0);
                uVar9 = System_String__Concat(uVar9,uVar14,0);
              }
              if (*(char *)(lVar5 + 0x2e) != '\0') {
                uVar9 = System_String__Concat(uVar9,LIT_"'  <color=#A0A0A0>(equipped)</color>'",0);
              }
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660(TI_SparkEstilo);
              }
              lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
              lStack_118 = *(longlong *)(lVar7 + 0x40);
              uStack_110 = *(undefined4 *)(lVar7 + 0x48);
              uStack_10c = *(undefined4 *)(lVar7 + 0x4c);
              uStack_f8 = 0;
              uStack_f0 = 0;
              uStack_e8 = 0;
              func_0x000180cb7cb0(&uStack_f8,&lStack_118,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_148 = uStack_f8;
              uStack_140 = uStack_f0;
              uStack_138 = uStack_e8;
              lVar7 = SparkEstilo__Texto__180722af0(uVar9,0xb,&uStack_148,0,0);
              if (lVar7 == 0) goto code_r0x0001805b6080;
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar9 = func_0x000182601c10(0x3f800000,0);
              if (lVar12 == 0) goto code_r0x0001805b607b;
              FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar9 = func_0x000182601c10(0x3f800000,0);
              if (lVar12 == 0) goto code_r0x0001805b6076;
              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
              if (lVar12 == 0) goto code_r0x0001805b6071;
              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
              UnityEngine_UIElements_VisualElement__Add(lVar8,lVar7,0);
              uVar13 = uVar16;
              if (*(char *)(param_1 + 0x89) != '\0') {
                uVar13 = (ulonglong)(*(int *)(lVar5 + 0x18) == *(int *)(param_1 + 0x100));
              }
              if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkForjaEfeitos__Marca(lVar8,uVar13,0);
              uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x1c),0);
              if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar9 = SparkDicaItem__Monta__180628cc0(lVar5,uVar9,0);
              uVar14 = func_0x000180315580(TI_TooltipManipulator);
              TooltipManipulator___ctor__1807b5900(uVar14,lVar8,1,uVar9,0);
              UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar8,uVar14,0);
              uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
              FUN_18055b980(uVar9,lStack_d0,MD_SparkRefinoWindow.__c__DisplayClass48_0._MontaLista_b__0,0);
              FUN_180990d50(lVar8,uVar9,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
              if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001805b606c;
              uVar1 = uVar1 + 1;
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xb8),lVar8);
              uVar13 = (ulonglong)uVar1;
            }
            goto code_r0x0001805b60ad;
          }
        }
      }
    }
  }
  else {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerInventory + 0xb8) != 0) &&
       (lVar7 = *(longlong *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x28), lVar7 != 0)) {
      FUN_180bada40(&uStack_148,lVar7,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
      uStack_168 = uStack_148;
      uStack_160 = uStack_140;
      lStack_158 = CONCAT44(uStack_134,uStack_138);
      uStack_188 = 0;
      puStack_180 = &uStack_168;
code_r0x0001805b50c0:
      cVar4 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
      lVar7 = lStack_158;
      if (cVar4 != '\0') {
        if ((lStack_158 != 0) && (*(longlong *)(lStack_158 + 0x10) != 0)) {
          if (*(char *)(param_1 + 0x89) == '\0') {
            if (*(int *)(param_1 + 0x100) == 0) {
              if (*(longlong **)(lStack_158 + 0x10) == (longlong *)0x0) goto code_r0x0001805b50c0;
              lVar8 = **(longlong **)(lStack_158 + 0x10);
              if ((((*(byte *)(lVar8 + 0x130) < *(byte *)(TI_Weapon + 0x130)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar8 + 200) + -8 +
                     (ulonglong)*(byte *)(TI_Weapon + 0x130) * 8) != TI_Weapon
                   )) || (*(char *)(lStack_158 + 0x2d) != '\0')) ||
                 (*(int *)(lStack_158 + 0x44) != 0)) goto code_r0x0001805b50c0;
              if (lVar5 == 0) goto code_r0x0001805b602c;
            }
            else {
              if (*(int *)(param_1 + 0x104) != 0) goto code_r0x0001805b50c0;
              lVar8 = LIT_"''";
              if (*(longlong *)(*(longlong *)(lStack_158 + 0x10) + 0x20) != 0) {
                lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lStack_158 + 0x10) + 0x20) + 0x18)
                ;
              }
              if ((lVar8 == 0) ||
                 (cVar4 = System_String__Contains(lVar8,LIT_"'Life Stone'"), cVar4 == '\0'))
              goto code_r0x0001805b50c0;
              if (lVar5 == 0) goto code_r0x0001805b6027;
            }
          }
          else {
            if (*(int *)(lStack_158 + 0x44) == 0) goto code_r0x0001805b50c0;
            if (lVar5 == 0) goto code_r0x0001805b6031;
          }
          FUN_180002eb0(lVar5,lVar7);
        }
        goto code_r0x0001805b50c0;
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
      goto code_r0x0001805b5217;
    }
  }
  FUN_1803155d0();
code_r0x0001805b6027:
  FUN_1803155d0();
code_r0x0001805b602c:
  FUN_1803155d0();
code_r0x0001805b6031:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805b603d:
  FUN_1803155d0();
code_r0x0001805b6042:
  FUN_1803155d0();
code_r0x0001805b6047:
  FUN_1803155d0();
code_r0x0001805b604c:
  FUN_1803155d0();
code_r0x0001805b6051:
  FUN_1803155d0();
code_r0x0001805b6056:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805b6062:
  FUN_1803155d0();
code_r0x0001805b6067:
  FUN_1803155d0();
code_r0x0001805b606c:
  FUN_1803155d0();
code_r0x0001805b6071:
  FUN_1803155d0();
code_r0x0001805b6076:
  FUN_1803155d0();
code_r0x0001805b607b:
  FUN_1803155d0();
code_r0x0001805b6080:
  FUN_1803155d0();
code_r0x0001805b6085:
  FUN_1803155d0();
code_r0x0001805b608a:
  FUN_1803155d0();
code_r0x0001805b608f:
  FUN_1803155d0();
code_r0x0001805b6094:
  FUN_1803155d0();
code_r0x0001805b6099:
  FUN_1803155d0();
code_r0x0001805b609e:
  FUN_1803155d0();
code_r0x0001805b60a3:
  FUN_1803155d0();
code_r0x0001805b60a8:
  FUN_1803155d0();
code_r0x0001805b60ad:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

