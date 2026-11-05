// SparkHennaWindow__MostraPrevia__18062bd10 @ 0x18062bd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHennaWindow__MostraPrevia__18062bd10(longlong param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uStackX_8;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  longlong lStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *plStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [64];
  ulonglong uVar18;
  
  if (cRam00000001834b3cb6 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkHenna);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'All symbol slots are in use. Remove a symbol first.'");
    FUN_180315380(LIT_"'+'");
    FUN_180315380(LIT_"'  <color=#7FE0C8>'");
    FUN_180315380(LIT_"'You need {0} dyes (you have {1}).'");
    FUN_180315380(LIT_"'  →  '");
    FUN_180315380(LIT_"'   ({0}{1})'");
    FUN_180315380(LIT_"'You do not have enough Adena.'");
    FUN_180315380(LIT_"'Select a symbol on the left.'");
    FUN_180315380(LIT_"'Cost: {0} x{1}  ·  {2:N0} Adena'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3cb6 = '\x01';
  }
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x00018062cb3e;
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xd0),0);
  plVar8 = *(longlong **)(param_1 + 0xb8);
  if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
  (**(code **)(*plVar8 + 0xe48))(plVar8,LIT_"''",*(undefined8 *)(*plVar8 + 0xe50));
  plVar8 = *(longlong **)(param_1 + 0xc0);
  if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
  (**(code **)(*plVar8 + 0xe48))(plVar8,LIT_"''",*(undefined8 *)(*plVar8 + 0xe50));
  plVar8 = *(longlong **)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
    (**(code **)(*plVar8 + 0xe48))(plVar8,LIT_"'Select a symbol on the left.'",*(undefined8 *)(*plVar8 + 0xe50));
    if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x00018062cb3e;
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
    uStack_e8 = *(undefined4 *)(lVar10 + 0x50);
    uStack_e4 = *(undefined4 *)(lVar10 + 0x54);
    uStack_e0 = *(undefined4 *)(lVar10 + 0x58);
    uStack_dc = *(undefined4 *)(lVar10 + 0x5c);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_118,&uStack_e8,0);
    if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
    lVar10 = *plVar8;
    uVar16 = 0;
    uVar6 = *puVar9;
    uVar7 = puVar9[1];
    uVar5 = *(undefined4 *)(puVar9 + 2);
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar9 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) + 0x2f) *
                    0x10 + 0x138 + lVar10);
          goto code_r0x00018062caf2;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018062caf2:
    uStack_118 = uVar6;
    uStack_110 = uVar7;
    uStack_108 = uVar5;
    (*(code *)*puVar9)(plVar8,&uStack_118,puVar9[1]);
    lVar10 = *(longlong *)(param_1 + 0xe0);
    if (lVar10 == 0) goto code_r0x00018062cb3e;
    bVar22 = false;
    goto code_r0x00018062c9c4;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xe8);
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = SparkHenna__NomeOficial(uVar5,0);
  uVar7 = SparkHenna__Nome(*(undefined4 *)(param_1 + 0xe8),0);
  uVar15 = 0;
  uVar19 = 0;
  uVar6 = System_String__Concat(uVar6,LIT_"'  <color=#7FE0C8>'",uVar7,LIT_"'</color>'",0);
  if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
  (**(code **)(*plVar8 + 0xe48))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0xe50));
  if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x00018062cb3e;
  plVar8 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  lVar10 = *(longlong *)(TI_SparkEstilo + 0xb8);
  uStack_88 = *(undefined4 *)(lVar10 + 0x60);
  uStack_84 = *(undefined4 *)(lVar10 + 100);
  uStack_80 = *(undefined4 *)(lVar10 + 0x68);
  uStack_7c = *(undefined4 *)(lVar10 + 0x6c);
  puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_118,&uStack_88,0);
  if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
  lVar10 = *plVar8;
  uVar6 = *puVar9;
  uVar7 = puVar9[1];
  uVar5 = *(undefined4 *)(puVar9 + 2);
  uVar16 = 0;
  if (*(ushort *)(lVar10 + 0x12e) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle)
      {
        puVar9 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) + 0x2f) *
                  0x10 + 0x138 + lVar10);
        goto code_r0x00018062c029;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ushort *)(lVar10 + 0x12e));
  }
  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018062c029:
  uStack_138 = uVar6;
  uStack_130 = uVar7;
  uStack_128 = uVar5;
  (*(code *)*puVar9)(plVar8,&uStack_138,puVar9[1]);
  if (*(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x30) == 0) {
code_r0x00018062c0d0:
    lStack_f8 = 0;
  }
  else {
    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar10 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x30);
    if (lVar10 == 0) goto code_r0x00018062cb3e;
    if (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0xe8)) goto code_r0x00018062c0d0;
    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
      func_0x000180315660();
    }
    lStack_f8 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x30);
  }
  uVar5 = *(undefined4 *)(param_1 + 0xe8);
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar10 = SparkHenna__Valores(uVar5,0);
  uVar18 = uVar15;
  if (lVar10 == 0) goto code_r0x00018062cb3e;
  do {
    uVar17 = (uint)uVar18;
    if (*(uint *)(lVar10 + 0x18) <= uVar17) {
code_r0x00018062cb74:
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4) != 0) {
      lVar11 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar11,0);
      if (lVar11 == 0) {
code_r0x00018062cb62:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar12 == 0) goto code_r0x00018062cb62;
      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41900000,0);
      if (lVar12 == 0) goto code_r0x00018062cb62;
      uStack_d0 = *(undefined4 *)(puVar9 + 1);
      plStack_d8 = (longlong *)*puVar9;
      FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar12,&plStack_d8);
      lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar11,0);
      uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
      if (lVar12 == 0) goto code_r0x00018062cb62;
      FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
      if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
        func_0x000180315660(TI_SparkHenna);
      }
      lVar12 = **(longlong **)(TI_SparkHenna + 0xb8);
      if (lVar12 == 0) goto code_r0x00018062cb62;
      if (*(uint *)(lVar12 + 0x18) <= uVar17) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(undefined8 *)(lVar12 + 0x20 + (longlong)(int)uVar17 * 8);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uStack_e8 = *(undefined4 *)(lVar12 + 0x50);
      uStack_e4 = *(undefined4 *)(lVar12 + 0x54);
      uStack_e0 = *(undefined4 *)(lVar12 + 0x58);
      uStack_dc = *(undefined4 *)(lVar12 + 0x5c);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      func_0x000180cb7cb0(&uStack_b8,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_128 = uStack_a8;
      uStack_138 = uStack_b8;
      uStack_130 = uStack_b0;
      lVar12 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_138,1,0);
      if (lVar12 == 0) goto code_r0x00018062cb62;
      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
      puVar9 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x42300000,0);
      if (lVar13 == 0) goto code_r0x00018062cb62;
      uStack_c0 = *(undefined4 *)(puVar9 + 1);
      uStack_c8 = *puVar9;
      FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_c8);
      UnityEngine_UIElements_VisualElement__Add(lVar11,lVar12,0);
      lVar12 = lStack_f8;
      if (lStack_f8 != 0) {
        lVar13 = *(longlong *)(lStack_f8 + 0x30);
        if (lVar13 == 0) {
code_r0x00018062cb4a:
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar17) {
code_r0x00018062cb44:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = System_Int32__ToString(lVar13 + (longlong)(int)uVar17 * 4 + 0x20,0);
        uStackX_8 = 0;
        uVar5 = 0;
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
          uVar5 = (undefined4)uStackX_8;
        }
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = uVar5;
        uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_138,0,0);
        UnityEngine_UIElements_VisualElement__Add(lVar11,uVar6,0);
        lVar13 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_e8 = *(undefined4 *)(lVar13 + 0x50);
        uStack_e4 = *(undefined4 *)(lVar13 + 0x54);
        uStack_e0 = *(undefined4 *)(lVar13 + 0x58);
        uStack_dc = *(undefined4 *)(lVar13 + 0x5c);
        uStack_90 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        func_0x000180cb7cb0(&uStack_a0,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_118 = uStack_a0;
        uStack_110 = uStack_98;
        uStack_108 = uStack_90;
        uVar6 = SparkEstilo__Texto__180722af0(LIT_"'  →  '",0xb,&uStack_118,0,0);
        UnityEngine_UIElements_VisualElement__Add(lVar11,uVar6,0);
        lVar12 = *(longlong *)(lVar12 + 0x38);
        if (lVar12 == 0) goto code_r0x00018062cb4a;
        if ((*(uint *)(lVar12 + 0x18) <= uVar17) ||
           (uVar6 = System_Int32__ToString(lVar12 + (longlong)(int)uVar17 * 4 + 0x20,0),
           *(uint *)(lVar10 + 0x18) <= uVar17)) goto code_r0x00018062cb44;
        if (*(int *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4) < 1) {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_e8 = *(undefined4 *)(lVar12 + 0x90);
          uStack_e4 = *(undefined4 *)(lVar12 + 0x94);
          uStack_e0 = *(undefined4 *)(lVar12 + 0x98);
          uStack_dc = *(undefined4 *)(lVar12 + 0x9c);
        }
        else {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uStack_e8 = *(undefined4 *)(lVar12 + 0x80);
          uStack_e4 = *(undefined4 *)(lVar12 + 0x84);
          uStack_e0 = *(undefined4 *)(lVar12 + 0x88);
          uStack_dc = *(undefined4 *)(lVar12 + 0x8c);
        }
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        func_0x000180cb7cb0(&uStack_138,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_108 = uStack_128;
        uStack_118 = uStack_138;
        uStack_110 = uStack_130;
        uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_118,1,0);
        UnityEngine_UIElements_VisualElement__Add(lVar11,uVar6,0);
      }
      uVar6 = LIT_"'   ({0}{1})'";
      if (*(uint *)(lVar10 + 0x18) <= uVar17) goto code_r0x00018062cb74;
      uVar7 = LIT_"'+'";
      if (*(int *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4) < 1) {
        uVar7 = LIT_"''";
      }
      uStackX_8 = CONCAT44(uStackX_8._4_4_,
                           *(undefined4 *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4));
      uVar14 = func_0x000180314670(_DAT_1834c6268,&uStackX_8);
      uVar6 = System_String__Format(uVar6,uVar7,uVar14,0);
      if (*(uint *)(lVar10 + 0x18) <= uVar17) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(lVar10 + 0x20 + (longlong)(int)uVar17 * 4) < 1) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_e8 = *(undefined4 *)(lVar12 + 0x90);
        uStack_e4 = *(undefined4 *)(lVar12 + 0x94);
        uStack_e0 = *(undefined4 *)(lVar12 + 0x98);
        uStack_dc = *(undefined4 *)(lVar12 + 0x9c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar12 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_e8 = *(undefined4 *)(lVar12 + 0x80);
        uStack_e4 = *(undefined4 *)(lVar12 + 0x84);
        uStack_e0 = *(undefined4 *)(lVar12 + 0x88);
        uStack_dc = *(undefined4 *)(lVar12 + 0x8c);
      }
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x000180cb7cb0(&uStack_138,&uStack_e8,MR_System.Nullable<UnityEngine.Color>..ctor);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_108 = uStack_128;
      uStack_118 = uStack_138;
      uStack_110 = uStack_130;
      uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_118,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar11,uVar6,0);
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xd0),lVar11,0);
    }
    uVar18 = (ulonglong)(uVar17 + 1);
  } while ((int)(uVar17 + 1) < 6);
  uVar5 = *(undefined4 *)(param_1 + 0xe8);
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar10 = SparkHenna__Info(uVar5,0);
  if (lStack_f8 == 0) {
    uVar17 = uVar19;
    uVar21 = uVar19;
    uVar20 = uVar19;
    if (lVar10 != 0) {
      uVar17 = *(uint *)(lVar10 + 0x14);
      uVar21 = *(uint *)(lVar10 + 0x18);
      uVar20 = *(uint *)(lVar10 + 0x10);
    }
  }
  else {
    uVar17 = *(uint *)(lStack_f8 + 0x18);
    uVar21 = *(uint *)(lStack_f8 + 0x1c);
    uVar20 = *(uint *)(lStack_f8 + 0x14);
  }
  uStackX_8 = CONCAT44(uStackX_8._4_4_,uVar21);
  plStack_d8 = *(longlong **)(param_1 + 0xb8);
  uVar6 = SparkUI__NomeDoItem(uVar20,0);
  auStackX_18[0] = uVar17;
  uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
  auStackX_20[0] = uVar21;
  uVar14 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
  uVar6 = System_String__Format(LIT_"'Cost: {0} x{1}  ·  {2:N0} Adena'",uVar6,uVar7,uVar14,0);
  if (plStack_d8 == (longlong *)0x0) {
code_r0x00018062cb6e:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(*plStack_d8 + 0xe48))(plStack_d8,uVar6,*(undefined8 *)(*plStack_d8 + 0xe50));
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar10 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x20);
  if (lVar10 == 0) goto code_r0x00018062cb6e;
  iVar1 = *(int *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x18);
  iVar2 = *(int *)(lVar10 + 0x18);
  plStack_d8 = (longlong *)CONCAT44(plStack_d8._4_4_,iVar2);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar4 == '\0') {
    iVar2 = (int)plStack_d8;
  }
  else {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if (**(longlong **)(TI_PlayerInventory + 0xb8) == 0) goto code_r0x00018062cb3e;
    uVar15 = PlayerInventory__GetItemById(**(longlong **)(TI_PlayerInventory + 0xb8),uVar20,0);
  }
  if (iVar2 < iVar1) {
    if ((uVar15 == 0) || (*(int *)(uVar15 + 0x28) < (int)uVar17)) {
      plVar8 = *(longlong **)(param_1 + 0xc0);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,uVar17);
      uVar7 = func_0x000180314670(_DAT_1834c6268,&uStackX_8);
      uVar6 = LIT_"'You need {0} dyes (you have {1}).'";
      auStackX_18[0] = uVar19;
      if (uVar15 != 0) {
        auStackX_18[0] = *(uint *)(uVar15 + 0x28);
      }
      uVar14 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
      uVar6 = System_String__Format(uVar6,uVar7,uVar14,0);
      if (plVar8 == (longlong *)0x0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar8 + 0xe48))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0xe50));
    }
    else {
      if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x10) <
          (longlong)(int)uStackX_8) {
        plVar8 = *(longlong **)(param_1 + 0xc0);
        uVar6 = LIT_"'You do not have enough Adena.'";
        goto joined_r0x00018062c94b;
      }
    }
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0xc0);
    uVar6 = LIT_"'All symbol slots are in use. Remove a symbol first.'";
