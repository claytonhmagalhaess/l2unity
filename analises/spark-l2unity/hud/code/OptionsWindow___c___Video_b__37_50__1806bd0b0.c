// OptionsWindow___c___Video_b__37_50__1806bd0b0 @ 0x1806bd0b0

undefined1 OptionsWindow___c___Video_b__37_50__1806bd0b0(void)

{
  if (cRam00000001834b3ed5 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ed5 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x48);
}

