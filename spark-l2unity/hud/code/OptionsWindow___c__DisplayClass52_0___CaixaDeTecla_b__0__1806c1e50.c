// OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__0__1806c1e50 @ 0x1806c1e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__0__1806c1e50(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b3f4e == '\0') {
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3f4e = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = SparkTeclas__get_Trocando(0);
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_18 = 0x3f2aaaab3f48c8c9;
    uStack_10 = 0x3f48c8c93ec8c8c9;
    SparkEstilo__Borda(uVar1,&uStack_18,0x3f800000,0,0);
  }
  return;
}

