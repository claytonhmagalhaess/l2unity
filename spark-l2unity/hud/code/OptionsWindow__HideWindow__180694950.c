// OptionsWindow__HideWindow__180694950 @ 0x180694950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__HideWindow__180694950(longlong param_1,char param_2)

{
  if (cRam00000001834b3e7b == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b3e7b = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(param_1 + 0xd8),0);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      func_0x000180314690(param_1 + 0xd8,0);
    }
    if (param_2 == '\0') {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkOpcoes__Recarrega__1804a6010(0);
      SparkOpcoes__AplicaAudio__1804a25a0(0);
      SparkOpcoes__AplicaEfeitos__1804a2890(0);
      SparkOpcoes__AplicaInterface__1804a2eb0(0);
      L2PopupWindow__HideWindow__1807780b0(param_1,0,0);
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
      }
    }
    else {
      L2PopupWindow__HideWindow__1807780b0(param_1,param_2,0);
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

