// OptionsWindow___c___Jogo_b__42_0__1806bb930 @ 0x1806bb930

undefined8 OptionsWindow___c___Jogo_b__42_0__1806bb930(void)

{
  if (cRam00000001834b3f16 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f16 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x90);
}

