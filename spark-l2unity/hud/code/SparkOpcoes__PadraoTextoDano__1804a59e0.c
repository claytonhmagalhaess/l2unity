// SparkOpcoes__PadraoTextoDano__1804a59e0 @ 0x1804a59e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__PadraoTextoDano__1804a59e0(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  
  if (cRam00000001834b329b == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329b = '\x01';
  }
  uVar4 = 0;
  while( true ) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= (int)uVar4) {
      return;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar4) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = (longlong)(int)uVar4;
    uVar4 = uVar4 + 1;
    *(undefined1 *)(lVar3 + 0x20 + lVar1) = 0;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

