// SparkOpcoes__SalvaJogo__1804a6140 @ 0x1804a6140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__SalvaJogo__1804a6140(void)

{
  char cVar1;
  undefined8 uVar2;
  
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
  SparkOpcoes__Grava__1804a5430(uVar2,cVar1 != '\0',0);
  SparkOpcoes__Grava__1804a5430
            (LIT_"'spark.opt.corparty'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x84),0);
  SparkOpcoes__Grava__1804a5430
            (LIT_"'spark.opt.lootparty'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x88),0);
  SparkOpcoes__GravaControles__1804a52f0(0);
  FUN_18242e9f0(0);
  return;
}

