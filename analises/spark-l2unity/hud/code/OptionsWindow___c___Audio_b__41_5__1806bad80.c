// OptionsWindow___c___Audio_b__41_5__1806bad80 @ 0x1806bad80

void OptionsWindow___c___Audio_b__41_5__1806bad80(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar5 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam00000001834b3f0d == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f0d = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x70) = param_2;
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
                        *(undefined1 *)(lVar2 + 0x80),0,uVar4,uVar5);
  }
  return;
}

