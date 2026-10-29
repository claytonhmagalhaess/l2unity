// OptionsWindow___c__DisplayClass37_0___Video_b__5__1806bfbd0 @ 0x1806bfbd0

ulonglong OptionsWindow___c__DisplayClass37_0___Video_b__5__1806bfbd0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (cRam00000001834b3f2b == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<string>);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Auto'");
    FUN_180315380(LIT_"' Hz'");
    cRam00000001834b3f2b = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar3 = OptionsWindow__Taxas__18069a0b0(*(longlong *)(param_1 + 0x10),0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  uVar4 = LIT_"'Auto'";
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8) != 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    uVar4 = System_Int32__ToString(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8,0);
    uVar4 = System_String__Concat(uVar4,LIT_"' Hz'",0);
  }
  uVar2 = FUN_1809e1cf0(uVar3,uVar4,MR_System.Array.IndexOf<string>);
  uVar5 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0;
  }
  return uVar5;
}

