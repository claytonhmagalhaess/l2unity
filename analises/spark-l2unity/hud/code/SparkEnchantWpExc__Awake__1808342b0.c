// SparkEnchantWpExc__Awake__1808342b0 @ 0x1808342b0

void SparkEnchantWpExc__Awake__1808342b0(longlong param_1)

{
  if (cRam00000001834b4823 == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantWpExc);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_wp_exc'");
    cRam00000001834b4823 = '\x01';
  }
  if (*(int *)(TI_SparkEnchantWpExc + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEnchantWpExc);
  }
  **(longlong **)(TI_SparkEnchantWpExc + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantWpExc + 0xb8),param_1);
  SparkAjusteJson__Carrega(param_1,LIT_"'Data/Effects/spark_enchant_wp_exc'",0);
  SparkEnchantWpExc__Completa(param_1,0);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  return;
}

