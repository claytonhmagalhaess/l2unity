// SparkMapaWindow__CalculaDeformacao__180639550 @ 0x180639550

void SparkMapaWindow__CalculaDeformacao__180639550(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fStackX_1c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (cRam00000001834b3d4e == '\0') {
    FUN_180315380(TI_ty14);
    FUN_180315380(TI_double__);
    FUN_180315380(TI_float__);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_UnityEngine.Vector2__);
    cRam00000001834b3d4e = '\x01';
  }
  uStack_98 = 3;
  uStack_90 = 3;
  lVar7 = func_0x000180314680(TI_ty14,&uStack_98);
  lVar8 = func_0x000180314710(TI_double__,3);
  lVar9 = func_0x000180314710(TI_double__,3);
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
  if (lVar5 != 0) {
    for (uVar17 = 0; (int)uVar17 < *(int *)(lVar5 + 0x18); uVar17 = uVar17 + 1) {
      if (*(uint *)(lVar5 + 0x18) <= uVar17) goto code_r0x000180639ac8;
      lVar10 = (longlong)(int)uVar17;
      fVar1 = *(float *)(lVar5 + 0x28 + lVar10 * 0x18);
      fVar2 = *(float *)(lVar5 + 0x2c + lVar10 * 0x18);
      fVar3 = *(float *)(lVar5 + 0x30 + lVar10 * 0x18);
      fVar4 = *(float *)(lVar5 + 0x34 + lVar10 * 0x18);
      lVar10 = func_0x000180314710(TI_double__,3);
      if (lVar10 == 0) goto code_r0x000180639ace;
      if (((*(int *)(lVar10 + 0x18) == 0) ||
          (*(double *)(lVar10 + 0x20) = (double)fVar3 / 100000.0, *(uint *)(lVar10 + 0x18) < 2)) ||
         (*(double *)(lVar10 + 0x28) = (double)fVar4 / 100000.0, *(uint *)(lVar10 + 0x18) < 3))
      goto code_r0x000180639ac8;
      *(undefined8 *)(lVar10 + 0x30) = 0x3ff0000000000000;
      uVar16 = 0;
      do {
        uVar14 = 0;
        if (lVar7 == 0) goto code_r0x000180639ace;
        do {
          uVar15 = (uint)uVar16;
          pdVar11 = (double *)FUN_180007720(lVar7,uVar16);
          if ((*(uint *)(lVar10 + 0x18) <= uVar15) || (*(uint *)(lVar10 + 0x18) <= uVar14))
          goto code_r0x000180639ac8;
          lVar13 = (longlong)(int)uVar14;
          uVar14 = uVar14 + 1;
          *pdVar11 = *(double *)(lVar10 + 0x20 + lVar13 * 8) *
                     *(double *)(lVar10 + 0x20 + uVar16 * 8) + *pdVar11;
        } while ((int)uVar14 < 3);
        if (lVar8 == 0) goto code_r0x000180639ace;
        if ((*(uint *)(lVar8 + 0x18) <= uVar15) || (*(uint *)(lVar10 + 0x18) <= uVar15))
        goto code_r0x000180639ac8;
        *(double *)(lVar8 + 0x20 + uVar16 * 8) =
             (double)fVar1 * *(double *)(lVar10 + 0x20 + uVar16 * 8) +
             *(double *)(lVar8 + 0x20 + uVar16 * 8);
        if (lVar9 == 0) goto code_r0x000180639ace;
        if ((*(uint *)(lVar9 + 0x18) <= uVar15) || (*(uint *)(lVar10 + 0x18) <= uVar15))
        goto code_r0x000180639ac8;
        *(double *)(lVar9 + 0x20 + uVar16 * 8) =
             (double)fVar2 * *(double *)(lVar10 + 0x20 + uVar16 * 8) +
             *(double *)(lVar9 + 0x20 + uVar16 * 8);
        uVar16 = (ulonglong)(uVar15 + 1);
      } while ((int)(uVar15 + 1) < 3);
    }
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = SparkMapaWindow__Resolve__180648510(lVar7,lVar8,0);
    lVar7 = SparkMapaWindow__Resolve__180648510(lVar7,lVar9,0);
    lVar9 = func_0x000180314710(TI_float__,6);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        if (lVar9 == 0) goto code_r0x000180639ace;
        if ((((*(int *)(lVar9 + 0x18) != 0) &&
             (*(float *)(lVar9 + 0x20) = (float)*(double *)(lVar8 + 0x20),
             1 < *(uint *)(lVar8 + 0x18))) && (1 < *(uint *)(lVar9 + 0x18))) &&
           ((*(float *)(lVar9 + 0x24) = (float)*(double *)(lVar8 + 0x28),
            2 < *(uint *)(lVar8 + 0x18) && (2 < *(uint *)(lVar9 + 0x18))))) {
          *(float *)(lVar9 + 0x28) = (float)*(double *)(lVar8 + 0x30);
          if (lVar7 == 0) goto code_r0x000180639ace;
          if (((*(int *)(lVar7 + 0x18) != 0) && (3 < *(uint *)(lVar9 + 0x18))) &&
             ((*(float *)(lVar9 + 0x2c) = (float)*(double *)(lVar7 + 0x20),
              1 < *(uint *)(lVar7 + 0x18) &&
              (((4 < *(uint *)(lVar9 + 0x18) &&
                (*(float *)(lVar9 + 0x30) = (float)*(double *)(lVar7 + 0x28),
                2 < *(uint *)(lVar7 + 0x18))) && (5 < *(uint *)(lVar9 + 0x18))))))) {
            *(float *)(lVar9 + 0x34) = (float)*(double *)(lVar7 + 0x30);
            *(longlong *)(param_1 + 0x280) = lVar9;
            func_0x000180314690(param_1 + 0x280,lVar9);
            lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
            if (lVar7 == 0) goto code_r0x000180639ace;
            uVar12 = func_0x000180314710(TI_UnityEngine.Vector2__,*(undefined4 *)(lVar7 + 0x18));
            *(undefined8 *)(param_1 + 0x288) = uVar12;
            func_0x000180314690(param_1 + 0x288,uVar12);
            uVar17 = 0;
            while( true ) {
              if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
                func_0x000180315660(TI_SparkMapaWindow);
              }
              lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
              if (lVar7 == 0) goto code_r0x000180639ace;
              if (*(int *)(lVar7 + 0x18) <= (int)uVar17) {
                return;
              }
              lVar7 = *(longlong *)(param_1 + 0x288);
              if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
                func_0x000180315660(TI_SparkMapaWindow);
              }
              lVar8 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8);
              if (lVar8 == 0) goto code_r0x000180639ace;
              if (*(uint *)(lVar8 + 0x18) <= uVar17) break;
              fVar1 = *(float *)(lVar8 + 0x28 + (longlong)(int)uVar17 * 0x18);
              fVar2 = *(float *)(lVar8 + 0x2c + (longlong)(int)uVar17 * 0x18);
              uVar12 = SparkMapaWindow__Afim__180637be0
                                 (param_1,*(undefined8 *)
                                           (*(longlong *)
                                             (*(longlong *)(TI_SparkMapaWindow + 0xb8) + 8) +
                                           ((longlong)(int)uVar17 + 2) * 0x18),0);
              if (lVar7 == 0) goto code_r0x000180639ace;
              if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
              fStackX_1c = (float)((ulonglong)uVar12 >> 0x20);
              lVar8 = (longlong)(int)uVar17;
              uVar17 = uVar17 + 1;
              *(float *)(lVar7 + 0x24 + lVar8 * 8) = fVar2 - fStackX_1c;
              *(float *)(lVar7 + 0x20 + lVar8 * 8) = fVar1 - (float)uVar12;
            }
          }
        }
      }
code_r0x000180639ac8:
      FUN_1803155c0();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
code_r0x000180639ace:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

