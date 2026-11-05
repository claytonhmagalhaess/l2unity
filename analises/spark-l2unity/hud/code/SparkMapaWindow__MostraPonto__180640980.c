// SparkMapaWindow__MostraPonto__180640980 @ 0x180640980

void SparkMapaWindow__MostraPonto__180640980(longlong *param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  if ((char)param_1[0x15] != '\0') {
    if ((char)param_1[7] != '\0') {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    }
    uStack_18 = *param_2;
    uStack_10 = *(undefined4 *)(param_2 + 1);
    SparkMapaWindow__Centra__180639b70(param_1,&uStack_18,0,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  }
  return;
}

