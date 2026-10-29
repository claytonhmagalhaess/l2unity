// SparkOpcoes__GravaControles__1804a52f0 @ 0x1804a52f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__GravaControles__1804a52f0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b32aa == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'spark.opt.invertey'");
    FUN_180315380(LIT_"'spark.opt.inverteroda'");
    FUN_180315380(LIT_"'spark.opt.enterchat'");
    cRam00000001834b32aa = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = LIT_"'spark.opt.invertey'";
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdc);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Grava__1804a5430(uVar2,cVar1 != '\0',0);
  uVar2 = LIT_"'spark.opt.inverteroda'";
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdd);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Grava__1804a5430(uVar2,cVar1 != '\0',0);
  uVar2 = LIT_"'spark.opt.enterchat'";
  cVar1 = *(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_PlayerPrefs__SetInt(uVar2,cVar1 != '\0',0);
  return;
}

