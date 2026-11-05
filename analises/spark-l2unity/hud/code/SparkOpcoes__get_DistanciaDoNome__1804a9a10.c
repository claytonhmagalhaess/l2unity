// SparkOpcoes__get_DistanciaDoNome__1804a9a10 @ 0x1804a9a10

undefined8 SparkOpcoes__get_DistanciaDoNome__1804a9a10(void)

{
  if (cRam00000001834b329c == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329c = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x44) == 0) {
    return 0x41700000;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x44) == 2) {
    return 0x420c0000;
  }
  return 0x41b00000;
}

