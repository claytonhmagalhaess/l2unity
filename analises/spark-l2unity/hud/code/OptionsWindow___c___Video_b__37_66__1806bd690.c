// OptionsWindow___c___Video_b__37_66__1806bd690 @ 0x1806bd690

void OptionsWindow___c___Video_b__37_66__1806bd690(undefined8 param_1,undefined4 param_2)

{
  if (cRam00000001834b3ee5 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ee5 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) = param_2;
  return;
}

