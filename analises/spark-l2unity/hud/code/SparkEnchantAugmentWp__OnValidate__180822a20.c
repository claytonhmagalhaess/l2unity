// SparkEnchantAugmentWp__OnValidate__180822a20 @ 0x180822a20

void SparkEnchantAugmentWp__OnValidate__180822a20(longlong param_1)

{
  if (cRam00000001834b47de == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantAugmentWp);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_augment_wp'");
    cRam00000001834b47de = '\x01';
  }
  **(longlong **)(TI_SparkEnchantAugmentWp + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantAugmentWp + 0xb8),param_1);
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  if (*(char *)(param_1 + 0x100) != '\0') {
    return;
  }
  return;
}

