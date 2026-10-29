// OptionsWindow___c___Video_b__37_53__1806bd1b0 @ 0x1806bd1b0

void OptionsWindow___c___Video_b__37_53__1806bd1b0(undefined8 param_1,undefined1 param_2)

{
  if (cRam00000001834b3ed8 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ed8 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x49) = param_2;
  return;
}

