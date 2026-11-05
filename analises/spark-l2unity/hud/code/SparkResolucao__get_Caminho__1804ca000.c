// SparkResolucao__get_Caminho__1804ca000 @ 0x1804ca000

undefined8 SparkResolucao__get_Caminho__1804ca000(void)

{
  if (cRam00000001834b32d1 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32d1 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x20);
}

