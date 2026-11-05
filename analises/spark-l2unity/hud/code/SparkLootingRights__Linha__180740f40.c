// SparkLootingRights__Linha__180740f40 @ 0x180740f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights__Linha__180740f40(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uStackX_18;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [176];
  
  if (cRam00000001834b427d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkLootingRights);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'No damage yet'");
    FUN_180315380(LIT_"'Solo'");
    FUN_180315380(LIT_"'C'");
    FUN_180315380(LIT_"'CC'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Party'");
    FUN_180315380(LIT_"'1'");
    FUN_180315380(LIT_"'P'");
    cRam00000001834b427d = '\x01';
  }
  uVar16 = FUN_1824366b0(0);
  *(undefined4 *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x18) = uVar16;
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 != '\0') {
    if (cRam00000001834b4280 == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
      FUN_180315380(TI_SparkLootingRights);
      FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cRam00000001834b4280 = '\x01';
    }
    if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style
                        (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
      uVar11 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar8 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar11);
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x38) = 0;
        if (*(char *)(lVar8 + 0x39) != '\0') {
          *(undefined1 *)(lVar8 + 0x39) = 0;
          if (*(longlong *)(lVar8 + 0x40) == 0) {
            FUN_1803155d0(lVar8,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined1 *)(*(longlong *)(lVar8 + 0x40) + 0x38) = 0;
        }
        return;
      }
    }
    return;
  }
  cVar3 = SparkLootingRights__Garante__180740260(0);
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8);
  if (((lVar8 == 0) || (UnityEngine_UIElements_VisualElement__Clear(lVar8,0), param_1 == 0)) ||
     (lStack_1a8 = System_String__Split(param_1,0x7c,0,0), lStack_1a8 == 0)) {
code_r0x000180741cda:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar15 = 0;
code_r0x00018074118d:
  do {
    if ((*(int *)(lStack_1a8 + 0x18) <= (int)(uVar15 + 1)) &&
       (*(int *)(lStack_1a8 + 0x18) <= (int)uVar15)) {
      if (cRam00000001834b4281 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        FUN_180315380(TI_SparkLootingRights);
        FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        cRam00000001834b4281 = '\x01';
      }
      if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
        lVar8 = UnityEngine_UIElements_VisualElement__get_style
                          (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
        uVar11 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar8 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar11);
          lVar8 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10);
          if (lVar8 == 0) {
            return;
          }
          func_0x0001807afe20(lVar8,0);
          return;
        }
      }
      goto code_r0x000180741cda;
    }
    if (*(uint *)(lStack_1a8 + 0x18) <= uVar15) {
code_r0x000180741cd4:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = LIT_"''";
    if ((int)(uVar15 + 1) < *(int *)(lStack_1a8 + 0x18)) {
      if (*(uint *)(lStack_1a8 + 0x18) <= uVar15 + 1) goto code_r0x000180741cd4;
      lVar8 = *(longlong *)(lStack_1a8 + 0x28 + (longlong)(int)uVar15 * 8);
    }
    uVar11 = *(undefined8 *)(lStack_1a8 + 0x20 + (longlong)(int)uVar15 * 8);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    lStack_1b8 = *(longlong *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
    uStack_1b0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000180cb7cb0(&uStack_218,&lStack_1b8,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_248 = uStack_208;
    uStack_258 = uStack_218;
    uStack_250 = uStack_210;
    lVar5 = SparkEstilo__Texto(uVar11,0xc,&uStack_258,1,0);
    if (lVar5 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar5,1,0);
    lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(auStack_118,-(uVar15 != 0) & 6,0);
    if (lVar6 == 0) goto code_r0x000180741cda;
    uStack_198 = *puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_198);
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8);
    if (lVar6 == 0) goto code_r0x000180741cda;
    UnityEngine_UIElements_VisualElement__Add(lVar6,lVar5,0);
    cVar3 = func_0x000181707e50(lVar8,0);
    if (cVar3 == '\0') {
      if (lVar8 == 0) goto code_r0x000180741cda;
      lStack_1b8 = System_String__Split(lVar8,0x3b,0,0);
      uStackX_18 = 0;
      if (lStack_1b8 == 0) goto code_r0x000180741cda;
      for (; (int)uStackX_18 < (int)*(uint *)(lStack_1b8 + 0x18); uStackX_18 = uStackX_18 + 1) {
        if (*(uint *)(lStack_1b8 + 0x18) <= uStackX_18) goto code_r0x000180741cd4;
        lVar8 = *(longlong *)(lStack_1b8 + 0x20 + (longlong)(int)uStackX_18 * 8);
        if ((lVar8 == 0) || (lVar8 = System_String__Split(lVar8,0x3a,0,0), lVar8 == 0))
        goto code_r0x000180741cda;
        if (3 < *(int *)(lVar8 + 0x18)) {
          lVar5 = (ulonglong)*(uint *)(lVar8 + 0x18) - 1;
          if ((*(uint *)(lVar8 + 0x18) <= (uint)lVar5) ||
             (cVar3 = func_0x0001817058a0(*(undefined8 *)(lVar8 + 0x20 + lVar5 * 8),LIT_"'1'",0
                                         ), *(int *)(lVar8 + 0x18) == 0)) goto code_r0x000180741cd4;
          cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar8 + 0x20),LIT_"'C'",0);
          uVar11 = LIT_"'CC'";
          if (cVar4 == '\0') {
            if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x000180741cd4;
            cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar8 + 0x20),LIT_"'P'",0);
            uVar11 = LIT_"'Solo'";
            if (cVar4 != '\0') {
              uVar11 = LIT_"'Party'";
            }
          }
          if ((*(uint *)(lVar8 + 0x18) < 2) ||
             (lVar5 = (longlong)*(int *)(lVar8 + 0x18) + -2, *(uint *)(lVar8 + 0x18) <= (uint)lVar5)
             ) goto code_r0x000180741cd4;
          uStack_1c8 = *(undefined8 *)(lVar8 + 0x20 + lVar5 * 8);
          uVar1 = *(undefined8 *)(lVar8 + 0x28);
          lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
          if (lVar8 == 0) goto code_r0x000180741cda;
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,1,0);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
          if (lVar5 == 0) goto code_r0x000180741cda;
          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar9);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_108);
          if (lVar6 == 0) goto code_r0x000180741cda;
          uVar9 = *puVar7;
          uVar16 = *(undefined4 *)(puVar7 + 1);
          uStack_188 = uVar9;
          uStack_180 = uVar16;
          FUN_1800050f0(99,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_188);
          if (lVar5 == 0) goto code_r0x000180741cda;
          uStack_178 = uVar9;
          uStack_170 = uVar16;
          FUN_1800050f0(0x61,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_178);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_f8);
          if (lVar5 == 0) goto code_r0x000180741cda;
          uStack_160 = *(undefined4 *)(puVar7 + 1);
          uStack_168 = *puVar7;
          FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_168);
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
          uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar5 == 0) goto code_r0x000180741cda;
          FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar9);
          if (cVar3 == '\0') {
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar16 = *(undefined4 *)(lVar5 + 0x40);
            uVar17 = *(undefined4 *)(lVar5 + 0x44);
            uVar18 = *(undefined4 *)(lVar5 + 0x48);
            uVar19 = *(undefined4 *)(lVar5 + 0x4c);
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            uStack_1f8 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
            uStack_1f0 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
          }
          else {
            lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            uStack_218 = 0x3f1eb8523f47ae14;
            uStack_210 = 0x3e8f5c293e800000;
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_238,&uStack_218,0);
            if (lVar5 == 0) goto code_r0x000180741cda;
            uStack_258 = *puVar7;
            uStack_250 = puVar7[1];
            uStack_248 = *(undefined4 *)(puVar7 + 2);
            FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_258);
            uVar16 = 0x3f800000;
            uVar17 = 0x3f5ededf;
            uVar18 = 0x3ef0f0f1;
            uVar19 = 0x3f800000;
            uStack_1f8 = 0x3f5ededf3f800000;
            uStack_1f0 = 0x3f8000003ef0f0f1;
          }
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_218 = uStack_1f8;
          uStack_210 = uStack_1f0;
          func_0x000180cb7cb0(&uStack_148,&uStack_218,MR_System.Nullable<UnityEngine.Color>..ctor);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar14 = 0;
          uStack_228 = uStack_138;
          uStack_238 = (undefined4)uStack_148;
          uStack_234 = uStack_148._4_4_;
          uStack_230 = (undefined4)uStack_140;
          uStack_22c = uStack_140._4_4_;
          lVar5 = SparkEstilo__Texto(uVar11,10,&uStack_238,0,0);
          if (lVar5 == 0) {
code_r0x000180741cc2:
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e8);
          if (lVar6 == 0) goto code_r0x000180741cc2;
          uStack_150 = *(undefined4 *)(puVar7 + 1);
          uStack_158 = *puVar7;
          FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_158);
          uStack_120 = 0;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_1e8 = uVar16;
          uStack_1e4 = uVar17;
          uStack_1e0 = uVar18;
          uStack_1dc = uVar19;
          func_0x000180cb7cb0(&uStack_130,&uStack_1e8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_238 = (undefined4)uStack_130;
          uStack_234 = uStack_130._4_4_;
          uStack_230 = (undefined4)uStack_128;
          uStack_22c = uStack_128._4_4_;
          uStack_228 = uStack_120;
          lVar6 = SparkEstilo__Texto(uVar1,0xb,&uStack_238,cVar3,0);
          if (lVar6 == 0) goto code_r0x000180741cc2;
          lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          uVar11 = func_0x000182601c10(0x3f800000,0);
          if (lVar10 == 0) goto code_r0x000180741cc2;
          FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
          lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          uVar11 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
          if (lVar10 == 0) goto code_r0x000180741cc2;
          FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
          uStack_248 = 0;
          uStack_258 = 0;
          uStack_250 = 0;
          uStack_1d8 = uVar16;
          uStack_1d4 = uVar17;
          uStack_1d0 = uVar18;
          uStack_1cc = uVar19;
          func_0x000180cb7cb0(&uStack_258,&uStack_1d8,MR_System.Nullable<UnityEngine.Color>..ctor);
          uStack_238 = (undefined4)uStack_258;
          uStack_234 = uStack_258._4_4_;
          uStack_230 = (undefined4)uStack_250;
          uStack_22c = uStack_250._4_4_;
          uStack_228 = uStack_248;
          lVar10 = SparkEstilo__Texto(uStack_1c8,0xb,&uStack_238,0,0);
          if (lVar10 == 0) goto code_r0x000180741cc2;
          lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          FUN_180eb5810(5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
          if (lVar12 == 0) goto code_r0x000180741cc2;
          FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle);
          plVar13 = (longlong *)func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,3);
          if (plVar13 == (longlong *)0x0) goto code_r0x000180741cc2;
          lVar12 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar12 == 0) {
            uVar11 = func_0x000180314f80();
            FUN_180315590(uVar11,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)plVar13[3] == 0) {
code_r0x000180741cac:
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar13[4] = lVar5;
          func_0x000180314690(plVar13 + 4,lVar5);
          lVar12 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar12 == 0) {
            uVar11 = func_0x000180314f80();
            FUN_180315590(uVar11,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(uint *)(plVar13 + 3) < 2) goto code_r0x000180741cac;
          plVar13[5] = lVar6;
          func_0x000180314690(plVar13 + 5,lVar6);
          lVar12 = func_0x0001803146b0(lVar10,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar12 == 0) {
            uVar11 = func_0x000180314f80();
            FUN_180315590(uVar11,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(uint *)(plVar13 + 3) < 3) goto code_r0x000180741cac;
          plVar13[6] = lVar10;
          func_0x000180314690(plVar13 + 6,lVar10);
          for (; (int)uVar14 < (int)*(uint *)(plVar13 + 3); uVar14 = uVar14 + 1) {
            if (*(uint *)(plVar13 + 3) <= uVar14) goto code_r0x000180741cd4;
            if (plVar13[(longlong)(int)uVar14 + 4] == 0) goto code_r0x000180741cda;
            UnityEngine_UIElements_VisualElement__set_pickingMode
                      (plVar13[(longlong)(int)uVar14 + 4],1);
          }
          UnityEngine_UIElements_VisualElement__Add(lVar8,lVar5);
          UnityEngine_UIElements_VisualElement__Add(lVar8,lVar6);
          UnityEngine_UIElements_VisualElement__Add(lVar8,lVar10);
          if (*(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8) == 0)
          goto code_r0x000180741cda;
          UnityEngine_UIElements_VisualElement__Add();
        }
      }
      uVar15 = uVar15 + 2;
      goto code_r0x00018074118d;
    }
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_218 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
    uStack_210 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000180cb7cb0(&uStack_258,&uStack_218,MR_System.Nullable<UnityEngine.Color>..ctor);
    uStack_238 = (undefined4)uStack_258;
    uStack_234 = uStack_258._4_4_;
    uStack_230 = (undefined4)uStack_250;
    uStack_22c = uStack_250._4_4_;
    uStack_228 = uStack_248;
    lVar8 = SparkEstilo__Texto(LIT_"'No damage yet'",10,&uStack_238,0,0);
    if (lVar8 == 0) {
code_r0x000180741cc8:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,1,0);
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x000180741cc8;
    UnityEngine_UIElements_VisualElement__Add(lVar5,lVar8,0);
    uVar15 = uVar15 + 2;
  } while( true );
}

