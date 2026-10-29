// AutoPotionWindow__ToggleHideWindow__1805ae7c0 @ 0x1805ae7c0

void AutoPotionWindow__ToggleHideWindow__1805ae7c0(longlong *param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b3a4b == '\0') {
    FUN_180315380(TI_SparkAutoPocao);
    cRam00000001834b3a4b = '\x01';
  }
  if ((char)param_1[0x11] != '\0') {
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3544 == '\0') {
      FUN_180315380(TI_SparkAutoPocao);
      cRam00000001834b3544 = '\x01';
    }
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x10) != '\0') {
      lVar1 = *param_1;
      if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001805ae866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
        return;
      }
      (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x0001805ae88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      return;
    }
  }
  return;
}

