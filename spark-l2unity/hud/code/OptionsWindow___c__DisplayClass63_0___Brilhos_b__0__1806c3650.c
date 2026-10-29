// OptionsWindow___c__DisplayClass63_0___Brilhos_b__0__1806c3650 @ 0x1806c3650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass63_0___Brilhos_b__0__1806c3650(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [176];
  
  if (cRam00000001834b3f56 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3f56 = '\x01';
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 != 0) {
    cVar6 = (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
    ;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
      uVar8 = FUN_180eb5810(cVar6 == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar7 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
        if (cVar6 == '\0') {
          return;
        }
        if (*(longlong *)(param_1 + 0x20) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                            (auStack_b8,*(longlong *)(param_1 + 0x20),0);
          fVar2 = *(float *)(lVar7 + 8);
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (*(longlong *)(param_1 + 0x20) != 0) {
            lVar7 = UnityEngine_UIElements_VisualElement__get_layout
                              (auStack_b8,*(longlong *)(param_1 + 0x20),0);
            if (0x7f800000 < (uint)ABS(fVar2)) {
              return;
            }
            if (fVar2 <= 0.0) {
              return;
            }
            fVar3 = *(float *)(lVar7 + 0xc);
            fVar13 = (float)FUN_1824366b0(0);
            fVar15 = fVar13 - *(float *)(param_1 + 0x28);
            fVar18 = 0.1;
            if (fVar15 <= 0.1) {
              fVar18 = fVar15;
            }
            uVar12 = 0;
            *(float *)(param_1 + 0x28) = fVar13;
            while (lVar7 = *(longlong *)(param_1 + 0x30), lVar7 != 0) {
              uVar11 = (uint)uVar12;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              lVar9 = *(longlong *)(param_1 + 0x38);
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              *(float *)(lVar7 + 0x20 + uVar12 * 4) =
                   *(float *)(lVar7 + 0x20 + uVar12 * 4) -
                   fVar18 * *(float *)(lVar9 + 0x20 + uVar12 * 4);
              lVar7 = *(longlong *)(param_1 + 0x40);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              lVar9 = *(longlong *)(param_1 + 0x38);
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              *(float *)(lVar7 + 0x20 + uVar12 * 4) =
                   *(float *)(lVar9 + 0x20 + uVar12 * 4) * 0.25 * fVar18 +
                   *(float *)(lVar7 + 0x20 + uVar12 * 4);
              lVar7 = *(longlong *)(param_1 + 0x30);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              pfVar1 = (float *)(lVar7 + 0x20 + uVar12 * 4);
              if (*pfVar1 <= 0.3 && *pfVar1 != 0.3) {
code_r0x0001806c3906:
                *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + uVar12 * 4) = 0x3f800000;
                plVar4 = *(longlong **)(param_1 + 0x48);
                if (plVar4 == (longlong *)0x0) break;
                lVar7 = *(longlong *)(param_1 + 0x40);
                dVar14 = (double)(**(code **)(*plVar4 + 0x1b8))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
                *(float *)(lVar7 + 0x20 + uVar12 * 4) = (float)dVar14 * 0.55;
              }
              else {
                lVar7 = *(longlong *)(param_1 + 0x40);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
                if (0.75 < *(float *)(lVar7 + 0x20 + uVar12 * 4)) goto code_r0x0001806c3906;
              }
              lVar7 = *(longlong *)(param_1 + 0x50);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) {
code_r0x0001806c3c1a:
                FUN_1803155c0();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar15 = (float)FUN_1803a95e0(fVar13 * 2.2 + *(float *)(lVar7 + 0x20 + uVar12 * 4));
              lVar7 = *(longlong *)(param_1 + 0x30);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              fVar17 = *(float *)(lVar7 + 0x20 + uVar12 * 4) - 0.3;
              fVar17 = fVar17 + fVar17;
              if (fVar17 < 0.0) {
                fVar17 = 0.0;
              }
              else if (1.0 < fVar17) {
                fVar17 = 1.0;
              }
              lVar7 = *(longlong *)(param_1 + 0x40);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              fVar16 = 1.0 - *(float *)(lVar7 + 0x20 + uVar12 * 4) / 0.75;
              if (fVar16 < 0.0) {
                fVar16 = 0.0;
              }
              else if (1.0 < fVar16) {
                fVar16 = 1.0;
              }
              lVar7 = *(longlong *)(param_1 + 0x58);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              lVar7 = *(longlong *)(lVar7 + 0x20 + uVar12 * 8);
              if (lVar7 == 0) break;
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              lVar7 = *(longlong *)(param_1 + 0x40);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit
                                  (auStack_c8,fVar2 * *(float *)(lVar7 + 0x20 + uVar12 * 4),0);
              if (lVar9 == 0) break;
              uStack_e8 = *puVar10;
              uStack_e0 = *(undefined4 *)(puVar10 + 1);
              FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_e8);
              lVar7 = *(longlong *)(param_1 + 0x58);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              lVar7 = *(longlong *)(lVar7 + 0x20 + uVar12 * 8);
              if (lVar7 == 0) break;
              lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              lVar7 = *(longlong *)(param_1 + 0x30);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit
                                  (auStack_b8,fVar3 * *(float *)(lVar7 + 0x20 + uVar12 * 4),0);
              if (lVar9 == 0) break;
              uStack_d8 = *puVar10;
              uStack_d0 = *(undefined4 *)(puVar10 + 1);
              FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_d8);
              lVar7 = *(longlong *)(param_1 + 0x58);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001806c3c1a;
              lVar7 = *(longlong *)(lVar7 + 0x20 + uVar12 * 8);
              if (lVar7 == 0) break;
              lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              uVar8 = func_0x000182601c10(fVar16 * fVar17 * (ABS(fVar15) * 0.65 + 0.35),0);
              if (lVar7 == 0) break;
              FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
              uVar12 = (ulonglong)(uVar11 + 1);
              if (0x19 < (int)(uVar11 + 1)) {
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

