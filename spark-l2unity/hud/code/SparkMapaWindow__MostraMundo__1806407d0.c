// SparkMapaWindow__MostraMundo__1806407d0 @ 0x1806407d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MostraMundo__1806407d0
               (longlong param_1,undefined8 param_2,longlong *******param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong ******pppppplVar19;
  ulonglong uVar20;
  longlong lVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack_258;
  undefined4 uStack_250;
  longlong *******appppppplStack_248 [2];
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  undefined8 uStack_228;
  longlong *******ppppppplStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  longlong *******ppppppplStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_50;
  
  if (cRam00000001834b3d25 == '\0') {
    puStack_50 = &UNK_1806407f8;
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d25 = '\x01';
  }
  uStackX_8 = 0;
  puStack_50 = &UNK_180640810;
  SparkMapaWindow__SaiDoInterno__180649460(param_1,0);
  if (DAT_1834b2f44 == '\0') {
    puStack_50 = &UNK_180640825;
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  uVar2 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
  *(undefined4 *)(param_1 + 0x238) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  puStack_50 = &UNK_18064086a;
  uVar8 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
  uStackX_18._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
  fVar31 = uStackX_18._4_4_;
  puStack_50 = &UNK_180640885;
  uStackX_18 = uVar8;
  uVar9 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
  uStackX_18._4_4_ = (float)(uVar9 >> 0x20);
  fVar28 = (float)uVar9 * 0.0009765625;
  if (fVar28 <= uStackX_18._4_4_ / 1536.0) {
    fVar28 = uStackX_18._4_4_ / 1536.0;
  }
  *(float *)(param_1 + 0x1fc) = fVar28;
  uStackX_18 = uVar9;
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_50 = &UNK_1806408c7;
    func_0x000180315660();
  }
  puStack_50 = &UNK_1806408d3;
  cVar7 = SparkMapaWindow__PosicaoDoJogador__1806423e0(&uStackX_8,0);
  if (cVar7 == '\0') {
    fVar31 = (fVar31 - *(float *)(param_1 + 0x1fc) * 1536.0) * 0.5;
    fVar28 = ((float)uVar8 - *(float *)(param_1 + 0x1fc) * 1024.0) * 0.5;
  }
  else {
    param_3 = (longlong *******)0x0;
    puStack_50 = &UNK_1806408e7;
    uVar10 = SparkMapaWindow__L2ParaArte__18063b850(param_1,uStackX_8,0);
    uStackX_8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    fVar31 = fVar31 * 0.5 - *(float *)(param_1 + 0x1fc) * uStackX_8._4_4_;
    fVar28 = (float)uVar8 * 0.5 - *(float *)(param_1 + 0x1fc) * (float)uVar10;
  }
  *(float *)(param_1 + 0x200) = fVar28;
  *(float *)(param_1 + 0x204) = fVar31;
  uStackX_8 = param_1;
  if (cRam00000001834b3d3f == '\0') {
    FUN_180315380(TI_SparkMapaWindow.Area);
    FUN_180315380(TI_SparkMapaWindow.Cidade);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Current);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Rect>);
    FUN_180315380(TI_SparkMapaWindow.Masmorra);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Mouse wheel: zoom    Drag: move    +: open the region'");
    FUN_180315380(LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'");
    FUN_180315380(LIT_"' - '");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d3f = '\x01';
  }
  uStack_1a0 = 0;
  uStack_198 = 0;
  uVar9 = 0;
  appppppplStack_248[0] = (longlong *******)0x0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return;
  }
  uVar8 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
  uStackX_20 = uVar8;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
code_r0x000180648428:
    FUN_1803155d0();
code_r0x00018064842e:
    FUN_1803155c0();
code_r0x000180648434:
    FUN_1803155c0();
code_r0x000180648439:
    FUN_1803155d0();
    ppppppplVar14 = param_3;
code_r0x00018064843e:
    FUN_1803155d0();
code_r0x000180648443:
    FUN_1803155d0();
    ppppppplVar13 = ppppppplVar14;
code_r0x000180648448:
    FUN_1803155d0();
code_r0x00018064844d:
    FUN_1803155d0();
code_r0x000180648452:
    FUN_1803155d0();
code_r0x000180648457:
    FUN_1803146d0();
code_r0x00018064845c:
    FUN_1803155d0();
code_r0x000180648461:
    FUN_1803155d0();
