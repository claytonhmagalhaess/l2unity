// SparkHennaWindow__ShowWindow__18062e8c0 @ 0x18062e8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHennaWindow__ShowWindow__18062e8c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ushort uVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int aiStackX_18 [2];
  int iStackX_20;
  longlong lStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int aiStack_1a0 [2];
  longlong lStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  longlong lStack_178;
  undefined4 uStack_170;
  longlong lStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  int iStack_138;
  longlong lStack_118;
  longlong lStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  longlong lStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  longlong lStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [104];
  
  if (cRam00000001834b3cb0 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3cb0 = '\x01';
  }
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  if (cRam00000001834b3cb5 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHenna.Opcao>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHenna.Opcao>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHenna.Opcao>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHenna.Opcao>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHenna.Opcao>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkHenna);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkHennaWindow.__c__DisplayClass26_0._Redesenha_b__0);
    FUN_180315380(TI_SparkHennaWindow.<>c__DisplayClass26_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'   '");
    FUN_180315380(LIT_"'+'");
    FUN_180315380(LIT_"'({0})'");
    FUN_180315380(LIT_"'  <color=#7FE0C8>'");
    FUN_180315380(LIT_"'{0} {1}{2}'");
    FUN_180315380(LIT_"'Dye x{0}   ·   {1:N0} Adena'");
    FUN_180315380(LIT_"'You have no dyes for the symbols of your class.'");
    FUN_180315380(LIT_"'Empty slot'");
    FUN_180315380(LIT_"'N0'");
    FUN_180315380(LIT_"'Total: '");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3cb5 = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x90),0);
    plVar10 = *(longlong **)(param_1 + 0x98);
    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
      func_0x000180315660(TI_SparkHenna);
    }
    lVar8 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 8);
    if (lVar8 != 0) {
      aiStackX_18[0] = *(int *)(lVar8 + 0x18);
      uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
      uVar7 = System_String__Format(LIT_"'({0})'",uVar7,0);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0xe48))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0xe50));
        plVar10 = *(longlong **)(param_1 + 0xa0);
        uVar7 = System_Int64__ToString
                          (*(longlong *)(TI_SparkHenna + 0xb8) + 0x10,LIT_"'N0'",0)
        ;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0xe48))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0xe50));
          lVar8 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 8);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
