// SparkSons__Fonte__180585080 @ 0x180585080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkSons__Fonte__180585080
          (longlong param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
          char param_6)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStackX_8;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [176];
  
  if (cRam00000001834b38df == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkSons);
    cRam00000001834b38df = '\x01';
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar2 == '\0') {
    fVar24 = (float)*(undefined8 *)param_3;
    fStack_104 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar15 = param_3[2];
  }
  else {
    if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x000180585698;
    puVar3 = (undefined8 *)
             UnityEngine_Transform__get_position(&fStack_108,*(longlong *)(param_1 + 0x70),0);
    fVar24 = (float)*puVar3;
    fStack_104 = (float)((ulonglong)*puVar3 >> 0x20);
    fVar15 = *(float *)(puVar3 + 1);
  }
  uStack_f8 = CONCAT44(fStack_104,fVar24);
  fStack_108 = *param_3 - fVar24;
  fStack_104 = param_3[1] - fStack_104;
  fStack_100 = param_3[2] - fVar15;
  fVar19 = fStack_104 * fStack_104 + fStack_108 * fStack_108 + fStack_100 * fStack_100;
  if (param_6 == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((cVar2 != '\0') && (param_4 * param_4 < fVar19)) {
      *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x14) =
           *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x14) + 1;
      return 0;
    }
  }
  if (fVar19 < 0.0) {
    fVar19 = (float)FUN_1803a99f0(fVar19);
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if (param_4 < 0.01) {
    param_4 = 0.01;
  }
  fVar19 = 1.0 - fVar19 / param_4;
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  fVar20 = 3.4028235e+38;
  uVar16 = 0xffffffff;
  iStackX_8 = 0;
  uVar8 = 0xffffffff;
  uVar14 = 0xffffffff;
  fVar21 = 3.4028235e+38;
  uVar11 = 0;
  uVar12 = 0xffffffff;
  fVar22 = 3.4028235e+38;
  do {
    lVar9 = *(longlong *)(param_1 + 0x38);
    if (lVar9 == 0) goto code_r0x000180585698;
    uVar10 = (uint)uVar11;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto code_r0x000180585692;
    lVar9 = *(longlong *)(lVar9 + 0x20 + uVar11 * 8);
    if (lVar9 == 0) goto code_r0x000180585698;
    cVar2 = UnityEngine_AudioSource__get_isPlaying(lVar9,0);
    uVar13 = uVar12;
    fVar23 = fVar22;
    if (cVar2 == '\0') {
      if ((int)uVar8 < 0) {
        uVar8 = uVar10;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (lVar4 == 0) goto code_r0x000180585698;
      if (*(uint *)(lVar4 + 0x18) <= uVar10) goto code_r0x000180585692;
      fVar23 = *(float *)(lVar4 + 0x20 + uVar11 * 4);
      lVar4 = UnityEngine_Component__get_transform(lVar9,0);
      if (lVar4 == 0) goto code_r0x000180585698;
      pfVar5 = (float *)UnityEngine_Transform__get_position(auStack_e8,lVar4,0);
      fStack_108 = *pfVar5 - fVar24;
      fStack_104 = pfVar5[1] - uStack_f8._4_4_;
      fStack_100 = pfVar5[2] - fVar15;
      fVar17 = (float)FUN_18043b850(&fStack_108,0);
      fVar18 = (float)UnityEngine_AudioSource__get_maxDistance(lVar9,0);
      if (fVar18 < 0.01) {
        fVar18 = 0.01;
      }
      fVar17 = 1.0 - fVar17 / fVar18;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar17 * fVar23;
      uVar6 = UnityEngine_AudioSource__get_clip(lVar9,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar6);
      if (cVar2 == '\0') {
code_r0x00018058542d:
        lVar9 = *(longlong *)(param_1 + 0x40);
        if (lVar9 == 0) goto code_r0x000180585698;
        uVar13 = uVar12;
        fVar23 = fVar22;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto code_r0x000180585692;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x40);
        if (lVar9 == 0) goto code_r0x000180585698;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto code_r0x000180585692;
        iStackX_8 = iStackX_8 + 1;
        if ((*(char *)(uVar11 + 0x20 + lVar9) == '\0') && (fVar17 < fVar20)) {
          uVar16 = uVar11;
          fVar20 = fVar17;
        }
        uVar13 = uVar11;
        fVar23 = fVar17;
        if (fVar22 <= fVar17) goto code_r0x00018058542d;
      }
      if ((*(char *)(uVar11 + 0x20 + lVar9) == '\0') && (fVar17 < fVar21)) {
        uVar14 = uVar11;
        fVar21 = fVar17;
      }
    }
    uVar11 = (ulonglong)(uVar10 + 1);
    uVar12 = uVar13;
    fVar22 = fVar23;
  } while ((int)(uVar10 + 1) < 0x20);
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
  }
  iVar7 = *(int *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x30);
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  if (iStackX_8 < iVar7) {
    if ((int)uVar8 < 0) {
      uVar8 = (uint)uVar14;
      if ((int)uVar8 < 0) {
        if (param_6 == '\0') goto code_r0x000180585675;
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (lVar9 == 0) goto code_r0x000180585698;
        if (*(uint *)(param_1 + 0x50) < *(uint *)(lVar9 + 0x18)) {
          uVar6 = *(undefined8 *)(lVar9 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x50) * 8);
          uVar8 = *(int *)(param_1 + 0x50) + 1U & 0x8000001f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
          }
          *(uint *)(param_1 + 0x50) = uVar8;
          return uVar6;
        }
      }
      else {
        if ((param_6 == '\0') && (fVar19 * param_5 <= fVar21)) goto code_r0x000180585675;
        *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) =
             *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) + 1;
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (lVar9 == 0) goto code_r0x000180585698;
        if (uVar8 < *(uint *)(lVar9 + 0x18)) {
          lVar4 = (longlong)(int)uVar8;
          goto code_r0x0001805854ff;
        }
      }
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x38);
      if (lVar9 == 0) goto code_r0x000180585698;
      if (uVar8 < *(uint *)(lVar9 + 0x18)) {
        lVar4 = (longlong)(int)uVar8;
        goto code_r0x0001805854ff;
      }
    }
code_r0x000180585692:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  uVar8 = (uint)uVar16;
  if ((int)uVar8 < 0) {
    if ((param_6 == '\0') || (uVar8 = (uint)uVar13, (int)uVar8 < 0)) goto code_r0x000180585675;
    *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) =
         *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) + 1;
    lVar9 = *(longlong *)(param_1 + 0x38);
    if (lVar9 == 0) goto code_r0x000180585698;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x000180585692;
    lVar4 = (longlong)(int)uVar8;
  }
  else {
    if ((param_6 == '\0') && (fVar19 * param_5 <= fVar20)) {
code_r0x000180585675:
      *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x10) =
           *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x10) + 1;
      return 0;
    }
    *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) =
         *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 0x18) + 1;
    lVar9 = *(longlong *)(param_1 + 0x38);
    if (lVar9 == 0) {
code_r0x000180585698:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x000180585692;
    lVar4 = (longlong)(int)uVar8;
  }
code_r0x0001805854ff:
  return *(undefined8 *)(lVar9 + 0x20 + lVar4 * 8);
}

