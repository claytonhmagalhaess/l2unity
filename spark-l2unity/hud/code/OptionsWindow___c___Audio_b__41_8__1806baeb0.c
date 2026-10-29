// OptionsWindow___c___Audio_b__41_8__1806baeb0 @ 0x1806baeb0

undefined4 OptionsWindow___c___Audio_b__41_8__1806baeb0(void)

{
  if (cRam00000001834b3f10 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f10 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x7c);
}

