// SparkResolucao__get_NomeUpscaler__1804ca240 @ 0x1804ca240

undefined8 SparkResolucao__get_NomeUpscaler__1804ca240(void)

{
  int iVar1;
  
  if (cRam00000001834b32db == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(LIT_"'Bilinear'");
    FUN_180315380(LIT_"'FSR 1.0'");
    cRam00000001834b32db = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) == 1) {
    if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar1 = UnityEngine_SystemInfo__get_graphicsShaderLevel(0);
    if (0x2c < iVar1) {
      return LIT_"'FSR 1.0'";
    }
  }
  return LIT_"'Bilinear'";
}

