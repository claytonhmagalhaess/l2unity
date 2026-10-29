// SparkOpcoes__get_FatorDeDistancia__1804a9b50 @ 0x1804a9b50

undefined8 SparkOpcoes__get_FatorDeDistancia__1804a9b50(void)

{
  if (cRam00000001834b32b1 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32b1 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 0) {
    return 0x3f0ccccd;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) == 1) {
    return 0x3f4ccccd;
  }
  return 0x3f800000;
}

