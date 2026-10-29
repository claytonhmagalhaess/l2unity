// OptionsWindow___c___Video_b__37_82__1806bdcd0 @ 0x1806bdcd0

undefined8 OptionsWindow___c___Video_b__37_82__1806bdcd0(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3ef3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Controlled by Vertical Sync.'");
    cRam00000001834b3ef3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) != '\0') {
    uVar1 = LIT_"'Controlled by Vertical Sync.'";
  }
  return uVar1;
}

