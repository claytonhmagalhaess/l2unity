// OptionsWindow___c___Interface_b__44_11__1806bb770 @ 0x1806bb770

undefined4 OptionsWindow___c___Interface_b__44_11__1806bb770(void)

{
  if (cRam00000001834b3f26 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f26 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120);
}

