// SparkDesempenho__get_DistanciaDeEfeitos__18044a250 @ 0x18044a250

undefined8 SparkDesempenho__get_DistanciaDeEfeitos__18044a250(void)

{
  if (cRam00000001834b2f6e == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b2f6e = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) == 0) {
    return 0x41a00000;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) == 2) {
    return 0x42700000;
  }
  return 0x420c0000;
}

