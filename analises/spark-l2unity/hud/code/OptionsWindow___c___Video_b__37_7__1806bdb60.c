// OptionsWindow___c___Video_b__37_7__1806bdb60 @ 0x1806bdb60

undefined8 OptionsWindow___c___Video_b__37_7__1806bdb60(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3eb1 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Only in Full Screen (windows use the monitor refresh rat...");
    cRam00000001834b3eb1 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) != 2) {
    uVar1 = LIT_"'Only in Full Screen (windows use the monitor refresh rat...";
  }
  return uVar1;
}

