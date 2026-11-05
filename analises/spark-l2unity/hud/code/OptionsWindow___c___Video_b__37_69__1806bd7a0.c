// OptionsWindow___c___Video_b__37_69__1806bd7a0 @ 0x1806bd7a0

undefined8 OptionsWindow___c___Video_b__37_69__1806bd7a0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3ee8 == '\0') {
    FUN_180315380(TI_SparkAguaInterativa);
    FUN_180315380(LIT_"'Not supported by your GPU.'");
    cRam00000001834b3ee8 = '\x01';
  }
  if (*(int *)(TI_SparkAguaInterativa + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkAguaInterativa__get_HardwareSuporta(0);
  uVar2 = LIT_"'Not supported by your GPU.'";
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