code_r0x00018062d2be:
              if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar8 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 8);
              if (lVar8 != 0) {
                FUN_180bd2ca0(&lStack_118,lVar8,MR_System.Collections.Generic.List<SparkHenna.Opcao>.GetEnumerator);
                lStack_d8 = lStack_118;
                lStack_d0 = lStack_110;
                iStack_c8 = iStack_108;
                uStack_c4 = uStack_104;
                uStack_c0 = uStack_100;
                iStack_bc = iStack_fc;
                lStack_b8 = lStack_f8;
                uStack_158 = 0;
                plStack_150 = &lStack_d8;
                while( true ) {
                  uVar20 = 0;
                  cVar5 = FUN_1812ecea0(&lStack_d8,MR_System.Collections.Generic.List<SparkHenna.Opcao>.MoveNext);
                  uVar6 = uStack_c4;
                  if (cVar5 == '\0') break;
                  aiStackX_18[0] = iStack_c8;
                  uStack_1d8 = CONCAT44(uStack_c4,iStack_c8);
                  uStack_1a8 = uStack_c0;
                  iStackX_20 = iStack_bc;
                  uStack_1d0 = CONCAT44(iStack_bc,uStack_c0);
                  cVar5 = (char)lStack_b8;
                  iStack_1c8 = (int)lStack_b8;
                  lVar8 = func_0x000180315580(TI_SparkHennaWindow.<>c__DisplayClass26_0);
                  lStack_1e8 = lVar8;
                  Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                  if (lVar8 == 0) goto code_r0x00018062e600;
                  *(longlong *)(lVar8 + 0x28) = param_1;
                  func_0x000180314690(lVar8 + 0x28,param_1);
                  *(undefined4 *)(lVar8 + 0x10) = (undefined4)uStack_1d8;
                  *(undefined4 *)(lVar8 + 0x14) = uStack_1d8._4_4_;
                  *(undefined4 *)(lVar8 + 0x18) = (undefined4)uStack_1d0;
                  *(undefined4 *)(lVar8 + 0x1c) = uStack_1d0._4_4_;
                  *(int *)(lVar8 + 0x20) = iStack_1c8;
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lStack_198 = SparkEstilo__Linha__180720db0(0x26,0);
                  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
                  if (lVar8 == 0) goto code_r0x00018062e5fb;
                  plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar13 = (longlong *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b0,0x42000000,0)
                  ;
                  if (plVar11 == (longlong *)0x0) goto code_r0x00018062e5f6;
                  lVar9 = *plVar13;
                  lVar15 = plVar13[1];
                  lVar14 = *plVar11;
                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                    uVar19 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                            (ulonglong)uVar19 * 0x10) + 0x43) * 0x10 + 0x138 +
                                  lVar14);
                        goto code_r0x00018062d509;
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 < *(ushort *)(lVar14 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018062d509:
                  lStack_178 = lVar9;
                  uStack_170 = (int)lVar15;
                  (*(code *)*puVar12)(plVar11,&lStack_178,puVar12[1]);
                  if (plVar10 == (longlong *)0x0) goto code_r0x00018062e5f1;
                  lVar14 = *plVar10;
                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                    uVar19 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                            (ulonglong)uVar19 * 0x10) + 0xad) * 0x10 + 0x138 +
                                  lVar14);
                        goto code_r0x00018062d589;
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 < *(ushort *)(lVar14 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018062d589:
                  lStack_168 = lVar9;
                  uStack_160 = (int)lVar15;
                  (*(code *)*puVar12)(plVar10,&lStack_168,puVar12[1]);
                  plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  puVar12 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a0,0x41000000,0)
                  ;
                  if (plVar10 == (longlong *)0x0) goto code_r0x00018062e5ec;
                  uVar7 = *puVar12;
                  uVar25 = *(undefined4 *)(puVar12 + 1);
                  lVar9 = *plVar10;
                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                    uVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar20 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar20 * 0x10) + 0x4f
                                   ) * 0x10 + 0x138 + lVar9);
                        goto code_r0x00018062d639;
                      }
                      uVar19 = (short)uVar20 + 1;
                      uVar20 = (ulonglong)uVar19;
                    } while (uVar19 < *(ushort *)(lVar9 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018062d639:
                  uStack_1b8 = uVar7;
                  uStack_1b0 = uVar25;
                  (*(code *)*puVar12)(plVar10,&uStack_1b8,puVar12[1]);
                  plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  uVar7 = func_0x000182601c10(0,0);
                  if (plVar10 == (longlong *)0x0) goto code_r0x00018062e5e7;
                  lVar9 = *plVar10;
                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                    uVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar20 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar20 * 0x10) + 0x3d
                                   ) * 0x10 + 0x138 + lVar9);
                        goto code_r0x00018062d6c9;
                      }
                      uVar19 = (short)uVar20 + 1;
                      uVar20 = (ulonglong)uVar19;
                    } while (uVar19 < *(ushort *)(lVar9 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x00018062d6c9:
                  (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                  SparkEstilo__Moldura__180721b40(lVar8,0);
                  lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  iVar21 = aiStackX_18[0];
                  lVar14 = SparkHenna__Icone(aiStackX_18[0],0);
                  if (lVar14 == 0) {
                    lVar15 = IconTable__get_Instance(0);
                    lVar14 = 0;
                    if (lVar15 != 0) {
                      lVar14 = IconTable__get_Instance(0);
                      if (lVar14 == 0) goto code_r0x00018062e5c8;
                      lVar14 = IconTable__GetIcon(lVar14,uVar6,0);
                    }
                  }
                  plVar10 = (longlong *)
                            UnityEngine_UIElements_StyleBackground__op_Implicit
                                      (&lStack_148,lVar14,0);
                  if (lVar9 == 0) goto code_r0x00018062e5e2;
                  lStack_118 = *plVar10;
                  lStack_110 = plVar10[1];
                  iStack_108 = (int)plVar10[2];
                  uStack_104 = *(undefined4 *)((longlong)plVar10 + 0x14);
                  uStack_100 = (undefined4)plVar10[3];
                  iStack_fc = *(int *)((longlong)plVar10 + 0x1c);
                  lStack_f8 = plVar10[4];
                  FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar9,&lStack_118);
                  lVar9 = lStack_198;
                  if (lStack_198 == 0) goto code_r0x00018062e5dd;
                  UnityEngine_UIElements_VisualElement__Add(lStack_198,lVar8,0);
                  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
                  if (lVar8 == 0) goto code_r0x00018062e5d8;
                  lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  uVar7 = func_0x000182601c10(0x3f800000,0);
                  if (lVar14 == 0) goto code_r0x00018062e5d3;
                  FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar14,uVar7);
                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,1,0);
                  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar7 = SparkHenna__NomeOficial(iVar21,0);
                  uVar16 = SparkHenna__Nome(iVar21,0);
                  uVar7 = System_String__Concat(uVar7,LIT_"'  <color=#7FE0C8>'",uVar16,LIT_"'</color>'",0);
                  if (cVar5 == '\0') {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    uStack_e8 = *(undefined4 *)(lVar14 + 0x50);
                    uStack_e4 = *(undefined4 *)(lVar14 + 0x54);
                    uStack_e0 = *(undefined4 *)(lVar14 + 0x58);
                    uStack_dc = *(undefined4 *)(lVar14 + 0x5c);
                  }
                  else {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    uStack_e8 = *(undefined4 *)(lVar14 + 0x40);
                    uStack_e4 = *(undefined4 *)(lVar14 + 0x44);
                    uStack_e0 = *(undefined4 *)(lVar14 + 0x48);
                    uStack_dc = *(undefined4 *)(lVar14 + 0x4c);
                  }
                  lStack_198 = 0;
                  uStack_190 = 0;
                  uStack_188 = 0;
                  func_0x000180cb7cb0(&lStack_198,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lStack_148 = lStack_198;
                  lStack_140 = uStack_190;
                  iStack_138 = uStack_188;
                  uVar7 = SparkEstilo__Texto__180722af0(uVar7,0xb,&lStack_148,1,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
                  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkHenna);
                  }
                  iVar21 = iStackX_20;
                  lVar14 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x10);
                  lVar15 = (longlong)iStackX_20;
                  uStack_1a4 = uStack_1a8;
                  uVar7 = func_0x000180314670(_DAT_1834c6268,&uStack_1a4);
                  aiStack_1a0[0] = iVar21;
                  uVar16 = func_0x000180314670(_DAT_1834c6268,aiStack_1a0);
                  uVar7 = System_String__Format(LIT_"'Dye x{0}   ·   {1:N0} Adena'",uVar7,uVar16,0);
                  if (lVar14 < lVar15) {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    uStack_e8 = *(undefined4 *)(lVar14 + 0x90);
                    uStack_e4 = *(undefined4 *)(lVar14 + 0x94);
                    uStack_e0 = *(undefined4 *)(lVar14 + 0x98);
                    uStack_dc = *(undefined4 *)(lVar14 + 0x9c);
                  }
                  else {
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkEstilo);
                    }
                    lVar14 = *(longlong *)(TI_SparkEstilo + 0xb8);
                    uStack_e8 = *(undefined4 *)(lVar14 + 0x50);
                    uStack_e4 = *(undefined4 *)(lVar14 + 0x54);
                    uStack_e0 = *(undefined4 *)(lVar14 + 0x58);
                    uStack_dc = *(undefined4 *)(lVar14 + 0x5c);
                  }
                  lStack_148 = 0;
                  lStack_140 = 0;
                  iStack_138 = 0;
                  func_0x000180cb7cb0(&lStack_148,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lStack_118 = lStack_148;
                  lStack_110 = lStack_140;
                  iStack_108 = iStack_138;
                  uVar7 = SparkEstilo__Texto__180722af0(uVar7,10,&lStack_118,0,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar9,lVar8,0);
                  SparkEstilo__Marca__180721270(lVar9,aiStackX_18[0] == *(int *)(param_1 + 0xe8),0);
                  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
                  FUN_18055b980(uVar7,lStack_1e8,MD_SparkHennaWindow.__c__DisplayClass26_0._Redesenha_b__0,0);
                  FUN_180990d50(lVar9,uVar7,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
                  if (*(longlong *)(param_1 + 0x90) == 0) goto code_r0x00018062e5ce;
                  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x90),lVar9);
                }
                Gear__UpdateWeaponType__1803dadf0(&lStack_d8,MR_System.Collections.Generic.List<SparkHenna.Opcao>.Dispose);
                if (*(longlong *)(param_1 + 200) != 0) {
                  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 200),0);
                  uVar24 = uVar20;
                  while( true ) {
                    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    iVar21 = *(int *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x18);
                    if (iVar21 < 3) {
                      iVar21 = 3;
                    }
                    iVar23 = (int)uVar24;
                    if (iVar21 <= iVar23) break;
                    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lVar8 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x20);
                    if (lVar8 == 0) goto code_r0x00018062e624;
                    iVar21 = *(int *)(lVar8 + 0x18);
                    lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                    UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
                    if (lVar8 == 0) goto code_r0x00018062e624;
                    plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                    if (plVar10 == (longlong *)0x0) goto code_r0x00018062e624;
                    lVar9 = *plVar10;
                    uVar19 = 0;
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar18 = uVar19;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar18 * 0x10) + 0x39) * 0x10 + 0x138 +
                                    lVar9);
                          goto code_r0x00018062dd79;
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x00018062dd79:
                    (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                    plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    uVar7 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                    if (plVar10 == (longlong *)0x0) goto code_r0x00018062e624;
                    lVar9 = *plVar10;
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      uVar18 = uVar19;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar18 * 0x10) + 3) * 0x10 + 0x138 + lVar9)
                          ;
                          goto code_r0x00018062de09;
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,3);
code_r0x00018062de09:
                    (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                    plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                    puVar12 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (auStack_a0,0x41a00000,0);
                    if (plVar10 == (longlong *)0x0) goto code_r0x00018062e624;
                    uVar7 = *puVar12;
                    uVar6 = *(undefined4 *)(puVar12 + 1);
                    lVar9 = *plVar10;
                    if (*(ushort *)(lVar9 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                              (ulonglong)uVar19 * 0x10) + 0x43) * 0x10 + 0x138 +
                                    lVar9);
                          goto code_r0x00018062de99;
                        }
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < *(ushort *)(lVar9 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018062de99:
                    uStack_1b8 = uVar7;
                    uStack_1b0 = uVar6;
                    (*(code *)*puVar12)(plVar10,&uStack_1b8,puVar12[1]);
                    if (iVar23 < iVar21) {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar6 = *(undefined4 *)(lVar9 + 0x60);
                      uVar25 = *(undefined4 *)(lVar9 + 100);
                      uVar26 = *(undefined4 *)(lVar9 + 0x68);
                      uVar27 = *(undefined4 *)(lVar9 + 0x6c);
                    }
                    else {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar6 = *(undefined4 *)(lVar9 + 0x20);
                      uVar25 = *(undefined4 *)(lVar9 + 0x24);
                      uVar26 = *(undefined4 *)(lVar9 + 0x28);
                      uVar27 = *(undefined4 *)(lVar9 + 0x2c);
                    }
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uStack_1d8 = CONCAT44(uVar25,uVar6);
                    uStack_1d0 = CONCAT44(uVar27,uVar26);
                    lVar9 = SparkEstilo__Ponto__180721e60(&uStack_1d8,7,0);
                    if (lVar9 == 0) goto code_r0x00018062e624;
                    lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                    plVar10 = (longlong *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (auStack_b0,0x40c00000,0);
                    if (lVar14 == 0) goto code_r0x00018062e624;
                    lStack_168 = *plVar10;
                    uStack_160 = (undefined4)plVar10[1];
                    FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar14,&lStack_168);
                    UnityEngine_UIElements_VisualElement__Add(lVar8,lVar9,0);
                    uVar7 = LIT_"'Empty slot'";
                    if (iVar23 < iVar21) {
                      lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                      UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
                      if (lVar9 == 0) goto code_r0x00018062e624;
                      lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                      lVar15 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                      plVar10 = (longlong *)
                                UnityEngine_UIElements_StyleLength__op_Implicit
                                          (&uStack_e8,0x41800000,0);
                      if (lVar15 == 0) goto code_r0x00018062e624;
                      lVar1 = *plVar10;
                      lVar4 = plVar10[1];
                      lStack_178 = lVar1;
                      uStack_170 = (int)lVar4;
                      FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar15,&lStack_178);
                      if (lVar14 == 0) goto code_r0x00018062e624;
                      lStack_1e8 = lVar1;
                      uStack_1e0 = (int)lVar4;
                      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar14,&lStack_1e8);
                      lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                      plVar10 = (longlong *)
                                UnityEngine_UIElements_StyleLength__op_Implicit
                                          (&uStack_158,0x40a00000,0);
                      if (lVar14 == 0) goto code_r0x00018062e624;
                      lStack_198 = *plVar10;
                      uStack_190 = CONCAT44(uStack_190._4_4_,(int)plVar10[1]);
                      FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar14,&lStack_198);
                      lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                      if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      lVar15 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x20);
                      if (lVar15 == 0) goto code_r0x00018062e624;
                      uVar6 = FUN_180bed530(lVar15,uVar24,MR_System.Collections.Generic.List<int>.get_Item);
                      uVar7 = SparkHenna__Icone(uVar6,0);
                      plVar10 = (longlong *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&lStack_148,uVar7,0);
                      if (lVar14 == 0) goto code_r0x00018062e624;
                      lStack_118 = *plVar10;
                      lStack_110 = plVar10[1];
                      iStack_108 = (int)plVar10[2];
                      uStack_104 = *(undefined4 *)((longlong)plVar10 + 0x14);
                      uStack_100 = (undefined4)plVar10[3];
                      iStack_fc = *(int *)((longlong)plVar10 + 0x1c);
                      lStack_f8 = plVar10[4];
                      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar14,&lStack_118);
                      UnityEngine_UIElements_VisualElement__Add(lVar8,lVar9,0);
                      if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkHenna);
                      }
                      lVar9 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x20);
                      if (lVar9 == 0) goto code_r0x00018062e624;
                      uVar6 = FUN_180bed530(lVar9,uVar24,MR_System.Collections.Generic.List<int>.get_Item);
                      uVar7 = SparkHenna__NomeOficial(uVar6,0);
                      lVar9 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x20);
                      if (lVar9 == 0) goto code_r0x00018062e624;
                      uVar6 = FUN_180bed530(lVar9,uVar24,MR_System.Collections.Generic.List<int>.get_Item);
                      uVar16 = SparkHenna__Nome(uVar6,0);
                      uVar7 = System_String__Concat
                                        (uVar7,LIT_"'  <color=#7FE0C8>'",uVar16,LIT_"'</color>'",0);
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar6 = *(undefined4 *)(lVar9 + 0x40);
                      uVar25 = *(undefined4 *)(lVar9 + 0x44);
                      uVar26 = *(undefined4 *)(lVar9 + 0x48);
                      uVar27 = *(undefined4 *)(lVar9 + 0x4c);
                    }
                    else {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar9 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar6 = *(undefined4 *)(lVar9 + 0x50);
                      uVar25 = *(undefined4 *)(lVar9 + 0x54);
                      uVar26 = *(undefined4 *)(lVar9 + 0x58);
                      uVar27 = *(undefined4 *)(lVar9 + 0x5c);
                    }
                    lStack_148 = 0;
                    lStack_140 = 0;
                    iStack_138 = 0;
                    uStack_1d8 = CONCAT44(uVar25,uVar6);
                    uStack_1d0 = CONCAT44(uVar27,uVar26);
                    func_0x000180cb7cb0(&lStack_148,&uStack_1d8,MR_System.Nullable<UnityEngine.Color>..ctor);
                    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    lStack_118 = lStack_148;
                    lStack_110 = lStack_140;
                    iStack_108 = iStack_138;
                    uVar7 = SparkEstilo__Texto__180722af0(uVar7,0xb,&lStack_118,0,0);
                    UnityEngine_UIElements_VisualElement__Add(lVar8,uVar7);
                    if (*(longlong *)(param_1 + 200) == 0) {
                      FUN_1803155d0();
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 200),lVar8);
                    uVar24 = (ulonglong)(iVar23 + 1);
                  }
                  lVar9 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
                  FUN_180bba2e0(lVar9,MR_System.Collections.Generic.List<string>..ctor);
                  lVar8 = TI_SparkHenna;
                  do {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      func_0x000180315660();
                      lVar8 = TI_SparkHenna;
                    }
                    lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + 0x28);
                    if (lVar14 == 0) goto code_r0x00018062e624;
                    uVar22 = (uint)uVar20;
                    if (*(uint *)(lVar14 + 0x18) <= uVar22) goto code_r0x00018062e61e;
                    if (*(int *)(lVar14 + 0x20 + uVar20 * 4) != 0) {
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        func_0x000180315660();
                        lVar8 = TI_SparkHenna;
                      }
                      uVar7 = LIT_"'{0} {1}{2}'";
                      lVar14 = **(longlong **)(lVar8 + 0xb8);
                      if (lVar14 == 0) goto code_r0x00018062e624;
                      if (*(uint *)(lVar14 + 0x18) <= uVar22) {
code_r0x00018062e61e:
                        FUN_1803155c0();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      lVar15 = (*(longlong **)(lVar8 + 0xb8))[5];
                      if (lVar15 == 0) goto code_r0x00018062e624;
                      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto code_r0x00018062e61e;
                      uVar16 = LIT_"'+'";
                      if (*(int *)(lVar15 + 0x20 + uVar20 * 4) < 1) {
                        uVar16 = LIT_"''";
                      }
                      uVar2 = *(undefined8 *)(lVar14 + 0x20 + uVar20 * 8);
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        func_0x000180315660();
                        lVar8 = TI_SparkHenna;
                      }
                      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + 0x28);
                      if (lVar8 == 0) {
code_r0x00018062e618:
                        FUN_1803155d0();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar22) {
                        FUN_1803155c0();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      aiStackX_18[0] = *(int *)(lVar8 + 0x20 + uVar20 * 4);
                      uVar17 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
                      uVar7 = System_String__Format(uVar7,uVar2,uVar16,uVar17,0);
                      if (lVar9 == 0) goto code_r0x00018062e618;
                      FUN_180002eb0(lVar9,uVar7,MR_System.Collections.Generic.List<string>.Add);
                      lVar8 = TI_SparkHenna;
                    }
                    uVar20 = (ulonglong)(uVar22 + 1);
                  } while ((int)(uVar22 + 1) < 6);
                  if (lVar9 != 0) {
                    plVar10 = *(longlong **)(param_1 + 0xa8);
                    uVar7 = LIT_"''";
                    if (0 < *(int *)(lVar9 + 0x18)) {
                      uVar7 = System_String__Join(LIT_"'   '",lVar9,0);
                      uVar7 = System_String__Concat(LIT_"'Total: '",uVar7,0);
                    }
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 0xe48))
                                (plVar10,uVar7,*(undefined8 *)(*plVar10 + 0xe50));
                      SparkHennaWindow__MostraPrevia__18062bd10(param_1,0);
                      return;
                    }
                  }
                }
              }
