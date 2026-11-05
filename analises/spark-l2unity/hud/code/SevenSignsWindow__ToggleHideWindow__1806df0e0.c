// SevenSignsWindow__ToggleHideWindow__1806df0e0 @ 0x1806df0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SevenSignsWindow__ToggleHideWindow__1806df0e0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b40c1 == '\0') {
    FUN_180315380(TI_System.Math);
    FUN_180315380(TI_SparkSeteSelos);
    cRam00000001834b40c1 = '\x01';
  }
  if ((char)param_1[0x11] != '\0') {
    lVar5 = *param_1;
    if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806df138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x1c8))(param_1,0,*(undefined8 *)(lVar5 + 0x1d0));
      return;
    }
    (**(code **)(lVar5 + 0x1d8))(param_1,*(undefined8 *)(lVar5 + 0x1e0));
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    iVar1 = *(int *)((longlong)param_1 + 0x8c);
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = func_0x00018189eb20(1,iVar1 + 1,0);
    if (*(int *)(TI_SparkSeteSelos + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33f3 == '\0') {
      FUN_180315380(TI_SparkPacoteLivre,0);
      cRam00000001834b33f3 = '\x01';
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (plVar2 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
       plVar2 != (longlong *)0x0)) {
      lVar5 = func_0x000180315580(TI_SparkPacoteLivre);
      func_0x000180503ed0(lVar5,199,0);
      if ((lVar5 == 0) || (lVar5 = SparkPacoteLivre__C(lVar5,uVar4,0), lVar5 == 0)) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = SparkPacoteLivre__Fim(lVar5,0);
      (**(code **)(*plVar2 + 0x178))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x180));
    }
    return;
  }
  return;
}

