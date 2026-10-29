// SparkOpcoes__PadraoVideo__1804a5aa0 @ 0x1804a5aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__PadraoVideo__1804a5aa0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b32a4 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32a4 = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  puVar2 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_18,0);
  uStack_28 = *puVar2;
  uStack_20 = puVar2[1];
  uVar1 = func_0x000180eb7750(&uStack_28,0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  **(undefined4 **)(TI_SparkOpcoes + 0xb8) = uVar1;
  puVar2 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_18,0);
  uStack_28 = *puVar2;
  uStack_20 = puVar2[1];
  uVar1 = func_0x000180eb5010(&uStack_28,0);
  bVar3 = cRam00000001834b32ac == '\0';
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4) = uVar1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) = 0x3c;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18) = 0x1e;
  if (bVar3) {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ac = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c) = 3;
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20) = 100;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) = 3;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) = 2;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) = 2;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x30) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x34) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x35) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x36) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc0) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd8) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x3c) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x44) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x48) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x49) = 0;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4a) = 0;
  SparkOpcoes__AplicaMultidao__1804a2fb0(0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x50) = 2;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x58) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x5c) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x60) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) = 1;
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x68) = 1;
  return;
}

