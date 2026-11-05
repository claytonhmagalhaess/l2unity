// OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__1__1806c1ef0 @ 0x1806c1ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__1__1806c1ef0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b3f4f == '\0') {
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3f4f = '\x01';
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
    uStack_18 = 0;
    uStack_10 = 0;
    SparkEstilo__Borda(uVar1,&uStack_18,0,0,0);
  }
  return;
}

