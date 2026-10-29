// SparkLoja__PassaNoFiltro__1804dfab0 @ 0x1804dfab0

byte SparkLoja__PassaNoFiltro__1804dfab0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  byte extraout_var;
  undefined8 uVar3;
  
  if (cRam00000001834b349a == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b349a = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354a == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354a = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = func_0x000181707e50(*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x10),0);
  if (cVar1 != '\0') {
    return 1;
  }
  if (param_1 != 0) {
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b354a == '\0') {
      FUN_180315380(TI_SparkLoja);
      cRam00000001834b354a = '\x01';
    }
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar2 = System_String__IndexOf
                      (param_1,*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x10),5,
                       0);
    if (-1 < iVar2) {
      return 1;
    }
  }
  if (param_2 != 0) {
    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_1804d0640(0);
    System_String__IndexOf(param_2,uVar3,5,0);
    return extraout_var >> 7 ^ 1;
  }
  return 0;
}

