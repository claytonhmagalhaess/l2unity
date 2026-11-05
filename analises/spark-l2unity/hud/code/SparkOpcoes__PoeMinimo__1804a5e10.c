// SparkOpcoes__PoeMinimo__1804a5e10 @ 0x1804a5e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__PoeMinimo__1804a5e10(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (cRam00000001834b32b8 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32b8 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20);
  SparkOpcoes__UsaPreset__1804a73b0(0,0);
  lVar2 = *(longlong *)(TI_SparkOpcoes + 0xb8);
  if (*(int *)(lVar2 + 0x20) <= iVar1) {
    iVar1 = *(int *)(lVar2 + 0x20);
  }
  *(int *)(lVar2 + 0x20) = iVar1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x3c) = 2;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40) = 0;
  lVar2 = *(longlong *)(TI_SparkOpcoes + 0xb8);
  uVar3 = 1;
  if (1 < *(int *)(lVar2 + 0x5c)) {
    uVar3 = *(undefined4 *)(lVar2 + 0x5c);
  }
  *(undefined4 *)(lVar2 + 0x5c) = uVar3;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x60) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x68) = 0;
  return;
}

