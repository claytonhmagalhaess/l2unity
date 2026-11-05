// SparkCraftWindow__MostraDetalhe__1805f2900 @ 0x1805f2900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__MostraDetalhe__1805f2900(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int extraout_var;
  longlong *plVar15;
  ulonglong uVar16;
  ushort uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong alStackX_8 [2];
  int aiStackX_18 [2];
  uint uStackX_20;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  alStackX_8[0] = param_1;
  if (cRam00000001834b3bb3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int__>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int__>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int__>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Find);
    FUN_180315380(MR_System.Collections.Generic.List<int__>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_object__);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_System.Predicate<SparkCraft.NaLoja>);
    FUN_180315380(MD_SparkCraftWindow._MostraDetalhe_b__51_0);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'{0} recipe  ·  Level {1}  ·  Success {2}%'");
    FUN_180315380(LIT_"'Common'");
    FUN_180315380(LIT_"'MP needed: {0}   (you have {1} / {2})'");
    FUN_180315380(LIT_"'Select a recipe on the left.'");
    FUN_180315380(LIT_"'Dwarven'");
    FUN_180315380(LIT_"'{0:N0} / {1:N0}'");
    FUN_180315380(LIT_"'Price: {0:N0} Adena   ·   Crafter MP: {1} / {2} (needs {...");
    FUN_180315380(LIT_"'MP needed per craft: {0}'");
    cRam00000001834b3bb3 = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x138) < 1) {
    lVar4 = 0;
  }
  else {
    uVar19 = *(undefined4 *)(param_1 + 0x138);
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = SparkCraft__Info(uVar19,0);
  }
  uVar16 = 0;
  lStack_1a8 = lVar4;
  if (*(longlong *)(param_1 + 0xf8) == 0) goto code_r0x0001805f3d8e;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf8),0);
  uVar6 = FUN_180eb5810(lVar4 == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar5 == 0) goto code_r0x0001805f3d8e;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
  if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805f3d8e;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
  uVar6 = FUN_180eb5810(lVar4 != 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar5 == 0) goto code_r0x0001805f3d8e;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
  plVar14 = *(longlong **)(param_1 + 0xa0);
  if (plVar14 == (longlong *)0x0) goto code_r0x0001805f3d8e;
  (**(code **)(*plVar14 + 0xe48))(plVar14,LIT_"'Select a recipe on the left.'",*(undefined8 *)(*plVar14 + 0xe50));
  if (lVar4 == 0) {
    if (*(int *)(param_1 + 0x8c) == 1) {
      if (*(longlong *)(param_1 + 0x148) == 0) goto code_r0x0001805f3d8e;
      uVar16 = (ulonglong)(0 < *(int *)(*(longlong *)(param_1 + 0x148) + 0x18));
    }
    if (*(longlong *)(param_1 + 0x128) == 0) goto code_r0x0001805f3d8e;
    func_0x0001825cbbd0(*(longlong *)(param_1 + 0x128),uVar16,0);
    lVar4 = *(longlong *)(param_1 + 0x130);
    if (lVar4 == 0) goto code_r0x0001805f3d8e;
    uVar16 = 0;
    goto code_r0x0001805f392a;
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) goto code_r0x0001805f3d8e;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe8),0);
  lVar7 = IconTable__get_Instance(0);
  uVar8 = uVar16;
  if (lVar7 != 0) {
    lVar7 = IconTable__get_Instance(0);
    if (lVar7 == 0) goto code_r0x0001805f3d8e;
    uVar8 = IconTable__GetIcon(lVar7,*(undefined4 *)(lVar4 + 0x30),0);
  }
  puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_108,uVar8,0);
  if (lVar5 == 0) goto code_r0x0001805f3d8e;
  uStack_188 = *puVar9;
  uStack_180 = puVar9[1];
  uStack_178 = *(undefined4 *)(puVar9 + 2);
  uStack_174 = *(undefined4 *)((longlong)puVar9 + 0x14);
  uStack_170 = *(undefined4 *)(puVar9 + 3);
  uStack_16c = *(undefined4 *)((longlong)puVar9 + 0x1c);
  uStack_168 = puVar9[4];
  FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_188);
  plVar14 = *(longlong **)(param_1 + 0xa8);
  uVar19 = *(undefined4 *)(param_1 + 0x138);
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = SparkCraft__NomeDoProduto(uVar19,0);
  if (plVar14 == (longlong *)0x0) goto code_r0x0001805f3d8e;
  (**(code **)(*plVar14 + 0xe48))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0xe50));
  uVar6 = LIT_"'{0} recipe  ·  Level {1}  ·  Success {2}%'";
  uVar13 = LIT_"'Dwarven'";
  if (*(char *)(lVar4 + 0x10) == '\0') {
    uVar13 = LIT_"'Common'";
  }
  plVar14 = *(longlong **)(param_1 + 0xb0);
  iStack_1b4 = *(int *)(lVar4 + 0x24);
  uVar10 = func_0x000180314670(_DAT_1834c6268,&iStack_1b4);
  iStack_1b0 = *(int *)(lVar4 + 0x3c);
  uVar11 = func_0x000180314670(_DAT_1834c6268,&iStack_1b0);
  uVar6 = System_String__Format(uVar6,uVar13,uVar10,uVar11,0);
  if (plVar14 == (longlong *)0x0) {
code_r0x0001805f3e5d:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*plVar14 + 0xe48))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0xe50));
  if (*(longlong *)(param_1 + 0xf0) == 0) goto code_r0x0001805f3e5d;
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xf0),0);
  if (*(longlong *)(lVar4 + 0x28) == 0) goto code_r0x0001805f3e5d;
  uVar8 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  uStackX_20 = (uint)uVar8;
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,1);
  FUN_180bada40(&uStack_188,*(longlong *)(lVar4 + 0x28),MR_System.Collections.Generic.List<int__>.GetEnumerator);
  uStack_d8 = (undefined4)uStack_188;
  uStack_d4 = uStack_188._4_4_;
  uStack_d0 = (undefined4)uStack_180;
  uStack_cc = uStack_180._4_4_;
  lStack_c8 = CONCAT44(uStack_174,uStack_178);
  uStack_198 = 0;
  uStack_190 = &uStack_d8;
  while (cVar2 = FUN_1812fa7e0(&uStack_d8,MR_System.Collections.Generic.List<int__>.MoveNext), lVar4 = lStack_c8, cVar2 != '\0') {
    if (lStack_c8 == 0) goto code_r0x0001805f3df9;
    if (*(int *)(lStack_c8 + 0x18) == 0) goto code_r0x0001805f3d94;
    uVar19 = *(undefined4 *)(lStack_c8 + 0x20);
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660();
    }
    iStack_1b0 = SparkCraft__Tenho(uVar19,0);
    if (*(uint *)(lVar4 + 0x18) < 2) goto code_r0x0001805f3d9a;
    iStack_1b8 = *(int *)(lVar4 + 0x24);
    uStackX_20 = (uint)uVar8 & 0xff;
    if (iStack_1b0 < iStack_1b8) {
      uStackX_20 = 0;
    }
    aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,(char)uStackX_20);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    uStack_158 = lVar5;
    UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
    if (lVar5 == 0) goto code_r0x0001805f3df4;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar7 == 0) goto code_r0x0001805f3def;
    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar7 == 0) goto code_r0x0001805f3dea;
    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8,0x41d00000,0);
    if (lVar5 == 0) goto code_r0x0001805f3de5;
    uStack_148 = *puVar9;
    uStack_140 = *(undefined4 *)(puVar9 + 1);
    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_148);
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
    if (lVar5 == 0) goto code_r0x0001805f3de0;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x41b00000,0);
    if (lVar12 == 0) goto code_r0x0001805f3ddb;
    uVar6 = *puVar9;
    uVar19 = *(undefined4 *)(puVar9 + 1);
    uStack_138 = uVar6;
    uStack_130 = uVar19;
    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_138);
    if (lVar7 == 0) goto code_r0x0001805f3dd6;
    uStack_128 = uVar6;
    uStack_120 = uVar19;
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98,0x40c00000,0);
    if (lVar7 == 0) goto code_r0x0001805f3dd1;
    uStack_118 = *puVar9;
    uStack_110 = *(undefined4 *)(puVar9 + 1);
    FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_118);
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar6 = func_0x000182601c10(0,0);
    if (lVar7 == 0) goto code_r0x0001805f3dcc;
    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
    lVar7 = IconTable__get_Instance(0);
    if (lVar7 != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      lVar12 = IconTable__get_Instance(0);
      if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x0001805f3d9f;
      if (lVar12 == 0) goto code_r0x0001805f3dae;
      uVar6 = IconTable__GetIcon(lVar12,*(undefined4 *)(lVar4 + 0x20),0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_108,uVar6,0);
      if (lVar7 == 0) goto code_r0x0001805f3da9;
      uStack_188 = *puVar9;
      uStack_180 = puVar9[1];
      uStack_178 = *(undefined4 *)(puVar9 + 2);
      uStack_174 = *(undefined4 *)((longlong)puVar9 + 0x14);
      uStack_170 = *(undefined4 *)(puVar9 + 3);
      uStack_16c = *(undefined4 *)((longlong)puVar9 + 0x1c);
      uStack_168 = puVar9[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_188);
    }
    lVar7 = uStack_158;
    UnityEngine_UIElements_VisualElement__Add(uStack_158,lVar5,0);
    if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x0001805f3da4;
    uVar6 = SparkUI__NomeDoItem(*(undefined4 *)(lVar4 + 0x20),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lVar5 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_108,0,0);
    if (lVar5 == 0) goto code_r0x0001805f3dc7;
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar6 = func_0x000182601c10(0x3f800000,0);
    if (lVar12 == 0) goto code_r0x0001805f3dc2;
    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    func_0x000182601c10(0x3f800000,0);
    if (lVar12 == 0) goto code_r0x0001805f3dbd;
    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar12);
    UnityEngine_UIElements_VisualElement__Add(lVar7,lVar5,0);
    iVar3 = iStack_1b0;
    iStack_1b4 = iStack_1b0;
    uVar6 = func_0x000180314670(_DAT_1834c6268,&iStack_1b4);
    if (*(uint *)(lVar4 + 0x18) < 2) goto code_r0x0001805f3db3;
    uStack_1ac = *(undefined4 *)(lVar4 + 0x24);
    uVar13 = func_0x000180314670(_DAT_1834c6268,&uStack_1ac);
    uVar6 = System_String__Format(LIT_"'{0:N0} / {1:N0}'",uVar6,uVar13);
    if (iVar3 < iStack_1b8) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar19 = *(undefined4 *)(lVar4 + 0x90);
      uVar20 = *(undefined4 *)(lVar4 + 0x94);
      uStack_150 = *(undefined4 *)(lVar4 + 0x98);
      uStack_14c = *(undefined4 *)(lVar4 + 0x9c);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar19 = *(undefined4 *)(lVar4 + 0x80);
      uVar20 = *(undefined4 *)(lVar4 + 0x84);
      uStack_150 = *(undefined4 *)(lVar4 + 0x88);
      uStack_14c = *(undefined4 *)(lVar4 + 0x8c);
    }
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_158 = CONCAT44(uVar20,uVar19);
    func_0x000180cb7cb0(&uStack_108,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_188 = uStack_108;
    uStack_180 = uStack_100;
    uStack_178 = uStack_f8;
    uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_188,0,0);
    UnityEngine_UIElements_VisualElement__Add(lVar7,uVar6);
    param_1 = alStackX_8[0];
    if (*(longlong *)(alStackX_8[0] + 0xf0) == 0) goto code_r0x0001805f3db8;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(alStackX_8[0] + 0xf0),lVar7);
    uVar8 = (ulonglong)uStackX_20;
  }
  Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<int__>.Dispose);
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar2 == '\0') {
code_r0x0001805f3a59:
      iVar3 = *(int *)(param_1 + 0x13c);
    }
    else {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001805f3d8e;
      if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38) == 0)
      goto code_r0x0001805f3a59;
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
         (lVar4 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38), lVar4 == 0))
      goto code_r0x0001805f3d8e;
      iVar3 = *(int *)(lVar4 + 0x14);
    }
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar2 == '\0') {
code_r0x0001805f3b36:
      iVar18 = *(int *)(param_1 + 0x140);
    }
    else {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001805f3d8e;
      if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40) == 0)
      goto code_r0x0001805f3b36;
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
         (lVar4 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40), lVar4 == 0))
      goto code_r0x0001805f3d8e;
      iVar18 = *(int *)(lVar4 + 0x3c);
    }
    plVar14 = *(longlong **)(param_1 + 0xb8);
    alStackX_8[0] = CONCAT44(alStackX_8[0]._4_4_,*(undefined4 *)(lStack_1a8 + 0x38));
    uVar6 = func_0x000180314670(_DAT_1834c6268,alStackX_8);
    aiStackX_18[0] = iVar3;
    uVar13 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
    iStack_1b8 = iVar18;
    uVar10 = func_0x000180314670(_DAT_1834c6268,&iStack_1b8);
    uVar6 = System_String__Format(LIT_"'MP needed: {0}   (you have {1} / {2})'",uVar6,uVar13,uVar10,0);
    if (plVar14 == (longlong *)0x0) {
code_r0x0001805f3e57:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*plVar14 + 0xe48))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0xe50));
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001805f3e57;
    plVar14 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    lVar4 = lStack_1a8;
    if (iVar3 < *(int *)(lStack_1a8 + 0x38)) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar19 = *(undefined4 *)(lVar5 + 0x90);
      uVar20 = *(undefined4 *)(lVar5 + 0x94);
      uVar21 = *(undefined4 *)(lVar5 + 0x98);
      uVar22 = *(undefined4 *)(lVar5 + 0x9c);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar19 = *(undefined4 *)(lVar5 + 0x40);
      uVar20 = *(undefined4 *)(lVar5 + 0x44);
      uVar21 = *(undefined4 *)(lVar5 + 0x48);
      uVar22 = *(undefined4 *)(lVar5 + 0x4c);
    }
    uStack_198 = CONCAT44(uVar20,uVar19);
    uStack_190 = (undefined4 *)CONCAT44(uVar22,uVar21);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_188,&uStack_198,0)
    ;
    if (plVar14 == (longlong *)0x0) {
code_r0x0001805f3d8e:
      FUN_1803155d0();
code_r0x0001805f3d94:
      FUN_1803155c0();
code_r0x0001805f3d9a:
      FUN_1803155c0();
code_r0x0001805f3d9f:
      FUN_1803155c0();
code_r0x0001805f3da4:
      FUN_1803155c0();
code_r0x0001805f3da9:
      FUN_1803155d0();
code_r0x0001805f3dae:
      FUN_1803155d0();
code_r0x0001805f3db3:
      FUN_1803155c0();
code_r0x0001805f3db8:
      FUN_1803155d0();
code_r0x0001805f3dbd:
      FUN_1803155d0();
code_r0x0001805f3dc2:
      FUN_1803155d0();
code_r0x0001805f3dc7:
      FUN_1803155d0();
code_r0x0001805f3dcc:
      FUN_1803155d0();
code_r0x0001805f3dd1:
      FUN_1803155d0();
code_r0x0001805f3dd6:
      FUN_1803155d0();
code_r0x0001805f3ddb:
      FUN_1803155d0();
code_r0x0001805f3de0:
      FUN_1803155d0();
code_r0x0001805f3de5:
      FUN_1803155d0();
code_r0x0001805f3dea:
      FUN_1803155d0();
code_r0x0001805f3def:
      FUN_1803155d0();
code_r0x0001805f3df4:
      FUN_1803155d0();
code_r0x0001805f3df9:
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = *puVar9;
    uVar13 = puVar9[1];
    uVar19 = *(undefined4 *)(puVar9 + 2);
    lVar5 = *plVar14;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar9 = (undefined8 *)
                   ((longlong)(*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + uVar8 * 0x10) + 0x2f) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001805f3cc5;
        }
        uVar17 = (short)uVar8 + 1;
        uVar8 = (ulonglong)uVar17;
      } while (uVar17 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar9 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805f3cc5:
    uStack_188 = uVar6;
    uStack_180 = uVar13;
    uStack_178 = uVar19;
    (*(code *)*puVar9)(plVar14,&uStack_188,puVar9[1]);
    if ((char)uStackX_20 != '\0') {
      uVar16 = (ulonglong)(*(int *)(lVar4 + 0x38) <= iVar3);
    }
    if (*(longlong *)(param_1 + 0x128) == 0) goto code_r0x0001805f3d8e;
    func_0x0001825cbbd0(*(longlong *)(param_1 + 0x128),uVar16,0);
    lVar4 = *(longlong *)(param_1 + 0x130);
    if (lVar4 == 0) goto code_r0x0001805f3d8e;
  }
  else {
    if (*(int *)(param_1 + 0x8c) == 2) {
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCraft);
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x58);
      uVar6 = func_0x000180315580(TI_System.Predicate<SparkCraft.NaLoja>);
      FUN_180d270e0(uVar6,param_1,MD_SparkCraftWindow._MostraDetalhe_b__51_0,0);
      if (lVar4 != 0) {
        FUN_180bad500(lVar4,uVar6,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Find);
        plVar14 = *(longlong **)(param_1 + 0xb8);
        plVar15 = (longlong *)func_0x000180314710(TI_object__,4);
        alStackX_8[0] = CONCAT44(alStackX_8[0]._4_4_,extraout_var);
        lVar4 = func_0x000180314670(_DAT_1834c6268,alStackX_8);
        if (plVar15 != (longlong *)0x0) {
          if ((lVar4 != 0) &&
             (lVar5 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar15 + 0x40)), lVar5 == 0)) {
            uVar6 = func_0x000180314f80();
            FUN_180315590(uVar6,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar4;
            func_0x000180314690(plVar15 + 4,lVar4);
            aiStackX_18[0] = *(int *)(param_1 + 0x13c);
            lVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
            if ((lVar4 != 0) &&
               (lVar5 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar15 + 0x40)), lVar5 == 0)) {
              uVar6 = func_0x000180314f80();
              FUN_180315590(uVar6,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (1 < *(uint *)(plVar15 + 3)) {
              plVar15[5] = lVar4;
              func_0x000180314690(plVar15 + 5,lVar4);
              iStack_1b8 = *(int *)(param_1 + 0x140);
              lVar4 = func_0x000180314670(_DAT_1834c6268,&iStack_1b8);
              if ((lVar4 != 0) &&
                 (lVar5 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar15 + 0x40)), lVar5 == 0))
              {
                uVar6 = func_0x000180314f80();
                FUN_180315590(uVar6,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if (2 < *(uint *)(plVar15 + 3)) {
                plVar15[6] = lVar4;
                func_0x000180314690(plVar15 + 6,lVar4);
                lVar5 = lStack_1a8;
                uStack_1ac = *(undefined4 *)(lStack_1a8 + 0x38);
                lVar4 = func_0x000180314670(_DAT_1834c6268,&uStack_1ac);
                if ((lVar4 != 0) &&
                   (lVar7 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)
                   ) {
                  uVar6 = func_0x000180314f80();
                  FUN_180315590(uVar6,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (3 < *(uint *)(plVar15 + 3)) {
                  plVar15[7] = lVar4;
                  func_0x000180314690(plVar15 + 7,lVar4);
                  uVar6 = System_String__Format(LIT_"'Price: {0:N0} Adena   ·   Crafter MP: {1} / {2} (needs {...",plVar15,0);
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 0xe48))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0xe50))
                    ;
                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                      plVar14 = (longlong *)
                                UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0xb8),0);
                      if (*(int *)(param_1 + 0x13c) < *(int *)(lVar5 + 0x38)) {
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660(TI_SparkEstilo);
                        }
                        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uVar19 = *(undefined4 *)(lVar4 + 0x90);
                        uVar20 = *(undefined4 *)(lVar4 + 0x94);
                        uVar21 = *(undefined4 *)(lVar4 + 0x98);
                        uVar22 = *(undefined4 *)(lVar4 + 0x9c);
                      }
                      else {
                        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                          func_0x000180315660(TI_SparkEstilo);
                        }
                        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
                        uVar19 = *(undefined4 *)(lVar4 + 0x40);
                        uVar20 = *(undefined4 *)(lVar4 + 0x44);
                        uVar21 = *(undefined4 *)(lVar4 + 0x48);
                        uVar22 = *(undefined4 *)(lVar4 + 0x4c);
                      }
                      uStack_198 = CONCAT44(uVar20,uVar19);
                      uStack_190 = (undefined4 *)CONCAT44(uVar22,uVar21);
                      puVar9 = (undefined8 *)
                               UnityEngine_UIElements_StyleColor__op_Implicit
                                         (&uStack_188,&uStack_198,0);
                      if (plVar14 != (longlong *)0x0) {
                        uVar6 = *puVar9;
                        uVar13 = puVar9[1];
                        uVar19 = *(undefined4 *)(puVar9 + 2);
                        lVar4 = *plVar14;
                        if (*(ushort *)(lVar4 + 0x12e) != 0) {
                          uVar8 = 0;
                          do {
                            if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar8 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar9 = (undefined8 *)
                                       ((longlong)
                                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar8 * 0x10) +
                                        0x2f) * 0x10 + 0x138 + lVar4);
                              goto code_r0x0001805f38b9;
                            }
                            uVar17 = (short)uVar8 + 1;
                            uVar8 = (ulonglong)uVar17;
                          } while (uVar17 < *(ushort *)(lVar4 + 0x12e));
                        }
                        puVar9 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805f38b9:
                        uStack_188 = uVar6;
                        uStack_180 = uVar13;
                        uStack_178 = uVar19;
                        (*(code *)*puVar9)(plVar14,&uStack_188,puVar9[1]);
                        lVar4 = *(longlong *)(param_1 + 0x128);
                        if (((char)uStackX_20 != '\0') &&
                           (*(int *)(lVar5 + 0x38) <= *(int *)(param_1 + 0x13c))) {
                          if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          iVar3 = SparkCraft__Tenho(0x39,0);
                          uVar16 = (ulonglong)(extraout_var <= iVar3);
                        }
                        if (lVar4 != 0) goto code_r0x0001805f392a;
                      }
                      goto code_r0x0001805f3d8e;
                    }
                  }
                  goto code_r0x0001805f3e51;
                }
              }
            }
          }
          FUN_1803155c0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