code_r0x000180648466:
    FUN_1803155d0();
  }
  else {
    plVar11 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
    if (*(longlong *)(param_1 + 0x188) == 0) {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      uStack_148 = *(undefined8 *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0xa0);
      lStack_140 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0xa8);
    }
    else {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      uStack_148 = *(undefined8 *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0xb0);
      lStack_140 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0xb8);
    }
    param_3 = (longlong *******)0x0;
    puVar12 = (undefined8 *)
              UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_138,&uStack_148,0);
    if (plVar11 == (longlong *)0x0) goto code_r0x000180648428;
    uVar10 = *puVar12;
    uVar6 = puVar12[1];
    uVar2 = *(undefined4 *)(puVar12 + 2);
    lVar16 = *plVar11;
    uVar23 = 0;
    if (*(ushort *)(lVar16 + 0x12e) != 0) {
      uVar22 = uVar23;
      do {
        if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar22 * 0x10) == TI_UnityEngine.UIElements.IStyle
           ) {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar22 * 0x10) + 9) *
                     0x10 + 0x138 + lVar16);
          goto code_r0x000180646659;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(ushort *)(lVar16 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180646659:
    param_3 = (longlong *******)puVar12[1];
    uStack_138 = uVar10;
    uStack_130 = uVar6;
    uStack_128 = uVar2;
    (*(code *)*puVar12)(plVar11,&uStack_138,param_3);
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x1f8) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,uVar10);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x000180648428;
    ppppppplVar14 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd0),0);
    uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x1f8) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar13;
    if (ppppppplVar14 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar14,uVar10);
    param_3 = ppppppplVar14;
    if (*(longlong *)(param_1 + 0x88) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x88),0);
    uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x1f8) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar14;
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,uVar10);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0x178) == 0) goto code_r0x000180648428;
    ppppppplVar14 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x178),0);
    uVar10 = FUN_180eb5810(*(char *)(param_1 + 0x1f8) == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar13;
    if (ppppppplVar14 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar14,uVar10);
    param_3 = ppppppplVar14;
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    if ((*(char *)(param_1 + 0x1f8) != '\0') ||
       (uVar20 = uVar9, *(longlong *)(param_1 + 0x188) != 0)) {
      uVar20 = 1;
    }
    uVar10 = FUN_180eb5810(uVar20,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar14;
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,uVar10);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0x170) == 0) goto code_r0x000180648428;
    ppppppplVar14 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0);
    uVar10 = FUN_180eb5810(*(longlong *)(param_1 + 0x188) == 0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar13;
    if (ppppppplVar14 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar14,uVar10);
    param_3 = ppppppplVar14;
    if (*(longlong *)(param_1 + 0x90) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
    if (((*(char *)(param_1 + 0x1f8) != '\0') || (*(longlong *)(param_1 + 0x188) != 0)) ||
       (uVar20 = uVar9, *(float *)(param_1 + 0x208) < 0.024)) {
      uVar20 = 1;
    }
    uVar10 = FUN_180eb5810(uVar20,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar14;
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,uVar10);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0x98) == 0) goto code_r0x000180648428;
    ppppppplVar14 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
    uVar20 = 1;
    if ((*(char *)(param_1 + 0x1f8) == '\0') && (*(longlong *)(param_1 + 0x188) == 0)) {
      uVar20 = uVar9;
    }
    uVar10 = FUN_180eb5810(uVar20,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    param_3 = ppppppplVar13;
    if (ppppppplVar14 == (longlong *******)0x0) goto code_r0x000180648428;
    fVar31 = (float)uVar8;
    uStackX_18 = CONCAT44(uStackX_18._4_4_,fVar31);
    fVar28 = uStackX_20._4_4_;
    uStackX_20 = CONCAT44(uStackX_20._4_4_,uStackX_20._4_4_);
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,ppppppplVar14,uVar10);
    param_3 = ppppppplVar14;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      fVar32 = *(float *)(param_1 + 0x194) * 1024.0;
      fVar33 = fVar31 - fVar32;
      if (fVar31 < fVar32) {
        fVar31 = *(float *)(param_1 + 0x198);
        if ((fVar33 <= fVar31) && (fVar33 = fVar31, 0.0 < fVar31)) {
          fVar33 = 0.0;
        }
      }
      else {
        fVar33 = fVar33 * 0.5;
      }
      *(float *)(param_1 + 0x198) = fVar33;
      fVar31 = fVar28 - fVar32;
      if (fVar28 < fVar32) {
        fVar28 = *(float *)(param_1 + 0x19c);
        if ((fVar31 <= fVar28) && (fVar31 = fVar28, 0.0 < fVar28)) {
          fVar31 = 0.0;
        }
      }
      else {
        fVar31 = fVar31 * 0.5;
      }
      *(float *)(param_1 + 0x19c) = fVar31;
      if (*(longlong *)(param_1 + 0x170) != 0) {
        plVar11 = (longlong *)
                  UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0);
        param_3 = (longlong *******)0x0;
        puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_218);
        if (plVar11 != (longlong *)0x0) {
          uVar8 = *puVar12;
          uVar2 = *(undefined4 *)(puVar12 + 1);
          lVar16 = *plVar11;
          if (*(ushort *)(lVar16 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10) +
                           0x47) * 0x10 + 0x138 + lVar16);
                goto code_r0x000180648069;
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(ushort *)(lVar16 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180648069:
          param_3 = (longlong *******)puVar12[1];
          uStack_258 = uVar8;
          uStack_250 = uVar2;
          (*(code *)*puVar12)(plVar11,&uStack_258,param_3);
          if (*(longlong *)(param_1 + 0x170) != 0) {
            plVar11 = (longlong *)
                      UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x170),0);
            param_3 = (longlong *******)0x0;
            puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_218);
            if (plVar11 != (longlong *)0x0) {
              uVar8 = *puVar12;
              uVar2 = *(undefined4 *)(puVar12 + 1);
              lVar16 = *plVar11;
              if (*(ushort *)(lVar16 + 0x12e) != 0) {
                uVar20 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + uVar20 * 0x10) + 0x73) *
                               0x10 + 0x138 + lVar16);
                    goto code_r0x000180648119;
                  }
                  uVar23 = (short)uVar20 + 1;
                  uVar20 = (ulonglong)uVar23;
                } while (uVar23 < *(ushort *)(lVar16 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180648119:
              param_3 = (longlong *******)puVar12[1];
              uStack_258 = uVar8;
              uStack_250 = uVar2;
              (*(code *)*puVar12)(plVar11,&uStack_258,param_3);
              if (*(longlong *)(param_1 + 0x170) != 0) {
                plVar11 = (longlong *)
                          UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x170),0);
                if (*(longlong *)(param_1 + 0x170) != 0) {
                  plVar18 = (longlong *)
                            UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0x170),0);
                  param_3 = (longlong *******)0x0;
                  puVar12 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_218);
                  if (plVar18 != (longlong *)0x0) {
                    uVar8 = *puVar12;
                    uVar2 = *(undefined4 *)(puVar12 + 1);
                    lVar16 = *plVar18;
                    if (*(ushort *)(lVar16 + 0x12e) != 0) {
                      uVar20 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + uVar20 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + uVar20 * 0x10) +
                                     0x43) * 0x10 + 0x138 + lVar16);
                          goto code_r0x0001806481d7;
                        }
                        uVar23 = (short)uVar20 + 1;
                        uVar20 = (ulonglong)uVar23;
                      } while (uVar23 < *(ushort *)(lVar16 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar18,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806481d7:
                    param_3 = (longlong *******)puVar12[1];
                    uStack_258 = uVar8;
                    uStack_250 = uVar2;
                    (*(code *)*puVar12)(plVar18,&uStack_258,param_3);
                    if (plVar11 != (longlong *)0x0) {
                      lVar16 = *plVar11;
                      if (*(ushort *)(lVar16 + 0x12e) != 0) {
                        do {
                          if (*(longlong *)(*(longlong *)(lVar16 + 0xb0) + uVar9 * 0x10) ==
                              TI_UnityEngine.UIElements.IStyle) {
                            puVar12 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + uVar9 * 0x10) +
                                       0xad) * 0x10 + 0x138 + lVar16);
                            goto code_r0x000180648249;
                          }
                          uVar23 = (short)uVar9 + 1;
                          uVar9 = (ulonglong)uVar23;
                        } while (uVar23 < *(ushort *)(lVar16 + 0x12e));
                      }
                      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180648249:
                      param_3 = (longlong *******)puVar12[1];
                      uStack_258 = uVar8;
                      uStack_250 = uVar2;
                      (*(code *)*puVar12)(plVar11,&uStack_258,param_3);
                      param_1 = uStackX_8;
                      if ((*(longlong *)(uStackX_8 + 0x188) != 0) &&
                         (lVar16 = *(longlong *)(*(longlong *)(uStackX_8 + 0x188) + 0x20),
                         lVar16 != 0)) {
                        lVar17 = LIT_"''";
                        if (1 < *(int *)(lVar16 + 0x18)) {
                          lVar16 = *(longlong *)(*(longlong *)(uStackX_8 + 0x188) + 0x20);
                          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(uStackX_8 + 400)) {
code_r0x000180648505:
                            FUN_1803155c0();
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          lVar16 = *(longlong *)
                                    (lVar16 + 0x20 + (longlong)(int)*(uint *)(uStackX_8 + 400) * 8);
                          if (lVar16 == 0) goto code_r0x000180648428;
                          param_3 = (longlong *******)0x0;
                          lVar17 = System_String__Concat
                                             (LIT_"' - '",*(undefined8 *)(lVar16 + 0x10),0)
                          ;
                        }
                        if (*(longlong *)(param_1 + 0x188) != 0) {
                          plVar11 = *(longlong **)(param_1 + 0xe8);
                          param_3 = (longlong *******)0x0;
                          uVar8 = System_String__Concat
                                            (*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x10),
                                             lVar17,0);
                          if (plVar11 != (longlong *)0x0) {
                            param_3 = *(longlong ********)(*plVar11 + 0xe50);
                            (**(code **)(*plVar11 + 0xe48))(plVar11,uVar8,param_3);
                            goto code_r0x0001806483ac;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_r0x000180648428;
    }
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      param_3 = (longlong *******)0x0;
      SparkMapaWindow__DesenhaTiles__180639fe0(param_1,CONCAT44(fVar28,fVar31),0);
      lVar16 = *(longlong *)(param_1 + 0xa0);
      if (lVar16 != 0) {
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        *(undefined4 *)(lVar16 + 0x18) = 0;
        if (0.024 <= *(float *)(param_1 + 0x208)) {
          SparkMapaWindow__PosicionaLojas__180643ce0(param_1,CONCAT44(fVar28,fVar31),0);
        }
        param_3 = (longlong *******)0x0;
        SparkMapaWindow__PosicionaNomesZoom__1806451a0(param_1,CONCAT44(fVar28,fVar31),0);
        plVar11 = *(longlong **)(param_1 + 0xe8);
        lVar16 = *(longlong *)(param_1 + 0x290);
        if (*(longlong *)(param_1 + 0x290) == 0) {
          fVar28 = *(float *)(param_1 + 0x20c);
          fVar31 = *(float *)(param_1 + 0x210);
          if (cRam00000001834b3d45 == '\0') {
            FUN_180315380(TI_SparkMapaWindow);
            FUN_180315380(LIT_"'Near '");
            FUN_180315380(LIT_"''");
            cRam00000001834b3d45 = '\x01';
          }
          lVar17 = LIT_"''";
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660(TI_SparkMapaWindow);
          }
          lVar16 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
          if (lVar16 == 0) goto code_r0x000180648428;
          fVar33 = 3.4028235e+38;
          while (uVar25 = (uint)uVar9, (int)uVar25 < *(int *)(lVar16 + 0x18)) {
            if (*(uint *)(lVar16 + 0x18) <= uVar25) goto code_r0x000180648505;
            lVar15 = (longlong)(int)uVar25;
            lVar21 = *(longlong *)(lVar16 + 0x20 + lVar15 * 0x18);
            fVar32 = *(float *)(lVar16 + 0x30 + lVar15 * 0x18);
            fVar29 = *(float *)(lVar16 + 0x34 + lVar15 * 0x18);
            if (cRam00000001834b3809 == '\0') {
              FUN_180315380(TI_System.Math);
              cRam00000001834b3809 = '\x01';
            }
            fVar32 = fVar28 - fVar32;
            fVar29 = fVar31 - fVar29;
            if (*(int *)(TI_System.Math + 0xe4) == 0) {
              func_0x000180315660();
            }
            auVar27._0_8_ = (double)(fVar29 * fVar29 + fVar32 * fVar32);
            auVar27._8_8_ = 0;
            if (auVar27._0_8_ < 0.0) {
              dVar26 = (double)FUN_1803a9930();
            }
            else {
              auVar27 = sqrtpd(ZEXT816(0),auVar27);
              dVar26 = auVar27._0_8_;
            }
            if ((float)dVar26 < fVar33) {
              lVar17 = lVar21;
              fVar33 = (float)dVar26;
            }
            uVar9 = (ulonglong)(uVar25 + 1);
          }
          lVar16 = LIT_"''";
          param_1 = uStackX_8;
          if (fVar33 < 40000.0) {
            param_3 = (longlong *******)0x0;
            lVar16 = System_String__Concat(LIT_"'Near '",lVar17,0);
            param_1 = uStackX_8;
          }
        }
        if (plVar11 != (longlong *)0x0) {
          param_3 = *(longlong ********)(*plVar11 + 0xe50);
          (**(code **)(*plVar11 + 0xe48))(plVar11,lVar16,param_3);
code_r0x0001806483ac:
          plVar11 = *(longlong **)(param_1 + 0xf0);
          uVar8 = LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'";
joined_r0x0001806483b6:
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0xe48))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0xe50));
            SparkMapaWindow__PosicionaJogador__180643a60(param_1,0);
            return;
          }
        }
      }
      goto code_r0x000180648428;
    }
    fVar29 = *(float *)(param_1 + 0x1fc) * 1024.0;
    fVar32 = *(float *)(param_1 + 0x1fc) * 1536.0;
    fVar33 = fVar31 - fVar29;
    if (fVar31 < fVar29) {
      fVar29 = *(float *)(param_1 + 0x200);
      if ((fVar33 <= fVar29) && (fVar33 = 0.0, fVar29 <= 0.0)) {
        fVar33 = fVar29;
      }
    }
    else {
      fVar33 = fVar33 * 0.5;
    }
    *(float *)(param_1 + 0x200) = fVar33;
    fVar33 = fVar28 - fVar32;
    if (fVar28 < fVar32) {
      fVar32 = *(float *)(param_1 + 0x204);
      if ((fVar33 <= fVar32) && (fVar33 = 0.0, fVar32 <= 0.0)) {
        fVar33 = fVar32;
      }
    }
    else {
      fVar33 = fVar33 * 0.5;
    }
    *(float *)(param_1 + 0x204) = fVar33;
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    param_3 = (longlong *******)0x0;
    plVar11 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    uStack_238 = *plVar11;
    fStack_230 = *(float *)(plVar11 + 1);
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,&uStack_238);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    param_3 = (longlong *******)0x0;
    plVar11 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    uStack_238 = *plVar11;
    fStack_230 = *(float *)(plVar11 + 1);
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,&uStack_238);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    param_3 = (longlong *******)0x0;
    plVar11 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    uStack_238 = *plVar11;
    fStack_230 = *(float *)(plVar11 + 1);
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,&uStack_238);
    param_3 = ppppppplVar13;
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x000180648428;
    ppppppplVar13 =
         (longlong *******)
         UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    param_3 = (longlong *******)0x0;
    plVar11 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648428;
    uStack_238 = *plVar11;
    fStack_230 = *(float *)(plVar11 + 1);
    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,ppppppplVar13,&uStack_238);
    lVar16 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Rect>);
    FUN_180bba2e0(lVar16,MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
    param_3 = ppppppplVar13;
    if ((*(longlong *)(param_1 + 0xd0) == 0) ||
       (lVar17 = UnityEngine_UIElements_VisualElement__Children(*(longlong *)(param_1 + 0xd0),0),
       param_3 = ppppppplVar13, lVar17 == 0)) goto code_r0x000180648428;
    lStack_1e8 = lVar16;
    appppppplStack_248[0] = (longlong *******)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar17);
    uStack_1b0 = 0;
    ppppppplStack_1a8 = (longlong *******)appppppplStack_248;
    while (ppppppplVar13 = appppppplStack_248[0], appppppplStack_248[0] != (longlong *******)0x0) {
      param_3 = appppppplStack_248[0];
      cVar7 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
      if (cVar7 == '\0') {
        if (appppppplStack_248[0] != (longlong *******)0x0) {
          param_3 = appppppplStack_248[0];
          FUN_180002390(0,TI_System.IDisposable,appppppplStack_248[0]);
        }
        if ((*(longlong *)(param_1 + 0x178) == 0) ||
           (lVar17 = UnityEngine_UIElements_VisualElement__Children
                               (*(longlong *)(param_1 + 0x178),0), lVar17 == 0))
        goto code_r0x000180648428;
        appppppplStack_248[0] = (longlong *******)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar17);
        uStack_218 = 0;
        uStack_210 = (longlong *******)appppppplStack_248;
        goto code_r0x000180647302;
      }
      ppppppplVar13 = appppppplStack_248[0];
      if (appppppplStack_248[0] == (longlong *******)0x0) goto code_r0x000180648466;
      lVar17 = FUN_1800020c0(0,ppppTI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
      if (lVar17 == 0) goto code_r0x000180648461;
      ppppppplVar13 = (longlong *******)UnityEngine_UIElements_VisualElement__get_userData(lVar17,0)
      ;
      if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x00018064845c;
      if ((*ppppppplVar13)[8] != *(longlong ******)(TI_SparkMapaWindow.Cidade + 0x40))
      goto code_r0x000180648457;
      plVar11 = (longlong *)func_0x000180314870(ppppppplVar13);
      lVar21 = *plVar11;
      fVar33 = *(float *)((longlong)plVar11 + 0xc);
      fVar32 = *(float *)(param_1 + 0x204);
      fVar29 = *(float *)(param_1 + 0x1fc);
      fVar30 = fVar29 * *(float *)(plVar11 + 1) + *(float *)(param_1 + 0x200);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
      ppppppplVar13 = (longlong *******)0x0;
      plVar18 = (longlong *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258,fVar30 - 9.0,0);
      if (plVar11 == (longlong *)0x0) goto code_r0x000180648452;
      lVar15 = *plVar18;
      fVar3 = *(float *)(plVar18 + 1);
      lVar4 = *plVar11;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        uVar20 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)(*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + uVar20 * 0x10) + 0x47)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x000180646fa9;
          }
          uVar23 = (short)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
        } while (uVar23 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180646fa9:
      fVar32 = fVar33 * fVar29 + fVar32;
      uStack_238 = lVar15;
      fStack_230 = fVar3;
      (*(code *)*puVar12)(plVar11,&uStack_238,puVar12[1]);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
      ppppppplVar13 = (longlong *******)0x0;
      plVar18 = (longlong *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1d8,fVar32 - 9.0,0);
      if (plVar11 == (longlong *)0x0) goto code_r0x00018064844d;
      lVar17 = *plVar18;
      lVar4 = plVar18[1];
      lVar15 = *plVar11;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        uVar20 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar12 = (undefined8 *)
                      ((longlong)(*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + uVar20 * 0x10) + 0x73)
                       * 0x10 + 0x138 + lVar15);
            goto code_r0x000180647059;
          }
          uVar23 = (short)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
        } while (uVar23 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180647059:
      ppppppplVar13 = (longlong *******)puVar12[1];
      uStack_1f8 = lVar17;
      uStack_1f0 = (int)lVar4;
      (*(code *)*puVar12)(plVar11,&uStack_1f8,ppppppplVar13);
      ppppppplVar14 = pppppppMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
      if (lVar16 == 0) goto code_r0x000180648448;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      lVar17 = *(longlong *)(lVar16 + 0x10);
      if (lVar17 == 0) goto code_r0x000180648443;
      uVar25 = *(uint *)(lVar16 + 0x18);
      if (uVar25 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar25 + 1;
        param_3 = ppppppplVar14;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto code_r0x00018064842e;
        lVar15 = (longlong)(int)uVar25 + 2;
        *(float *)(lVar17 + lVar15 * 0x10) = fVar30 - 10.0;
        *(float *)(lVar17 + 4 + lVar15 * 0x10) = fVar32 - 10.0;
        *(undefined4 *)(lVar17 + 8 + lVar15 * 0x10) = 0x41a00000;
        *(undefined4 *)(lVar17 + 0xc + lVar15 * 0x10) = 0x41a00000;
      }
      else {
        uStack_228 = CONCAT44(fVar32 - 10.0,fVar30 - 10.0);
        ppppppplStack_220 = (longlong *******)0x41a0000041a00000;
        ppppppplVar14 = (longlong *******)ppppppplVar14[4][0x18][0xe];
        FUN_1815b2780(lVar16,&uStack_228,ppppppplVar14);
      }
      param_3 = pppppppMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
      if (lVar21 == 0) goto code_r0x00018064843e;
      fVar33 = (float)(*(int *)(lVar21 + 0x10) * 0xf) * 0.5;
      if (170.0 <= fVar33) {
        fVar33 = 170.0;
      }
      fVar30 = fVar30 - fVar33 * 0.5;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      lVar17 = *(longlong *)(lVar16 + 0x10);
      if (lVar17 == 0) goto code_r0x000180648439;
      uVar25 = *(uint *)(lVar16 + 0x18);
      if (uVar25 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar25 + 1;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto code_r0x000180648434;
        lVar21 = (longlong)(int)uVar25 + 2;
        *(float *)(lVar17 + lVar21 * 0x10) = fVar30;
        *(float *)(lVar17 + 4 + lVar21 * 0x10) = fVar32 + 10.0;
        *(float *)(lVar17 + 8 + lVar21 * 0x10) = fVar33;
        *(undefined4 *)(lVar17 + 0xc + lVar21 * 0x10) = 0x41900000;
        param_1 = uStackX_8;
      }
      else {
        uStack_218 = CONCAT44(fVar32 + 10.0,fVar30);
        uStack_210 = (longlong *******)CONCAT44(0x41900000,fVar33);
        FUN_1815b2780(lVar16,&uStack_218,param_3[4][0x18][0xe]);
        param_1 = uStackX_8;
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180648477:
  FUN_1803155d0();
code_r0x00018064847c:
  FUN_1803155c0();
code_r0x000180648481:
  FUN_1803155d0();
  ppppppplVar14 = ppppppplVar13;
code_r0x000180648486:
  FUN_1803155d0();
code_r0x00018064848b:
  FUN_1803155d0();
code_r0x000180648490:
  FUN_1803155d0();
  ppppppplVar13 = ppppppplVar14;
code_r0x000180648495:
  FUN_1803146d0(ppppppplVar13);
code_r0x00018064849d:
  FUN_1803155d0();
code_r0x0001806484a2:
  FUN_1803155d0();
code_r0x0001806484a7:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001806484b3:
  FUN_1803155c0();
  FUN_180311490();
code_r0x0001806484bd:
  FUN_1803155c0();
code_r0x0001806484c2:
  FUN_1803155d0();
code_r0x0001806484c7:
  FUN_1803155d0();
code_r0x0001806484cc:
  FUN_1803155d0();
code_r0x0001806484d1:
  FUN_1803155d0();
code_r0x0001806484d6:
  FUN_1803155d0();
code_r0x0001806484db:
  FUN_1803155d0();
code_r0x0001806484e0:
  FUN_1803155d0();
code_r0x0001806484e5:
  FUN_1803146d0();
code_r0x0001806484ea:
  FUN_1803155d0();
code_r0x0001806484ef:
  FUN_1803155d0();
code_r0x0001806484f4:
  FUN_1803155d0();
code_r0x0001806484f9:
  FUN_1803155d0();
  FUN_180311490();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_r0x000180647302:
  if (appppppplStack_248[0] != (longlong *******)0x0) {
    param_3 = appppppplStack_248[0];
    cVar7 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
    ppppppplVar13 = appppppplStack_248[0];
    if (cVar7 == '\0') {
      if (appppppplStack_248[0] != (longlong *******)0x0) {
        param_3 = appppppplStack_248[0];
        FUN_180002390(0,TI_System.IDisposable,appppppplStack_248[0]);
      }
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_1a0 = 0;
      uStack_198 = CONCAT44(fVar28,fVar31);
      if ((*(longlong *)(param_1 + 0x88) == 0) ||
         (lVar17 = UnityEngine_UIElements_VisualElement__Children(*(longlong *)(param_1 + 0x88),0),
         lVar17 == 0)) goto code_r0x000180648428;
      appppppplStack_248[0] = (longlong *******)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar17);
      uStack_228 = 0;
      ppppppplStack_220 = (longlong *******)appppppplStack_248;
      goto code_r0x0001806477a0;
    }
    if (appppppplStack_248[0] == (longlong *******)0x0) goto code_r0x0001806484a2;
    pppppplVar19 = *appppppplStack_248[0];
    if (*(ushort *)((longlong)pppppplVar19 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (pppppplVar19[0x16][uVar20 * 2] == ppppTI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
          pppppplVar19 = pppppplVar19 +
                         (longlong)*(int *)(pppppplVar19[0x16] + uVar20 * 2 + 1) * 2 + 0x27;
          goto code_r0x000180647382;
        }
        uVar23 = (short)uVar20 + 1;
        uVar20 = (ulonglong)uVar23;
      } while (uVar23 < *(ushort *)((longlong)pppppplVar19 + 0x12e));
    }
    pppppplVar19 = (longlong ******)FUN_180312860(appppppplStack_248[0],ppppTI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x000180647382:
    lVar17 = (*(code *)*pppppplVar19)(ppppppplVar13,pppppplVar19[1]);
    if (lVar17 == 0) goto code_r0x00018064849d;
    ppppppplVar13 = (longlong *******)UnityEngine_UIElements_VisualElement__get_userData(lVar17,0);
    if (ppppppplVar13 == (longlong *******)0x0) goto code_r0x000180648477;
    if ((*(byte *)(*ppppppplVar13 + 0x26) < *(byte *)(ppppTI_SparkMapaWindow.Masmorra + 0x26)) ||
       ((*ppppppplVar13)[0x19][(ulonglong)*(byte *)(ppppTI_SparkMapaWindow.Masmorra + 0x26) - 1] !=
        ppppTI_SparkMapaWindow.Masmorra)) goto code_r0x000180648495;
    fVar33 = *(float *)(param_1 + 0x200);
    fVar32 = *(float *)(param_1 + 0x204);
    uStack_1f8 = SparkMapaWindow__L2ParaArte__18063b850(param_1,ppppppplVar13[3],0);
    fVar29 = *(float *)(param_1 + 0x1fc);
    fVar33 = fVar29 * (float)uStack_1f8 + fVar33;
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
    ppppppplVar14 = (longlong *******)0x0;
    plVar18 = (longlong *)
              UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_258,fVar33 - 7.0,0);
    if (plVar11 == (longlong *)0x0) goto code_r0x000180648490;
    lVar21 = *plVar18;
    fVar30 = *(float *)(plVar18 + 1);
    lVar15 = *plVar11;
    if (*(ushort *)(lVar15 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar12 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + uVar20 * 0x10) + 0x47) *
                     0x10 + 0x138 + lVar15);
          goto code_r0x0001806474c9;
        }
        uVar23 = (short)uVar20 + 1;
        uVar20 = (ulonglong)uVar23;
      } while (uVar23 < *(ushort *)(lVar15 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806474c9:
    fVar32 = fVar29 * uStack_1f8._4_4_ + fVar32;
    uStack_238 = lVar21;
    fStack_230 = fVar30;
    (*(code *)*puVar12)(plVar11,&uStack_238,puVar12[1]);
    plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
    ppppppplVar14 = (longlong *******)0x0;
    puVar12 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1b0,fVar32 - 7.0,0);
    if (plVar11 == (longlong *)0x0) goto code_r0x00018064848b;
    uVar8 = *puVar12;
    uVar2 = *(undefined4 *)(puVar12 + 1);
    lVar17 = *plVar11;
    if (*(ushort *)(lVar17 + 0x12e) != 0) {
      uVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + uVar20 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar12 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + uVar20 * 0x10) + 0x73) *
                     0x10 + 0x138 + lVar17);
          goto code_r0x000180647579;
        }
        uVar23 = (short)uVar20 + 1;
        uVar20 = (ulonglong)uVar23;
      } while (uVar23 < *(ushort *)(lVar17 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180647579:
    ppppppplVar14 = (longlong *******)puVar12[1];
    uStack_1d8 = uVar8;
    uStack_1d0 = uVar2;
    (*(code *)*puVar12)(plVar11,&uStack_1d8,ppppppplVar14);
    ppppppplVar13 = pppppppMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
    fVar32 = fVar32 - 7.0;
    fVar33 = fVar33 - 7.0;
    if (lVar16 == 0) goto code_r0x000180648486;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    lVar17 = *(longlong *)(lVar16 + 0x10);
    if (lVar17 == 0) goto code_r0x000180648481;
    uVar25 = *(uint *)(lVar16 + 0x18);
    if (uVar25 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar25 + 1;
      if (*(uint *)(lVar17 + 0x18) <= uVar25) goto code_r0x00018064847c;
      lVar21 = (longlong)(int)uVar25 + 2;
      *(float *)(lVar17 + lVar21 * 0x10) = fVar33;
      *(float *)(lVar17 + 4 + lVar21 * 0x10) = fVar32;
      *(undefined4 *)(lVar17 + 8 + lVar21 * 0x10) = 0x41600000;
      *(undefined4 *)(lVar17 + 0xc + lVar21 * 0x10) = 0x41600000;
      param_1 = uStackX_8;
    }
    else {
      uStack_228 = CONCAT44(fVar32,fVar33);
      ppppppplStack_220 = (longlong *******)0x4160000041600000;
      FUN_1815b2780(lVar16,&uStack_228,ppppppplVar13[4][0x18][0xe]);
      param_1 = uStackX_8;
    }
    goto code_r0x000180647302;
  }
  goto code_r0x0001806484a7;
code_r0x0001806477a0:
  ppppppplVar13 = appppppplStack_248[0];
  if (appppppplStack_248[0] == (longlong *******)0x0) goto code_r0x0001806484f9;
  pppppplVar19 = *appppppplStack_248[0];
  if (*(ushort *)((longlong)pppppplVar19 + 0x12e) != 0) {
    uVar20 = 0;
    do {
      if (pppppplVar19[0x16][uVar20 * 2] == TI_System.Collections.IEnumerator) {
        pppppplVar19 = pppppplVar19 +
                       (longlong)*(int *)(pppppplVar19[0x16] + uVar20 * 2 + 1) * 2 + 0x27;
        goto code_r0x000180647806;
      }
      uVar23 = (short)uVar20 + 1;
      uVar20 = (ulonglong)uVar23;
    } while (uVar23 < *(ushort *)((longlong)pppppplVar19 + 0x12e));
  }
  pppppplVar19 = (longlong ******)FUN_180312860(appppppplStack_248[0],TI_System.Collections.IEnumerator,0);
code_r0x000180647806:
  cVar7 = (*(code *)*pppppplVar19)(ppppppplVar13,pppppplVar19[1]);
  ppppppplVar13 = appppppplStack_248[0];
  if (cVar7 == '\0') {
    param_3 = ppppppplStack_220;
    if (*ppppppplStack_220 != (longlong ******)0x0) {
      param_3 = (longlong *******)*ppppppplStack_220;
      FUN_180002390(0,TI_System.IDisposable,param_3);
    }
    plVar11 = *(longlong **)(param_1 + 0xe8);
    if (plVar11 == (longlong *)0x0) goto code_r0x000180648428;
    param_3 = *(longlong ********)(*plVar11 + 0xe50);
    (**(code **)(*plVar11 + 0xe48))(plVar11,LIT_"''",param_3);
    plVar11 = *(longlong **)(param_1 + 0xf0);
    uVar8 = LIT_"'Mouse wheel: zoom    Drag: move    +: open the region'";
    goto joined_r0x0001806483b6;
  }
  if (appppppplStack_248[0] == (longlong *******)0x0) goto code_r0x0001806484f4;
  pppppplVar19 = *appppppplStack_248[0];
  if (*(ushort *)((longlong)pppppplVar19 + 0x12e) != 0) {
    uVar20 = 0;
    do {
      if (pppppplVar19[0x16][uVar20 * 2] == ppppTI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
        pppppplVar19 = pppppplVar19 +
                       (longlong)*(int *)(pppppplVar19[0x16] + uVar20 * 2 + 1) * 2 + 0x27;
        goto code_r0x000180647876;
      }
      uVar23 = (short)uVar20 + 1;
      uVar20 = (ulonglong)uVar23;
    } while (uVar23 < *(ushort *)((longlong)pppppplVar19 + 0x12e));
  }
  pppppplVar19 = (longlong ******)FUN_180312860(appppppplStack_248[0],ppppTI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x000180647876:
  lVar17 = (*(code *)*pppppplVar19)(ppppppplVar13,pppppplVar19[1]);
  if (lVar17 == 0) goto code_r0x0001806484ef;
  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar17,0);
  if (plVar11 == (longlong *)0x0) goto code_r0x0001806484ea;
  if (*(longlong *)(*plVar11 + 0x40) != *(longlong *)(TI_SparkMapaWindow.Area + 0x40))
  goto code_r0x0001806484e5;
  plVar11 = (longlong *)func_0x000180314870(plVar11);
  lVar21 = *plVar11;
  lStack_140 = plVar11[1];
  fVar28 = *(float *)(param_1 + 0x200);
  fVar31 = *(float *)(param_1 + 0x204);
  uVar20 = SparkMapaWindow__L2ParaArte__18063b850(param_1,lStack_140,0);
  uStackX_18 = uVar20;
  if (lVar21 == 0) goto code_r0x0001806484e0;
  fVar33 = *(float *)(param_1 + 0x1fc);
  fVar32 = (float)(*(int *)(lVar21 + 0x10) * 0xc) * 0.5 + 6.0;
  if (fVar32 <= 176.0) {
    fVar29 = 14.0;
  }
  else {
    fVar29 = 28.0;
  }
  if (176.0 <= fVar32) {
    fVar32 = 176.0;
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  fVar28 = fVar33 * (float)uVar20 + fVar28;
  fVar31 = fVar33 * uStackX_18._4_4_ + fVar31;
  uVar25 = 0;
  lVar21 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x50);
  uStack_208 = 0;
  uVar20 = uVar9;
  uStack_238 = lVar21;
  fStack_204 = fVar29;
  fStack_200 = fVar28;
  uStack_1f8 = lVar17;
  fStack_1c8 = fVar32;
  fStack_1c4 = fVar31;
  if (lVar21 == 0) goto code_r0x0001806484db;
  while( true ) {
    uVar24 = (uint)uVar20;
    if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar24) break;
    if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x0001806484b3;
    fVar33 = *(float *)(lVar21 + 0x20 + (longlong)(int)uVar24 * 4);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar30 = (fVar33 + fVar31) - fVar29 * 0.5;
    fVar33 = fVar28 - fVar32 * 0.5;
    fStack_1c0 = fVar33;
    fStack_188 = fVar33;
    fStack_184 = fVar30;
    fStack_180 = fVar32;
    fStack_17c = fVar29;
    cVar7 = FUN_180637450(&uStack_1a0,&fStack_188,0);
    if (cVar7 == '\0') break;
    if (lVar16 == 0) goto code_r0x0001806484d1;
    uStackX_18 = uStackX_18 & 0xffffffffffffff00;
    fStack_1bc = fVar30;
    fStack_1b8 = fVar32;
    fStack_1b4 = fVar29;
    FUN_180badb20(&uStack_138,lVar16);
    uStack_118 = uStack_138;
    uStack_110 = uStack_130;
    uStack_108 = CONCAT44(uStack_124,uStack_128);
    uStack_100 = uStack_120;
    uStack_168 = 0;
    puStack_160 = &uStack_118;
    do {
      cVar7 = FUN_1812ec7d0(&uStack_118,MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
      if (cVar7 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_118,MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
        ppppppplVar13 = pppppppMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        lVar21 = *(longlong *)(lVar16 + 0x10);
        if (lVar21 == 0) goto code_r0x0001806484cc;
        uVar25 = *(uint *)(lVar16 + 0x18);
        if (uVar25 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar25 + 1;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto code_r0x0001806484bd;
          uStack_238 = CONCAT44(fVar30,fVar33);
          pfVar1 = (float *)(lVar21 + ((longlong)(int)uVar25 + 2) * 0x10);
          *pfVar1 = fVar33;
          pfVar1[1] = fVar30;
          pfVar1[2] = fVar32;
          pfVar1[3] = fVar29;
          fStack_230 = fVar32;
          fStack_22c = fVar29;
        }
        else {
          fStack_158 = fVar33;
          fStack_154 = fVar30;
          fStack_150 = fVar32;
          fStack_14c = fVar29;
          FUN_1815b2780(lVar16,&fStack_158,ppppppplVar13[4][0x18][0xe]);
        }
        lVar21 = UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
        puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1b0);
        if (lVar21 == 0) goto code_r0x0001806484c7;
        uStack_1d8 = *puVar12;
        uStack_1d0 = *(undefined4 *)(puVar12 + 1);
        FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar21,&uStack_1d8);
        lVar21 = UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_218);
        if (lVar21 == 0) goto code_r0x0001806484c2;
        uStack_258 = *puVar12;
        uStack_250 = *(undefined4 *)(puVar12 + 1);
        FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar21,&uStack_258);
        uVar25 = 1;
        goto code_r0x000180647e65;
      }
      uStack_138 = uStack_108;
      uStack_130 = uStack_100;
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      fStack_178 = fVar33;
      fStack_174 = fVar30;
      fStack_170 = fVar32;
      fStack_16c = fVar29;
      cVar7 = FUN_180637450(&uStack_138,&fStack_178,0);
    } while (cVar7 == '\0');
    uStackX_18 = CONCAT71(uStackX_18._1_7_,1);
    Gear__UpdateWeaponType__1803dadf0(&uStack_118);
    uStack_208 = uVar24 + 1;
    uVar20 = (ulonglong)uStack_208;
  }
code_r0x000180647e65:
  lVar17 = UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
  uVar8 = FUN_180eb5810(uVar25 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar17 == 0) goto code_r0x0001806484d6;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar17,uVar8);
  param_1 = uStackX_8;
  goto code_r0x0001806477a0;
}

