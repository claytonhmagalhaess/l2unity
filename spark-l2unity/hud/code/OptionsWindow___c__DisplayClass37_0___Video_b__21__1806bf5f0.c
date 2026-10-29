// OptionsWindow___c__DisplayClass37_0___Video_b__21__1806bf5f0 @ 0x1806bf5f0

void OptionsWindow___c__DisplayClass37_0___Video_b__21__1806bf5f0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (cRam00000001834b3f32 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f32 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar2 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_userData(*(longlong *)(param_1 + 0x20),0);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      if (*plVar2 == TI_System.Action) {
        plVar3 = plVar2;
      }
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001806bf685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar3[3])(plVar3[8],plVar3[5]);
        return;
      }
    }
  }
  return;
}

