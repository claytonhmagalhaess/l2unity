// OptionsWindow___c___Jogo_b__42_7__1806bbc50 @ 0x1806bbc50

void OptionsWindow___c___Jogo_b__42_7__1806bbc50(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3f1d == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f1d = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdd) = param_2;
  if (cRam00000001834b32a9 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'spark.opt.party'");
    FUN_180315380(LIT_"'spark.opt.lootparty'");
    FUN_180315380(LIT_"'spark.opt.corparty'");
    cRam00000001834b32a9 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = LIT_"'spark.opt.party'";
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x82);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Grava(uVar2,cVar1 != '\0',0);
  SparkOpcoes__Grava(LIT_"'spark.opt.corparty'",
                     *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x84),0);
  SparkOpcoes__Grava(LIT_"'spark.opt.lootparty'",
                     *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x88),0);
  SparkOpcoes__GravaControles(0);
  FUN_18242e9f0(0);
  return;
}

