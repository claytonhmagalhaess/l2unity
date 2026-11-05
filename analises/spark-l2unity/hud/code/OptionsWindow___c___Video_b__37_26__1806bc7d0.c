// OptionsWindow___c___Video_b__37_26__1806bc7d0 @ 0x1806bc7d0

undefined8 OptionsWindow___c___Video_b__37_26__1806bc7d0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3ebf == '\0') {
    FUN_180315380(TI_SparkResolucao);
    FUN_180315380(LIT_"'FSR is not supported by this graphics card.'");
    cRam00000001834b3ebf = '\x01';
  }
  if (*(int *)(TI_SparkResolucao + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkResolucao__get_FsrDisponivel(0);
  uVar2 = LIT_"'FSR is not supported by this graphics card.'";
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

