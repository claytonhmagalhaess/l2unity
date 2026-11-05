// SparkOpcoes__set_ModoMinimo__1804a9fe0 @ 0x1804a9fe0

void SparkOpcoes__set_ModoMinimo__1804a9fe0(undefined1 param_1)

{
  if (cRam00000001834b3292 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3292 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) = param_1;
  return;
}

