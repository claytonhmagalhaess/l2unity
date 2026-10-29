// SparkEnchantInfinityWp__OnValidate__180823570 @ 0x180823570

void SparkEnchantInfinityWp__OnValidate__180823570(longlong param_1)

{
  if (cRam00000001834b47e6 == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantInfinityWp);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_infinity_wp'");
    cRam00000001834b47e6 = '\x01';
  }
  if (*(int *)(TI_SparkEnchantInfinityWp + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEnchantInfinityWp);
  }
  **(longlong **)(TI_SparkEnchantInfinityWp + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantInfinityWp + 0xb8),param_1);
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  return;
}

