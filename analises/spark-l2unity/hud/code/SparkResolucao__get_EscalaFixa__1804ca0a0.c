// SparkResolucao__get_EscalaFixa__1804ca0a0 @ 0x1804ca0a0

float SparkResolucao__get_EscalaFixa__1804ca0a0(void)

{
  int iVar1;
  
  if (cRam00000001834b32dd == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32dd = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20);
  if (iVar1 < 0x32) {
    iVar1 = 0x32;
  }
  else if (100 < iVar1) {
    return 1.0;
  }
  return (float)iVar1 / 100.0;
}

