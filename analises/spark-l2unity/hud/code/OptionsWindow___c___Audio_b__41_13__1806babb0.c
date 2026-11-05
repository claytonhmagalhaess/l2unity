// OptionsWindow___c___Audio_b__41_13__1806babb0 @ 0x1806babb0

void OptionsWindow___c___Audio_b__41_13__1806babb0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (cRam00000001834b3f15 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f15 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x80) = param_2;
  if (cRam00000001834b32b5 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32b5 = '\x01';
  }
  if (cRam00000001834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    cRam00000001834b301f = '\x01';
  }
  lVar1 = **(longlong **)(TI_AudioManager + 0xb8);
  if (lVar1 != 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x81) == '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      uVar3 = *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x6c);
    }
    else {
      uVar3 = 0;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar2 = *(longlong *)(TI_SparkOpcoes + 0xb8);
    func_0x00018043e190(lVar1,uVar3,*(undefined4 *)(lVar2 + 0x70),lVar2,
                        *(undefined4 *)(lVar2 + 0x78),*(undefined4 *)(lVar2 + 0x7c),
                        *(undefined1 *)(lVar2 + 0x80),0);
  }
  return;
}

