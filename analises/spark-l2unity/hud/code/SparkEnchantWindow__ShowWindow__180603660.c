// SparkEnchantWindow__ShowWindow__180603660 @ 0x180603660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantWindow__ShowWindow__180603660(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3bce == '\0') {
    FUN_180315380(TI_SparkForjaEfeitos);
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3bce = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x38);
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
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkForjaEfeitos__Abre(uVar2,0);
  }
  return;
}

