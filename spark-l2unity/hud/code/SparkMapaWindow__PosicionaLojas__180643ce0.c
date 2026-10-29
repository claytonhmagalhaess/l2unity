// SparkMapaWindow__PosicionaLojas__180643ce0 @ 0x180643ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaLojas__180643ce0(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong **pplVar14;
  ushort uVar15;
  longlong **pplVar16;
  uint uVar17;
  bool bVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStackX_24;
  longlong *plStack_220;
  int iStack_218;
  undefined4 uStack_214;
  undefined8 uStack_208;
  longlong **pplStack_200;
  undefined8 uStack_1f8;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong **pplStack_198;
  undefined8 uStack_188;
  undefined4 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  longlong **pplStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  longlong *plStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  longlong *plStack_118;
  undefined8 uStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  
  if (cRam00000001834b3d42 == '\0') {
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
    FUN_180315380(TI_SparkMapaWindow.Loja);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d42 = '\x01';
  }
  uStack_1a8 = 0;
  plStack_148 = (longlong *)0x0;
  uStack_140 = 0;
  plStack_138 = (longlong *)0x0;
  uStack_130 = 0;
  fStackX_24 = (float)((ulonglong)param_2 >> 0x20);
  bVar20 = false;
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar25 = fStackX_24 + 48.0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar7 = UnityEngine_UIElements_VisualElement__Children(*(longlong *)(param_1 + 0x90),0);
    if (lVar7 != 0) {
      lStack_1c0 = lVar2;
      plStack_220 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar7);
      uStack_1a0 = 0;
      pplVar16 = &plStack_220;
      pplStack_198 = pplVar16;
code_r0x000180643ed0:
      if (plStack_220 != (longlong *)0x0) {
        cVar5 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        plVar9 = plStack_220;
        if (cVar5 != '\0') {
          if (plStack_220 != (longlong *)0x0) {
            lVar7 = *plStack_220;
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) ==
                    TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
                  puVar8 = (undefined8 *)
                           ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) *
                            0x10 + 0x138 + lVar7);
                  goto code_r0x000180643f52;
                }
                uVar15 = (short)uVar10 + 1;
                uVar10 = (ulonglong)uVar15;
              } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plStack_220,TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x000180643f52:
            lVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
            if (lVar7 != 0) {
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lVar7,0);
              if (plVar9 == (longlong *)0x0) {
                FUN_1803155d0();
                goto code_r0x000180644b58;
              }
              plVar19 = plVar9;
              if ((*(byte *)(TI_SparkMapaWindow.Loja + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                 (*(longlong *)
                   (*(longlong *)(*plVar9 + 200) + -8 +
                   (ulonglong)*(byte *)(TI_SparkMapaWindow.Loja + 0x130) * 8) == TI_SparkMapaWindow.Loja))
              {
                plVar19 = (longlong *)0x0;
                uVar10 = SparkMapaWindow__NaVista__180640ab0
                                   (param_1,CONCAT44((float)*(int *)((longlong)plVar9 + 0x24),
                                                     (float)(int)plVar9[4]),0);
                if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                  func_0x000180315660();
                }
                if (cRam00000001834b3d5b == '\0') {
                  FUN_180315380(TI_UnityEngine.Rect);
                  cRam00000001834b3d5b = '\x01';
                }
                fStackX_24 = (float)(uVar10 >> 0x20);
                fVar26 = (float)uVar10;
                bVar18 = bVar20;
                if (-24.0 <= fVar26) {
                  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if ((fVar26 < (float)param_2 + 48.0 + -24.0) && (-24.0 <= fStackX_24)) {
                    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    bVar18 = fStackX_24 < fVar25 + -24.0;
                  }
                }
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                uVar12 = FUN_180eb5810(bVar18 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar11 != 0) goto code_r0x0001806440bb;
                goto code_r0x000180644b71;
              }
              goto code_r0x000180644b76;
            }
            goto code_r0x000180644b7e;
          }
          goto code_r0x000180644b83;
        }
        if (plStack_220 != (longlong *)0x0) {
          FUN_180002390(0,TI_System.IDisposable,plStack_220);
        }
        fVar25 = *(float *)(param_1 + 0x208);
        if ((*(longlong *)(param_1 + 0x90) == 0) ||
           (lVar7 = UnityEngine_UIElements_VisualElement__Children(*(longlong *)(param_1 + 0x90),0),
           lVar7 == 0)) goto code_r0x000180644bee;
        plStack_220 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar7);
        uStack_208 = 0;
        pplStack_200 = &plStack_220;
        goto code_r0x000180644300;
      }
