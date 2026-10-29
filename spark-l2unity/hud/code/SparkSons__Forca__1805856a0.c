// SparkSons__Forca__1805856a0 @ 0x1805856a0

float SparkSons__Forca__1805856a0(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.01;
  if (0.01 <= param_3) {
    fVar1 = param_3;
  }
  fVar2 = 1.0 - param_2 / fVar1;
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1 * param_1;
}

