// SparkRadarWindow__ToggleHideWindow__1806eafd0 @ 0x1806eafd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__ToggleHideWindow__1806eafd0
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b408d == '\0') {
    FUN_180315380(LIT_"'window_close'");
    FUN_180315380(LIT_"'window_open'");
    FUN_180315380(LIT_"'spark.radar.aberto'");
    cRam00000001834b408d = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  lVar1 = *param_1;
  if ((char)param_1[7] == '\0') {
    (**(code **)(lVar1 + 0x1c8))(param_1,0,*(undefined8 *)(lVar1 + 0x1d0));
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    lVar1 = **(longlong **)(TI_AudioManager + 0xb8);
    uVar4 = LIT_"'window_close'";
  }
  else {
    (**(code **)(lVar1 + 0x1d8))(param_1,*(undefined8 *)(lVar1 + 0x1e0));
    if (DAT_1834b301f == '\0') {
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    lVar1 = **(longlong **)(TI_AudioManager + 0xb8);
    uVar4 = LIT_"'window_open'";
  }
  if (lVar1 != 0) {
    AudioManager__PlayUISound(lVar1,uVar4,0);
  }
  cVar3 = UnityEngine_PlayerPrefs__TrySetInt(LIT_"'spark.radar.aberto'",(char)param_1[7] == '\0',0);
  if (cVar3 != '\0') {
    return;
  }
  uVar4 = func_0x0001803153a0(TI_UnityEngine.PlayerPrefsException);
  uVar4 = func_0x000180315580(uVar4);
  uVar5 = func_0x0001803153a0(LIT_"'Could not store preference value'");
  UnityEngine_PlayerPrefsException___ctor(uVar4,uVar5,0,param_4,unaff_RBX);
  uVar5 = func_0x0001803153a0(MD_UnityEngine.PlayerPrefs.SetInt);
  FUN_180315590(uVar4,uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

