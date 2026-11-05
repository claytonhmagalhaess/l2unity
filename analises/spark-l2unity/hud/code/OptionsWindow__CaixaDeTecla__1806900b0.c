// OptionsWindow__CaixaDeTecla__1806900b0 @ 0x1806900b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OptionsWindow__CaixaDeTecla__1806900b0
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar14;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar15;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uVar13;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (cRam00000001834b3e91 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__0);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__1);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__2);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass52_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Opcoes/EditBox_DF_bg'");
    cRam00000001834b3e91 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass52_0);
  SparkMapaWindow_Loja___ctor__1803f01b0(lVar7,0);
  if (lVar7 == 0) {
code_r0x000180690922:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return uVar8;
  }
  *(undefined8 *)(lVar7 + 0x20) = param_2;
  func_0x000180314690(lVar7 + 0x20,param_2);
  *(undefined4 *)(lVar7 + 0x28) = param_3;
  *(undefined8 *)(lVar7 + 0x30) = param_4;
  func_0x000180314690(lVar7 + 0x30,param_4);
  *(undefined8 *)(lVar7 + 0x38) = param_1;
  func_0x000180314690(lVar7 + 0x38,param_1);
  uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
  *(undefined8 *)(lVar7 + 0x10) = uVar8;
  func_0x000180314690(lVar7 + 0x10,uVar8);
  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180690922;
  plVar9 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x43020000,0);
  if (plVar9 == (longlong *)0x0) goto code_r0x000180690922;
  lVar11 = *plVar9;
  uVar14 = 0;
  uVar8 = *puVar10;
  uVar1 = *(undefined4 *)(puVar10 + 1);
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    uVar13 = uVar14;
    do {
      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar10 = (undefined8 *)
                  ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar13 * 0x10) + 0xad) *
                   0x10 + 0x138 + lVar11);
        goto code_r0x0001806902d9;
      }
      uVar12 = (short)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806902d9:
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar1);
  uStack_d8 = uVar8;
  (*(code *)*puVar10)(plVar9,&uStack_d8,puVar10[1]);
  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180690922;
  plVar9 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x41980000,0);
  if (plVar9 == (longlong *)0x0) goto code_r0x000180690922;
  lVar11 = *plVar9;
  uVar8 = *puVar10;
  uVar1 = *(undefined4 *)(puVar10 + 1);
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    uVar13 = uVar14;
    do {
      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar10 = (undefined8 *)
                  ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar13 * 0x10) + 0x43) *
                   0x10 + 0x138 + lVar11);
        goto code_r0x000180690379;
      }
      uVar12 = (short)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180690379:
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar1);
  uStack_d8 = uVar8;
  (*(code *)*puVar10)(plVar9,&uStack_d8,puVar10[1]);
  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180690922;
  plVar9 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x40c00000,0);
  if (plVar9 == (longlong *)0x0) goto code_r0x000180690922;
  lVar11 = *plVar9;
  uVar8 = *puVar10;
  uVar1 = *(undefined4 *)(puVar10 + 1);
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    uVar13 = uVar14;
    do {
      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar10 = (undefined8 *)
                  ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar13 * 0x10) + 0x4d) *
                   0x10 + 0x138 + lVar11);
        goto code_r0x000180690419;
      }
      uVar12 = (short)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x000180690419:
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar1);
  uStack_d8 = uVar8;
  (*(code *)*puVar10)(plVar9,&uStack_d8,puVar10[1]);
  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180690922;
  lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
  uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
  if (lVar11 == 0) goto code_r0x000180690922;
  FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x000180690922;
  plVar9 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x10),0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar8 = SparkEstilo__Textura__180723790(LIT_"'Opcoes/EditBox_DF_bg'",0);
  puVar10 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_98,uVar8,0);
  if (plVar9 == (longlong *)0x0) goto code_r0x000180690922;
  lVar11 = *plVar9;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar8 = puVar10[4];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    uVar13 = uVar14;
    do {
      if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar10 = (undefined8 *)
                  ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar13 * 0x10) + 0xb) *
                   0x10 + 0x138 + lVar11);
        goto code_r0x000180690539;
      }
      uVar12 = (short)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180690539:
  uStack_98 = uVar3;
  uStack_90 = uVar4;
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  uStack_78 = uVar8;
  (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
  SparkEstilo__Fatia__1807203e0(*(undefined8 *)(lVar7 + 0x10),3,3,3,CONCAT44(uVar15,3),0);
  uVar8 = *(undefined8 *)(lVar7 + 0x20);
  uVar15 = *(undefined4 *)(lVar7 + 0x28);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar8 = SparkTeclas__Texto__1804cf190(uVar8,uVar15,0);
  uStack_d8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
  uStack_d0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x000180cb7cb0(&uStack_b8,&uStack_d8,MR_System.Nullable<UnityEngine.Color>..ctor);
  uStack_c8 = uStack_a8;
  uStack_d8 = uStack_b8;
  uStack_d0 = uStack_b0;
  uVar8 = SparkEstilo__Texto__180722af0(uVar8,0xb,&uStack_d8,0,0);
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  func_0x000180314690(lVar7 + 0x18,uVar8);
  if (*(longlong *)(lVar7 + 0x18) == 0) goto code_r0x000180690922;
  lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x18),0);
  uVar8 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
  if (lVar11 == 0) goto code_r0x000180690922;
  FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar8);
  if (*(longlong *)(lVar7 + 0x18) == 0) goto code_r0x000180690922;
  UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(lVar7 + 0x18),1,0);
  lVar11 = SparkTeclas__QuemUsa__1804ce120
                     (*(undefined8 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x28),
                      *(undefined8 *)(lVar7 + 0x30),0);
  if (lVar11 != 0) {
    if (*(longlong *)(lVar7 + 0x18) == 0) goto code_r0x000180690928;
    plVar9 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar7 + 0x18),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_d8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
    uStack_d0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_98,&uStack_d8,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180690928;
    lVar11 = *plVar9;
    uVar8 = *puVar10;
    uVar3 = puVar10[1];
    uVar15 = *(undefined4 *)(puVar10 + 2);
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar10 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar14 * 0x10) + 0x2f) *
                     0x10 + 0x138 + lVar11);
          goto code_r0x000180690759;
        }
        uVar12 = (short)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180690759:
    uStack_d8 = uVar8;
    uStack_d0 = uVar3;
    uStack_c8 = uVar15;
    (*(code *)*puVar10)(plVar9,&uStack_d8,puVar10[1]);
  }
  if (*(longlong *)(lVar7 + 0x10) != 0) {
    UnityEngine_UIElements_VisualElement__Add
              (*(longlong *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),0);
    lVar11 = *(longlong *)(lVar7 + 0x10);
    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_18055b980(uVar8,lVar7,MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__0,0);
    if (lVar11 != 0) {
      FUN_180990d50(lVar11,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
      lVar11 = *(longlong *)(lVar7 + 0x10);
      uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
      FUN_18055b980(uVar8,lVar7,MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__1,0);
      if (lVar11 != 0) {
        FUN_180990d50(lVar11,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
        lVar11 = *(longlong *)(lVar7 + 0x10);
        uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent>);
        FUN_18055b980(uVar8,lVar7,MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__2,0);
        if (lVar11 != 0) {
          FUN_180990d50(lVar11,uVar8,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>);
          return *(undefined8 *)(lVar7 + 0x10);
        }
      }
    }
  }
code_r0x000180690928:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}

