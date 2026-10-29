// OptionsWindow__get_Instance__1806a24e0 @ 0x1806a24e0

undefined8 OptionsWindow__get_Instance__1806a24e0(void)

{
  if (cRam00000001834b3e75 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b3e75 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660(TI_OptionsWindow);
  }
  return **(undefined8 **)(TI_OptionsWindow + 0xb8);
}

