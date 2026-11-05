// SparkQuestWindow__ShowWindow__1806e4a10 @ 0x1806e4a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestWindow__ShowWindow__1806e4a10(undefined8 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b4061 == '\0') {
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b4061 = '\x01';
  }
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  SparkQuestWindow__Redesenha(param_1,0);
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33b3 == '\0') {
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b33b3 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
  func_0x000180503ed0(lVar3,99,0);
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
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

