// OptionsWindow___c___Video_b__37_46__1806bced0 @ 0x1806bced0

void OptionsWindow___c___Video_b__37_46__1806bced0(undefined8 param_1,undefined4 param_2)

{
  if (cRam00000001834b3ed1 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ed1 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x44) = param_2;
  return;
}

