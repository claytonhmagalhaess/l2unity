// SparkMapaWindow_Andar__NaTextura__180654860 @ 0x180654860

bool SparkMapaWindow_Andar__NaTextura__180654860(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStackX_c;
  
  fVar2 = ((float)param_2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x28);
  if (((0.0 <= fVar2) &&
      (uStackX_c = (float)((ulonglong)param_2 >> 0x20),
      fVar1 = (uStackX_c - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x28), 0.0 <= fVar1))
     && (fVar2 <= 1024.0)) {
    return fVar1 <= 1024.0;
  }
  return false;
}

