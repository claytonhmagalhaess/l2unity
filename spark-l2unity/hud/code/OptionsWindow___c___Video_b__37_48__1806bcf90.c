// OptionsWindow___c___Video_b__37_48__1806bcf90 @ 0x1806bcf90

undefined4 OptionsWindow___c___Video_b__37_48__1806bcf90(void)

{
  if (cRam00000001834b3ed3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ed3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40);
}

