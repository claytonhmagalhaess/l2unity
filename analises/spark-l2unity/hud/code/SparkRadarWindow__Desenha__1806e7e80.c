// SparkRadarWindow__Desenha__1806e7e80 @ 0x1806e7e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Desenha__1806e7e80(longlong param_1,float *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float *pfVar15;
  ushort uVar16;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStackX_8;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [184];
  ulonglong uVar17;
  
  if (cRam00000001834b4098 == '\0') {
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b4098 = '\x01';
  }
  uVar20 = 0;
  iVar21 = 0;
  uStack_108 = 0;
  bVar26 = cRam00000001834b4088 == '\0';
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  fVar33 = param_2[2];
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)param_2;
  *(float *)(param_1 + 0x168) = fVar33;
  uStackX_8 = 0;
  if (bVar26) {
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b4088 = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkRadarWindow);
  }
  lVar14 = *(longlong *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 8);
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(param_1 + 0x8c)) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)(param_1 + 0x174) =
         3675.0 / *(float *)(lVar14 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x8c) * 4);
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    uVar1 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(param_1 + 0x170) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(param_1 + 0x16c) = uVar1;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      plVar9 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa0),0);
      uVar10 = func_0x0001825fc560(0,0);
      uVar11 = func_0x0001825fc560(0,0);
      uStack_e8 = 0;
      lStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000182607f40(&lStack_f8,uVar10,uVar11,0);
      uStack_138 = lStack_f8;
      fStack_130 = (float)(undefined4)uStack_f0;
      uStack_12c = uStack_f0._4_4_;
      uStack_128 = (undefined4)uStack_e8;
      uStack_124 = (undefined4)((ulonglong)uStack_e8 >> 0x20);
      puVar12 = (undefined4 *)
                UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_e0,&uStack_138,0);
      if (plVar9 != (longlong *)0x0) {
        lVar14 = *plVar9;
        uStack_138._0_4_ = *puVar12;
        uStack_138._4_4_ = puVar12[1];
        fStack_130 = (float)puVar12[2];
        uStack_12c = (undefined4)*(undefined8 *)(puVar12 + 3);
        uVar1 = uStack_12c;
        uStack_128 = (undefined4)((ulonglong)*(undefined8 *)(puVar12 + 3) >> 0x20);
        uVar3 = uStack_128;
        uStack_124 = (undefined4)*(undefined8 *)(puVar12 + 5);
        uVar4 = uStack_124;
        uStack_120 = (undefined4)((ulonglong)*(undefined8 *)(puVar12 + 5) >> 0x20);
        uVar5 = uStack_120;
        if (*(ushort *)(lVar14 + 0x12e) != 0) {
          uVar17 = uVar20;
          do {
            if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + uVar17 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar13 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + uVar17 * 0x10) + 0x7f) * 0x10
                         + 0x138 + lVar14);
              goto code_r0x0001806e8109;
            }
            uVar16 = (short)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
          } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
        }
        puVar13 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x0001806e8109:
        uStack_12c = uVar1;
        uStack_128 = uVar3;
        uStack_124 = uVar4;
        uStack_120 = uVar5;
        (*(code *)*puVar13)(plVar9,&uStack_138,puVar13[1]);
        fVar33 = *(float *)(param_1 + 0x174);
        uVar10 = *(undefined8 *)(param_1 + 0x1e0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        uStack_138 = *(longlong *)param_2;
        fStack_130 = param_2[2];
        if (cVar7 == '\0') {
          SparkRadarWindow__DesenhaTiles__1806e7210();
        }
        else {
          SparkRadarWindow__DesenhaPlanta__1806e6e30(param_1,&uStack_138,fVar33,0);
        }
        lVar14 = *(longlong *)(param_1 + 0x178);
        uVar17 = uVar20;
        while (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) <= (int)uVar20) {
            if (*(longlong *)(param_1 + 0xd0) == 0) break;
            SparkRadarWindow_Pontos__Termina__1806da520(*(longlong *)(param_1 + 0xd0),uVar17,0);
            fVar29 = fVar33 / 52.5;
            if (DAT_1834b2f32 == '\0') {
              FUN_180315380(TI_PlayerEntity);
              DAT_1834b2f32 = '\x01';
            }
            uVar10 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            if (cVar7 != '\0') {
              if (DAT_1834b2f32 == '\0') {
                FUN_180315380(TI_PlayerEntity);
                DAT_1834b2f32 = '\x01';
              }
              if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) break;
              if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30) != 0) {
                if (DAT_1834b2f32 == '\0') {
                  FUN_180315380(TI_PlayerEntity);
                  DAT_1834b2f32 = '\x01';
                }
                if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
                   (lVar14 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30),
                   lVar14 == 0)) break;
                iVar21 = *(int *)(lVar14 + 0x14);
              }
            }
            if (*(int *)(TI_SparkParty + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b3017 == '\0') {
              FUN_180315380(TI_SparkParty);
              cRam00000001834b3017 = '\x01';
            }
            if (*(int *)(TI_SparkParty + 0xe4) == 0) {
              func_0x000180315660();
            }
            plVar9 = (longlong *)**(longlong **)(TI_SparkParty + 0xb8);
            if (plVar9 != (longlong *)0x0) {
              fVar30 = param_2[2];
              iVar24 = 0;
              fVar28 = *param_2;
              iVar22 = 0;
              goto code_r0x0001806e8500;
            }
            break;
          }
          if (*(longlong *)(param_1 + 0x178) == 0) break;
          FUN_180bbaf80(&lStack_f8,*(longlong *)(param_1 + 0x178),uVar20,MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.get_Item);
          lVar14 = lStack_f8;
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar7 = UnityEngine_Object__op_Equality(lVar14,0);
          uVar25 = uVar17;
          if (cVar7 == '\0') {
            bVar6 = uStack_f0._4_1_;
            uVar23 = (ulonglong)uStack_f0._4_1_;
            if (uStack_f0._4_1_ == 0) {
              if (lVar14 == 0) break;
              if (*(longlong *)(lVar14 + 0x38) != 0) {
                cVar7 = Entity__get_IsDead(lVar14,0);
                if (cVar7 != '\0') goto code_r0x0001806e834f;
                goto code_r0x0001806e82a8;
              }
            }
            else {
code_r0x0001806e82a8:
              if (lVar14 == 0) break;
            }
            lVar14 = UnityEngine_Component__get_transform(lVar14,0);
            if (lVar14 == 0) break;
            pfVar15 = (float *)UnityEngine_Transform__get_position(&uStack_138,lVar14);
            fVar30 = (pfVar15[2] - param_2[2]) * fVar33;
            fVar29 = (*pfVar15 - *param_2) * fVar33;
            if (fVar30 * fVar30 + fVar29 * fVar29 <= 4900.0) {
              lVar14 = *(longlong *)(param_1 + 0xf0);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= (uint)bVar6) goto code_r0x0001806e8b24;
              if (*(longlong *)(param_1 + 0xd0) == 0) break;
              uVar25 = (ulonglong)((int)uVar17 + 1);
              SparkRadarWindow_Pontos__Poe__1806d9bb0
                        (*(longlong *)(param_1 + 0xd0),uVar17,
                         *(undefined8 *)(lVar14 + 0x20 + uVar23 * 8),fVar30,fVar29,0);
            }
          }
