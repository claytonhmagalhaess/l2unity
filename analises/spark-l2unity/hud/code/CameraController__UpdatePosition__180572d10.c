// CameraController__UpdatePosition__180572d10 @ 0x180572d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__UpdatePosition__180572d10(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (cRam00000001834b3903 == '\0') {
    FUN_180315380(TI_SparkMontaria);
    cRam00000001834b3903 = '\x01';
  }
  fStack_d0 = 0.0;
  uStack_d8 = CONCAT44(*(float *)(param_1 + 0x2c) * 0.017453292,
                       *(float *)(param_1 + 0x30) * 0.017453292);
  puVar8 = (undefined8 *)UnityEngine_Quaternion__Internal_FromEulerRad(&uStack_b8,&uStack_d8,0);
  uVar6 = *puVar8;
  uVar7 = puVar8[1];
  lVar9 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar9 == 0) goto code_r0x000180573216;
  uStack_c8 = uVar6;
  uStack_c0 = uVar7;
  UnityEngine_Transform__set_rotation(lVar9,&uStack_c8,0);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    fVar15 = 0.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x80) == 0) goto code_r0x000180573216;
    lVar9 = UnityEngine_Transform__get_position(&uStack_d8,*(longlong *)(param_1 + 0x80),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180573216;
    fVar15 = *(float *)(lVar9 + 4);
    lVar9 = UnityEngine_Transform__get_position(&uStack_d8,*(longlong *)(param_1 + 0x48),0);
    fVar15 = (fVar15 - *(float *)(lVar9 + 4)) - *(float *)(param_1 + 0x88);
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar11 = (float)SparkMontaria__AlturaDaCamera(uVar4,0);
  fVar13 = *(float *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    fVar14 = *(float *)(param_1 + 0x54);
    fVar1 = *(float *)(param_1 + 0x5c);
    pfVar10 = (float *)UnityEngine_Transform__get_position
                                 (&uStack_d8,*(longlong *)(param_1 + 0x48),0);
    fVar16 = 1.0;
    fVar2 = pfVar10[2];
    fVar3 = *pfVar10;
    *(float *)(param_1 + 0x38) = fVar15 + fVar13 + fVar11 + pfVar10[1];
    *(float *)(param_1 + 0x3c) = fVar1 + fVar2;
    *(float *)(param_1 + 0x34) = fVar14 + fVar3;
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      fVar15 = *(float *)(param_1 + 0x20);
      fVar13 = *(float *)(param_1 + 0x24);
      fVar11 = *(float *)(param_1 + 0x28);
      if (DAT_1834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2e67 = '\x01';
      }
      pfVar10 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
      fVar15 = fVar15 - *pfVar10;
      fVar13 = fVar13 - pfVar10[1];
      fVar11 = fVar11 - pfVar10[2];
      if (fVar13 * fVar13 + fVar15 * fVar15 + fVar11 * fVar11 < 9.9999994e-11) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
      }
      fVar15 = *(float *)(param_1 + 0x20);
      fVar13 = *(float *)(param_1 + 0x24);
      fVar11 = *(float *)(param_1 + 0x28);
      fVar14 = *(float *)(param_1 + 0x34);
      fVar1 = *(float *)(param_1 + 0x38);
      fVar2 = *(float *)(param_1 + 0x3c);
      fVar3 = *(float *)(param_1 + 0x60);
      fVar12 = (float)FUN_182436420(0);
      fVar12 = fVar12 * fVar3;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (1.0 < fVar12) {
        fVar12 = 1.0;
      }
      *(ulonglong *)(param_1 + 0x20) =
           CONCAT44((fVar1 - fVar13) * fVar12 + fVar13,(fVar14 - fVar15) * fVar12 + fVar15);
      *(float *)(param_1 + 0x28) = (fVar2 - fVar11) * fVar12 + fVar11;
    }
    uStack_d8 = *(undefined8 *)(param_1 + 0x20);
    fStack_d0 = *(float *)(param_1 + 0x28);
    uStack_c8 = uVar6;
    uStack_c0 = uVar7;
    fVar13 = (float)CameraController__DistanciaLivre__180571fe0
                              (param_1,&uStack_c8,&uStack_d8,*(undefined4 *)(param_1 + 0x74),0);
    fVar15 = *(float *)(param_1 + 0x78);
    if (fVar15 <= fVar13) {
      fVar14 = (fVar13 - fVar15) * 6.0;
      fVar11 = 2.0;
      if (2.0 <= fVar14) {
        fVar11 = fVar14;
      }
      fVar14 = (float)FUN_182436420(0);
      if (fVar14 * fVar11 < ABS(fVar13 - fVar15)) {
        if (fVar13 - fVar15 < 0.0) {
          fVar16 = -1.0;
        }
        fVar13 = fVar14 * fVar11 * fVar16 + fVar15;
      }
    }
    *(float *)(param_1 + 0x78) = fVar13;
    if (DAT_1834b2f2f == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2f2f = '\x01';
    }
    fVar15 = -*(float *)(param_1 + 0x78);
    lVar9 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
    fStack_d0 = fVar15 * *(float *)(lVar9 + 0x50);
    uStack_d8 = CONCAT44(fVar15 * *(float *)(lVar9 + 0x4c),fVar15 * *(float *)(lVar9 + 0x48));
    uStack_b8 = uVar6;
    uStack_b0 = uVar7;
    pfVar10 = (float *)UnityEngine_Quaternion__op_Multiply(&uStack_c8,&uStack_b8,&uStack_d8,0);
    fVar15 = *(float *)(param_1 + 0x20);
    fVar13 = *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 0x28);
    fVar14 = *pfVar10;
    fVar1 = pfVar10[1];
    fVar2 = pfVar10[2];
    lVar9 = UnityEngine_Component__get_transform(param_1,0);
    pfVar10 = (float *)SparkTremor__Deslocamento(&uStack_c8,0);
    if (lVar9 != 0) {
      fStack_d0 = fVar2 + fVar11 + pfVar10[2];
      uStack_d8 = CONCAT44(fVar1 + fVar13 + pfVar10[1],fVar14 + fVar15 + *pfVar10);
      UnityEngine_Transform__set_position(lVar9,&uStack_d8,0);
      return;
    }
  }
code_r0x000180573216:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

