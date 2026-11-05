// ChatWindow__TrocaOculto__1805cf310 @ 0x1805cf310

void ChatWindow__TrocaOculto__1805cf310(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x25];
  *(bool *)(param_1 + 0x25) = (char)lVar1 == '\0';
  if ((char)lVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001805cf33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
  if ((char)param_1[0x11] != '\0') {
    ChatWindow__CloseChat__1805c6330(param_1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001805cf36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
  return;
}

