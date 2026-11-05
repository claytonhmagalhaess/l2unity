// SparkDesempenho__get_DistanciaLonge__18044a2f0 @ 0x18044a2f0

float SparkDesempenho__get_DistanciaLonge__18044a2f0(void)

{
  float fVar1;
  float fVar2;
  
  if (cRam00000001834b2f6d == '\0') {
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b2f6d = '\x01';
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
  }
  fVar1 = *(float *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 8);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar2 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
  return fVar2 * fVar1;
}

