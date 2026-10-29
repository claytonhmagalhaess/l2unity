// LoginClient__OnConnectionSuccess__180529900 @ 0x180529900

void LoginClient__OnConnectionSuccess__180529900(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3794 == '\0') {
    FUN_180315380(0x1832f3868);
    FUN_180315380(0x1833076c0);
    cRam00000001834b3794 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar5 = FUN_182436650(0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  FUN_1823d2370(uRam00000001833076c0);
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(0x183308868);
    cRam00000001834b3021 = '\x01';
  }
  lVar2 = **(longlong **)(lRam0000000183308868 + 0xb8);
  if (lVar2 != 0) {
    if (cRam00000001834b315e == '\0') {
      FUN_180315380(0x1832f3868);
      FUN_180315380(0x1833087b0);
      FUN_180315380(0x1832ddc48);
      cRam00000001834b315e = '\x01';
    }
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uStack_28 = uRam00000001833087b0;
      uStack_20 = 0xffffffffffffffff;
      uStack_18 = 0;
      uVar4 = FUN_1818da970(&uStack_28,0);
      uVar4 = FUN_1817037f0(uRam00000001832ddc48,uVar4,0);
      if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
        func_0x000180315660();
      }
      FUN_1823d2370(uVar4,0);
    }
    plVar1 = *(longlong **)(lVar2 + 0x40);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018047b0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1a8))(plVar1,0,0,*(undefined8 *)(*plVar1 + 0x1b0));
      return;
    }
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

