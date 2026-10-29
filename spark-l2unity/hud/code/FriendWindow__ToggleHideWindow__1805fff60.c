// FriendWindow__ToggleHideWindow__1805fff60 @ 0x1805fff60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FriendWindow__ToggleHideWindow__1805fff60(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3bff == '\0') {
    FUN_180315380(TI_SparkAmigos);
    cRam00000001834b3bff = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  lVar3 = *param_1;
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001805fffa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x1c8))(param_1,0,*(undefined8 *)(lVar3 + 0x1d0));
    return;
  }
  (**(code **)(lVar3 + 0x1d8))(param_1,*(undefined8 *)(lVar3 + 0x1e0));
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b488e == '\0') {
    FUN_180315380(TI_SparkAmigos);
    FUN_180315380(TI_SparkPacoteLivre);
    cRam00000001834b488e = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
  func_0x000180503ed0(lVar3,0x60,0);
  if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = SparkPacoteLivre__Fim(lVar3,0);
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x180));
  }
  return;
}

