// PetWindow__Fecha__1806af800 @ 0x1806af800

void PetWindow__Fecha__1806af800(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if ((char)param_1[0x11] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806af81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  return;
}

