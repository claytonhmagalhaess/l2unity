// PlayerShortcuts__RequestToggleShortcutItem__1804d3070 @ 0x1804d3070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__RequestToggleShortcutItem__1804d3070
               (undefined8 param_1,undefined4 param_2,byte param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (cRam00000001834b3679 == '\0') {
      FUN_180315380(TI_RequestAutoSoulshotPacket,param_2,param_3,0);
      cRam00000001834b3679 = '\x01';
    }
    uVar3 = func_0x000180315580(TI_RequestAutoSoulshotPacket);
    RequestAutoSoulshotPacket___ctor(uVar3,param_2,param_3 ^ 1,0);
                    /* WARNING: Could not recover jumptable at 0x00018050c67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

