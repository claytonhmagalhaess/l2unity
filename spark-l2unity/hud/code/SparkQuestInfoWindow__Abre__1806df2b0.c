// SparkQuestInfoWindow__Abre__1806df2b0 @ 0x1806df2b0

void SparkQuestInfoWindow__Abre__1806df2b0(longlong *param_1)

{
  if ((char)param_1[0x11] != '\0') {
    *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
    SparkQuestInfoWindow__Redesenha(param_1,0);
    if ((char)param_1[7] != '\0') {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    }
                    /* WARNING: Could not recover jumptable at 0x0001806df2fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  return;
}

