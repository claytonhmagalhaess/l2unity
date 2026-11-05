// SparkFindWindow__HideWindow__18075c210 @ 0x18075c210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFindWindow__HideWindow__18075c210(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  
  if (cRam00000001834b4343 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b4343 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_L2GameUI + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if (cVar3 != '\0') {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined1 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) = 0;
    }
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
  }
  return;
}

