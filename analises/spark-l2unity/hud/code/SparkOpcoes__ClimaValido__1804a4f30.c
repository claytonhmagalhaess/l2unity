// SparkOpcoes__ClimaValido__1804a4f30 @ 0x1804a4f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkOpcoes__ClimaValido__1804a4f30(uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b329a == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329a = '\x01';
  }
  if ((param_1 == 6) || (param_1 == 7)) {
    param_1 = param_1 - 5;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x128);
  if (lVar1 != 0) {
    if (-1 < (int)param_1) {
      uVar3 = *(int *)(lVar1 + 0x18) - 1;
      if ((int)param_1 <= (int)uVar3) {
        uVar3 = param_1;
      }
      return (ulonglong)uVar3;
    }
    return 0;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

