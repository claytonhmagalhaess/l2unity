// OptionsWindow___c___Video_b__37_4__1806bd040 @ 0x1806bd040

undefined8 OptionsWindow___c___Video_b__37_4__1806bd040(void)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3eb0 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Full Window always uses the monitor resolution.'");
    cRam00000001834b3eb0 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = 0;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) == 1) {
    uVar1 = LIT_"'Full Window always uses the monitor resolution.'";
  }
  return uVar1;
}

