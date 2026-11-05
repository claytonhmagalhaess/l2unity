// OptionsWindow___c___Video_b__37_84__1806bde90 @ 0x1806bde90

int OptionsWindow___c___Video_b__37_84__1806bde90(void)

{
  int iVar1;
  
  if (cRam00000001834b3ef5 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<int>);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ef5 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar1 = FUN_1809dff10(*(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x150),
                        *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18),
                        MR_System.Array.IndexOf<int>);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

