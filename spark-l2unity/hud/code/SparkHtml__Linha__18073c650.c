// SparkHtml__Linha__18073c650 @ 0x18073c650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__Linha__18073c650
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               char param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ushort uVar16;
  float fVar17;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
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
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [72];
  
  if (cRam00000001834b424d == '\0') {
    FUN_180315380(TI_SparkHtml.Bloco);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'bottom'");
    FUN_180315380(LIT_"'fixwidth'");
    FUN_180315380(LIT_"'FF'");
    FUN_180315380(LIT_"'th'");
    FUN_180315380(LIT_"'bgcolor'");
    FUN_180315380(LIT_"'tr'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'fixheight'");
    FUN_180315380(LIT_"'valign'");
    FUN_180315380(LIT_"'align'");
    FUN_180315380(LIT_"'top'");
    FUN_180315380(LIT_"'right'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'td'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'center'");
    cRam00000001834b424d = '\x01';
  }
  if (param_3 != 0) {
    cVar4 = System_String__op_Inequality(*(undefined8 *)(param_3 + 0x10),LIT_"'tr'",0);
    if (cVar4 != '\0') {
      return;
    }
    lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
    if (lVar7 != 0) {
      lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
      if (lVar8 != 0) {
        FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        uVar9 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
        if (lVar8 != 0) {
          FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
          lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          uVar9 = func_0x000182601c10(0,0);
          if (lVar8 != 0) {
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
            uVar9 = SparkHtml_No__Attr__180735120(param_3,LIT_"'bgcolor'",0);
            if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar8 = SparkHtml__Cor__180738870(uVar9,0);
            if (lVar8 != 0) {
              plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar9 = System_String__Concat(lVar8,LIT_"'FF'",0);
              puVar11 = (undefined8 *)ColorUtils__HexToColor(&uStack_1c8,uVar9,0);
              uStack_1e8 = *puVar11;
              puStack_1e0 = (undefined4 *)puVar11[1];
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_138,&uStack_1e8,0);
              if (plVar10 == (longlong *)0x0) goto code_r0x00018073d4bc;
              uVar9 = *puVar11;
              uVar3 = puVar11[1];
              uVar1 = *(undefined4 *)(puVar11 + 2);
              lVar8 = *plVar10;
              uVar16 = 0;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10)
                               + 9) * 0x10 + 0x138 + lVar8);
                    goto code_r0x00018073c9c7;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018073c9c7:
              uStack_138 = uVar9;
              uStack_130 = uVar3;
              uStack_128 = uVar1;
              (*(code *)*puVar11)(plVar10,&uStack_138,puVar11[1]);
            }
            if (0 < param_5) {
              plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar11 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1d8);
              if (plVar10 == (longlong *)0x0) goto code_r0x00018073d4bc;
              uVar9 = *puVar11;
              uVar1 = *(undefined4 *)(puVar11 + 1);
              lVar8 = *plVar10;
              uVar16 = 0;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar11 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10)
                               + 0x4b) * 0x10 + 0x138 + lVar8);
                    goto code_r0x00018073ca99;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018073ca99:
              uStack_1f8 = uVar9;
              uStack_1f0 = uVar1;
              (*(code *)*puVar11)(plVar10,&uStack_1f8,puVar11[1]);
            }
            if (*(longlong *)(param_3 + 0x28) != 0) {
              FUN_180bada40(&uStack_100,*(longlong *)(param_3 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
              uStack_118 = uStack_100;
              uStack_114 = uStack_fc;
              uStack_110 = uStack_f8;
              uStack_10c = uStack_f4;
              lStack_108 = lStack_f0;
              uStack_1e8 = 0;
              puStack_1e0 = &uStack_118;
              while (cVar4 = FUN_1812fa7e0(&uStack_118,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext), lVar8 = lStack_108,
                    cVar4 != '\0') {
                if (lStack_108 == 0) goto code_r0x00018073d536;
                cVar4 = System_String__op_Inequality
                                  (*(undefined8 *)(lStack_108 + 0x10),LIT_"'td'");
                if ((cVar4 == '\0') ||
                   (cVar4 = System_String__op_Inequality
                                      (*(undefined8 *)(lVar8 + 0x10),LIT_"'th'"), cVar4 == '\0')
                   ) {
                  lVar12 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar12,0);
                  if (lVar12 == 0) goto code_r0x00018073d531;
                  lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                  uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                  if (lVar13 == 0) goto code_r0x00018073d52c;
                  FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                  lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                  uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                  if (lVar13 == 0) goto code_r0x00018073d527;
                  FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                  lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                  puVar11 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e0);
                  if (lVar13 == 0) goto code_r0x00018073d522;
                  uStack_1f8 = *puVar11;
                  uStack_1f0 = *(undefined4 *)(puVar11 + 1);
                  FUN_1800050f0(0x59,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_1f8);
                  lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                  uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
                  if (lVar13 == 0) goto code_r0x00018073d51d;
                  FUN_180005060(0x5d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                  lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'fixwidth'",0);
                  if (lVar13 == 0) {
                    lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'width'",0);
                  }
                  if ((param_6 == '\0') || (cVar4 = func_0x000181707e50(lVar13,0), cVar4 == '\0')) {
code_r0x00018073cdef:
                    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cVar4 = SparkHtml__Largura__18073b690(lVar12,lVar13,0,0);
                    if (cVar4 == '\0') {
                      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                      uVar9 = func_0x000182601c10(0x3f800000,0);
                      if (lVar13 == 0) goto code_r0x00018073d4d2;
                      FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                      puVar11 = (undefined8 *)
                                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c0);
                      if (lVar13 == 0) goto code_r0x00018073d4cd;
                      uStack_198 = *puVar11;
                      uStack_190 = *(undefined4 *)(puVar11 + 1);
                      FUN_1800050f0(0x37,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_198);
                    }
                  }
                  else {
                    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    fVar17 = (float)SparkHtml__SoImagens__18073dda0(lVar8,0);
                    if (fVar17 <= 0.0) goto code_r0x00018073cdef;
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (auStack_d0,(float)(param_4 * 2) + fVar17,0);
                    if (lVar13 == 0) goto code_r0x00018073d4c8;
                    uStack_1a8 = *puVar11;
                    uStack_1a0 = *(undefined4 *)(puVar11 + 1);
                    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_1a8);
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    uVar9 = func_0x000182601c10(0,0);
                    if (lVar13 == 0) goto code_r0x00018073d4c2;
                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                  }
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  fVar17 = (float)SparkHtml__LarguraFixa__18073b620(lVar8,0);
                  if (0.0 < fVar17) {
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit
                                        (auStack_b0,(float)(param_4 * 2) + fVar17,0);
                    if (lVar13 == 0) goto code_r0x00018073d4d7;
                    uStack_188 = *puVar11;
                    uStack_180 = *(undefined4 *)(puVar11 + 1);
                    FUN_1800050f0(0x59,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_188);
                  }
                  lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'height'",0);
                  if (lVar13 == 0) {
                    lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'fixheight'",0);
                  }
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  iVar6 = SparkHtml__Numero__18073daf0(lVar13,0);
                  if (0 < iVar6) {
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a0);
                    if (lVar13 == 0) goto code_r0x00018073d4dc;
                    uStack_178 = *puVar11;
                    uStack_170 = *(undefined4 *)(puVar11 + 1);
                    FUN_1800050f0(0x57,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_178);
                  }
                  uVar9 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'bgcolor'",0);
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar13 = SparkHtml__Cor__180738870(uVar9,0);
                  if (lVar13 != 0) {
                    lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    uVar9 = System_String__Concat(lVar13,LIT_"'FF'",0);
                    puVar15 = (undefined4 *)ColorUtils__HexToColor(&uStack_138,uVar9,0);
                    uStack_1c8 = *puVar15;
                    uStack_1c4 = puVar15[1];
                    uStack_1c0 = puVar15[2];
                    uStack_1bc = puVar15[3];
                    puVar15 = (undefined4 *)
                              UnityEngine_UIElements_StyleColor__op_Implicit
                                        (&uStack_100,&uStack_1c8,0);
                    if (lVar14 == 0) goto code_r0x00018073d4e1;
                    uStack_1c8 = *puVar15;
                    uStack_1c4 = puVar15[1];
                    uStack_1c0 = puVar15[2];
                    uStack_1bc = puVar15[3];
                    uStack_1b8 = puVar15[4];
                    FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_1c8);
                  }
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  SparkHtml__Fundo__18073aae0(lVar12,lVar8,0);
                  if (0 < param_4) {
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_90);
                    if (lVar14 == 0) goto code_r0x00018073d4f5;
                    uVar9 = *puVar11;
                    uVar1 = *(undefined4 *)(puVar11 + 1);
                    uStack_168 = uVar9;
                    uStack_160 = uVar1;
                    FUN_1800050f0(99,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_168);
                    if (lVar13 == 0) goto code_r0x00018073d4f0;
                    uStack_158 = uVar9;
                    uStack_150 = uVar1;
                    FUN_1800050f0(0x61,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_158);
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    puVar11 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_80);
                    if (lVar14 == 0) goto code_r0x00018073d4eb;
                    uVar9 = *puVar11;
                    uVar1 = *(undefined4 *)(puVar11 + 1);
                    uStack_148 = uVar9;
                    uStack_140 = uVar1;
                    FUN_1800050f0(0x5f,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_148);
                    if (lVar13 == 0) goto code_r0x00018073d4e6;
                    uStack_1d8 = uVar9;
                    uStack_1d0 = uVar1;
                    FUN_1800050f0(0x65,TI_UnityEngine.UIElements.IStyle,lVar13,&uStack_1d8);
                  }
                  lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'valign'",0);
                  if ((lVar13 == 0) && (lVar13 = LIT_"''", LIT_"''" == 0))
                  goto code_r0x00018073d518;
                  uVar9 = System_String__ToLowerInvariant(lVar13,0);
                  cVar4 = func_0x0001817058a0(uVar9,LIT_"'top'",0);
                  if (cVar4 == '\0') {
                    cVar4 = func_0x0001817058a0(uVar9,LIT_"'bottom'",0);
                    if (cVar4 != '\0') {
                      lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                      uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                      if (lVar13 == 0) goto code_r0x00018073d4fa;
                      FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                    }
                  }
                  else {
                    lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                    if (lVar13 == 0) goto code_r0x00018073d513;
                    FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar13,uVar9);
                  }
                  lVar13 = SparkHtml_No__Attr__180735120(lVar8,LIT_"'align'",0);
                  if ((lVar13 == 0) && (lVar13 = LIT_"''", LIT_"''" == 0))
                  goto code_r0x00018073d50e;
                  uVar9 = System_String__ToLowerInvariant(lVar13,0);
                  uVar5 = func_0x0001817058a0(uVar9,LIT_"'center'",0);
                  if (*(longlong *)(param_1 + 0x10) == 0) goto code_r0x00018073d509;
                  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38);
                  lVar13 = func_0x000180315580(TI_SparkHtml.Bloco);
                  SparkHtml_Bloco___ctor__180734f70(lVar13,lVar12,uVar5,uVar1,0);
                  cVar4 = func_0x0001817058a0(uVar9,LIT_"'right'",0);
                  if (cVar4 != '\0') {
                    lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar12,0);
                    uVar9 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                    if (lVar14 == 0) goto code_r0x00018073d4ff;
                    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar14,uVar9);
                  }
                  SparkHtml__Filhos__18073a8e0(param_1,lVar8,lVar13,LIT_"''",0);
                  if (lVar13 == 0) goto code_r0x00018073d504;
                  SparkHtml_Bloco__SoltaTexto__180734d30(lVar13,0);
                  *(undefined8 *)(lVar13 + 0x20) = 0;
                  func_0x000180314690(lVar13 + 0x20,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar7,lVar12,0);
                }
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_118,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
              if (param_2 != 0) {
                UnityEngine_UIElements_VisualElement__Add(param_2,lVar7,0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x00018073d4bc:
  FUN_1803155d0();
code_r0x00018073d4c2:
  FUN_1803155d0();
code_r0x00018073d4c8:
  FUN_1803155d0();
code_r0x00018073d4cd:
  FUN_1803155d0();
code_r0x00018073d4d2:
  FUN_1803155d0();
code_r0x00018073d4d7:
  FUN_1803155d0();
code_r0x00018073d4dc:
  FUN_1803155d0();
code_r0x00018073d4e1:
  FUN_1803155d0();
code_r0x00018073d4e6:
  FUN_1803155d0();
code_r0x00018073d4eb:
  FUN_1803155d0();
code_r0x00018073d4f0:
  FUN_1803155d0();
code_r0x00018073d4f5:
  FUN_1803155d0();
code_r0x00018073d4fa:
  FUN_1803155d0();
code_r0x00018073d4ff:
  FUN_1803155d0();
code_r0x00018073d504:
  FUN_1803155d0();
code_r0x00018073d509:
  FUN_1803155d0();
code_r0x00018073d50e:
  FUN_1803155d0();
code_r0x00018073d513:
  FUN_1803155d0();
code_r0x00018073d518:
  FUN_1803155d0();
code_r0x00018073d51d:
  FUN_1803155d0();
code_r0x00018073d522:
  FUN_1803155d0();
code_r0x00018073d527:
  FUN_1803155d0();
code_r0x00018073d52c:
  FUN_1803155d0();
code_r0x00018073d531:
  FUN_1803155d0();
code_r0x00018073d536:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

