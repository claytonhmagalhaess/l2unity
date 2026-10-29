// SparkDesempenho__get_DistanciaMedia__18044a380 @ 0x18044a380

float SparkDesempenho__get_DistanciaMedia__18044a380(void)

{
  float fVar1;
  float fVar2;
  
  if (cRam00000001834b2f6c == '\0') {
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b2f6c = '\x01';
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
  }
  fVar1 = *(float *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 4);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar2 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
  return fVar2 * fVar1;
}

