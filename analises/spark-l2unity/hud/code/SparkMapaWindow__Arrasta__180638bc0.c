// SparkMapaWindow__Arrasta__180638bc0 @ 0x180638bc0

void SparkMapaWindow__Arrasta__180638bc0(longlong param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_44;
  
  fVar2 = (float)param_2;
  uStack_44 = (float)((ulonglong)param_2 >> 0x20);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      fVar1 = *(float *)(param_1 + 0x208);
      fVar3 = -*(float *)(param_1 + 0x20c) * fVar1;
      fVar4 = -*(float *)(param_1 + 0x210) * fVar1;
      uStack_44 = *(float *)(param_1 + 0x210) - uStack_44 / fVar1;
      *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x20c) - fVar2 / fVar1;
      *(float *)(param_1 + 0x210) = uStack_44;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x200);
      fVar4 = *(float *)(param_1 + 0x204);
      uStack_44 = uStack_44 + fVar4;
      *(float *)(param_1 + 0x200) = fVar2 + fVar3;
      *(float *)(param_1 + 0x204) = uStack_44;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x198);
    fVar4 = *(float *)(param_1 + 0x19c);
    uStack_44 = uStack_44 + fVar4;
    *(float *)(param_1 + 0x198) = fVar2 + fVar3;
    *(float *)(param_1 + 0x19c) = uStack_44;
  }
  SparkMapaWindow__Redesenha__180646390(uStack_44,0);
  if (param_3 != '\0') {
    if (*(longlong *)(param_1 + 0x188) == 0) {
      if (*(char *)(param_1 + 0x1f8) == '\0') {
        fVar2 = -*(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x208);
        fVar1 = -*(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x208);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x200);
        fVar1 = *(float *)(param_1 + 0x204);
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x198);
      fVar1 = *(float *)(param_1 + 0x19c);
    }
    if (ABS(fVar2 - fVar3) < 0.01) {
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    if (ABS(fVar1 - fVar4) < 0.01) {
      *(undefined4 *)(param_1 + 0x238) = 0;
    }
  }
  return;
}

