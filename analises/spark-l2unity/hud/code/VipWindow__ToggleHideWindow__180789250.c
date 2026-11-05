// VipWindow__ToggleHideWindow__180789250 @ 0x180789250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VipWindow__ToggleHideWindow__180789250(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b43a5 == '\0') {
    FUN_180315380(TI_SparkVip);
    cRam00000001834b43a5 = '\x01';
  }
  if ((char)param_1[0x11] != '\0') {
    lVar3 = *param_1;
    if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018078929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x1c8))(param_1,0,*(undefined8 *)(lVar3 + 0x1d0));
      return;
    }
    (**(code **)(lVar3 + 0x1d8))(param_1,*(undefined8 *)(lVar3 + 0x1e0));
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkVip__PedeInfo(0);
    if (cRam00000001834b4417 == '\0') {
      FUN_180315380(TI_SparkVip);
      cRam00000001834b4417 = '\x01';
    }
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x18) != '\0') {
      if (*(int *)(TI_SparkVip + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3511 == '\0') {
        FUN_180315380(TI_SparkVip);
        cRam00000001834b3511 = '\x01';
      }
      if (*(int *)(TI_SparkVip + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3513 == '\0') {
        FUN_180315380(TI_SparkPacoteLivre,0);
        cRam00000001834b3513 = '\x01';
      }
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
         (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
         plVar1 != (longlong *)0x0)) {
        lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
        func_0x000180503ed0(lVar3,0xd0,0);
        if ((lVar3 == 0) || (lVar3 = SparkPacoteLivre__H(lVar3,0x106,0), lVar3 == 0)) {
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
  }
  return;
}

