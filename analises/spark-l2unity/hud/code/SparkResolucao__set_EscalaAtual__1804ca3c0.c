// SparkResolucao__set_EscalaAtual__1804ca3c0 @ 0x1804ca3c0

void SparkResolucao__set_EscalaAtual__1804ca3c0(undefined4 param_1)

{
  if (cRam00000001834b32d0 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32d0 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x18) = param_1;
  return;
}

