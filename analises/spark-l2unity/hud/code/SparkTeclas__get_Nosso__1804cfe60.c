// SparkTeclas__get_Nosso__1804cfe60 @ 0x1804cfe60

undefined8 SparkTeclas__get_Nosso__1804cfe60(void)

{
  if (cRam00000001834b32ea == '\0') {
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32ea = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkTeclas + 0xb8) == 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTeclas__CriaNosso(0);
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
    return **(undefined8 **)(TI_SparkTeclas + 0xb8);
  }
  return **(undefined8 **)(TI_SparkTeclas + 0xb8);
}

