// OptionsWindow___c___Video_b__37_76__1806bd960 @ 0x1806bd960

undefined8 OptionsWindow___c___Video_b__37_76__1806bd960(void)

{
  if (cRam00000001834b3eed == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eed = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x160);
}

