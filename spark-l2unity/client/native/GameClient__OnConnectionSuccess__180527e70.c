// GameClient__OnConnectionSuccess__180527e70 @ 0x180527e70

void GameClient__OnConnectionSuccess__180527e70(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (cRam00000001834b3788 == '\0') {
    FUN_180315380(0x1832f3868);
    FUN_180315380(0x183307610);
    cRam00000001834b3788 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar4 = FUN_182436650(0);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  FUN_1823d2370(uRam0000000183307610,0);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if (cRam00000001834b3649 == '\0') {
      FUN_180315380(0x1832d2208,0);
      cRam00000001834b3649 = '\x01';
    }
    if (cRam00000001834b3021 == '\0') {
      FUN_180315380(0x183308868);
      cRam00000001834b3021 = '\x01';
    }
    if (**(longlong **)(lRam0000000183308868 + 0xb8) != 0) {
      uVar4 = *(undefined4 *)(**(longlong **)(lRam0000000183308868 + 0xb8) + 0x24);
      uVar3 = func_0x000180315580(uRam00000001832d2208);
      ProtocolVersionPacket___ctor__1804fcb20(uVar3,uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00018050da6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x178))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x180));
      return;
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

