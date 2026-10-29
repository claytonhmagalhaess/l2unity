// SparkResolucao__get_EscalaAtual__1804ca050 @ 0x1804ca050

undefined4 SparkResolucao__get_EscalaAtual__1804ca050(void)

{
  if (cRam00000001834b32cf == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32cf = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x18);
}

