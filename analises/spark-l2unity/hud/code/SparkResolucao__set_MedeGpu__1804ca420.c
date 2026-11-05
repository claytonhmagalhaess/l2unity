// SparkResolucao__set_MedeGpu__1804ca420 @ 0x1804ca420

void SparkResolucao__set_MedeGpu__1804ca420(undefined1 param_1)

{
  if (cRam00000001834b32da == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32da = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkResolucao);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x34) = param_1;
  return;
}

