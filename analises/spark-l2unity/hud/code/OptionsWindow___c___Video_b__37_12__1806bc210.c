// OptionsWindow___c___Video_b__37_12__1806bc210 @ 0x1806bc210

float OptionsWindow___c___Video_b__37_12__1806bc210(void)

{
  int iVar1;
  int iVar2;
  
  if (cRam00000001834b3eb5 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3eb5 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c);
  iVar2 = 3;
  if (iVar1 < 3) {
    iVar2 = iVar1;
  }
  return (float)iVar2 / 3.0;
}

