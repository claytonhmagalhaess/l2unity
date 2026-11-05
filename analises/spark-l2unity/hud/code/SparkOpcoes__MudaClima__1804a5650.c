// SparkOpcoes__MudaClima__1804a5650 @ 0x1804a5650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__MudaClima__1804a5650(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (cRam00000001834b3299 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'spark.opt.clima3'");
    cRam00000001834b3299 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = SparkOpcoes__ClimaValido__1804a4f30(param_1,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120) = uVar2;
  SparkOpcoes__Grava__1804a5430
            (LIT_"'spark.opt.clima3'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120),0);
  FUN_18242e9f0(0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x130);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804a571f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

