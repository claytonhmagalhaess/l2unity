// AutoPotionWindow__AbreLista__1805a41f0 @ 0x1805a41f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__AbreLista__1805a41f0(longlong param_1,undefined4 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  float *pfVar20;
  ushort uVar21;
  ushort uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_138;
  undefined8 uStack_128;
  uint uStack_120;
  int aiStack_118 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  
  if (cRam00000001834b3a47 == '\0') {
    FUN_180315380(TI_AutoPotionWindow);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkAutoPocao);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass44_0._AbreLista_b__1);
    FUN_180315380(TI_AutoPotionWindow.<>c__DisplayClass44_0);
    FUN_180315380(MD_AutoPotionWindow.__c__DisplayClass44_1._AbreLista_b__0);
    FUN_180315380(TI_AutoPotionWindow.<>c__DisplayClass44_1);
    FUN_180315380(LIT_"'x'");
    FUN_180315380(LIT_"'Clear slot'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'No allowed potion in the inventory'");
    cRam00000001834b3a47 = '\x01';
  }
  uVar24 = 0;
  aiStack_118[0] = 0;
  lVar11 = func_0x000180315580(TI_AutoPotionWindow.<>c__DisplayClass44_0);
  uStack_128 = lVar11;
  Gear__UpdateWeaponType__1803dadf0(lVar11,0);
  if (lVar11 == 0) goto code_r0x0001805a55bf;
  *(undefined4 *)(lVar11 + 0x10) = param_2;
  *(longlong *)(lVar11 + 0x18) = param_1;
  func_0x000180314690(lVar11 + 0x18,param_1);
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3544 == '\0') {
    FUN_180315380(TI_SparkAutoPocao);
    cRam00000001834b3544 = '\x01';
  }
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x10) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xf0) == *(int *)(lVar11 + 0x10)) {
    if ((*(longlong *)(param_1 + 0xe0) == 0) ||
       (lVar12 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0),
       lVar12 == 0)) goto code_r0x0001805a55bf;
    uVar13 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar12);
    uVar14 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cVar9 = FUN_180eb54b0(uVar13,uVar14,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    if (cVar9 != '\0') {
      AutoPotionWindow__FechaLista__1805a7640(param_1,0);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar11 + 0x10);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
code_r0x0001805a5609:
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xe0),0);
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAutoPocao);
  }
  lVar12 = **(longlong **)(TI_SparkAutoPocao + 0xb8);
  if (lVar12 == 0) goto code_r0x0001805a5609;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar11 + 0x10)) goto code_r0x0001805a5603;
  uVar13 = *(undefined8 *)(lVar12 + 0x20 + (longlong)(int)*(uint *)(lVar11 + 0x10) * 8);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  uStack_158 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
  uStack_150 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
  uStack_110 = 0;
  uStack_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  func_0x000180cb7cb0(&uStack_110,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
  uStack_158 = uStack_110;
  uStack_150 = uStack_108;
  uStack_148 = uStack_100;
  lVar12 = SparkEstilo__Texto__180722af0(uVar13,0xb,&uStack_158,1,0);
  if (lVar12 == 0) goto code_r0x0001805a5609;
  plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
  plVar16 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,0x40400000,0);
  if (plVar15 == (longlong *)0x0) goto code_r0x0001805a5609;
  lVar18 = *plVar16;
  lVar7 = plVar16[1];
  lVar5 = *plVar15;
  uVar22 = 0;
  if (*(ushort *)(lVar5 + 0x12e) != 0) {
    uVar21 = uVar22;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar17 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x4b) *
                   0x10 + 0x138 + lVar5);
        goto code_r0x0001805a4639;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(ushort *)(lVar5 + 0x12e));
  }
  puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805a4639:
  uStack_f8 = lVar18;
  uStack_f0 = (int)lVar7;
  (*(code *)*puVar17)(plVar15,&uStack_f8,puVar17[1]);
  lVar18 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
  uVar13 = func_0x000182601c10(0,0);
  if (lVar18 == 0) goto code_r0x0001805a5609;
  FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar18,uVar13);
  if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a5609;
  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar12,0);
  lVar12 = *(longlong *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x18);
  if (lVar12 == 0) goto code_r0x0001805a5609;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar11 + 0x10)) {
code_r0x0001805a5603:
    FUN_1803155c0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar18 = *(longlong *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x30);
  if (lVar18 == 0) goto code_r0x0001805a5609;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar11 + 0x10)) goto code_r0x0001805a5603;
  lVar18 = *(longlong *)(lVar18 + 0x20 + (longlong)(int)*(uint *)(lVar11 + 0x10) * 8);
  uStack_f8 = lVar11;
  if (lVar18 == 0) goto code_r0x0001805a5609;
  iVar3 = *(int *)(lVar12 + 0x20 + (longlong)(int)*(uint *)(lVar11 + 0x10) * 4);
  uStack_138 = 0;
  FUN_180be3fd0(&uStack_158,lVar18,MR_System.Collections.Generic.List<int>.GetEnumerator);
  uStack_e8 = (undefined4)uStack_158;
  uStack_e4 = uStack_158._4_4_;
  uStack_e0 = (undefined4)uStack_150;
  uStack_dc = uStack_150._4_4_;
  uStack_d8 = CONCAT44(uStack_144,uStack_148);
  uStack_158 = 0;
  uVar25 = uVar24;
  uStack_150 = &uStack_e8;
  while( true ) {
    cVar9 = FUN_1812f11f0(&uStack_e8,MR_System.Collections.Generic.List<int>.MoveNext);
    uVar8 = uStack_d8;
    if (cVar9 == '\0') break;
    iVar10 = (int)uStack_d8;
    lVar12 = func_0x000180315580(TI_AutoPotionWindow.<>c__DisplayClass44_1);
    Gear__UpdateWeaponType__1803dadf0(lVar12,0);
    if (lVar12 == 0) goto code_r0x0001805a55cf;
    *(longlong *)(lVar12 + 0x18) = lVar11;
    func_0x000180314690(lVar12 + 0x18,lVar11);
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    aiStack_118[0] = SparkAutoPocao__NaBolsa(uVar8 & 0xffffffff,0);
    if (0 < aiStack_118[0]) {
      uStack_138 = (int)uVar25 + 1;
      *(int *)(lVar12 + 0x10) = iVar10;
      uVar13 = SparkUI__NomeDoItem(uVar8 & 0xffffffff,0);
      uVar14 = System_Int32__ToString(aiStack_118,0);
      uVar14 = System_String__Concat(LIT_"'x'",uVar14,0);
      if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar11 = AutoPotionWindow__LinhaDeItem(uVar8 & 0xffffffff,uVar13,uVar14,1,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkEstilo__Marca__180721270(lVar11,iVar10 == iVar3,0);
      uVar13 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar13,lVar12,MD_AutoPotionWindow.__c__DisplayClass44_1._AbreLista_b__0,0);
      if (lVar11 == 0) goto code_r0x0001805a55ca;
      FUN_180990d50(lVar11,uVar13);
      if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55c5;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar11);
      uVar25 = (ulonglong)uStack_138;
      lVar11 = uStack_128;
    }
  }
  Gear__UpdateWeaponType__1803dadf0(&uStack_e8,MR_System.Collections.Generic.List<int>.Dispose);
  if ((int)uVar25 == 0) {
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_158 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    uStack_150 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    uStack_110 = 0;
    uStack_108 = (undefined4 *)0x0;
    uStack_100 = 0;
    func_0x000180cb7cb0(&uStack_110,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_158 = uStack_110;
    uStack_150 = uStack_108;
    uStack_148 = uStack_100;
    lVar12 = SparkEstilo__Texto__180722af0(LIT_"'No allowed potion in the inventory'",10,&uStack_158,0,0);
    if (lVar12 == 0) {
code_r0x0001805a55e1:
      FUN_1803155d0();
code_r0x0001805a55e7:
      FUN_1803155d0();
code_r0x0001805a55ec:
      FUN_1803155d0();
code_r0x0001805a55f1:
      FUN_1803155d0();
      FUN_180311490();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
    plVar16 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
    plVar19 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,0x40400000,0);
    if (plVar16 == (longlong *)0x0) goto code_r0x0001805a55e1;
    lVar18 = *plVar19;
    uVar4 = *(uint *)(plVar19 + 1);
    lVar5 = *plVar16;
    uStack_138 = uVar4;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar21 = uVar22;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x4b) *
                     0x10 + 0x138 + lVar5);
          goto code_r0x0001805a4a87;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar16,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805a4a87:
    uStack_128 = lVar18;
    uStack_120 = uVar4;
    (*(code *)*puVar17)(plVar16,&uStack_128,puVar17[1]);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55e1;
    lVar5 = *plVar15;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar21 = uVar22;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x51) *
                     0x10 + 0x138 + lVar5);
          goto code_r0x0001805a4af9;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805a4af9:
    uStack_120 = uStack_138;
    uStack_128 = lVar18;
    (*(code *)*puVar17)(plVar15,&uStack_128,puVar17[1]);
    lVar18 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
    uVar13 = func_0x000182601c10(0,0);
    if (lVar18 == 0) goto code_r0x0001805a55e1;
    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar18,uVar13);
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55e1;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar12,0);
  }
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAutoPocao);
  }
  lVar12 = *(longlong *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x30);
  if (lVar12 == 0) goto code_r0x0001805a55bf;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar11 + 0x10)) {
    FUN_1803155c0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar12 = *(longlong *)(lVar12 + 0x20 + (longlong)(int)*(uint *)(lVar11 + 0x10) * 8);
  if (lVar12 == 0) goto code_r0x0001805a55bf;
  FUN_180be3fd0(&uStack_110,lVar12,MR_System.Collections.Generic.List<int>.GetEnumerator);
  uStack_e8 = (undefined4)uStack_110;
  uStack_e4 = uStack_110._4_4_;
  uStack_e0 = (undefined4)uStack_108;
  uStack_dc = uStack_108._4_4_;
  uStack_d8 = CONCAT44(uStack_fc,uStack_100);
  uStack_158 = 0;
  uStack_150 = &uStack_e8;
  while (cVar9 = FUN_1812f11f0(&uStack_e8,MR_System.Collections.Generic.List<int>.MoveNext), uVar25 = uStack_d8, cVar9 != '\0') {
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar10 = SparkAutoPocao__NaBolsa(uVar25 & 0xffffffff,0);
    if (iVar10 < 1) {
      uVar13 = SparkUI__NomeDoItem(uVar25 & 0xffffffff,0);
      if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar12 = AutoPotionWindow__LinhaDeItem(uVar25 & 0xffffffff,uVar13,LIT_"''",0,0);
      if (lVar12 == 0) goto code_r0x0001805a55f1;
      lVar18 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
      func_0x000182601c10(0x3ecccccd,0);
      if (lVar18 == 0) goto code_r0x0001805a55ec;
      FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle);
      if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55e7;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar12);
    }
  }
  Gear__UpdateWeaponType__1803dadf0(&uStack_e8,MR_System.Collections.Generic.List<int>.Dispose);
  if (0 < iVar3) {
    lVar12 = *(longlong *)(param_1 + 0xe0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar13 = SparkEstilo__Divisor__18071f770(0);
    if (lVar12 == 0) {
code_r0x0001805a55fd:
      FUN_1803155d0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UnityEngine_UIElements_VisualElement__Add(lVar12,uVar13,0);
    lVar12 = SparkEstilo__Linha__180720db0(0x16,0);
    uStack_158 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
    uStack_150 = *(undefined4 **)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
    uStack_110 = 0;
    uStack_108 = (undefined4 *)0x0;
    uStack_100 = 0;
    func_0x000180cb7cb0(&uStack_110,&uStack_158,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_158 = uStack_110;
    uStack_150 = uStack_108;
    uStack_148 = uStack_100;
    uVar13 = SparkEstilo__Texto__180722af0(LIT_"'Clear slot'",0xb,&uStack_158,0,0);
    if (lVar12 == 0) goto code_r0x0001805a55fd;
    UnityEngine_UIElements_VisualElement__Add(lVar12,uVar13,0);
    uVar13 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar13,lVar11,MD_AutoPotionWindow.__c__DisplayClass44_0._AbreLista_b__1,0);
    FUN_180990d50(lVar12,uVar13,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55fd;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xe0),lVar12,0);
  }
  if ((*(longlong *)(param_1 + 0xe0) == 0) ||
     (lVar11 = func_0x0001825d76d0(*(longlong *)(param_1 + 0xe0),0), param_3 == 0))
  goto code_r0x0001805a55bf;
  pfVar20 = (float *)UnityEngine_UIElements_VisualElement__get_worldBound(&uStack_158,param_3,0);
  fVar27 = *pfVar20;
  fVar32 = pfVar20[1];
  uVar13 = *(undefined8 *)pfVar20;
  fVar1 = pfVar20[2];
  fVar2 = pfVar20[3];
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar12 = UnityEngine_UIElements_VisualElementExtensions__WorldToLocal(lVar11,uVar13,0);
  uStack_128 = lVar12;
  uStack_f8 = UnityEngine_UIElements_VisualElementExtensions__WorldToLocal
                        (lVar11,CONCAT44(fVar2 + fVar32,fVar27),0);
  if (lVar11 == 0) goto code_r0x0001805a55bf;
  lVar18 = UnityEngine_UIElements_VisualElement__get_layout(&uStack_158,lVar11,0);
  fVar26 = *(float *)(lVar18 + 8);
  lVar18 = UnityEngine_UIElements_VisualElement__get_layout(&uStack_158,lVar11,0);
  fVar31 = *(float *)(lVar18 + 0xc);
  fVar30 = (float)lVar12;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    cVar9 = '\0';
code_r0x0001805a4fd6:
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55bf;
    plVar15 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    fVar26 = fVar26 - 232.0;
    if (fVar26 < 0.0) {
      fVar26 = 0.0;
    }
    if (fVar30 < 0.0) {
      fVar26 = 0.0;
    }
    else if (fVar30 <= fVar26) {
      fVar26 = fVar30;
    }
    puVar17 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,fVar26,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar13 = *puVar17;
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      uVar21 = uVar22;
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x47)
                     * 0x10 + 0x138 + lVar11);
          goto code_r0x0001805a5085;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805a5085:
    uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar23);
    uStack_158 = uVar13;
    (*(code *)*puVar17)(plVar15,&uStack_158,puVar17[1]);
  }
  else {
    if (*(longlong *)(param_1 + 0x98) == 0) goto code_r0x0001805a55bf;
    cVar9 = UnityEngine_UIElements_VisualElement__Contains(*(longlong *)(param_1 + 0x98),param_3,0);
    if (cVar9 == '\0') goto code_r0x0001805a4fd6;
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar27 = (float)UnityEngine_UIElements_VisualElementExtensions__WorldToLocal
                              (lVar11,CONCAT44(fVar2 + fVar32,fVar1 + fVar27),0);
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55bf;
    plVar15 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    if (fVar30 <= fVar26 * 0.5) {
      fVar26 = fVar26 - 232.0;
      if (fVar26 < 0.0) {
        fVar26 = 0.0;
      }
      fVar32 = fVar27 + 2.0;
      if (fVar26 <= fVar27 + 2.0) {
        fVar32 = fVar26;
      }
    }
    else {
      fVar32 = 0.0;
      if (0.0 <= fVar30 - 234.0) {
        fVar32 = fVar30 - 234.0;
      }
    }
    puVar17 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,fVar32,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar13 = *puVar17;
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      uVar21 = uVar22;
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar21 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) + 0x47)
                     * 0x10 + 0x138 + lVar11);
          goto code_r0x0001805a51f9;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805a51f9:
    uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar23);
    uStack_158 = uVar13;
    (*(code *)*puVar17)(plVar15,&uStack_158,puVar17[1]);
  }
  lVar11 = *(longlong *)(param_1 + 0xe0);
  if (lVar11 == 0) goto code_r0x0001805a55bf;
  fVar27 = uStack_128._4_4_;
  fVar32 = uStack_f8._4_4_;
  if (fVar31 * 0.5 < uStack_128._4_4_) {
    plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    puVar17 = (undefined8 *)
              UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_158,1,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar13 = *puVar17;
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar22 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar22 * 0x10) + 0x73)
                     * 0x10 + 0x138 + lVar11);
          goto code_r0x0001805a5446;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001805a5446:
    uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar23);
    uStack_158 = uVar13;
    (*(code *)*puVar17)(plVar15,&uStack_158,puVar17[1]);
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55bf;
    plVar15 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    if (cVar9 == '\0') {
      fVar31 = (fVar31 - fVar27) + 2.0;
    }
    else {
      fVar31 = fVar31 - fVar32;
    }
    puVar17 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,fVar31,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar28 = (undefined4)*puVar17;
    uVar29 = (undefined4)((ulonglong)*puVar17 >> 0x20);
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar24 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar17 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar24 * 0x10) + 0x2d) *
                     0x10 + 0x138 + lVar11);
          goto code_r0x0001805a5516;
        }
        uVar22 = (short)uVar24 + 1;
        uVar24 = (ulonglong)uVar22;
      } while (uVar22 < *(ushort *)(lVar11 + 0x12e));
    }
    uVar13 = 0x2d;
  }
  else {
    plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
    puVar17 = (undefined8 *)
              UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_158,1,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar13 = *puVar17;
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar22 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar17 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar22 * 0x10) + 0x2d)
                     * 0x10 + 0x138 + lVar11);
          goto code_r0x0001805a52c9;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805a52c9:
    uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar23);
    uStack_158 = uVar13;
    (*(code *)*puVar17)(plVar15,&uStack_158,puVar17[1]);
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x0001805a55bf;
    plVar15 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    if (cVar9 == '\0') {
      fVar27 = fVar32 + 2.0;
    }
    puVar17 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_158,fVar27,0);
    if (plVar15 == (longlong *)0x0) goto code_r0x0001805a55bf;
    uVar28 = (undefined4)*puVar17;
    uVar29 = (undefined4)((ulonglong)*puVar17 >> 0x20);
    uVar23 = *(undefined4 *)(puVar17 + 1);
    lVar11 = *plVar15;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar24 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar17 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar24 * 0x10) + 0x73) *
                     0x10 + 0x138 + lVar11);
          goto code_r0x0001805a5516;
        }
        uVar22 = (short)uVar24 + 1;
        uVar24 = (ulonglong)uVar22;
      } while (uVar22 < *(ushort *)(lVar11 + 0x12e));
    }
    uVar13 = 0x73;
  }
  puVar17 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,uVar13);
code_r0x0001805a5516:
  uStack_158 = CONCAT44(uVar29,uVar28);
  uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar23);
  (*(code *)*puVar17)(plVar15,&uStack_158,puVar17[1]);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
    uVar13 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar11 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        UnityEngine_UIElements_VisualElement__BringToFront(*(longlong *)(param_1 + 0xe0),0);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          MouseOverDetectionManipulator__Enable__1807afe20(*(longlong *)(param_1 + 0xe8),0);
          return;
        }
      }
    }
  }
code_r0x0001805a55bf:
  FUN_1803155d0();
code_r0x0001805a55c5:
  FUN_1803155d0();
code_r0x0001805a55ca:
  FUN_1803155d0();
code_r0x0001805a55cf:
  FUN_1803155d0();
  FUN_180311490();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