code_r0x000180644b88:
      FUN_1803155d0();
      FUN_180311490();
      FUN_180311490();
code_r0x000180644b99:
      FUN_1803155c0();
code_r0x000180644b9e:
      FUN_1803155d0();
code_r0x000180644ba3:
      FUN_1803155d0();
code_r0x000180644ba8:
      FUN_1803155d0();
code_r0x000180644bad:
      FUN_1803155d0();
code_r0x000180644bb2:
      FUN_1803155d0();
code_r0x000180644bb7:
      FUN_1803155d0();
code_r0x000180644bbc:
      FUN_1803155d0();
code_r0x000180644bc1:
      FUN_1803155d0();
code_r0x000180644bc6:
      FUN_1803155d0();
      pplVar14 = pplVar16;
code_r0x000180644bcb:
      FUN_1803146d0(pplVar14);
code_r0x000180644bd3:
      FUN_1803155d0();
code_r0x000180644bd8:
      FUN_1803155d0();
code_r0x000180644bdd:
      FUN_1803155d0();
      goto code_r0x000180644be2;
    }
  }
code_r0x000180644bee:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001806440bb:
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar12);
  if (bVar18 != false) {
    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    auVar4._4_8_ = uVar10 >> 0x20;
    auVar4._0_4_ = fVar26 - 12.0;
    plVar19 = (longlong *)0x0;
    plVar9 = (longlong *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_188,auVar4._0_8_,0)
    ;
    if (lVar11 != 0) {
      uStack_1f8 = *plVar9;
      fStack_1f0 = *(float *)(plVar9 + 1);
      FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_1f8);
      plVar13 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      plVar19 = (longlong *)0x0;
      puVar8 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_128,fStackX_24 - 12.0,0);
      if (plVar13 != (longlong *)0x0) {
        uStack_1b8 = *puVar8;
        uStack_1b0 = *(undefined4 *)(puVar8 + 1);
        FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,plVar13,&uStack_1b8);
        plVar9 = pMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
        plVar19 = plVar13;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          lVar7 = *(longlong *)(lVar2 + 0x10);
          if (lVar7 != 0) {
            uVar17 = *(uint *)(lVar2 + 0x18);
            if (*(uint *)(lVar7 + 0x18) <= uVar17) {
              uStack_208 = CONCAT44(fStackX_24 - 12.0,fVar26 - 12.0);
              pplStack_200 = (longlong **)0x41c0000041c00000;
              FUN_1815b2780(lVar2,&uStack_208,
                            *(undefined8 *)(*(longlong *)(plVar9[4] + 0xc0) + 0x70));
              goto code_r0x000180643ed0;
            }
            *(uint *)(lVar2 + 0x18) = uVar17 + 1;
            if (uVar17 < *(uint *)(lVar7 + 0x18)) {
              lVar11 = (longlong)(int)uVar17 + 2;
              *(float *)(lVar7 + lVar11 * 0x10) = fVar26 - 12.0;
              *(float *)(lVar7 + 4 + lVar11 * 0x10) = fStackX_24 - 12.0;
              *(undefined4 *)(lVar7 + 8 + lVar11 * 0x10) = 0x41c00000;
              *(undefined4 *)(lVar7 + 0xc + lVar11 * 0x10) = 0x41c00000;
              goto code_r0x000180643ed0;
            }
code_r0x000180644b58:
            FUN_1803155c0();
          }
          FUN_1803155d0();
          plVar19 = plVar9;
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
    }
    FUN_1803155d0();
