// SparkMapaWindow__AplicaZoom__180638900 @ 0x180638900

bool SparkMapaWindow__AplicaZoom__180638900(longlong param_1,float param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStackX_c;
  float fStack_54;
  
  fVar7 = (float)param_3;
  fStack_54 = (float)((ulonglong)param_3 >> 0x20);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      uVar1 = SparkMapaWindow__TamanhoDaVista__180649960();
      fVar6 = *(float *)(param_1 + 0x208);
      param_2 = param_2 * fVar6;
      fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar4 = 0.012;
      if ((param_2 < 0.012) || (fVar4 = 0.0625, 0.0625 < param_2)) {
        param_2 = fVar4;
      }
      *(float *)(param_1 + 0x208) = param_2;
      bVar3 = ABS(param_2 - fVar6) == 1e-07;
      bVar2 = ABS(param_2 - fVar6) < 1e-07;
      *(float *)(param_1 + 0x20c) =
           ((fVar7 - (float)uVar1 * 0.5) / fVar6 + *(float *)(param_1 + 0x20c)) -
           (fVar7 - (float)uVar1 * 0.5) / param_2;
      *(float *)(param_1 + 0x210) =
           ((fStack_54 - fStackX_c * 0.5) / fVar6 + *(float *)(param_1 + 0x210)) -
           (fStack_54 - fStackX_c * 0.5) / param_2;
      goto code_r0x000180638b99;
    }
    fVar6 = *(float *)(param_1 + 0x1fc);
    uVar1 = SparkMapaWindow__TamanhoDaVista__180649960();
    fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
    fVar4 = (float)uVar1 * 0.0009765625;
    if (fVar4 <= fStackX_c / 1536.0) {
      fVar4 = fStackX_c / 1536.0;
    }
    fVar6 = fVar6 * param_2;
    if ((fVar4 <= fVar6) && (fVar4 = fVar6, 2.0 < fVar6)) {
      fVar4 = 2.0;
    }
    fVar6 = fVar4 / *(float *)(param_1 + 0x1fc);
    fVar5 = fVar4 - *(float *)(param_1 + 0x1fc);
    *(float *)(param_1 + 0x1fc) = fVar4;
    *(float *)(param_1 + 0x200) = fVar7 - (fVar7 - *(float *)(param_1 + 0x200)) * fVar6;
    *(float *)(param_1 + 0x204) = fStack_54 - (fStack_54 - *(float *)(param_1 + 0x204)) * fVar6;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x194);
    uVar1 = SparkMapaWindow__TamanhoDaVista__180649960();
    fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
    fVar4 = (float)uVar1;
    if (fStackX_c <= (float)uVar1) {
      fVar4 = fStackX_c;
    }
    fVar6 = fVar6 * param_2;
    fVar5 = fVar4 * 0.0009765625;
    if ((fVar6 < fVar4 * 0.0009765625) || (fVar5 = 2.0, 2.0 < fVar6)) {
      fVar6 = fVar5;
    }
    fVar4 = fVar6 / *(float *)(param_1 + 0x194);
    fVar5 = fVar6 - *(float *)(param_1 + 0x194);
    *(float *)(param_1 + 0x194) = fVar6;
    *(float *)(param_1 + 0x198) = fVar7 - (fVar7 - *(float *)(param_1 + 0x198)) * fVar4;
    *(float *)(param_1 + 0x19c) = fStack_54 - (fStack_54 - *(float *)(param_1 + 0x19c)) * fVar4;
  }
  bVar3 = ABS(fVar5) == 1e-05;
  bVar2 = ABS(fVar5) < 1e-05;
code_r0x000180638b99:
  return !bVar2 && !bVar3;
}

