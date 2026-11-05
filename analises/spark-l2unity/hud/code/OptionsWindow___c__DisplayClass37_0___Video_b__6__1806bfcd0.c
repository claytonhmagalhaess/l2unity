// OptionsWindow___c__DisplayClass37_0___Video_b__6__1806bfcd0 @ 0x1806bfcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass37_0___Video_b__6__1806bfcd0(longlong param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b3f2c == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Auto'");
    FUN_180315380(LIT_"' Hz'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3f2c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = OptionsWindow__Taxas__18069a0b0(*(longlong *)(param_1 + 0x10),0);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= param_2) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)param_2 * 8);
      cVar3 = func_0x0001817058a0(lVar5,LIT_"'Auto'",0);
      if (cVar3 == '\0') {
        if (lVar5 == 0) goto code_r0x0001806bfdc0;
        uVar2 = System_String__Replace(lVar5,LIT_"' Hz'",LIT_"''",0);
        uVar4 = System_Int32__Parse(uVar2,0);
      }
      else {
        uVar4 = 0;
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8) = uVar4;
      return;
    }
  }
code_r0x0001806bfdc0:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

