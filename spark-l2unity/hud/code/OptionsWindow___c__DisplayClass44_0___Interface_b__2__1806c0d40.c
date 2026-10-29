// OptionsWindow___c__DisplayClass44_0___Interface_b__2__1806c0d40 @ 0x1806c0d40

float OptionsWindow___c__DisplayClass44_0___Interface_b__2__1806c0d40(longlong param_1)

{
  if (cRam00000001834b3f40 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f40 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return (*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe4) - *(float *)(param_1 + 0x18)
         ) / (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18));
}

