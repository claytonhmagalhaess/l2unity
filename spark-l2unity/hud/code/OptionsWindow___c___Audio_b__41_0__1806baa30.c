// OptionsWindow___c___Audio_b__41_0__1806baa30 @ 0x1806baa30

undefined1 OptionsWindow___c___Audio_b__41_0__1806baa30(void)

{
  if (cRam00000001834b3f08 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f08 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x81);
}

