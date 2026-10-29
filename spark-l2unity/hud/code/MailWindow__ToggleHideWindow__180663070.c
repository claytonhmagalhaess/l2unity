// MailWindow__ToggleHideWindow__180663070 @ 0x180663070

void MailWindow__ToggleHideWindow__180663070(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x11] != '\0') {
    if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180663099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
    if ((char)param_1[0x11] != '\0') {
      if ((char)param_1[7] != '\0') {
        (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      }
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      MailWindow__Aba(param_1,0,0);
      *(undefined1 *)(param_1 + 0x13) = 1;
      lVar1 = param_1[0x12];
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x13) = 0;
      }
      else {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),0,*(undefined8 *)(lVar1 + 0x28));
        *(undefined1 *)(param_1 + 0x13) = 0;
      }
      return;
    }
  }
  return;
}

