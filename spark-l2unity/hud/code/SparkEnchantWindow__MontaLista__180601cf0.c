// SparkEnchantWindow__MontaLista__180601cf0 @ 0x180601cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantWindow__MontaLista__180601cf0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
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
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  longlong *plStackX_20;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_90 [88];
  
  if (cRam00000001834b3bdc == '\0') {
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
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MD_SparkEnchantWindow.__c__DisplayClass52_0._MontaLista_b__0);
    FUN_180315380(TI_SparkEnchantWindow.<>c__DisplayClass52_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'<color=#FFDD8C>+{0}</color> {1}'");
    FUN_180315380(LIT_"'  <color=#A0A0A0>(equipped)</color>'");
    FUN_180315380(LIT_"'You have no item this scroll can enchant.'");
    cRam00000001834b3bdc = '\x01';
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
  cVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar3 != '\0') {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerInventory + 0xb8) == 0) ||
       (lVar7 = *(longlong *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x28), lVar7 == 0))
    goto code_r0x000180602d6e;
    FUN_180bada40(&uStack_148,lVar7,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    uStack_168 = uStack_148;
    uStack_160 = uStack_140;
    lStack_158 = CONCAT44(uStack_134,uStack_138);
    uStack_188 = 0;
    puStack_180 = &uStack_168;
code_r0x000180601f70:
    cVar3 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    lVar7 = lStack_158;
    if (cVar3 != '\0') {
      if (cRam00000001834b3bdb == '\0') {
        FUN_180315380(TI_SparkDicaItem);
        cRam00000001834b3bdb = '\x01';
      }
      if ((((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) && (*(longlong *)(lVar7 + 0x38) < 0)
          ) && (((*(int *)(lVar7 + 0x1c) < 0x19d3 || (0x19dd < *(uint *)(lVar7 + 0x1c))) &&
                (cVar3 = SparkEnchant__GrauDoScroll__180841f70(*(undefined4 *)(param_1 + 0xf0),0),
                cVar3 != '\0')))) {
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkDicaItem__GrauDoItem__180626710(lVar7,0);
        if (cVar4 == cVar3) {
          cVar4 = SparkEnchant__ScrollDeArma__180842100(*(undefined4 *)(param_1 + 0xf0),0);
          cVar3 = *(char *)(lVar7 + 0x2d);
          if (cVar4 == '\0') {
            if (cVar3 != '\x01') {
              bVar18 = cVar3 == '\x02';
              goto code_r0x00018060202e;
            }
          }
          else {
            bVar18 = cVar3 == '\0';
code_r0x00018060202e:
            if (!bVar18) goto code_r0x000180601f70;
          }
          if (lVar5 == 0) goto code_r0x000180602d74;
          FUN_180002eb0(lVar5,lVar7);
        }
      }
      goto code_r0x000180601f70;
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
  }
  uVar17 = 0;
  plVar6 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar6,0);
  plStackX_20 = plVar6;
  if (((plVar6 != (longlong *)0x0) &&
      (lVar7 = System_Text_StringBuilder__Append(plVar6,*(undefined4 *)(param_1 + 0xf0),0),
      lVar7 != 0)) &&
     (((lVar7 = System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar7 != 0 &&
       (((lVar7 = System_Text_StringBuilder__Append(lVar7,*(undefined4 *)(param_1 + 0xf4),0),
         lVar7 != 0 && (lVar7 = System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar7 != 0)) &&
        (lVar7 = System_Text_StringBuilder__Append(lVar7,*(undefined4 *)(param_1 + 0xf8),0),
        lVar7 != 0)))) && (System_Text_StringBuilder__Append(lVar7,0x7c,0), lVar5 != 0)))) {
    FUN_180bada40(&uStack_148,lVar5,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    uStack_168 = uStack_148;
    uStack_160 = uStack_140;
    lStack_158 = CONCAT44(uStack_134,uStack_138);
    uStack_188 = 0;
    puStack_180 = &uStack_168;
    while (cVar3 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext), lVar7 = lStack_158, cVar3 != '\0') {
      if (lStack_158 == 0) goto code_r0x000180602d99;
      lVar8 = System_Text_StringBuilder__Append(plVar6,*(undefined4 *)(lStack_158 + 0x18));
      if (lVar8 == 0) goto code_r0x000180602d94;
      lVar8 = System_Text_StringBuilder__Append(lVar8,0x3a);
      if (lVar8 == 0) goto code_r0x000180602d8f;
      lVar8 = System_Text_StringBuilder__Append(lVar8,*(undefined4 *)(lVar7 + 0x34));
      if (lVar8 == 0) goto code_r0x000180602d8a;
      lVar8 = System_Text_StringBuilder__Append(lVar8,0x3a);
      if (lVar8 == 0) goto code_r0x000180602d85;
      lVar7 = System_Text_StringBuilder__Append(lVar8,*(undefined1 *)(lVar7 + 0x2e));
      if (lVar7 == 0) goto code_r0x000180602d80;
      System_Text_StringBuilder__Append(lVar7,0x2c);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    cVar3 = func_0x0001817058a0(uVar9,*(undefined8 *)(param_1 + 0x140),0);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_1 + 0x140) = uVar9;
      func_0x000180314690(param_1 + 0x140,uVar9);
      if (*(longlong *)(param_1 + 0xa8) == 0) goto code_r0x000180602d6e;
      UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xa8),0);
      if (*(int *)(lVar5 + 0x18) == 0) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        uStack_118 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
        puStack_110 = *(undefined8 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        func_0x000180cb7cb0(&uStack_f8,&uStack_118,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_148 = uStack_f8;
        uStack_140 = uStack_f0;
        uStack_138 = uStack_e8;
        lVar5 = SparkEstilo__Texto__180722af0(LIT_"'You have no item this scroll can enchant.'",0xb,&uStack_148,0,0);
        if (lVar5 != 0) {
          plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar11 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,0x41000000,0);
          if (plVar6 != (longlong *)0x0) {
            uVar9 = *puVar11;
            uVar1 = *(undefined4 *)(puVar11 + 1);
            lVar7 = *plVar6;
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar13 * 0x10) + 0x4d) *
                             0x10 + 0x138 + lVar7);
                  goto code_r0x000180602c39;
                }
                uVar15 = (short)uVar13 + 1;
                uVar13 = (ulonglong)uVar15;
              } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180602c39:
            uStack_178 = uVar9;
            uStack_170 = uVar1;
            (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
            plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,0x40c00000,0);
            if (plVar6 != (longlong *)0x0) {
              uVar9 = *puVar11;
              uVar1 = *(undefined4 *)(puVar11 + 1);
              lVar7 = *plVar6;
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar17 * 0x10) + 0x51) *
                               0x10 + 0x138 + lVar7);
                    goto code_r0x000180602ccb;
                  }
                  uVar15 = (short)uVar17 + 1;
                  uVar17 = (ulonglong)uVar15;
                } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180602ccb:
              uStack_178 = uVar9;
              uStack_170 = uVar1;
              (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xa8),lVar5,0);
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
      uVar16 = 0;
      FUN_180bada40(&uStack_148,lVar5,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
      uStack_168 = uStack_148;
      uStack_160 = uStack_140;
      lStack_158 = CONCAT44(uStack_134,uStack_138);
      uStack_118 = 0;
      uVar13 = uVar17;
      puStack_110 = &uStack_168;
      while (cVar3 = FUN_1812fa7e0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.MoveNext), lVar5 = lStack_158, cVar3 != '\0') {
        lVar7 = func_0x000180315580(TI_SparkEnchantWindow.<>c__DisplayClass52_0);
        lStack_d0 = lVar7;
        Gear__UpdateWeaponType__1803dadf0(lVar7,0);
        if (lVar7 == 0) goto code_r0x000180602df0;
        *(longlong *)(lVar7 + 0x18) = param_1;
        func_0x000180314690(lVar7 + 0x18,param_1);
        *(longlong *)(lVar7 + 0x10) = lVar5;
        func_0x000180314690(lVar7 + 0x10,lVar5);
        if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
          func_0x000180315660();
        }
        lStack_108 = SparkForjaEfeitos__LinhaAlternada(uVar13,0x24,0);
        lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
        if (lVar7 == 0) goto code_r0x000180602deb;
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(auStack_90,0x41f00000,0);
        if (plVar10 == (longlong *)0x0) goto code_r0x000180602de6;
        uVar9 = *puVar11;
        uVar1 = *(undefined4 *)(puVar11 + 1);
        lVar8 = *plVar10;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar11 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x43) * 0x10 +
                         0x138 + lVar8);
              goto code_r0x0001806024b9;
            }
            uVar15 = (short)uVar13 + 1;
            uVar13 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806024b9:
        uStack_c8 = uVar9;
        uStack_c0 = uVar1;
        (*(code *)*puVar11)(plVar10,&uStack_c8,puVar11[1]);
        if (plVar6 == (longlong *)0x0) goto code_r0x000180602de1;
        lVar8 = *plVar6;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar11 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0xad) * 0x10 +
                         0x138 + lVar8);
              goto code_r0x000180602539;
            }
            uVar15 = (short)uVar13 + 1;
            uVar13 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180602539:
        uStack_b8 = uVar9;
        uStack_b0 = uVar1;
        (*(code *)*puVar11)(plVar6,&uStack_b8,puVar11[1]);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,0x41000000,0);
        if (plVar6 == (longlong *)0x0) goto code_r0x000180602ddc;
        uVar9 = *puVar11;
        uVar1 = *(undefined4 *)(puVar11 + 1);
        lVar8 = *plVar6;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar11 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x4f) * 0x10 +
                         0x138 + lVar8);
              goto code_r0x0001806025d9;
            }
            uVar15 = (short)uVar13 + 1;
            uVar13 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001806025d9:
        uStack_178 = uVar9;
        uStack_170 = uVar1;
        (*(code *)*puVar11)(plVar6,&uStack_178,puVar11[1]);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar9 = func_0x000182601c10(0,0);
        if (plVar6 == (longlong *)0x0) goto code_r0x000180602dd7;
        lVar8 = *plVar6;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar11 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar13 * 0x10) + 0x3d) * 0x10 +
                         0x138 + lVar8);
              goto code_r0x000180602669;
            }
            uVar15 = (short)uVar13 + 1;
            uVar13 = (ulonglong)uVar15;
          } while (uVar15 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar11 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x000180602669:
        (*(code *)*puVar11)(plVar6,uVar9,puVar11[1]);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkEstilo__Moldura__180721b40(lVar7,0);
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        lVar12 = IconTable__get_Instance(0);
        uVar13 = uVar17;
        if (lVar12 != 0) {
          lVar12 = IconTable__get_Instance(0);
          if (lVar5 == 0) goto code_r0x000180602daa;
          if (lVar12 == 0) goto code_r0x000180602da5;
          uVar13 = IconTable__GetIcon(lVar12,*(undefined4 *)(lVar5 + 0x1c),0);
        }
        puVar11 = (undefined8 *)
                  UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_f8,uVar13,0);
        if (lVar8 == 0) goto code_r0x000180602dd2;
        uStack_148 = *puVar11;
        uStack_140 = puVar11[1];
        uStack_138 = *(undefined4 *)(puVar11 + 2);
        uStack_134 = *(undefined4 *)((longlong)puVar11 + 0x14);
        uStack_130 = *(undefined4 *)(puVar11 + 3);
        uStack_12c = *(undefined4 *)((longlong)puVar11 + 0x1c);
        uStack_128 = puVar11[4];
        FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_148);
        lVar8 = lStack_108;
        if (lStack_108 == 0) goto code_r0x000180602dcd;
        UnityEngine_UIElements_VisualElement__Add(lStack_108,lVar7,0);
        if (lVar5 == 0) goto code_r0x000180602dc8;
        uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x1c),0);
        if (0 < *(int *)(lVar5 + 0x34)) {
          plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,*(undefined4 *)(lVar5 + 0x34));
          uVar14 = func_0x000180314670(_DAT_1834c6268,&plStackX_20);
          uVar9 = System_String__Format(LIT_"'<color=#FFDD8C>+{0}</color> {1}'",uVar14,uVar9,0);
        }
        if (*(char *)(lVar5 + 0x2e) != '\0') {
          uVar9 = System_String__Concat(uVar9,LIT_"'  <color=#A0A0A0>(equipped)</color>'",0);
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
        lStack_108 = *(longlong *)(lVar7 + 0x40);
        uStack_100 = *(undefined4 *)(lVar7 + 0x48);
        uStack_fc = *(undefined4 *)(lVar7 + 0x4c);
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        func_0x000180cb7cb0(&uStack_f8,&lStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_148 = uStack_f8;
        uStack_140 = uStack_f0;
        uStack_138 = uStack_e8;
        lVar7 = SparkEstilo__Texto__180722af0(uVar9,0xb,&uStack_148,0,0);
        if (lVar7 == 0) goto code_r0x000180602dc3;
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar9 = func_0x000182601c10(0x3f800000,0);
        if (lVar12 == 0) goto code_r0x000180602dbe;
        FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar9 = func_0x000182601c10(0x3f800000,0);
        if (lVar12 == 0) goto code_r0x000180602db9;
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
        if (lVar12 == 0) goto code_r0x000180602db4;
        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar12,uVar9);
        UnityEngine_UIElements_VisualElement__Add(lVar8,lVar7,0);
        if (*(int *)(lVar5 + 0x18) == *(int *)(param_1 + 0xf4)) {
          bVar18 = true;
        }
        else {
          bVar18 = *(int *)(lVar5 + 0x18) == *(int *)(param_1 + 0xf8);
        }
        if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkForjaEfeitos__Marca(lVar8,bVar18,0);
        uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x1c),0);
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar9 = SparkDicaItem__Monta__180628cc0(lVar5,uVar9,0);
        uVar14 = func_0x000180315580(TI_TooltipManipulator);
        TooltipManipulator___ctor__1807b5900(uVar14,lVar8,1,uVar9,0);
        UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar8,uVar14,0);
        uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
        FUN_18055b980(uVar9,lStack_d0,MD_SparkEnchantWindow.__c__DisplayClass52_0._MontaLista_b__0,0);
        FUN_180990d50(lVar8,uVar9,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
        if (*(longlong *)(param_1 + 0xa8) == 0) goto code_r0x000180602daf;
        uVar16 = uVar16 + 1;
        uVar13 = (ulonglong)uVar16;
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xa8),lVar8);
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    }
    return;
  }
