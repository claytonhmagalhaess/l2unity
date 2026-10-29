// ShopWindow__HideWindow__1806fbe90 @ 0x1806fbe90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopWindow__HideWindow__1806fbe90(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  
  if (cRam00000001834b40fa == '\0') {
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b40fa = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    L2PopupWindow__HideWindow__1807780b0(param_1,param_2,0);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
      for (uVar4 = 0; (int)uVar4 < *(int *)(lVar1 + 0x18); uVar4 = uVar4 + 1) {
        if (*(uint *)(lVar1 + 0x18) <= uVar4) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
        if (lVar2 != 0) {
          ShopTab__Limpa(lVar2,0);
        }
      }
    }
    if (param_2 == '\0') {
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) == 0) goto DAT_1806fbfb4;
      AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
    }
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
DAT_1806fbfb4:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    L2GameUI__WindowClosed__180775fc0(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  return;
}

