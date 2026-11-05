// OptionsWindow___c___Video_b__37_22__1806bc650 @ 0x1806bc650

undefined8 OptionsWindow___c___Video_b__37_22__1806bc650(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3ebb == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Controlled by Dynamic Resolution.'");
    cRam00000001834b3ebb = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54)) {
    uVar1 = LIT_"'Controlled by Dynamic Resolution.'";
  }
  return uVar1;
}