joined_r0x00018062c94b:
    if (plVar8 == (longlong *)0x0) goto code_r0x00018062cb3e;
    (**(code **)(*plVar8 + 0xe48))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0xe50));
  }
  plVar8 = *(longlong **)(param_1 + 0xc0);
  if (plVar8 != (longlong *)0x0) {
    lVar10 = *(longlong *)(param_1 + 0xe0);
    uVar6 = (**(code **)(*plVar8 + 0xe38))(plVar8,*(undefined8 *)(*plVar8 + 0xe40));
    cVar4 = func_0x000181707e50(uVar6,0);
    if ((cVar4 != '\0') && (uVar19 = 1, lStack_f8 != 0)) {
      uVar19 = (uint)*(byte *)(lStack_f8 + 0x20);
    }
    if (lVar10 != 0) {
      bVar22 = uVar19 != 0;
code_r0x00018062c9c4:
      if (DAT_1834c4688 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
        DAT_1834c4688 = '\x01';
      }
      if ((bool)*(char *)(lVar10 + 0x20c) != bVar22) {
        *(bool *)(lVar10 + 0x20c) = bVar22;
        if (*(int *)(TI_UnityEngine.UIElements.VisualElement + 0xe4) == 0) {
          func_0x000180315660(TI_UnityEngine.UIElements.VisualElement);
        }
        UnityEngine_UIElements_CallbackEventHandler__NotifyPropertyChanged
                  (lVar10,*(longlong *)(TI_UnityEngine.UIElements.VisualElement + 0xb8) + 0x3c0,0);
        UnityEngine_UIElements_VisualElement__PropagateEnabledToChildren(lVar10,bVar22,0);
      }
      return;
    }
  }
code_r0x00018062cb3e:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

