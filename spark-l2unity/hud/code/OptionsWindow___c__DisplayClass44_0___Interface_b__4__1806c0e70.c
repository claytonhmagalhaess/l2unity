// OptionsWindow___c__DisplayClass44_0___Interface_b__4__1806c0e70 @ 0x1806c0e70

float OptionsWindow___c__DisplayClass44_0___Interface_b__4__1806c0e70(longlong param_1)

{
  if (cRam00000001834b3f42 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f42 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return (float)(*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe8) -
                *(int *)(param_1 + 0x20)) /
         (float)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20));
}

