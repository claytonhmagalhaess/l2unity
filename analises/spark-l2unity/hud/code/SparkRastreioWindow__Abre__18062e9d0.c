// SparkRastreioWindow__Abre__18062e9d0 @ 0x18062e9d0

void SparkRastreioWindow__Abre__18062e9d0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x11] != '\0') {
    lVar1 = param_1[0x12];
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2 ^ 1,*(undefined8 *)(lVar1 + 0x28));
    }
    if ((char)param_1[7] != '\0') {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    }
                    /* WARNING: Could not recover jumptable at 0x00018062ea2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  return;
}

