// SparkMapaWindow__PosicionaNomesZoom__1806451a0 @ 0x1806451a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaNomesZoom__1806451a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStackX_24;
  float fStack_224;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  longlong *plStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [176];
  
  if (cRam00000001834b3d41 == '\0') {
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
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d41 = '\x01';
  }
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  fVar17 = (float)param_2;
  fStack_224 = (float)((ulonglong)param_2 >> 0x20);
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_1b8 = 0;
  fStack_1ac = fStack_224;
  fStack_1b0 = fVar17;
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     (lVar5 = UnityEngine_UIElements_VisualElement__Children(*(longlong *)(param_1 + 0x98),0),
     lVar5 == 0)) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lStack_200 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar5);
  uStack_1d8 = 0;
  plStack_1d0 = &lStack_200;
  do {
    if (lStack_200 == 0) {
code_r0x000180645b6a:
      FUN_1803155d0();
      FUN_180311490();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
    if (cVar4 == '\0') {
      if (*plStack_1d0 != 0) {
        FUN_180002390(0,TI_System.IDisposable,*plStack_1d0);
      }
      return;
    }
    if (lStack_200 == 0) {
code_r0x000180645b65:
      FUN_1803155d0();
      goto code_r0x000180645b6a;
    }
    lVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
    if (lVar5 == 0) {
code_r0x000180645b60:
      FUN_1803155d0();
      goto code_r0x000180645b65;
    }
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar5,0);
    if (plVar6 != (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      if (*plVar6 == TI_SparkMapaWindow.Cidade) {
        plVar11 = plVar6;
      }
      bVar14 = plVar11 != (longlong *)0x0;
      if (plVar11 == (longlong *)0x0) goto code_r0x000180645425;
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar5,0);
      if (plVar6 != (longlong *)0x0) {
        if (*(longlong *)(*plVar6 + 0x40) == *(longlong *)(TI_SparkMapaWindow.Cidade + 0x40)) {
          plVar6 = (longlong *)func_0x000180314870(plVar6);
          uVar15 = (undefined4)plVar6[2];
          uVar16 = *(undefined4 *)((longlong)plVar6 + 0x14);
          goto code_r0x0001806454b8;
        }
        goto code_r0x000180645b56;
      }
code_r0x000180645b5b:
      FUN_1803155d0();
      goto code_r0x000180645b60;
    }
    bVar14 = false;
code_r0x000180645425:
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar5,0);
    if (plVar6 == (longlong *)0x0) {
code_r0x000180645b1a:
      FUN_1803155d0();
code_r0x000180645b1f:
      FUN_1803155c0();
      FUN_180311490();
code_r0x000180645b29:
      FUN_1803155c0();
code_r0x000180645b2e:
      FUN_1803155d0();
code_r0x000180645b33:
      FUN_1803155d0();
code_r0x000180645b38:
      FUN_1803155d0();
code_r0x000180645b3d:
      FUN_1803155d0();
code_r0x000180645b42:
      FUN_1803155d0();
code_r0x000180645b47:
      FUN_1803155d0();
code_r0x000180645b4c:
      FUN_1803155d0();
code_r0x000180645b51:
      FUN_1803155d0();
code_r0x000180645b56:
      FUN_1803146d0();
      goto code_r0x000180645b5b;
    }
    if (*(longlong *)(*plVar6 + 0x40) != *(longlong *)(TI_SparkMapaWindow.Area + 0x40)) {
      FUN_1803146d0(plVar6,TI_SparkMapaWindow.Area);
      goto code_r0x000180645b1a;
    }
    plVar6 = (longlong *)func_0x000180314870();
    lVar8 = plVar6[1];
    uStack_130._0_4_ = (undefined4)lVar8;
    uStack_130._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uVar15 = (undefined4)uStack_130;
    uVar16 = uStack_130._4_4_;
    uStack_130 = lVar8;
