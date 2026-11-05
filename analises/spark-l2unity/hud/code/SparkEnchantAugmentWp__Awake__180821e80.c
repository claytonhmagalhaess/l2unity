// SparkEnchantAugmentWp__Awake__180821e80 @ 0x180821e80

void SparkEnchantAugmentWp__Awake__180821e80(longlong param_1)

{
  if (cRam00000001834b47db == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantAugmentWp);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_augment_wp'");
    cRam00000001834b47db = '\x01';
  }
  **(longlong **)(TI_SparkEnchantAugmentWp + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantAugmentWp + 0xb8),param_1);
  SparkAjusteJson__Carrega(param_1,LIT_"'Data/Effects/spark_enchant_augment_wp'",0);
  SparkEnchantAugmentWp__Completa(param_1,0);
  *(undefined1 *)(param_1 + 0x100) = 1;
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  return;
}

