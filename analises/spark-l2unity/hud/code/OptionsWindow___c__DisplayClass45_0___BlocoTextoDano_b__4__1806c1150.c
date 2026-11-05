// OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__4__1806c1150 @ 0x1806c1150

void OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__4__1806c1150
               (longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if (cRam00000001834b3f47 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_button);
    FUN_180315380(LIT_"'click_'");
    cRam00000001834b3f47 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x88) == 0) {
      *(bool *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) == '\0';
      OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_g__Pinta_1__1806c1340(param_1,0);
      if (cRam00000001834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        cRam00000001834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound
                  (**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_'",0);
      }
    }
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

