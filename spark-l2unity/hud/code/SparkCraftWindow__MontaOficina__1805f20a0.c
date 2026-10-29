// SparkCraftWindow__MontaOficina__1805f20a0 @ 0x1805f20a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__MontaOficina__1805f20a0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ushort uVar12;
  ushort uVar13;
  undefined4 auStackX_8 [2];
  undefined4 uStackX_1c;
  undefined8 uStack_118;
  undefined4 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (cRam00000001834b3bb1 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_SparkCraftWindow.__c__DisplayClass48_0._MontaOficina_b__0);
    FUN_180315380(TI_SparkCraftWindow.<>c__DisplayClass48_0);
    FUN_180315380(LIT_"'{0:N0}'");
    FUN_180315380(LIT_"'Select a recipe on the left, set the price and press Add.'");
    FUN_180315380(LIT_"'  ✕'");
    FUN_180315380(LIT_"'IN YOUR WORKSHOP ({0})'");
    cRam00000001834b3bb1 = '\x01';
  }
  if (*(int *)(param_1 + 0x8c) != 1) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
code_r0x0001805f28ee:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xe0),0);
  if (*(longlong *)(param_1 + 0x148) == 0) goto code_r0x0001805f28ee;
  plVar9 = *(longlong **)(param_1 + 0x110);
  auStackX_8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x18);
  uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
  uVar6 = System_String__Format(LIT_"'IN YOUR WORKSHOP ({0})'",uVar6,0);
  if (plVar9 == (longlong *)0x0) goto code_r0x0001805f28ee;
  (**(code **)(*plVar9 + 0xe48))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0xe50));
  if (*(longlong *)(param_1 + 0x148) == 0) goto code_r0x0001805f28ee;
  if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x18) == 0) {
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_118 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    puStack_110 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x000180cb7cb0(&uStack_108,&uStack_118,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_e8 = uStack_108;
    uStack_e0 = uStack_100;
    uStack_d8 = uStack_f8;
    lVar7 = SparkEstilo__Texto__180722af0(LIT_"'Select a recipe on the left, set the price and press Add.'",10,&uStack_e8,0,0);
    if (lVar7 != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
      if (lVar8 != 0) {
        FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        puVar10 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_118,0x40c00000,0);
        if (plVar9 != (longlong *)0x0) {
          uVar6 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          lVar8 = *plVar9;
          uVar13 = 0;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar12 = uVar13;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                           0x4d) * 0x10 + 0x138 + lVar8);
                goto code_r0x0001805f23a9;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805f23a9:
          puStack_110 = (undefined4 *)CONCAT44(puStack_110._4_4_,uVar1);
          uStack_118 = uVar6;
          (*(code *)*puVar10)(plVar9,&uStack_118,puVar10[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_118,0x40800000,0);
          if (plVar9 != (longlong *)0x0) {
            uVar6 = *puVar10;
            uVar1 = *(undefined4 *)(puVar10 + 1);
            lVar8 = *plVar9;
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                             0x51) * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001805f2445;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805f2445:
            puStack_110 = (undefined4 *)CONCAT44(puStack_110._4_4_,uVar1);
            uStack_118 = uVar6;
            (*(code *)*puVar10)(plVar9,&uStack_118,puVar10[1]);
            if (*(longlong *)(param_1 + 0xe0) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar7,0);
              goto code_r0x0001805f24be;
            }
          }
        }
      }
    }
    FUN_1803155d0();
code_r0x0001805f28c2:
    FUN_1803155d0();
code_r0x0001805f28c8:
    FUN_1803155d0();
code_r0x0001805f28cd:
    FUN_1803155d0();
code_r0x0001805f28d2:
    FUN_1803155d0();
code_r0x0001805f28d7:
    FUN_1803155d0();
  }
  else {
code_r0x0001805f24be:
    if (*(longlong *)(param_1 + 0x148) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180bada40(&uStack_a8,*(longlong *)(param_1 + 0x148),MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator);
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    uStack_78 = CONCAT44(uStack_94,uStack_98);
    uStack_118 = 0;
    puStack_110 = &uStack_88;
    while( true ) {
      cVar5 = FUN_1812ed5e0(&uStack_88,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext);
      uVar4 = uStack_78;
      if (cVar5 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_88,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose);
        return;
      }
      lVar7 = func_0x000180315580(TI_SparkCraftWindow.<>c__DisplayClass48_0);
      SparkMapaWindow_Loja___ctor__1803f01b0(lVar7,0);
      if (lVar7 == 0) break;
      *(longlong *)(lVar7 + 0x18) = param_1;
      func_0x000180314690(lVar7 + 0x18,param_1);
      *(ulonglong *)(lVar7 + 0x10) = uVar4;
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar8 = SparkEstilo__Linha__180720db0(0x16,0);
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = SparkCraft__NomeDoProduto(uVar4 & 0xffffffff,0);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      lVar11 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_108,0,0);
      if (lVar11 == 0) goto code_r0x0001805f28d7;
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      uVar6 = func_0x000182601c10(0x3f800000,0);
      if (plVar9 == (longlong *)0x0) goto code_r0x0001805f28d2;
      lVar2 = *plVar9;
      uVar13 = 0;
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0x3b)
                       * 0x10 + 0x138 + lVar2);
            goto code_r0x0001805f2669;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x3b);
code_r0x0001805f2669:
      (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
      if (lVar8 == 0) goto code_r0x0001805f28cd;
      UnityEngine_UIElements_VisualElement__Add(lVar8,lVar11,0);
      uStackX_1c = (undefined4)(uVar4 >> 0x20);
      auStackX_8[0] = uStackX_1c;
      uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar6 = System_String__Format(LIT_"'{0:N0}'",uVar6,0);
      uStack_108 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
      uStack_100 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x000180cb7cb0(&uStack_c8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_68 = (undefined4)uStack_c8;
      uStack_64 = uStack_c8._4_4_;
      uStack_60 = (undefined4)uStack_c0;
      uStack_5c = uStack_c0._4_4_;
      uStack_58 = uStack_b8;
      uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_68,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar8,uVar6,0);
      uStack_108 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
      uStack_100 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x000180cb7cb0(&uStack_e8,&uStack_108,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_a8 = (undefined4)uStack_e8;
      uStack_a4 = uStack_e8._4_4_;
      uStack_a0 = (undefined4)uStack_e0;
      uStack_9c = uStack_e0._4_4_;
      uStack_98 = uStack_d8;
      lVar11 = SparkEstilo__Texto__180722af0(LIT_"'  ✕'",0xb,&uStack_a8,1,0);
      if (lVar11 == 0) goto code_r0x0001805f28c8;
      UnityEngine_UIElements_VisualElement__set_pickingMode(lVar11,0,0);
      uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar6,lVar7,MD_SparkCraftWindow.__c__DisplayClass48_0._MontaOficina_b__0,0);
      FUN_180990d50(lVar11,uVar6,0);
      UnityEngine_UIElements_VisualElement__Add(lVar8,lVar11,0);
      if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805f28c2;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar8,0);
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

