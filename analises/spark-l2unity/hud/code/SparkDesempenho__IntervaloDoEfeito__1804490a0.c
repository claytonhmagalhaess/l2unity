// SparkDesempenho__IntervaloDoEfeito__1804490a0 @ 0x1804490a0

float SparkDesempenho__IntervaloDoEfeito__1804490a0(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_38;
  float fStack_30;
  
  if (cRam00000001834b2f76 == '\0') {
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b2f76 = '\x01';
  }
  uStack_38 = 0;
  fStack_30 = 0.0;
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x24) != '\0') {
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkDesempenho__PosicaoDaCamera__1804492a0(&uStack_38,0);
    if (cVar1 != '\0') {
      fVar4 = (param_1[1] - uStack_38._4_4_) * (param_1[1] - uStack_38._4_4_) +
              (*param_1 - (float)uStack_38) * (*param_1 - (float)uStack_38) +
              (param_1[2] - fStack_30) * (param_1[2] - fStack_30);
      if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar2 = (float)SparkDesempenho__get_DistanciaMedia__18044a380(0);
      fVar3 = (float)SparkDesempenho__get_DistanciaLonge__18044a2f0(0);
      if (fVar2 * fVar2 <= fVar4) {
        if (fVar4 < fVar3 * fVar3) {
          if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
            func_0x000180315660(TI_SparkDesempenho);
          }
          fVar4 = *(float *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x28);
        }
        else {
          if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
            func_0x000180315660(TI_SparkDesempenho);
          }
          fVar4 = *(float *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x2c);
        }
        fVar2 = 1.0;
        if (1.0 <= fVar4) {
          fVar2 = fVar4;
        }
        return 1.0 / fVar2;
      }
    }
  }
  return 0.0;
}

