// RestartLocationWindow__ButtonClicked__1806da9f0 @ 0x1806da9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RestartLocationWindow__ButtonClicked__1806da9f0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 auStackX_10 [2];
  
  if (cRam00000001834b40ba == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Restart point clicked: {0}.'");
    cRam00000001834b40ba = '\x01';
  }
  auStackX_10[0] = param_2;
  uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_10);
  uVar3 = System_String__Format(LIT_"'Restart point clicked: {0}.'",uVar3,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(uVar3,0);
  (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 != 0)) {
    GameClientPacketHandler__SendRequestRestartPoint(lVar1,param_2,0);
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

