// OptionsWindow___c___Video_b__37_99__1806be370 @ 0x1806be370

undefined1 OptionsWindow___c___Video_b__37_99__1806be370(void)

{
  if (cRam00000001834b3f00 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f00 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9);
}

