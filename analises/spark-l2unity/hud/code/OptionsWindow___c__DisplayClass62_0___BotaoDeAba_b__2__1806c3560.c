// OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__2__1806c3560 @ 0x1806c3560

void OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__2__1806c3560(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001806c357d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