code_r0x0001806e834f:
          uVar20 = (ulonglong)((int)uVar20 + 1);
          uVar17 = uVar25;
          lVar14 = *(longlong *)(param_1 + 0x178);
        }
DAT_1806e8b1e:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x0001806e8500:
  lVar14 = *plVar9;
  if (*(ushort *)(lVar14 + 0x12e) != 0) {
    uVar16 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
          TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>) {
        puVar13 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                   0x10 + 0x138 + lVar14);
        goto code_r0x0001806e8556;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
  }
  puVar13 = (undefined8 *)FUN_180312860(plVar9,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,0);
code_r0x0001806e8556:
  iVar8 = (*(code *)*puVar13)(plVar9,puVar13[1]);
  if (iVar8 <= iVar22) {
    if (*(longlong *)(param_1 + 0xd8) == 0) goto DAT_1806e8b1e;
    SparkRadarWindow_Pontos__Termina__1806da520(*(longlong *)(param_1 + 0xd8),iVar24,0);
    lVar14 = 0;
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = SparkQuests__AlvoDoLocal(&uStack_108,&uStackX_8,0);
    lVar19 = lVar14;
    if (cVar7 != '\0') {
      fVar30 = ((float)uStack_108 - fVar30 * 52.5) * fVar29;
      fVar29 = (uStack_108._4_4_ - fVar28 * 52.5) * fVar29;
      if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar28 = fVar29 * fVar29 + fVar30 * fVar30;
      if (4225.0 < fVar28) {
        if (fVar28 < 0.0) {
          fVar28 = (float)FUN_1803a99f0(fVar28);
        }
        else {
          fVar28 = SQRT(fVar28);
        }
        fVar30 = fVar30 * (65.0 / fVar28);
        fVar29 = fVar29 * (65.0 / fVar28);
      }
      if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_1806e8b1e;
      lVar19 = 1;
      SparkRadarWindow_Pontos__Poe__1806d9bb0
                (*(longlong *)(param_1 + 0xe0),0,*(undefined8 *)(param_1 + 0x110),fVar30,fVar29,0);
    }
    if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_1806e8b1e;
    SparkRadarWindow_Pontos__Termina__1806da520(*(longlong *)(param_1 + 0xe0),lVar19,0);
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    uVar10 = **(undefined8 **)(TI_TargetManager + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    lVar19 = lVar14;
    if (cVar7 != '\0') {
      if (DAT_1834b3015 == '\0') {
        FUN_180315380(TI_TargetManager);
        DAT_1834b3015 = '\x01';
      }
      if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto DAT_1806e8b1e;
      lVar19 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = UnityEngine_Object__op_Inequality(lVar19,0,0);
    if (cVar7 != '\0') {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      uVar10 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar7 = UnityEngine_Object__op_Inequality(lVar19,uVar10,0);
      lVar14 = 0;
      if (cVar7 != '\0') {
        if ((lVar19 == 0) || (lVar14 = UnityEngine_Component__get_transform(lVar19,0), lVar14 == 0))
        goto DAT_1806e8b1e;
        pfVar15 = (float *)UnityEngine_Transform__get_position(&uStack_138,lVar14,0);
        fVar29 = (pfVar15[2] - param_2[2]) * fVar33;
        fVar33 = (*pfVar15 - *param_2) * fVar33;
        if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
          func_0x000180315660(TI_SparkRadarWindow);
        }
        lVar14 = TI_SparkRadarWindow;
        fVar30 = fVar33 * fVar33 + fVar29 * fVar29;
        if (4225.0 < fVar30) {
          if (fVar30 < 0.0) {
            fVar30 = (float)FUN_1803a99f0(fVar30);
          }
          else {
            fVar30 = SQRT(fVar30);
          }
          fVar29 = fVar29 * (65.0 / fVar30);
          fVar33 = fVar33 * (65.0 / fVar30);
        }
        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0xb8) + 0x20);
        if (lVar14 == 0) goto DAT_1806e8b1e;
        uVar18 = (*(int *)(param_1 + 0x14c) + 1) % *(int *)(lVar14 + 0x18);
        *(uint *)(param_1 + 0x14c) = uVar18;
        lVar14 = *(longlong *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x20);
        if (lVar14 == 0) goto DAT_1806e8b1e;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x0001806e8b24;
        lVar19 = *(longlong *)(param_1 + 0xf8);
        if (lVar19 == 0) goto DAT_1806e8b1e;
        uVar18 = *(uint *)(lVar14 + 0x20 + (longlong)(int)uVar18 * 4);
        if (*(uint *)(lVar19 + 0x18) <= uVar18) {
code_r0x0001806e8b24:
          FUN_1803155c0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_1806e8b1e;
        lVar14 = 1;
        SparkRadarWindow_Pontos__Poe__1806d9bb0
                  (*(longlong *)(param_1 + 0xe8),0,
                   *(undefined8 *)(lVar19 + 0x20 + (longlong)(int)uVar18 * 8),fVar29,fVar33,0);
      }
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      SparkRadarWindow_Pontos__Termina__1806da520(*(longlong *)(param_1 + 0xe8),lVar14,0);
      SparkRadarWindow__Altitude__1806e4d80(param_1,param_2[1] * 52.5,0);
      SparkRadarWindow__Regiao__1806eaa30(param_1,0);
      return;
    }
    goto DAT_1806e8b1e;
  }
  lVar14 = *plVar9;
  if (*(ushort *)(lVar14 + 0x12e) != 0) {
    uVar16 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
          TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>) {
        puVar13 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                   0x10 + 0x138 + lVar14);
        goto code_r0x0001806e85b6;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ushort *)(lVar14 + 0x12e));
  }
  puVar13 = (undefined8 *)FUN_180312860(plVar9,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,0);
