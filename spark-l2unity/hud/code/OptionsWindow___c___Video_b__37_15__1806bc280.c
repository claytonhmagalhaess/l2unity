// OptionsWindow___c___Video_b__37_15__1806bc280 @ 0x1806bc280

undefined8 OptionsWindow___c___Video_b__37_15__1806bc280(void)

{
  if (cRam00000001834b3eb6 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb6 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkOpcoes + 0xb8) >> 8),
                  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20) < 100);
}

