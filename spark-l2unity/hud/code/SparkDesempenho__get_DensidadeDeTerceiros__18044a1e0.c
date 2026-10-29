// SparkDesempenho__get_DensidadeDeTerceiros__18044a1e0 @ 0x18044a1e0

undefined8 SparkDesempenho__get_DensidadeDeTerceiros__18044a1e0(void)

{
  if (cRam00000001834b2f6f == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b2f6f = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x60) == 1) {
    return 0x3f000000;
  }
  return 0x3f800000;
}

