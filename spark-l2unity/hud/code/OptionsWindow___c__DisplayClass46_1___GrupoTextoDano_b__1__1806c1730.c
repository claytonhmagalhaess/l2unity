// OptionsWindow___c__DisplayClass46_1___GrupoTextoDano_b__1__1806c1730 @ 0x1806c1730

undefined8 OptionsWindow___c__DisplayClass46_1___GrupoTextoDano_b__1__1806c1730(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3f49 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f49 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return CONCAT71((int7)(int3)(uVar1 >> 8),
                      *(char *)((longlong)(int)uVar1 + 0x20 + lVar2) != '\0');
    }
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}

