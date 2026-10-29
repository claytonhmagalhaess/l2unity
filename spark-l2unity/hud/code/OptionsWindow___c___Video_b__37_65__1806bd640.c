// OptionsWindow___c___Video_b__37_65__1806bd640 @ 0x1806bd640

undefined4 OptionsWindow___c___Video_b__37_65__1806bd640(void)

{
  if (cRam00000001834b3ee4 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ee4 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100);
}