code_r0x000180602d6e:
  FUN_1803155d0();
code_r0x000180602d74:
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180602d80:
  FUN_1803155d0();
code_r0x000180602d85:
  FUN_1803155d0();
code_r0x000180602d8a:
  FUN_1803155d0();
code_r0x000180602d8f:
  FUN_1803155d0();
code_r0x000180602d94:
  FUN_1803155d0();
code_r0x000180602d99:
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180602da5:
  FUN_1803155d0();
code_r0x000180602daa:
  FUN_1803155d0();
code_r0x000180602daf:
  FUN_1803155d0();
code_r0x000180602db4:
  FUN_1803155d0();
code_r0x000180602db9:
  FUN_1803155d0();
code_r0x000180602dbe:
  FUN_1803155d0();
code_r0x000180602dc3:
  FUN_1803155d0();
code_r0x000180602dc8:
  FUN_1803155d0();
code_r0x000180602dcd:
  FUN_1803155d0();
code_r0x000180602dd2:
  FUN_1803155d0();
code_r0x000180602dd7:
  FUN_1803155d0();
code_r0x000180602ddc:
  FUN_1803155d0();
code_r0x000180602de1:
  FUN_1803155d0();
code_r0x000180602de6:
  FUN_1803155d0();
code_r0x000180602deb:
  FUN_1803155d0();
code_r0x000180602df0:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

