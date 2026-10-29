// SparkTextoDano__Servidor__18074de20 @ 0x18074de20

undefined8 SparkTextoDano__Servidor__18074de20(uint param_1)

{
  if (cRam00000001834b42a2 == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a2 = '\x01';
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTextoDano);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkTextoDano + 0xb8) >> 8),
                  (*(uint *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x10) & param_1) != 0);
}

