// OptionsWindow___c___Video_b__37_30__1806bc940 @ 0x1806bc940

undefined8 OptionsWindow___c___Video_b__37_30__1806bc940(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3ec3 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Only with Upscaling FSR 1.0.'");
    cRam00000001834b3ec3 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) != 1) {
    uVar1 = LIT_"'Only with Upscaling FSR 1.0.'";
  }
  return uVar1;
}

