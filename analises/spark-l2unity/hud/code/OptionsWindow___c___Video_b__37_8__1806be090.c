// OptionsWindow___c___Video_b__37_8__1806be090 @ 0x1806be090

float OptionsWindow___c___Video_b__37_8__1806be090(void)

{
  if (cRam00000001834b3eb2 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb2 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return (*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) + 1.0) * 0.5;
}