code_r0x00018062e624:
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            uStack_158 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
            plStack_150 = *(longlong **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            iStack_1c8 = 0;
            func_0x000180cb7cb0(&uStack_1d8,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
            lStack_148 = uStack_1d8;
            lStack_140 = uStack_1d0;
            iStack_138 = iStack_1c8;
            lVar8 = SparkEstilo__Texto__180722af0(LIT_"'You have no dyes for the symbols of your class.'",0xb,&lStack_148,0,0);
            if (lVar8 != 0) {
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
              uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
              if (lVar9 != 0) {
                FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar9,uVar7);
                plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                plVar11 = (longlong *)
                          UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1b8,0x41000000,0);
                if (plVar10 != (longlong *)0x0) {
                  lVar9 = *plVar11;
                  lVar15 = plVar11[1];
                  lVar14 = *plVar10;
                  uVar19 = 0;
                  if (*(ushort *)(lVar14 + 0x12e) != 0) {
                    uVar18 = uVar19;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar12 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                            (ulonglong)uVar18 * 0x10) + 0x4d) * 0x10 + 0x138 +
                                  lVar14);
                        goto code_r0x00018062d1a9;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < *(ushort *)(lVar14 + 0x12e));
                  }
                  puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018062d1a9:
                  lStack_1e8 = lVar9;
                  uStack_1e0 = (int)lVar15;
                  (*(code *)*puVar12)(plVar10,&lStack_1e8,puVar12[1]);
                  plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                  plVar11 = (longlong *)
                            UnityEngine_UIElements_StyleLength__op_Implicit
                                      (&uStack_1b8,0x41000000,0);
                  if (plVar10 != (longlong *)0x0) {
                    lVar9 = *plVar11;
                    lVar15 = plVar11[1];
                    lVar14 = *plVar10;
                    if (*(ushort *)(lVar14 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar19 * 0x10)
                            == TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 +
                                              (ulonglong)uVar19 * 0x10) + 0x51) * 0x10 + 0x138 +
                                    lVar14);
                          goto code_r0x00018062d236;
                        }
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < *(ushort *)(lVar14 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018062d236:
                    lStack_1e8 = lVar9;
                    uStack_1e0 = (int)lVar15;
                    (*(code *)*puVar12)(plVar10,&lStack_1e8,puVar12[1]);
                    if (*(longlong *)(param_1 + 0x90) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0x90),lVar8,0);
                      goto code_r0x00018062d2be;
                    }
                  }
                }
              }
            }
            FUN_1803155d0();
code_r0x00018062e5c8:
            FUN_1803155d0();
code_r0x00018062e5ce:
            FUN_1803155d0();
code_r0x00018062e5d3:
            FUN_1803155d0();
code_r0x00018062e5d8:
            FUN_1803155d0();
code_r0x00018062e5dd:
            FUN_1803155d0();
code_r0x00018062e5e2:
            FUN_1803155d0();
code_r0x00018062e5e7:
            FUN_1803155d0();
code_r0x00018062e5ec:
            FUN_1803155d0();
code_r0x00018062e5f1:
            FUN_1803155d0();
code_r0x00018062e5f6:
            FUN_1803155d0();
code_r0x00018062e5fb:
            FUN_1803155d0();
code_r0x00018062e600:
            FUN_1803155d0();
            FUN_180311490();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

