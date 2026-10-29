// SparkPesca__LateUpdate__18084ecd0 @ 0x18084ecd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkPesca__LateUpdate__18084ecd0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar17;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_1f8;
  float fStack_1f0;
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  float fStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  float afStack_1c0 [6];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [176];
  
  if (cRam00000001834b4877 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Boia>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Pose>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Pose>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Boia>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPesca);
    cRam00000001834b4877 = '\x01';
  }
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_1e0 = 0;
  fStack_1d8 = 0.0;
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  lStack_1e8 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_18117ccd0(&uStack_198,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator);
    uStack_130 = uStack_198;
    uStack_128 = uStack_190;
    lStack_120 = lStack_188;
    lStack_118 = lStack_180;
    uStack_110 = uStack_178;
    uStack_1d0 = 0;
    puStack_1c8 = &uStack_130;
code_r0x00018084ef00:
    cVar8 = FUN_18133c520(&uStack_130,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext);
    lVar7 = lStack_118;
    lVar11 = lStack_120;
    if (cVar8 != '\0') {
      if (lStack_118 != 0) goto code_r0x00018084ef2d;
      goto code_r0x00018084fab4;
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_130,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      iVar9 = func_0x000181183c40(*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.get_Count);
      if (iVar9 == 0) {
        return;
      }
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (lVar11 != 0) {
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        iVar9 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar9) {
          System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar9,0);
        }
        uVar17 = FUN_182436650(0);
        auVar19._0_4_ = (float)uVar17;
        uVar28 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar29 = (undefined4)extraout_XMM0_Qb;
        uVar30 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_18117ccd0(&uStack_198,*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.GetEnumerator);
          uStack_158 = uStack_198;
          uStack_150 = uStack_190;
          lStack_148 = lStack_188;
          lStack_140 = lStack_180;
          uStack_138 = uStack_178;
          while (cVar8 = FUN_18133c520(&uStack_158,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.MoveNext), lVar7 = lStack_140,
                lVar11 = lStack_148, cVar8 != '\0') {
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar8 = UnityEngine_Object__op_Equality(lVar11,0,0);
            if (cVar8 == '\0') {
              if (lVar11 == 0) goto code_r0x00018084faed;
              if (*(longlong *)(lVar11 + 0x38) == 0) goto code_r0x00018084fae8;
              if (*(char *)(*(longlong *)(lVar11 + 0x38) + 0x18) != '\0') goto code_r0x00018084f8a3;
              if (lVar7 == 0) goto code_r0x00018084fae3;
              uVar17 = *(undefined8 *)(lVar7 + 0x10);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar8 = UnityEngine_Object__op_Equality(uVar17,0,0);
              if (((cVar8 != '\0') || (*(longlong *)(lVar11 + 0x30) == 0)) ||
                 (*(char *)(*(longlong *)(lVar11 + 0x30) + 0x81) == '\0'))
              goto code_r0x00018084f8a3;
              if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
                func_0x000180315660();
              }
              pfVar10 = (float *)SparkPesca__Ponta(auStack_d8,lVar11,lVar7,0);
              fVar1 = *pfVar10;
              fVar2 = pfVar10[1];
              uVar17 = *(undefined8 *)pfVar10;
              fVar3 = pfVar10[2];
              if (*(char *)(lVar7 + 0x3c) == '\0') {
                fVar33 = ((auVar19._0_4_ - *(float *)(lVar7 + 0x2c)) - 0.35) / 0.55;
                lVar11 = *(longlong *)(lVar7 + 0x10);
                if (0.0 <= fVar33) {
                  if (lVar11 == 0) goto code_r0x00018084fad4;
                  cVar8 = UnityEngine_GameObject__get_activeSelf(lVar11,0);
                  if (cVar8 == '\0') {
                    if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x00018084fac0;
                    UnityEngine_GameObject__SetActive(*(longlong *)(lVar7 + 0x10),1,0);
                    *(undefined8 *)(lVar7 + 0x30) = uVar17;
                    *(float *)(lVar7 + 0x38) = fVar3;
                  }
                  if (1.0 <= fVar33) {
                    *(undefined1 *)(lVar7 + 0x3c) = 1;
                  }
                  if (fVar33 < 0.0) {
                    fVar33 = 0.0;
                  }
                  else if (1.0 < fVar33) {
                    fVar33 = 1.0;
                  }
                  fVar31 = *(float *)(lVar7 + 0x30);
                  fVar32 = *(float *)(lVar7 + 0x34);
                  fVar13 = *(float *)(lVar7 + 0x38);
                  fVar26 = *(float *)(lVar7 + 0x20);
                  fVar16 = *(float *)(lVar7 + 0x24);
                  fVar27 = *(float *)(lVar7 + 0x28);
                  fVar14 = 0.0;
                  if ((0.0 <= fVar33) && (fVar14 = fVar33, 1.0 < fVar33)) {
                    fVar14 = 1.0;
                  }
                  if (DAT_1834b2f30 == '\0') {
                    FUN_180315380(TI_UnityEngine.Vector3);
                    DAT_1834b2f30 = '\x01';
                  }
                  lVar11 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
                  fVar15 = (float)FUN_1803a95e0();
                  fVar15 = fVar15 * 1.2;
                  fVar33 = fVar15 * *(float *)(lVar11 + 0x18) + (fVar26 - fVar31) * fVar14 + fVar31;
                  fVar31 = fVar15 * *(float *)(lVar11 + 0x1c) + (fVar16 - fVar32) * fVar14 + fVar32;
                  fVar32 = fVar15 * *(float *)(lVar11 + 0x20) + (fVar27 - fVar13) * fVar14 + fVar13;
                  fVar13 = 0.0;
                  goto code_r0x00018084f45d;
                }
                if (lVar11 == 0) goto code_r0x00018084fade;
                cVar8 = UnityEngine_GameObject__get_activeSelf(lVar11,0);
                if (cVar8 != '\0') {
                  if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x00018084fad9;
                  UnityEngine_GameObject__SetActive(*(longlong *)(lVar7 + 0x10),0);
                }
              }
              else {
                fVar33 = *(float *)(lVar7 + 0x20);
                fVar31 = *(float *)(lVar7 + 0x24);
                fVar32 = *(float *)(lVar7 + 0x28);
                auVar19._4_4_ = uVar28;
                auVar19._8_4_ = uVar29;
                auVar19._12_4_ = uVar30;
                auVar25._4_12_ = auVar19._4_12_;
                if (*(char *)(lVar7 + 0x3d) == '\0') {
                  auVar24._0_4_ = auVar19._0_4_ * 2.6 + *(float *)(lVar7 + 0x44);
                  auVar24._4_12_ = auVar25._4_12_;
                  fVar13 = (float)FUN_1803a95e0(auVar24._0_8_);
                  fVar31 = fVar13 * 0.025 + fVar31;
                  fVar13 = 0.08;
                }
                else {
                  auVar25._0_4_ = auVar19._0_4_ * 23.0 + *(float *)(lVar7 + 0x44);
                  fVar13 = (float)FUN_1803a95e0(auVar25._0_8_);
                  fVar31 = (fVar13 * 0.018 - 0.07) + fVar31;
                  auVar20._4_4_ = uVar28;
                  auVar20._0_4_ = auVar19._0_4_;
                  auVar20._8_4_ = uVar29;
                  auVar20._12_4_ = uVar30;
                  auVar21._4_12_ = auVar20._4_12_;
                  auVar21._0_4_ = auVar19._0_4_ * 17.0 + 1.0;
                  fVar13 = (float)FUN_1803a95e0(auVar21._0_8_);
                  fVar33 = fVar13 * 0.015 + fVar33;
                  auVar22._4_4_ = uVar28;
                  auVar22._0_4_ = auVar19._0_4_;
                  auVar22._8_4_ = uVar29;
                  auVar22._12_4_ = uVar30;
                  auVar23._4_12_ = auVar22._4_12_;
                  auVar23._0_4_ = auVar19._0_4_ * 19.0;
                  fVar13 = (float)FUN_1803a8190(auVar23._0_8_);
                  fVar32 = fVar13 * 0.015 + fVar32;
                  fVar13 = 0.015;
                }
code_r0x00018084f45d:
                if ((*(char *)(lVar7 + 0x3c) != '\0') && (auVar19._0_4_ < *(float *)(lVar7 + 0x40)))
                {
                  fVar13 = *(float *)(lVar7 + 0x40) - auVar19._0_4_;
                  fVar13 = (float)FUN_1803a95e0((1.0 - (fVar13 + fVar13)) * 3.1415927);
                  fVar26 = fVar1 - *(float *)(lVar7 + 0x20);
                  fStack_1d8 = fVar3 - *(float *)(lVar7 + 0x28);
                  uStack_1e0 = (ulonglong)(uint)fVar26;
                  if (0.0001 < fVar26 * fVar26 + 0.0 + fStack_1d8 * fStack_1d8) {
                    pfVar10 = (float *)FUN_18043b940(&uStack_1d0,&uStack_1e0,0);
                    fVar26 = fVar13 * 0.3;
                    fVar33 = fVar33 + fVar26 * *pfVar10;
                    fVar31 = fVar31 + fVar26 * pfVar10[1];
                    fVar32 = fVar32 + fVar26 * pfVar10[2];
                  }
                  fVar31 = fVar31 - fVar13 * 0.08;
                  fVar13 = 0.0;
                }
                if (*(char *)(lVar7 + 0x3d) == '\0') {
                  fVar26 = 7.0;
                }
                else {
                  fVar26 = 18.0;
                }
                if (*(longlong *)(lVar7 + 0x10) == 0) goto code_r0x00018084facf;
                lVar11 = UnityEngine_GameObject__get_transform(*(longlong *)(lVar7 + 0x10),0);
                fVar16 = (float)FUN_1803a95e0(auVar19._0_4_ * 2.1 + *(float *)(lVar7 + 0x44));
                afStack_1c0[0] = fVar16 * fVar26 * 0.017453292;
                afStack_1c0[1] = 0.0;
                fVar16 = (float)FUN_1803a8190(auVar19._0_4_ * 1.7 + *(float *)(lVar7 + 0x44));
                afStack_1c0[2] = fVar16 * fVar26 * 0.017453292;
                puVar12 = (undefined8 *)
                          UnityEngine_Quaternion__Internal_FromEulerRad(&uStack_198,afStack_1c0,0);
                if (lVar11 == 0) goto code_r0x00018084faca;
                uStack_e8 = *puVar12;
                uStack_e0 = puVar12[1];
                fStack_1a8 = fVar33;
                fStack_1a4 = fVar31;
                fStack_1a0 = fVar32;
                UnityEngine_Transform__SetPositionAndRotation(lVar11,&fStack_1a8);
                if (DAT_1834b2f30 == '\0') {
                  FUN_180315380(TI_UnityEngine.Vector3);
                  DAT_1834b2f30 = '\x01';
                }
                lVar11 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
                fVar26 = *(float *)(lVar11 + 0x18);
                fVar16 = *(float *)(lVar11 + 0x1c);
                fVar27 = *(float *)(lVar11 + 0x20);
                if (cRam00000001834b2f41 == '\0') {
                  FUN_180315380(TI_System.Math);
                  cRam00000001834b2f41 = '\x01';
                }
                fVar33 = fVar33 + fVar26 * 0.08;
                fVar31 = fVar31 + fVar16 * 0.08;
                fVar32 = fVar32 + fVar27 * 0.08;
                if (*(int *)(TI_System.Math + 0xe4) == 0) {
                  func_0x000180315660();
                }
                fVar16 = fVar1 - fVar33;
                fVar27 = fVar2 - fVar31;
                fVar26 = fVar3 - fVar32;
                dVar18 = (double)(fVar27 * fVar27 + fVar16 * fVar16 + fVar26 * fVar26);
                if (dVar18 < 0.0) {
                  dVar18 = (double)FUN_1803a9930();
                }
                else {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = dVar18;
                  auVar25 = sqrtpd(ZEXT816(0),auVar6);
                  dVar18 = auVar25._0_8_;
                }
                iVar9 = 0;
                while( true ) {
                  uVar28 = 0;
                  uVar29 = 0;
                  uVar30 = 0;
                  if (0xd < iVar9) break;
                  fVar26 = (float)iVar9 / 13.0;
                  lVar11 = *(longlong *)(lVar7 + 0x18);
                  if (fVar26 < 0.0) {
                    fVar16 = 0.0;
                  }
                  else {
                    fVar16 = fVar26;
                    if (1.0 < fVar26) {
                      fVar16 = 1.0;
                    }
                  }
                  if (cRam00000001834b2f31 == '\0') {
                    FUN_180315380(TI_UnityEngine.Vector3);
                    cRam00000001834b2f31 = '\x01';
                  }
                  lVar4 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
                  fVar26 = (float)dVar18 * fVar13 * 4.0 * fVar26 * (1.0 - fVar26);
                  if (lVar11 == 0) goto code_r0x00018084fac5;
                  uStack_1f8 = CONCAT44((fVar31 - fVar2) * fVar16 + fVar2 +
                                        fVar26 * *(float *)(lVar4 + 0x28),
                                        fVar1 + (fVar33 - fVar1) * fVar16 +
                                        fVar26 * *(float *)(lVar4 + 0x24));
                  fStack_1f0 = fVar3 + (fVar32 - fVar3) * fVar16 + fVar26 * *(float *)(lVar4 + 0x2c)
                  ;
                  UnityEngine_LineRenderer__SetPosition(lVar11,iVar9);
                  iVar9 = iVar9 + 1;
                }
              }
            }
            else {
code_r0x00018084f8a3:
              if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x00018084faf2;
              FUN_180002eb0(*(longlong *)(param_1 + 0x40),lVar11);
            }
          }
          Gear__UpdateWeaponType__1803dadf0(&uStack_158,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Dispose);
          if (*(longlong *)(param_1 + 0x40) != 0) {
            FUN_180bada40(&uStack_198,*(longlong *)(param_1 + 0x40),MR_System.Collections.Generic.List<Entity>.GetEnumerator);
            uStack_170 = uStack_198;
            uStack_168 = uStack_190;
            lStack_160 = lStack_188;
            do {
              cVar8 = FUN_1812fa7e0(&uStack_170,MR_System.Collections.Generic.List<Entity>.MoveNext);
              lVar11 = lStack_160;
              if (cVar8 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_170,MR_System.Collections.Generic.List<Entity>.Dispose);
                return;
              }
              if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x00018084fb0d;
              cVar8 = FUN_1812698d0(*(longlong *)(param_1 + 0x38),lStack_160,&lStack_1e8,
                                    MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.TryGetValue);
              if (cVar8 != '\0') {
                if (lStack_1e8 == 0) goto code_r0x00018084fb03;
                uVar17 = *(undefined8 *)(lStack_1e8 + 0x10);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar8 = UnityEngine_Object__op_Inequality(uVar17,0,0);
                if (cVar8 != '\0') {
                  if (lStack_1e8 == 0) goto code_r0x00018084fafe;
                  uVar17 = *(undefined8 *)(lStack_1e8 + 0x10);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Object__Destroy(uVar17,0);
                }
              }
              if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x00018084fb08;
              FUN_1812639c0(*(longlong *)(param_1 + 0x38),lVar11,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Remove);
            } while( true );
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_r0x00018084ef2d:
  if (*(char *)(lStack_118 + 0x10) != '\0') {
    uVar17 = *(undefined8 *)(lStack_118 + 0x18);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar8 = UnityEngine_Object__op_Equality(uVar17,0,0);
    if (cVar8 == '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar8 = UnityEngine_Object__op_Equality(lVar11,0,0);
      if (cVar8 == '\0') {
        if (*(longlong *)(lVar7 + 0x18) == 0) {
          FUN_1803155d0();
code_r0x00018084fab4:
          FUN_1803155d0();
          FUN_180311490();
          goto code_r0x00018084fac0;
        }
        uStack_1f8 = *(undefined8 *)(lVar7 + 0x20);
        fStack_1f0 = *(float *)(lVar7 + 0x28);
        UnityEngine_Transform__SetPositionAndRotation(*(longlong *)(lVar7 + 0x18),&uStack_1f8);
      }
    }
  }
  goto code_r0x00018084ef00;
code_r0x00018084fac0:
  FUN_1803155d0();
code_r0x00018084fac5:
  FUN_1803155d0();
code_r0x00018084faca:
  FUN_1803155d0();
code_r0x00018084facf:
  FUN_1803155d0();
code_r0x00018084fad4:
  FUN_1803155d0();
code_r0x00018084fad9:
  FUN_1803155d0();
code_r0x00018084fade:
  FUN_1803155d0();
code_r0x00018084fae3:
  FUN_1803155d0();
code_r0x00018084fae8:
  FUN_1803155d0();
code_r0x00018084faed:
  FUN_1803155d0();
code_r0x00018084faf2:
  FUN_1803155d0();
  FUN_180311490();
code_r0x00018084fafe:
  FUN_1803155d0();
code_r0x00018084fb03:
  FUN_1803155d0();
code_r0x00018084fb08:
  FUN_1803155d0();
code_r0x00018084fb0d:
  FUN_1803155d0();
  FUN_180311490();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

