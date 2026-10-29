// OptionsWindow___c___Video_b__37_57__1806bd360 @ 0x1806bd360

undefined8 OptionsWindow___c___Video_b__37_57__1806bd360(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3edc == '\0') {
    FUN_180315380(TI_SparkMultidao);
    FUN_180315380(LIT_"'Not supported by your GPU.'");
    cRam00000001834b3edc = '\x01';
  }
  if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkMultidao__get_HardwareSuporta(0);
  uVar2 = LIT_"'Not supported by your GPU.'";
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

