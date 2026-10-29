// SparkDesempenho__Mostra__180449220 @ 0x180449220

undefined8 SparkDesempenho__Mostra__180449220(int param_1)

{
  int iVar1;
  undefined7 uVar2;
  
  if (cRam00000001834b2f74 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b2f74 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x5c);
  uVar2 = (undefined7)((ulonglong)*(longlong *)(TI_SparkOpcoes + 0xb8) >> 8);
  if (iVar1 == 0) {
    return CONCAT71(uVar2,1);
  }
  if (iVar1 == 1) {
    return CONCAT71(uVar2,param_1 != 0);
  }
  return CONCAT71(uVar2,param_1 == 2);
}

