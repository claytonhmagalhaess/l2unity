// OptionsWindow___c___Video_b__37_43__1806bcdb0 @ 0x1806bcdb0

undefined8 OptionsWindow___c___Video_b__37_43__1806bcdb0(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3ece == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Requires Shadows on (Performance Settings).'");
    cRam00000001834b3ece = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 0) {
    uVar1 = LIT_"'Requires Shadows on (Performance Settings).'";
  }
  return uVar1;
}

