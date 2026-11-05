// SparkMapaWindow__CentraNoJogador__180639ae0 @ 0x180639ae0

void SparkMapaWindow__CentraNoJogador__180639ae0(undefined8 param_1)

{
  char cVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if (cRam00000001834b3d26 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d26 = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkMapaWindow__PosicaoDoJogador3__180642280(&uStack_28,0);
  if (cVar1 != '\0') {
    uStack_18 = uStack_28;
    uStack_10 = uStack_20;
    SparkMapaWindow__Centra__180639b70(param_1,&uStack_18,1,0);
  }
  return;
}

