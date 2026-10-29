// PlayerShortcuts__DeleteShortcut__1804d1f20 @ 0x1804d1f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__DeleteShortcut__1804d1f20(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  PlayerShortcuts__RemoveShotcutLocally__1804d2910(param_1,param_2,0);
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (cRam00000001834b3661 == '\0') {
      FUN_180315380(TI_RequestShortcutDelPacket,param_2 & 0xffffffff,0);
      cRam00000001834b3661 = '\x01';
    }
    uVar3 = func_0x000180315580(TI_RequestShortcutDelPacket);
    RequestShortcutDelPacket___ctor(uVar3,param_2 & 0xffffffff,0);
                    /* WARNING: Could not recover jumptable at 0x00018050cfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

