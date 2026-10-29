// SparkOpcoes__get_FatorDeDetalhe__1804a9ab0 @ 0x1804a9ab0

undefined8 SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(void)

{
  if (cRam00000001834b329d == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329d = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40) == 0) {
    return 0x3f19999a;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40) == 2) {
    return 0x3fcccccd;
  }
  return 0x3f800000;
}

