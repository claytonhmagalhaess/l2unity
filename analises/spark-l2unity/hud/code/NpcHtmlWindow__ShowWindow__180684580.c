// NpcHtmlWindow__ShowWindow__180684580 @ 0x180684580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ShowWindow__180684580(undefined8 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b3e41 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3e41 = '\x01';
  }
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
      L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
      if (DAT_1834b3801 == '\0') {
        FUN_180315380(TI_ShopWindow);
        DAT_1834b3801 = '\x01';
      }
      plVar1 = (longlong *)**(longlong **)(TI_ShopWindow + 0xb8);
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180684674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

