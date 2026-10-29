// SparkMacros__Ocupado__180474f90 @ 0x180474f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkMacros__Ocupado__180474f90(void)

{
  ulonglong uVar1;
  float fVar2;
  
  if (cRam00000001834b307e == '\0') {
    FUN_180315380(TI_SparkMacros);
    cRam00000001834b307e = '\x01';
  }
  fVar2 = (float)FUN_1824366b0(0);
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMacros);
  }
  if (*(float *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x18) <= fVar2) {
    fVar2 = (float)FUN_1824366b0(0);
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    uVar1 = *(ulonglong *)(TI_SparkMacros + 0xb8);
    *(float *)(uVar1 + 0x18) = fVar2 + 1.0;
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkMacros + 0xb8) >> 8),1);
}

