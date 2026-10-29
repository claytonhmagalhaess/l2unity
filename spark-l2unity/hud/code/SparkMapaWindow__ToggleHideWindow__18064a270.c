// SparkMapaWindow__ToggleHideWindow__18064a270 @ 0x18064a270

void SparkMapaWindow__ToggleHideWindow__18064a270(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x15] == '\0') {
    return;
  }
  lVar1 = *param_1;
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018064a28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018064a299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
  return;
}

