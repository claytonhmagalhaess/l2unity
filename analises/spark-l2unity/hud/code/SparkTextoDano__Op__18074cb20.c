// SparkTextoDano__Op__18074cb20 @ 0x18074cb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTextoDano__Op__18074cb20(uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b4299 == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b4299 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
  if (lVar1 != 0) {
    if (param_1 < *(uint *)(lVar1 + 0x18)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(TI_SparkOpcoes + 0xb8) >> 8),
                      *(char *)((longlong)(int)param_1 + 0x20 + lVar1) != '\0');
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

