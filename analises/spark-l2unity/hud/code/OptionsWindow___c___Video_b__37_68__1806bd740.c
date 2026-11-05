// OptionsWindow___c___Video_b__37_68__1806bd740 @ 0x1806bd740

void OptionsWindow___c___Video_b__37_68__1806bd740(undefined8 param_1,undefined1 param_2)

{
  if (cRam00000001834b3ee7 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ee7 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x68) = param_2;
  return;
}

