// SparkCraft__SaiDaMontagem__1807e34c0 @ 0x1807e34c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraft__SaiDaMontagem__1807e34c0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b46e3 == '\0') {
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(TI_SparkPacoteLivre);
    cRam00000001834b46e3 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
  func_0x000180503ed0(lVar3,0xb3,0);
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
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

