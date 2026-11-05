// SparkTeclas_Captura__TeclaDeTexto__1804b4a70 @ 0x1804b4a70

int SparkTeclas_Captura__TeclaDeTexto__1804b4a70(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(param_1 - 1U >> 8);
  if (param_1 - 1U < 0x32) {
    if (param_1 != 2) {
      return CONCAT31(uVar1,param_1 != 3);
    }
  }
  else if (0x4d < param_1) {
    return CONCAT31(uVar1,param_1 < 0x5e);
  }
  return (uint)uVar1 << 8;
}

