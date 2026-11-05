// SparkEnchantWpExc__OnValidate__180834d90 @ 0x180834d90

void SparkEnchantWpExc__OnValidate__180834d90(longlong param_1)

{
  if (cRam00000001834b4825 == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantWpExc);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_wp_exc'");
    cRam00000001834b4825 = '\x01';
  }
  if (*(int *)(TI_SparkEnchantWpExc + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEnchantWpExc);
  }
  **(longlong **)(TI_SparkEnchantWpExc + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantWpExc + 0xb8),param_1);
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  return;
}

