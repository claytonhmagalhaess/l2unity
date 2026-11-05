// L2Window__Start__18079a750 @ 0x18079a750

void L2Window__Start__18079a750(longlong *param_1)

{
  if (param_1[6] == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Could not recover jumptable at 0x00018079a765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    return;
  }
  return;
}

