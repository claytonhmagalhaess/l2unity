// OptionsWindow___c___Jogo_b__42_1__1806bb990 @ 0x1806bb990

undefined4 OptionsWindow___c___Jogo_b__42_1__1806bb990(void)

{
  char cVar1;
  
  if (cRam00000001834b3f17 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkParty);
    cRam00000001834b3f17 = '\x01';
  }
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkParty__get_EmParty(0);
  if (cVar1 != '\0') {
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b33c6 == '\0') {
      FUN_180315380(TI_SparkParty);
      cRam00000001834b33c6 = '\x01';
    }
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    return *(undefined4 *)(*(longlong *)(TI_SparkParty + 0xb8) + 0xc);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  return *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x88);
}

