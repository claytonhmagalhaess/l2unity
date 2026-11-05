// SparkRastreioWindow__ToggleHideWindow__18062fa70 @ 0x18062fa70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRastreioWindow__ToggleHideWindow__18062fa70(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (cRam00000001834b3c9c == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_SparkVip);
    cRam00000001834b3c9c = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[7] != '\0') {
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660(TI_SparkVip);
    }
    if (*(char *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x40) == '\0') {
      if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = func_0x000180a870f0(0);
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  lVar1 = *param_1;
  if ((char)param_1[7] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018062fb2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018062fb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
  return;
}

