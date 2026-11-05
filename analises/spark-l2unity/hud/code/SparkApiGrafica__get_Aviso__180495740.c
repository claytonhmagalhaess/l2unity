// SparkApiGrafica__get_Aviso__180495740 @ 0x180495740

undefined8 SparkApiGrafica__get_Aviso__180495740(void)

{
  if (cRam00000001834b325d == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    cRam00000001834b325d = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x18);
}

