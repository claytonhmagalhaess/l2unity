// OptionsWindow___c___Interface_b__44_10__1806bb710 @ 0x1806bb710

undefined8 OptionsWindow___c___Interface_b__44_10__1806bb710(void)

{
  if (cRam00000001834b3f25 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f25 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x128);
}

