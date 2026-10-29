// SparkOpcoes__RazaoDoCeu__1804a5f10 @ 0x1804a5f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkOpcoes__RazaoDoCeu__1804a5f10(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b3296 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3296 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100) < 1) {
    return param_1;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x110);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100)) {
      return param_1;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x110);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100);
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return uVar4;
      }
      return (ulonglong)(uint)((float)*(int *)(lVar2 + 0x20 + (longlong)(int)uVar1 * 4) / 1440.0);
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

