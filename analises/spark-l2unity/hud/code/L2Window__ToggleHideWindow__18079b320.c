// L2Window__ToggleHideWindow__18079b320 @ 0x18079b320

void L2Window__ToggleHideWindow__18079b320(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018079b332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018079b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
  return;
}

