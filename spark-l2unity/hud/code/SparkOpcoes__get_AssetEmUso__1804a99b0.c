// SparkOpcoes__get_AssetEmUso__1804a99b0 @ 0x1804a99b0

undefined8 SparkOpcoes__get_AssetEmUso__1804a99b0(void)

{
  if (cRam00000001834b32af == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32af = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1e0);
}

