// MailWindow__Abre__18065b800 @ 0x18065b800

void MailWindow__Abre__18065b800(longlong *param_1)

{
  longlong lVar1;
  
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
  return;
}

