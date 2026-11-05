// OptionsWindow___c___Video_b__37_56__1806bd300 @ 0x1806bd300

void OptionsWindow___c___Video_b__37_56__1806bd300(undefined8 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  if (cRam00000001834b3edb == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3edb = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4a) = param_2;
  if (cRam00000001834b3290 == '\0') {
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkMultidao);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3290 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4a) == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar1 = SparkMultidao__get_HardwareSuporta(0);
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDesempenho);
    *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x15) = uVar1;
    return;
  }
  *(undefined1 *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x15) = uVar1;
  return;
}

