// SparkRefinoWindow__HideWindow__1805b4ae0 @ 0x1805b4ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__HideWindow__1805b4ae0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3a21 == '\0') {
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_SparkForjaEfeitos);
    FUN_180315380(MD_SparkRefinoWindow._HideWindow_b__32_0);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b3a21 = '\x01';
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
    SparkRefinoWindow__TerminaEfeito(param_1,0);
    if ((param_2 == '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = func_0x000180315580(TI_System.Func<bool>);
      FUN_1814af410(uVar2,param_1,MD_SparkRefinoWindow._HideWindow_b__32_0,0);
      if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkForjaEfeitos__Fecha(uVar1,uVar2,0);
    }
  }
  return;
}

