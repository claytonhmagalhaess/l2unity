// OptionsWindow___c___Chat_b__43_2__1806bb5c0 @ 0x1806bb5c0

undefined1 OptionsWindow___c___Chat_b__43_2__1806bb5c0(void)

{
  if (cRam00000001834b3f20 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3f20 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3b34 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3b34 = '\x01';
  }
  if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkChatFiltro__Carrega__1805d2bb0(0);
  return *(undefined1 *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x70);
}

