// SparkTeclas__Lista__1804cca10 @ 0x1804cca10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__Lista__1804cca10(void)

{
  if (cRam00000001834b32f3 == '\0') {
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32f3 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10) == 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTeclas__MontaLista__1804cd140(0);
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
    return *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
  }
  return *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
}

