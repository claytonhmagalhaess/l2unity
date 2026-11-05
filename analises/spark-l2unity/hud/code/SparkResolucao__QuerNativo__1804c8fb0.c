// SparkResolucao__QuerNativo__1804c8fb0 @ 0x1804c8fb0

bool SparkResolucao__QuerNativo__1804c8fb0(void)

{
  int iVar1;
  
  if (cRam00000001834b32de == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    cRam00000001834b32de = '\x01';
  }
  iVar1 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  if ((iVar1 == 0x12) || (iVar1 == 0x15)) {
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
    if (*(char *)(*(longlong *)(TI_SparkResolucao + 0xb8) + 0x28) == '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) != 1) {
        return true;
      }
      if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar1 = UnityEngine_SystemInfo__get_graphicsShaderLevel(0);
      return iVar1 < 0x2d;
    }
  }
  return false;
}

