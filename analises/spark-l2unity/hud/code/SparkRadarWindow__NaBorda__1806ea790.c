// SparkRadarWindow__NaBorda__1806ea790 @ 0x1806ea790

void SparkRadarWindow__NaBorda__1806ea790(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *param_2 * *param_2 + *param_1 * *param_1;
  if (param_3 * param_3 < fVar1) {
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_1803a99f0(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    *param_1 = (param_3 / fVar1) * *param_1;
    *param_2 = (param_3 / fVar1) * *param_2;
  }
  return;
}

