// SparkCraftWindow__HideWindow__1805f0ad0 @ 0x1805f0ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__HideWindow__1805f0ad0(longlong param_1,char param_2)

{
  if (cRam00000001834b3ba8 == '\0') {
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b3ba8 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    L2PopupWindow__HideWindow__1807780b0(param_1,param_2,0);
    if (param_2 == '\0') {
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
      }
    }
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
      L2GameUI__WindowClosed__180775fc0(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
    }
    if (((*(char *)(param_1 + 0x88) != '\0') && (*(int *)(param_1 + 0x8c) == 1)) &&
       (*(char *)(param_1 + 0x150) == '\0')) {
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkCraft__SaiDaMontagem__1807e34c0(0);
    }
  }
  return;
}

