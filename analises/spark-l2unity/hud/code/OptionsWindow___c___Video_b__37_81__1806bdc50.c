// OptionsWindow___c___Video_b__37_81__1806bdc50 @ 0x1806bdc50

void OptionsWindow___c___Video_b__37_81__1806bdc50(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  if (cRam00000001834b3ef2 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3ef2 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x148);
  if (lVar1 != 0) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) =
           *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)param_2 * 4);
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

