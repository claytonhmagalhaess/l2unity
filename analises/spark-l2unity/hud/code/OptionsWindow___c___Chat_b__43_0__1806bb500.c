// OptionsWindow___c___Chat_b__43_0__1806bb500 @ 0x1806bb500

undefined1 OptionsWindow___c___Chat_b__43_0__1806bb500(void)

{
  if (cRam00000001834b3f1e == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f1e = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde);
}