code_r0x0001805f3e51:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar14 = *(longlong **)(param_1 + 0xb8);
    alStackX_8[0] = CONCAT44(alStackX_8[0]._4_4_,*(undefined4 *)(lStack_1a8 + 0x38));
    uVar6 = func_0x000180314670(_DAT_1834c6268,alStackX_8);
    uVar6 = System_String__Format(LIT_"'MP needed per craft: {0}'",uVar6,0);
    if (plVar14 == (longlong *)0x0) {
code_r0x0001805f3e05:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*plVar14 + 0xe48))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0xe50));
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001805f3e05;
    plVar14 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_198 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    uStack_190 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_188,&uStack_198,0)
    ;
    if (plVar14 == (longlong *)0x0) goto code_r0x0001805f3e05;
    uVar6 = *puVar9;
    uVar13 = puVar9[1];
    uVar19 = *(undefined4 *)(puVar9 + 2);
    lVar4 = *plVar14;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar9 = (undefined8 *)
                   ((longlong)(*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar16 * 0x10) + 0x2f) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x0001805f3522;
        }
        uVar17 = (short)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while (uVar17 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar9 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805f3522:
    uStack_188 = uVar6;
    uStack_180 = uVar13;
    uStack_178 = uVar19;
    (*(code *)*puVar9)(plVar14,&uStack_188,puVar9[1]);
    if ((*(longlong *)(param_1 + 0x148) == 0) || (*(longlong *)(param_1 + 0x128) == 0))
    goto code_r0x0001805f3e05;
    func_0x0001825cbbd0(*(longlong *)(param_1 + 0x128),
                        0 < *(int *)(*(longlong *)(param_1 + 0x148) + 0x18),0);
    lVar4 = *(longlong *)(param_1 + 0x130);
    if (lVar4 == 0) goto code_r0x0001805f3e05;
  }
  uVar16 = 1;
code_r0x0001805f392a:
  func_0x0001825cbbd0(lVar4,uVar16,0);
  return;
}

