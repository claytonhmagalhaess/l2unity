// OptionsWindow___c__DisplayClass44_0___Interface_b__0__1806c0c30 @ 0x1806c0c30

float OptionsWindow___c__DisplayClass44_0___Interface_b__0__1806c0c30(longlong param_1)

{
  if (cRam00000001834b3f3e == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f3e = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return (*(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe0) - *(float *)(param_1 + 0x10)
         ) / (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10));
}

