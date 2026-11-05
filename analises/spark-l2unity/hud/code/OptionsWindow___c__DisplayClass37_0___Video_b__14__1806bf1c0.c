// OptionsWindow___c__DisplayClass37_0___Video_b__14__1806bf1c0 @ 0x1806bf1c0

void OptionsWindow___c__DisplayClass37_0___Video_b__14__1806bf1c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  
  if (cRam00000001834b3f2f == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f2f = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = *(uint *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c);
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x138);
  if ((int)uVar4 < 5) {
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 4;
  }
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001806bf253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xe48))
                (plVar1,*(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar4 * 8),
                 *(undefined8 *)(*plVar1 + 0xe50));
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

