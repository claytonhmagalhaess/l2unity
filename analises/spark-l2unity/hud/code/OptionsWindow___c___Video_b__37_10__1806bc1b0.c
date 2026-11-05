// OptionsWindow___c___Video_b__37_10__1806bc1b0 @ 0x1806bc1b0

float OptionsWindow___c___Video_b__37_10__1806bc1b0(void)

{
  if (cRam00000001834b3eb4 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb4 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return (float)*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) * 0.5;
}