code_r0x000180644b71:
    FUN_1803155d0();
code_r0x000180644b76:
    FUN_1803146d0(plVar19);
code_r0x000180644b7e:
    FUN_1803155d0();
code_r0x000180644b83:
    FUN_1803155d0();
    goto code_r0x000180644b88;
  }
  goto code_r0x000180643ed0;
code_r0x000180644300:
  plVar9 = plStack_220;
  if (plStack_220 != (longlong *)0x0) {
    lVar7 = *plStack_220;
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.IEnumerator) {
          puVar8 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                    0x138 + lVar7);
          goto code_r0x000180644366;
        }
        uVar15 = (short)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plStack_220,TI_System.Collections.IEnumerator,0);
code_r0x000180644366:
    cVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    plVar9 = plStack_220;
    if (cVar5 == '\0') {
      if (*pplStack_200 != (longlong *)0x0) {
        FUN_180002390(0,TI_System.IDisposable,*pplStack_200);
      }
      return;
    }
    if (plStack_220 == (longlong *)0x0) goto code_r0x000180644bdd;
    lVar7 = *plStack_220;
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
          puVar8 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                    0x138 + lVar7);
          goto code_r0x0001806443d6;
        }
        uVar15 = (short)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
      } while (uVar15 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plStack_220,TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x0001806443d6:
    lVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (lVar7 == 0) goto code_r0x000180644bd8;
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    if (plVar9 == (longlong *)0x0) goto code_r0x000180644bd3;
    lVar11 = *plVar9;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar8 = (undefined8 *)
                   ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar10 * 0x10) + 0x32) *
                    0x10 + 0x138 + lVar11);
          goto code_r0x00018064445c;
        }
        uVar15 = (short)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
      } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x32);
