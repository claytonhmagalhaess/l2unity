// SparkEnchantRetail__MontaHeroi__1808311f0 @ 0x1808311f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantRetail__MontaHeroi__1808311f0
               (longlong param_1,longlong param_2,int *param_3,undefined8 param_4,longlong param_5,
               undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_178;
  float fStack_170;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  float afStack_128 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  
  if (cRam00000001834b4801 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.get_Current);
    FUN_180315380(MR_UnityEngine.GameObject.GetComponent<SparkUE2Efeito>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkUE2Emissor>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
    FUN_180315380(TI_System.Collections.Generic.List<SparkUE2Emissor>);
    FUN_180315380(TI_UnityEngine.Material__);
    FUN_180315380(MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEnchantRetail);
    FUN_180315380(TI_UnityEngine.Vector3);
    FUN_180315380(LIT_"' | lamina {0} deslocamento {1} comprimento {2:F1}'");
    FUN_180315380(LIT_"'_BaseMap'");
    FUN_180315380(LIT_"'-pulso'");
    FUN_180315380(LIT_"'Heroi'");
    cRam00000001834b4801 = '\x01';
  }
  uStack_118 = 0;
  puStack_110 = (undefined8 *)0x0;
  lStack_108 = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar8 = (longlong *)FUN_180a408a0(param_4,param_1,0,MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject>);
  if (((plVar8 != (longlong *)0x0) &&
      (func_0x00018242cf20(plVar8,LIT_"'Heroi'",0), param_1 != 0)) &&
     (lVar9 = UnityEngine_Component__get_gameObject(param_1,0), lVar9 != 0)) {
    uVar7 = UnityEngine_GameObject__get_layer(lVar9,0);
    UnityEngine_GameObject__set_layer(plVar8,uVar7,0);
    lVar9 = UnityEngine_GameObject__get_transform(plVar8,0);
    if (param_2 != 0) {
      fVar22 = *(float *)(param_2 + 0x28);
      fVar19 = *(float *)(param_2 + 0x2c);
      fVar23 = *(float *)(param_2 + 0x30);
      if (DAT_1834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2e67 = '\x01';
      }
      pfVar2 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
      fVar25 = fVar22 * (float)param_3[3] * (float)param_3[6];
      iVar1 = *param_3;
      fVar22 = pfVar2[2];
      fVar20 = fVar25;
      fVar24 = pfVar2[1];
      if (((iVar1 != 0) && (fVar20 = *pfVar2, fVar24 = fVar25, iVar1 != 1)) &&
         (fVar22 = fVar25, fVar24 = pfVar2[1], iVar1 != 2)) {
        uVar12 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar12 = func_0x000180315580(uVar12);
        uVar15 = func_0x0001803153a0(LIT_"'Invalid Vector3 index!'");
        System_IndexOutOfRangeException___ctor(uVar12,uVar15,0);
        uVar15 = func_0x0001803153a0(MD_UnityEngine.Vector3.set_Item);
        FUN_180315590(uVar12,uVar15);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar21 = fVar19 * (float)param_3[4] * (float)param_3[6];
      iVar1 = param_3[1];
      fVar19 = fVar21;
      fVar25 = fVar24;
      if (((iVar1 != 0) && (fVar19 = fVar20, fVar25 = fVar21, iVar1 != 1)) &&
         (fVar22 = fVar21, fVar25 = fVar24, iVar1 != 2)) {
        uVar12 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar12 = func_0x000180315580(uVar12);
        uVar15 = func_0x0001803153a0(LIT_"'Invalid Vector3 index!'");
        System_IndexOutOfRangeException___ctor(uVar12,uVar15,0);
        uVar15 = func_0x0001803153a0(MD_UnityEngine.Vector3.set_Item);
        FUN_180315590(uVar12,uVar15);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar24 = fVar23 * (float)param_3[5] * (float)param_3[6];
      iVar1 = param_3[2];
      fVar23 = fVar24;
      fVar20 = fVar25;
      if (((iVar1 != 0) && (fVar23 = fVar19, fVar20 = fVar24, iVar1 != 1)) &&
         (fVar22 = fVar24, fVar20 = fVar25, iVar1 != 2)) {
        uVar12 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar12 = func_0x000180315580(uVar12);
        uVar15 = func_0x0001803153a0(LIT_"'Invalid Vector3 index!'");
        System_IndexOutOfRangeException___ctor(uVar12,uVar15,0);
        uVar15 = func_0x0001803153a0(MD_UnityEngine.Vector3.set_Item);
        FUN_180315590(uVar12,uVar15);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar9 != 0) {
        uStack_178 = (longlong *)CONCAT44(fVar20,fVar23);
        fStack_170 = fVar22;
        UnityEngine_Transform__set_localPosition(lVar9,&uStack_178,0);
        lVar9 = UnityEngine_GameObject__get_transform(plVar8,0);
        iVar1 = *param_3;
        fVar22 = (float)param_3[3];
        if (DAT_1834b2e67 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          DAT_1834b2e67 = '\x01';
        }
        pfVar2 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
        fVar19 = fVar22;
        fVar23 = pfVar2[2];
        fVar20 = pfVar2[1];
        if (((iVar1 != 0) && (fVar19 = *pfVar2, fVar20 = fVar22, iVar1 != 1)) &&
           (fVar23 = fVar22, fVar20 = pfVar2[1], iVar1 != 2)) {
          uVar12 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
          uVar12 = func_0x000180315580(uVar12);
          uVar15 = func_0x0001803153a0(LIT_"'Invalid Vector3 index!'");
          System_IndexOutOfRangeException___ctor(uVar12,uVar15,0);
          uVar15 = func_0x0001803153a0(MD_UnityEngine.Vector3.set_Item);
          FUN_180315590(uVar12,uVar15);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = param_3[2];
        fVar22 = (float)param_3[5];
        if (DAT_1834b2e67 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          DAT_1834b2e67 = '\x01';
        }
        pfVar2 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
        fVar24 = fVar22;
        fVar25 = pfVar2[2];
        fVar21 = pfVar2[1];
        if (((iVar1 != 0) && (fVar24 = *pfVar2, fVar21 = fVar22, iVar1 != 1)) &&
           (fVar25 = fVar22, fVar21 = pfVar2[1], iVar1 != 2)) {
          uVar12 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
          uVar12 = func_0x000180315580(uVar12);
          uVar15 = func_0x0001803153a0(LIT_"'Invalid Vector3 index!'");
          System_IndexOutOfRangeException___ctor(uVar12,uVar15,0);
          uVar15 = func_0x0001803153a0(MD_UnityEngine.Vector3.set_Item);
          FUN_180315590(uVar12,uVar15);
code_r0x000180832481:
          FUN_1803155c0();
code_r0x000180832487:
          FUN_1803155c0();
code_r0x00018083248c:
          uVar12 = func_0x000180314f80();
          FUN_180315590(uVar12,0);
code_r0x00018083249b:
          FUN_1803155c0();
code_r0x0001808324a0:
          FUN_1803155d0();
code_r0x0001808324a5:
          FUN_1803155d0();
code_r0x0001808324aa:
          uVar7 = FUN_1803146d0(param_2,plVar8);
code_r0x0001808324b5:
          FUN_1803146d0(uVar7,plVar8);
code_r0x0001808324bd:
          FUN_1803155d0();
code_r0x0001808324c2:
          FUN_1803155d0();
code_r0x0001808324c7:
          FUN_1803155d0();
code_r0x0001808324cc:
          FUN_1803155d0();
code_r0x0001808324d1:
          FUN_1803155d0();
code_r0x0001808324d6:
          FUN_1803155d0();
code_r0x0001808324db:
          FUN_1803155d0();
code_r0x0001808324e0:
          FUN_1803155d0();
          FUN_180311490();
code_r0x0001808324ec:
          FUN_1803155d0();
code_r0x0001808324f1:
          FUN_1803155d0();
          FUN_180311490();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_168 = CONCAT44(fVar21,fVar24);
        uStack_178 = (longlong *)CONCAT44(fVar20,fVar19);
        fStack_170 = fVar23;
        fStack_160 = fVar25;
        puVar10 = (undefined8 *)
                  UnityEngine_Quaternion__Internal_LookRotation
                            (&uStack_158,&uStack_178,&uStack_168,0);
        if (lVar9 != 0) {
          uStack_158 = *puVar10;
          puStack_150 = (undefined8 *)puVar10[1];
          UnityEngine_Transform__set_localRotation(lVar9,&uStack_158,0);
          if (*(char *)(param_2 + 0x6c) == '\0') {
            fVar22 = *(float *)(param_2 + 0x34);
          }
          else {
            fVar22 = 1.0;
          }
          lVar9 = UnityEngine_GameObject__get_transform(plVar8,0);
          if (DAT_1834b2f37 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            DAT_1834b2f37 = '\x01';
          }
          lVar11 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
          fVar19 = (float)param_3[6] * 52.5 * fVar22;
          if (lVar9 != 0) {
            uStack_178 = (longlong *)
                         CONCAT44(*(float *)(lVar11 + 0x10) * fVar19,
                                  *(float *)(lVar11 + 0xc) * fVar19);
            fStack_170 = *(float *)(lVar11 + 0x14) * fVar19;
            UnityEngine_Transform__set_localScale(lVar9,&uStack_178,0);
            lVar9 = FUN_1809e9ef0(plVar8,MR_UnityEngine.GameObject.GetComponent<SparkUE2Efeito>);
            lStack_130 = lVar9;
            if (param_5 != 0) {
              uVar7 = *(undefined4 *)(param_5 + 0x28);
              lStack_100 = lVar9;
              if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar11 = SparkEnchantRetail__MaterialDo(0x3e9,param_6,uVar7,0x3f800000,0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar6 = UnityEngine_Object__op_Equality(lVar9,0,0);
              if (cVar6 == '\0') {
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar6 = UnityEngine_Object__op_Equality(lVar11,0,0);
                if (cVar6 == '\0') {
                  uVar12 = *(undefined8 *)(param_2 + 0x28);
                  fVar19 = *(float *)(param_2 + 0x30);
                  if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uStack_e8 = *(undefined8 *)param_3;
                  uStack_e0 = (undefined4)*(undefined8 *)(param_3 + 2);
                  uStack_d4 = *(undefined8 *)(param_3 + 5);
                  uStack_dc = (undefined4)*(undefined8 *)(param_3 + 3);
                  uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 3) >> 0x20);
                  uStack_158 = *param_7;
                  puStack_150 = (undefined8 *)param_7[1];
                  uStack_148 = *(undefined4 *)(param_7 + 2);
                  uStack_144 = *(undefined4 *)((longlong)param_7 + 0x14);
                  uStack_140 = *(undefined4 *)(param_7 + 3);
                  uStack_168 = uVar12;
                  fStack_160 = fVar19;
                  SparkEnchantRetail__ConfiguraCurva
                            (lVar9,&uStack_158,&uStack_168,fVar22,&uStack_e8,0x3f800000,0);
                  fVar22 = *(float *)(param_5 + 0x28);
                  fVar19 = *(float *)(param_5 + 0x4c);
                  fVar23 = fVar19;
                  if (1.0 < fVar19) {
                    fVar23 = 1.0;
                  }
                  if (lVar9 != 0) {
                    *(float *)(lVar9 + 0x44) = fVar23;
                    plVar8 = (longlong *)func_0x000180315580(TI_System.Collections.Generic.List<SparkUE2Emissor>);
                    plStack_138 = plVar8;
                    FUN_180bba2e0(plVar8,MR_System.Collections.Generic.List<SparkUE2Emissor>..ctor);
                    if (*(longlong *)(lVar9 + 0x20) != 0) {
                      uStack_178 = plVar8;
                      FUN_180bada40(&uStack_158,*(longlong *)(lVar9 + 0x20),MR_System.Collections.Generic.List<SparkUE2Emissor>.GetEnumerator);
                      uStack_118 = uStack_158;
                      puStack_110 = puStack_150;
                      lStack_108 = CONCAT44(uStack_144,uStack_148);
                      uStack_158 = 0;
                      puStack_150 = &uStack_118;
                      while (cVar6 = FUN_1812fa7e0(&uStack_118,MR_System.Collections.Generic.List<SparkUE2Emissor>.MoveNext),
                            param_2 = lStack_108, cVar6 != '\0') {
                        if (lStack_108 == 0) goto code_r0x0001808324e0;
                        if (((*(char *)(lStack_108 + 0x18) == '\0') ||
                            (*(longlong *)(lStack_108 + 0x240) == 0)) ||
                           (lVar16 = *(longlong *)(lStack_108 + 0x240),
                           *(longlong *)(lVar16 + 0x18) == 0)) {
code_r0x00018083209e:
                          *(bool *)(param_2 + 0x19) =
                               *(char *)(param_2 + 0x19) != '\0' || fVar19 <= 0.0;
                          if (1.0 < fVar19) {
                            *(float *)(param_2 + 0x170) = *(float *)(param_2 + 0x170) * fVar19;
                            *(float *)(param_2 + 0x174) = *(float *)(param_2 + 0x174) * fVar19;
                            *(float *)(param_2 + 0x178) = *(float *)(param_2 + 0x178) * fVar19;
                            *(float *)(param_2 + 0x17c) = *(float *)(param_2 + 0x17c) * fVar19;
                            *(float *)(param_2 + 0x180) = fVar19 * *(float *)(param_2 + 0x180);
                            *(float *)(param_2 + 0x184) = fVar19 * *(float *)(param_2 + 0x184);
                          }
                        }
                        else {
                          if (*(int *)(lVar16 + 0x18) == 0) goto code_r0x000180832481;
                          uVar12 = *(undefined8 *)(lVar16 + 0x20);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                          if (cVar6 == '\0') goto code_r0x00018083209e;
                          lVar16 = *(longlong *)(param_2 + 0x240);
                          if (lVar16 == 0) goto code_r0x0001808324db;
                          if (*(int *)(lVar16 + 0x18) == 0) goto code_r0x000180832487;
                          if (*(longlong *)(lVar16 + 0x20) == 0) goto code_r0x0001808324d6;
                          uVar12 = UnityEngine_Material__GetTexture
                                             (*(longlong *)(lVar16 + 0x20),LIT_"'_BaseMap'");
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar6 = UnityEngine_Object__op_Equality(uVar12,0);
                          if (cVar6 == '\0') goto code_r0x00018083209e;
                          if (*(longlong *)(param_2 + 0x240) == 0) goto code_r0x0001808324d1;
                          plVar8 = (longlong *)
                                   func_0x000180314710(pTI_UnityEngine.Material__,
                                                       *(undefined4 *)
                                                        (*(longlong *)(param_2 + 0x240) + 0x18));
                          uVar18 = 0;
                          if (plVar8 == (longlong *)0x0) goto code_r0x0001808324cc;
                          for (; (int)uVar18 < (int)plVar8[3]; uVar18 = uVar18 + 1) {
                            if ((lVar11 != 0) &&
                               (lVar9 = func_0x0001803146b0(lVar11,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar9 == 0)) goto code_r0x00018083248c;
                            if (*(uint *)(plVar8 + 3) <= uVar18) goto code_r0x00018083249b;
                            plVar8[(longlong)(int)uVar18 + 4] = lVar11;
                            func_0x000180314690(plVar8 + (longlong)(int)uVar18 + 4,lVar11);
                          }
                          *(longlong **)(param_2 + 0x240) = plVar8;
                          func_0x000180314690(param_2 + 0x240,plVar8);
                          *(undefined1 *)(param_2 + 0x1fc) = 0;
                          *(bool *)(param_2 + 0x19) =
                               fVar22 <= 0.0 || *(char *)(param_2 + 0x19) != '\0';
                          *(undefined1 *)(param_2 + 0x238) = *(undefined1 *)(lStack_130 + 0x4a);
                          *(float *)(param_2 + 0x130) =
                               *(float *)(param_2 + 0x130) * *(float *)(param_5 + 0x38);
                          *(float *)(param_2 + 0x13c) =
                               *(float *)(param_2 + 0x13c) * *(float *)(param_5 + 0x38);
                          fVar23 = *(float *)(param_5 + 0x3c);
                          *(float *)(param_2 + 300) = fVar23 * *(float *)(param_2 + 300);
                          *(float *)(param_2 + 0x130) = fVar23 * *(float *)(param_2 + 0x130);
                          *(float *)(param_2 + 0x134) = fVar23 * *(float *)(param_2 + 0x134);
                          fVar23 = *(float *)(param_5 + 0x3c);
                          *(float *)(param_2 + 0x138) = fVar23 * *(float *)(param_2 + 0x138);
                          *(float *)(param_2 + 0x13c) = fVar23 * *(float *)(param_2 + 0x13c);
                          *(float *)(param_2 + 0x140) = fVar23 * *(float *)(param_2 + 0x140);
                          uVar12 = *(undefined8 *)(param_2 + 0x230);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar6 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                          if (cVar6 == '\0') {
                            fVar23 = 0.0;
                          }
                          else {
                            if (*(longlong *)(param_2 + 0x230) == 0) goto code_r0x0001808324a0;
                            lVar9 = UnityEngine_Mesh__get_bounds
                                              (&uStack_e8,*(longlong *)(param_2 + 0x230),0);
                            uStack_168 = CONCAT44(*(float *)(lVar9 + 0x10) +
                                                  *(float *)(lVar9 + 0x10),
                                                  *(float *)(lVar9 + 0xc) + *(float *)(lVar9 + 0xc))
                            ;
                            fStack_160 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
                            fVar20 = (float)FUN_18043b850(&uStack_168,0);
                            fVar23 = ABS(*(float *)(param_2 + 0x138));
                            if (ABS(*(float *)(param_2 + 0x138)) <= ABS(*(float *)(param_2 + 0x140))
                               ) {
                              fVar23 = ABS(*(float *)(param_2 + 0x140));
                            }
                            fVar23 = fVar20 * 100.0 * fVar23;
                          }
                          fVar20 = *(float *)(param_5 + 0x30);
                          fVar24 = *(float *)(param_5 + 0x34);
                          *(float *)(param_2 + 0x54) =
                               fVar23 * *(float *)(param_5 + 0x2c) + *(float *)(param_2 + 0x54);
                          *(float *)(param_2 + 0x58) = fVar23 * fVar20 + *(float *)(param_2 + 0x58);
                          *(float *)(param_2 + 0x5c) = fVar23 * fVar24 + *(float *)(param_2 + 0x5c);
                          if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                            func_0x000180315660(TI_SparkEnchantRetail);
                          }
                          uVar12 = *(undefined8 *)
                                    (*(longlong *)(TI_SparkEnchantRetail + 0xb8) + 0xb0);
                          uVar15 = *(undefined8 *)(param_2 + 0x10);
                          uStack_f8 = *(undefined8 *)(param_2 + 0x54);
                          uStack_f0 = *(undefined4 *)(param_2 + 0x5c);
                          uVar13 = func_0x000180314670(TI_UnityEngine.Vector3,&uStack_f8);
                          afStack_128[0] = fVar23;
                          uVar14 = func_0x000180314670(_DAT_1834c6298,afStack_128);
                          uVar15 = System_String__Format
                                             (LIT_"' | lamina {0} deslocamento {1} comprimento {2:F1}'",uVar15,uVar13,uVar14,0);
                          uVar12 = System_String__Concat(uVar12,uVar15);
                          *(undefined8 *)(*(longlong *)(TI_SparkEnchantRetail + 0xb8) + 0xb0) =
                               uVar12;
                          func_0x000180314690(*(longlong *)(TI_SparkEnchantRetail + 0xb8) + 0xb0,
                                              uVar12);
                          lVar9 = lStack_130;
                          plVar8 = plStack_138;
                          if ((0.0 < *(float *)(param_5 + 0x40)) &&
                             (*(char *)(param_2 + 0x19) == '\0')) {
                            lVar16 = param_2;
                            if (*(char *)(param_5 + 0x24) != '\0') {
                              lVar16 = SparkUE2Emissor__Copia(param_2,0);
                              uVar12 = System_String__Concat
                                                 (*(undefined8 *)(param_2 + 0x10),
                                                  LIT_"'-pulso'",0);
                              if (lVar16 == 0) goto code_r0x0001808324c2;
                              *(undefined8 *)(lVar16 + 0x10) = uVar12;
                              func_0x000180314690(lVar16 + 0x10,uVar12);
                              if (*(longlong *)(param_2 + 0x240) == 0) goto code_r0x0001808324bd;
                              param_2 = func_0x00018180f450(*(longlong *)(param_2 + 0x240),0);
                              plVar8 = pTI_UnityEngine.Material__;
                              if (param_2 == 0) {
                                *(undefined8 *)(lVar16 + 0x240) = 0;
                                lVar17 = 0;
                              }
                              else {
                                lVar17 = func_0x0001803146b0(param_2,pTI_UnityEngine.Material__);
                                uVar7 = extraout_XMM0_Da;
                                if (lVar17 == 0) goto code_r0x0001808324b5;
                                *(longlong *)(lVar16 + 0x240) = lVar17;
                                plVar8 = pTI_UnityEngine.Material__;
                                lVar17 = func_0x0001803146b0(param_2,pTI_UnityEngine.Material__);
                                if (lVar17 == 0) goto code_r0x0001808324aa;
                              }
                              func_0x000180314690(lVar16 + 0x240,lVar17);
                              plVar8 = plStack_138;
                              if (plStack_138 == (longlong *)0x0) goto code_r0x0001808324a5;
                              FUN_180002eb0(plStack_138,lVar16,MR_System.Collections.Generic.List<SparkUE2Emissor>.Add);
                            }
                            fVar23 = *(float *)(param_5 + 0x38);
                            if (fVar23 < 0.01) {
                              fVar23 = 0.01;
                            }
                            *(float *)(lVar16 + 0x130) =
                                 (*(float *)(param_5 + 0x44) / fVar23) * *(float *)(lVar16 + 0x130);
                            fVar23 = *(float *)(param_5 + 0x38);
                            if (fVar23 < 0.01) {
                              fVar23 = 0.01;
                            }
                            *(float *)(lVar16 + 0x13c) =
                                 (*(float *)(param_5 + 0x44) / fVar23) * *(float *)(lVar16 + 0x13c);
                            *(undefined4 *)(lVar16 + 0x1c) = 1;
                            uVar7 = *(undefined4 *)(param_5 + 0x40);
                            *(undefined4 *)(lVar16 + 0x2c) = uVar7;
                            *(undefined4 *)(lVar16 + 0x30) = uVar7;
                            *(undefined1 *)(lVar16 + 0x20) = 1;
                            *(undefined2 *)(lVar16 + 0x145) = 1;
                            *(undefined4 *)(lVar16 + 0x148) = 0;
                            lVar17 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
                            FUN_180bba2e0(lVar17,MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
                            if (lVar17 == 0) goto code_r0x0001808324c7;
                            FUN_180003600(lVar17,0x3f80000000000000,MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
                            FUN_180003600(lVar17,CONCAT44(*(undefined4 *)(param_5 + 0x48),0x3f800000
                                                         ));
                            *(longlong *)(lVar16 + 0x150) = lVar17;
                            func_0x000180314690(lVar16 + 0x150,lVar17);
                            *(undefined1 *)(lVar16 + 0x18c) = 1;
                            *(float *)(lVar16 + 400) = *(float *)(param_5 + 0x40) * 0.1;
                            *(undefined1 *)(lVar16 + 0x18d) = 1;
                            *(float *)(lVar16 + 0x194) = *(float *)(param_5 + 0x40) * 0.25;
                            if (cRam00000001834b38c8 == '\0') {
                              FUN_180315380(TI_UnityEngine.Vector4);
                              cRam00000001834b38c8 = '\x01';
                            }
                            lVar17 = *(longlong *)(TI_UnityEngine.Vector4 + 0xb8);
                            uVar7 = *(undefined4 *)(lVar17 + 0x14);
                            uVar4 = *(undefined4 *)(lVar17 + 0x18);
                            uVar5 = *(undefined4 *)(lVar17 + 0x1c);
                            *(undefined4 *)(lVar16 + 0x198) = *(undefined4 *)(lVar17 + 0x10);
                            *(undefined4 *)(lVar16 + 0x19c) = uVar7;
                            *(undefined4 *)(lVar16 + 0x1a0) = uVar4;
                            *(undefined4 *)(lVar16 + 0x1a4) = uVar5;
                            if (cRam00000001834b38c8 == '\0') {
                              FUN_180315380(TI_UnityEngine.Vector4);
                              cRam00000001834b38c8 = '\x01';
                            }
                            lVar17 = *(longlong *)(TI_UnityEngine.Vector4 + 0xb8);
                            uVar7 = *(undefined4 *)(lVar17 + 0x14);
                            uVar4 = *(undefined4 *)(lVar17 + 0x18);
                            uVar5 = *(undefined4 *)(lVar17 + 0x1c);
                            *(undefined4 *)(lVar16 + 0x1a8) = *(undefined4 *)(lVar17 + 0x10);
                            *(undefined4 *)(lVar16 + 0x1ac) = uVar7;
                            *(undefined4 *)(lVar16 + 0x1b0) = uVar4;
                            *(undefined4 *)(lVar16 + 0x1b4) = uVar5;
                            *(undefined1 *)(lVar16 + 0x1fc) = 1;
                            *(undefined4 *)(lVar16 + 0x188) = 0x3f800000;
                            *(undefined1 *)(lVar16 + 0x158) = 0;
                            if (DAT_1834b2f37 == '\0') {
                              FUN_180315380(TI_UnityEngine.Vector3);
                              DAT_1834b2f37 = '\x01';
                            }
                            uVar7 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x14);
                            *(undefined8 *)(lVar16 + 0x170) =
                                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0xc);
                            *(undefined4 *)(lVar16 + 0x178) = uVar7;
                            if (DAT_1834b2f37 == '\0') {
                              FUN_180315380(TI_UnityEngine.Vector3);
                              DAT_1834b2f37 = '\x01';
                            }
                            uVar7 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x14);
                            *(undefined8 *)(lVar16 + 0x17c) =
                                 *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0xc);
                            *(undefined4 *)(lVar16 + 0x184) = uVar7;
                            uVar12 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                                               (0);
                            uStack_120._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
                            *(int *)(lVar16 + 0x34) = (int)uVar12;
                            *(undefined4 *)(lVar16 + 0x38) = uStack_120._4_4_;
                            uStack_120 = uVar12;
                            uVar12 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                                               (0);
                            uStack_120._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
                            *(int *)(lVar16 + 0x3c) = (int)uVar12;
                            *(undefined4 *)(lVar16 + 0x40) = uStack_120._4_4_;
                            uStack_120 = uVar12;
                          }
                        }
                      }
                      Gear__UpdateWeaponType__1803dadf0(&uStack_118,MR_System.Collections.Generic.List<SparkUE2Emissor>.Dispose);
                      if (*(longlong *)(lVar9 + 0x20) != 0) {
                        func_0x0001816458c0(*(longlong *)(lVar9 + 0x20),plVar8,MR_System.Collections.Generic.List<SparkUE2Emissor>.AddRange)
                        ;
                        if (*(char *)(lVar9 + 0x4a) == '\0') {
                          return;
                        }
                        if (*(longlong *)(lVar9 + 0x20) != 0) {
                          FUN_180bada40(&uStack_158,*(longlong *)(lVar9 + 0x20),MR_System.Collections.Generic.List<SparkUE2Emissor>.GetEnumerator
                                       );
                          uStack_118 = uStack_158;
                          puStack_110 = puStack_150;
                          lStack_108 = CONCAT44(uStack_144,uStack_148);
                          uStack_158 = 0;
                          puStack_150 = &uStack_118;
                          while( true ) {
                            do {
                              do {
                                cVar6 = FUN_1812fa7e0(&uStack_118,MR_System.Collections.Generic.List<SparkUE2Emissor>.MoveNext);
                                lVar11 = lStack_108;
                                if (cVar6 == '\0') {
                                  Gear__UpdateWeaponType__1803dadf0
                                            (&uStack_118,MR_System.Collections.Generic.List<SparkUE2Emissor>.Dispose);
                                  return;
                                }
                                if (lStack_108 == 0) goto code_r0x0001808324f1;
                              } while (*(char *)(lStack_108 + 0x238) == '\0');
                              uVar12 = *(undefined8 *)(lStack_108 + 0x230);
                              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              cVar6 = UnityEngine_Object__op_Equality(uVar12,0,0);
                            } while (cVar6 != '\0');
                            if (*(longlong *)(lVar11 + 0x230) == 0) break;
                            cVar6 = UnityEngine_Mesh__get_isReadable
                                              (*(longlong *)(lVar11 + 0x230),0);
                            if (cVar6 == '\0') {
                              *(undefined1 *)(lVar11 + 0x238) = 0;
                            }
                            else {
                              uVar12 = UnityEngine_Component__get_gameObject(param_1,0);
                              if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar12 = SparkEnchantRetail__MalhaCurva(lVar11,lVar9,uVar12,0);
                              *(undefined8 *)(lVar11 + 0x230) = uVar12;
                              func_0x000180314690(lVar11 + 0x230,uVar12);
                            }
                          }
                          goto code_r0x0001808324ec;
                        }
                      }
                    }
                  }
                  goto code_r0x0001808324fd;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_r0x0001808324fd:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

