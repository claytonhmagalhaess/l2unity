// OptionsWindow___c___Video_b__37_64__1806bd5e0 @ 0x1806bd5e0

undefined8 OptionsWindow___c___Video_b__37_64__1806bd5e0(void)

{
  if (cRam00000001834b3ee3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ee3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1a8);
}

