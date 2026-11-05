// SparkTextoDano__get_Ligado__1807507c0 @ 0x1807507c0

ulonglong SparkTextoDano__get_Ligado__1807507c0(void)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b4298 == '\0') {
    FUN_180315380();
    cRam00000001834b4298 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
  if (lVar1 != 0) {
    uVar4 = 0;
    while( true ) {
      uVar3 = (uint)uVar4;
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) {
        return uVar4 & 0xffffffffffffff00;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
      if (*(char *)((longlong)(int)uVar3 + 0x20 + lVar1) != '\0') {
        return CONCAT71((int7)(int3)(uVar4 >> 8),1);
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    }
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

