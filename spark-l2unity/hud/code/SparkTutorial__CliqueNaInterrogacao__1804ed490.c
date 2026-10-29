// SparkTutorial__CliqueNaInterrogacao__1804ed490 @ 0x1804ed490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorial__CliqueNaInterrogacao__1804ed490(undefined4 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b33e1 == '\0') {
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(TI_SparkTutorial);
    cRam00000001834b33e1 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
  func_0x000180503ed0(lVar3,0x7d,0);
  if (lVar3 != 0) {
    lVar3 = SparkPacoteLivre__D(lVar3,param_1,0);
    if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
       plVar1 != (longlong *)0x0)) {
      if (lVar3 == 0) goto code_r0x0001804ed57d;
      uVar4 = SparkPacoteLivre__Fim(lVar3,0);
      (**(code **)(*plVar1 + 0x178))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x180));
    }
    return;
  }
code_r0x0001804ed57d:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

