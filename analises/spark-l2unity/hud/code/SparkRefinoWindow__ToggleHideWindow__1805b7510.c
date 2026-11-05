// SparkRefinoWindow__ToggleHideWindow__1805b7510 @ 0x1805b7510

void SparkRefinoWindow__ToggleHideWindow__1805b7510(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  lVar1 = *param_1;
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001805b752b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805b7539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
  return;
}

