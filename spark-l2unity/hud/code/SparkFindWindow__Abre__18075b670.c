// SparkFindWindow__Abre__18075b670 @ 0x18075b670

void SparkFindWindow__Abre__18075b670(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if ((char)param_1[0x19] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018075b6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

