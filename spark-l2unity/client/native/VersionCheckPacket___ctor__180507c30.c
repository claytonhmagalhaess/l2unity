// VersionCheckPacket___ctor__180507c30 @ 0x180507c30

void InitPacket___ctor__180507c30(longlong *param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  
  SparkCifraStream__Flush__1803dadf0(param_1,0);
  param_1[2] = param_2;
  func_0x000180314690(param_1 + 2,param_2);
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  *(uint *)((longlong)param_1 + 0x24) = uVar1 + 1;
  if (param_1[2] == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 < *(uint *)(param_1[2] + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x000180507c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

