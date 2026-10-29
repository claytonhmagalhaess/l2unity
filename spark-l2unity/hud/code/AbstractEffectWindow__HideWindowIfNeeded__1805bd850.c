// AbstractEffectWindow__HideWindowIfNeeded__1805bd850 @ 0x1805bd850

void AbstractEffectWindow__HideWindowIfNeeded__1805bd850(longlong *param_1)

{
  code *pcVar1;
  
  if (cRam00000001834b3a7b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.get_Count);
    cRam00000001834b3a7b = '\x01';
  }
  if (param_1[0x17] != 0) {
    if (*(int *)(param_1[0x17] + 0x18) == 0) {
      if (param_1[0x18] == 0) goto code_r0x0001805bd8ee;
      if (*(int *)(param_1[0x18] + 0x18) == 0) {
        if (param_1[0x19] == 0) goto code_r0x0001805bd8ee;
        if (*(int *)(param_1[0x19] + 0x18) == 0) {
          if (param_1[0x14] == 0) goto code_r0x0001805bd8ee;
          if (((*(int *)(param_1[0x14] + 0x18) == 0) && (param_1[0x1b] == 0)) &&
             ((char)param_1[7] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001805bd8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
            return;
          }
        }
      }
    }
    return;
  }
code_r0x0001805bd8ee:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