code_r0x0001806454b8:
    lVar8 = *plVar6;
    uVar7 = SparkMapaWindow__NaVista__180640ab0(param_1,CONCAT44(uVar16,uVar15),0);
    iVar10 = 0xf;
    if (!bVar14) {
      iVar10 = 0xc;
    }
    if (lVar8 == 0) goto code_r0x000180645b51;
    fVar22 = (float)uVar7;
    fVar21 = (float)(iVar10 * *(int *)(lVar8 + 0x10)) * 0.5 + 6.0;
    fVar20 = (float)iVar10;
    if (fVar21 <= 176.0) {
      fVar20 = fVar20 + 2.0;
    }
    else {
      fVar20 = fVar20 + fVar20 + 4.0;
    }
    if (176.0 <= fVar21) {
      fVar21 = 176.0;
    }
    uVar13 = 0;
    lStack_1f8 = lVar5;
    if ((((-100.0 < fVar22) && (fStackX_24 = (float)((ulonglong)uVar7 >> 0x20), -40.0 < fStackX_24))
        && (fVar22 < fVar17 + 100.0)) && (fStackX_24 < fStack_224 + 40.0)) {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x68);
      auStack_1e8._0_8_ = lVar8;
      plVar6 = (longlong *)0x0;
      if (lVar8 != 0) {
        while( true ) {
          uVar12 = (uint)plVar6;
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar12) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar12) goto code_r0x000180645b1f;
          fVar19 = *(float *)(lVar8 + 0x20 + (longlong)(int)uVar12 * 4);
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          fVar19 = (fStackX_24 + fVar19) - fVar20 * 0.5;
          auVar18._0_4_ = fVar22 - fVar21 * 0.5;
          fStack_1c8 = auVar18._0_4_;
          fStack_1c4 = fVar19;
          fStack_1c0 = fVar21;
          fStack_1bc = fVar20;
          cVar4 = FUN_180637450(&uStack_1b8,&fStack_1c8,0);
          if (cVar4 != '\0') {
            if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x000180645b42;
            FUN_180badb20(&uStack_128);
            uStack_158 = CONCAT44(uStack_124,uStack_128);
            uStack_150 = CONCAT44(uStack_11c,uStack_120);
            uStack_148 = uStack_118;
            uStack_140 = uStack_110;
            uStack_198 = 0;
            puStack_190 = &uStack_158;
            do {
              cVar4 = FUN_1812ec7d0(&uStack_158,MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
              if (cVar4 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_158,MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
                lVar3 = MR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
                lVar8 = *(longlong *)(param_1 + 0xa0);
                if (lVar8 == 0) goto code_r0x000180645b3d;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                lVar1 = *(longlong *)(lVar8 + 0x10);
                if (lVar1 == 0) goto code_r0x000180645b38;
                uVar13 = *(uint *)(lVar8 + 0x18);
                if (uVar13 < *(uint *)(lVar1 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar13 + 1;
                  if (*(uint *)(lVar1 + 0x18) <= uVar13) goto code_r0x000180645b29;
                  auVar18._4_4_ = fVar19;
                  auVar18._8_4_ = fVar21;
                  auVar18._12_4_ = fVar20;
                  *(undefined1 (*) [16])(lVar1 + ((longlong)(int)uVar13 + 2) * 0x10) = auVar18;
                  auStack_1e8 = auVar18;
                }
                else {
                  fStack_188 = auVar18._0_4_;
                  fStack_184 = fVar19;
                  fStack_180 = fVar21;
                  fStack_17c = fVar20;
                  FUN_1815b2780(lVar8,&fStack_188,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                puVar9 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(auStack_f8,fVar22 - 90.0,0)
                ;
                if (lVar8 == 0) goto code_r0x000180645b33;
                uStack_178 = *puVar9;
                uStack_170 = *(undefined4 *)(puVar9 + 1);
                FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_178);
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                  func_0x000180315660();
                }
                puVar9 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(auStack_e8,fVar19 - 1.0,0);
                if (lVar8 == 0) goto code_r0x000180645b2e;
                uStack_168 = *puVar9;
                uStack_160 = *(undefined4 *)(puVar9 + 1);
                FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_168);
                uVar13 = 1;
                goto code_r0x000180645a2d;
              }
              uStack_128 = (undefined4)uStack_148;
              uStack_124 = uStack_148._4_4_;
              uStack_120 = (undefined4)uStack_140;
              uStack_11c = uStack_140._4_4_;
              if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                func_0x000180315660();
              }
              fStack_1a8 = auVar18._0_4_;
              fStack_1a4 = fVar19;
              fStack_1a0 = fVar21;
              fStack_19c = fVar20;
              cVar4 = FUN_180637450(&uStack_128,&fStack_1a8,0);
            } while (cVar4 == '\0');
            Gear__UpdateWeaponType__1803dadf0(&uStack_158);
          }
          plVar6 = (longlong *)(ulonglong)(uVar12 + 1);
        }
        goto code_r0x000180645a2d;
      }
      goto code_r0x000180645b47;
    }
code_r0x000180645a2d:
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar7 = FUN_180eb5810(uVar13 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar5 == 0) goto code_r0x000180645b4c;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar7);
  } while( true );
}

