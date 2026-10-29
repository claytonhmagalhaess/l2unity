// SparkOpcoes__PadraoInterface__1804a5800 @ 0x1804a5800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__PadraoInterface__1804a5800(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  if (cRam00000001834b32a7 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32a7 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  bVar6 = cRam00000001834b329b == '\0';
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe0) = 0x3f2eaeaf;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe4) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe8) = 0x1e;
  if (bVar6) {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b329b = '\x01';
  }
  uVar5 = 0;
  while( true ) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= (int)uVar5) {
      SparkOpcoes__MudaCeu__1804a5540(0,0);
      if (cRam00000001834b3299 == '\0') {
        FUN_180315380(TI_SparkOpcoes);
        FUN_180315380(LIT_"'spark.opt.clima3'");
        cRam00000001834b3299 = '\x01';
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = SparkOpcoes__ClimaValido__1804a4f30(0,0);
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120) = uVar3;
      SparkOpcoes__Grava__1804a5430
                (LIT_"'spark.opt.clima3'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120),
                 0);
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
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar4 = (longlong)(int)uVar5;
    uVar5 = uVar5 + 1;
    *(undefined1 *)(lVar4 + 0x20 + lVar1) = 0;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

