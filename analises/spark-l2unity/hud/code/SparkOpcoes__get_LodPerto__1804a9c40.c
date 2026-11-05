// SparkOpcoes__get_LodPerto__1804a9c40 @ 0x1804a9c40

float SparkOpcoes__get_LodPerto__1804a9c40(void)

{
  float fVar1;
  
  if (cRam00000001834b329e == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329e = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar1 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
  return fVar1 * 15.0;
}