code_r0x00018064445c:
    uStack_1a8 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    iVar6 = func_0x000180eb5200(&uStack_1a8,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value);
    if (iVar6 != 1) {
      pplVar14 = (longlong **)UnityEngine_UIElements_VisualElement__get_userData(lVar7,0);
      pplVar16 = (longlong **)0x0;
      if (pplVar14 != (longlong **)0x0) {
        if ((*(byte *)(*pplVar14 + 0x26) < *(byte *)(TI_SparkMapaWindow.Loja + 0x130)) ||
           (pplVar16 = pplVar14,
           *(longlong *)
            ((*pplVar14)[0x19] + -8 + (ulonglong)*(byte *)(TI_SparkMapaWindow.Loja + 0x130) * 8) !=
           TI_SparkMapaWindow.Loja)) goto code_r0x000180644bcb;
      }
      lVar7 = UnityEngine_UIElements_VisualElement__get_Item(lVar7,1,0);
      uVar17 = 0;
      uStack_1f8 = lVar7;
      if (0.03 <= fVar25) {
        if (pplVar16 == (longlong **)0x0) goto code_r0x000180644bbc;
        uVar12 = SparkMapaWindow__NaVista__180640ab0
                           (param_1,CONCAT44((float)*(int *)((longlong)pplVar16 + 0x24),
                                             (float)*(int *)(pplVar16 + 4)),0);
        if (pplVar16[3] == (longlong *)0x0) goto code_r0x000180644bb7;
        fStackX_24 = (float)((ulonglong)uVar12 >> 0x20);
        fStack_1e0 = fStackX_24;
        fVar26 = (float)((int)pplVar16[3][2] * 0xb) * 0.52 + 6.0;
        if (176.0 <= fVar26) {
          fVar26 = 176.0;
        }
        uStack_214 = 0x41400000;
        pplVar14 = (longlong **)0x0;
        fStack_1e8 = fVar26;
        fStack_1e4 = (float)uVar12;
        while (iVar6 = (int)pplVar14, iStack_218 = iVar6, iVar6 < 4) {
          if (iVar6 == 0) {
            fVar22 = 0.0;
            fVar23 = 18.0;
          }
          else if (iVar6 == 1) {
            fVar22 = 0.0;
            fVar23 = -19.0;
          }
          else {
            if (iVar6 == 2) {
              fVar22 = 1.0;
            }
            else {
              fVar22 = -1.0;
            }
            fVar22 = (fVar26 * 0.5 + 14.0) * fVar22;
            fVar23 = 0.0;
          }
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          fVar24 = (fVar23 + fStackX_24) - 7.0;
          fVar21 = (fVar22 + (float)uVar12) - fVar26 * 0.5;
          if (lVar2 == 0) goto code_r0x000180644bb2;
          uStack_1c8 = 0x41600000;
          fStack_1dc = fVar22;
          fStack_1d8 = fVar23;
          fStack_1d4 = fVar21;
          fStack_1d0 = fVar24;
          fStack_1cc = fVar26;
          FUN_180badb20(&plStack_118,lVar2,MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator);
          plStack_148 = plStack_118;
          uStack_140 = uStack_110;
          plStack_138 = plStack_108;
          uStack_130 = uStack_100;
          uStack_168 = 0;
          pplVar16 = &plStack_148;
          pplStack_160 = pplVar16;
          do {
            cVar5 = FUN_1812ec7d0(&plStack_148,MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
            if (cVar5 == '\0') {
              Gear__UpdateWeaponType__1803dadf0(pplVar16,MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
              plVar9 = pMR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              lVar11 = *(longlong *)(lVar2 + 0x10);
              if (lVar11 == 0) goto code_r0x000180644bad;
              uVar17 = *(uint *)(lVar2 + 0x18);
              if (uVar17 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar2 + 0x18) = uVar17 + 1;
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto code_r0x000180644b99;
                uStack_1f8 = CONCAT44(fVar24,fVar21);
                uStack_1ec = 0x41600000;
                pfVar1 = (float *)(lVar11 + ((longlong)(int)uVar17 + 2) * 0x10);
                *pfVar1 = fVar21;
                pfVar1[1] = fVar24;
                pfVar1[2] = fVar26;
                pfVar1[3] = 14.0;
                fStack_1f0 = fVar26;
              }
              else {
                uStack_14c = 0x41600000;
                fStack_158 = fVar21;
                fStack_154 = fVar24;
                fStack_150 = fVar26;
                FUN_1815b2780(lVar2,&fStack_158,
                              *(undefined8 *)(*(longlong *)(plVar9[4] + 0xc0) + 0x70));
              }
              if (lVar7 == 0) goto code_r0x000180644ba8;
              lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_128);
              pplVar16 = (longlong **)0x0;
              if (lVar11 == 0) goto code_r0x000180644ba3;
              uStack_1b8 = *puVar8;
              uStack_1b0 = *(undefined4 *)(puVar8 + 1);
              FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_1b8);
              lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1a0);
              pplVar16 = (longlong **)0x0;
              if (lVar11 == 0) goto code_r0x000180644b9e;
              uStack_188 = *puVar8;
              uStack_180 = *(undefined4 *)(puVar8 + 1);
              FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_188);
              uVar17 = 1;
              goto code_r0x000180644a76;
            }
            plStack_118 = plStack_138;
            uStack_110 = uStack_130;
            if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
              func_0x000180315660();
            }
            uStack_16c = 0x41600000;
            fStack_178 = fVar21;
            fStack_174 = fVar24;
            fStack_170 = fVar26;
            cVar5 = FUN_180637450(&plStack_118,&fStack_178,0);
          } while (cVar5 == '\0');
          Gear__UpdateWeaponType__1803dadf0(pplVar16);
          pplVar14 = (longlong **)(ulonglong)(iVar6 + 1);
        }
      }
      if (lVar7 == 0) goto code_r0x000180644bc6;
code_r0x000180644a76:
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      uVar12 = FUN_180eb5810(uVar17 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      pplVar16 = (longlong **)0x0;
      if (lVar7 == 0) goto code_r0x000180644bc1;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar12);
    }
    goto code_r0x000180644300;
  }
code_r0x000180644be2:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

