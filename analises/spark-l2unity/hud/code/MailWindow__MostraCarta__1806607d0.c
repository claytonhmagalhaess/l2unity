// MailWindow__MostraCarta__1806607d0 @ 0x1806607d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__MostraCarta__1806607d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  bool bVar11;
  longlong alStackX_18 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b3d97 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    FUN_180315380(MD_MailWindow.VoltaParaLista);
    FUN_180315380(TI_SparkCorreio);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_string__);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__0);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__1);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__2);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__3);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__4);
    FUN_180315380(MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__5);
    FUN_180315380(TI_MailWindow.<>c__DisplayClass55_0);
    FUN_180315380(LIT_"'\\n<color=#A09682>Subject:</color> '");
    FUN_180315380(LIT_"'Back'");
    FUN_180315380(LIT_"'To'");
    FUN_180315380(LIT_"'System'");
    FUN_180315380(LIT_"'From'");
    FUN_180315380(LIT_"':</color> '");
    FUN_180315380(LIT_"'Cancel sending'");
    FUN_180315380(LIT_"'Delete'");
    FUN_180315380(LIT_"'Reject'");
    FUN_180315380(LIT_"'Pay and take'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'<color=#A09682>'");
    FUN_180315380(LIT_"'Take items'");
    FUN_180315380(LIT_"'Reply'");
    FUN_180315380(LIT_"'Payment requested: {0:N0} Adena'");
    cRam00000001834b3d97 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_MailWindow.<>c__DisplayClass55_0);
  alStackX_18[0] = lVar5;
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 == 0) goto code_r0x0001806611f4;
  *(longlong *)(lVar5 + 0x10) = param_1;
  func_0x000180314690(lVar5 + 0x10,param_1);
  if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b310b == '\0') {
    FUN_180315380(TI_SparkCorreio);
    cRam00000001834b310b = '\x01';
  }
  if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*(longlong *)(TI_SparkCorreio + 0xb8) + 0x18)
  ;
  func_0x000180314690(lVar5 + 0x18);
  if (*(longlong *)(lVar5 + 0x18) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  bVar11 = *(char *)(*(longlong *)(lVar5 + 0x18) + 0x10) == '\0';
  *(uint *)(param_1 + 0x8c) = (uint)bVar11;
  MailWindow__MarcaAba(param_1,bVar11,0);
  if (*(longlong *)(param_1 + 0xa8) == 0) goto code_r0x0001806611f4;
  lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
  if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001806611f4;
  lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
  if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806611f4;
  lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
  uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
  lVar6 = *(longlong *)(lVar5 + 0x18);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  uVar7 = LIT_"'System'";
  if (*(char *)(lVar6 + 0x18) == '\0') {
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  lVar6 = func_0x000180314710(TI_string__,6);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x000180661206;
  *(undefined8 *)(lVar6 + 0x20) = LIT_"'<color=#A09682>'";
  func_0x000180314690(lVar6 + 0x20);
  if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
  uVar8 = LIT_"'From'";
  if (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x10) == '\0') {
    uVar8 = LIT_"'To'";
  }
  if (*(uint *)(lVar6 + 0x18) < 2) {
code_r0x000180661206:
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)(lVar6 + 0x28) = uVar8;
  func_0x000180314690(lVar6 + 0x28);
  if (*(uint *)(lVar6 + 0x18) < 3) goto code_r0x000180661206;
  *(undefined8 *)(lVar6 + 0x30) = LIT_"':</color> '";
  func_0x000180314690(lVar6 + 0x30);
  if (*(uint *)(lVar6 + 0x18) < 4) goto code_r0x000180661206;
  *(undefined8 *)(lVar6 + 0x38) = uVar7;
  func_0x000180314690(lVar6 + 0x38,uVar7);
  if (*(uint *)(lVar6 + 0x18) < 5) goto code_r0x000180661206;
  *(undefined8 *)(lVar6 + 0x40) = LIT_"'\\n<color=#A09682>Subject:</color> '";
  func_0x000180314690(lVar6 + 0x40);
  if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
  if (*(uint *)(lVar6 + 0x18) < 6) goto code_r0x000180661206;
  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0x28);
  func_0x000180314690(lVar6 + 0x48);
  uVar7 = System_String__Concat(lVar6,0);
  if (plVar1 == (longlong *)0x0) goto code_r0x0001806611f4;
  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar7,*(undefined8 *)(*plVar1 + 0xe50));
  if ((*(longlong *)(lVar5 + 0x18) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0xd8), plVar1 == (longlong *)0x0))
  goto code_r0x0001806611f4;
  (**(code **)(*plVar1 + 0xe48))
            (plVar1,*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0x30),
             *(undefined8 *)(*plVar1 + 0xe50));
  if (*(longlong *)(param_1 + 0xe8) == 0) goto code_r0x0001806611f4;
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xe8),0);
  if ((*(longlong *)(lVar5 + 0x18) == 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x38), lVar6 == 0))
  goto code_r0x0001806611f4;
  FUN_180bada40(&uStack_60,lVar6,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
  uStack_48 = (undefined4)uStack_60;
  uStack_44 = uStack_60._4_4_;
  uStack_40 = (undefined4)uStack_58;
  uStack_3c = uStack_58._4_4_;
  uStack_38 = uStack_50;
  uStack_60 = 0;
  uStack_58 = &uStack_48;
  while (cVar4 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<ItemInstance>.MoveNext), cVar4 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0xe8);
    uVar7 = MailWindow__Icone(uStack_38,0);
    if (lVar6 == 0) goto code_r0x0001806611fa;
    UnityEngine_UIElements_VisualElement__Add(lVar6,uVar7);
  }
  Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
  lVar6 = *(longlong *)(lVar5 + 0x18);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  uVar7 = LIT_"''";
  if (((*(char *)(lVar6 + 0x19) != '\0') && (0 < *(longlong *)(lVar6 + 0x40))) &&
     (*(char *)(lVar6 + 0x48) != '\0')) {
    alStackX_18[0] = *(longlong *)(lVar6 + 0x40);
    uVar7 = func_0x000180314670(_DAT_1834c6288,alStackX_18);
    uVar7 = System_String__Format(LIT_"'Payment requested: {0:N0} Adena'",uVar7,0);
  }
  if (plVar1 == (longlong *)0x0) goto code_r0x0001806611f4;
  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar7,*(undefined8 *)(*plVar1 + 0xe50));
  if (*(longlong *)(param_1 + 0xf0) == 0) goto code_r0x0001806611f4;
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xf0),0);
  lVar6 = *(longlong *)(param_1 + 0xf0);
  uVar7 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar7,param_1,MD_MailWindow.VoltaParaLista,0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar7 = SparkEstilo__Botao__18071e130(LIT_"'Back'",uVar7,0x50,0,0);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  UnityEngine_UIElements_VisualElement__Add(lVar6,uVar7,0);
  if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x14);
  lVar6 = *(longlong *)(lVar5 + 0x18);
  if (lVar6 == 0) goto code_r0x0001806611f4;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    if (*(char *)(lVar6 + 0x48) == '\0') {
      MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0));
      lVar6 = *(longlong *)(param_1 + 0xf0);
      uVar8 = func_0x000180315580(TI_System.Action);
      uVar7 = MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__5;
      goto code_r0x0001806611b1;
    }
    MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0));
    lVar6 = *(longlong *)(param_1 + 0xf0);
    uVar8 = func_0x000180315580(TI_System.Action);
    uVar7 = 0;
    FUN_1816a9c60(uVar8,lVar5,MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__4,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = (undefined7)((ulonglong)uVar7 >> 8);
    uVar9 = 0x78;
    uVar7 = LIT_"'Cancel sending'";
  }
  else {
    if (*(char *)(lVar6 + 0x48) != '\0') {
      MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0),0);
      lVar6 = *(longlong *)(lVar5 + 0x18);
      if (lVar6 == 0) goto code_r0x0001806611f4;
      lVar2 = *(longlong *)(param_1 + 0xf0);
      if ((*(char *)(lVar6 + 0x19) == '\0') ||
         (uVar7 = LIT_"'Pay and take'", *(longlong *)(lVar6 + 0x40) < 1)) {
        uVar7 = LIT_"'Take items'";
      }
      uVar8 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar8,lVar5,MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__0,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = SparkEstilo__Botao__18071e130(uVar7,uVar8,0x6e,0,0);
      if (lVar2 == 0) goto code_r0x0001806611f4;
      UnityEngine_UIElements_VisualElement__Add(lVar2,uVar7,0);
      if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
      if (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) == '\0') {
        MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0),0);
        lVar6 = *(longlong *)(param_1 + 0xf0);
        uVar7 = func_0x000180315580(TI_System.Action);
        FUN_1816a9c60(uVar7,lVar5,MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__1,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar7 = SparkEstilo__Botao__18071e130(LIT_"'Reject'",uVar7,0x50,1,0);
        if (lVar6 == 0) goto code_r0x0001806611f4;
        UnityEngine_UIElements_VisualElement__Add(lVar6,uVar7,0);
      }
    }
    if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
    if (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) == '\0') {
      MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0),0);
      lVar6 = *(longlong *)(param_1 + 0xf0);
      uVar7 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar7,lVar5,MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__2,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar7 = SparkEstilo__Botao__18071e130(LIT_"'Reply'",uVar7,0x50,0,0);
      if (lVar6 == 0) goto code_r0x0001806611f4;
      UnityEngine_UIElements_VisualElement__Add(lVar6,uVar7,0);
    }
    if (*(longlong *)(lVar5 + 0x18) == 0) goto code_r0x0001806611f4;
    if (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x48) != '\0') {
      return;
    }
    MailWindow__Espaco(*(undefined8 *)(param_1 + 0xf0),0);
    lVar6 = *(longlong *)(param_1 + 0xf0);
    uVar8 = func_0x000180315580(TI_System.Action);
    uVar7 = MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__3;
code_r0x0001806611b1:
    uVar9 = 0;
    FUN_1816a9c60(uVar8,lVar5,uVar7,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
    uVar9 = 0x50;
    uVar7 = LIT_"'Delete'";
  }
  uVar7 = SparkEstilo__Botao__18071e130(uVar7,uVar8,uVar9,CONCAT71(uVar10,1),0);
  if (lVar6 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar6,uVar7,0);
    return;
  }
code_r0x0001806611f4:
  FUN_1803155d0();
code_r0x0001806611fa:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

