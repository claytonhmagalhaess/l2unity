// SparkRadarWindow__DesenhaTiles__1806e7210 @ 0x1806e7210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__DesenhaTiles__1806e7210(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  double *pdVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar22;
  float fVar23;
  float fVar24;
  int aiStackX_10 [2];
  int aiStackX_18 [4];
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  longlong lStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  double dStack_188;
  undefined4 uStack_180;
  double dStack_178;
  undefined4 uStack_170;
  double dStack_168;
  double adStack_160 [2];
  undefined8 uStack_150;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  
  if (cRam00000001834b409b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.LoadAsync<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.Texture2D);
    FUN_180315380(TI_SparkRadarWindow.Tile);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'_'");
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/tiles/'");
    cRam00000001834b409b = '\x01';
  }
  plVar14 = (longlong *)0x0;
  aiStackX_18[0] = 0;
  aiStackX_10[0] = 0;
  lStack_1b8 = 0;
  fVar24 = param_2[2] * 52.5;
  fVar23 = *param_2 * 52.5;
  fStack_198 = fVar24;
  fStack_194 = fVar23;
  fVar15 = (float)SparkRadarWindow__get_Alcance(param_1,0);
  fVar22 = (float)param_3 / 52.5;
  fStack_190 = fVar22;
  if (cRam00000001834b2d57 == '\0') {
    FUN_180315380(TI_System.Math);
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = cRam00000001834b2d57;
  dVar16 = (double)func_0x0001803a7870((double)((fVar24 - fVar15) * 3.0517578e-05));
  dStack_168 = dVar16;
  if (cVar3 == '\0') {
    FUN_180315380(TI_System.Math);
    cVar3 = '\x01';
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
    cVar3 = cRam00000001834b2d57;
  }
  dVar17 = (double)func_0x0001803a7870((double)((fVar15 + fVar24) * 3.0517578e-05));
  adStack_160[0] = dVar17;
  if (cVar3 == '\0') {
    FUN_180315380(TI_System.Math);
    cVar3 = '\x01';
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
    cVar3 = cRam00000001834b2d57;
  }
  dVar18 = (double)func_0x0001803a7870((double)((fVar23 - fVar15) * 3.0517578e-05));
  dStack_188 = dVar18;
  if (cVar3 == '\0') {
    FUN_180315380(TI_System.Math);
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  dVar19 = (double)func_0x0001803a7870((double)((fVar15 + fVar23) * 3.0517578e-05));
  dStack_178 = dVar19;
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     (lVar4 = FUN_18117fd20(*(longlong *)(param_1 + 0x198),MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values), lVar4 != 0)) {
    FUN_180fbde10(&uStack_1b0,lVar4,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
    uStack_150 = uStack_1b0;
    puStack_148 = puStack_1a8;
    lStack_140 = lStack_1a0;
    uStack_1b0 = 0;
    puStack_1a8 = &uStack_150;
    do {
      cVar3 = FUN_1813194f0(&uStack_150,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext);
      if (cVar3 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_150,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
        auVar20._4_4_ = (int)((ulonglong)param_3 >> 0x20);
        auVar20._0_4_ = fVar22;
        auVar20._8_4_ = in_XMM2_Dc;
        auVar20._12_4_ = in_XMM2_Dd;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ = fVar22 * 32768.0;
        fVar15 = (float)func_0x0001803aaa10(auVar21._0_8_);
        fVar15 = fVar15 + 1.0;
        aiStackX_18[0] = (int)dVar16 + 0x14;
        do {
          iVar12 = (int)dVar18 + 0x12;
          if ((int)dVar17 + 0x14 < aiStackX_18[0]) {
            SparkRadarWindow__TiraTilesNaoVistos__1806ead20(param_1,0);
            return;
          }
          while (aiStackX_10[0] = iVar12, aiStackX_10[0] <= (int)dVar19 + 0x12) {
            if (*(longlong *)(param_1 + 0x1a0) == 0) goto code_r0x0001806e7e59;
            iVar12 = aiStackX_18[0] * 1000 + aiStackX_10[0];
            cVar3 = FUN_1814cf290(*(longlong *)(param_1 + 0x1a0),iVar12,MR_System.Collections.Generic.HashSet<int>.Contains);
            if (cVar3 == '\0') {
              if (*(longlong *)(param_1 + 0x198) == 0) goto code_r0x0001806e7e59;
              cVar3 = FUN_1812007b0(*(longlong *)(param_1 + 0x198),iVar12,&lStack_1b8,
                                    MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.TryGetValue);
              if (cVar3 == '\0') {
                lVar4 = func_0x000180315580(TI_SparkRadarWindow.Tile);
                *(undefined4 *)(lVar4 + 0x28) = 0xbf800000;
                Gear__UpdateWeaponType__1803dadf0(lVar4,0);
                lStack_1b8 = lVar4;
                uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                UnityEngine_UIElements_VisualElement___ctor(uVar5,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar5;
                func_0x000180314690(lVar4 + 0x10,uVar5);
                if ((lStack_1b8 == 0) || (*(longlong *)(lStack_1b8 + 0x10) == 0))
                goto code_r0x0001806e7e59;
                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lStack_1b8 + 0x10),0);
                uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                if ((lVar4 == 0) ||
                   ((FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5), lStack_1b8 == 0 ||
                    (*(longlong *)(lStack_1b8 + 0x10) == 0)))) goto code_r0x0001806e7e59;
                lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(lStack_1b8 + 0x10),0);
                uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if ((lVar4 == 0) ||
                   ((((FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5), lStack_1b8 == 0 ||
                      (*(longlong *)(lStack_1b8 + 0x10) == 0)) ||
                     (UnityEngine_UIElements_VisualElement__set_pickingMode
                                (*(longlong *)(lStack_1b8 + 0x10),1,0), lStack_1b8 == 0)) ||
                    (*(longlong *)(param_1 + 0xa8) == 0)))) goto code_r0x0001806e7e59;
                UnityEngine_UIElements_VisualElement__Add
                          (*(longlong *)(param_1 + 0xa8),*(undefined8 *)(lStack_1b8 + 0x10),0);
                if (*(longlong *)(param_1 + 0x198) == 0) goto code_r0x0001806e7e59;
                FUN_1812037f0(*(longlong *)(param_1 + 0x198),iVar12,lStack_1b8,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.set_Item)
                ;
              }
              if ((lStack_1b8 == 0) || (*(undefined1 *)(lStack_1b8 + 0x2c) = 1, lStack_1b8 == 0))
              goto code_r0x0001806e7e59;
              uVar5 = *(undefined8 *)(lStack_1b8 + 0x20);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
              lVar4 = lStack_1b8;
              if (cVar3 == '\0') {
code_r0x0001806e7b2a:
                if (lStack_1b8 == 0) goto code_r0x0001806e7e59;
                if (*(float *)(lStack_1b8 + 0x28) != fVar15) {
                  *(float *)(lStack_1b8 + 0x28) = fVar15;
                  if (((lStack_1b8 == 0) || (*(longlong *)(lStack_1b8 + 0x10) == 0)) ||
                     ((lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                         (*(longlong *)(lStack_1b8 + 0x10),0), lStack_1b8 == 0 ||
                      (*(longlong *)(lStack_1b8 + 0x10) == 0)))) goto code_r0x0001806e7e59;
                  lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lStack_1b8 + 0x10),0);
                  pdVar10 = (double *)
                            UnityEngine_UIElements_StyleLength__op_Implicit(adStack_160,fVar15,0);
                  if (lVar9 == 0) goto code_r0x0001806e7e59;
                  dVar16 = *pdVar10;
                  uVar1 = *(undefined4 *)(pdVar10 + 1);
                  dStack_178 = dVar16;
                  uStack_170 = uVar1;
                  FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar9,&dStack_178);
                  if (lVar4 == 0) goto code_r0x0001806e7e59;
                  dStack_188 = dVar16;
                  uStack_180 = uVar1;
                  FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar4,&dStack_188);
                }
                lVar4 = lStack_1b8;
                func_0x0001803a9df0(((float)(aiStackX_18[0] + -0x14) * 32768.0 - fVar24) * fVar22);
                func_0x0001803a9df0(((float)(aiStackX_10[0] + -0x12) * 32768.0 - fVar23) * fVar22);
                if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 == 0)) {
code_r0x0001806e7e6b:
                  FUN_1803155d0();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uVar5 = func_0x0001825fc560();
                uVar6 = func_0x0001825fc560();
                uStack_1b0 = 0;
                puStack_1a8 = (undefined8 *)0x0;
                lStack_1a0 = 0;
                func_0x000182607f40(&uStack_1b0,uVar5,uVar6,0);
                uStack_138 = uStack_1b0;
                uStack_130 = puStack_1a8;
                lStack_128 = lStack_1a0;
                puVar8 = (undefined8 *)
                         UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_f8,&uStack_138,0);
                if (lVar4 == 0) goto code_r0x0001806e7e6b;
                uStack_138 = *puVar8;
                lStack_128 = puVar8[2];
                uStack_120 = *(undefined4 *)(puVar8 + 3);
                uStack_130 = (undefined8 *)
                             CONCAT44(*(undefined4 *)((longlong)puVar8 + 0xc),(int)puVar8[1]);
                FUN_180005190(0x7f,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_138);
              }
              else {
                if (lStack_1b8 == 0) goto code_r0x0001806e7e59;
                if (*(longlong *)(lStack_1b8 + 0x18) == 0) {
                  uVar5 = System_Int32__ToString(aiStackX_18,0);
                  uVar6 = System_Int32__ToString(aiStackX_10,0);
                  uVar5 = System_String__Concat
                                    (LIT_"'Data/UI/Assets/Mapa/tiles/'",uVar5,LIT_"'_'",uVar6,0);
                  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar5 = FUN_180a907c0(uVar5,MR_SparkArte.LoadAsync<UnityEngine.Texture2D>);
                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                  func_0x000180314690(lVar4 + 0x18,uVar5);
                }
                if ((lStack_1b8 == 0) || (*(longlong *)(lStack_1b8 + 0x18) == 0))
                goto code_r0x0001806e7e59;
                cVar3 = func_0x000180589800(*(longlong *)(lStack_1b8 + 0x18),0);
                lVar4 = lStack_1b8;
                if (cVar3 == '\0') {
                  if ((lStack_1b8 == 0) || (*(longlong *)(lStack_1b8 + 0x10) == 0))
                  goto code_r0x0001806e7e59;
                  lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(lStack_1b8 + 0x10),0);
                  uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  if (lVar4 == 0) goto code_r0x0001806e7e59;
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                }
                else {
                  if ((lStack_1b8 == 0) || (*(longlong *)(lStack_1b8 + 0x18) == 0))
                  goto code_r0x0001806e7e59;
                  plVar7 = (longlong *)
                           SparkArte_Pedido__get_asset(*(longlong *)(lStack_1b8 + 0x18),0);
                  plVar13 = plVar14;
                  if (plVar7 == (longlong *)0x0) {
                    *(undefined8 *)(lVar4 + 0x20) = 0;
                  }
                  else {
                    plVar11 = plVar14;
                    if (*plVar7 == TI_UnityEngine.Texture2D) {
                      plVar11 = plVar7;
                    }
                    *(longlong **)(lVar4 + 0x20) = plVar11;
                    if (*plVar7 == TI_UnityEngine.Texture2D) {
                      plVar13 = plVar7;
                    }
                  }
                  func_0x000180314690(lVar4 + 0x20,plVar13);
                  if (lStack_1b8 == 0) goto code_r0x0001806e7e59;
                  *(undefined8 *)(lStack_1b8 + 0x18) = 0;
                  func_0x000180314690(lStack_1b8 + 0x18,0);
                  if (lStack_1b8 == 0) goto code_r0x0001806e7e59;
                  uVar5 = *(undefined8 *)(lStack_1b8 + 0x20);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
                  if (cVar3 == '\0') {
                    if ((((lStack_1b8 != 0) && (*(longlong *)(lStack_1b8 + 0x10) != 0)) &&
                        (lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(lStack_1b8 + 0x10),0), lStack_1b8 != 0))
                       && (puVar8 = (undefined8 *)
                                    UnityEngine_UIElements_StyleBackground__op_Implicit
                                              (&uStack_138,*(undefined8 *)(lStack_1b8 + 0x20),0),
                          lVar4 != 0)) {
                      uStack_f8 = *puVar8;
                      uStack_f0 = puVar8[1];
                      uStack_e8 = *(undefined4 *)(puVar8 + 2);
                      uStack_e4 = *(undefined4 *)((longlong)puVar8 + 0x14);
                      uStack_e0 = *(undefined4 *)(puVar8 + 3);
                      uStack_dc = *(undefined4 *)((longlong)puVar8 + 0x1c);
                      uStack_d8 = puVar8[4];
                      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_f8);
                      if ((lStack_1b8 != 0) && (*(longlong *)(lStack_1b8 + 0x10) != 0)) {
                        lVar4 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(lStack_1b8 + 0x10),0);
                        uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        if (lVar4 != 0) {
                          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                          goto code_r0x0001806e7b2a;
                        }
                      }
                    }
                    goto code_r0x0001806e7e59;
                  }
                  if (((*(longlong *)(param_1 + 0x1a0) == 0) ||
                      (func_0x0001814cea30(*(longlong *)(param_1 + 0x1a0),iVar12,
                                           MR_System.Collections.Generic.HashSet<int>.Add), lStack_1b8 == 0)) ||
                     (*(longlong *)(lStack_1b8 + 0x10) == 0)) goto code_r0x0001806e7e59;
                  UnityEngine_UIElements_VisualElement__RemoveFromHierarchy
                            (*(longlong *)(lStack_1b8 + 0x10),0);
                  if (*(longlong *)(param_1 + 0x198) == 0) goto code_r0x0001806e7e59;
                  FUN_1811f9940(*(longlong *)(param_1 + 0x198),iVar12,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove);
                }
              }
            }
            iVar12 = aiStackX_10[0] + 1;
          }
          aiStackX_18[0] = aiStackX_18[0] + 1;
        } while( true );
      }
      if (lStack_140 == 0) goto code_r0x0001806e7e5f;
      *(undefined1 *)(lStack_140 + 0x2c) = 0;
    } while( true );
  }
code_r0x0001806e7e59:
  FUN_1803155d0();
code_r0x0001806e7e5f:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

