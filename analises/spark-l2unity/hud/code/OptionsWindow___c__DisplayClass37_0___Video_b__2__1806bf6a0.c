// OptionsWindow___c__DisplayClass37_0___Video_b__2__1806bf6a0 @ 0x1806bf6a0

ulonglong OptionsWindow___c__DisplayClass37_0___Video_b__2__1806bf6a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b3f29 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.IndexOf);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f29 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (lVar1 != 0) {
      uVar3 = FUN_18169d6f0(lVar1,**(undefined8 **)(TI_SparkOpcoes + 0xb8),
                            MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.IndexOf);
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

