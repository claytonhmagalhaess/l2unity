// L2LoginUI__ShowServerSelectWindow__180777b60 @ 0x180777b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2LoginUI__ShowServerSelectWindow__180777b60(void)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b4406 == '\0') {
    FUN_180315380(TI_LoginWindow);
    cRam00000001834b4406 = '\x01';
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b31c7 == '\0') {
    FUN_180315380(TI_LoginWindow);
    cRam00000001834b31c7 = '\x01';
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar1 = (longlong *)**(longlong **)(TI_LoginWindow + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (cRam00000001834b4432 == '\0') {
      FUN_180315380(TI_LicenseWindow);
      cRam00000001834b4432 = '\x01';
    }
    plVar1 = (longlong *)**(longlong **)(TI_LicenseWindow + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
      if (cRam00000001834b31c6 == '\0') {
        FUN_180315380(TI_ServerSelectWindow);
        cRam00000001834b31c6 = '\x01';
      }
      plVar1 = (longlong *)**(longlong **)(TI_ServerSelectWindow + 0xb8);
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180777c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

