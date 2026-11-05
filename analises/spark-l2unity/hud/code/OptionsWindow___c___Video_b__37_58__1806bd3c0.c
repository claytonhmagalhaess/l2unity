// OptionsWindow___c___Video_b__37_58__1806bd3c0 @ 0x1806bd3c0

undefined8 OptionsWindow___c___Video_b__37_58__1806bd3c0(void)

{
  if (cRam00000001834b3edd == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3edd = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x198);
}

