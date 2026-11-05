// OptionsWindow___c___Audio_b__41_12__1806bab50 @ 0x1806bab50

undefined1 OptionsWindow___c___Audio_b__41_12__1806bab50(void)

{
  if (cRam00000001834b3f14 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f14 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x80);
}

