// SparkResolucao__set_MedidaMs__1804ca480 @ 0x1804ca480

void SparkResolucao__set_MedidaMs__1804ca480(undefined4 param_1)

{
  if (cRam00000001834b32d6 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32d6 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x2c) = param_1;
  return;
}

