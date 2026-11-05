// L2ClickableSlot__HandleSlotClickUp__18076ef20 @ 0x18076ef20

void L2ClickableSlot__HandleSlotClickUp__18076ef20(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  
  if (cRam00000001834b43d4 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseUpEvent>.get_button);
    cRam00000001834b43d4 = '\x01';
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (param_1[0xc] != 0) {
    if (*(char *)(param_1[0xc] + 0x48) != '\0') {
      if (param_2 == 0) goto code_r0x00018076efef;
      if (*(int *)(param_2 + 0x88) == 0) {
        if ((char)param_1[0xd] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018076efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
          return;
        }
      }
      else if (*(int *)(param_2 + 0x88) == 1) {
        if (*(char *)((longlong)param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018076efc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
          return;
        }
      }
      else {
        (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      }
    }
    return;
  }
code_r0x00018076efef:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

