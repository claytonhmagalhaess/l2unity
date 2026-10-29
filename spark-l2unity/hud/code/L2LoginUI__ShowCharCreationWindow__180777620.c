// L2LoginUI__ShowCharCreationWindow__180777620 @ 0x180777620

void L2LoginUI__ShowCharCreationWindow__180777620(void)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b31c3 == '\0') {
    FUN_180315380(TI_CharSelectWindow);
    cRam00000001834b31c3 = '\x01';
  }
  plVar1 = (longlong *)**(longlong **)(TI_CharSelectWindow + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (cRam00000001834b3022 == '\0') {
      FUN_180315380(TI_CharCreationWindow);
      cRam00000001834b3022 = '\x01';
    }
    plVar1 = (longlong *)**(longlong **)(TI_CharCreationWindow + 0xb8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001807776a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

