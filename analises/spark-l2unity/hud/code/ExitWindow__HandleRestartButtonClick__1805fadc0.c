// ExitWindow__HandleRestartButtonClick__1805fadc0 @ 0x1805fadc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ExitWindow__HandleRestartButtonClick__1805fadc0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (cRam00000001834b365f == '\0') {
      FUN_180315380(TI_RequestRestartPacket,0);
      cRam00000001834b365f = '\x01';
    }
    uVar3 = func_0x000180315580(TI_RequestRestartPacket);
    RequestRestartPacket___ctor(uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00018050d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