code_r0x0001806e85b6:
  lVar14 = (*(code *)*puVar13)(plVar9,iVar22);
  if (lVar14 == 0) goto DAT_1806e8b1e;
  iVar8 = *(int *)(lVar14 + 0x10);
  if (iVar8 != iVar21) {
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar7 = SparkParty__PosicaoDoMembro(iVar8,&uStack_118);
    if (cVar7 != '\0') {
      fVar31 = ((float)uStack_118 - fVar30 * 52.5) * fVar29;
      fVar32 = (uStack_118._4_4_ - fVar28 * 52.5) * fVar29;
      if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar27 = fVar32 * fVar32 + fVar31 * fVar31;
      if (4225.0 < fVar27) {
        if (fVar27 < 0.0) {
          fVar27 = (float)FUN_1803a99f0(fVar27);
        }
        else {
          fVar27 = SQRT(fVar27);
        }
        fVar31 = fVar31 * (65.0 / fVar27);
        fVar32 = fVar32 * (65.0 / fVar27);
      }
      if (*(longlong *)(param_1 + 0xd8) == 0) goto DAT_1806e8b1e;
      SparkRadarWindow_Pontos__Poe__1806d9bb0
                (*(longlong *)(param_1 + 0xd8),iVar24,*(undefined8 *)(param_1 + 0x108),fVar31,fVar32
                 ,0);
      iVar24 = iVar24 + 1;
    }
  }
  iVar22 = iVar22 + 1;
  goto code_r0x0001806e8500;
}

