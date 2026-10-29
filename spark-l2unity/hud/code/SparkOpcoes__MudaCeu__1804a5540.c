// SparkOpcoes__MudaCeu__1804a5540 @ 0x1804a5540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__MudaCeu__1804a5540(int param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  
  if (cRam00000001834b3295 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'spark.opt.ceu'");
    cRam00000001834b3295 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x108);
  if (lVar1 != 0) {
    if (((param_1 < 0) || (iVar3 = *(int *)(lVar1 + 0x18) + -1, param_1 <= iVar3)) &&
       (iVar3 = param_1, param_1 < 0)) {
      iVar3 = 0;
    }
    *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100) = iVar3;
    SparkOpcoes__Grava__1804a5430
              (LIT_"'spark.opt.ceu'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100),0)
    ;
    FUN_18242e9f0(0);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x118);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804a563c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

