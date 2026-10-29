// OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__4__1806c3620 @ 0x1806c3620

ulonglong OptionsWindow___c__DisplayClass62_0___BotaoDeAba_b__4__1806c3620(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),
                    *(int *)(*(longlong *)(param_1 + 0x10) + 0x8c) == *(int *)(param_1 + 0x18));
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

