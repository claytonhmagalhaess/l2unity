// OptionsWindow___c___Video_b__37_35__1806bcac0 @ 0x1806bcac0

undefined8 OptionsWindow___c___Video_b__37_35__1806bcac0(void)

{
  if (cRam00000001834b3ec7 == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    cRam00000001834b3ec7 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  return **(undefined8 **)(TI_SparkApiGrafica + 0xb8);
}

