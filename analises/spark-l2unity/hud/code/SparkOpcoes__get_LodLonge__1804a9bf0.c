// SparkOpcoes__get_LodLonge__1804a9bf0 @ 0x1804a9bf0

float SparkOpcoes__get_LodLonge__1804a9bf0(void)

{
  float fVar1;
  
  if (cRam00000001834b329f == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329f = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar1 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
  return fVar1 * 30.0;
}

