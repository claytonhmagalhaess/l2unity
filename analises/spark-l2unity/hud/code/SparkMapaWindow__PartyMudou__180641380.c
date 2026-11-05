// SparkMapaWindow__PartyMudou__180641380 @ 0x180641380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PartyMudou__180641380(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (cRam00000001834b3d39 == '\0') {
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkParty);
    cRam00000001834b3d39 = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = SparkParty__get_EmParty(0);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkEstilo__Liga__180720c80(uVar1,uVar2,0);
  if (*(char *)(param_1 + 0x38) == '\0') {
    SparkMapaWindow__PosicionaJogador__180643a60(param_1,0);
  }
  return;
}

