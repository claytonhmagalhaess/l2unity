// SparkResolucao__get_ApiTemNativa__1804c9f60 @ 0x1804c9f60

bool SparkResolucao__get_ApiTemNativa__1804c9f60(void)

{
  int iVar1;
  
  if (cRam00000001834b32df == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32df = '\x01';
  }
  iVar1 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  if ((iVar1 != 0x12) && (iVar1 != 0x15)) {
    return false;
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33b7 == '\0') {
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b33b7 = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  return *(char *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x28) == '\0';
}

