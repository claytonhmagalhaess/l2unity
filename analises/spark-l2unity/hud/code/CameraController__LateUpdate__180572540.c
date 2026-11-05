// CameraController__LateUpdate__180572540 @ 0x180572540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__LateUpdate__180572540(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_60;
  
  if (cRam00000001834b38fe == '\0') {
    puStack_60 = &UNK_180572563;
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b38fe = '\x01';
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    puStack_60 = &UNK_180572583;
    func_0x000180315660();
  }
  puStack_60 = &UNK_180572590;
  cVar8 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((cVar8 == '\0') || (*(longlong *)(param_1 + 0x90) == 0)) {
    return;
  }
  if (cRam00000001834b3901 == '\0') {
    puStack_60 = &UNK_1805725c0;
    FUN_180315380(TI_SparkOpcoes);
    puStack_60 = &UNK_1805725cc;
    FUN_180315380(LIT_"'Mouse Y'");
    puStack_60 = &UNK_1805725d8;
    FUN_180315380(LIT_"'Mouse X'");
    cRam00000001834b3901 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    puStack_60 = &UNK_1805725f6;
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) {
code_r0x000180572759:
    puStack_60 = &UNK_18057275e;
    FUN_1803155d0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xd9) != '\0') {
    if (DAT_1834b3532 == '\0') {
      puStack_60 = &UNK_180572636;
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180572759;
    fVar16 = *(float *)(param_1 + 0x2c);
    puStack_60 = &UNK_180572678;
    fVar12 = (float)func_0x0001824bb440(LIT_"'Mouse X'",0);
    fVar15 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x2c) = fVar12 * *(float *)(param_1 + 100) + fVar16;
    puStack_60 = &UNK_180572699;
    fVar12 = (float)func_0x0001824bb440(LIT_"'Mouse Y'",0);
    fVar16 = *(float *)(param_1 + 100);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      puStack_60 = &UNK_1805726ba;
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdc) == '\0') {
      fVar14 = 1.0;
    }
    else {
      fVar14 = -1.0;
    }
    fVar15 = fVar15 - fVar16 * fVar12 * fVar14;
    if (fVar15 < -360.0) {
      fVar15 = fVar15 + 360.0;
    }
    if (360.0 < fVar15) {
      fVar15 = fVar15 + -360.0;
    }
    fVar16 = -90.0;
    if ((-90.0 <= fVar15) && (fVar16 = 90.0, fVar15 <= 90.0)) {
      fVar16 = fVar15;
    }
    *(float *)(param_1 + 0x30) = fVar16;
  }
  if (cRam00000001834b3903 == '\0') {
    FUN_180315380(TI_SparkMontaria,0);
    cRam00000001834b3903 = '\x01';
  }
  fStack_d0 = 0.0;
  uStack_d8 = CONCAT44(*(float *)(param_1 + 0x2c) * 0.017453292,
                       *(float *)(param_1 + 0x30) * 0.017453292);
  puVar9 = (undefined8 *)UnityEngine_Quaternion__Internal_FromEulerRad(&uStack_b8,&uStack_d8,0);
  uVar4 = *puVar9;
  uVar7 = puVar9[1];
  lVar10 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar10 == 0) goto code_r0x000180573216;
  uStack_c8 = uVar4;
  uStack_c0 = uVar7;
  UnityEngine_Transform__set_rotation(lVar10,&uStack_c8,0);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    fVar16 = 0.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x80) == 0) goto code_r0x000180573216;
    lVar10 = UnityEngine_Transform__get_position(&uStack_d8,*(longlong *)(param_1 + 0x80),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180573216;
    fVar16 = *(float *)(lVar10 + 4);
    lVar10 = UnityEngine_Transform__get_position(&uStack_d8,*(longlong *)(param_1 + 0x48),0);
    fVar16 = (fVar16 - *(float *)(lVar10 + 4)) - *(float *)(param_1 + 0x88);
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar12 = (float)SparkMontaria__AlturaDaCamera(uVar5,0);
  fVar15 = *(float *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    fVar14 = *(float *)(param_1 + 0x54);
    fVar1 = *(float *)(param_1 + 0x5c);
    pfVar11 = (float *)UnityEngine_Transform__get_position
                                 (&uStack_d8,*(longlong *)(param_1 + 0x48),0);
    fVar17 = 1.0;
    fVar2 = pfVar11[2];
    fVar3 = *pfVar11;
    *(float *)(param_1 + 0x38) = fVar16 + fVar15 + fVar12 + pfVar11[1];
    *(float *)(param_1 + 0x3c) = fVar1 + fVar2;
    *(float *)(param_1 + 0x34) = fVar14 + fVar3;
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x20);
      fVar15 = *(float *)(param_1 + 0x24);
      fVar12 = *(float *)(param_1 + 0x28);
      if (DAT_1834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2e67 = '\x01';
      }
      pfVar11 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
      fVar16 = fVar16 - *pfVar11;
      fVar15 = fVar15 - pfVar11[1];
      fVar12 = fVar12 - pfVar11[2];
      if (fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12 < 9.9999994e-11) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
      }
      fVar16 = *(float *)(param_1 + 0x20);
      fVar15 = *(float *)(param_1 + 0x24);
      fVar12 = *(float *)(param_1 + 0x28);
      fVar14 = *(float *)(param_1 + 0x34);
      fVar1 = *(float *)(param_1 + 0x38);
      fVar2 = *(float *)(param_1 + 0x3c);
      fVar3 = *(float *)(param_1 + 0x60);
      fVar13 = (float)FUN_182436420(0);
      fVar13 = fVar13 * fVar3;
      if (fVar13 < 0.0) {
        fVar13 = 0.0;
      }
      else if (1.0 < fVar13) {
        fVar13 = 1.0;
      }
      *(ulonglong *)(param_1 + 0x20) =
           CONCAT44((fVar1 - fVar15) * fVar13 + fVar15,(fVar14 - fVar16) * fVar13 + fVar16);
      *(float *)(param_1 + 0x28) = (fVar2 - fVar12) * fVar13 + fVar12;
    }
    uStack_d8 = *(undefined8 *)(param_1 + 0x20);
    fStack_d0 = *(float *)(param_1 + 0x28);
    uStack_c8 = uVar4;
    uStack_c0 = uVar7;
    fVar15 = (float)CameraController__DistanciaLivre__180571fe0
                              (param_1,&uStack_c8,&uStack_d8,*(undefined4 *)(param_1 + 0x74),0);
    fVar16 = *(float *)(param_1 + 0x78);
    if (fVar16 <= fVar15) {
      fVar14 = (fVar15 - fVar16) * 6.0;
      fVar12 = 2.0;
      if (2.0 <= fVar14) {
        fVar12 = fVar14;
      }
      fVar14 = (float)FUN_182436420(0);
      if (fVar14 * fVar12 < ABS(fVar15 - fVar16)) {
        if (fVar15 - fVar16 < 0.0) {
          fVar17 = -1.0;
        }
        fVar15 = fVar14 * fVar12 * fVar17 + fVar16;
      }
    }
    *(float *)(param_1 + 0x78) = fVar15;
    if (DAT_1834b2f2f == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2f2f = '\x01';
    }
    fVar16 = -*(float *)(param_1 + 0x78);
    lVar10 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
    fStack_d0 = fVar16 * *(float *)(lVar10 + 0x50);
    uStack_d8 = CONCAT44(fVar16 * *(float *)(lVar10 + 0x4c),fVar16 * *(float *)(lVar10 + 0x48));
    uStack_b8 = uVar4;
    uStack_b0 = uVar7;
    pfVar11 = (float *)UnityEngine_Quaternion__op_Multiply(&uStack_c8,&uStack_b8,&uStack_d8,0);
    fVar16 = *(float *)(param_1 + 0x20);
    fVar15 = *(float *)(param_1 + 0x24);
    fVar12 = *(float *)(param_1 + 0x28);
    fVar14 = *pfVar11;
    fVar1 = pfVar11[1];
    fVar2 = pfVar11[2];
    lVar10 = UnityEngine_Component__get_transform(param_1,0);
    pfVar11 = (float *)SparkTremor__Deslocamento(&uStack_c8,0);
    if (lVar10 != 0) {
      fStack_d0 = fVar2 + fVar12 + pfVar11[2];
      uStack_d8 = CONCAT44(fVar1 + fVar15 + pfVar11[1],fVar14 + fVar16 + *pfVar11);
      UnityEngine_Transform__set_position(lVar10,&uStack_d8,0);
      return;
    }
  }
code_r0x000180573216:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

