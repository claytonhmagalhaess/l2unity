// SparkEnchantWp__Awake__180838580 @ 0x180838580

void SparkEnchantWp__Awake__180838580(longlong param_1)

{
  if (cRam00000001834b481b == '\0') {
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkEnchantWp);
    FUN_180315380(LIT_"'Data/Effects/spark_enchant_wp'");
    cRam00000001834b481b = '\x01';
  }
  if (*(int *)(TI_SparkEnchantWp + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEnchantWp);
  }
  **(longlong **)(TI_SparkEnchantWp + 0xb8) = param_1;
  func_0x000180314690(*(undefined8 *)(TI_SparkEnchantWp + 0xb8),param_1);
  SparkAjusteJson__Carrega(param_1,LIT_"'Data/Effects/spark_enchant_wp'",0);
  SparkEnchantWp__Completa(param_1,0);
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) =
       *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8) + 1;
  return;
}

