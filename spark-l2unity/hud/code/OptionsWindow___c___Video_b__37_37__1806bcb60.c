// OptionsWindow___c___Video_b__37_37__1806bcb60 @ 0x1806bcb60

void OptionsWindow___c___Video_b__37_37__1806bcb60(undefined8 param_1,undefined4 param_2)

{
  if (cRam00000001834b3ec9 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ec9 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x58) = param_2;
  return;
}

