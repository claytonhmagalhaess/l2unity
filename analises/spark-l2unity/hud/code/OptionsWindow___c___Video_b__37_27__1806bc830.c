// OptionsWindow___c___Video_b__37_27__1806bc830 @ 0x1806bc830

undefined8 OptionsWindow___c___Video_b__37_27__1806bc830(void)

{
  if (cRam00000001834b3ec0 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ec0 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1b8);
}

