// SparkResolucao__set_NativaRecusada__1804ca4e0 @ 0x1804ca4e0

void SparkResolucao__set_NativaRecusada__1804ca4e0(undefined1 param_1)

{
  if (cRam00000001834b32d4 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32d4 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x28) = param_1;
  return;
}

