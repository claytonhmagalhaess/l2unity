// UnionWindow__Abre__1806c5a20 @ 0x1806c5a20

void UnionWindow__Abre__1806c5a20(longlong *param_1)

{
  if (cRam00000001834b3f93 == '\0') {
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b3f93 = '\x01';
  }
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33c0 == '\0') {
    FUN_180315380(TI_SparkCanal);
    cRam00000001834b33c0 = '\x01';
  }
  if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(char **)(TI_SparkCanal + 0xb8) != '\0') {
    if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkCanal__PedeLista(0);
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x0001806c5adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  return;
}

