// OptionsWindow___c___Video_b__37_17__1806bc2e0 @ 0x1806bc2e0

undefined8 OptionsWindow___c___Video_b__37_17__1806bc2e0(void)

{
  if (cRam00000001834b3eb7 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb7 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkOpcoes + 0xb8) >> 8),
                  0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54));
}

