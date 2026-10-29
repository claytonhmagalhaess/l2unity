// OptionsWindow___c__DisplayClass46_1___GrupoTextoDano_b__2__1806c17b0 @ 0x1806c17b0

void OptionsWindow___c__DisplayClass46_1___GrupoTextoDano_b__2__1806c17b0
               (longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  if (cRam00000001834b3f4a == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f4a = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x10) < *(uint *)(lVar1 + 0x18)) {
      *(undefined1 *)((longlong)(int)*(uint *)(param_1 + 0x10) + 0x20 + lVar1) = param_2;
      return;
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

