// OptionsWindow___c__DisplayClass70_0___Barra_b__4__1806c5550 @ 0x1806c5550

void OptionsWindow___c__DisplayClass70_0___Barra_b__4__1806c5550(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if (cRam00000001834b3f65 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerMoveEvent>.get_localPosition);
    cRam00000001834b3f65 = '\x01';
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (param_2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    OptionsWindow___c__DisplayClass70_0___Barra_g__Poe_2__1806c5750
              (param_1,*(undefined4 *)(param_2 + 0xa8),0);
  }
  return;
}

